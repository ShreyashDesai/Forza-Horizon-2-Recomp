#include "forzahorizon2_funcs.14.h"

DEFINE_REX_FUNC(sub_88050148) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050148);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050148;
	ctx.current_instruction = 0x88050148;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,64(r11)
	ctx.current_instruction = 0x88050150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_23) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050834);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050834;
	ctx.current_instruction = 0x88050834;
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

DEFINE_REX_FUNC(sub_88051360) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88051360);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051360;
	ctx.current_instruction = 0x88051360;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x88051300
	sub_88051300(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88051ED0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88051ED0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051ED0;
	ctx.current_instruction = 0x88051ED0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x88051f1c
	if (ctx.cr6.eq) goto loc_88051F1C;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x88051f1c
	if (ctx.cr6.eq) goto loc_88051F1C;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x88051efc
	if (!ctx.cr6.eq) goto loc_88051EFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x88051c80
	sub_88051C80(ctx, base);
	return;
loc_88051EFC:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x88051f14
	if (ctx.cr6.eq) goto loc_88051F14;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x88051f14
	if (ctx.cr6.eq) goto loc_88051F14;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x88051d50
	sub_88051D50(ctx, base);
	return;
loc_88051F14:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x880516b8
	sub_880516B8(ctx, base);
	return;
loc_88051F1C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x880515c8
	sub_880515C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88052A38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052A38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052A38) {
			switch (rex_dispatch_address) {
				case 0x88052A54:
				case 0x88052A74:
				case 0x88052A8C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052A38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052A54: goto loc_88052A54;
		case 0x88052A74: goto loc_88052A74;
		case 0x88052A8C: goto loc_88052A8C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88052A3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88052A40;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88052A44;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88052A48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880509a8
	ctx.lr = 0x88052A54;
	sub_880509A8(ctx, base);
loc_88052A54:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,1400
	ctx.r31.s64 = ctx.r11.s64 + 1400;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// beq 0x88052a6c
	if (ctx.cr0.eq) goto loc_88052A6C;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_88052A6C:
	// stw r30,0(r11)
	ctx.current_instruction = 0x88052A6C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x880509a8
	ctx.lr = 0x88052A74;
	sub_880509A8(ctx, base);
loc_88052A74:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq 0x88052a84
	if (ctx.cr0.eq) goto loc_88052A84;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_88052A84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052958
	ctx.lr = 0x88052A8C;
	sub_88052958(ctx, base);
loc_88052A8C:
	// stw r3,0(r7)
	ctx.current_instruction = 0x88052A8C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88052A94;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88052A9C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88052AA0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880576C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880576C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880576C8) {
			switch (rex_dispatch_address) {
				case 0x88057870:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880576C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057870: goto loc_88057870;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880576CC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880576D0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,128(r3)
	ctx.current_instruction = 0x880576D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f9,140(r3)
	ctx.current_instruction = 0x880576D8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.current_instruction = 0x880576DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f12,132(r3)
	ctx.current_instruction = 0x880576E0;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,136(r3)
	ctx.current_instruction = 0x880576E8;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r9,80(r1)
	ctx.current_instruction = 0x880576F4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x880576F8;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	ctx.current_instruction = 0x880576FC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.current_instruction = 0x88057700;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addi r11,r11,6732
	ctx.r11.s64 = ctx.r11.s64 + 6732;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fdivs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x88057750
	if (!ctx.cr6.gt) goto loc_88057750;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,6728(r10)
	ctx.current_instruction = 0x8805772C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r11)
	ctx.current_instruction = 0x88057730;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fdivs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f10,f12,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// b 0x88057774
	goto loc_88057774;
loc_88057750:
	// fmuls f8,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,6728(r10)
	ctx.current_instruction = 0x88057754;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r11)
	ctx.current_instruction = 0x88057758;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
loc_88057774:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	ctx.current_instruction = 0x88057778;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8805777C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	ctx.current_instruction = 0x88057784;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x88057788;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	ctx.current_instruction = 0x88057790;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.current_instruction = 0x88057794;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x8805779C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880577A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// stfs f0,156(r3)
	ctx.current_instruction = 0x880577A8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stfs f0,160(r3)
	ctx.current_instruction = 0x880577B0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,180(r3)
	ctx.current_instruction = 0x880577B4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r9,100(r3)
	ctx.current_instruction = 0x880577B8;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stfs f0,196(r3)
	ctx.current_instruction = 0x880577C0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stfs f0,216(r3)
	ctx.current_instruction = 0x880577C8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// std r7,88(r1)
	ctx.current_instruction = 0x880577CC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.current_instruction = 0x880577D0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	ctx.current_instruction = 0x880577D4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f8,88(r1)
	ctx.current_instruction = 0x880577D8;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	ctx.current_instruction = 0x880577DC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f7,88(r1)
	ctx.current_instruction = 0x880577E0;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	ctx.current_instruction = 0x880577E4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f5,88(r1)
	ctx.current_instruction = 0x880577E8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// lfs f13,6708(r7)
	ctx.current_instruction = 0x880577F8;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// stfs f13,176(r3)
	ctx.current_instruction = 0x88057800;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// stfs f13,200(r3)
	ctx.current_instruction = 0x88057808;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// stfs f1,164(r3)
	ctx.current_instruction = 0x88057810;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f1,224(r3)
	ctx.current_instruction = 0x88057814;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r8,104(r3)
	ctx.current_instruction = 0x88057818;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stfs f1,244(r3)
	ctx.current_instruction = 0x8805781C;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stw r11,96(r3)
	ctx.current_instruction = 0x88057820;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f13,220(r3)
	ctx.current_instruction = 0x88057824;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r10,108(r3)
	ctx.current_instruction = 0x88057828;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stfs f13,236(r3)
	ctx.current_instruction = 0x8805782C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,240(r3)
	ctx.current_instruction = 0x88057830;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f13,256(r3)
	ctx.current_instruction = 0x88057834;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,144(r3)
	ctx.current_instruction = 0x8805783C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f12,184(r3)
	ctx.current_instruction = 0x88057844;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,148(r3)
	ctx.current_instruction = 0x8805784C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f11,168(r3)
	ctx.current_instruction = 0x88057850;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f10,188(r3)
	ctx.current_instruction = 0x88057854;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,204(r3)
	ctx.current_instruction = 0x88057858;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f10,208(r3)
	ctx.current_instruction = 0x8805785C;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f11,228(r3)
	ctx.current_instruction = 0x88057860;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,248(r3)
	ctx.current_instruction = 0x88057864;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,260(r3)
	ctx.current_instruction = 0x88057868;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// bl 0x88057410
	ctx.lr = 0x88057870;
	sub_88057410(ctx, base);
loc_88057870:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057878;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BFF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BFF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BFF0) {
			switch (rex_dispatch_address) {
				case 0x8805C008:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BFF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C008: goto loc_8805C008;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805BFF4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805BFF8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805BFFC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x8805C008;
	sub_88061FB8(ctx, base);
loc_8805C008:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,9192
	ctx.r8.s64 = ctx.r10.s64 + 9192;
	// std r11,48(r31)
	ctx.current_instruction = 0x8805C018;
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// stw r9,44(r31)
	ctx.current_instruction = 0x8805C01C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	ctx.current_instruction = 0x8805C024;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,56(r31)
	ctx.current_instruction = 0x8805C028;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x8805C02C;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805C034;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805C03C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805D980) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805D980);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D980;
	ctx.current_instruction = 0x8805D980;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8805d9b8
	if (ctx.cr6.eq) goto loc_8805D9B8;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8805D988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805d9b8
	if (ctx.cr6.eq) goto loc_8805D9B8;
	// lwz r11,224(r5)
	ctx.current_instruction = 0x8805D994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805d9b0
	if (ctx.cr6.eq) goto loc_8805D9B0;
	// lwz r11,108(r5)
	ctx.current_instruction = 0x8805D9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805D9A8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805D9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805D9B8:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805D9C4;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,9564
	ctx.r4.s64 = ctx.r9.s64 + 9564;
	// lwz r3,2840(r10)
	ctx.current_instruction = 0x8805D9D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 2840);
	// b 0x8806c290
	sub_8806C290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805E6D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805E6D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805E6D8) {
			switch (rex_dispatch_address) {
				case 0x8805E6E0:
				case 0x8805E754:
				case 0x8805E780:
				case 0x8805E7D8:
				case 0x8805E80C:
				case 0x8805E830:
				case 0x8805E858:
				case 0x8805E87C:
				case 0x8805E8A4:
				case 0x8805E8CC:
				case 0x8805E8E4:
				case 0x8805E8FC:
				case 0x8805E914:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805E6D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805E6E0: goto loc_8805E6E0;
		case 0x8805E754: goto loc_8805E754;
		case 0x8805E780: goto loc_8805E780;
		case 0x8805E7D8: goto loc_8805E7D8;
		case 0x8805E80C: goto loc_8805E80C;
		case 0x8805E830: goto loc_8805E830;
		case 0x8805E858: goto loc_8805E858;
		case 0x8805E87C: goto loc_8805E87C;
		case 0x8805E8A4: goto loc_8805E8A4;
		case 0x8805E8CC: goto loc_8805E8CC;
		case 0x8805E8E4: goto loc_8805E8E4;
		case 0x8805E8FC: goto loc_8805E8FC;
		case 0x8805E914: goto loc_8805E914;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805E6E0;
	__savegprlr_27(ctx, base);
loc_8805E6E0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8805E6E0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,552(r3)
	ctx.current_instruction = 0x8805E6E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	ctx.current_instruction = 0x8805E6EC;
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r5,216(r1)
	ctx.current_instruction = 0x8805E6F0;
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,224(r1)
	ctx.current_instruction = 0x8805E6F8;
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lwz r28,264(r3)
	ctx.current_instruction = 0x8805E6FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// std r7,232(r1)
	ctx.current_instruction = 0x8805E700;
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// beq cr6,0x8805e788
	if (ctx.cr6.eq) goto loc_8805E788;
	// lwz r3,232(r1)
	ctx.current_instruction = 0x8805E708;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8805e940
	if (!ctx.cr6.eq) goto loc_8805E940;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x8805E714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e940
	if (!ctx.cr6.eq) goto loc_8805E940;
	// lwz r11,280(r31)
	ctx.current_instruction = 0x8805E720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8805e734
	if (!ctx.cr6.eq) goto loc_8805E734;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8805E734:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8805e788
	if (!ctx.cr6.gt) goto loc_8805E788;
	// lwz r11,568(r31)
	ctx.current_instruction = 0x8805E73C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.current_instruction = 0x8805E744;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8807cf10
	ctx.lr = 0x8805E754;
	sub_8807CF10(ctx, base);
loc_8805E754:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8805e788
	if (!ctx.cr6.eq) goto loc_8805E788;
loc_8805E75C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8805e788
	if (ctx.cr6.eq) goto loc_8805E788;
	// lwz r11,568(r31)
	ctx.current_instruction = 0x8805E764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.current_instruction = 0x8805E770;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8807cf10
	ctx.lr = 0x8805E780;
	sub_8807CF10(ctx, base);
loc_8805E780:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8805e75c
	if (ctx.cr6.eq) goto loc_8805E75C;
loc_8805E788:
	// lwz r11,96(r31)
	ctx.current_instruction = 0x8805E788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,560(r31)
	ctx.current_instruction = 0x8805E798;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,568(r31)
	ctx.current_instruction = 0x8805E79C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f0,1488(r10)
	ctx.current_instruction = 0x8805E7A4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// stfd f0,88(r1)
	ctx.current_instruction = 0x8805E7A8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	ctx.current_instruction = 0x8805E7AC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,104(r1)
	ctx.current_instruction = 0x8805E7B0;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f0,112(r1)
	ctx.current_instruction = 0x8805E7B4;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,16(r3)
	ctx.current_instruction = 0x8805E7B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8805e93c
	if (ctx.cr6.gt) goto loc_8805E93C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8807c288
	ctx.lr = 0x8805E7D8;
	sub_8807C288(ctx, base);
loc_8805E7D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x8805E7EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e818
	if (!ctx.cr6.eq) goto loc_8805E818;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8805E7FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8805E800;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E804;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E80C;
	sub_880714E8(ctx, base);
loc_8805E80C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	ctx.current_instruction = 0x8805E810;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E818:
	// lwz r10,568(r31)
	ctx.current_instruction = 0x8805E818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r11)
	ctx.current_instruction = 0x8805E824;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// bl 0x8805dff0
	ctx.lr = 0x8805E830;
	sub_8805DFF0(ctx, base);
loc_8805E830:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E830;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x8805E83C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e864
	if (!ctx.cr6.eq) goto loc_8805E864;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8805E848;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8805E84C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E850;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E858;
	sub_880714E8(ctx, base);
loc_8805E858:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	ctx.current_instruction = 0x8805E85C;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E864:
	// lwz r10,568(r31)
	ctx.current_instruction = 0x8805E864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.current_instruction = 0x8805E870;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// bl 0x8805dff0
	ctx.lr = 0x8805E87C;
	sub_8805DFF0(ctx, base);
loc_8805E87C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E87C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x8805E888;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e8b0
	if (!ctx.cr6.eq) goto loc_8805E8B0;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8805E894;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8805E898;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E89C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E8A4;
	sub_880714E8(ctx, base);
loc_8805E8A4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E8A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	ctx.current_instruction = 0x8805E8A8;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E8B0:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r28,4(r11)
	ctx.current_instruction = 0x8805E8B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E8BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8CC;
	sub_880B28E0(ctx, base);
loc_8805E8CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E8D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8E4;
	sub_880B28E0(ctx, base);
loc_8805E8E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E8EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8FC;
	sub_880B28E0(ctx, base);
loc_8805E8FC:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E904;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E914;
	sub_880B28E0(ctx, base);
loc_8805E914:
	// lfd f0,88(r1)
	ctx.current_instruction = 0x8805E914;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x8805E918;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f12,104(r1)
	ctx.current_instruction = 0x8805E920;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f10,112(r1)
	ctx.current_instruction = 0x8805E928;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fadd f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x8805e93c
	if (ctx.cr6.lt) goto loc_8805E93C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8805E93C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8805E940:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067718) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067718);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067718;
	ctx.current_instruction = 0x88067718;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88067718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x88067724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88067A20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067A20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067A20;
	ctx.current_instruction = 0x88067A20;
	// lwz r11,68(r3)
	ctx.current_instruction = 0x88067A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,52(r3)
	ctx.current_instruction = 0x88067A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067C00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067C00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067C00) {
			switch (rex_dispatch_address) {
				case 0x88067C18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067C00;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067C18: goto loc_88067C18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88067C04;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067C08;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88067C0C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x88067C18;
	sub_88061FB8(ctx, base);
loc_88067C18:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88067C20;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,10744
	ctx.r9.s64 = ctx.r10.s64 + 10744;
	// stw r11,60(r31)
	ctx.current_instruction = 0x88067C2C;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88067C30;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	ctx.current_instruction = 0x88067C34;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,44(r31)
	ctx.current_instruction = 0x88067C38;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x88067C3C;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	ctx.current_instruction = 0x88067C40;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x88067C44;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88067C4C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88067C54;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88068F40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068F40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068F40) {
			switch (rex_dispatch_address) {
				case 0x88068F48:
				case 0x88068F68:
				case 0x88068F84:
				case 0x88068FA0:
				case 0x88068FB4:
				case 0x88068FC8:
				case 0x88068FDC:
				case 0x88068FF0:
				case 0x88069004:
				case 0x88069018:
				case 0x88069030:
				case 0x8806904C:
				case 0x88069064:
				case 0x8806907C:
				case 0x88069094:
				case 0x880690AC:
				case 0x880690E0:
				case 0x880690F4:
				case 0x88069108:
				case 0x8806911C:
				case 0x88069130:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068F40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88068F48: goto loc_88068F48;
		case 0x88068F68: goto loc_88068F68;
		case 0x88068F84: goto loc_88068F84;
		case 0x88068FA0: goto loc_88068FA0;
		case 0x88068FB4: goto loc_88068FB4;
		case 0x88068FC8: goto loc_88068FC8;
		case 0x88068FDC: goto loc_88068FDC;
		case 0x88068FF0: goto loc_88068FF0;
		case 0x88069004: goto loc_88069004;
		case 0x88069018: goto loc_88069018;
		case 0x88069030: goto loc_88069030;
		case 0x8806904C: goto loc_8806904C;
		case 0x88069064: goto loc_88069064;
		case 0x8806907C: goto loc_8806907C;
		case 0x88069094: goto loc_88069094;
		case 0x880690AC: goto loc_880690AC;
		case 0x880690E0: goto loc_880690E0;
		case 0x880690F4: goto loc_880690F4;
		case 0x88069108: goto loc_88069108;
		case 0x8806911C: goto loc_8806911C;
		case 0x88069130: goto loc_88069130;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88068F48;
	__savegprlr_29(ctx, base);
loc_88068F48:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88068F48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.current_instruction = 0x88068F5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068F68:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88068f8c
	if (!ctx.cr6.eq) goto loc_88068F8C;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.current_instruction = 0x88068F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068F84:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x88069038
	if (ctx.cr6.eq) goto loc_88069038;
loc_88068F8C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x88068F94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068FA0:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88068FA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,180(r9)
	ctx.current_instruction = 0x88068FA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 180);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88068FB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068FB4:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88068FB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,184(r7)
	ctx.current_instruction = 0x88068FBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88068FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068FC8:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x88068FC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r5)
	ctx.current_instruction = 0x88068FD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 188);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x88068FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068FDC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.current_instruction = 0x88068FE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068FF0:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88068FF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.current_instruction = 0x88068FF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069004:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88069004;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x88069008;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806900C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069018:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x88069018;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.current_instruction = 0x88069024;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x88069030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069030:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88069130
	if (ctx.cr6.lt) goto loc_88069130;
loc_88069038:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88069038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88069040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806904C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806904C:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806904C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,288(r9)
	ctx.current_instruction = 0x88069058;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069064:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88069064;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,292(r7)
	ctx.current_instruction = 0x88069070;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806907C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806907C:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x8806907C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r5)
	ctx.current_instruction = 0x88069088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069094:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88069094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,268(r10)
	ctx.current_instruction = 0x880690A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880690AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880690AC:
	// stw r30,244(r31)
	ctx.current_instruction = 0x880690AC;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,248(r31)
	ctx.current_instruction = 0x880690B4;
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,252(r31)
	ctx.current_instruction = 0x880690BC;
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r8,240(r31)
	ctx.current_instruction = 0x880690C0;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r30,232(r31)
	ctx.current_instruction = 0x880690C4;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	ctx.current_instruction = 0x880690C8;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,256(r31)
	ctx.current_instruction = 0x880690CC;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r7,0(r31)
	ctx.current_instruction = 0x880690D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,228(r7)
	ctx.current_instruction = 0x880690D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880690E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880690E0:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x880690E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,232(r5)
	ctx.current_instruction = 0x880690E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 232);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x880690F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880690F4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880690F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,236(r11)
	ctx.current_instruction = 0x880690FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069108:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88069108;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,240(r9)
	ctx.current_instruction = 0x88069110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806911C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806911C:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x8806911C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.current_instruction = 0x88069124;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806F8C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806F8C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806F8C8) {
			switch (rex_dispatch_address) {
				case 0x8806F8D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F8C8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8806F8D0: goto loc_8806F8D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8806F8D0;
	__savegprlr_24(ctx, base);
loc_8806F8D0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8806fae0
	if (ctx.cr6.eq) goto loc_8806FAE0;
	// lbz r10,0(r4)
	ctx.current_instruction = 0x8806F8D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lbz r9,1(r4)
	ctx.current_instruction = 0x8806F8E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// li r8,1
	ctx.r8.s64 = 1;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,2(r4)
	ctx.current_instruction = 0x8806F8EC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r10,r11,3824
	ctx.r10.s64 = ctx.r11.s64 + 3824;
	// lbz r4,3(r4)
	ctx.current_instruction = 0x8806F8F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,0(r5)
	ctx.current_instruction = 0x8806F8FC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwz r11,8(r10)
	ctx.current_instruction = 0x8806F908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r11,2,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r4,2,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3;
	// and r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806f948
	if (ctx.cr6.eq) goto loc_8806F948;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8806f940
	if (!ctx.cr6.eq) goto loc_8806F940;
	// stw r8,4(r5)
	ctx.current_instruction = 0x8806F938;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// b 0x8806f94c
	goto loc_8806F94C;
loc_8806F940:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8806f94c
	if (!ctx.cr6.eq) goto loc_8806F94C;
loc_8806F948:
	// stw r9,4(r5)
	ctx.current_instruction = 0x8806F948;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_8806F94C:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8806F94C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// and r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 & ctx.r7.u64;
	// rlwinm r7,r11,12,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// stw r9,8(r5)
	ctx.current_instruction = 0x8806F968;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// rlwinm r4,r11,13,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8806F970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r31,r11,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// stw r6,16(r5)
	ctx.current_instruction = 0x8806F980;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// rlwinm r6,r11,15,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8806F988;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r28,r11,20,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r3,20(r5)
	ctx.current_instruction = 0x8806F998;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r3.u32);
	// rlwinm r3,r11,18,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8806F9A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// rlwinm r27,r11,22,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r7,24(r5)
	ctx.current_instruction = 0x8806F9B0;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r7.u32);
	// rlwinm r7,r11,21,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// rlwinm r26,r11,23,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r25,r11,26,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// rlwinm r30,r11,16,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// rlwinm r29,r11,19,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// rlwinm r9,r11,27,0,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF8000000;
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806F9D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwinm r24,r24,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 27) & 0x1;
	// stw r4,28(r5)
	ctx.current_instruction = 0x8806F9E0;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806F9E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 & ctx.r31.u64;
	// stw r4,32(r5)
	ctx.current_instruction = 0x8806F9F0;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806F9F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r6,36(r5)
	ctx.current_instruction = 0x8806FA00;
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r6.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 & ctx.r4.u64;
	// stw r11,40(r5)
	ctx.current_instruction = 0x8806FA10;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x8806FA14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r11,2,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// and r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 & ctx.r6.u64;
	// stw r4,44(r5)
	ctx.current_instruction = 0x8806FA20;
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r4.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 & ctx.r3.u64;
	// stw r11,48(r5)
	ctx.current_instruction = 0x8806FA30;
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r4,r28,r6
	ctx.r4.u64 = ctx.r28.u64 & ctx.r6.u64;
	// stw r4,52(r5)
	ctx.current_instruction = 0x8806FA40;
	REX_STORE_U32(ctx.r5.u32 + 52, ctx.r4.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 & ctx.r3.u64;
	// stw r11,56(r5)
	ctx.current_instruction = 0x8806FA50;
	REX_STORE_U32(ctx.r5.u32 + 56, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 & ctx.r7.u64;
	// stw r6,60(r5)
	ctx.current_instruction = 0x8806FA60;
	REX_STORE_U32(ctx.r5.u32 + 60, ctx.r6.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r3,r26,r4
	ctx.r3.u64 = ctx.r26.u64 & ctx.r4.u64;
	// stw r3,64(r5)
	ctx.current_instruction = 0x8806FA70;
	REX_STORE_U32(ctx.r5.u32 + 64, ctx.r3.u32);
	// lwz r11,12(r10)
	ctx.current_instruction = 0x8806FA74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// and r7,r25,r11
	ctx.r7.u64 = ctx.r25.u64 & ctx.r11.u64;
	// stw r7,68(r5)
	ctx.current_instruction = 0x8806FA80;
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 & ctx.r6.u64;
	// stw r4,76(r5)
	ctx.current_instruction = 0x8806FA90;
	REX_STORE_U32(ctx.r5.u32 + 76, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806FA98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x8806fab4
	if (ctx.cr6.eq) goto loc_8806FAB4;
	// stw r7,80(r5)
	ctx.current_instruction = 0x8806FAAC;
	REX_STORE_U32(ctx.r5.u32 + 80, ctx.r7.u32);
	// b 0x8806fab8
	goto loc_8806FAB8;
loc_8806FAB4:
	// stw r7,84(r5)
	ctx.current_instruction = 0x8806FAB4;
	REX_STORE_U32(ctx.r5.u32 + 84, ctx.r7.u32);
loc_8806FAB8:
	// lwz r11,76(r5)
	ctx.current_instruction = 0x8806FAB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806fad4
	if (!ctx.cr6.eq) goto loc_8806FAD4;
	// lwz r11,84(r5)
	ctx.current_instruction = 0x8806FAC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8806fad8
	if (ctx.cr6.eq) goto loc_8806FAD8;
loc_8806FAD4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8806FAD8:
	// stw r11,72(r5)
	ctx.current_instruction = 0x8806FAD8;
	REX_STORE_U32(ctx.r5.u32 + 72, ctx.r11.u32);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8806FAE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8806FAE4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807AB88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807AB88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807AB88) {
			switch (rex_dispatch_address) {
				case 0x8807ABF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807AB88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807ABF8: goto loc_8807ABF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807AB8C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807AB90;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8807AB94;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,7572(r3)
	ctx.current_instruction = 0x8807AB98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8807abac
	if (!ctx.cr6.lt) goto loc_8807ABAC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807ABAC:
	// stw r11,7572(r31)
	ctx.current_instruction = 0x8807ABAC;
	REX_STORE_U32(ctx.r31.u32 + 7572, ctx.r11.u32);
	// lwz r11,7932(r31)
	ctx.current_instruction = 0x8807ABB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8807abc0
	if (!ctx.cr6.lt) goto loc_8807ABC0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807ABC0:
	// stw r11,7932(r31)
	ctx.current_instruction = 0x8807ABC0;
	REX_STORE_U32(ctx.r31.u32 + 7932, ctx.r11.u32);
	// lwz r11,30924(r31)
	ctx.current_instruction = 0x8807ABC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8807abd4
	if (!ctx.cr6.lt) goto loc_8807ABD4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807ABD4:
	// stw r11,30924(r31)
	ctx.current_instruction = 0x8807ABD4;
	REX_STORE_U32(ctx.r31.u32 + 30924, ctx.r11.u32);
	// lwz r11,30928(r31)
	ctx.current_instruction = 0x8807ABD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30928);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8807abe8
	if (!ctx.cr6.lt) goto loc_8807ABE8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807ABE8:
	// stw r11,30928(r31)
	ctx.current_instruction = 0x8807ABE8;
	REX_STORE_U32(ctx.r31.u32 + 30928, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079c58
	ctx.lr = 0x8807ABF8;
	sub_88079C58(ctx, base);
loc_8807ABF8:
	// lwz r11,6764(r31)
	ctx.current_instruction = 0x8807ABF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6764);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,8172(r31)
	ctx.current_instruction = 0x8807AC04;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x8807ac48
	if (ctx.cr6.eq) goto loc_8807AC48;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807AC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,6764(r31)
	ctx.current_instruction = 0x8807AC14;
	REX_STORE_U32(ctx.r31.u32 + 6764, ctx.r9.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807ac48
	if (!ctx.cr6.eq) goto loc_8807AC48;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807AC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807ac48
	if (!ctx.cr6.eq) goto loc_8807AC48;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807AC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,6744(r31)
	ctx.current_instruction = 0x8807AC30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6744);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8807ac48
	if (!ctx.cr6.lt) goto loc_8807AC48;
	// stw r8,6740(r31)
	ctx.current_instruction = 0x8807AC40;
	REX_STORE_U32(ctx.r31.u32 + 6740, ctx.r8.u32);
	// b 0x8807ac4c
	goto loc_8807AC4C;
loc_8807AC48:
	// stw r9,6740(r31)
	ctx.current_instruction = 0x8807AC48;
	REX_STORE_U32(ctx.r31.u32 + 6740, ctx.r9.u32);
loc_8807AC4C:
	// lwz r11,6740(r31)
	ctx.current_instruction = 0x8807AC4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807acf4
	if (!ctx.cr6.eq) goto loc_8807ACF4;
	// lwz r10,6732(r31)
	ctx.current_instruction = 0x8807AC58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6732);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lwz r11,6752(r31)
	ctx.current_instruction = 0x8807AC60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6752);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,80(r1)
	ctx.current_instruction = 0x8807AC68;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807AC6C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,12424(r7)
	ctx.current_instruction = 0x8807AC74;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 12424);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x8807AC84;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8807AC88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8807ac9c
	if (!ctx.cr6.lt) goto loc_8807AC9C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8807acc4
	goto loc_8807ACC4;
loc_8807AC9C:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12384(r10)
	ctx.current_instruction = 0x8807ACA0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12384);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x8807ACAC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8807ACB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// blt cr6,0x8807acc4
	if (ctx.cr6.lt) goto loc_8807ACC4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8807ACC4:
	// lwz r10,8104(r31)
	ctx.current_instruction = 0x8807ACC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8807acd4
	if (ctx.cr6.gt) goto loc_8807ACD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8807ACD4:
	// lwz r10,676(r31)
	ctx.current_instruction = 0x8807ACD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x8807ace8
	if (!ctx.cr6.gt) goto loc_8807ACE8;
	// li r11,30
	ctx.r11.s64 = 30;
loc_8807ACE8:
	// stw r11,676(r31)
	ctx.current_instruction = 0x8807ACE8;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,672(r31)
	ctx.current_instruction = 0x8807ACEC;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r8,6756(r31)
	ctx.current_instruction = 0x8807ACF0;
	REX_STORE_U32(ctx.r31.u32 + 6756, ctx.r8.u32);
loc_8807ACF4:
	// stw r9,6744(r31)
	ctx.current_instruction = 0x8807ACF4;
	REX_STORE_U32(ctx.r31.u32 + 6744, ctx.r9.u32);
	// stw r9,6752(r31)
	ctx.current_instruction = 0x8807ACF8;
	REX_STORE_U32(ctx.r31.u32 + 6752, ctx.r9.u32);
	// stw r8,6760(r31)
	ctx.current_instruction = 0x8807ACFC;
	REX_STORE_U32(ctx.r31.u32 + 6760, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807AD04;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807AD0C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807DF68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807DF68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807DF68;
	ctx.current_instruction = 0x8807DF68;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807DF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8807e068
	if (!ctx.cr6.eq) goto loc_8807E068;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// stw r4,30832(r3)
	ctx.current_instruction = 0x8807DF78;
	REX_STORE_U32(ctx.r3.u32 + 30832, ctx.r4.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r5,30848(r3)
	ctx.current_instruction = 0x8807DF80;
	REX_STORE_U32(ctx.r3.u32 + 30848, ctx.r5.u32);
	// std r11,-16(r1)
	ctx.current_instruction = 0x8807DF84;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x8807DF88;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	ctx.current_instruction = 0x8807DF8C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8807DF90;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r8,r9,4992
	ctx.r8.s64 = ctx.r9.s64 + 4992;
	// lfd f0,8(r8)
	ctx.current_instruction = 0x8807DFA4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	ctx.current_instruction = 0x8807DFB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807DFB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// rlwinm r6,r7,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r6,30836(r3)
	ctx.current_instruction = 0x8807DFC0;
	REX_STORE_U32(ctx.r3.u32 + 30836, ctx.r6.u32);
	// lfd f0,8(r8)
	ctx.current_instruction = 0x8807DFC4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// fmul f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	ctx.current_instruction = 0x8807DFD0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807DFD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// rlwinm r4,r5,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,30852(r3)
	ctx.current_instruction = 0x8807DFE0;
	REX_STORE_U32(ctx.r3.u32 + 30852, ctx.r4.u32);
	// lfd f0,16(r8)
	ctx.current_instruction = 0x8807DFE4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// fmul f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	ctx.current_instruction = 0x8807DFF0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807DFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,30840(r3)
	ctx.current_instruction = 0x8807E000;
	REX_STORE_U32(ctx.r3.u32 + 30840, ctx.r10.u32);
	// lfd f0,16(r8)
	ctx.current_instruction = 0x8807E004;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// fmul f4,f11,f0
	ctx.f4.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-16(r1)
	ctx.current_instruction = 0x8807E010;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807E014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r7,30856(r3)
	ctx.current_instruction = 0x8807E020;
	REX_STORE_U32(ctx.r3.u32 + 30856, ctx.r7.u32);
	// lfd f0,24(r8)
	ctx.current_instruction = 0x8807E024;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-16(r1)
	ctx.current_instruction = 0x8807E030;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807E034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,30844(r3)
	ctx.current_instruction = 0x8807E040;
	REX_STORE_U32(ctx.r3.u32 + 30844, ctx.r5.u32);
	// lfd f0,24(r8)
	ctx.current_instruction = 0x8807E044;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8807E050;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x8807E054;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r4,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,30860(r3)
	ctx.current_instruction = 0x8807E060;
	REX_STORE_U32(ctx.r3.u32 + 30860, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807E068:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,30832(r3)
	ctx.current_instruction = 0x8807E06C;
	REX_STORE_U64(ctx.r3.u32 + 30832, ctx.r11.u64);
	// std r11,30840(r3)
	ctx.current_instruction = 0x8807E070;
	REX_STORE_U64(ctx.r3.u32 + 30840, ctx.r11.u64);
	// std r11,30848(r3)
	ctx.current_instruction = 0x8807E074;
	REX_STORE_U64(ctx.r3.u32 + 30848, ctx.r11.u64);
	// std r11,30856(r3)
	ctx.current_instruction = 0x8807E078;
	REX_STORE_U64(ctx.r3.u32 + 30856, ctx.r11.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880849F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880849F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880849F0) {
			switch (rex_dispatch_address) {
				case 0x880849F8:
				case 0x88084A48:
				case 0x88084A58:
				case 0x88084A78:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880849F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880849F8: goto loc_880849F8;
		case 0x88084A48: goto loc_88084A48;
		case 0x88084A58: goto loc_88084A58;
		case 0x88084A78: goto loc_88084A78;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880849F8;
	__savegprlr_29(ctx, base);
loc_880849F8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880849F8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88084a80
	if (ctx.cr6.eq) goto loc_88084A80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88084a80
	if (ctx.cr6.eq) goto loc_88084A80;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x88084a28
	if (ctx.cr6.lt) goto loc_88084A28;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// ble cr6,0x88084a30
	if (!ctx.cr6.gt) goto loc_88084A30;
loc_88084A28:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x88084a80
	if (!ctx.cr6.eq) goto loc_88084A80;
loc_88084A30:
	// stw r7,14684(r31)
	ctx.current_instruction = 0x88084A30;
	REX_STORE_U32(ctx.r31.u32 + 14684, ctx.r7.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x88084a50
	if (ctx.cr6.eq) goto loc_88084A50;
	// stw r6,14652(r31)
	ctx.current_instruction = 0x88084A3C;
	REX_STORE_U32(ctx.r31.u32 + 14652, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c9600
	ctx.lr = 0x88084A48;
	sub_880C9600(ctx, base);
loc_88084A48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88084a84
	if (!ctx.cr6.eq) goto loc_88084A84;
loc_88084A50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88061468
	ctx.lr = 0x88084A58;
	sub_88061468(ctx, base);
loc_88084A58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88084a84
	if (!ctx.cr6.eq) goto loc_88084A84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cab60
	ctx.lr = 0x88084A78;
	sub_880CAB60(ctx, base);
loc_88084A78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88084A80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88084A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88084E80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88084E80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88084E80) {
			switch (rex_dispatch_address) {
				case 0x88084E88:
				case 0x88084ED8:
				case 0x88084F9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88084E80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88084E88: goto loc_88084E88;
		case 0x88084ED8: goto loc_88084ED8;
		case 0x88084F9C: goto loc_88084F9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88084E88;
	__savegprlr_26(ctx, base);
loc_88084E88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88084E88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,0(r7)
	ctx.current_instruction = 0x88084E94;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,532(r3)
	ctx.current_instruction = 0x88084E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88084fb8
	if (ctx.cr6.eq) goto loc_88084FB8;
	// lwz r11,68(r3)
	ctx.current_instruction = 0x88084EB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88084fb8
	if (!ctx.cr6.eq) goto loc_88084FB8;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// bne cr6,0x88084ed4
	if (!ctx.cr6.eq) goto loc_88084ED4;
	// lwz r11,64(r3)
	ctx.current_instruction = 0x88084EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88084fb8
	if (!ctx.cr6.eq) goto loc_88084FB8;
loc_88084ED4:
	// bl 0x881ee8e8
	ctx.lr = 0x88084ED8;
	sub_881EE8E8(ctx, base);
loc_88084ED8:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88084fb8
	if (!ctx.cr6.eq) goto loc_88084FB8;
	// addi r11,r29,-27
	ctx.r11.s64 = ctx.r29.s64 + -27;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x88084fc4
	if (ctx.cr6.gt) goto loc_88084FC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88084f28
	if (ctx.cr6.eq) goto loc_88084F28;
	// bdz 0x88084f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88084F20;
	// bdz 0x88084f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88084F18;
	// bdz 0x88084f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88084F10;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x88084f2c
	goto loc_88084F2C;
loc_88084F10:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x88084f2c
	goto loc_88084F2C;
loc_88084F18:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x88084f2c
	goto loc_88084F2C;
loc_88084F20:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x88084f2c
	goto loc_88084F2C;
loc_88084F28:
	// li r11,4
	ctx.r11.s64 = 4;
loc_88084F2C:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// addi r10,r10,4768
	ctx.r10.s64 = ctx.r10.s64 + 4768;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_88084F40:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88084F40;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88084f40
	if (!ctx.cr6.eq) goto loc_88084F40;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	ctx.current_instruction = 0x88084F5C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// blt cr6,0x88084f6c
	if (ctx.cr6.lt) goto loc_88084F6C;
	// li r11,99
	ctx.r11.s64 = 99;
loc_88084F6C:
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88084F70;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88084fc4
	if (ctx.cr6.gt) goto loc_88084FC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,3(r30)
	ctx.current_instruction = 0x88084F80;
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r27.u8);
	// stb r28,0(r30)
	ctx.current_instruction = 0x88084F84;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r28,1(r30)
	ctx.current_instruction = 0x88084F8C;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// stb r11,2(r30)
	ctx.current_instruction = 0x88084F90;
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// lwz r5,0(r31)
	ctx.current_instruction = 0x88084F94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x880547a0
	ctx.lr = 0x88084F9C;
	sub_880547A0(ctx, base);
loc_88084F9C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88084F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r9,4(r10)
	ctx.current_instruction = 0x88084FA8;
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88084FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,0(r31)
	ctx.current_instruction = 0x88084FB4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_88084FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88084FC4:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808F850) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808F850;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808F850) {
			switch (rex_dispatch_address) {
				case 0x8808F858:
				case 0x8808F9C0:
				case 0x8808FA04:
				case 0x8808FA48:
				case 0x8808FA8C:
				case 0x8808FB4C:
				case 0x8808FB90:
				case 0x8808FBD4:
				case 0x8808FC18:
				case 0x8808FCFC:
				case 0x8808FD40:
				case 0x8808FD84:
				case 0x8808FDC8:
				case 0x8808FE88:
				case 0x8808FECC:
				case 0x8808FF10:
				case 0x8808FF54:
				case 0x88090018:
				case 0x8809005C:
				case 0x880900A0:
				case 0x880900E4:
				case 0x880901A4:
				case 0x880901E8:
				case 0x8809022C:
				case 0x88090270:
				case 0x88090374:
				case 0x880903B8:
				case 0x880903E4:
				case 0x880904A0:
				case 0x880904E4:
				case 0x88090510:
				case 0x880905D4:
				case 0x88090618:
				case 0x88090644:
				case 0x880906F8:
				case 0x8809073C:
				case 0x88090768:
				case 0x8809082C:
				case 0x88090870:
				case 0x8809089C:
				case 0x88090948:
				case 0x8809098C:
				case 0x880909B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808F850;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808F858: goto loc_8808F858;
		case 0x8808F9C0: goto loc_8808F9C0;
		case 0x8808FA04: goto loc_8808FA04;
		case 0x8808FA48: goto loc_8808FA48;
		case 0x8808FA8C: goto loc_8808FA8C;
		case 0x8808FB4C: goto loc_8808FB4C;
		case 0x8808FB90: goto loc_8808FB90;
		case 0x8808FBD4: goto loc_8808FBD4;
		case 0x8808FC18: goto loc_8808FC18;
		case 0x8808FCFC: goto loc_8808FCFC;
		case 0x8808FD40: goto loc_8808FD40;
		case 0x8808FD84: goto loc_8808FD84;
		case 0x8808FDC8: goto loc_8808FDC8;
		case 0x8808FE88: goto loc_8808FE88;
		case 0x8808FECC: goto loc_8808FECC;
		case 0x8808FF10: goto loc_8808FF10;
		case 0x8808FF54: goto loc_8808FF54;
		case 0x88090018: goto loc_88090018;
		case 0x8809005C: goto loc_8809005C;
		case 0x880900A0: goto loc_880900A0;
		case 0x880900E4: goto loc_880900E4;
		case 0x880901A4: goto loc_880901A4;
		case 0x880901E8: goto loc_880901E8;
		case 0x8809022C: goto loc_8809022C;
		case 0x88090270: goto loc_88090270;
		case 0x88090374: goto loc_88090374;
		case 0x880903B8: goto loc_880903B8;
		case 0x880903E4: goto loc_880903E4;
		case 0x880904A0: goto loc_880904A0;
		case 0x880904E4: goto loc_880904E4;
		case 0x88090510: goto loc_88090510;
		case 0x880905D4: goto loc_880905D4;
		case 0x88090618: goto loc_88090618;
		case 0x88090644: goto loc_88090644;
		case 0x880906F8: goto loc_880906F8;
		case 0x8809073C: goto loc_8809073C;
		case 0x88090768: goto loc_88090768;
		case 0x8809082C: goto loc_8809082C;
		case 0x88090870: goto loc_88090870;
		case 0x8809089C: goto loc_8809089C;
		case 0x88090948: goto loc_88090948;
		case 0x8809098C: goto loc_8809098C;
		case 0x880909B8: goto loc_880909B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8808F858;
	__savegprlr_14(ctx, base);
loc_8808F858:
	// stwu r1,-544(r1)
	ctx.current_instruction = 0x8808F858;
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,644(r1)
	ctx.current_instruction = 0x8808F860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// stw r4,572(r1)
	ctx.current_instruction = 0x8808F868;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,596(r1)
	ctx.current_instruction = 0x8808F870;
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r7.u32);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808F878;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stw r11,152(r1)
	ctx.current_instruction = 0x8808F880;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808F888;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r9,-3
	ctx.r9.s64 = -3;
	// stw r11,156(r1)
	ctx.current_instruction = 0x8808F890;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,132(r1)
	ctx.current_instruction = 0x8808F898;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x8808f8ac
	if (ctx.cr6.eq) goto loc_8808F8AC;
	// stw r9,180(r1)
	ctx.current_instruction = 0x8808F8A0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// b 0x8808f8b4
	goto loc_8808F8B4;
loc_8808F8AC:
	// stw r11,180(r1)
	ctx.current_instruction = 0x8808F8AC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8808F8B4:
	// lwz r8,660(r1)
	ctx.current_instruction = 0x8808F8B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808f8d0
	if (ctx.cr6.eq) goto loc_8808F8D0;
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r9,168(r1)
	ctx.current_instruction = 0x8808F8C4;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,160(r1)
	ctx.current_instruction = 0x8808F8C8;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// b 0x8808f8d8
	goto loc_8808F8D8;
loc_8808F8D0:
	// stw r11,168(r1)
	ctx.current_instruction = 0x8808F8D0;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,160(r1)
	ctx.current_instruction = 0x8808F8D4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_8808F8D8:
	// lwz r8,652(r1)
	ctx.current_instruction = 0x8808F8D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808f8f4
	if (ctx.cr6.eq) goto loc_8808F8F4;
	// stw r9,176(r1)
	ctx.current_instruction = 0x8808F8E8;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r14,2
	ctx.r14.s64 = 2;
	// b 0x8808f8fc
	goto loc_8808F8FC;
loc_8808F8F4:
	// stw r11,176(r1)
	ctx.current_instruction = 0x8808F8F4;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
loc_8808F8FC:
	// lwz r8,668(r1)
	ctx.current_instruction = 0x8808F8FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808f914
	if (ctx.cr6.eq) goto loc_8808F914;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,172(r1)
	ctx.current_instruction = 0x8808F90C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// b 0x8808f918
	goto loc_8808F918;
loc_8808F914:
	// stw r11,172(r1)
	ctx.current_instruction = 0x8808F914;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
loc_8808F918:
	// stw r11,164(r1)
	ctx.current_instruction = 0x8808F918;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,780(r1)
	ctx.current_instruction = 0x8808F920;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r9,772(r1)
	ctx.current_instruction = 0x8808F924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r19,764(r1)
	ctx.current_instruction = 0x8808F928;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r21,756(r1)
	ctx.current_instruction = 0x8808F92C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r29,740(r1)
	ctx.current_instruction = 0x8808F930;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r24,732(r1)
	ctx.current_instruction = 0x8808F934;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r23,724(r1)
	ctx.current_instruction = 0x8808F938;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r30,684(r1)
	ctx.current_instruction = 0x8808F93C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// stw r11,288(r1)
	ctx.current_instruction = 0x8808F940;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r9,292(r1)
	ctx.current_instruction = 0x8808F944;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// bge cr6,0x8808fc80
	if (!ctx.cr6.lt) goto loc_8808FC80;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r10,r19
	ctx.r22.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8808F958:
	// lwz r28,160(r1)
	ctx.current_instruction = 0x8808F958;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8808fae0
	if (!ctx.cr6.lt) goto loc_8808FAE0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8808F968:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808F968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x8808F974;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808F97C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x8808F984;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8808F988;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x8808F990;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x8808F994;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8808fa14
	if (ctx.cr6.eq) goto loc_8808FA14;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808F9A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808F9C0;
	sub_8810B7F8(ctx, base);
loc_8808F9C0:
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808F9C8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r8,92(r1)
	ctx.current_instruction = 0x8808F9D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808F9D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808F9E0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808F9E8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
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
	ctx.lr = 0x8808FA04;
	sub_88085938(ctx, base);
loc_8808FA04:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808FA08;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.current_instruction = 0x8808FA0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,132(r1)
	ctx.current_instruction = 0x8808FA10;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8808FA14:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FA14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808fab4
	if (ctx.cr6.eq) goto loc_8808FAB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FA28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FA48;
	sub_8810B7F8(ctx, base);
loc_8808FA48:
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FA50;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r8,92(r1)
	ctx.current_instruction = 0x8808FA58;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808FA5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FA68;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FA70;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
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
	ctx.lr = 0x8808FA8C;
	sub_88085938(ctx, base);
loc_8808FA8C:
	// lwz r10,140(r1)
	ctx.current_instruction = 0x8808FA8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,144(r1)
	ctx.current_instruction = 0x8808FA90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.current_instruction = 0x8808FA94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r25,r6,r25
	ctx.r25.u64 = ctx.r6.u64 | ctx.r25.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x8808FAA4;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808FAAC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x8808FAB0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
loc_8808FAB4:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x8808FAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r9,r20,r28
	ctx.r9.u64 = ctx.r20.u64 + ctx.r28.u64;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stwx r25,r7,r8
	ctx.current_instruction = 0x8808FAC8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r25.u32);
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwx r5,r7,r6
	ctx.current_instruction = 0x8808FAD8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// blt 0x8808f968
	if (ctx.cr0.lt) goto loc_8808F968;
loc_8808FAE0:
	// lwz r11,164(r1)
	ctx.current_instruction = 0x8808FAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8808fc74
	if (ctx.cr6.lt) goto loc_8808FC74;
loc_8808FAF4:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FAF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x8808FB00;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808FB08;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x8808FB10;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8808FB14;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x8808FB1C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x8808FB20;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8808fba0
	if (ctx.cr6.eq) goto loc_8808FBA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FB2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FB4C;
	sub_8810B7F8(ctx, base);
loc_8808FB4C:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FB54;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FB5C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FB60;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FB68;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FB70;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FB90;
	sub_88085938(ctx, base);
loc_8808FB90:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808FB94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.current_instruction = 0x8808FB98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,132(r1)
	ctx.current_instruction = 0x8808FB9C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8808FBA0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FBA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808fc40
	if (ctx.cr6.eq) goto loc_8808FC40;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FBB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FBD4;
	sub_8810B7F8(ctx, base);
loc_8808FBD4:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FBDC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FBE4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FBE8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FBF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FBF8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FC18;
	sub_88085938(ctx, base);
loc_8808FC18:
	// lwz r10,140(r1)
	ctx.current_instruction = 0x8808FC18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,144(r1)
	ctx.current_instruction = 0x8808FC1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808FC20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 | ctx.r25.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x8808FC30;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808FC38;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x8808FC3C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
loc_8808FC40:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x8808FC40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r9,r20,r28
	ctx.r9.u64 = ctx.r20.u64 + ctx.r28.u64;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// lwz r7,164(r1)
	ctx.current_instruction = 0x8808FC4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stwx r25,r6,r8
	ctx.current_instruction = 0x8808FC58;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r25.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// stwx r4,r6,r5
	ctx.current_instruction = 0x8808FC6C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u32);
	// ble cr6,0x8808faf4
	if (!ctx.cr6.gt) goto loc_8808FAF4;
loc_8808FC74:
	// addic. r20,r20,5
	ctx.xer.ca = ctx.r20.u32 > 4294967290;
	ctx.r20.s64 = ctx.r20.s64 + 5;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// blt 0x8808f958
	if (ctx.cr0.lt) goto loc_8808F958;
loc_8808FC80:
	// lwz r9,160(r1)
	ctx.current_instruction = 0x8808FC80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8808fe18
	if (!ctx.cr6.lt) goto loc_8808FE18;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,284
	ctx.r11.s64 = ctx.r1.s64 + 284;
	// add r28,r9,r21
	ctx.r28.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r22,r9
	ctx.r22.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8808FCA4:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FCA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x8808FCB0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808FCB8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x8808FCC0;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8808FCC4;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x8808FCCC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x8808FCD0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8808fd50
	if (ctx.cr6.eq) goto loc_8808FD50;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FCDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FCFC;
	sub_8810B7F8(ctx, base);
loc_8808FCFC:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FD04;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FD0C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FD10;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FD18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FD20;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FD40;
	sub_88085938(ctx, base);
loc_8808FD40:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808FD44;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.current_instruction = 0x8808FD48;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,132(r1)
	ctx.current_instruction = 0x8808FD4C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8808FD50:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FD50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808fdf0
	if (ctx.cr6.eq) goto loc_8808FDF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FD64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FD84;
	sub_8810B7F8(ctx, base);
loc_8808FD84:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FD8C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FD94;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FD98;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FDA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FDA8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FDC8;
	sub_88085938(ctx, base);
loc_8808FDC8:
	// lwz r10,140(r1)
	ctx.current_instruction = 0x8808FDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,144(r1)
	ctx.current_instruction = 0x8808FDCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808FDD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 | ctx.r25.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x8808FDE0;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808FDE8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x8808FDEC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
loc_8808FDF0:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x8808FDF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r25,4(r20)
	ctx.current_instruction = 0x8808FDF8;
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r25.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stwu r11,8(r20)
	ctx.current_instruction = 0x8808FE08;
	ea = 8 + ctx.r20.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r20.u32 = ea;
	// bne 0x8808fca4
	if (!ctx.cr0.eq) goto loc_8808FCA4;
	// lwz r9,160(r1)
	ctx.current_instruction = 0x8808FE10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x8808fe1c
	goto loc_8808FE1C;
loc_8808FE18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8808FE1C:
	// lwz r22,164(r1)
	ctx.current_instruction = 0x8808FE1C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// blt cr6,0x8808ffa0
	if (ctx.cr6.lt) goto loc_8808FFA0;
	// addi r25,r21,1
	ctx.r25.s64 = ctx.r21.s64 + 1;
	// addi r20,r1,292
	ctx.r20.s64 = ctx.r1.s64 + 292;
loc_8808FE30:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FE30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x8808FE3C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808FE44;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x8808FE4C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8808FE50;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x8808FE58;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x8808FE5C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8808fedc
	if (ctx.cr6.eq) goto loc_8808FEDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FE68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FE88;
	sub_8810B7F8(ctx, base);
loc_8808FE88:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FE90;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FE98;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FE9C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FEA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FEAC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FECC;
	sub_88085938(ctx, base);
loc_8808FECC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,128(r1)
	ctx.current_instruction = 0x8808FED0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r27,136(r1)
	ctx.current_instruction = 0x8808FED4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,132(r1)
	ctx.current_instruction = 0x8808FED8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8808FEDC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FEDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808ff7c
	if (ctx.cr6.eq) goto loc_8808FF7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FEF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808FF10;
	sub_8810B7F8(ctx, base);
loc_8808FF10:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808FF18;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808FF20;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808FF24;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808FF2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808FF34;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8808FF54;
	sub_88085938(ctx, base);
loc_8808FF54:
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808FF54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808FF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808FF5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 | ctx.r26.u64;
	// stw r28,128(r1)
	ctx.current_instruction = 0x8808FF6C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,136(r1)
	ctx.current_instruction = 0x8808FF74;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x8808FF78;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
loc_8808FF7C:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x8808FF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r26,4(r20)
	ctx.current_instruction = 0x8808FF84;
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r26.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwu r11,8(r20)
	ctx.current_instruction = 0x8808FF94;
	ea = 8 + ctx.r20.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r20.u32 = ea;
	// bne 0x8808fe30
	if (!ctx.cr0.eq) goto loc_8808FE30;
	// lwz r9,160(r1)
	ctx.current_instruction = 0x8808FF9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8808FFA0:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// blt cr6,0x880902e0
	if (ctx.cr6.lt) goto loc_880902E0;
	// addi r22,r19,1
	ctx.r22.s64 = ctx.r19.s64 + 1;
	// li r20,5
	ctx.r20.s64 = 5;
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
loc_8808FFB4:
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8809013c
	if (!ctx.cr6.lt) goto loc_8809013C;
loc_8808FFC0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808FFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x8808FFCC;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808FFD4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x8808FFDC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8808FFE0;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x8808FFE8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x8808FFEC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8809006c
	if (ctx.cr6.eq) goto loc_8809006C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808FFF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88090018;
	sub_8810B7F8(ctx, base);
loc_88090018:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x88090020;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x88090028;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8809002C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88090034;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8809003C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x8809005C;
	sub_88085938(ctx, base);
loc_8809005C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x88090060;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.current_instruction = 0x88090064;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,132(r1)
	ctx.current_instruction = 0x88090068;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8809006C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8809006C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8809010c
	if (ctx.cr6.eq) goto loc_8809010C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88090080;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880900A0;
	sub_8810B7F8(ctx, base);
loc_880900A0:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880900A8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880900B0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880900B4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880900BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880900C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x880900E4;
	sub_88085938(ctx, base);
loc_880900E4:
	// lwz r10,144(r1)
	ctx.current_instruction = 0x880900E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x880900E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x880900EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// or r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 | ctx.r25.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x880900FC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,136(r1)
	ctx.current_instruction = 0x88090104;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x88090108;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
loc_8809010C:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x8809010C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r9,r20,r28
	ctx.r9.u64 = ctx.r20.u64 + ctx.r28.u64;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stwx r25,r7,r8
	ctx.current_instruction = 0x88090120;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r25.u32);
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwx r5,r7,r6
	ctx.current_instruction = 0x88090130;
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// blt 0x8808ffc0
	if (ctx.cr0.lt) goto loc_8808FFC0;
	// lwz r9,160(r1)
	ctx.current_instruction = 0x88090138;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8809013C:
	// lwz r11,164(r1)
	ctx.current_instruction = 0x8809013C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880902d0
	if (ctx.cr6.lt) goto loc_880902D0;
loc_8809014C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8809014C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x88090158;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,140(r1)
	ctx.current_instruction = 0x88090160;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x88090168;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8809016C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,148(r1)
	ctx.current_instruction = 0x88090174;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,132(r1)
	ctx.current_instruction = 0x88090178;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x880901f8
	if (ctx.cr6.eq) goto loc_880901F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88090184;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880901A4;
	sub_8810B7F8(ctx, base);
loc_880901A4:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880901AC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880901B4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880901B8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880901C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880901C8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x880901E8;
	sub_88085938(ctx, base);
loc_880901E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x880901EC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.current_instruction = 0x880901F0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,132(r1)
	ctx.current_instruction = 0x880901F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880901F8:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880901F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88090298
	if (ctx.cr6.eq) goto loc_88090298;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8809020C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r8,r28,r21
	ctx.r8.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8809022C;
	sub_8810B7F8(ctx, base);
loc_8809022C:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x88090234;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8809023C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88090240;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88090248;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x88090250;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
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
	ctx.lr = 0x88090270;
	sub_88085938(ctx, base);
loc_88090270:
	// lwz r10,144(r1)
	ctx.current_instruction = 0x88090270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x88090274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x88090278;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// or r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 | ctx.r25.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x88090288;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,136(r1)
	ctx.current_instruction = 0x88090290;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x88090294;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
loc_88090298:
	// lwz r11,108(r29)
	ctx.current_instruction = 0x88090298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r9,r20,r28
	ctx.r9.u64 = ctx.r20.u64 + ctx.r28.u64;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// lwz r7,164(r1)
	ctx.current_instruction = 0x880902A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stwx r25,r6,r8
	ctx.current_instruction = 0x880902B0;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r25.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// stwx r4,r6,r5
	ctx.current_instruction = 0x880902C4;
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u32);
	// ble cr6,0x8809014c
	if (!ctx.cr6.gt) goto loc_8809014C;
	// lwz r9,160(r1)
	ctx.current_instruction = 0x880902CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_880902D0:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r20,r20,5
	ctx.r20.s64 = ctx.r20.s64 + 5;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bne 0x8808ffb4
	if (!ctx.cr0.eq) goto loc_8808FFB4;
loc_880902E0:
	// lwz r26,180(r1)
	ctx.current_instruction = 0x880902E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r20,748(r1)
	ctx.current_instruction = 0x880902E8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// li r18,16
	ctx.r18.s64 = 16;
	// lwz r19,708(r1)
	ctx.current_instruction = 0x880902F0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// addi r17,r11,8560
	ctx.r17.s64 = ctx.r11.s64 + 8560;
	// lwz r16,636(r1)
	ctx.current_instruction = 0x880902F8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x88090574
	if (!ctx.cr6.lt) goto loc_88090574;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r26,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r26.u64;
loc_8809030C:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8809030C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r10,596(r1)
	ctx.current_instruction = 0x88090310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r28,168(r1)
	ctx.current_instruction = 0x88090314;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x88090438
	if (!ctx.cr6.lt) goto loc_88090438;
	// lwz r11,716(r1)
	ctx.current_instruction = 0x88090328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r15,572(r1)
	ctx.current_instruction = 0x8809032C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// add r22,r26,r11
	ctx.r22.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_88090334:
	// lwz r5,2488(r31)
	ctx.current_instruction = 0x88090334;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// addi r27,r17,96
	ctx.r27.s64 = ctx.r17.s64 + 96;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88090340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x88090348;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090350;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r18,84(r1)
	ctx.current_instruction = 0x88090358;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r27,r11,r27
	ctx.current_instruction = 0x8809036C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x88090374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090374:
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8809037C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r9,100(r1)
	ctx.current_instruction = 0x88090384;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x88090388;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x88090390;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8809039C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880903B8;
	sub_88085938(ctx, base);
loc_880903B8:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x880903C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r4,r28,r19
	ctx.r4.u64 = ctx.r28.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r6
	ctx.current_instruction = 0x880903D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x880903DC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x880903E4;
	sub_88085E60(ctx, base);
loc_880903E4:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x880903E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880903F0;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88090400
	if (ctx.cr6.eq) goto loc_88090400;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880903FC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88090400:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x88090404;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88090408;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r27,r9
	ctx.current_instruction = 0x88090410;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88090430
	if (!ctx.cr6.lt) goto loc_88090430;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r28,152(r1)
	ctx.current_instruction = 0x88090428;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x8809042C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
loc_88090430:
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x88090334
	if (ctx.cr0.lt) goto loc_88090334;
loc_88090438:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88090438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r14,172(r1)
	ctx.current_instruction = 0x88090440;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,596(r1)
	ctx.current_instruction = 0x88090444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// subf r21,r11,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blt cr6,0x88090568
	if (ctx.cr6.lt) goto loc_88090568;
	// lwz r11,716(r1)
	ctx.current_instruction = 0x88090454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r15,572(r1)
	ctx.current_instruction = 0x88090458;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// add r22,r26,r11
	ctx.r22.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_88090460:
	// lwz r5,2488(r31)
	ctx.current_instruction = 0x88090460;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// addi r27,r17,96
	ctx.r27.s64 = ctx.r17.s64 + 96;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8809046C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x88090474;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809047C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r18,84(r1)
	ctx.current_instruction = 0x88090484;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r27,r11,r27
	ctx.current_instruction = 0x88090498;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x880904A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880904A0:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880904A8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880904B0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880904B4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880904BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880904C8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880904E4;
	sub_88085938(ctx, base);
loc_880904E4:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x880904EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r4,r28,r19
	ctx.r4.u64 = ctx.r28.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r6
	ctx.current_instruction = 0x88090500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x88090508;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x88090510;
	sub_88085E60(ctx, base);
loc_88090510:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x88090510;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8809051C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8809052c
	if (ctx.cr6.eq) goto loc_8809052C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88090528;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8809052C:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x88090530;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88090534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r27,r9
	ctx.current_instruction = 0x8809053C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x8809055c
	if (!ctx.cr6.lt) goto loc_8809055C;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r28,152(r1)
	ctx.current_instruction = 0x88090554;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x88090558;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
loc_8809055C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x88090460
	if (!ctx.cr6.gt) goto loc_88090460;
loc_88090568:
	// addic. r25,r25,7
	ctx.xer.ca = ctx.r25.u32 > 4294967288;
	ctx.r25.s64 = ctx.r25.s64 + 7;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// blt 0x8809030c
	if (ctx.cr0.lt) goto loc_8809030C;
loc_88090574:
	// lwz r27,168(r1)
	ctx.current_instruction = 0x88090574;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,596(r1)
	ctx.current_instruction = 0x88090578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x880906a4
	if (!ctx.cr6.lt) goto loc_880906A4;
	// rotlwi r11,r27,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r25,572(r1)
	ctx.current_instruction = 0x8809058C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// addi r10,r17,96
	ctx.r10.s64 = ctx.r17.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r22,0
	ctx.r22.s64 = 0;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880905A0:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880905A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r28,0(r26)
	ctx.current_instruction = 0x880905AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880905B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880905BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880905C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r18,84(r1)
	ctx.current_instruction = 0x880905C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880905D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880905D4:
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880905DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// stw r10,92(r1)
	ctx.current_instruction = 0x880905E4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x880905E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r7,100(r1)
	ctx.current_instruction = 0x880905F0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880905FC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88090618;
	sub_88085938(ctx, base);
loc_88090618:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x88090620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,716(r1)
	ctx.current_instruction = 0x88090628;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// add r4,r27,r19
	ctx.r4.u64 = ctx.r27.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r28,r6
	ctx.current_instruction = 0x88090634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x8809063C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x88090644;
	sub_88085E60(ctx, base);
loc_88090644:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x88090644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88090650;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88090660
	if (ctx.cr6.eq) goto loc_88090660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8809065C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88090660:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x88090664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88090668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r28,r9
	ctx.current_instruction = 0x88090670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88090690
	if (!ctx.cr6.lt) goto loc_88090690;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r27,152(r1)
	ctx.current_instruction = 0x88090688;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r22,156(r1)
	ctx.current_instruction = 0x8809068C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
loc_88090690:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r17,96
	ctx.r11.s64 = ctx.r17.s64 + 96;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880905a0
	if (ctx.cr6.lt) goto loc_880905A0;
loc_880906A4:
	// lwz r22,172(r1)
	ctx.current_instruction = 0x880906A4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r15,572(r1)
	ctx.current_instruction = 0x880906AC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r14,596(r1)
	ctx.current_instruction = 0x880906B0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// blt cr6,0x880907c4
	if (ctx.cr6.lt) goto loc_880907C4;
	// addi r26,r17,100
	ctx.r26.s64 = ctx.r17.s64 + 100;
	// li r25,0
	ctx.r25.s64 = 0;
loc_880906C4:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880906C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r28,0(r26)
	ctx.current_instruction = 0x880906D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880906D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880906E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880906E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r18,84(r1)
	ctx.current_instruction = 0x880906EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880906F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880906F8:
	// stw r24,116(r1)
	ctx.current_instruction = 0x880906F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880906FC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8809070C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88090710;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88090718;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8809073C;
	sub_88085938(ctx, base);
loc_8809073C:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x88090744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,716(r1)
	ctx.current_instruction = 0x8809074C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// add r4,r27,r19
	ctx.r4.u64 = ctx.r27.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r28,r6
	ctx.current_instruction = 0x88090758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x88090760;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x88090768;
	sub_88085E60(ctx, base);
loc_88090768:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x88090768;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88090774;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88090784
	if (ctx.cr6.eq) goto loc_88090784;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88090780;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88090784:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x88090788;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8809078C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r28,r9
	ctx.current_instruction = 0x88090794;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880907b4
	if (!ctx.cr6.lt) goto loc_880907B4;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r27,152(r1)
	ctx.current_instruction = 0x880907AC;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r25,156(r1)
	ctx.current_instruction = 0x880907B0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
loc_880907B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x880906c4
	if (!ctx.cr6.gt) goto loc_880906C4;
loc_880907C4:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x880907C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88090a28
	if (ctx.cr6.lt) goto loc_88090A28;
	// li r25,7
	ctx.r25.s64 = 7;
loc_880907D8:
	// lwz r28,168(r1)
	ctx.current_instruction = 0x880907D8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x880908f0
	if (!ctx.cr6.lt) goto loc_880908F0;
	// lwz r11,716(r1)
	ctx.current_instruction = 0x880907E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// add r22,r26,r11
	ctx.r22.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_880907EC:
	// stw r18,84(r1)
	ctx.current_instruction = 0x880907EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880907F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r27,r17,96
	ctx.r27.s64 = ctx.r17.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88090800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x88090808;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090810;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r27,r11,r27
	ctx.current_instruction = 0x88090824;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x8809082C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809082C:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x88090834;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8809083C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88090840;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88090848;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r23,108(r1)
	ctx.current_instruction = 0x88090850;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88090870;
	sub_88085938(ctx, base);
loc_88090870:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x88090878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r4,r28,r19
	ctx.r4.u64 = ctx.r28.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r6
	ctx.current_instruction = 0x8809088C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x88090894;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x8809089C;
	sub_88085E60(ctx, base);
loc_8809089C:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x8809089C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880908A8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x880908b8
	if (ctx.cr6.eq) goto loc_880908B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880908B4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_880908B8:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x880908BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880908C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r27,r9
	ctx.current_instruction = 0x880908C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880908e8
	if (!ctx.cr6.lt) goto loc_880908E8;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r28,152(r1)
	ctx.current_instruction = 0x880908E0;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x880908E4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
loc_880908E8:
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x880907ec
	if (ctx.cr0.lt) goto loc_880907EC;
loc_880908F0:
	// lwz r11,172(r1)
	ctx.current_instruction = 0x880908F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88090a14
	if (ctx.cr6.lt) goto loc_88090A14;
	// lwz r11,716(r1)
	ctx.current_instruction = 0x88090900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// add r22,r26,r11
	ctx.r22.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_88090908:
	// stw r18,84(r1)
	ctx.current_instruction = 0x88090908;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88090910;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r27,r17,96
	ctx.r27.s64 = ctx.r17.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8809091C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x88090924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809092C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwzx r27,r11,r27
	ctx.current_instruction = 0x88090940;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x88090948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090948:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r24,116(r1)
	ctx.current_instruction = 0x88090950;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x88090958;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8809095C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88090964;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8809096C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8809098C;
	sub_88085938(ctx, base);
loc_8809098C:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x88090994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r4,r28,r19
	ctx.r4.u64 = ctx.r28.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r6
	ctx.current_instruction = 0x880909A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r6,132(r1)
	ctx.current_instruction = 0x880909B0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x88085e60
	ctx.lr = 0x880909B8;
	sub_88085E60(ctx, base);
loc_880909B8:
	// lwz r9,128(r1)
	ctx.current_instruction = 0x880909B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880909C4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x880909d4
	if (ctx.cr6.eq) goto loc_880909D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880909D0;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_880909D4:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r8,108(r29)
	ctx.current_instruction = 0x880909D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880909DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r9,r27,r9
	ctx.current_instruction = 0x880909E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88090a04
	if (!ctx.cr6.lt) goto loc_88090A04;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r28,152(r1)
	ctx.current_instruction = 0x880909FC;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x88090A00;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
loc_88090A04:
	// lwz r11,172(r1)
	ctx.current_instruction = 0x88090A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88090908
	if (!ctx.cr6.gt) goto loc_88090908;
loc_88090A14:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x88090A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,7
	ctx.r25.s64 = ctx.r25.s64 + 7;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880907d8
	if (!ctx.cr6.gt) goto loc_880907D8;
loc_88090A28:
	// lwz r11,788(r1)
	ctx.current_instruction = 0x88090A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r10,152(r1)
	ctx.current_instruction = 0x88090A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,796(r1)
	ctx.current_instruction = 0x88090A30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// lwz r8,156(r1)
	ctx.current_instruction = 0x88090A34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,804(r1)
	ctx.current_instruction = 0x88090A38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88090A3C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x88090A40;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r16,0(r7)
	ctx.current_instruction = 0x88090A44;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r16.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CAEB0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CAEB0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CAEB0;
	ctx.current_instruction = 0x880CAEB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x880caed8
	if (ctx.cr6.lt) goto loc_880CAED8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CAED8:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x880CAEE8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x880CAEEC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	ctx.current_instruction = 0x880CAEF0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CB210) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CB210);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB210;
	ctx.current_instruction = 0x880CB210;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1524(r10)
	ctx.current_instruction = 0x880CB21C;
	REX_STORE_U8(ctx.r10.u32 + 1524, ctx.r11.u8);
	// stw r11,1528(r10)
	ctx.current_instruction = 0x880CB220;
	REX_STORE_U32(ctx.r10.u32 + 1528, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CB360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB360) {
			switch (rex_dispatch_address) {
				case 0x880CB380:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB360;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB380: goto loc_880CB380;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CB364;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880CB368;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880cb380
	if (ctx.cr6.eq) goto loc_880CB380;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880CB380;
	sub_88050358(ctx, base);
loc_880CB380:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CB388;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CB648) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB648;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB648) {
			switch (rex_dispatch_address) {
				case 0x880CB650:
				case 0x880CB67C:
				case 0x880CB698:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB648;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB650: goto loc_880CB650;
		case 0x880CB67C: goto loc_880CB67C;
		case 0x880CB698: goto loc_880CB698;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880CB650;
	__savegprlr_28(ctx, base);
loc_880CB650:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CB650;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880CB65C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,508(r3)
	ctx.current_instruction = 0x880CB668;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,516(r31)
	ctx.current_instruction = 0x880CB674;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x880cb2c0
	ctx.lr = 0x880CB67C;
	sub_880CB2C0(ctx, base);
loc_880CB67C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cb6a4
	if (ctx.cr6.lt) goto loc_880CB6A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,516(r31)
	ctx.current_instruction = 0x880CB68C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CB690;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x880CB698;
	sub_88052D90(ctx, base);
loc_880CB698:
	// lwz r10,0(r30)
	ctx.current_instruction = 0x880CB698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r28,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC;
	// stwx r10,r11,r31
	ctx.current_instruction = 0x880CB6A0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_880CB6A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC7E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC7E8) {
			switch (rex_dispatch_address) {
				case 0x880CC7F0:
				case 0x880CC814:
				case 0x880CC830:
				case 0x880CC85C:
				case 0x880CC894:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC7E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CC7F0: goto loc_880CC7F0;
		case 0x880CC814: goto loc_880CC814;
		case 0x880CC830: goto loc_880CC830;
		case 0x880CC85C: goto loc_880CC85C;
		case 0x880CC894: goto loc_880CC894;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880CC7F0;
	__savegprlr_28(ctx, base);
loc_880CC7F0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CC7F0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x880CC7FC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x880CC814;
	sub_880CB2C0(ctx, base);
loc_880CC814:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc878
	if (ctx.cr6.lt) goto loc_880CC878;
	// li r5,104
	ctx.r5.s64 = 104;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880CC824;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880CC830;
	sub_88052D90(ctx, base);
loc_880CC830:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CC830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-14992
	ctx.r4.s64 = ctx.r11.s64 + -14992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r10)
	ctx.current_instruction = 0x880CC844;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CC848;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,4(r9)
	ctx.current_instruction = 0x880CC84C;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880CC850;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r5,72
	ctx.r7.s64 = ctx.r5.s64 + 72;
	// bl 0x880cb590
	ctx.lr = 0x880CC85C;
	sub_880CB590(ctx, base);
loc_880CC85C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc878
	if (ctx.cr6.lt) goto loc_880CC878;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	ctx.current_instruction = 0x880CC86C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880CC878:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cc894
	if (ctx.cr6.eq) goto loc_880CC894;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cb318
	ctx.lr = 0x880CC894;
	sub_880CB318(ctx, base);
loc_880CC894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD590) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD590;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD590) {
			switch (rex_dispatch_address) {
				case 0x880CD5A8:
				case 0x880CD5B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD590;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD5A8: goto loc_880CD5A8;
		case 0x880CD5B8: goto loc_880CD5B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CD594;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CD598;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880CD59C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x880CD5A8;
	sub_88061FB8(ctx, base);
loc_880CD5A8:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880CD5B8;
	sub_88052D90(ctx, base);
loc_880CD5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CD5C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CD5C8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CEDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CEDD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CEDD0) {
			switch (rex_dispatch_address) {
				case 0x880CEDD8:
				case 0x880CEE1C:
				case 0x880CEE64:
				case 0x880CEEA8:
				case 0x880CEEC8:
				case 0x880CEEFC:
				case 0x880CEF4C:
				case 0x880CEFB0:
				case 0x880CF094:
				case 0x880CF11C:
				case 0x880CF170:
				case 0x880CF198:
				case 0x880CF294:
				case 0x880CF2B4:
				case 0x880CF2C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CEDD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CEDD8: goto loc_880CEDD8;
		case 0x880CEE1C: goto loc_880CEE1C;
		case 0x880CEE64: goto loc_880CEE64;
		case 0x880CEEA8: goto loc_880CEEA8;
		case 0x880CEEC8: goto loc_880CEEC8;
		case 0x880CEEFC: goto loc_880CEEFC;
		case 0x880CEF4C: goto loc_880CEF4C;
		case 0x880CEFB0: goto loc_880CEFB0;
		case 0x880CF094: goto loc_880CF094;
		case 0x880CF11C: goto loc_880CF11C;
		case 0x880CF170: goto loc_880CF170;
		case 0x880CF198: goto loc_880CF198;
		case 0x880CF294: goto loc_880CF294;
		case 0x880CF2B4: goto loc_880CF2B4;
		case 0x880CF2C4: goto loc_880CF2C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880CEDD8;
	__savegprlr_17(ctx, base);
loc_880CEDD8:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880CEDD8;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r30,0(r3)
	ctx.current_instruction = 0x880CEDDC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,208(r3)
	ctx.current_instruction = 0x880CEDE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r17,0
	ctx.r17.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r17,80(r1)
	ctx.current_instruction = 0x880CEDF4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-24
	ctx.r22.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x880cf2c8
	if (!ctx.cr6.eq) goto loc_880CF2C8;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,8
	ctx.r3.s64 = 8;
	// ori r18,r11,32768
	ctx.r18.u64 = ctx.r11.u64 | 32768;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x88050340
	ctx.lr = 0x880CEE1C;
	sub_88050340(ctx, base);
loc_880CEE1C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,208(r24)
	ctx.current_instruction = 0x880CEE20;
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880cee34
	if (!ctx.cr6.eq) goto loc_880CEE34;
loc_880CEE2C:
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x880cf254
	goto loc_880CF254;
loc_880CEE34:
	// addi r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 2;
	// stw r17,0(r29)
	ctx.current_instruction = 0x880CEE38;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r17.u32);
	// stw r17,4(r29)
	ctx.current_instruction = 0x880CEE3C;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r17.u32);
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// ble cr6,0x880cee50
	if (!ctx.cr6.gt) goto loc_880CEE50;
loc_880CEE48:
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x880cf254
	goto loc_880CF254;
loc_880CEE50:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CEE64;
	sub_8805ADC8(ctx, base);
loc_880CEE64:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880cf250
	if (!ctx.cr6.eq) goto loc_880CF250;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CEE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CEE7C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880CEE80;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,80(r1)
	ctx.current_instruction = 0x880CEE88;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r29)
	ctx.current_instruction = 0x880CEE94;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// rlwinm r31,r11,4,12,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050340
	ctx.lr = 0x880CEEA8;
	sub_88050340(ctx, base);
loc_880CEEA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r29)
	ctx.current_instruction = 0x880CEEAC;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// bne cr6,0x880ceebc
	if (!ctx.cr6.eq) goto loc_880CEEBC;
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x880cf254
	goto loc_880CF254;
loc_880CEEBC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880CEEC8;
	sub_88052D90(ctx, base);
loc_880CEEC8:
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x880cf2c8
	if (ctx.cr6.eq) goto loc_880CF2C8;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r21,1
	ctx.r21.s64 = 1;
loc_880CEEDC:
	// addi r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 2;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x880cee48
	if (ctx.cr6.gt) goto loc_880CEE48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CEEFC;
	sub_8805ADC8(ctx, base);
loc_880CEEFC:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880cf250
	if (!ctx.cr6.eq) goto loc_880CF250;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CEF04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880CEF0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	ctx.current_instruction = 0x880CEF14;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CEF1C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880CEF20;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r7,r9,r28
	ctx.current_instruction = 0x880CEF2C;
	REX_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u16);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CEF30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	ctx.current_instruction = 0x880CEF38;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CEF3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// bl 0x880cd5d0
	ctx.lr = 0x880CEF4C;
	sub_880CD5D0(ctx, base);
loc_880CEF4C:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cf254
	if (!ctx.cr6.eq) goto loc_880CF254;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CEF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,0(r11)
	ctx.current_instruction = 0x880CEF60;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CEF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cef90
	if (ctx.cr6.eq) goto loc_880CEF90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_880CEF7C:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x880CEF7C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CEF80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x880CEF84;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x880CEF88;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880cef7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CEF7C;
loc_880CEF90:
	// ld r4,88(r1)
	ctx.current_instruction = 0x880CEF90;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x880cee48
	if (ctx.cr6.gt) goto loc_880CEE48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CEFB0;
	sub_8805ADC8(ctx, base);
loc_880CEFB0:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880cf250
	if (!ctx.cr6.eq) goto loc_880CF250;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CEFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880CEFC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// std r31,88(r1)
	ctx.current_instruction = 0x880CEFC4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CEFCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880CEFD0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,8(r9)
	ctx.current_instruction = 0x880CEFDC;
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880CEFE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CEFE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880CEFEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880CEFF0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880CEFF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,10(r4)
	ctx.current_instruction = 0x880CF004;
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r11.u16);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CF008;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// stw r8,80(r1)
	ctx.current_instruction = 0x880CF010;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,8(r11)
	ctx.current_instruction = 0x880CF01C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x880cf068
	if (ctx.cr6.gt) goto loc_880CF068;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cf040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CF040;
	// bdzf 4*cr6+eq,0x880cf058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CF058;
	// bne cr6,0x880cf04c
	if (!ctx.cr6.eq) goto loc_880CF04C;
loc_880CF040:
	// lhz r10,10(r11)
	ctx.current_instruction = 0x880CF040;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// b 0x880cf060
	goto loc_880CF060;
loc_880CF04C:
	// lhz r10,10(r11)
	ctx.current_instruction = 0x880CF04C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// b 0x880cf060
	goto loc_880CF060;
loc_880CF058:
	// lhz r10,10(r11)
	ctx.current_instruction = 0x880CF058;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
loc_880CF060:
	// beq cr6,0x880cf068
	if (ctx.cr6.eq) goto loc_880CF068;
	// sth r21,8(r11)
	ctx.current_instruction = 0x880CF064;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r21.u16);
loc_880CF068:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,8(r11)
	ctx.current_instruction = 0x880CF070;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880cf0fc
	if (!ctx.cr6.eq) goto loc_880CF0FC;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x880cd5d0
	ctx.lr = 0x880CF094;
	sub_880CD5D0(ctx, base);
loc_880CF094:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cf254
	if (!ctx.cr6.eq) goto loc_880CF254;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,10(r11)
	ctx.current_instruction = 0x880CF0A8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880CF0AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cf0d8
	if (ctx.cr6.eq) goto loc_880CF0D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_880CF0C4:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x880CF0C4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CF0C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x880CF0CC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x880CF0D0;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880cf0c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CF0C4;
loc_880CF0D8:
	// ld r30,88(r1)
	ctx.current_instruction = 0x880CF0D8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_880CF0DC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r20,r19
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x880ceedc
	if (ctx.cr6.lt) goto loc_880CEEDC;
	// std r22,0(r24)
	ctx.current_instruction = 0x880CF0EC;
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880CF0FC:
	// lhz r9,10(r11)
	ctx.current_instruction = 0x880CF0FC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpld cr6,r8,r22
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x880cee48
	if (ctx.cr6.gt) goto loc_880CEE48;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x88050340
	ctx.lr = 0x880CF11C;
	sub_88050340(ctx, base);
loc_880CF11C:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF11C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,12(r11)
	ctx.current_instruction = 0x880CF124;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x880CF130;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880cee2c
	if (ctx.cr6.eq) goto loc_880CEE2C;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880cf1a4
	if (ctx.cr6.eq) goto loc_880CF1A4;
loc_880CF148:
	// subf r27,r31,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r31.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// ble cr6,0x880cf158
	if (!ctx.cr6.gt) goto loc_880CF158;
	// li r27,128
	ctx.r27.s64 = 128;
loc_880CF158:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF170;
	sub_8805ADC8(ctx, base);
loc_880CF170:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x880cf250
	if (!ctx.cr6.eq) goto loc_880CF250;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF17C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CF184;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x880CF18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CF198;
	sub_880547A0(ctx, base);
loc_880CF198:
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x880cf148
	if (ctx.cr6.lt) goto loc_880CF148;
loc_880CF1A4:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x880cf250
	if (!ctx.cr6.eq) goto loc_880CF250;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CF1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lhz r10,8(r11)
	ctx.current_instruction = 0x880CF1BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x880cf0dc
	if (ctx.cr6.gt) goto loc_880CF0DC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cf1e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CF1E0;
	// bdzf 4*cr6+eq,0x880cf208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CF208;
	// bne cr6,0x880cf238
	if (!ctx.cr6.eq) goto loc_880CF238;
loc_880CF1E0:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x880CF1E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CF1E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.current_instruction = 0x880CF1E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.current_instruction = 0x880CF1EC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.current_instruction = 0x880CF1F0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	ctx.current_instruction = 0x880CF1F4;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	ctx.current_instruction = 0x880CF1F8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	ctx.current_instruction = 0x880CF1FC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	ctx.current_instruction = 0x880CF200;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x880cf0dc
	goto loc_880CF0DC;
loc_880CF208:
	// lwz r9,12(r11)
	ctx.current_instruction = 0x880CF208;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_880CF218:
	// lbz r8,-1(r9)
	ctx.current_instruction = 0x880CF218;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880CF220;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880CF228;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r9)
	ctx.current_instruction = 0x880CF22C;
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x880cf218
	if (ctx.cr6.lt) goto loc_880CF218;
	// b 0x880cf0dc
	goto loc_880CF0DC;
loc_880CF238:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x880CF238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CF23C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CF240;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x880CF244;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	ctx.current_instruction = 0x880CF248;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x880cf0dc
	goto loc_880CF0DC;
loc_880CF250:
	// li r23,3
	ctx.r23.s64 = 3;
loc_880CF254:
	// lwz r30,208(r24)
	ctx.current_instruction = 0x880CF254;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880cf2c8
	if (ctx.cr6.eq) goto loc_880CF2C8;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880CF260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cf2b8
	if (ctx.cr6.eq) goto loc_880CF2B8;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x880CF26C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cf2a8
	if (ctx.cr6.eq) goto loc_880CF2A8;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_880CF280:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880CF280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.current_instruction = 0x880CF28C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x88050358
	ctx.lr = 0x880CF294;
	sub_88050358(ctx, base);
loc_880CF294:
	// lhz r10,0(r30)
	ctx.current_instruction = 0x880CF294;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880cf280
	if (ctx.cr6.lt) goto loc_880CF280;
loc_880CF2A8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,4(r30)
	ctx.current_instruction = 0x880CF2AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x88050358
	ctx.lr = 0x880CF2B4;
	sub_88050358(ctx, base);
loc_880CF2B4:
	// stw r17,4(r30)
	ctx.current_instruction = 0x880CF2B4;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r17.u32);
loc_880CF2B8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,208(r24)
	ctx.current_instruction = 0x880CF2BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// bl 0x88050358
	ctx.lr = 0x880CF2C4;
	sub_88050358(ctx, base);
loc_880CF2C4:
	// stw r17,208(r24)
	ctx.current_instruction = 0x880CF2C4;
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r17.u32);
loc_880CF2C8:
	// std r22,0(r24)
	ctx.current_instruction = 0x880CF2C8;
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DAEF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DAEF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DAEF0) {
			switch (rex_dispatch_address) {
				case 0x880DAEF8:
				case 0x880DAF30:
				case 0x880DAF88:
				case 0x880DAFB8:
				case 0x880DAFF4:
				case 0x880DB024:
				case 0x880DB06C:
				case 0x880DB09C:
				case 0x880DB0D8:
				case 0x880DB0FC:
				case 0x880DB158:
				case 0x880DB174:
				case 0x880DB198:
				case 0x880DB200:
				case 0x880DB250:
				case 0x880DB2B0:
				case 0x880DB2C8:
				case 0x880DB30C:
				case 0x880DB350:
				case 0x880DB39C:
				case 0x880DB3F8:
				case 0x880DB458:
				case 0x880DB470:
				case 0x880DB4B4:
				case 0x880DB4F8:
				case 0x880DB550:
				case 0x880DB5C4:
				case 0x880DB688:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DAEF0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DAEF8: goto loc_880DAEF8;
		case 0x880DAF30: goto loc_880DAF30;
		case 0x880DAF88: goto loc_880DAF88;
		case 0x880DAFB8: goto loc_880DAFB8;
		case 0x880DAFF4: goto loc_880DAFF4;
		case 0x880DB024: goto loc_880DB024;
		case 0x880DB06C: goto loc_880DB06C;
		case 0x880DB09C: goto loc_880DB09C;
		case 0x880DB0D8: goto loc_880DB0D8;
		case 0x880DB0FC: goto loc_880DB0FC;
		case 0x880DB158: goto loc_880DB158;
		case 0x880DB174: goto loc_880DB174;
		case 0x880DB198: goto loc_880DB198;
		case 0x880DB200: goto loc_880DB200;
		case 0x880DB250: goto loc_880DB250;
		case 0x880DB2B0: goto loc_880DB2B0;
		case 0x880DB2C8: goto loc_880DB2C8;
		case 0x880DB30C: goto loc_880DB30C;
		case 0x880DB350: goto loc_880DB350;
		case 0x880DB39C: goto loc_880DB39C;
		case 0x880DB3F8: goto loc_880DB3F8;
		case 0x880DB458: goto loc_880DB458;
		case 0x880DB470: goto loc_880DB470;
		case 0x880DB4B4: goto loc_880DB4B4;
		case 0x880DB4F8: goto loc_880DB4F8;
		case 0x880DB550: goto loc_880DB550;
		case 0x880DB5C4: goto loc_880DB5C4;
		case 0x880DB688: goto loc_880DB688;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880DAEF8;
	__savegprlr_20(ctx, base);
loc_880DAEF8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880DAEF8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28012(r3)
	ctx.current_instruction = 0x880DAEFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28012);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x880DAF04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r30,7868(r3)
	ctx.current_instruction = 0x880DAF10;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r20,r11,71
	ctx.r20.s64 = ctx.r11.s64 + 71;
	// bne cr6,0x880daf38
	if (!ctx.cr6.eq) goto loc_880DAF38;
	// bl 0x880d90e8
	ctx.lr = 0x880DAF30;
	sub_880D90E8(ctx, base);
loc_880DAF30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880DAF38:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880DAF38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,88(r22)
	ctx.current_instruction = 0x880DAF40;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r21,r7,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x880db048
	if (!ctx.cr6.eq) goto loc_880DB048;
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880DAF60;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,147(r22)
	ctx.current_instruction = 0x880DAF68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 147);
	// beq cr6,0x880dafdc
	if (ctx.cr6.eq) goto loc_880DAFDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880DAF74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880dafac
	if (ctx.cr6.eq) goto loc_880DAFAC;
	// lwz r5,44(r11)
	ctx.current_instruction = 0x880DAF7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.current_instruction = 0x880DAF80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x880e6960
	ctx.lr = 0x880DAF88;
	sub_880E6960(ctx, base);
loc_880DAF88:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DAF88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DAF94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DAF98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,44(r9)
	ctx.current_instruction = 0x880DAF9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DAFA4;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DAFAC:
	// lwz r5,36(r11)
	ctx.current_instruction = 0x880DAFAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,32(r11)
	ctx.current_instruction = 0x880DAFB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x880e6960
	ctx.lr = 0x880DAFB8;
	sub_880E6960(ctx, base);
loc_880DAFB8:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DAFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DAFC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DAFC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,36(r9)
	ctx.current_instruction = 0x880DAFCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DAFD4;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DAFDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880DAFE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880db018
	if (ctx.cr6.eq) goto loc_880DB018;
	// lwz r5,28(r11)
	ctx.current_instruction = 0x880DAFE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.current_instruction = 0x880DAFEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x880e6960
	ctx.lr = 0x880DAFF4;
	sub_880E6960(ctx, base);
loc_880DAFF4:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DAFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DB000;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DB004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,28(r9)
	ctx.current_instruction = 0x880DB008;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DB010;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DB018:
	// lwz r5,20(r11)
	ctx.current_instruction = 0x880DB018;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,16(r11)
	ctx.current_instruction = 0x880DB01C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x880e6960
	ctx.lr = 0x880DB024;
	sub_880E6960(ctx, base);
loc_880DB024:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DB030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DB034;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,20(r9)
	ctx.current_instruction = 0x880DB038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DB040;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DB048:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880DB04C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// bne cr6,0x880db0c0
	if (!ctx.cr6.eq) goto loc_880DB0C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880DB058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880db090
	if (ctx.cr6.eq) goto loc_880DB090;
	// lwz r5,60(r11)
	ctx.current_instruction = 0x880DB060;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r4,56(r11)
	ctx.current_instruction = 0x880DB064;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x880e6960
	ctx.lr = 0x880DB06C;
	sub_880E6960(ctx, base);
loc_880DB06C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB06C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DB078;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DB07C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,60(r9)
	ctx.current_instruction = 0x880DB080;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DB088;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DB090:
	// lwz r5,52(r11)
	ctx.current_instruction = 0x880DB090;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,48(r11)
	ctx.current_instruction = 0x880DB094;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x880e6960
	ctx.lr = 0x880DB09C;
	sub_880E6960(ctx, base);
loc_880DB09C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880DB0A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880DB0AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,52(r9)
	ctx.current_instruction = 0x880DB0B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880DB0B8;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880db11c
	goto loc_880DB11C;
loc_880DB0C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880DB0C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880db0f0
	if (ctx.cr6.eq) goto loc_880DB0F0;
	// lwz r5,12(r11)
	ctx.current_instruction = 0x880DB0CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.current_instruction = 0x880DB0D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x880e6960
	ctx.lr = 0x880DB0D8;
	sub_880E6960(ctx, base);
loc_880DB0D8:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB0D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r10,20852(r31)
	ctx.current_instruction = 0x880DB0E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,12(r10)
	ctx.current_instruction = 0x880DB0E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x880db110
	goto loc_880DB110;
loc_880DB0F0:
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880DB0F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880DB0F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880DB0FC;
	sub_880E6960(ctx, base);
loc_880DB0FC:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r10,20852(r31)
	ctx.current_instruction = 0x880DB108;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x880DB10C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_880DB110:
	// lwz r9,28632(r31)
	ctx.current_instruction = 0x880DB110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,28632(r31)
	ctx.current_instruction = 0x880DB118;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r9.u32);
loc_880DB11C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db130
	if (ctx.cr6.eq) goto loc_880DB130;
	// lwz r11,30156(r31)
	ctx.current_instruction = 0x880DB124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,30156(r31)
	ctx.current_instruction = 0x880DB12C;
	REX_STORE_U32(ctx.r31.u32 + 30156, ctx.r11.u32);
loc_880DB130:
	// lbz r11,88(r22)
	ctx.current_instruction = 0x880DB130;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880db208
	if (!ctx.cr6.eq) goto loc_880DB208;
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880DB140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db158
	if (ctx.cr6.eq) goto loc_880DB158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r22)
	ctx.current_instruction = 0x880DB150;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880DB158;
	sub_880FA448(ctx, base);
loc_880DB158:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880DB158;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r22)
	ctx.current_instruction = 0x880DB160;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880db1fc
	if (ctx.cr6.eq) goto loc_880DB1FC;
	// bl 0x880e6960
	ctx.lr = 0x880DB174;
	sub_880E6960(ctx, base);
loc_880DB174:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880DB174;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r10,20880(r31)
	ctx.current_instruction = 0x880DB178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20880);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB180;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r11)
	ctx.current_instruction = 0x880DB18C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,-8(r11)
	ctx.current_instruction = 0x880DB190;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x880e6960
	ctx.lr = 0x880DB198;
	sub_880E6960(ctx, base);
loc_880DB198:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880DB198;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880db6a0
	if (ctx.cr6.eq) goto loc_880DB6A0;
	// lbz r10,146(r22)
	ctx.current_instruction = 0x880DB1A4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r11,20880(r31)
	ctx.current_instruction = 0x880DB1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20880);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r8,28604(r31)
	ctx.current_instruction = 0x880DB1B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lwz r7,30172(r31)
	ctx.current_instruction = 0x880DB1B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30172);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,28608(r31)
	ctx.current_instruction = 0x880DB1BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28608);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-4(r6)
	ctx.current_instruction = 0x880DB1C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,28604(r31)
	ctx.current_instruction = 0x880DB1D0;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r4.u32);
	// lbz r3,146(r22)
	ctx.current_instruction = 0x880DB1D4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.current_instruction = 0x880DB1E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,30172(r31)
	ctx.current_instruction = 0x880DB1EC;
	REX_STORE_U32(ctx.r31.u32 + 30172, ctx.r5.u32);
	// stw r7,28608(r31)
	ctx.current_instruction = 0x880DB1F0;
	REX_STORE_U32(ctx.r31.u32 + 28608, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880DB1FC:
	// bl 0x880e6960
	ctx.lr = 0x880DB200;
	sub_880E6960(ctx, base);
loc_880DB200:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880DB208:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880db368
	if (!ctx.cr6.eq) goto loc_880DB368;
	// lbz r11,147(r22)
	ctx.current_instruction = 0x880DB210;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 147);
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880DB218;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880db330
	if (ctx.cr6.eq) goto loc_880DB330;
	// lwz r29,28432(r31)
	ctx.current_instruction = 0x880DB224;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28432);
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880DB228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB230;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r10,28432(r31)
	ctx.current_instruction = 0x880DB234;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r10.u32);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880DB238;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880DB244;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880DB248;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880DB250;
	sub_880E6960(ctx, base);
loc_880DB250:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880DB250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880db294
	if (ctx.cr6.eq) goto loc_880DB294;
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880DB25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880DB264;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880DB270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880DB278;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880DB27C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880DB284;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880DB288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880DB290;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880DB294:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB294;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880db2f0
	if (!ctx.cr6.eq) goto loc_880DB2F0;
	// lhzx r11,r27,r26
	ctx.current_instruction = 0x880DB2A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r26.u32);
	// lwz r5,2596(r31)
	ctx.current_instruction = 0x880DB2A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x880e6960
	ctx.lr = 0x880DB2B0;
	sub_880E6960(ctx, base);
loc_880DB2B0:
	// lwzx r10,r27,r26
	ctx.current_instruction = 0x880DB2B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB2B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880DB2BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880DB2C8;
	sub_880E6960(ctx, base);
loc_880DB2C8:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880DB2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880db330
	if (ctx.cr6.eq) goto loc_880DB330;
	// lwz r10,2596(r31)
	ctx.current_instruction = 0x880DB2D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r11,2600(r31)
	ctx.current_instruction = 0x880DB2D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28628(r31)
	ctx.current_instruction = 0x880DB2E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880DB2E8;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// b 0x880db330
	goto loc_880DB330;
loc_880DB2F0:
	// lwz r11,28012(r31)
	ctx.current_instruction = 0x880DB2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28012);
	// lwz r10,20872(r31)
	ctx.current_instruction = 0x880DB2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880DB2FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880DB300;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880DB304;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x880e6960
	ctx.lr = 0x880DB30C;
	sub_880E6960(ctx, base);
loc_880DB30C:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880DB30C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880db330
	if (ctx.cr6.eq) goto loc_880DB330;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880DB318;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,20872(r31)
	ctx.current_instruction = 0x880DB31C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880DB320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x880DB324;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,28624(r31)
	ctx.current_instruction = 0x880DB32C;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r8.u32);
loc_880DB330:
	// lwzx r11,r27,r26
	ctx.current_instruction = 0x880DB330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880db368
	if (ctx.cr6.eq) goto loc_880DB368;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB344;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880DB350;
	sub_880E6960(ctx, base);
loc_880DB350:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db368
	if (ctx.cr6.eq) goto loc_880DB368;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880DB35C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880DB364;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880DB368:
	// lbz r11,88(r22)
	ctx.current_instruction = 0x880DB368;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880db520
	if (!ctx.cr6.eq) goto loc_880DB520;
	// lbz r10,147(r22)
	ctx.current_instruction = 0x880DB374;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 147);
	// li r24,8
	ctx.r24.s64 = 8;
	// lwz r11,20856(r31)
	ctx.current_instruction = 0x880DB37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20856);
	// extsb r23,r10
	ctx.r23.s64 = ctx.r10.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB384;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880DB390;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880DB394;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880DB39C;
	sub_880E6960(ctx, base);
loc_880DB39C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_880DB3A0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880DB3A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r27,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// lwz r25,2324(r31)
	ctx.current_instruction = 0x880DB3AC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r8,r23,r24
	ctx.r8.u64 = ctx.r23.u64 & ctx.r24.u64;
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x880db4d8
	if (ctx.cr6.eq) goto loc_880DB4D8;
	// lwz r29,28432(r31)
	ctx.current_instruction = 0x880DB3CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28432);
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880DB3D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB3D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r10,28432(r31)
	ctx.current_instruction = 0x880DB3DC;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r10.u32);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880DB3E0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880DB3EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880DB3F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x880e6960
	ctx.lr = 0x880DB3F8;
	sub_880E6960(ctx, base);
loc_880DB3F8:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880DB3F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880db43c
	if (ctx.cr6.eq) goto loc_880DB43C;
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880DB404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880DB40C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880DB418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880DB420;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880DB424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880DB42C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880DB430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880DB438;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880DB43C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB43C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880db498
	if (!ctx.cr6.eq) goto loc_880DB498;
	// lhzx r11,r26,r25
	ctx.current_instruction = 0x880DB448;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r25.u32);
	// lwz r5,2596(r31)
	ctx.current_instruction = 0x880DB44C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x880e6960
	ctx.lr = 0x880DB458;
	sub_880E6960(ctx, base);
loc_880DB458:
	// lwzx r10,r26,r25
	ctx.current_instruction = 0x880DB458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB45C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880DB464;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880DB470;
	sub_880E6960(ctx, base);
loc_880DB470:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880DB470;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880db4d8
	if (ctx.cr6.eq) goto loc_880DB4D8;
	// lwz r10,2596(r31)
	ctx.current_instruction = 0x880DB47C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r11,2600(r31)
	ctx.current_instruction = 0x880DB480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28628(r31)
	ctx.current_instruction = 0x880DB488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880DB490;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// b 0x880db4d8
	goto loc_880DB4D8;
loc_880DB498:
	// lwz r11,28012(r31)
	ctx.current_instruction = 0x880DB498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28012);
	// lwz r10,20872(r31)
	ctx.current_instruction = 0x880DB49C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880DB4A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880DB4A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880DB4AC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x880e6960
	ctx.lr = 0x880DB4B4;
	sub_880E6960(ctx, base);
loc_880DB4B4:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880DB4B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880db4d8
	if (ctx.cr6.eq) goto loc_880DB4D8;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880DB4C0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,20872(r31)
	ctx.current_instruction = 0x880DB4C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880DB4C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x880DB4CC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,28624(r31)
	ctx.current_instruction = 0x880DB4D4;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r8.u32);
loc_880DB4D8:
	// lwzx r11,r26,r25
	ctx.current_instruction = 0x880DB4D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880db510
	if (ctx.cr6.eq) goto loc_880DB510;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB4EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880DB4F8;
	sub_880E6960(ctx, base);
loc_880DB4F8:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880DB4F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db510
	if (ctx.cr6.eq) goto loc_880DB510;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880DB504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880DB50C;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880DB510:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x880db3a0
	if (ctx.cr6.lt) goto loc_880DB3A0;
loc_880DB520:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880DB520;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880db6a0
	if (ctx.cr6.eq) goto loc_880DB6A0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,20876(r31)
	ctx.current_instruction = 0x880DB530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20876);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB534;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r11)
	ctx.current_instruction = 0x880DB544;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,-8(r11)
	ctx.current_instruction = 0x880DB548;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x880e6960
	ctx.lr = 0x880DB550;
	sub_880E6960(ctx, base);
loc_880DB550:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880DB550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880db5ac
	if (ctx.cr6.eq) goto loc_880DB5AC;
	// lbz r10,146(r22)
	ctx.current_instruction = 0x880DB55C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r11,20876(r31)
	ctx.current_instruction = 0x880DB560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20876);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r8,28604(r31)
	ctx.current_instruction = 0x880DB568;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lwz r7,30164(r31)
	ctx.current_instruction = 0x880DB56C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30164);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,28612(r31)
	ctx.current_instruction = 0x880DB574;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28612);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-4(r6)
	ctx.current_instruction = 0x880DB580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,28604(r31)
	ctx.current_instruction = 0x880DB588;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r4.u32);
	// lbz r3,146(r22)
	ctx.current_instruction = 0x880DB58C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.current_instruction = 0x880DB59C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,30164(r31)
	ctx.current_instruction = 0x880DB5A4;
	REX_STORE_U32(ctx.r31.u32 + 30164, ctx.r5.u32);
	// stw r7,28612(r31)
	ctx.current_instruction = 0x880DB5A8;
	REX_STORE_U32(ctx.r31.u32 + 28612, ctx.r7.u32);
loc_880DB5AC:
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880DB5AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db5c4
	if (ctx.cr6.eq) goto loc_880DB5C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r22)
	ctx.current_instruction = 0x880DB5BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880DB5C4;
	sub_880FA448(ctx, base);
loc_880DB5C4:
	// lwz r11,1608(r31)
	ctx.current_instruction = 0x880DB5C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db6a0
	if (ctx.cr6.eq) goto loc_880DB6A0;
	// lwz r11,1564(r31)
	ctx.current_instruction = 0x880DB5D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880db6a0
	if (ctx.cr6.eq) goto loc_880DB6A0;
	// lwz r10,0(r22)
	ctx.current_instruction = 0x880DB5DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r22,4
	ctx.r9.s64 = ctx.r22.s64 + 4;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwinm r10,r8,7,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x8;
loc_880DB5F0:
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880DB5F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880db60c
	if (ctx.cr6.eq) goto loc_880DB60C;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r7,74(r8)
	ctx.current_instruction = 0x880DB600;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 74);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880db620
	if (ctx.cr6.eq) goto loc_880DB620;
loc_880DB60C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880db620
	if (!ctx.cr6.lt) goto loc_880DB620;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x880db5f0
	goto loc_880DB5F0;
loc_880DB620:
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,56(r11)
	ctx.current_instruction = 0x880DB624;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880db644
	if (!ctx.cr6.eq) goto loc_880DB644;
	// lbz r11,128(r11)
	ctx.current_instruction = 0x880DB634;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880db66c
	goto loc_880DB66C;
loc_880DB644:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x880db660
	if (!ctx.cr6.eq) goto loc_880DB660;
	// lbz r11,134(r11)
	ctx.current_instruction = 0x880DB64C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// b 0x880db66c
	goto loc_880DB66C;
loc_880DB660:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x880db66c
	if (!ctx.cr6.eq) goto loc_880DB66C;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
loc_880DB66C:
	// lwz r11,30208(r31)
	ctx.current_instruction = 0x880DB66C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880DB674;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880DB67C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880DB680;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880DB688;
	sub_880E6960(ctx, base);
loc_880DB688:
	// lwz r11,30208(r31)
	ctx.current_instruction = 0x880DB688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// lwz r10,30180(r31)
	ctx.current_instruction = 0x880DB68C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30180);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x880DB694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,30180(r31)
	ctx.current_instruction = 0x880DB69C;
	REX_STORE_U32(ctx.r31.u32 + 30180, ctx.r8.u32);
loc_880DB6A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EDF78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EDF78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EDF78;
	ctx.current_instruction = 0x880EDF78;
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x880EDF78;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880EDF7C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r3,-10
	ctx.r10.s64 = ctx.r3.s64 + -10;
	// addi r11,r5,22
	ctx.r11.s64 = ctx.r5.s64 + 22;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880EDF90:
	// lhz r8,-6(r11)
	ctx.current_instruction = 0x880EDF90;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -6);
	// lhz r9,-22(r11)
	ctx.current_instruction = 0x880EDF94;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -22);
	// lhz r7,-14(r11)
	ctx.current_instruction = 0x880EDF98;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x880EDFA4;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mulli r6,r9,22
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(22));
	// mulli r30,r8,22
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(22));
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// sth r5,12(r10)
	ctx.current_instruction = 0x880EE034;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r5.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// sth r6,10(r10)
	ctx.current_instruction = 0x880EE03C;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r6.u16);
	// sth r4,14(r10)
	ctx.current_instruction = 0x880EE040;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r4.u16);
	// sthu r9,16(r10)
	ctx.current_instruction = 0x880EE044;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880edf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EDF90;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,46
	ctx.r11.s64 = ctx.r3.s64 + 46;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880EE058:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880EE058;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,-46(r11)
	ctx.current_instruction = 0x880EE05C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -46);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r5,-30(r11)
	ctx.current_instruction = 0x880EE064;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// lhz r6,-14(r11)
	ctx.current_instruction = 0x880EE068;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r3,r8,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r8.u64;
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r4,r9,11
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// mulli r30,r10,11
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r30,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r30.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r3,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 6;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r9,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 6;
	// srawi r8,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 6;
	// srawi r7,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 6;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// sth r6,-46(r11)
	ctx.current_instruction = 0x880EE110;
	REX_STORE_U16(ctx.r11.u32 + -46, ctx.r6.u16);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sth r5,-30(r11)
	ctx.current_instruction = 0x880EE118;
	REX_STORE_U16(ctx.r11.u32 + -30, ctx.r5.u16);
	// sth r4,-14(r11)
	ctx.current_instruction = 0x880EE11C;
	REX_STORE_U16(ctx.r11.u32 + -14, ctx.r4.u16);
	// sthu r3,2(r11)
	ctx.current_instruction = 0x880EE120;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x880ee058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EE058;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880EE128;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880EE12C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F32B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F32B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F32B8) {
			switch (rex_dispatch_address) {
				case 0x880F32C0:
				case 0x880F3338:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F32B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F32C0: goto loc_880F32C0;
		case 0x880F3338: goto loc_880F3338;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880F32C0;
	__savegprlr_29(ctx, base);
loc_880F32C0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F32C0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r4)
	ctx.current_instruction = 0x880F32C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f32d8
	if (ctx.cr6.eq) goto loc_880F32D8;
	// lwz r11,-700(r4)
	ctx.current_instruction = 0x880F32D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -700);
loc_880F32D8:
	// lwz r8,268(r4)
	ctx.current_instruction = 0x880F32D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// lis r7,-30679
	ctx.r7.s64 = -2010578944;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880F32E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880F32E8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r5,1384(r3)
	ctx.current_instruction = 0x880F32EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// lwz r11,1380(r3)
	ctx.current_instruction = 0x880F32F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// stw r8,100(r1)
	ctx.current_instruction = 0x880F32F4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880F32FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// lwz r30,28132(r3)
	ctx.current_instruction = 0x880F3304;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28132);
	// lwz r8,1624(r3)
	ctx.current_instruction = 0x880F3308;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// mullw r11,r4,r30
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// lwz r6,19100(r3)
	ctx.current_instruction = 0x880F3310;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 19100);
	// lwz r5,19096(r3)
	ctx.current_instruction = 0x880F3314;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 19096);
	// lwz r31,19092(r3)
	ctx.current_instruction = 0x880F3318;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 19092);
	// lwz r7,-25280(r7)
	ctx.current_instruction = 0x880F331C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -25280);
	// mullw r4,r29,r30
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// bl 0x88108ad8
	ctx.lr = 0x880F3338;
	sub_88108AD8(ctx, base);
loc_880F3338:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F4470) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F4470;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F4470) {
			switch (rex_dispatch_address) {
				case 0x880F4478:
				case 0x880F44B4:
				case 0x880F45A0:
				case 0x880F4780:
				case 0x880F478C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F4470;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F4478: goto loc_880F4478;
		case 0x880F44B4: goto loc_880F44B4;
		case 0x880F45A0: goto loc_880F45A0;
		case 0x880F4780: goto loc_880F4780;
		case 0x880F478C: goto loc_880F478C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880F4478;
	__savegprlr_17(ctx, base);
loc_880F4478:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880F4478;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,728(r3)
	ctx.current_instruction = 0x880F447C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r17,32767
	ctx.r17.s64 = 2147418112;
	// lwz r29,7764(r3)
	ctx.current_instruction = 0x880F4488;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lwz r28,7768(r3)
	ctx.current_instruction = 0x880F448C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 7768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ori r17,r17,65535
	ctx.r17.u64 = ctx.r17.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880f44cc
	if (!ctx.cr6.gt) goto loc_880F44CC;
loc_880F44A4:
	// li r5,276
	ctx.r5.s64 = 276;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880F44B4;
	sub_880547A0(ctx, base);
loc_880F44B4:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880F44B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880f44a4
	if (ctx.cr6.lt) goto loc_880F44A4;
loc_880F44CC:
	// lwz r26,1624(r31)
	ctx.current_instruction = 0x880F44CC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880f451c
	if (ctx.cr6.eq) goto loc_880F451C;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// addi r11,r31,3604
	ctx.r11.s64 = ctx.r31.s64 + 3604;
loc_880F44EC:
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x880F44EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880f44fc
	if (ctx.cr6.gt) goto loc_880F44FC;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
loc_880F44FC:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880F44FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880f450c
	if (ctx.cr6.gt) goto loc_880F450C;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
loc_880F450C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,968
	ctx.r11.s64 = ctx.r11.s64 + 968;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880f44ec
	if (ctx.cr6.lt) goto loc_880F44EC;
loc_880F451C:
	// lwz r23,80(r1)
	ctx.current_instruction = 0x880F451C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r22,80(r1)
	ctx.current_instruction = 0x880F4524;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,80(r1)
	ctx.current_instruction = 0x880F4528;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,80(r1)
	ctx.current_instruction = 0x880F452C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r20,80(r1)
	ctx.current_instruction = 0x880F4530;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880F4534:
	// lwz r11,31052(r31)
	ctx.current_instruction = 0x880F4534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31052);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x880f4548
	if (ctx.cr6.eq) goto loc_880F4548;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880f46e4
	if (!ctx.cr6.eq) goto loc_880F46E4;
loc_880F4548:
	// stw r25,20036(r31)
	ctx.current_instruction = 0x880F4548;
	REX_STORE_U32(ctx.r31.u32 + 20036, ctx.r25.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880f4588
	if (ctx.cr6.eq) goto loc_880F4588;
	// addi r11,r31,2632
	ctx.r11.s64 = ctx.r31.s64 + 2632;
loc_880F455C:
	// stw r27,956(r11)
	ctx.current_instruction = 0x880F455C;
	REX_STORE_U32(ctx.r11.u32 + 956, ctx.r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r27,948(r11)
	ctx.current_instruction = 0x880F4564;
	REX_STORE_U32(ctx.r11.u32 + 948, ctx.r27.u32);
	// stw r27,944(r11)
	ctx.current_instruction = 0x880F4568;
	REX_STORE_U32(ctx.r11.u32 + 944, ctx.r27.u32);
	// stw r27,940(r11)
	ctx.current_instruction = 0x880F456C;
	REX_STORE_U32(ctx.r11.u32 + 940, ctx.r27.u32);
	// stw r27,952(r11)
	ctx.current_instruction = 0x880F4570;
	REX_STORE_U32(ctx.r11.u32 + 952, ctx.r27.u32);
	// stw r27,972(r11)
	ctx.current_instruction = 0x880F4574;
	REX_STORE_U32(ctx.r11.u32 + 972, ctx.r27.u32);
	// stwu r27,968(r11)
	ctx.current_instruction = 0x880F4578;
	ea = 968 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwz r9,1624(r31)
	ctx.current_instruction = 0x880F457C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880f455c
	if (ctx.cr6.lt) goto loc_880F455C;
loc_880F4588:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880F4588;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880f45a0
	if (!ctx.cr6.eq) goto loc_880F45A0;
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f2f00
	ctx.lr = 0x880F45A0;
	sub_880F2F00(ctx, base);
loc_880F45A0:
	// lwz r26,1624(r31)
	ctx.current_instruction = 0x880F45A0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880f4634
	if (ctx.cr6.eq) goto loc_880F4634;
	// addi r3,r31,3604
	ctx.r3.s64 = ctx.r31.s64 + 3604;
	// addi r11,r3,-988
	ctx.r11.s64 = ctx.r3.s64 + -988;
loc_880F45CC:
	// lwz r9,984(r11)
	ctx.current_instruction = 0x880F45CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 984);
	// lwz r8,3600(r31)
	ctx.current_instruction = 0x880F45D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3600);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x880f45e0
	if (!ctx.cr6.gt) goto loc_880F45E0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_880F45E0:
	// lwz r8,0(r3)
	ctx.current_instruction = 0x880F45E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,3600(r31)
	ctx.current_instruction = 0x880F45E4;
	REX_STORE_U32(ctx.r31.u32 + 3600, ctx.r9.u32);
	// lwz r9,988(r11)
	ctx.current_instruction = 0x880F45E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 988);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x880f45f8
	if (!ctx.cr6.gt) goto loc_880F45F8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_880F45F8:
	// stw r9,0(r3)
	ctx.current_instruction = 0x880F45F8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,972(r11)
	ctx.current_instruction = 0x880F4600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 972);
	// lwz r6,956(r11)
	ctx.current_instruction = 0x880F4604;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 956);
	// lwz r9,960(r11)
	ctx.current_instruction = 0x880F4608;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 960);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r8,964(r11)
	ctx.current_instruction = 0x880F4610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 964);
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lwzu r9,968(r11)
	ctx.current_instruction = 0x880F4618;
	ea = 968 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r8,1624(r31)
	ctx.current_instruction = 0x880F4624;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880f45cc
	if (ctx.cr6.lt) goto loc_880F45CC;
loc_880F4634:
	// lwz r11,3600(r31)
	ctx.current_instruction = 0x880F4634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3600);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x880f4644
	if (!ctx.cr6.lt) goto loc_880F4644;
	// stw r18,3600(r31)
	ctx.current_instruction = 0x880F4640;
	REX_STORE_U32(ctx.r31.u32 + 3600, ctx.r18.u32);
loc_880F4644:
	// lwz r11,3604(r31)
	ctx.current_instruction = 0x880F4644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3604);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x880f4654
	if (!ctx.cr6.lt) goto loc_880F4654;
	// stw r19,3604(r31)
	ctx.current_instruction = 0x880F4650;
	REX_STORE_U32(ctx.r31.u32 + 3604, ctx.r19.u32);
loc_880F4654:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880f466c
	if (!ctx.cr6.lt) goto loc_880F466C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_880F466C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f467c
	if (!ctx.cr6.lt) goto loc_880F467C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_880F467C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f468c
	if (!ctx.cr6.lt) goto loc_880F468C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_880F468C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f46a0
	if (!ctx.cr6.lt) goto loc_880F46A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x880f46a4
	goto loc_880F46A4;
loc_880F46A0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_880F46A4:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x880f46e4
	if (!ctx.cr6.lt) goto loc_880F46E4;
	// lwz r22,3600(r31)
	ctx.current_instruction = 0x880F46AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 3600);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// lwz r21,3604(r31)
	ctx.current_instruction = 0x880F46B4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 3604);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f46dc
	if (ctx.cr6.eq) goto loc_880F46DC;
	// lwz r11,7764(r31)
	ctx.current_instruction = 0x880F46C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,7768(r31)
	ctx.current_instruction = 0x880F46CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// stw r11,7768(r31)
	ctx.current_instruction = 0x880F46D0;
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r11.u32);
	// stw r10,7764(r31)
	ctx.current_instruction = 0x880F46D4;
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r10.u32);
	// b 0x880f46e4
	goto loc_880F46E4;
loc_880F46DC:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
loc_880F46E4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// blt cr6,0x880f4534
	if (ctx.cr6.lt) goto loc_880F4534;
	// lwz r11,7764(r31)
	ctx.current_instruction = 0x880F46F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880f4714
	if (ctx.cr6.eq) goto loc_880F4714;
	// lwz r9,7768(r31)
	ctx.current_instruction = 0x880F46FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,7768(r31)
	ctx.current_instruction = 0x880F4704;
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r11.u32);
	// stw r10,1564(r31)
	ctx.current_instruction = 0x880F4708;
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r10.u32);
	// stw r9,7764(r31)
	ctx.current_instruction = 0x880F470C;
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r9.u32);
	// b 0x880f4764
	goto loc_880F4764;
loc_880F4714:
	// lwz r10,728(r31)
	ctx.current_instruction = 0x880F4714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880f4760
	if (!ctx.cr6.gt) goto loc_880F4760;
	// extsb r10,r20
	ctx.r10.s64 = ctx.r20.s8;
	// addi r11,r11,-215
	ctx.r11.s64 = ctx.r11.s64 + -215;
loc_880F472C:
	// lwz r8,215(r11)
	ctx.current_instruction = 0x880F472C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 215);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,0,4,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r7,215(r11)
	ctx.current_instruction = 0x880F4738;
	REX_STORE_U32(ctx.r11.u32 + 215, ctx.r7.u32);
	// stb r10,271(r11)
	ctx.current_instruction = 0x880F473C;
	REX_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
	// stb r10,272(r11)
	ctx.current_instruction = 0x880F4740;
	REX_STORE_U8(ctx.r11.u32 + 272, ctx.r10.u8);
	// stb r10,273(r11)
	ctx.current_instruction = 0x880F4744;
	REX_STORE_U8(ctx.r11.u32 + 273, ctx.r10.u8);
	// stb r10,274(r11)
	ctx.current_instruction = 0x880F4748;
	REX_STORE_U8(ctx.r11.u32 + 274, ctx.r10.u8);
	// stb r10,275(r11)
	ctx.current_instruction = 0x880F474C;
	REX_STORE_U8(ctx.r11.u32 + 275, ctx.r10.u8);
	// stbu r10,276(r11)
	ctx.current_instruction = 0x880F4750;
	ea = 276 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// lwz r6,728(r31)
	ctx.current_instruction = 0x880F4754;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x880f472c
	if (ctx.cr6.lt) goto loc_880F472C;
loc_880F4760:
	// stw r27,1564(r31)
	ctx.current_instruction = 0x880F4760;
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r27.u32);
loc_880F4764:
	// stw r22,3600(r31)
	ctx.current_instruction = 0x880F4764;
	REX_STORE_U32(ctx.r31.u32 + 3600, ctx.r22.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r21,3604(r31)
	ctx.current_instruction = 0x880F476C;
	REX_STORE_U32(ctx.r31.u32 + 3604, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,1568(r31)
	ctx.current_instruction = 0x880F4774;
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r20.u32);
	// stw r23,20036(r31)
	ctx.current_instruction = 0x880F4778;
	REX_STORE_U32(ctx.r31.u32 + 20036, ctx.r23.u32);
	// bl 0x8806f5e8
	ctx.lr = 0x880F4780;
	sub_8806F5E8(ctx, base);
loc_880F4780:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f670
	ctx.lr = 0x880F478C;
	sub_8806F670(ctx, base);
loc_880F478C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FA448) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880FA448);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA448;
	ctx.current_instruction = 0x880FA448;
	PPCRegister temp{};
	// lwz r11,2436(r3)
	ctx.current_instruction = 0x880FA448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lbz r11,2432(r3)
	ctx.current_instruction = 0x880FA454;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2432);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880fa48c
	if (!ctx.cr6.eq) goto loc_880FA48C;
	// lwz r11,1416(r3)
	ctx.current_instruction = 0x880FA460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,1424(r3)
	ctx.current_instruction = 0x880FA468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x880FA470;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_880FA48C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x880fa1f8
	sub_880FA1F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC4A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC4A8) {
			switch (rex_dispatch_address) {
				case 0x880FC4B0:
				case 0x880FC4E0:
				case 0x880FC4F8:
				case 0x880FC510:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC4A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC4B0: goto loc_880FC4B0;
		case 0x880FC4E0: goto loc_880FC4E0;
		case 0x880FC4F8: goto loc_880FC4F8;
		case 0x880FC510: goto loc_880FC510;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880FC4B0;
	__savegprlr_29(ctx, base);
loc_880FC4B0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880FC4B0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc52c
	if (ctx.cr6.eq) goto loc_880FC52C;
	// lwz r3,68(r3)
	ctx.current_instruction = 0x880FC4C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc4e4
	if (ctx.cr6.eq) goto loc_880FC4E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC4E0;
	sub_88050358(ctx, base);
loc_880FC4E0:
	// stw r30,68(r31)
	ctx.current_instruction = 0x880FC4E0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_880FC4E4:
	// lwz r3,92(r31)
	ctx.current_instruction = 0x880FC4E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc4fc
	if (ctx.cr6.eq) goto loc_880FC4FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC4F8;
	sub_88050358(ctx, base);
loc_880FC4F8:
	// stw r30,92(r31)
	ctx.current_instruction = 0x880FC4F8;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_880FC4FC:
	// lwz r3,116(r31)
	ctx.current_instruction = 0x880FC4FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc514
	if (ctx.cr6.eq) goto loc_880FC514;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC510;
	sub_88050358(ctx, base);
loc_880FC510:
	// stw r30,116(r31)
	ctx.current_instruction = 0x880FC510;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_880FC514:
	// stw r30,64(r31)
	ctx.current_instruction = 0x880FC514;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	ctx.current_instruction = 0x880FC518;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,88(r31)
	ctx.current_instruction = 0x880FC51C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	ctx.current_instruction = 0x880FC520;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,112(r31)
	ctx.current_instruction = 0x880FC524;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	ctx.current_instruction = 0x880FC528;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_880FC52C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FFA50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FFA50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FFA50) {
			switch (rex_dispatch_address) {
				case 0x880FFA58:
				case 0x880FFAD0:
				case 0x880FFB24:
				case 0x880FFB7C:
				case 0x880FFBD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FFA50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FFA58: goto loc_880FFA58;
		case 0x880FFAD0: goto loc_880FFAD0;
		case 0x880FFB24: goto loc_880FFB24;
		case 0x880FFB7C: goto loc_880FFB7C;
		case 0x880FFBD0: goto loc_880FFBD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880FFA58;
	__savegprlr_26(ctx, base);
loc_880FFA58:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880FFA58;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.current_instruction = 0x880FFA5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x880FFA6C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x880FFA74;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// bge cr6,0x880ffb30
	if (!ctx.cr6.lt) goto loc_880FFB30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880ffbdc
	if (!ctx.cr6.gt) goto loc_880FFBDC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880ffaec
	if (!ctx.cr6.gt) goto loc_880FFAEC;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_880FFAA0:
	// lwz r11,20040(r31)
	ctx.current_instruction = 0x880FFAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20040);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r10,6(r28)
	ctx.current_instruction = 0x880FFAA8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,5003
	ctx.r9.s64 = ctx.r11.s64 + 5003;
	// lhzu r11,4(r28)
	ctx.current_instruction = 0x880FFAB4;
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x880FFAC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8810f120
	ctx.lr = 0x880FFAD0;
	sub_8810F120(ctx, base);
loc_880FFAD0:
	// lhz r5,0(r27)
	ctx.current_instruction = 0x880FFAD0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880ffaa0
	if (ctx.cr6.lt) goto loc_880FFAA0;
loc_880FFAEC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20040(r31)
	ctx.current_instruction = 0x880FFAF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20040);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r10,5006
	ctx.r10.s64 = ctx.r10.s64 + 5006;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.current_instruction = 0x880FFB0C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.current_instruction = 0x880FFB10;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r6,r9,r31
	ctx.current_instruction = 0x880FFB1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x8810f120
	ctx.lr = 0x880FFB24;
	sub_8810F120(ctx, base);
loc_880FFB24:
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880FFB30:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880ffbdc
	if (!ctx.cr6.gt) goto loc_880FFBDC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880ffb98
	if (!ctx.cr6.gt) goto loc_880FFB98;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_880FFB4C:
	// lwz r11,20036(r31)
	ctx.current_instruction = 0x880FFB4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r10,6(r28)
	ctx.current_instruction = 0x880FFB54;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,4997
	ctx.r9.s64 = ctx.r11.s64 + 4997;
	// lhzu r11,4(r28)
	ctx.current_instruction = 0x880FFB60;
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x880FFB74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8810f120
	ctx.lr = 0x880FFB7C;
	sub_8810F120(ctx, base);
loc_880FFB7C:
	// lhz r5,0(r27)
	ctx.current_instruction = 0x880FFB7C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880ffb4c
	if (ctx.cr6.lt) goto loc_880FFB4C;
loc_880FFB98:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20036(r31)
	ctx.current_instruction = 0x880FFB9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r10,5000
	ctx.r10.s64 = ctx.r10.s64 + 5000;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.current_instruction = 0x880FFBB8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.current_instruction = 0x880FFBBC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r6,r9,r31
	ctx.current_instruction = 0x880FFBC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x8810f120
	ctx.lr = 0x880FFBD0;
	sub_8810F120(ctx, base);
loc_880FFBD0:
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880FFBDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88103740) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88103740;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88103740) {
			switch (rex_dispatch_address) {
				case 0x88103748:
				case 0x881037F4:
				case 0x88103924:
				case 0x88103944:
				case 0x88103950:
				case 0x88103998:
				case 0x88103A04:
				case 0x88103A4C:
				case 0x88103A94:
				case 0x88103AE8:
				case 0x88103B30:
				case 0x88103B88:
				case 0x88103BE0:
				case 0x88103C40:
				case 0x88103C9C:
				case 0x88103D90:
				case 0x88103DB0:
				case 0x88103DCC:
				case 0x88103E18:
				case 0x88103E74:
				case 0x88103EBC:
				case 0x88103F04:
				case 0x88103F58:
				case 0x88103FA0:
				case 0x88103FF8:
				case 0x88104050:
				case 0x881040B8:
				case 0x88104114:
				case 0x881041B4:
				case 0x881041D4:
				case 0x881041F4:
				case 0x88104240:
				case 0x881042A4:
				case 0x881042EC:
				case 0x88104334:
				case 0x88104388:
				case 0x881043D0:
				case 0x88104428:
				case 0x88104480:
				case 0x881044E0:
				case 0x8810453C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88103740;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88103748: goto loc_88103748;
		case 0x881037F4: goto loc_881037F4;
		case 0x88103924: goto loc_88103924;
		case 0x88103944: goto loc_88103944;
		case 0x88103950: goto loc_88103950;
		case 0x88103998: goto loc_88103998;
		case 0x88103A04: goto loc_88103A04;
		case 0x88103A4C: goto loc_88103A4C;
		case 0x88103A94: goto loc_88103A94;
		case 0x88103AE8: goto loc_88103AE8;
		case 0x88103B30: goto loc_88103B30;
		case 0x88103B88: goto loc_88103B88;
		case 0x88103BE0: goto loc_88103BE0;
		case 0x88103C40: goto loc_88103C40;
		case 0x88103C9C: goto loc_88103C9C;
		case 0x88103D90: goto loc_88103D90;
		case 0x88103DB0: goto loc_88103DB0;
		case 0x88103DCC: goto loc_88103DCC;
		case 0x88103E18: goto loc_88103E18;
		case 0x88103E74: goto loc_88103E74;
		case 0x88103EBC: goto loc_88103EBC;
		case 0x88103F04: goto loc_88103F04;
		case 0x88103F58: goto loc_88103F58;
		case 0x88103FA0: goto loc_88103FA0;
		case 0x88103FF8: goto loc_88103FF8;
		case 0x88104050: goto loc_88104050;
		case 0x881040B8: goto loc_881040B8;
		case 0x88104114: goto loc_88104114;
		case 0x881041B4: goto loc_881041B4;
		case 0x881041D4: goto loc_881041D4;
		case 0x881041F4: goto loc_881041F4;
		case 0x88104240: goto loc_88104240;
		case 0x881042A4: goto loc_881042A4;
		case 0x881042EC: goto loc_881042EC;
		case 0x88104334: goto loc_88104334;
		case 0x88104388: goto loc_88104388;
		case 0x881043D0: goto loc_881043D0;
		case 0x88104428: goto loc_88104428;
		case 0x88104480: goto loc_88104480;
		case 0x881044E0: goto loc_881044E0;
		case 0x8810453C: goto loc_8810453C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88103748;
	__savegprlr_14(ctx, base);
loc_88103748:
	// stwu r1,-1824(r1)
	ctx.current_instruction = 0x88103748;
	ea = -1824 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r4)
	ctx.current_instruction = 0x8810374C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r8,1884(r1)
	ctx.current_instruction = 0x88103758;
	REX_STORE_U32(ctx.r1.u32 + 1884, ctx.r8.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r9,1892(r1)
	ctx.current_instruction = 0x88103760;
	REX_STORE_U32(ctx.r1.u32 + 1892, ctx.r9.u32);
	// lwz r9,27940(r3)
	ctx.current_instruction = 0x88103764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mulli r8,r11,52
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x8810376C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// stw r10,1900(r1)
	ctx.current_instruction = 0x88103770;
	REX_STORE_U32(ctx.r1.u32 + 1900, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,120(r1)
	ctx.current_instruction = 0x88103784;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881037a4
	if (ctx.cr6.eq) goto loc_881037A4;
	// lbz r9,88(r4)
	ctx.current_instruction = 0x88103790;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 88);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x881037bc
	if (ctx.cr6.eq) goto loc_881037BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881037fc
	if (!ctx.cr6.eq) goto loc_881037FC;
loc_881037A4:
	// lbz r11,88(r30)
	ctx.current_instruction = 0x881037A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881037fc
	if (!ctx.cr6.eq) goto loc_881037FC;
	// lbz r11,74(r30)
	ctx.current_instruction = 0x881037B0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881037fc
	if (ctx.cr6.eq) goto loc_881037FC;
loc_881037BC:
	// lwz r3,1916(r1)
	ctx.current_instruction = 0x881037BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,1924(r1)
	ctx.current_instruction = 0x881037C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r27,1908(r1)
	ctx.current_instruction = 0x881037CC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1908);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r5,108(r1)
	ctx.current_instruction = 0x881037D4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,92(r1)
	ctx.current_instruction = 0x881037E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x881037E8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x881037EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x881025f8
	ctx.lr = 0x881037F4;
	sub_881025F8(ctx, base);
loc_881037F4:
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881037FC:
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,156
	ctx.r10.s64 = ctx.r30.s64 + 156;
	// addi r9,r1,191
	ctx.r9.s64 = ctx.r1.s64 + 191;
	// addi r19,r30,128
	ctx.r19.s64 = ctx.r30.s64 + 128;
	// addi r20,r30,134
	ctx.r20.s64 = ctx.r30.s64 + 134;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r27,r9,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8810381C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r20,140(r1)
	ctx.current_instruction = 0x88103820;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_88103828:
	// stwu r10,4(r11)
	ctx.current_instruction = 0x88103828;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88103828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88103828;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88103844:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88103844;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88103844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88103844;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 + 204;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88103860:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88103860;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88103860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88103860;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// addi r21,r30,140
	ctx.r21.s64 = ctx.r30.s64 + 140;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88103880:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88103880;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88103880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88103880;
	// addi r22,r30,180
	ctx.r22.s64 = ctx.r30.s64 + 180;
	// lwz r23,2004(r1)
	ctx.current_instruction = 0x8810388C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2004);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r18,1996(r1)
	ctx.current_instruction = 0x88103894;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1996);
	// addi r10,r30,156
	ctx.r10.s64 = ctx.r30.s64 + 156;
	// lwz r14,1932(r1)
	ctx.current_instruction = 0x8810389C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1932);
	// subf r16,r22,r11
	ctx.r16.u64 = ctx.r11.u64 - ctx.r22.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 + 204;
	// stw r16,124(r1)
	ctx.current_instruction = 0x881038AC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r10,144(r1)
	ctx.current_instruction = 0x881038B4;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// subf r8,r22,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r22.u64;
	// addi r7,r1,767
	ctx.r7.s64 = ctx.r1.s64 + 767;
	// addi r6,r9,23328
	ctx.r6.s64 = ctx.r9.s64 + 23328;
	// stw r8,132(r1)
	ctx.current_instruction = 0x881038C4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// rlwinm r15,r7,0,0,25
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFC0;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// subf r4,r22,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r22.u64;
	// stw r15,128(r1)
	ctx.current_instruction = 0x881038D8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r5,136(r1)
	ctx.current_instruction = 0x881038E0;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r4,112(r1)
	ctx.current_instruction = 0x881038E8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// subf r17,r20,r19
	ctx.r17.u64 = ctx.r19.u64 - ctx.r20.u64;
	// b 0x881038f8
	goto loc_881038F8;
loc_881038F4:
	// lwz r24,1884(r1)
	ctx.current_instruction = 0x881038F4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1884);
loc_881038F8:
	// addi r11,r30,74
	ctx.r11.s64 = ctx.r30.s64 + 74;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r11,r11,r26
	ctx.current_instruction = 0x88103908;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88103948
	if (ctx.cr6.eq) goto loc_88103948;
	// lwz r11,8072(r31)
	ctx.current_instruction = 0x88103914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103924:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r9,120(r1)
	ctx.current_instruction = 0x88103928;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,1916(r1)
	ctx.current_instruction = 0x88103930;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fed60
	ctx.lr = 0x88103944;
	sub_880FED60(ctx, base);
loc_88103944:
	// b 0x88103cbc
	goto loc_88103CBC;
loc_88103948:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// bl 0x8813d380
	ctx.lr = 0x88103950;
	sub_8813D380(ctx, base);
loc_88103950:
	// lwz r8,144(r1)
	ctx.current_instruction = 0x88103950;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r16,r22
	ctx.r11.u64 = ctx.r16.u64 + ctx.r22.u64;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88103958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88103960;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,1924(r1)
	ctx.current_instruction = 0x88103968;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,1916(r1)
	ctx.current_instruction = 0x88103970;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103978;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x8810397C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103980;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r16,8208(r31)
	ctx.current_instruction = 0x88103988;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8810398C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88103998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103998:
	// lwz r16,124(r1)
	ctx.current_instruction = 0x88103998;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stwx r3,r16,r22
	ctx.current_instruction = 0x8810399C;
	REX_STORE_U32(ctx.r16.u32 + ctx.r22.u32, ctx.r3.u32);
	// lwz r10,1608(r31)
	ctx.current_instruction = 0x881039A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88103cbc
	if (ctx.cr6.eq) goto loc_88103CBC;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x881039AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881039cc
	if (ctx.cr6.eq) goto loc_881039CC;
	// lwz r11,1924(r1)
	ctx.current_instruction = 0x881039B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x881039BC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x881039e8
	if (ctx.cr6.gt) goto loc_881039E8;
loc_881039CC:
	// subf r11,r21,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r10,r17
	ctx.current_instruction = 0x881039D8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r17.u32, ctx.r11.u8);
	// stb r11,0(r10)
	ctx.current_instruction = 0x881039DC;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r25)
	ctx.current_instruction = 0x881039E0;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x88103cbc
	goto loc_88103CBC;
loc_881039E8:
	// lwz r11,8080(r31)
	ctx.current_instruction = 0x881039E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8080);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103A04:
	// subf r11,r21,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r21.u64;
	// lwz r5,1940(r1)
	ctx.current_instruction = 0x88103A08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1940);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x88103A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// add r24,r25,r11
	ctx.r24.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x88103A18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103A20;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r6,r27,128
	ctx.r6.s64 = ctx.r27.s64 + 128;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103A28;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103A30;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103A38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r20,8208(r31)
	ctx.current_instruction = 0x88103A3C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103A40;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88103A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103A4C:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r10,r24,r17
	ctx.current_instruction = 0x88103A50;
	REX_STORE_U8(ctx.r24.u32 + ctx.r17.u32, ctx.r10.u8);
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88103A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r20,96(r30)
	ctx.current_instruction = 0x88103A5C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r6,r27,192
	ctx.r6.s64 = ctx.r27.s64 + 192;
	// lwz r5,1956(r1)
	ctx.current_instruction = 0x88103A68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1956);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1948(r1)
	ctx.current_instruction = 0x88103A70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1948);
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x88103A74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x88103A78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103A80;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103A84;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103A88;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x88103A8C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bctrl 
	ctx.lr = 0x88103A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103A94:
	// lbzx r7,r24,r17
	ctx.current_instruction = 0x88103A94;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r17.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r8,132(r1)
	ctx.current_instruction = 0x88103A9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r27,256
	ctx.r6.s64 = ctx.r27.s64 + 256;
	// or r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stbx r3,r24,r17
	ctx.current_instruction = 0x88103AA8;
	REX_STORE_U8(ctx.r24.u32 + ctx.r17.u32, ctx.r3.u8);
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88103AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// add r20,r22,r8
	ctx.r20.u64 = ctx.r22.u64 + ctx.r8.u64;
	// lwz r19,96(r30)
	ctx.current_instruction = 0x88103AB4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r5,1972(r1)
	ctx.current_instruction = 0x88103AC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1972);
	// lwz r4,1964(r1)
	ctx.current_instruction = 0x88103AC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1964);
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x88103AC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x88103ACC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103AD4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103AD8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103ADC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x88103AE0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bctrl 
	ctx.lr = 0x88103AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103AE8:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,0(r24)
	ctx.current_instruction = 0x88103AEC;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r10.u8);
	// lwz r7,96(r30)
	ctx.current_instruction = 0x88103AF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88103AF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x88103B00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// addi r6,r27,320
	ctx.r6.s64 = ctx.r27.s64 + 320;
	// lwz r5,1988(r1)
	ctx.current_instruction = 0x88103B08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103B10;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x88103B14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x88103B1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// lwz r4,1980(r1)
	ctx.current_instruction = 0x88103B20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1980);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103B24;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103B28;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bctrl 
	ctx.lr = 0x88103B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103B30:
	// lbz r8,0(r24)
	ctx.current_instruction = 0x88103B30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88103B34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r20,r27,384
	ctx.r20.s64 = ctx.r27.s64 + 384;
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103B40;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// add r19,r22,r10
	ctx.r19.u64 = ctx.r22.u64 + ctx.r10.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103B48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r7,0(r24)
	ctx.current_instruction = 0x88103B4C;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r7.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88103B54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103B5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103B64;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88103B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88103B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103B7C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103B88:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r10,0(r25)
	ctx.current_instruction = 0x88103B8C;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// addi r5,r23,2
	ctx.r5.s64 = ctx.r23.s64 + 2;
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88103B94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88103B9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88103BA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// addi r6,r20,32
	ctx.r6.s64 = ctx.r20.s64 + 32;
	// lwz r16,96(r30)
	ctx.current_instruction = 0x88103BAC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r16,84(r1)
	ctx.current_instruction = 0x88103BB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// lhz r11,0(r23)
	ctx.current_instruction = 0x88103BB8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103BC0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103BC8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103BCC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r11,r18
	ctx.r16.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88103BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103BE0:
	// lbz r8,0(r25)
	ctx.current_instruction = 0x88103BE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103BE8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103BF0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r5,r23,4
	ctx.r5.s64 = ctx.r23.s64 + 4;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103BF8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stb r7,0(r25)
	ctx.current_instruction = 0x88103BFC;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r7.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88103C04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88103C0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// addi r6,r20,64
	ctx.r6.s64 = ctx.r20.s64 + 64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103C1C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88103C20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// lhz r11,2(r23)
	ctx.current_instruction = 0x88103C24;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r16
	ctx.r24.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88103C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103C40:
	// lbz r7,0(r25)
	ctx.current_instruction = 0x88103C40;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103C48;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103C50;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103C58;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stb r4,0(r25)
	ctx.current_instruction = 0x88103C60;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r4.u8);
	// addi r6,r20,96
	ctx.r6.s64 = ctx.r20.s64 + 96;
	// addi r5,r23,6
	ctx.r5.s64 = ctx.r23.s64 + 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,4(r23)
	ctx.current_instruction = 0x88103C70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88103C74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r20,96(r30)
	ctx.current_instruction = 0x88103C7C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88103C80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88103C88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x88103C94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bctrl 
	ctx.lr = 0x88103C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103C9C:
	// lbz r8,0(r25)
	ctx.current_instruction = 0x88103C9C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// lwz r16,124(r1)
	ctx.current_instruction = 0x88103CA0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// lwz r15,128(r1)
	ctx.current_instruction = 0x88103CA8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r20,140(r1)
	ctx.current_instruction = 0x88103CAC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r19,116(r1)
	ctx.current_instruction = 0x88103CB0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,1884(r1)
	ctx.current_instruction = 0x88103CB4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1884);
	// stb r7,0(r25)
	ctx.current_instruction = 0x88103CB8;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r7.u8);
loc_88103CBC:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88103CBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,1916(r1)
	ctx.current_instruction = 0x88103CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// addi r14,r14,128
	ctx.r14.s64 = ctx.r14.s64 + 128;
	// lwz r9,1948(r1)
	ctx.current_instruction = 0x88103CCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1948);
	// addi r18,r18,256
	ctx.r18.s64 = ctx.r18.s64 + 256;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// lwz r8,1964(r1)
	ctx.current_instruction = 0x88103CD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1964);
	// lwz r6,1980(r1)
	ctx.current_instruction = 0x88103CDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1980);
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// lwzx r4,r22,r11
	ctx.current_instruction = 0x88103CE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// lwz r10,1924(r1)
	ctx.current_instruction = 0x88103CEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// addi r9,r6,128
	ctx.r9.s64 = ctx.r6.s64 + 128;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1940(r1)
	ctx.current_instruction = 0x88103CF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1940);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// lwz r6,1956(r1)
	ctx.current_instruction = 0x88103D00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1956);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,1972(r1)
	ctx.current_instruction = 0x88103D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1972);
	// lwz r24,1988(r1)
	ctx.current_instruction = 0x88103D0C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1988);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r7,1916(r1)
	ctx.current_instruction = 0x88103D14;
	REX_STORE_U32(ctx.r1.u32 + 1916, ctx.r7.u32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,1884(r1)
	ctx.current_instruction = 0x88103D20;
	REX_STORE_U32(ctx.r1.u32 + 1884, ctx.r11.u32);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// stw r5,1948(r1)
	ctx.current_instruction = 0x88103D28;
	REX_STORE_U32(ctx.r1.u32 + 1948, ctx.r5.u32);
	// stw r3,1964(r1)
	ctx.current_instruction = 0x88103D2C;
	REX_STORE_U32(ctx.r1.u32 + 1964, ctx.r3.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r9,1980(r1)
	ctx.current_instruction = 0x88103D34;
	REX_STORE_U32(ctx.r1.u32 + 1980, ctx.r9.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r4,1924(r1)
	ctx.current_instruction = 0x88103D3C;
	REX_STORE_U32(ctx.r1.u32 + 1924, ctx.r4.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// stw r8,1940(r1)
	ctx.current_instruction = 0x88103D44;
	REX_STORE_U32(ctx.r1.u32 + 1940, ctx.r8.u32);
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// stw r6,1956(r1)
	ctx.current_instruction = 0x88103D4C;
	REX_STORE_U32(ctx.r1.u32 + 1956, ctx.r6.u32);
	// stw r10,1972(r1)
	ctx.current_instruction = 0x88103D50;
	REX_STORE_U32(ctx.r1.u32 + 1972, ctx.r10.u32);
	// stw r7,1988(r1)
	ctx.current_instruction = 0x88103D54;
	REX_STORE_U32(ctx.r1.u32 + 1988, ctx.r7.u32);
	// blt cr6,0x881038f4
	if (ctx.cr6.lt) goto loc_881038F4;
	// lbz r11,78(r30)
	ctx.current_instruction = 0x88103D5C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 78);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,116(r1)
	ctx.current_instruction = 0x88103D70;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88103db4
	if (ctx.cr6.eq) goto loc_88103DB4;
	// lwz r11,8072(r31)
	ctx.current_instruction = 0x88103D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1892(r1)
	ctx.current_instruction = 0x88103D84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1892);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103D90:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r9,120(r1)
	ctx.current_instruction = 0x88103D94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,1916(r1)
	ctx.current_instruction = 0x88103D9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fed60
	ctx.lr = 0x88103DB0;
	sub_880FED60(ctx, base);
loc_88103DB0:
	// b 0x88104120
	goto loc_88104120;
loc_88103DB4:
	// lwz r11,8076(r31)
	ctx.current_instruction = 0x88103DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r22,1892(r1)
	ctx.current_instruction = 0x88103DBC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1892);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103DCC:
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// lwz r25,1924(r1)
	ctx.current_instruction = 0x88103DD0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// li r26,4
	ctx.r26.s64 = 4;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88103DD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88103DE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r4,1916(r1)
	ctx.current_instruction = 0x88103DE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103DF0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103DF8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103E00;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r17,8208(r31)
	ctx.current_instruction = 0x88103E08;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103E0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88103E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103E18:
	// stw r3,16(r24)
	ctx.current_instruction = 0x88103E18;
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r3.u32);
	// lwz r10,1608(r31)
	ctx.current_instruction = 0x88103E1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88104124
	if (ctx.cr6.eq) goto loc_88104124;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x88103E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88103e44
	if (ctx.cr6.eq) goto loc_88103E44;
	// lhz r11,0(r25)
	ctx.current_instruction = 0x88103E34;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88103e58
	if (ctx.cr6.gt) goto loc_88103E58;
loc_88103E44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r19)
	ctx.current_instruction = 0x88103E48;
	REX_STORE_U8(ctx.r19.u32 + 4, ctx.r11.u8);
	// stb r11,4(r20)
	ctx.current_instruction = 0x88103E4C;
	REX_STORE_U8(ctx.r20.u32 + 4, ctx.r11.u8);
	// stb r11,4(r21)
	ctx.current_instruction = 0x88103E50;
	REX_STORE_U8(ctx.r21.u32 + 4, ctx.r11.u8);
	// b 0x88104124
	goto loc_88104124;
loc_88103E58:
	// lwz r11,8080(r31)
	ctx.current_instruction = 0x88103E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8080);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103E74:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103E78;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103E7C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x88103E88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// addi r6,r27,128
	ctx.r6.s64 = ctx.r27.s64 + 128;
	// lwz r5,1940(r1)
	ctx.current_instruction = 0x88103E90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1940);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x88103E98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103EA0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103EA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r24,8208(r31)
	ctx.current_instruction = 0x88103EAC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103EB0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88103EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103EBC:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,4(r19)
	ctx.current_instruction = 0x88103EC0;
	REX_STORE_U8(ctx.r19.u32 + 4, ctx.r10.u8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x88103EC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r6,r27,192
	ctx.r6.s64 = ctx.r27.s64 + 192;
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88103ED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1956(r1)
	ctx.current_instruction = 0x88103EDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1956);
	// lwz r4,1948(r1)
	ctx.current_instruction = 0x88103EE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r25,96(r30)
	ctx.current_instruction = 0x88103EE8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x88103EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103EF0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103EF4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103EF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,84(r1)
	ctx.current_instruction = 0x88103EFC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bctrl 
	ctx.lr = 0x88103F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103F04:
	// lbz r8,4(r19)
	ctx.current_instruction = 0x88103F04;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// addi r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 + 204;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r5,1972(r1)
	ctx.current_instruction = 0x88103F10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1972);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stb r7,4(r19)
	ctx.current_instruction = 0x88103F18;
	REX_STORE_U8(ctx.r19.u32 + 4, ctx.r7.u8);
	// lwz r10,8208(r31)
	ctx.current_instruction = 0x88103F1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addi r6,r27,256
	ctx.r6.s64 = ctx.r27.s64 + 256;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,1964(r1)
	ctx.current_instruction = 0x88103F30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1964);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x88103F38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103F3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x88103F44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103F48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103F4C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103F50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x88103F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103F58:
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,4(r20)
	ctx.current_instruction = 0x88103F5C;
	REX_STORE_U8(ctx.r20.u32 + 4, ctx.r8.u8);
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88103F60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88103F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x88103F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// addi r6,r27,320
	ctx.r6.s64 = ctx.r27.s64 + 320;
	// lwz r5,1988(r1)
	ctx.current_instruction = 0x88103F78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x88103F80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r4,1980(r1)
	ctx.current_instruction = 0x88103F88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1980);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103F8C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103F90;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103F94;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88103F98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x88103FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103FA0:
	// lbz r9,4(r20)
	ctx.current_instruction = 0x88103FA0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + 4);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88103FA4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// or r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88103FB0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r24,r11,16
	ctx.r24.s64 = ctx.r11.s64 + 16;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88103FB8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r7,4(r20)
	ctx.current_instruction = 0x88103FBC;
	REX_STORE_U8(ctx.r20.u32 + 4, ctx.r7.u8);
	// addi r25,r27,384
	ctx.r25.s64 = ctx.r27.s64 + 384;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88103FC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88103FCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r30)
	ctx.current_instruction = 0x88103FE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88103FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r4,84(r1)
	ctx.current_instruction = 0x88103FE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88103FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88103FF8:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r10,4(r21)
	ctx.current_instruction = 0x88103FFC;
	REX_STORE_U8(ctx.r21.u32 + 4, ctx.r10.u8);
	// addi r5,r23,2
	ctx.r5.s64 = ctx.r23.s64 + 2;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88104004;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,96(r30)
	ctx.current_instruction = 0x8810400C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r4,84(r1)
	ctx.current_instruction = 0x88104014;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r6,r25,32
	ctx.r6.s64 = ctx.r25.s64 + 32;
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x8810401C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88104024;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104028;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x8810402C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104030;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r11,0(r23)
	ctx.current_instruction = 0x88104038;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r11,r18
	ctx.r17.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88104050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104050:
	// lbz r8,4(r21)
	ctx.current_instruction = 0x88104050;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104058;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88104060;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r5,r23,4
	ctx.r5.s64 = ctx.r23.s64 + 4;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104068;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stb r7,4(r21)
	ctx.current_instruction = 0x8810406C;
	REX_STORE_U8(ctx.r21.u32 + 4, ctx.r7.u8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r16,96(r30)
	ctx.current_instruction = 0x88104078;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addi r6,r25,64
	ctx.r6.s64 = ctx.r25.s64 + 64;
	// stw r16,84(r1)
	ctx.current_instruction = 0x88104080;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x88104084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,2(r23)
	ctx.current_instruction = 0x8810408C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88104090;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88104098;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// stw r11,112(r1)
	ctx.current_instruction = 0x8810409C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r11,r17
	ctx.r22.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881040A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x881040B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881040B8:
	// lbz r7,4(r21)
	ctx.current_instruction = 0x881040B8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881040C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r29,100(r1)
	ctx.current_instruction = 0x881040C8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x881040D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r6,r25,96
	ctx.r6.s64 = ctx.r25.s64 + 96;
	// addi r5,r23,6
	ctx.r5.s64 = ctx.r23.s64 + 6;
	// stb r4,4(r21)
	ctx.current_instruction = 0x881040E0;
	REX_STORE_U8(ctx.r21.u32 + 4, ctx.r4.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,96(r30)
	ctx.current_instruction = 0x881040E8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r11,4(r23)
	ctx.current_instruction = 0x881040EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x881040F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x881040FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// stw r26,84(r1)
	ctx.current_instruction = 0x88104100;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x88104104;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88104114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104114:
	// lbz r8,4(r21)
	ctx.current_instruction = 0x88104114;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stb r7,4(r21)
	ctx.current_instruction = 0x8810411C;
	REX_STORE_U8(ctx.r21.u32 + 4, ctx.r7.u8);
loc_88104120:
	// lwz r25,1924(r1)
	ctx.current_instruction = 0x88104120;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
loc_88104124:
	// lwz r11,1980(r1)
	ctx.current_instruction = 0x88104124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1980);
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// lwz r9,1940(r1)
	ctx.current_instruction = 0x8810412C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1940);
	// addi r17,r14,128
	ctx.r17.s64 = ctx.r14.s64 + 128;
	// lwz r6,1972(r1)
	ctx.current_instruction = 0x88104134;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1972);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// lwz r4,1988(r1)
	ctx.current_instruction = 0x8810413C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1988);
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// lwz r8,1956(r1)
	ctx.current_instruction = 0x88104144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1956);
	// addi r9,r6,2
	ctx.r9.s64 = ctx.r6.s64 + 2;
	// lwz r11,1916(r1)
	ctx.current_instruction = 0x8810414C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// lwz r4,1964(r1)
	ctx.current_instruction = 0x88104154;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1964);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// addi r24,r11,256
	ctx.r24.s64 = ctx.r11.s64 + 256;
	// lwz r8,1948(r1)
	ctx.current_instruction = 0x88104160;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1948);
	// lwz r11,116(r1)
	ctx.current_instruction = 0x88104164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r16,r4,128
	ctx.r16.s64 = ctx.r4.s64 + 128;
	// stw r5,1940(r1)
	ctx.current_instruction = 0x8810416C;
	REX_STORE_U32(ctx.r1.u32 + 1940, ctx.r5.u32);
	// addi r14,r8,128
	ctx.r14.s64 = ctx.r8.s64 + 128;
	// stw r7,1980(r1)
	ctx.current_instruction = 0x88104174;
	REX_STORE_U32(ctx.r1.u32 + 1980, ctx.r7.u32);
	// addi r22,r18,256
	ctx.r22.s64 = ctx.r18.s64 + 256;
	// stw r10,1924(r1)
	ctx.current_instruction = 0x8810417C;
	REX_STORE_U32(ctx.r1.u32 + 1924, ctx.r10.u32);
	// addi r25,r23,8
	ctx.r25.s64 = ctx.r23.s64 + 8;
	// stw r3,1956(r1)
	ctx.current_instruction = 0x88104184;
	REX_STORE_U32(ctx.r1.u32 + 1956, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,1972(r1)
	ctx.current_instruction = 0x8810418C;
	REX_STORE_U32(ctx.r1.u32 + 1972, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r6,1988(r1)
	ctx.current_instruction = 0x88104194;
	REX_STORE_U32(ctx.r1.u32 + 1988, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// beq cr6,0x881041dc
	if (ctx.cr6.eq) goto loc_881041DC;
	// lwz r11,8072(r31)
	ctx.current_instruction = 0x881041A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1900(r1)
	ctx.current_instruction = 0x881041A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1900);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881041B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881041B4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r9,120(r1)
	ctx.current_instruction = 0x881041B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fed60
	ctx.lr = 0x881041D4;
	sub_880FED60(ctx, base);
loc_881041D4:
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881041DC:
	// lwz r11,8076(r31)
	ctx.current_instruction = 0x881041DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r23,1900(r1)
	ctx.current_instruction = 0x881041E4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1900);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881041F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881041F4:
	// li r26,5
	ctx.r26.s64 = 5;
	// lwz r18,1924(r1)
	ctx.current_instruction = 0x881041F8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1924);
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88104200;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104204;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88104210;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88104218;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104220;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x8810422C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r24,8208(r31)
	ctx.current_instruction = 0x88104230;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88104234;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88104240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104240:
	// stw r3,24(r30)
	ctx.current_instruction = 0x88104240;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r10,1608(r31)
	ctx.current_instruction = 0x88104248;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88104548
	if (ctx.cr6.eq) goto loc_88104548;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x88104254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88104270
	if (ctx.cr6.eq) goto loc_88104270;
	// lhz r11,0(r18)
	ctx.current_instruction = 0x88104260;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88104288
	if (ctx.cr6.gt) goto loc_88104288;
loc_88104270:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r19)
	ctx.current_instruction = 0x88104274;
	REX_STORE_U8(ctx.r19.u32 + 5, ctx.r11.u8);
	// stb r11,5(r20)
	ctx.current_instruction = 0x88104278;
	REX_STORE_U8(ctx.r20.u32 + 5, ctx.r11.u8);
	// stb r11,5(r21)
	ctx.current_instruction = 0x8810427C;
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r11.u8);
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88104288:
	// lwz r11,8080(r31)
	ctx.current_instruction = 0x88104288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8080);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881042A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881042A4:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// stw r29,100(r1)
	ctx.current_instruction = 0x881042A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x881042AC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r24,r11,20
	ctx.r24.s64 = ctx.r11.s64 + 20;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881042B8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r6,r27,128
	ctx.r6.s64 = ctx.r27.s64 + 128;
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x881042C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r5,1940(r1)
	ctx.current_instruction = 0x881042C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1940);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x881042D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x881042D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r23,8208(r31)
	ctx.current_instruction = 0x881042DC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881042E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x881042EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881042EC:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881042F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stb r10,5(r19)
	ctx.current_instruction = 0x881042F8;
	REX_STORE_U8(ctx.r19.u32 + 5, ctx.r10.u8);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88104300;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r6,r27,192
	ctx.r6.s64 = ctx.r27.s64 + 192;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104308;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1956(r1)
	ctx.current_instruction = 0x88104314;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1956);
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88104318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r24,8208(r31)
	ctx.current_instruction = 0x8810431C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// lwz r7,8268(r31)
	ctx.current_instruction = 0x88104320;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// lwz r10,8308(r31)
	ctx.current_instruction = 0x88104324;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8308);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88104328;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88104334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104334:
	// lbz r9,5(r19)
	ctx.current_instruction = 0x88104334;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r19.u32 + 5);
	// addi r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 + 204;
	// stw r29,100(r1)
	ctx.current_instruction = 0x8810433C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// or r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104344;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stb r7,5(r19)
	ctx.current_instruction = 0x88104348;
	REX_STORE_U8(ctx.r19.u32 + 5, ctx.r7.u8);
	// addi r24,r11,20
	ctx.r24.s64 = ctx.r11.s64 + 20;
	// lwz r7,8208(r31)
	ctx.current_instruction = 0x88104350;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x88104358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x88104360;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88104368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addi r6,r27,256
	ctx.r6.s64 = ctx.r27.s64 + 256;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104370;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1972(r1)
	ctx.current_instruction = 0x8810437C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1972);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88104380;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x88104388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104388:
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r6,5(r20)
	ctx.current_instruction = 0x8810438C;
	REX_STORE_U8(ctx.r20.u32 + 5, ctx.r6.u8);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r11,96(r30)
	ctx.current_instruction = 0x88104394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,8208(r31)
	ctx.current_instruction = 0x8810439C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,8312(r31)
	ctx.current_instruction = 0x881043A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8312);
	// addi r6,r27,320
	ctx.r6.s64 = ctx.r27.s64 + 320;
	// lwz r5,1988(r1)
	ctx.current_instruction = 0x881043AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8272(r31)
	ctx.current_instruction = 0x881043B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// lwz r4,1980(r1)
	ctx.current_instruction = 0x881043B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1980);
	// stw r29,100(r1)
	ctx.current_instruction = 0x881043BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x881043C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x881043C4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881043C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x881043D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881043D0:
	// lbz r9,5(r20)
	ctx.current_instruction = 0x881043D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + 5);
	// stw r29,100(r1)
	ctx.current_instruction = 0x881043D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// or r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881043E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x881043E4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r24,r11,20
	ctx.r24.s64 = ctx.r11.s64 + 20;
	// stb r7,5(r20)
	ctx.current_instruction = 0x881043EC;
	REX_STORE_U8(ctx.r20.u32 + 5, ctx.r7.u8);
	// addi r27,r27,384
	ctx.r27.s64 = ctx.r27.s64 + 384;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x881043F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,96(r30)
	ctx.current_instruction = 0x881043FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r4,84(r1)
	ctx.current_instruction = 0x88104404;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,8208(r31)
	ctx.current_instruction = 0x8810440C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88104418;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88104428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104428:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r26,108(r1)
	ctx.current_instruction = 0x8810442C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stb r10,5(r21)
	ctx.current_instruction = 0x88104430;
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r10.u8);
	// addi r5,r25,2
	ctx.r5.s64 = ctx.r25.s64 + 2;
	// lwz r23,8208(r31)
	ctx.current_instruction = 0x88104438;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x88104440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// li r9,16
	ctx.r9.s64 = 16;
	// lhz r11,0(r25)
	ctx.current_instruction = 0x88104448;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r4,96(r30)
	ctx.current_instruction = 0x88104450;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r27,32
	ctx.r6.s64 = ctx.r27.s64 + 32;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x8810445C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104464;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x8810446C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// stw r4,84(r1)
	ctx.current_instruction = 0x88104474;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88104480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104480:
	// lbz r8,5(r21)
	ctx.current_instruction = 0x88104480;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + 5);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88104488;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88104490;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r25,4
	ctx.r5.s64 = ctx.r25.s64 + 4;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88104498;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stb r7,5(r21)
	ctx.current_instruction = 0x8810449C;
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r7.u8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r19,8208(r31)
	ctx.current_instruction = 0x881044A4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r20,96(r30)
	ctx.current_instruction = 0x881044AC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addi r6,r27,64
	ctx.r6.s64 = ctx.r27.s64 + 64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x881044B4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,2(r25)
	ctx.current_instruction = 0x881044BC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x881044C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x881044CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x881044E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881044E0:
	// lbz r6,5(r21)
	ctx.current_instruction = 0x881044E0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r21.u32 + 5);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,100(r1)
	ctx.current_instruction = 0x881044E8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881044F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r26,108(r1)
	ctx.current_instruction = 0x881044F8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stb r4,5(r21)
	ctx.current_instruction = 0x88104500;
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r4.u8);
	// addi r6,r27,96
	ctx.r6.s64 = ctx.r27.s64 + 96;
	// addi r5,r25,6
	ctx.r5.s64 = ctx.r25.s64 + 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r30)
	ctx.current_instruction = 0x88104510;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r11,4(r25)
	ctx.current_instruction = 0x88104514;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 4);
	// lwz r30,8208(r31)
	ctx.current_instruction = 0x88104518;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lwz r7,8276(r31)
	ctx.current_instruction = 0x88104520;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// stw r10,84(r1)
	ctx.current_instruction = 0x88104524;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8316(r31)
	ctx.current_instruction = 0x8810452C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8316);
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8810453C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8810453C:
	// lbz r10,5(r21)
	ctx.current_instruction = 0x8810453C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + 5);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stb r9,5(r21)
	ctx.current_instruction = 0x88104544;
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r9.u8);
loc_88104548:
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125460) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125460;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125460) {
			switch (rex_dispatch_address) {
				case 0x88125468:
				case 0x881254A8:
				case 0x881254C8:
				case 0x881254FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125460;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125468: goto loc_88125468;
		case 0x881254A8: goto loc_881254A8;
		case 0x881254C8: goto loc_881254C8;
		case 0x881254FC: goto loc_881254FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125468;
	__savegprlr_27(ctx, base);
loc_88125468:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88125468;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x8812546C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r11,8(r4)
	ctx.current_instruction = 0x88125474;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x8812547C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r10,32(r31)
	ctx.current_instruction = 0x88125484;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x881254b4
	if (ctx.cr6.eq) goto loc_881254B4;
	// lis r29,-32688
	ctx.r29.s64 = -2142240768;
	// ori r29,r29,7
	ctx.r29.u64 = ctx.r29.u64 | 7;
loc_88125498:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8812549C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x881254A8;
	sub_880CB318(ctx, base);
loc_881254A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881254B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x881254B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb2c0
	ctx.lr = 0x881254C8;
	sub_880CB2C0(ctx, base);
loc_881254C8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125498
	if (ctx.cr6.lt) goto loc_88125498;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881254D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	ctx.current_instruction = 0x881254E0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	ctx.current_instruction = 0x881254E4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	ctx.current_instruction = 0x881254E8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881254EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r9)
	ctx.current_instruction = 0x881254F0;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881254F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88125030
	ctx.lr = 0x881254FC;
	sub_88125030(ctx, base);
loc_881254FC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125498
	if (ctx.cr6.lt) goto loc_88125498;
	// ld r9,32(r31)
	ctx.current_instruction = 0x88125508;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r10,4(r30)
	ctx.current_instruction = 0x8812550C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,68(r31)
	ctx.current_instruction = 0x88125510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,32(r31)
	ctx.current_instruction = 0x8812551C;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// beq cr6,0x881254a8
	if (ctx.cr6.eq) goto loc_881254A8;
	// ld r10,72(r31)
	ctx.current_instruction = 0x88125524;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x881254a8
	if (!ctx.cr6.gt) goto loc_881254A8;
	// lwz r9,4(r30)
	ctx.current_instruction = 0x88125530;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x88125554
	if (ctx.cr6.gt) goto loc_88125554;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r28,68(r31)
	ctx.current_instruction = 0x88125540;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,72(r31)
	ctx.current_instruction = 0x88125548;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88125554:
	// lwz r9,4(r30)
	ctx.current_instruction = 0x88125554;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,72(r31)
	ctx.current_instruction = 0x8812555C;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// lwz r9,4(r30)
	ctx.current_instruction = 0x88125560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,68(r31)
	ctx.current_instruction = 0x88125568;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881280D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881280D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881280D0) {
			switch (rex_dispatch_address) {
				case 0x881280E8:
				case 0x88128118:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881280D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881280E8: goto loc_881280E8;
		case 0x88128118: goto loc_88128118;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881280D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881280D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881280DC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,824
	ctx.r3.s64 = 824;
	// bl 0x88125e60
	ctx.lr = 0x881280E8;
	sub_88125E60(ctx, base);
loc_881280E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88128108
	if (!ctx.cr6.eq) goto loc_88128108;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881280F8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88128100;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88128108:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x88128118;
	sub_88052D90(ctx, base);
loc_88128118:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88128128;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6732(r8)
	ctx.current_instruction = 0x88128130;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f13,23856(r7)
	ctx.current_instruction = 0x88128140;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 23856);
	ctx.f13.f64 = double(temp.f32);
	// li r3,61
	ctx.r3.s64 = 61;
	// stfs f0,44(r31)
	ctx.current_instruction = 0x88128148;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,48(r31)
	ctx.current_instruction = 0x88128150;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,300(r31)
	ctx.current_instruction = 0x88128154;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x88128158;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f13,292(r31)
	ctx.current_instruction = 0x8812815C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r11,8(r31)
	ctx.current_instruction = 0x88128160;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x88128168;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	ctx.current_instruction = 0x8812816C;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88128170;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88128174;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	ctx.current_instruction = 0x88128178;
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	ctx.current_instruction = 0x8812817C;
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	ctx.current_instruction = 0x88128180;
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// stw r11,40(r31)
	ctx.current_instruction = 0x88128184;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r6,52(r31)
	ctx.current_instruction = 0x88128188;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// stw r5,56(r31)
	ctx.current_instruction = 0x8812818C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x88128190;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88128194;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	ctx.current_instruction = 0x88128198;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	ctx.current_instruction = 0x8812819C;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	ctx.current_instruction = 0x881281A0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	ctx.current_instruction = 0x881281A4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// sth r11,34(r31)
	ctx.current_instruction = 0x881281A8;
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// stw r4,88(r31)
	ctx.current_instruction = 0x881281AC;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// stw r9,92(r31)
	ctx.current_instruction = 0x881281B0;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// sth r9,110(r31)
	ctx.current_instruction = 0x881281B4;
	REX_STORE_U16(ctx.r31.u32 + 110, ctx.r9.u16);
	// stw r3,96(r31)
	ctx.current_instruction = 0x881281B8;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// stw r11,100(r31)
	ctx.current_instruction = 0x881281BC;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// sth r8,108(r31)
	ctx.current_instruction = 0x881281C0;
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r8.u16);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881281C4;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	ctx.current_instruction = 0x881281C8;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,128(r31)
	ctx.current_instruction = 0x881281CC;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	ctx.current_instruction = 0x881281D0;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	ctx.current_instruction = 0x881281D4;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	ctx.current_instruction = 0x881281D8;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	ctx.current_instruction = 0x881281DC;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	ctx.current_instruction = 0x881281E0;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	ctx.current_instruction = 0x881281E4;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,176(r31)
	ctx.current_instruction = 0x881281E8;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	ctx.current_instruction = 0x881281EC;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,656(r31)
	ctx.current_instruction = 0x881281F0;
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r11,192(r31)
	ctx.current_instruction = 0x881281F4;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	ctx.current_instruction = 0x881281F8;
	REX_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	ctx.current_instruction = 0x881281FC;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// sth r11,210(r31)
	ctx.current_instruction = 0x88128200;
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r11,212(r31)
	ctx.current_instruction = 0x88128204;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	ctx.current_instruction = 0x88128208;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	ctx.current_instruction = 0x8812820C;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// sth r11,202(r31)
	ctx.current_instruction = 0x88128210;
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// stw r11,224(r31)
	ctx.current_instruction = 0x88128214;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	ctx.current_instruction = 0x88128218;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	ctx.current_instruction = 0x8812821C;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	ctx.current_instruction = 0x88128220;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	ctx.current_instruction = 0x88128224;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	ctx.current_instruction = 0x88128228;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	ctx.current_instruction = 0x8812822C;
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	ctx.current_instruction = 0x88128230;
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	ctx.current_instruction = 0x88128234;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	ctx.current_instruction = 0x88128238;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	ctx.current_instruction = 0x8812823C;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	ctx.current_instruction = 0x88128240;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	ctx.current_instruction = 0x88128244;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r7,296(r31)
	ctx.current_instruction = 0x88128248;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r7.u32);
	// stfs f0,396(r31)
	ctx.current_instruction = 0x8812824C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	ctx.current_instruction = 0x88128250;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lis r6,-30700
	ctx.r6.s64 = -2011955200;
	// stw r11,784(r31)
	ctx.current_instruction = 0x88128258;
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// stw r11,280(r31)
	ctx.current_instruction = 0x88128260;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r4,r6,10584
	ctx.r4.s64 = ctx.r6.s64 + 10584;
	// stw r11,284(r31)
	ctx.current_instruction = 0x88128268;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r3,-30700
	ctx.r3.s64 = -2011955200;
	// stw r11,288(r31)
	ctx.current_instruction = 0x88128270;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// addi r9,r5,32016
	ctx.r9.s64 = ctx.r5.s64 + 32016;
	// stw r11,304(r31)
	ctx.current_instruction = 0x88128278;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// stw r11,308(r31)
	ctx.current_instruction = 0x88128280;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r7,r3,17088
	ctx.r7.s64 = ctx.r3.s64 + 17088;
	// stw r11,312(r31)
	ctx.current_instruction = 0x88128288;
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r6,r8,15896
	ctx.r6.s64 = ctx.r8.s64 + 15896;
	// stw r11,316(r31)
	ctx.current_instruction = 0x88128290;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	ctx.current_instruction = 0x88128294;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	ctx.current_instruction = 0x88128298;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	ctx.current_instruction = 0x8812829C;
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	ctx.current_instruction = 0x881282A0;
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	ctx.current_instruction = 0x881282A4;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	ctx.current_instruction = 0x881282A8;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	ctx.current_instruction = 0x881282AC;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	ctx.current_instruction = 0x881282B0;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	ctx.current_instruction = 0x881282B4;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	ctx.current_instruction = 0x881282B8;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	ctx.current_instruction = 0x881282BC;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	ctx.current_instruction = 0x881282C0;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	ctx.current_instruction = 0x881282C4;
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	ctx.current_instruction = 0x881282C8;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	ctx.current_instruction = 0x881282CC;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	ctx.current_instruction = 0x881282D0;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,388(r31)
	ctx.current_instruction = 0x881282D4;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	ctx.current_instruction = 0x881282D8;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	ctx.current_instruction = 0x881282DC;
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	ctx.current_instruction = 0x881282E0;
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r10,408(r31)
	ctx.current_instruction = 0x881282E4;
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// stw r11,412(r31)
	ctx.current_instruction = 0x881282E8;
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	ctx.current_instruction = 0x881282EC;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	ctx.current_instruction = 0x881282F0;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	ctx.current_instruction = 0x881282F4;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	ctx.current_instruction = 0x881282F8;
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	ctx.current_instruction = 0x881282FC;
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	ctx.current_instruction = 0x88128300;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	ctx.current_instruction = 0x88128304;
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	ctx.current_instruction = 0x88128308;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	ctx.current_instruction = 0x8812830C;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	ctx.current_instruction = 0x88128310;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	ctx.current_instruction = 0x88128314;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	ctx.current_instruction = 0x88128318;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	ctx.current_instruction = 0x8812831C;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	ctx.current_instruction = 0x88128320;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	ctx.current_instruction = 0x88128324;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r4,476(r31)
	ctx.current_instruction = 0x88128328;
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r4.u32);
	// stw r11,480(r31)
	ctx.current_instruction = 0x8812832C;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	ctx.current_instruction = 0x88128330;
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r9,488(r31)
	ctx.current_instruction = 0x88128334;
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r11,492(r31)
	ctx.current_instruction = 0x88128338;
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r7,496(r31)
	ctx.current_instruction = 0x8812833C;
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r7.u32);
	// stw r6,516(r31)
	ctx.current_instruction = 0x88128340;
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r6.u32);
	// stw r11,520(r31)
	ctx.current_instruction = 0x88128344;
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	ctx.current_instruction = 0x88128348;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	ctx.current_instruction = 0x8812834C;
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	ctx.current_instruction = 0x88128350;
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	ctx.current_instruction = 0x88128354;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	ctx.current_instruction = 0x88128358;
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	ctx.current_instruction = 0x8812835C;
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	ctx.current_instruction = 0x88128360;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	ctx.current_instruction = 0x88128364;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stb r11,201(r31)
	ctx.current_instruction = 0x88128368;
	REX_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// stw r11,568(r31)
	ctx.current_instruction = 0x8812836C;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	ctx.current_instruction = 0x88128370;
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	ctx.current_instruction = 0x88128374;
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// sth r11,580(r31)
	ctx.current_instruction = 0x88128378;
	REX_STORE_U16(ctx.r31.u32 + 580, ctx.r11.u16);
	// stw r11,584(r31)
	ctx.current_instruction = 0x8812837C;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	ctx.current_instruction = 0x88128380;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r11,600(r31)
	ctx.current_instruction = 0x88128384;
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	ctx.current_instruction = 0x88128388;
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,596(r31)
	ctx.current_instruction = 0x8812838C;
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,608(r31)
	ctx.current_instruction = 0x88128394;
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	ctx.current_instruction = 0x88128398;
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,740(r31)
	ctx.current_instruction = 0x8812839C;
	REX_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881283A4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881283AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88136C80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88136C80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88136C80) {
			switch (rex_dispatch_address) {
				case 0x88136C88:
				case 0x88136D00:
				case 0x88136D58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88136C80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88136C88: goto loc_88136C88;
		case 0x88136D00: goto loc_88136D00;
		case 0x88136D58: goto loc_88136D58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88136C88;
	__savegprlr_26(ctx, base);
loc_88136C88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88136C88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.current_instruction = 0x88136C8C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r11,150(r3)
	ctx.current_instruction = 0x88136C94;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 150);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r9,580(r29)
	ctx.current_instruction = 0x88136CA4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88136d88
	if (!ctx.cr6.lt) goto loc_88136D88;
loc_88136CB4:
	// lhz r11,150(r31)
	ctx.current_instruction = 0x88136CB4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r9,584(r29)
	ctx.current_instruction = 0x88136CBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r29)
	ctx.current_instruction = 0x88136CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r28,0(r31)
	ctx.current_instruction = 0x88136CC8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x88136CD0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,40(r30)
	ctx.current_instruction = 0x88136CE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88136d24
	if (ctx.cr6.eq) goto loc_88136D24;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r30)
	ctx.current_instruction = 0x88136CF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88136290
	ctx.lr = 0x88136D00;
	sub_88136290(ctx, base);
loc_88136D00:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88136d84
	if (ctx.cr6.lt) goto loc_88136D84;
	// lhz r11,490(r30)
	ctx.current_instruction = 0x88136D0C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 490);
	// lhz r10,730(r28)
	ctx.current_instruction = 0x88136D10;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88136d20
	if (!ctx.cr6.gt) goto loc_88136D20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88136D20:
	// sth r11,730(r28)
	ctx.current_instruction = 0x88136D20;
	REX_STORE_U16(ctx.r28.u32 + 730, ctx.r11.u16);
loc_88136D24:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x88136d84
	if (ctx.cr6.lt) goto loc_88136D84;
	// lwz r11,60(r29)
	ctx.current_instruction = 0x88136D2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88136d4c
	if (!ctx.cr6.eq) goto loc_88136D4C;
	// lwz r10,264(r31)
	ctx.current_instruction = 0x88136D38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r31)
	ctx.current_instruction = 0x88136D48;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
loc_88136D4C:
	// sth r26,202(r29)
	ctx.current_instruction = 0x88136D4C;
	REX_STORE_U16(ctx.r29.u32 + 202, ctx.r26.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d44e8
	ctx.lr = 0x88136D58;
	sub_880D44E8(ctx, base);
loc_88136D58:
	// lhz r11,150(r31)
	ctx.current_instruction = 0x88136D58;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r31)
	ctx.current_instruction = 0x88136D6C;
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r29)
	ctx.current_instruction = 0x88136D70;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88136cb4
	if (ctx.cr6.lt) goto loc_88136CB4;
loc_88136D84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_88136D88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139018) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88139018;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88139018) {
			switch (rex_dispatch_address) {
				case 0x88139020:
				case 0x881390F8:
				case 0x88139144:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139018;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88139020: goto loc_88139020;
		case 0x881390F8: goto loc_881390F8;
		case 0x88139144: goto loc_88139144;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88139020;
	__savegprlr_22(ctx, base);
loc_88139020:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88139020;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	ctx.current_instruction = 0x88139024;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,36(r3)
	ctx.current_instruction = 0x8813902C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r27,32(r3)
	ctx.current_instruction = 0x88139034;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r29,28(r3)
	ctx.current_instruction = 0x8813903C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r26,48(r3)
	ctx.current_instruction = 0x88139044;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// lwz r24,44(r3)
	ctx.current_instruction = 0x8813904C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bge cr6,0x88139160
	if (!ctx.cr6.lt) goto loc_88139160;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88139090
	if (ctx.cr6.eq) goto loc_88139090;
	// subfic r11,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8813906c
	if (ctx.cr6.lt) goto loc_8813906C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8813906C:
	// subf r26,r11,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// srw r9,r24,r26
	ctx.r9.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r26.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r24,r7,r24
	ctx.r24.u64 = ctx.r7.u64 & ctx.r24.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_88139090:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,84(r31)
	ctx.current_instruction = 0x88139094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881390d8
	if (!ctx.cr6.eq) goto loc_881390D8;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// bgt cr6,0x88139114
	if (ctx.cr6.gt) goto loc_88139114;
loc_881390AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88139114
	if (ctx.cr6.eq) goto loc_88139114;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x881390B4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// ble cr6,0x881390ac
	if (!ctx.cr6.gt) goto loc_881390AC;
	// b 0x88139114
	goto loc_88139114;
loc_881390D8:
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// bgt cr6,0x88139114
	if (ctx.cr6.gt) goto loc_88139114;
loc_881390E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88139114
	if (ctx.cr6.eq) goto loc_88139114;
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881390E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r3,0(r29)
	ctx.current_instruction = 0x881390EC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881390F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881390F8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// ble cr6,0x881390e0
	if (!ctx.cr6.gt) goto loc_881390E0;
loc_88139114:
	// stw r28,36(r31)
	ctx.current_instruction = 0x88139114;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// stw r30,40(r31)
	ctx.current_instruction = 0x8813911C;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r27,32(r31)
	ctx.current_instruction = 0x88139120;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,28(r31)
	ctx.current_instruction = 0x88139124;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r26,48(r31)
	ctx.current_instruction = 0x88139128;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// stw r24,44(r31)
	ctx.current_instruction = 0x8813912C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// bge cr6,0x88139160
	if (!ctx.cr6.lt) goto loc_88139160;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c398
	ctx.lr = 0x88139144;
	sub_8812C398(ctx, base);
loc_88139144:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88139180
	if (ctx.cr6.lt) goto loc_88139180;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88139150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x88139160
	if (!ctx.cr6.lt) goto loc_88139160;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_88139160:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88139160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subfic r10,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// lwz r9,36(r31)
	ctx.current_instruction = 0x88139168;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r25.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,0(r22)
	ctx.current_instruction = 0x8813917C;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r4.u32);
loc_88139180:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D988) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813D988;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813D988) {
			switch (rex_dispatch_address) {
				case 0x8813D990:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813D988;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813D990: goto loc_8813D990;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8813D990;
	__savegprlr_28(ctx, base);
loc_8813D990:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xC)));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x8)));
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vrlh v0,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsububm v6,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubm v5,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vperm128 v4,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lvx128 v2,r28,r3
	ea = (ctx.r28.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v1,v60,v61,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vsububm v31,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v30,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// vrlh v29,v11,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, result);
	}
	// vspltisb v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_set1_epi8(char(0x0)));
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// vsububm v28,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v12,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v6,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vperm128 v4,v59,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsububm v3,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v1,r28,r6
	ea = (ctx.r28.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vsububm v1,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v31,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// vxor v30,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v12,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// vsubshs v6,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vperm128 v4,v57,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v3,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v2,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r7,-49(r1)
	ctx.current_instruction = 0x8813DA98;
	REX_STORE_U8(ctx.r1.u32 + -49, ctx.r7.u8);
	// lvx128 v55,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vsububm v31,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v10,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vxor v30,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vor v12,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vsububm v28,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v10,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vxor v26,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v25,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vadduhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v54,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v12,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lvx128 v6,r28,r7
	ea = (ctx.r28.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v54,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v2,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v3,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v52,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsububm v30,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vperm128 v4,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vxor v6,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v50,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-30679
	ctx.r5.s64 = -2010578944;
	// vsubshs v12,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v28,r28,r7
	ea = (ctx.r28.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v27,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v50,v51,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vsubshs v31,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v49,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r4,r5,-28372
	ctx.r4.s64 = ctx.r5.s64 + -28372;
	// vsububm v26,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// vsubshs v24,v3,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v25,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v10,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// vor v12,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vperm128 v6,v47,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v4,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vsubshs v1,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lfs f0,4(r4)
	ctx.current_instruction = 0x8813DB90;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r3)
	ctx.current_instruction = 0x8813DB94;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// vsububm v2,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f0,4(r4)
	ctx.current_instruction = 0x8813DBA4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// vadduhm v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vxor v31,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vor v12,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vsubshs v0,v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v30,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v11,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v10,v10,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vxor v28,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vxor v27,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v26,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v25,v27,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vadduhm v12,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v0,v12,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslo v24,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vadduhm v0,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslo128 v23,v0,v49
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vadduhm v0,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslo v22,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// stvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r3,-64(r1)
	ctx.current_instruction = 0x8813DC00;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -64);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88149E68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88149E68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88149E68;
	ctx.current_instruction = 0x88149E68;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x88149E68;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// vspltish v0,5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x5)));
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltish v9,11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xB)));
	// subfic r10,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// lwz r9,25792(r9)
	ctx.current_instruction = 0x88149E94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 25792);
	// vrlh v10,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// sth r10,-18(r1)
	ctx.current_instruction = 0x88149E9C;
	REX_STORE_U16(ctx.r1.u32 + -18, ctx.r10.u16);
	// lvx128 v7,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlh v9,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// li r8,32
	ctx.r8.s64 = 32;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x7)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v8,v7,7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_set1_epi16(short(0x100))));
loc_88149EC4:
	// lvx128 v7,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v3,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v63,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v2,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm v5,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vperm128 v7,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vperm v4,v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm v1,v4,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v6,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v5,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v27,v7,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubuhm v26,v28,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v25,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v24,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v23,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v22,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v21,v3,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsrah v20,v22,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v18,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v19,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v62,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v16,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v6,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v15,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vperm v4,v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vperm128 v63,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v5,v4,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v6,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v4,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vperm v14,v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v5,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v1,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v31,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v30,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v29,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsubshs v28,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vadduhm v27,v15,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v26,v16,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v25,v27,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v26,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v23,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v60,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvx128 v60,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v20,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm v5,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v21,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm128 v7,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vperm128 v63,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v4,v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm v19,v4,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v17,v6,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vadduhm v15,v5,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v14,v7,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vsubuhm v7,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v6,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v5,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v4,v6,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vadduhm v3,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v20,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v1,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v30,v1,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v29,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v58,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v28,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v6,v7,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vperm v5,v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v4,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v6,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vperm v26,v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v25,v7,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vadduhm v22,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v21,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsubuhm v20,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v19,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v18,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v17,v19,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v16,v27,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v15,v28,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsrah v14,v16,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v6,v14,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v5,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v56,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v56,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x88149ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149EC4;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8814A0D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88155CA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88155CA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88155CA0) {
			switch (rex_dispatch_address) {
				case 0x88155CA8:
				case 0x88155D40:
				case 0x88155D8C:
				case 0x88155DC8:
				case 0x88155E3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155CA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88155CA8: goto loc_88155CA8;
		case 0x88155D40: goto loc_88155D40;
		case 0x88155D8C: goto loc_88155D8C;
		case 0x88155DC8: goto loc_88155DC8;
		case 0x88155E3C: goto loc_88155E3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88155CA8;
	__savegprlr_20(ctx, base);
loc_88155CA8:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88155CA8;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.current_instruction = 0x88155CAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88155CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,28(r3)
	ctx.current_instruction = 0x88155CBC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.current_instruction = 0x88155CCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,8(r8)
	ctx.current_instruction = 0x88155CD8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r29,12(r8)
	ctx.current_instruction = 0x88155CDC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// beq cr6,0x88155cec
	if (ctx.cr6.eq) goto loc_88155CEC;
	// lwz r31,12(r3)
	ctx.current_instruction = 0x88155CE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x88155cf0
	goto loc_88155CF0;
loc_88155CEC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_88155CF0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88155d04
	if (ctx.cr6.eq) goto loc_88155D04;
	// lwz r26,16(r3)
	ctx.current_instruction = 0x88155CFC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x88155d08
	goto loc_88155D08;
loc_88155D04:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_88155D08:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r25,r11,3
	ctx.r25.u64 = ctx.r11.u64 | 3;
	// ori r24,r10,182
	ctx.r24.u64 = ctx.r10.u64 | 182;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x88155d5c
	if (!ctx.cr6.gt) goto loc_88155D5C;
	// stw r31,88(r1)
	ctx.current_instruction = 0x88155D20;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r30,92(r1)
	ctx.current_instruction = 0x88155D28;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,144
	ctx.r5.u64 = ctx.r5.u64 | 144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155D40;
	sub_880CAFE0(ctx, base);
loc_88155D40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88155d60
	if (!ctx.cr6.lt) goto loc_88155D60;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x88155d58
	if (ctx.cr6.eq) goto loc_88155D58;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x88155e70
	if (!ctx.cr6.eq) goto loc_88155E70;
loc_88155D58:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
loc_88155D5C:
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
loc_88155D60:
	// stw r31,80(r1)
	ctx.current_instruction = 0x88155D60;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x88155da4
	if (!ctx.cr6.gt) goto loc_88155DA4;
	// stw r26,88(r1)
	ctx.current_instruction = 0x88155D6C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r29,92(r1)
	ctx.current_instruction = 0x88155D74;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,160
	ctx.r5.u64 = ctx.r5.u64 | 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155D8C;
	sub_880CAFE0(ctx, base);
loc_88155D8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88155dac
	if (!ctx.cr6.lt) goto loc_88155DAC;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x88155da4
	if (ctx.cr6.eq) goto loc_88155DA4;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x88155e70
	if (!ctx.cr6.eq) goto loc_88155E70;
loc_88155DA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
loc_88155DAC:
	// stw r26,84(r1)
	ctx.current_instruction = 0x88155DAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,176
	ctx.r5.u64 = ctx.r5.u64 | 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155DC8;
	sub_880CAFE0(ctx, base);
loc_88155DC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88155e70
	if (ctx.cr6.lt) goto loc_88155E70;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88155DD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88155DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r9,0(r22)
	ctx.current_instruction = 0x88155DDC;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r23)
	ctx.current_instruction = 0x88155DE4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// cmplwi cr6,r21,12
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 12, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r1)
	ctx.current_instruction = 0x88155E04;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,96(r1)
	ctx.current_instruction = 0x88155E10;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// ori r5,r5,112
	ctx.r5.u64 = ctx.r5.u64 | 112;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r3,100(r1)
	ctx.current_instruction = 0x88155E30;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155E3C;
	sub_880CAFE0(ctx, base);
loc_88155E3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88155e70
	if (ctx.cr6.lt) goto loc_88155E70;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88155E44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88155E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,31,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFFFFF;
	// stw r8,0(r20)
	ctx.current_instruction = 0x88155E5C;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88155E68:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_88155E70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815D230) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815D230);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815D230;
	ctx.current_instruction = 0x8815D230;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8815D240;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8815D244;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,32(r11)
	ctx.current_instruction = 0x8815D248;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,12(r11)
	ctx.current_instruction = 0x8815D250;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r10,10
	ctx.r6.s64 = ctx.r10.s64 + 10;
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815DBD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815DBD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815DBD8) {
			switch (rex_dispatch_address) {
				case 0x8815DBE0:
				case 0x8815DBF4:
				case 0x8815DC2C:
				case 0x8815DC44:
				case 0x8815DC58:
				case 0x8815DC70:
				case 0x8815DC84:
				case 0x8815DCA8:
				case 0x8815DCC0:
				case 0x8815DCCC:
				case 0x8815DCD4:
				case 0x8815DCDC:
				case 0x8815DD14:
				case 0x8815DD2C:
				case 0x8815DD50:
				case 0x8815DD6C:
				case 0x8815DD94:
				case 0x8815DE24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815DBD8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815DBE0: goto loc_8815DBE0;
		case 0x8815DBF4: goto loc_8815DBF4;
		case 0x8815DC2C: goto loc_8815DC2C;
		case 0x8815DC44: goto loc_8815DC44;
		case 0x8815DC58: goto loc_8815DC58;
		case 0x8815DC70: goto loc_8815DC70;
		case 0x8815DC84: goto loc_8815DC84;
		case 0x8815DCA8: goto loc_8815DCA8;
		case 0x8815DCC0: goto loc_8815DCC0;
		case 0x8815DCCC: goto loc_8815DCCC;
		case 0x8815DCD4: goto loc_8815DCD4;
		case 0x8815DCDC: goto loc_8815DCDC;
		case 0x8815DD14: goto loc_8815DD14;
		case 0x8815DD2C: goto loc_8815DD2C;
		case 0x8815DD50: goto loc_8815DD50;
		case 0x8815DD6C: goto loc_8815DD6C;
		case 0x8815DD94: goto loc_8815DD94;
		case 0x8815DE24: goto loc_8815DE24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8815DBE0;
	__savegprlr_22(ctx, base);
loc_8815DBE0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8815DBE0;
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
	ctx.lr = 0x8815DBF4;
	sub_88052E38(ctx, base);
loc_8815DBF4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815dcdc
	if (ctx.cr6.eq) goto loc_8815DCDC;
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
loc_8815DC14:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8815DC14;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8815dc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8815DC14;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815DC2C;
	sub_881C4640(ctx, base);
loc_8815DC2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815dcd4
	if (ctx.cr6.eq) goto loc_8815DCD4;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815DC44;
	sub_881C4640(ctx, base);
loc_8815DC44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815dccc
	if (ctx.cr6.eq) goto loc_8815DCCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815DC58;
	sub_8815B9F8(ctx, base);
loc_8815DC58:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815dc70
	if (ctx.cr6.eq) goto loc_8815DC70;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815DC70;
	sub_88052D90(ctx, base);
loc_8815DC70:
	// stw r31,0(r29)
	ctx.current_instruction = 0x8815DC70;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815dcc4
	if (ctx.cr6.eq) goto loc_8815DCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815DC84;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815DC84:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8815DC84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815dcc4
	if (ctx.cr6.eq) goto loc_8815DCC4;
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
	ctx.lr = 0x8815DCA8;
	sub_8815E360(ctx, base);
loc_8815DCA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815dce8
	if (!ctx.cr6.eq) goto loc_8815DCE8;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8815DCB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815dcc4
	if (ctx.cr6.eq) goto loc_8815DCC4;
	// bl 0x8815ba70
	ctx.lr = 0x8815DCC0;
	sub_8815BA70(ctx, base);
loc_8815DCC0:
	// stw r23,0(r29)
	ctx.current_instruction = 0x8815DCC0;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8815DCC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DCCC;
	sub_881C4560(ctx, base);
loc_8815DCCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DCD4;
	sub_881C4560(ctx, base);
loc_8815DCD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052278
	ctx.lr = 0x8815DCDC;
	sub_88052278(ctx, base);
loc_8815DCDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8815DCE8:
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r30,36(r29)
	ctx.current_instruction = 0x8815DCEC;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,32(r29)
	ctx.current_instruction = 0x8815DCF8;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// ble cr6,0x8815de0c
	if (!ctx.cr6.gt) goto loc_8815DE0C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r25,r11,18168
	ctx.r25.s64 = ctx.r11.s64 + 18168;
loc_8815DD08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DD14;
	sub_8815D000(ctx, base);
loc_8815DD14:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815ddfc
	if (ctx.cr6.lt) goto loc_8815DDFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DD2C;
	sub_8815D000(ctx, base);
loc_8815DD2C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815dddc
	if (ctx.cr6.lt) goto loc_8815DDDC;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x8815DD38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r29)
	ctx.current_instruction = 0x8815DD44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e3a0
	ctx.lr = 0x8815DD50;
	sub_8815E3A0(ctx, base);
loc_8815DD50:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815ddbc
	if (ctx.cr6.eq) goto loc_8815DDBC;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DD5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815dd6c
	if (ctx.cr6.lt) goto loc_8815DD6C;
	// bl 0x881ed228
	ctx.lr = 0x8815DD6C;
	sub_881ED228(ctx, base);
loc_8815DD6C:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815dd84
	if (!ctx.cr6.lt) goto loc_8815DD84;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8815DD78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	ctx.current_instruction = 0x8815DD80;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8815DD84:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DD84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815dd94
	if (ctx.cr6.lt) goto loc_8815DD94;
	// bl 0x881ed228
	ctx.lr = 0x8815DD94;
	sub_881ED228(ctx, base);
loc_8815DD94:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DD94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815ddac
	if (!ctx.cr6.lt) goto loc_8815DDAC;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8815DDA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	ctx.current_instruction = 0x8815DDA8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8815DDAC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8815dd08
	if (ctx.cr6.lt) goto loc_8815DD08;
	// b 0x8815ddfc
	goto loc_8815DDFC;
loc_8815DDBC:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DDBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815dddc
	if (ctx.cr6.eq) goto loc_8815DDDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x8815DDCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	ctx.current_instruction = 0x8815DDD4;
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815DDD8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815DDDC:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DDDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815ddfc
	if (ctx.cr6.eq) goto loc_8815DDFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	ctx.current_instruction = 0x8815DDF0;
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8815DDF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815DDF8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815DDFC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8815de0c
	if (!ctx.cr6.gt) goto loc_8815DE0C;
	// stw r23,28(r29)
	ctx.current_instruction = 0x8815DE04;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// b 0x8815de14
	goto loc_8815DE14;
loc_8815DE0C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	ctx.current_instruction = 0x8815DE10;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8815DE14:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8815de28
	if (!ctx.cr6.lt) goto loc_8815DE28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815d268
	ctx.lr = 0x8815DE24;
	sub_8815D268(ctx, base);
loc_8815DE24:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8815DE28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881662E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881662E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881662E8) {
			switch (rex_dispatch_address) {
				case 0x88166308:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881662E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88166308: goto loc_88166308;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881662EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881662F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881662F4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,3756
	ctx.r4.s64 = ctx.r3.s64 + 3756;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// bl 0x88171680
	ctx.lr = 0x88166308;
	sub_88171680(ctx, base);
loc_88166308:
	// lwz r11,3756(r31)
	ctx.current_instruction = 0x88166308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x8816630C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88166310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3800(r31)
	ctx.current_instruction = 0x88166314;
	REX_STORE_U32(ctx.r31.u32 + 3800, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x88166318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3804(r31)
	ctx.current_instruction = 0x8816631C;
	REX_STORE_U32(ctx.r31.u32 + 3804, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88166320;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3808(r31)
	ctx.current_instruction = 0x88166324;
	REX_STORE_U32(ctx.r31.u32 + 3808, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.current_instruction = 0x88166328;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,3832(r31)
	ctx.current_instruction = 0x8816632C;
	REX_STORE_U32(ctx.r31.u32 + 3832, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.current_instruction = 0x88166330;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3836(r31)
	ctx.current_instruction = 0x88166334;
	REX_STORE_U32(ctx.r31.u32 + 3836, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.current_instruction = 0x88166338;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3840(r31)
	ctx.current_instruction = 0x8816633C;
	REX_STORE_U32(ctx.r31.u32 + 3840, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88166344;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8816634C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816CF80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816CF80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816CF80) {
			switch (rex_dispatch_address) {
				case 0x8816CF88:
				case 0x8816CFBC:
				case 0x8816D064:
				case 0x8816D0AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816CF80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816CF88: goto loc_8816CF88;
		case 0x8816CFBC: goto loc_8816CFBC;
		case 0x8816D064: goto loc_8816D064;
		case 0x8816D0AC: goto loc_8816D0AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816CF88;
	__savegprlr_25(ctx, base);
loc_8816CF88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8816CF88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8816CF8C;
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
	ctx.current_instruction = 0x8816CFA4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.current_instruction = 0x8816CFB4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x88156500
	ctx.lr = 0x8816CFBC;
	sub_88156500(ctx, base);
loc_8816CFBC:
	// lbz r11,1(r30)
	ctx.current_instruction = 0x8816CFBC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816cfd0
	if (!ctx.cr6.eq) goto loc_8816CFD0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r31)
	ctx.current_instruction = 0x8816CFCC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8816CFD0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CFD0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x8816CFDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816d0c4
	if (!ctx.cr6.eq) goto loc_8816D0C4;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8816d128
	if (ctx.cr6.eq) goto loc_8816D128;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CFF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8816d014
	if (!ctx.cr6.gt) goto loc_8816D014;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8816d0b0
	goto loc_8816D0B0;
loc_8816D014:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816d074
	if (!ctx.cr6.gt) goto loc_8816D074;
loc_8816D01C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816d074
	if (ctx.cr6.eq) goto loc_8816D074;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816D028;
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
	ctx.current_instruction = 0x8816D04C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816D054;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816d064
	if (!ctx.cr0.lt) goto loc_8816D064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816D064;
	sub_88156678(ctx, base);
loc_8816D064:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816D064;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816d01c
	if (ctx.cr6.gt) goto loc_8816D01C;
loc_8816D074:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816D078;
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
	ctx.current_instruction = 0x8816D090;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816D09C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816d0ac
	if (!ctx.cr0.lt) goto loc_8816D0AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816D0AC;
	sub_88156678(ctx, base);
loc_8816D0AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8816D0B0:
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816D0B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D0B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816d0dc
	if (ctx.cr6.eq) goto loc_8816D0DC;
loc_8816D0C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8816D0C8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,1764(r27)
	ctx.current_instruction = 0x8816D0CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r26,0(r10)
	ctx.current_instruction = 0x8816D0D0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D0DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8816D0E0;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8816d10c
	if (ctx.cr6.eq) goto loc_8816D10C;
	// lwz r10,1764(r27)
	ctx.current_instruction = 0x8816D0FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x8816D100;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D10C:
	// slw r10,r10,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x8816D110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r9)
	ctx.current_instruction = 0x8816D11C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D128:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8816D12C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lwz r11,1764(r27)
	ctx.current_instruction = 0x8816D130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r26,0(r11)
	ctx.current_instruction = 0x8816D134;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88172548) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88172548;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88172548) {
			switch (rex_dispatch_address) {
				case 0x88172550:
				case 0x88172558:
				case 0x88172584:
				case 0x881725C4:
				case 0x88172608:
				case 0x88172654:
				case 0x88172678:
				case 0x88172690:
				case 0x881726D4:
				case 0x88172720:
				case 0x88172760:
				case 0x881732BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88172548;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88172550: goto loc_88172550;
		case 0x88172558: goto loc_88172558;
		case 0x88172584: goto loc_88172584;
		case 0x881725C4: goto loc_881725C4;
		case 0x88172608: goto loc_88172608;
		case 0x88172654: goto loc_88172654;
		case 0x88172678: goto loc_88172678;
		case 0x88172690: goto loc_88172690;
		case 0x881726D4: goto loc_881726D4;
		case 0x88172720: goto loc_88172720;
		case 0x88172760: goto loc_88172760;
		case 0x881732BC: goto loc_881732BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88172550;
	__savegprlr_14(ctx, base);
loc_88172550:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef288
	ctx.lr = 0x88172558;
	__savefpr_28(ctx, base);
loc_88172558:
	// stwu r1,-352(r1)
	ctx.current_instruction = 0x88172558;
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// bne cr6,0x88172588
	if (!ctx.cr6.eq) goto loc_88172588;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d4
	ctx.lr = 0x88172584;
	__restfpr_28(ctx, base);
loc_88172584:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88172588:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,20(r23)
	ctx.current_instruction = 0x88172590;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r9,15408(r23)
	ctx.current_instruction = 0x88172594;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15408);
	// lwz r8,15412(r23)
	ctx.current_instruction = 0x88172598;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15412);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,15392(r23)
	ctx.current_instruction = 0x881725A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// lfd f31,1488(r11)
	ctx.current_instruction = 0x881725A4;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// stw r7,100(r1)
	ctx.current_instruction = 0x881725A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srawi r28,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 1;
	// stw r9,96(r1)
	ctx.current_instruction = 0x881725B0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,104(r1)
	ctx.current_instruction = 0x881725B4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x881725B8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// fsel f1,f0,f0,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x881725C4;
	sub_881EF210(ctx, base);
loc_881725C4:
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,152(r1)
	ctx.current_instruction = 0x881725C8;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r5,156(r1)
	ctx.current_instruction = 0x881725CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	ctx.current_instruction = 0x881725D4;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r3,15392(r23)
	ctx.current_instruction = 0x881725D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,152(r1)
	ctx.current_instruction = 0x881725E0;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f12,152(r1)
	ctx.current_instruction = 0x881725E4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x881725EC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x88172600
	if (!ctx.cr6.lt) goto loc_88172600;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88172600:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172608;
	sub_881F0228(ctx, base);
loc_88172608:
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x88172608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,20(r23)
	ctx.current_instruction = 0x88172610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// stfd f0,152(r1)
	ctx.current_instruction = 0x88172614;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r29,156(r1)
	ctx.current_instruction = 0x8817261C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	ctx.current_instruction = 0x88172624;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.current_instruction = 0x88172628;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	ctx.current_instruction = 0x8817262C;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.current_instruction = 0x88172630;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f13,f11,f29
	ctx.f13.f64 = ctx.f11.f64 - ctx.f29.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8817264c
	if (ctx.cr6.lt) goto loc_8817264C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8817264C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172654;
	sub_881F0228(ctx, base);
loc_88172654:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	ctx.current_instruction = 0x88172658;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r11,156(r1)
	ctx.current_instruction = 0x8817265C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,152(r1)
	ctx.current_instruction = 0x88172664;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f13,152(r1)
	ctx.current_instruction = 0x88172668;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172678;
	sub_881EF210(ctx, base);
loc_88172678:
	// fneg f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fctiwz f10,f1
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,152(r1)
	ctx.current_instruction = 0x88172680;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f10.u64);
	// lwz r30,156(r1)
	ctx.current_instruction = 0x88172684;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// fsel f1,f11,f11,f31
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172690;
	sub_881EF210(ctx, base);
loc_88172690:
	// fctiwz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f9,152(r1)
	ctx.current_instruction = 0x88172694;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// lwz r9,156(r1)
	ctx.current_instruction = 0x88172698;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x881726A0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r7,15396(r23)
	ctx.current_instruction = 0x881726A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,152(r1)
	ctx.current_instruction = 0x881726AC;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f8,152(r1)
	ctx.current_instruction = 0x881726B0;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f8
	ctx.f0.f64 = double(ctx.f8.s64);
	// lfd f7,144(r1)
	ctx.current_instruction = 0x881726B8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f7
	ctx.f13.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x881726cc
	if (ctx.cr6.lt) goto loc_881726CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_881726CC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x881726D4;
	sub_881F0228(ctx, base);
loc_881726D4:
	// lwz r11,15396(r23)
	ctx.current_instruction = 0x881726D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,15388(r23)
	ctx.current_instruction = 0x881726DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// stfd f0,152(r1)
	ctx.current_instruction = 0x881726E0;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r31,156(r1)
	ctx.current_instruction = 0x881726E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	ctx.current_instruction = 0x881726F0;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.current_instruction = 0x881726F4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	ctx.current_instruction = 0x881726F8;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.current_instruction = 0x881726FC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f0,f11,f30
	ctx.f0.f64 = ctx.f11.f64 - ctx.f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x88172718
	if (!ctx.cr6.lt) goto loc_88172718;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88172718:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172720;
	sub_881F0228(ctx, base);
loc_88172720:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	ctx.current_instruction = 0x88172724;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r21,r11,0,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r31,r10,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r14,r30,0,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r21,116(r1)
	ctx.current_instruction = 0x8817273C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r31,108(r1)
	ctx.current_instruction = 0x88172740;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lwz r9,156(r1)
	ctx.current_instruction = 0x88172744;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	ctx.current_instruction = 0x8817274C;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f13,152(r1)
	ctx.current_instruction = 0x88172750;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172760;
	sub_881EF210(ctx, base);
loc_88172760:
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,152(r1)
	ctx.current_instruction = 0x88172764;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r7,156(r1)
	ctx.current_instruction = 0x88172768;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r30,r7,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,120(r1)
	ctx.current_instruction = 0x88172770;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x88172784
	if (!ctx.cr6.lt) goto loc_88172784;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r30,120(r1)
	ctx.current_instruction = 0x88172780;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_88172784:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r4,15420(r23)
	ctx.current_instruction = 0x88172788;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 15420);
	// rlwinm r10,r21,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 11) & 0xFFFFF800;
	// lwz r6,15424(r23)
	ctx.current_instruction = 0x88172790;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 15424);
	// rlwinm r9,r31,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// lwz r17,15416(r23)
	ctx.current_instruction = 0x88172798;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r23.u32 + 15416);
	// srawi r8,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 1;
	// srawi r7,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r14.s32 >> 1;
	// lfd f0,23424(r11)
	ctx.current_instruction = 0x881727A4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23424);
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// fmul f12,f29,f0
	ctx.f12.f64 = ctx.f29.f64 * ctx.f0.f64;
	// stw r7,80(r1)
	ctx.current_instruction = 0x881727B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fmul f13,f30,f0
	ctx.f13.f64 = ctx.f30.f64 * ctx.f0.f64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x881727B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x881727BC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r6,92(r1)
	ctx.current_instruction = 0x881727C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lfd f0,8624(r5)
	ctx.current_instruction = 0x881727C4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8624);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,144(r1)
	ctx.current_instruction = 0x881727D0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r11,148(r1)
	ctx.current_instruction = 0x881727D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,152(r1)
	ctx.current_instruction = 0x881727DC;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r3,156(r1)
	ctx.current_instruction = 0x881727E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 11;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r8,112(r1)
	ctx.current_instruction = 0x881727F8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// clrlwi r19,r9,21
	ctx.r19.u64 = ctx.r9.u32 & 0x7FF;
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// srawi r3,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 11;
	// srawi r11,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 12;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// stw r3,128(r1)
	ctx.current_instruction = 0x88172810;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// srawi r8,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 12;
	// stw r11,136(r1)
	ctx.current_instruction = 0x88172818;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// clrlwi r18,r5,21
	ctx.r18.u64 = ctx.r5.u32 & 0x7FF;
	// stw r8,144(r1)
	ctx.current_instruction = 0x88172824;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// clrlwi r25,r7,21
	ctx.r25.u64 = ctx.r7.u32 & 0x7FF;
	// clrlwi r24,r10,21
	ctx.r24.u64 = ctx.r10.u32 & 0x7FF;
	// subfic r5,r25,2048
	ctx.xer.ca = ctx.r25.u32 <= 2048;
	ctx.r5.u64 = static_cast<uint64_t>(2048) - ctx.r25.u64;
	// subfic r3,r18,2048
	ctx.xer.ca = ctx.r18.u32 <= 2048;
	ctx.r3.u64 = static_cast<uint64_t>(2048) - ctx.r18.u64;
	// mullw r16,r25,r24
	ctx.r16.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// subf r26,r24,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r22,r19,r3
	ctx.r22.u64 = ctx.r3.u64 - ctx.r19.u64;
	// mullw r15,r18,r19
	ctx.r15.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r19.s32);
	// ble cr6,0x88172854
	if (!ctx.cr6.gt) goto loc_88172854;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x88172860
	goto loc_88172860;
loc_88172854:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bge cr6,0x88172860
	if (!ctx.cr6.lt) goto loc_88172860;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_88172860:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lfd f0,23440(r11)
	ctx.current_instruction = 0x88172874;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// fmul f0,f28,f0
	ctx.f0.f64 = ctx.f28.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,152(r1)
	ctx.current_instruction = 0x88172880;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r27,156(r1)
	ctx.current_instruction = 0x88172884;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ble cr6,0x88172928
	if (!ctx.cr6.gt) goto loc_88172928;
loc_8817288C:
	// lwz r10,15392(r23)
	ctx.current_instruction = 0x8817288C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881728b4
	if (!ctx.cr6.gt) goto loc_881728B4;
	// addi r10,r17,-1
	ctx.r10.s64 = ctx.r17.s64 + -1;
loc_881728A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r5,1(r10)
	ctx.current_instruction = 0x881728A4;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r23)
	ctx.current_instruction = 0x881728A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881728a0
	if (ctx.cr6.lt) goto loc_881728A0;
loc_881728B4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881728d8
	if (!ctx.cr6.gt) goto loc_881728D8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_881728C8:
	// stbx r3,r10,r11
	ctx.current_instruction = 0x881728C8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// stb r3,0(r11)
	ctx.current_instruction = 0x881728CC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881728c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881728C8;
loc_881728D8:
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x881728D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r8,r11,r17
	ctx.r8.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88172910
	if (!ctx.cr6.gt) goto loc_88172910;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_881728FC:
	// stbu r5,1(r9)
	ctx.current_instruction = 0x881728FC;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x88172904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881728fc
	if (ctx.cr6.lt) goto loc_881728FC;
loc_88172910:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r17,r11,r8
	ctx.r17.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8817288c
	if (ctx.cr6.lt) goto loc_8817288C;
	// stw r6,92(r1)
	ctx.current_instruction = 0x88172920;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x88172924;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_88172928:
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// stw r11,124(r1)
	ctx.current_instruction = 0x8817292C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8817305c
	if (!ctx.cr6.lt) goto loc_8817305C;
	// lwz r11,116(r1)
	ctx.current_instruction = 0x88172938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,128(r1)
	ctx.current_instruction = 0x8817293C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r10,152(r1)
	ctx.current_instruction = 0x88172944;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
loc_88172948:
	// lwz r10,20(r23)
	ctx.current_instruction = 0x88172948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x88172950;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r10,r20,r10
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// lwz r9,15404(r23)
	ctx.current_instruction = 0x88172958;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// lwz r8,108(r1)
	ctx.current_instruction = 0x8817295C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x88172990
	if (!ctx.cr6.gt) goto loc_88172990;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8817298c
	if (ctx.cr6.eq) goto loc_8817298C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172984:
	// stbu r9,1(r11)
	ctx.current_instruction = 0x88172984;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88172984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172984;
loc_8817298C:
	// add r11,r17,r8
	ctx.r11.u64 = ctx.r17.u64 + ctx.r8.u64;
loc_88172990:
	// lwz r9,20(r23)
	ctx.current_instruction = 0x88172990;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x881729e0
	if (!ctx.cr6.eq) goto loc_881729E0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172a28
	if (!ctx.cr6.eq) goto loc_88172A28;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881729C0:
	// lbzx r8,r10,r9
	ctx.current_instruction = 0x881729C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	ctx.current_instruction = 0x881729D0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881729c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881729C0;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_881729E0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172a74
	if (!ctx.cr6.eq) goto loc_88172A74;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r9,r8,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881729F8:
	// lbz r7,0(r10)
	ctx.current_instruction = 0x881729F8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ctx.current_instruction = 0x881729FC;
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 11;
	// mullw r3,r4,r27
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	ctx.current_instruction = 0x88172A18;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881729f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881729F8;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_88172A28:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172A40:
	// lbzx r7,r6,r8
	ctx.current_instruction = 0x88172A40;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r5,1(r10)
	ctx.current_instruction = 0x88172A48;
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r3,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 11;
	// mullw r9,r3,r27
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	ctx.current_instruction = 0x88172A64;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172A40;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_88172A74:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r8,r8,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172A84:
	// lbz r5,0(r9)
	ctx.current_instruction = 0x88172A84;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r4,1(r9)
	ctx.current_instruction = 0x88172A88;
	ea = 1 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88172A8C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r3,1(r10)
	ctx.current_instruction = 0x88172A90;
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r6,r8,r22
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mullw r5,r5,r18
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r3,r19
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// mullw r3,r4,r15
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// srawi r8,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 11;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// mullw r6,r7,r27
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,0(r11)
	ctx.current_instruction = 0x88172ACC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172A84;
loc_88172AD8:
	// lwz r10,15392(r23)
	ctx.current_instruction = 0x88172AD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88172b04
	if (!ctx.cr6.lt) goto loc_88172B04;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88172AF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r9,1(r11)
	ctx.current_instruction = 0x88172AF4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lwz r8,15392(r23)
	ctx.current_instruction = 0x88172AF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88172af0
	if (ctx.cr6.lt) goto loc_88172AF0;
loc_88172B04:
	// lwz r11,152(r1)
	ctx.current_instruction = 0x88172B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// srawi r10,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 1;
	// lwz r8,136(r1)
	ctx.current_instruction = 0x88172B0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r6,100(r1)
	ctx.current_instruction = 0x88172B14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88172B18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,144(r1)
	ctx.current_instruction = 0x88172B20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88172B24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x88172B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// ble cr6,0x88172b58
	if (!ctx.cr6.gt) goto loc_88172B58;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r9,128
	ctx.r9.s64 = 128;
loc_88172B44:
	// stb r9,0(r11)
	ctx.current_instruction = 0x88172B44;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88172B4C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172B44;
loc_88172B58:
	// lwz r9,96(r1)
	ctx.current_instruction = 0x88172B58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88172B60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bne cr6,0x88172bf0
	if (!ctx.cr6.eq) goto loc_88172BF0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88172c84
	if (!ctx.cr6.eq) goto loc_88172C84;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88172B78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88172B84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88172B8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.current_instruction = 0x88172B90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r3,96(r1)
	ctx.current_instruction = 0x88172B98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r5,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_88172BA4:
	// lbzx r8,r6,r9
	ctx.current_instruction = 0x88172BA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r7,0(r9)
	ctx.current_instruction = 0x88172BA8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r5,r8,r27
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// mullw r4,r7,r27
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r4,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// addi r8,r7,128
	ctx.r8.s64 = ctx.r7.s64 + 128;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	ctx.current_instruction = 0x88172BD8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r10)
	ctx.current_instruction = 0x88172BE0;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172BA4;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172BF0:
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88172BF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88172d38
	if (!ctx.cr6.eq) goto loc_88172D38;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88172C04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_88172C14:
	// lbz r4,0(r9)
	ctx.current_instruction = 0x88172C14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r7,1(r9)
	ctx.current_instruction = 0x88172C18;
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r8)
	ctx.current_instruction = 0x88172C1C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzu r5,1(r8)
	ctx.current_instruction = 0x88172C20;
	ea = 1 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// mullw r7,r4,r26
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r3,r26
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// mullw r5,r5,r25
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r3,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r11)
	ctx.current_instruction = 0x88172C6C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	ctx.current_instruction = 0x88172C74;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172C14;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172C84:
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88172C84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r6,96(r1)
	ctx.current_instruction = 0x88172C90;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88172C98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r31,r11,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r5,104(r1)
	ctx.current_instruction = 0x88172CA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lwz r3,100(r1)
	ctx.current_instruction = 0x88172CAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_88172CC4:
	// lbz r5,0(r8)
	ctx.current_instruction = 0x88172CC4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r6,r31,r11
	ctx.current_instruction = 0x88172CC8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r30,r3,r8
	ctx.current_instruction = 0x88172CCC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// mullw r9,r5,r24
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r24.s32);
	// lbzu r4,1(r7)
	ctx.current_instruction = 0x88172CD4;
	ea = 1 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r4,r26
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r5,r30,r24
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r9,-128
	ctx.r5.s64 = ctx.r9.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r9,r5,r27
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,0(r11)
	ctx.current_instruction = 0x88172D1C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r6,0(r10)
	ctx.current_instruction = 0x88172D24;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172CC4;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172D38:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88172D40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88172D44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88172D48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r31,r7,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subfic r3,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88172D64:
	// lbz r31,0(r7)
	ctx.current_instruction = 0x88172D64;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbzx r30,r4,r9
	ctx.current_instruction = 0x88172D68;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mullw r28,r31,r24
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r24.s32);
	// lbzx r29,r3,r7
	ctx.current_instruction = 0x88172D70;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// lbz r5,0(r9)
	ctx.current_instruction = 0x88172D74;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mullw r30,r5,r26
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r26.s32);
	// subf r31,r29,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r29.u64;
	// mullw r29,r29,r25
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// stb r5,0(r11)
	ctx.current_instruction = 0x88172DBC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r31,r4,r8
	ctx.current_instruction = 0x88172DC4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lbzx r28,r3,r6
	ctx.current_instruction = 0x88172DC8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbz r5,0(r8)
	ctx.current_instruction = 0x88172DCC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r30,0(r6)
	ctx.current_instruction = 0x88172DD4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r29,r30,r24
	ctx.r29.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// subf r31,r30,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mullw r30,r5,r26
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r26.s32);
	// subf r31,r28,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r28.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mullw r31,r28,r25
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,0(r10)
	ctx.current_instruction = 0x88172E20;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172D64;
loc_88172E2C:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88172E2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,132(r1)
	ctx.current_instruction = 0x88172E30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88172e60
	if (!ctx.cr6.lt) goto loc_88172E60;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r7,128
	ctx.r7.s64 = 128;
loc_88172E50:
	// stbx r7,r9,r11
	ctx.current_instruction = 0x88172E50;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r7,r9,r10
	ctx.current_instruction = 0x88172E54;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88172e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172E50;
loc_88172E60:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88172E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// addi r3,r20,1
	ctx.r3.s64 = ctx.r20.s64 + 1;
	// lwz r7,88(r1)
	ctx.current_instruction = 0x88172E68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 1;
	// lwz r6,92(r1)
	ctx.current_instruction = 0x88172E70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x88172E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// lwz r5,112(r1)
	ctx.current_instruction = 0x88172E7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,15404(r23)
	ctx.current_instruction = 0x88172E80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r8,108(r1)
	ctx.current_instruction = 0x88172E8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// stw r7,88(r1)
	ctx.current_instruction = 0x88172E94;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,92(r1)
	ctx.current_instruction = 0x88172E9C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88172ed0
	if (!ctx.cr6.gt) goto loc_88172ED0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88172ecc
	if (ctx.cr6.eq) goto loc_88172ECC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172EC4:
	// stbu r9,1(r11)
	ctx.current_instruction = 0x88172EC4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88172ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172EC4;
loc_88172ECC:
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_88172ED0:
	// lwz r9,20(r23)
	ctx.current_instruction = 0x88172ED0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x88172f20
	if (!ctx.cr6.eq) goto loc_88172F20;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172f68
	if (!ctx.cr6.eq) goto loc_88172F68;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172F00:
	// lbzx r8,r10,r9
	ctx.current_instruction = 0x88172F00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	ctx.current_instruction = 0x88172F10;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F00;
	// b 0x88173018
	goto loc_88173018;
loc_88172F20:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172fb4
	if (!ctx.cr6.eq) goto loc_88172FB4;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r9,r8,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88172F38:
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88172F38;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ctx.current_instruction = 0x88172F3C;
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 11;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	ctx.current_instruction = 0x88172F58;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F38;
	// b 0x88173018
	goto loc_88173018;
loc_88172F68:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172F80:
	// lbzu r5,1(r10)
	ctx.current_instruction = 0x88172F80;
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r7,r6,r8
	ctx.current_instruction = 0x88172F84;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 11;
	// mullw r5,r7,r27
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	ctx.current_instruction = 0x88172FA4;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F80;
	// b 0x88173018
	goto loc_88173018;
loc_88172FB4:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r8,r8,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172FC4:
	// lbz r30,0(r9)
	ctx.current_instruction = 0x88172FC4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r5,1(r9)
	ctx.current_instruction = 0x88172FC8;
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88172FCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r6,r30,r18
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r18.s32);
	// lbzu r29,1(r10)
	ctx.current_instruction = 0x88172FD4;
	ea = 1 + ctx.r10.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r30,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r30.u64;
	// mullw r5,r8,r22
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r29,r19
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// mullw r8,r8,r15
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r15.s32);
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r6,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 11;
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r8,0(r11)
	ctx.current_instruction = 0x8817300C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172FC4;
loc_88173018:
	// lwz r10,15392(r23)
	ctx.current_instruction = 0x88173018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88173044
	if (!ctx.cr6.lt) goto loc_88173044;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88173030:
	// stbu r8,1(r11)
	ctx.current_instruction = 0x88173030;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15392(r23)
	ctx.current_instruction = 0x88173038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88173030
	if (ctx.cr6.lt) goto loc_88173030;
loc_88173044:
	// lwz r11,124(r1)
	ctx.current_instruction = 0x88173044;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 1;
	// add r17,r10,r4
	ctx.r17.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r20,r3,1
	ctx.r20.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88172948
	if (ctx.cr6.lt) goto loc_88172948;
loc_8817305C:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8817305C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.current_instruction = 0x88173060;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881732ac
	if (ctx.cr6.lt) goto loc_881732AC;
	// lwz r31,124(r1)
	ctx.current_instruction = 0x88173070;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,15396(r23)
	ctx.current_instruction = 0x88173074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881732ac
	if (!ctx.cr6.lt) goto loc_881732AC;
	// lwz r10,128(r1)
	ctx.current_instruction = 0x88173080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// lwz r30,132(r1)
	ctx.current_instruction = 0x88173088;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r15,128
	ctx.r15.s64 = 128;
	// lwz r24,108(r1)
	ctx.current_instruction = 0x88173090;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r21,96(r1)
	ctx.current_instruction = 0x88173098;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r18,100(r1)
	ctx.current_instruction = 0x881730A0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r20,104(r1)
	ctx.current_instruction = 0x881730A8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881730AC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	ctx.current_instruction = 0x881730B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.current_instruction = 0x881730B4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,112(r1)
	ctx.current_instruction = 0x881730B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r16,136(r1)
	ctx.current_instruction = 0x881730BC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,144(r1)
	ctx.current_instruction = 0x881730C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_881730C4:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x881730C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r8,15392(r23)
	ctx.current_instruction = 0x881730CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r9,15404(r23)
	ctx.current_instruction = 0x881730D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x88173144
	if (!ctx.cr6.gt) goto loc_88173144;
	// subf r7,r24,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r24.u64;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
loc_881730F0:
	// lwz r9,15388(r23)
	ctx.current_instruction = 0x881730F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88173130
	if (!ctx.cr6.lt) goto loc_88173130;
	// lwz r6,20(r23)
	ctx.current_instruction = 0x881730FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88173130
	if (!ctx.cr6.lt) goto loc_88173130;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x88173130
	if (ctx.cr6.lt) goto loc_88173130;
	// subf r9,r24,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lbzx r6,r9,r10
	ctx.current_instruction = 0x88173118;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,1(r11)
	ctx.current_instruction = 0x88173124;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x88173134
	goto loc_88173134;
loc_88173130:
	// stbu r22,1(r11)
	ctx.current_instruction = 0x88173130;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r11.u32 = ea;
loc_88173134:
	// lwz r9,15392(r23)
	ctx.current_instruction = 0x88173134;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881730f0
	if (ctx.cr6.lt) goto loc_881730F0;
loc_88173144:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r11,r5,r18
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r7,r11,r19
	ctx.r7.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ble cr6,0x881731f8
	if (!ctx.cr6.gt) goto loc_881731F8;
	// subf r6,r25,r19
	ctx.r6.u64 = ctx.r19.u64 - ctx.r25.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_88173170:
	// lwz r9,15388(r23)
	ctx.current_instruction = 0x88173170;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881731e8
	if (!ctx.cr6.lt) goto loc_881731E8;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x881731e8
	if (!ctx.cr6.lt) goto loc_881731E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x881731e8
	if (ctx.cr6.lt) goto loc_881731E8;
	// subf r9,r25,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r25.u64;
	// add r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,152(r1)
	ctx.current_instruction = 0x881731A0;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lbzx r9,r14,r21
	ctx.current_instruction = 0x881731A4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r21.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lwz r14,152(r1)
	ctx.current_instruction = 0x881731B8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stb r9,1(r11)
	ctx.current_instruction = 0x881731BC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r14,r20
	ctx.current_instruction = 0x881731C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r20.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,1(r10)
	ctx.current_instruction = 0x881731DC;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x881731f0
	goto loc_881731F0;
loc_881731E8:
	// stbu r15,1(r11)
	ctx.current_instruction = 0x881731E8;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r15.u8);
	ctx.r11.u32 = ea;
	// stbu r15,1(r10)
	ctx.current_instruction = 0x881731EC;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r15.u8);
	ctx.r10.u32 = ea;
loc_881731F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x88173170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88173170;
loc_881731F8:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x881731F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// lwz r9,15404(r23)
	ctx.current_instruction = 0x88173200;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x8817320C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r11,r17
	ctx.r7.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88173290
	if (!ctx.cr6.gt) goto loc_88173290;
	// subf r3,r24,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r24.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_8817323C:
	// lwz r11,15388(r23)
	ctx.current_instruction = 0x8817323C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8817327c
	if (!ctx.cr6.lt) goto loc_8817327C;
	// lwz r31,20(r23)
	ctx.current_instruction = 0x88173248;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8817327c
	if (!ctx.cr6.lt) goto loc_8817327C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8817327c
	if (ctx.cr6.lt) goto loc_8817327C;
	// subf r11,r24,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r24.u64;
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x88173264;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r9)
	ctx.current_instruction = 0x88173270;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x88173280
	goto loc_88173280;
loc_8817327C:
	// stbu r22,1(r9)
	ctx.current_instruction = 0x8817327C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r9.u32 = ea;
loc_88173280:
	// lwz r11,15392(r23)
	ctx.current_instruction = 0x88173280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817323c
	if (ctx.cr6.lt) goto loc_8817323C;
loc_88173290:
	// lwz r10,15396(r23)
	ctx.current_instruction = 0x88173290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// add r17,r11,r7
	ctx.r17.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881730c4
	if (ctx.cr6.lt) goto loc_881730C4;
loc_881732AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d4
	ctx.lr = 0x881732BC;
	__restfpr_28(ctx, base);
loc_881732BC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88195850) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88195850;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88195850) {
			switch (rex_dispatch_address) {
				case 0x88195858:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88195850;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88195858: goto loc_88195858;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88195858;
	__savegprlr_27(ctx, base);
loc_88195858:
	// lwz r11,288(r3)
	ctx.current_instruction = 0x88195858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88195f2c
	if (ctx.cr6.eq) goto loc_88195F2C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88195f2c
	if (ctx.cr6.eq) goto loc_88195F2C;
	// lwz r11,4020(r3)
	ctx.current_instruction = 0x8819586C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88195f2c
	if (ctx.cr6.eq) goto loc_88195F2C;
	// lwz r10,4032(r3)
	ctx.current_instruction = 0x88195878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4032);
	// lwz r11,3788(r3)
	ctx.current_instruction = 0x8819587C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// lwz r5,3792(r3)
	ctx.current_instruction = 0x88195880;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// lwz r29,3796(r3)
	ctx.current_instruction = 0x88195888;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// lwz r8,204(r3)
	ctx.current_instruction = 0x8819588C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,212(r3)
	ctx.current_instruction = 0x88195890;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// ble cr6,0x881958a0
	if (!ctx.cr6.gt) goto loc_881958A0;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// stw r10,4032(r3)
	ctx.current_instruction = 0x8819589C;
	REX_STORE_U32(ctx.r3.u32 + 4032, ctx.r10.u32);
loc_881958A0:
	// lwz r10,4028(r3)
	ctx.current_instruction = 0x881958A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4028);
	// lwz r9,4032(r3)
	ctx.current_instruction = 0x881958A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4032);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881958c0
	if (!ctx.cr6.eq) goto loc_881958C0;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,-64
	ctx.r10.s64 = -64;
	// subfic r9,r6,16320
	ctx.xer.ca = ctx.r6.u32 <= 16320;
	ctx.r9.u64 = static_cast<uint64_t>(16320) - ctx.r6.u64;
	// b 0x881958c8
	goto loc_881958C8;
loc_881958C0:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_881958C8:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// vspltish v11,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x6)));
	// std r10,-64(r1)
	ctx.current_instruction = 0x881958D8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// lfd f0,-64(r1)
	ctx.current_instruction = 0x881958DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// std r9,-64(r1)
	ctx.current_instruction = 0x881958E0;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x881958E4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r30,r10,25792
	ctx.r30.s64 = ctx.r10.s64 + 25792;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,-64(r1)
	ctx.current_instruction = 0x88195908;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f10,-60(r1)
	ctx.current_instruction = 0x8819590C;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f10,-56(r1)
	ctx.current_instruction = 0x88195910;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f10,-52(r1)
	ctx.current_instruction = 0x88195914;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stfs f9,-64(r1)
	ctx.current_instruction = 0x88195920;
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-60(r1)
	ctx.current_instruction = 0x88195924;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f9,-56(r1)
	ctx.current_instruction = 0x88195928;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f9,-52(r1)
	ctx.current_instruction = 0x8819592C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// dcbt r0,r11
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r11
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbt r10,r11
	// li r9,384
	ctx.r9.s64 = 384;
	// dcbt r9,r11
	// li r6,512
	ctx.r6.s64 = 512;
	// dcbt r6,r11
	// li r4,640
	ctx.r4.s64 = 640;
	// dcbt r4,r11
	// li r10,768
	ctx.r10.s64 = 768;
	// dcbt r10,r11
	// li r9,896
	ctx.r9.s64 = 896;
	// dcbt r9,r11
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// srawi. r10,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// beq 0x88195cdc
	if (ctx.cr0.eq) goto loc_88195CDC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r31,48
	ctx.r31.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
loc_881959A0:
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v6,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v3,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v27,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v1,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v23,v31,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghh v22,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v25,v27,0
	simde_mm_store_ps(ctx.v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vmrglh v26,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v29,v30,0
	simde_mm_store_ps(ctx.v29.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrglh v21,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v24,v28,0
	simde_mm_store_ps(ctx.v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v27,v22,0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v26,v26,0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vmrghh v20,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v28,v21,0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v17,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v19,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v16,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v18,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v22,v13,v23,v12
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v23.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v25,v13,v25,v12
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v25.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v23,v13,v29,v12
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v24,v13,v24,v12
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v15,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v27,v13,v27,v12
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v14,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v26,v13,v26,v12
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v31,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v28,v13,v28,v12
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v30,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v2,v10,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghb v29,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v61,v22,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v22.f32)));
	// vmrghh v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v58,v25,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v25.f32)));
	// vmrglh v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v60,v23,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v23.f32)));
	// vmrghh v21,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v59,v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v24.f32)));
	// vmrghh v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v22,v20,0
	simde_mm_store_ps(ctx.v22.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vcfsx v23,v19,0
	simde_mm_store_ps(ctx.v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v19.u32)));
	// vcfpsxws128 v57,v26,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v26.f32)));
	// vcfpsxws128 v56,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v27.f32)));
	// vcfsx v25,v17,0
	simde_mm_store_ps(ctx.v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	// vcfsx v26,v16,0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vcfsx v24,v18,0
	simde_mm_store_ps(ctx.v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vcfpsxws128 v55,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v28.f32)));
	// vcfsx v27,v15,0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v15.u32)));
	// vpkswss128 v19,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vcfsx v28,v14,0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v14.u32)));
	// vpkswss128 v20,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// vsrah v16,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v20,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v18,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vpkshus128 v54,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vsrah v15,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v6,v9,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghh v20,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v9,v10,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglh v16,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v7,v8,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglh v14,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v8,v21,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	// vmrglh v3,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v10,v4,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// addi r27,r1,-64
	ctx.r27.s64 = ctx.r1.s64 + -64;
	// vmaddfp v22,v13,v22,v12
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v22.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v21,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v4,v13,v2,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v17,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v28,v13,v28,v12
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v23,v13,v23,v12
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v23.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v19,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v24,v13,v24,v12
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v18,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v25,v13,v25,v12
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v25.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v3,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v26,v13,v26,v12
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// li r28,1024
	ctx.r28.s64 = 1024;
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v27,v13,v27,v12
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v51,v22,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v22.f32)));
	// vcfpsxws128 v53,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v28.f32)));
	// vcfpsxws128 v52,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v50,v23,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v23.f32)));
	// vcfpsxws128 v49,v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v24.f32)));
	// vcfpsxws128 v48,v25,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v25.f32)));
	// vcfpsxws128 v47,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v44,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v46,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v45,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v43,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfsx v10,v14,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v14.u32)));
	// vcfpsxws128 v42,v26,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v26.f32)));
	// lvx128 v39,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v41,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v27.f32)));
	// vpkswss128 v27,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// vcfsx v2,v21,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	// vcfsx v31,v17,0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	// vcfsx v3,v16,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vpkswss128 v26,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// vcfsx v28,v5,0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vsrah v24,v27,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfsx v5,v19,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v19.u32)));
	// vpkswss128 v25,v47,v52
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vcfsx v6,v18,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vcfsx v4,v20,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vsrah v22,v26,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v23,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vcfsx v7,v30,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vpkswss128 v21,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vsrah v20,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkshus128 v40,v24,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vpkswss128 v19,v42,v48
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vcfsx v8,v1,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vsrah v17,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v18,v53,v41
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// vsrah v16,v21,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcsxwfp128 v9,v39,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vsrah v15,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaddfp v30,v13,v28,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkshus128 v38,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v40,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v37,v15,v22
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vpkshus128 v36,v20,v14
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vcfpsxws128 v35,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v38,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v10,v29,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// stvx128 v37,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v1,v13,v31,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v36,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v2,v13,v2,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v3,v13,v3,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v4,v13,v4,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v34,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v33,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v32,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v63,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v62,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v61,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v60,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v59,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v58,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v57,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v56,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v10,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v34.s32)));
	// vpkswss128 v9,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// vpkswss128 v7,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsrah v8,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v6,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vsrah v5,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v4,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vsrah v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkswss128 v2,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vsrah v31,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v30,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v55,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v53,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v54,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r28,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x881959a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881959A0;
loc_88195CDC:
	// dcbt r0,r5
	// dcbt r0,r29
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r5
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r29
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r5
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r8,r29
	// li r7,384
	ctx.r7.s64 = 384;
	// dcbt r7,r5
	// li r4,384
	ctx.r4.s64 = 384;
	// dcbt r4,r29
	// lwz r10,208(r3)
	ctx.current_instruction = 0x88195D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r11,216(r3)
	ctx.current_instruction = 0x88195D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi. r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x88195f2c
	if (ctx.cr0.eq) goto loc_88195F2C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lvx128 v63,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88195D40:
	// lvx128 v10,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,512
	ctx.r10.s64 = 512;
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v2,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v1,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v31,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v52,v4,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghh v30,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v51,v3,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrglh v29,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v50,v2,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghh v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v49,v1,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vcsxwfp128 v48,v31,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v47,v30,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v46,v29,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v45,v28,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v27,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v26,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v25,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v24,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v30,v52,v63
	simde_mm_store_ps(ctx.v30.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrglh v23,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v2,v51,v63
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrghh v22,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v31,v50,v63
	simde_mm_store_ps(ctx.v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrglh v21,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v1,v49,v63
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrghh v20,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v4,v48,v63
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v5,v47,v63
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v6,v46,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v7,v45,v63
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v44,v27,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vcsxwfp128 v43,v26,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vcsxwfp128 v42,v25,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vcsxwfp128 v41,v24,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v24.u32)));
	// vmaddfp v30,v13,v30,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v2,v13,v2,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v31,v13,v31,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v13,v1,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v4,v13,v4,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v8,v44,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v40,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v30.f32)));
	// vcfpsxws128 v39,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v38,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v31.f32)));
	// vcfpsxws128 v37,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v36,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v35,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v34,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v33,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkswss128 v19,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vpkswss128 v18,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// vpkswss128 v17,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// vsrah v16,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v15,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v32,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vsrah v10,v17,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubfp128 v8,v43,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsrah v9,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vpkshus128 v61,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v60,v23,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vcsxwfp128 v59,v22,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vcsxwfp128 v58,v21,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	// vcsxwfp128 v57,v20,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmaddfp v4,v13,v8,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v5,v42,v63
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v6,v41,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v7,v60,v63
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v8,v59,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v58,v63
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v10,v57,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v56,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkswss128 v4,v56,v32
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vcfpsxws128 v55,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v54,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vsrah v3,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v53,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v52,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v51,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v50,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v2,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vsrah v1,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v31,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vpkshus128 v49,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vpkswss128 v30,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vsrah v29,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v49,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v48,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvx128 v48,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r10,r5
	// li r9,512
	ctx.r9.s64 = 512;
	// dcbt r9,r11
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x88195d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88195D40;
loc_88195F2C:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B2480) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B2480;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B2480) {
			switch (rex_dispatch_address) {
				case 0x881B2488:
				case 0x881B26B0:
				case 0x881B26E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B2480;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B2488: goto loc_881B2488;
		case 0x881B26B0: goto loc_881B26B0;
		case 0x881B26E0: goto loc_881B26E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B2488;
	__savegprlr_14(ctx, base);
loc_881B2488:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881B2488;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	ctx.current_instruction = 0x881B248C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,268(r1)
	ctx.current_instruction = 0x881B2494;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r5,276(r1)
	ctx.current_instruction = 0x881B249C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,292(r1)
	ctx.current_instruction = 0x881B24A4;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r8,300(r1)
	ctx.current_instruction = 0x881B24A8;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// ble cr6,0x881b267c
	if (!ctx.cr6.gt) goto loc_881B267C;
	// lwz r11,340(r1)
	ctx.current_instruction = 0x881B24B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r9,80(r1)
	ctx.current_instruction = 0x881B24B8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r18,r4,r11
	ctx.r18.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r15,r7,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r19,r8,r11
	ctx.r19.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r17,r9,r11
	ctx.r17.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r16,r7,r11
	ctx.r16.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r22,r11,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r11,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r20,r3,r6
	ctx.r20.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r14,255
	ctx.r14.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
loc_881B24F4:
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,0(r3)
	ctx.current_instruction = 0x881B24F8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r6,r3,r11
	ctx.current_instruction = 0x881B24FC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r23,r20,r3
	ctx.r23.u64 = ctx.r20.u64 + ctx.r3.u64;
	// add r9,r21,r8
	ctx.r9.u64 = ctx.r21.u64 + ctx.r8.u64;
	// add r30,r31,r6
	ctx.r30.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lbzx r29,r22,r8
	ctx.current_instruction = 0x881B2510;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// mulli r30,r30,14
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// lbzx r8,r21,r8
	ctx.current_instruction = 0x881B2518;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mulli r31,r6,11
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(11));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r6,r8,63
	ctx.r6.s64 = ctx.r8.s64 + 63;
	// srawi r8,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 7;
	// stw r8,0(r24)
	ctx.current_instruction = 0x881B2540;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// ble cr6,0x881b25d0
	if (!ctx.cr6.gt) goto loc_881B25D0;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r5,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r5.u64;
	// subf r31,r5,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_881B257C:
	// lbzx r6,r9,r11
	ctx.current_instruction = 0x881B257C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r28,0(r9)
	ctx.current_instruction = 0x881B2580;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r25,r8,r11
	ctx.current_instruction = 0x881B2588;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r27,r6,r28
	ctx.r27.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbzux r6,r31,r5
	ctx.current_instruction = 0x881B2590;
	ea = ctx.r31.u32 + ctx.r5.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzux r28,r30,r5
	ctx.current_instruction = 0x881B2594;
	ea = ctx.r30.u32 + ctx.r5.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mulli r26,r27,14
	ctx.r26.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(14));
	// lbz r27,0(r8)
	ctx.current_instruction = 0x881B259C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// mulli r27,r27,11
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(11));
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r6,r27,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r27.u64;
	// addi r6,r6,63
	ctx.r6.s64 = ctx.r6.s64 + 63;
	// srawi r6,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 7;
	// stwu r6,8(r29)
	ctx.current_instruction = 0x881B25C8;
	ea = 8 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x881b257c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B257C;
loc_881B25D0:
	// lbzx r8,r16,r3
	ctx.current_instruction = 0x881B25D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r9,r18,r3
	ctx.current_instruction = 0x881B25D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r3.u32);
	// lbzx r6,r19,r3
	ctx.current_instruction = 0x881B25DC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r3.u32);
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r31,r17,r3
	ctx.current_instruction = 0x881B25E4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r3.u32);
	// mulli r30,r30,14
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mulli r6,r8,11
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r9,63
	ctx.r8.s64 = ctx.r9.s64 + 63;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// stwx r6,r15,r24
	ctx.current_instruction = 0x881B2610;
	REX_STORE_U32(ctx.r15.u32 + ctx.r24.u32, ctx.r6.u32);
	// ble cr6,0x881b2660
	if (!ctx.cr6.gt) goto loc_881B2660;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B2630:
	// lwz r8,0(r6)
	ctx.current_instruction = 0x881B2630;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881b2648
	if (!ctx.cr6.gt) goto loc_881B2648;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r14
	ctx.r8.u64 = ctx.r8.u64 & ctx.r14.u64;
loc_881B2648:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stb r8,0(r9)
	ctx.current_instruction = 0x881B2650;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stbx r4,r11,r9
	ctx.current_instruction = 0x881B2654;
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bdnz 0x881b2630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2630;
loc_881B2660:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881B2660;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,80(r1)
	ctx.current_instruction = 0x881B266C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne 0x881b24f4
	if (!ctx.cr0.eq) goto loc_881B24F4;
	// lwz r11,292(r1)
	ctx.current_instruction = 0x881B2674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r27,300(r1)
	ctx.current_instruction = 0x881B2678;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_881B267C:
	// lwz r31,324(r1)
	ctx.current_instruction = 0x881B267C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,348(r1)
	ctx.current_instruction = 0x881B2680;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r28,332(r1)
	ctx.current_instruction = 0x881B2684;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881b26ec
	if (!ctx.cr6.gt) goto loc_881B26EC;
	// lwz r10,268(r1)
	ctx.current_instruction = 0x881B2690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_881B26A0:
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8813a8c0
	ctx.lr = 0x881B26B0;
	sub_8813A8C0(ctx, base);
loc_881B26B0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b26a0
	if (!ctx.cr0.eq) goto loc_881B26A0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881b26ec
	if (!ctx.cr6.gt) goto loc_881B26EC;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x881B26C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r30,r27,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r27.u64;
loc_881B26D0:
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8813a8c0
	ctx.lr = 0x881B26E0;
	sub_8813A8C0(ctx, base);
loc_881B26E0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b26d0
	if (!ctx.cr0.eq) goto loc_881B26D0;
loc_881B26EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B69F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B69F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B69F8;
	ctx.current_instruction = 0x881B69F8;
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// lvlx128 v62,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v4,5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x5)));
	// lvrx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// lvlx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_set1_epi32(int(0x3)));
	// lvrx128 v56,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0x2)));
	// lvrx128 v55,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvlx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v9,v54,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisw128 v53,6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_set1_epi32(int(0x6)));
	// vslh v3,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vadduhm v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v2,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
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
	// vadduhm v28,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v27,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v12,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v26,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v11,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v10,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubuhm v12,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v13,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v24,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v23,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v22,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsubuhm v21,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsrah v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vupkhsb128 v47,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16))));
	// vupkhsb128 v44,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16))));
	// vupkhsb128 v46,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16))));
	// vupkhsb128 v45,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16))));
	// vupklsb128 v51,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vupklsb128 v50,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vupklsb128 v49,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vupklsb128 v48,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vmrghw128 v41,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v40,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v42,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v43,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v37,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v13,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vmrghw128 v36,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrglw128 v39,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrglw128 v38,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v7,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v35,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vslw128 v15,v13,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v6,v12,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrglw128 v10,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vaddsws v0,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrghw128 v34,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrglw128 v11,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vaddsws v16,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vspltisw128 v33,5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_set1_epi32(int(0x5)));
	// vslw128 v14,v35,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v9,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vslw128 v5,v35,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v8,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vslw128 v4,v12,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vslw128 v1,v13,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r9,4
	ctx.r9.s64 = 4;
	// vslw128 v3,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vaddsws v2,v15,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddsws v30,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslw128 v7,v11,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vslw128 v12,v10,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v31,v11,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v28,v1,v13
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v29,v10,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v5,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v27,v34,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v34,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v60,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v22,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v21,v11,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v6,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vaddsws v20,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vaddsws v18,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v26,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v8,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v3,v6,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v6,v22
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v22.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v22.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v22.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v22.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v5,v11,v20
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v20.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v20.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v20.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v20.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v1,v11,v18
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v18.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v18.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v18.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v18.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v7,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v7,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vslw128 v12,v15,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v30,v14,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v26,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v28,v6,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v27,v6,v31
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v31.s32[0]);
	ctx.v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v31.s32[1]);
	ctx.v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v31.s32[2]);
	ctx.v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v31.s32[3]);
	ctx.v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v6,v3,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v12,v30
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v30.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v30.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v30.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v30.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v13,v13,v60
	ctx.v13.s32[0] = ctx.v13.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v13.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v13.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v13.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vslw128 v29,v0,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v9,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v11,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v29,v0
	temp.s64 = int64_t(ctx.v29.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v29.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v29.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v29.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v0,v0,v60
	ctx.v0.s32[0] = ctx.v0.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v0.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v0.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v0.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsubsws v6,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v4,v5,v23
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v23.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v23.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v23.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v23.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v23,v25,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v5,v16
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v16.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v16.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v16.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v16.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v32,v22,v53
	ctx.v32.s32[0] = ctx.v22.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v32.s32[1] = ctx.v22.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v32.s32[2] = ctx.v22.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v32.s32[3] = ctx.v22.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsubsws v4,v4,v28
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(ctx.v28.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(ctx.v28.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(ctx.v28.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(ctx.v28.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v12,v12,v23
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v23.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v23.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v23.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v23.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v5,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswss128 v63,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// vaddsws v3,v2,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v7,v12
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v0,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvewx128 v63,r0,r10
	ctx.current_instruction = 0x881B6C78;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddsws v20,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v62,v21,v53
	ctx.v62.s32[0] = ctx.v21.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v62.s32[1] = ctx.v21.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v62.s32[2] = ctx.v21.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v62.s32[3] = ctx.v21.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// stvewx128 v63,r10,r9
	ctx.current_instruction = 0x881B6C84;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vsraw128 v61,v20,v53
	ctx.v61.s32[0] = ctx.v20.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v61.s32[1] = ctx.v20.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v61.s32[2] = ctx.v20.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v61.s32[3] = ctx.v20.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vaddsws v19,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v18,v6,v13
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v58,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsubsws v17,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v57,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// vsubsws v16,v8,v11
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v60,v19,v53
	ctx.v60.s32[0] = ctx.v19.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v60.s32[1] = ctx.v19.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v60.s32[2] = ctx.v19.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v60.s32[3] = ctx.v19.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v59,v18,v53
	ctx.v59.s32[0] = ctx.v18.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v59.s32[1] = ctx.v18.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v59.s32[2] = ctx.v18.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v59.s32[3] = ctx.v18.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v54,v17,v53
	ctx.v54.s32[0] = ctx.v17.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v54.s32[1] = ctx.v17.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v54.s32[2] = ctx.v17.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v54.s32[3] = ctx.v17.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v52,v16,v53
	ctx.v52.s32[0] = ctx.v16.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v16.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v16.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v16.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vpkswss128 v56,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vsubsws v15,v9,v10
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvewx128 v58,r11,r10
	ctx.current_instruction = 0x881B6CC0;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v55,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// stvewx128 v58,r8,r9
	ctx.current_instruction = 0x881B6CC8;
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v57,r7,r10
	ctx.current_instruction = 0x881B6CD0;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkswss128 v50,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v50.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vsraw128 v51,v15,v53
	ctx.v51.s32[0] = ctx.v15.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v51.s32[1] = ctx.v15.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v51.s32[2] = ctx.v15.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v51.s32[3] = ctx.v15.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vpkswss128 v49,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvewx128 v57,r8,r9
	ctx.current_instruction = 0x881B6CEC;
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stvewx128 v56,r6,r10
	ctx.current_instruction = 0x881B6CF4;
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v48,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// stvewx128 v56,r8,r9
	ctx.current_instruction = 0x881B6CFC;
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvewx128 v55,r5,r10
	ctx.current_instruction = 0x881B6D04;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r8,r9
	ctx.current_instruction = 0x881B6D08;
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvewx128 v50,r0,r8
	ctx.current_instruction = 0x881B6D20;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r8,r9
	ctx.current_instruction = 0x881B6D24;
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r11
	ctx.current_instruction = 0x881B6D28;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r11,r9
	ctx.current_instruction = 0x881B6D2C;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v48,r7,r10
	ctx.current_instruction = 0x881B6D34;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r11,r9
	ctx.current_instruction = 0x881B6D38;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DE898) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DE898;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DE898) {
			switch (rex_dispatch_address) {
				case 0x881DE8A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE898;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881DE8A0: goto loc_881DE8A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DE8A0;
	__savegprlr_14(ctx, base);
loc_881DE8A0:
	// lwz r28,92(r1)
	ctx.current_instruction = 0x881DE8A0;
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
	// subf r19,r18,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881de9c4
	if (!ctx.cr6.gt) goto loc_881DE9C4;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,84(r1)
	ctx.current_instruction = 0x881DE8D4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x881DE8DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r17,r23,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-160(r1)
	ctx.current_instruction = 0x881DE8E4;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
loc_881DE8E8:
	// addi r20,r26,16
	ctx.r20.s64 = ctx.r26.s64 + 16;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r9
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881de8fc
	if (!ctx.cr6.gt) goto loc_881DE8FC;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_881DE8FC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x881de9ac
	if (!ctx.cr6.gt) goto loc_881DE9AC;
	// subf r21,r26,r25
	ctx.r21.u64 = ctx.r25.u64 - ctx.r26.u64;
	// mullw r22,r21,r6
	ctx.r22.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r6.s32);
loc_881DE910:
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
	// bge cr6,0x881de998
	if (!ctx.cr6.lt) goto loc_881DE998;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
loc_881DE95C:
	// sraw r11,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// lbzx r16,r31,r11
	ctx.current_instruction = 0x881DE960;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// lbzx r15,r7,r11
	ctx.current_instruction = 0x881DE968;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r16,r16,8
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 8);
	// lbzx r14,r30,r11
	ctx.current_instruction = 0x881DE970;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r11,r29,r11
	ctx.current_instruction = 0x881DE974;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
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
	ctx.current_instruction = 0x881DE98C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bdnz 0x881de95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DE95C;
loc_881DE998:
	// subf r8,r22,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r3,r8,-4
	ctx.r3.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881de910
	if (ctx.cr6.lt) goto loc_881DE910;
loc_881DE9AC:
	// lwz r11,-160(r1)
	ctx.current_instruction = 0x881DE9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r24,r17,r24
	ctx.r24.u64 = ctx.r17.u64 + ctx.r24.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r20,r9
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881de8e8
	if (ctx.cr6.lt) goto loc_881DE8E8;
loc_881DE9C4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0AF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0AF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0AF0) {
			switch (rex_dispatch_address) {
				case 0x881E0AF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0AF0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881E0AF8: goto loc_881E0AF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881E0AF8;
	__savegprlr_18(ctx, base);
loc_881E0AF8:
	// lwz r31,108(r1)
	ctx.current_instruction = 0x881E0AF8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r11,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 31;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// xor r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881e0b18
	if (ctx.cr6.eq) goto loc_881E0B18;
	// srawi r29,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 1;
loc_881E0B18:
	// lwz r20,100(r1)
	ctx.current_instruction = 0x881E0B18;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r22,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r30,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r20.s32 >> 1;
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x881e0b90
	if (!ctx.cr0.gt) goto loc_881E0B90;
	// lwz r26,124(r1)
	ctx.current_instruction = 0x881E0B34;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_881E0B40:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881e0b80
	if (!ctx.cr6.gt) goto loc_881E0B80;
	// add r25,r27,r6
	ctx.r25.u64 = ctx.r27.u64 + ctx.r6.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r24,r26,1
	ctx.r24.s64 = ctx.r26.s64 + 1;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_881E0B60:
	// lbzx r19,r28,r5
	ctx.current_instruction = 0x881E0B60;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// lbzx r18,r25,r11
	ctx.current_instruction = 0x881E0B64;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stbx r19,r26,r29
	ctx.current_instruction = 0x881E0B70;
	REX_STORE_U8(ctx.r26.u32 + ctx.r29.u32, ctx.r19.u8);
	// stbx r18,r24,r29
	ctx.current_instruction = 0x881E0B74;
	REX_STORE_U8(ctx.r24.u32 + ctx.r29.u32, ctx.r18.u8);
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// bdnz 0x881e0b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0B60;
loc_881E0B80:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bne 0x881e0b40
	if (!ctx.cr0.eq) goto loc_881E0B40;
loc_881E0B90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e0dac
	if (!ctx.cr6.gt) goto loc_881E0DAC;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r7,-16
	ctx.r29.s64 = ctx.r7.s64 + -16;
	// rlwinm r27,r20,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_881E0BBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881e0d60
	if (!ctx.cr6.gt) goto loc_881E0D60;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
loc_881E0BD4:
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0BD8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0BDC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0BE4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0BE8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0BF0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0BF4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0BFC;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C00;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C08;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C0C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C14;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C18;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C20;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C24;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C2C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C30;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C38;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C3C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C44;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C48;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C50;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C54;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C5C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C60;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C68;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C6C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C74;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C78;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C80;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C84;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0C8C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0C90;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0C98;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0C9C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0CA4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0CA8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0CB0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0CB4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0CBC;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0CC0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0CC8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0CCC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0CD4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0CD8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0CE0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0CE4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0CEC;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0CF0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0CF8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0CFC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0D04;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0D08;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0D10;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0D14;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// lbzx r25,r11,r6
	ctx.current_instruction = 0x881E0D18;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r8,r5
	ctx.current_instruction = 0x881E0D20;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r25.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0D28;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0D2C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0D34;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0D38;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0D40;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r11,r11,r6
	ctx.current_instruction = 0x881E0D44;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0D50;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r11,r8,r5
	ctx.current_instruction = 0x881E0D54;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// blt cr6,0x881e0bd4
	if (ctx.cr6.lt) goto loc_881E0BD4;
loc_881E0D60:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e0d9c
	if (!ctx.cr6.lt) goto loc_881E0D9C;
	// subf r25,r6,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_881E0D7C:
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0D7C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r24,r11,r4
	ctx.current_instruction = 0x881E0D84;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0D8C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0D90;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// bdnz 0x881e0d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0D7C;
loc_881E0D9C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// bne 0x881e0bbc
	if (!ctx.cr0.eq) goto loc_881E0BBC;
loc_881E0DAC:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9458) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9458;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9458) {
			switch (rex_dispatch_address) {
				case 0x881E9460:
				case 0x881E94F0:
				case 0x881E9510:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9458;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9460: goto loc_881E9460;
		case 0x881E94F0: goto loc_881E94F0;
		case 0x881E9510: goto loc_881E9510;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881E9460;
	__savegprlr_25(ctx, base);
loc_881E9460:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881E9460;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	ctx.current_instruction = 0x881E9464;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// addi r25,r4,56
	ctx.r25.s64 = ctx.r4.s64 + 56;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881e94c0
	if (ctx.cr6.eq) goto loc_881E94C0;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881E9488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_881E948C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881E948C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881e94ac
	if (ctx.cr6.lt) goto loc_881E94AC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881e94cc
	if (ctx.cr6.eq) goto loc_881E94CC;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881E94A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881e94cc
	if (ctx.cr6.eq) goto loc_881E94CC;
loc_881E94AC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.current_instruction = 0x881E94B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881e948c
	if (!ctx.cr6.eq) goto loc_881E948C;
loc_881E94C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881E94C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881E94CC:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881E94CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.current_instruction = 0x881E94D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	ctx.current_instruction = 0x881E94D8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x881e94f4
	if (ctx.cr6.eq) goto loc_881E94F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x881E94F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881E94F0:
	// b 0x881e9510
	goto loc_881E9510;
loc_881E94F4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r3)
	ctx.current_instruction = 0x881E94F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88243720
	ctx.lr = 0x881E9510;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881E9510:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881e94c0
	if (ctx.cr6.lt) goto loc_881E94C0;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x881E9518;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.current_instruction = 0x881E951C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.current_instruction = 0x881E9520;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	ctx.current_instruction = 0x881E9528;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881E952C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881e953c
	if (!ctx.cr6.eq) goto loc_881E953C;
	// stw r26,28(r30)
	ctx.current_instruction = 0x881E9538;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
loc_881E953C:
	// lwz r11,64(r30)
	ctx.current_instruction = 0x881E953C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881E9540;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.current_instruction = 0x881E9548;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e956c
	if (ctx.cr0.eq) goto loc_881E956C;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881E9554;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x881E9558;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x881e95d8
	if (ctx.cr6.eq) goto loc_881E95D8;
loc_881E956C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x881e957c
	if (!ctx.cr6.eq) goto loc_881E957C;
	// lwz r11,40(r30)
	ctx.current_instruction = 0x881E9574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x881e9588
	goto loc_881E9588;
loc_881E957C:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881E957C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x881E9580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_881E9588:
	// lbz r10,5(r11)
	ctx.current_instruction = 0x881E9588;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881e95d8
	if (!ctx.cr0.eq) goto loc_881E95D8;
	// lwz r9,44(r30)
	ctx.current_instruction = 0x881E9594;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
loc_881E9598:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881E9598;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x881e95cc
	if (!ctx.cr6.lt) goto loc_881E95CC;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881E95B0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x881e95cc
	if (ctx.cr0.eq) goto loc_881E95CC;
	// lbz r10,5(r11)
	ctx.current_instruction = 0x881E95BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e9598
	if (ctx.cr0.eq) goto loc_881E9598;
	// b 0x881e95d8
	goto loc_881E95D8;
loc_881E95CC:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e94c0
	if (!ctx.cr6.eq) goto loc_881E94C0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_881E95D8:
	// lbz r10,5(r11)
	ctx.current_instruction = 0x881E95D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	ctx.current_instruction = 0x881E95E0;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.current_instruction = 0x881E95E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.current_instruction = 0x881E95E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881E95EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	ctx.current_instruction = 0x881E95F4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x881E95F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	ctx.current_instruction = 0x881E9600;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x881e9668
	if (!ctx.cr0.eq) goto loc_881E9668;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881E9608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.current_instruction = 0x881E960C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e9628
	if (!ctx.cr6.eq) goto loc_881E9628;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	ctx.current_instruction = 0x881E961C;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	ctx.current_instruction = 0x881E9620;
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// b 0x881e9634
	goto loc_881E9634;
loc_881E9628:
	// stb r26,5(r3)
	ctx.current_instruction = 0x881E9628;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r26.u8);
	// lwz r10,40(r30)
	ctx.current_instruction = 0x881E962C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,64(r30)
	ctx.current_instruction = 0x881E9630;
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_881E9634:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x881E9634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r27)
	ctx.current_instruction = 0x881E9638;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.current_instruction = 0x881E963C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.current_instruction = 0x881E9640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	ctx.current_instruction = 0x881E9644;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.current_instruction = 0x881E9648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,76(r10)
	ctx.current_instruction = 0x881E964C;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r31.u32);
	// stw r26,4(r31)
	ctx.current_instruction = 0x881E9650;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	ctx.current_instruction = 0x881E9654;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r10,52(r30)
	ctx.current_instruction = 0x881E9658;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	ctx.current_instruction = 0x881E9660;
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// b 0x881e9674
	goto loc_881E9674;
loc_881E9668:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	ctx.current_instruction = 0x881E966C;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	ctx.current_instruction = 0x881E9670;
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_881E9674:
	// lbz r10,4(r11)
	ctx.current_instruction = 0x881E9674;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.current_instruction = 0x881E9678;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,4(r3)
	ctx.current_instruction = 0x881E9680;
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x881E9684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	ctx.current_instruction = 0x881E968C;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x881E9690;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,2(r3)
	ctx.current_instruction = 0x881E9694;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x881e96ac
	if (!ctx.cr0.eq) goto loc_881E96AC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x881E96A8;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_881E96AC:
	// lwz r11,28(r30)
	ctx.current_instruction = 0x881E96AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881e94c4
	if (!ctx.cr6.eq) goto loc_881E94C4;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x881E96B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x881e96d8
	goto loc_881E96D8;
loc_881E96C0:
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881E96C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.current_instruction = 0x881E96C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x881e96d4
	if (ctx.cr6.lt) goto loc_881E96D4;
	// stw r10,28(r30)
	ctx.current_instruction = 0x881E96D0;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_881E96D4:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881E96D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_881E96D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881e96c0
	if (!ctx.cr6.eq) goto loc_881E96C0;
	// b 0x881e94c4
	goto loc_881E94C4;
}

DEFINE_REX_FUNC(sub_881ED470) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED470);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED470;
	ctx.current_instruction = 0x881ED470;
	// lwz r11,336(r13)
	ctx.current_instruction = 0x881ED470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,256(r13)
	ctx.current_instruction = 0x881ED47C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	ctx.current_instruction = 0x881ED480;
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED4F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED4F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED4F0) {
			switch (rex_dispatch_address) {
				case 0x881ED538:
				case 0x881ED544:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED4F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED538: goto loc_881ED538;
		case 0x881ED544: goto loc_881ED544;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ED4F4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881ED4F8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r7,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x881ed520
	if (ctx.cr6.eq) goto loc_881ED520;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_881ED520:
	// lis r10,-30689
	ctx.r10.s64 = -2011234304;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r6,r10,-6208
	ctx.r6.s64 = ctx.r10.s64 + -6208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88243960
	ctx.lr = 0x881ED538;
	__imp__ExCreateThread(ctx, base);
loc_881ED538:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881ed54c
	if (!ctx.cr0.lt) goto loc_881ED54C;
	// bl 0x881ed488
	ctx.lr = 0x881ED544;
	sub_881ED488(ctx, base);
loc_881ED544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ed550
	goto loc_881ED550;
loc_881ED54C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x881ED54C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881ED550:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ED554;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EE840) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EE840);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE840;
	ctx.current_instruction = 0x881EE840;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_881EE844:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881EE844;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x881ee844
	if (!ctx.cr0.eq) goto loc_881EE844;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EE8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EE8E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EE8E8) {
			switch (rex_dispatch_address) {
				case 0x881EE8F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE8E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EE8F8: goto loc_881EE8F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EE8EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EE8F0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88050a80
	ctx.lr = 0x881EE8F8;
	sub_88050A80(ctx, base);
loc_881EE8F8:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.current_instruction = 0x881EE8FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	ctx.current_instruction = 0x881EE910;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EE91C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EEB80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EEB80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EEB80) {
			switch (rex_dispatch_address) {
				case 0x881EEBB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEB80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EEBB0: goto loc_881EEBB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EEB84;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EEB88;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EEB8C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30764
	ctx.r10.s64 = ctx.r10.s64 + -30764;
	// stw r11,4(r3)
	ctx.current_instruction = 0x881EEB9C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x881EEBA4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	ctx.current_instruction = 0x881EEBA8;
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x881ee9e8
	ctx.lr = 0x881EEBB0;
	sub_881EE9E8(ctx, base);
loc_881EEBB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EEBB8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EEBC0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_17) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EECF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EECF8;
	ctx.current_instruction = 0x881EECF8;
	uint32_t ea{};
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDA4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDA4;
	ctx.current_instruction = 0x881EEDA4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_100) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE94);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE94;
	ctx.current_instruction = 0x881EEE94;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_17) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF90);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEF90;
	ctx.current_instruction = 0x881EEF90;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_92) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0EC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0EC;
	ctx.current_instruction = 0x881EF0EC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_101) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF134);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF134;
	ctx.current_instruction = 0x881EF134;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F0BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0BA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0BA8) {
			switch (rex_dispatch_address) {
				case 0x881F0BE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0BA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0BE8: goto loc_881F0BE8;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F0BA8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F0BB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x881F0BB8;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0BBC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.current_instruction = 0x881F0BC0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x881f0be0
	goto loc_881F0BE0;
loc_881F0BE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1c20
	ctx.lr = 0x881F0BE8;
	sub_881F1C20(ctx, base);
loc_881F0BE8:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0BE8;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F0BEC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F0BF0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x881F0BF4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F16D4) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F16D4;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F16D4) {
			switch (rex_dispatch_address) {
				case 0x881F16F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F16D4;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F16F4: goto loc_881F16F4;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F16D4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F16DC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x881F16E4;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F16E8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1c20
	ctx.lr = 0x881F16F4;
	sub_881F1C20(ctx, base);
loc_881F16F4:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F16F4;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F16F8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F16FC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x881F1700;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1E00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F1E00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1E00;
	ctx.current_instruction = 0x881F1E00;
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.current_instruction = 0x881F1E08;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.current_instruction = 0x881F1E0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	ctx.current_instruction = 0x881F1E14;
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.current_instruction = 0x881F1E18;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F9240) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F9240;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F9240) {
			switch (rex_dispatch_address) {
				case 0x881F9340:
				case 0x881F9374:
				case 0x881F9380:
				case 0x881F9388:
				case 0x881F9394:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F9240;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F9340: goto loc_881F9340;
		case 0x881F9374: goto loc_881F9374;
		case 0x881F9380: goto loc_881F9380;
		case 0x881F9388: goto loc_881F9388;
		case 0x881F9394: goto loc_881F9394;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F9244;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881F9248;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F924C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F9250;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r3)
	ctx.current_instruction = 0x881F9254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f9298
	if (ctx.cr6.eq) goto loc_881F9298;
	// lwz r11,20684(r3)
	ctx.current_instruction = 0x881F9268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f9298
	if (ctx.cr6.eq) goto loc_881F9298;
	// lwz r11,21704(r3)
	ctx.current_instruction = 0x881F9274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881f9298
	if (!ctx.cr6.eq) goto loc_881F9298;
	// lwz r10,140(r3)
	ctx.current_instruction = 0x881F9280;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,21972(r3)
	ctx.current_instruction = 0x881F9284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,21968(r3)
	ctx.current_instruction = 0x881F9290;
	REX_STORE_U32(ctx.r3.u32 + 21968, ctx.r9.u32);
	// b 0x881f92a0
	goto loc_881F92A0;
loc_881F9298:
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x881F9298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r11,21968(r31)
	ctx.current_instruction = 0x881F929C;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r11.u32);
loc_881F92A0:
	// lwz r10,2964(r31)
	ctx.current_instruction = 0x881F92A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// lwz r11,2976(r31)
	ctx.current_instruction = 0x881F92A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2976);
	// addi r8,r10,735
	ctx.r8.s64 = ctx.r10.s64 + 735;
	// lwz r9,2980(r31)
	ctx.current_instruction = 0x881F92AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2980);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// lwz r10,2984(r31)
	ctx.current_instruction = 0x881F92B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2984);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2092(r31)
	ctx.current_instruction = 0x881F92BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r5,r9,738
	ctx.r5.s64 = ctx.r9.s64 + 738;
	// lwz r4,4016(r31)
	ctx.current_instruction = 0x881F92C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,738
	ctx.r10.s64 = ctx.r10.s64 + 738;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r31
	ctx.current_instruction = 0x881F92D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r7,r11,263
	ctx.r7.s64 = ctx.r11.s64 + 263;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,2924(r31)
	ctx.current_instruction = 0x881F92EC;
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r8.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// stw r8,2920(r31)
	ctx.current_instruction = 0x881F92F4;
	REX_STORE_U32(ctx.r31.u32 + 2920, ctx.r8.u32);
	// stw r8,2916(r31)
	ctx.current_instruction = 0x881F92F8;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r8.u32);
	// lwzx r10,r3,r31
	ctx.current_instruction = 0x881F92FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r10,2928(r31)
	ctx.current_instruction = 0x881F9300;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r10.u32);
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x881F9304;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r9,2932(r31)
	ctx.current_instruction = 0x881F9308;
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r9.u32);
	// lwzx r8,r6,r31
	ctx.current_instruction = 0x881F930C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r8,2936(r31)
	ctx.current_instruction = 0x881F9310;
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r8.u32);
	// lwzx r7,r5,r31
	ctx.current_instruction = 0x881F9314;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r7,2096(r31)
	ctx.current_instruction = 0x881F9318;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r7.u32);
	// lwz r6,2108(r11)
	ctx.current_instruction = 0x881F931C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 2108);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,2100(r31)
	ctx.current_instruction = 0x881F9324;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r6.u32);
	// beq cr6,0x881f9330
	if (ctx.cr6.eq) goto loc_881F9330;
	// li r11,1
	ctx.r11.s64 = 1;
loc_881F9330:
	// stw r11,460(r31)
	ctx.current_instruction = 0x881F9330;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881F9338;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x881F9340;
	sub_8815E728(ctx, base);
loc_881F9340:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x881F9340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881f9358
	if (ctx.cr6.eq) goto loc_881F9358;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x881f935c
	if (!ctx.cr6.eq) goto loc_881F935C;
loc_881F9358:
	// li r11,1
	ctx.r11.s64 = 1;
loc_881F935C:
	// lwz r10,1976(r31)
	ctx.current_instruction = 0x881F935C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	ctx.current_instruction = 0x881F9364;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881F9368;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.current_instruction = 0x881F936C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x881F9374;
	sub_881B58F8(ctx, base);
loc_881F9374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881F9378;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8819b878
	ctx.lr = 0x881F9380;
	sub_8819B878(ctx, base);
loc_881F9380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817ddf0
	ctx.lr = 0x881F9388;
	sub_8817DDF0(ctx, base);
loc_881F9388:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881810e0
	ctx.lr = 0x881F9394;
	sub_881810E0(ctx, base);
loc_881F9394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F9398;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881F93A0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F93A4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88211FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88211FC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88211FC0) {
			switch (rex_dispatch_address) {
				case 0x88211FC8:
				case 0x88212274:
				case 0x88212300:
				case 0x88212318:
				case 0x88212378:
				case 0x882123F8:
				case 0x88212440:
				case 0x882124F0:
				case 0x88212538:
				case 0x88212568:
				case 0x882125B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88211FC0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88211FC8: goto loc_88211FC8;
		case 0x88212274: goto loc_88212274;
		case 0x88212300: goto loc_88212300;
		case 0x88212318: goto loc_88212318;
		case 0x88212378: goto loc_88212378;
		case 0x882123F8: goto loc_882123F8;
		case 0x88212440: goto loc_88212440;
		case 0x882124F0: goto loc_882124F0;
		case 0x88212538: goto loc_88212538;
		case 0x88212568: goto loc_88212568;
		case 0x882125B4: goto loc_882125B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88211FC8;
	__savegprlr_14(ctx, base);
loc_88211FC8:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x88211FC8;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r16,4(r4)
	ctx.current_instruction = 0x88211FCC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r6,380(r1)
	ctx.current_instruction = 0x88211FD4;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1304(r3)
	ctx.current_instruction = 0x88211FDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rotlwi r11,r16,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r16.u32, 2);
	// lbz r26,5(r4)
	ctx.current_instruction = 0x88211FE8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88211FEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r4,364(r1)
	ctx.current_instruction = 0x88211FF4;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// clrlwi r4,r29,31
	ctx.r4.u64 = ctx.r29.u32 & 0x1;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x88211FFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r16,r11
	ctx.r3.u64 = ctx.r16.u64 + ctx.r11.u64;
	// lwzx r8,r6,r8
	ctx.current_instruction = 0x88212004;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r31,r10,0,27,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// stw r5,372(r1)
	ctx.current_instruction = 0x8821200C;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// neg r25,r4
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// stw r7,388(r1)
	ctx.current_instruction = 0x88212014;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r7,388(r30)
	ctx.current_instruction = 0x8821201C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1312(r30)
	ctx.current_instruction = 0x88212024;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r11,50(r30)
	ctx.current_instruction = 0x8821202C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 50);
	// cntlzw r23,r31
	ctx.r23.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r28,0(r27)
	ctx.current_instruction = 0x88212034;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r26,100(r1)
	ctx.current_instruction = 0x88212040;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r22,28(r30)
	ctx.current_instruction = 0x88212048;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r30.u32 + 28);
	// li r14,0
	ctx.r14.s64 = 0;
	// lwz r3,348(r30)
	ctx.current_instruction = 0x88212050;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// rlwinm r26,r23,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 27) & 0x1;
	// lwz r31,352(r30)
	ctx.current_instruction = 0x88212058;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 352);
	// and r7,r25,r11
	ctx.r7.u64 = ctx.r25.u64 & ctx.r11.u64;
	// stw r28,120(r1)
	ctx.current_instruction = 0x88212060;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mullw r4,r11,r29
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// stw r24,108(r1)
	ctx.current_instruction = 0x88212068;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// std r14,128(r1)
	ctx.current_instruction = 0x8821206C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r14.u64);
	// stw r11,124(r1)
	ctx.current_instruction = 0x88212070;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r26,80(r1)
	ctx.current_instruction = 0x88212074;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stw r7,104(r1)
	ctx.current_instruction = 0x88212078;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8821207C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,112(r1)
	ctx.current_instruction = 0x88212080;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// and r17,r8,r29
	ctx.r17.u64 = ctx.r8.u64 & ctx.r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r17,116(r1)
	ctx.current_instruction = 0x88212090;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// beq cr6,0x882120b8
	if (ctx.cr6.eq) goto loc_882120B8;
	// rlwinm r11,r10,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xC;
	// lwz r8,396(r30)
	ctx.current_instruction = 0x8821209C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 396);
	// lwz r10,400(r30)
	ctx.current_instruction = 0x882120A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 400);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,96(r1)
	ctx.current_instruction = 0x882120AC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r5,92(r1)
	ctx.current_instruction = 0x882120B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// b 0x882120c8
	goto loc_882120C8;
loc_882120B8:
	// addi r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 + 404;
	// addi r10,r30,416
	ctx.r10.s64 = ctx.r30.s64 + 416;
	// stw r11,96(r1)
	ctx.current_instruction = 0x882120C0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x882120C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_882120C8:
	// add r10,r28,r6
	ctx.r10.u64 = ctx.r28.u64 + ctx.r6.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// stw r8,4(r10)
	ctx.current_instruction = 0x882120E8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	ctx.current_instruction = 0x882120EC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r11)
	ctx.current_instruction = 0x882120F4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,0(r11)
	ctx.current_instruction = 0x882120F8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// stwx r8,r9,r31
	ctx.current_instruction = 0x88212100;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// ori r25,r10,32768
	ctx.r25.u64 = ctx.r10.u64 | 32768;
	// addi r9,r11,26488
	ctx.r9.s64 = ctx.r11.s64 + 26488;
	// stw r9,88(r1)
	ctx.current_instruction = 0x8821210C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_88212110:
	// srawi. r11,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,119
	ctx.r26.s64 = 119;
	// bne 0x8821218c
	if (!ctx.cr0.eq) goto loc_8821218C;
	// addi r8,r14,18
	ctx.r8.s64 = ctx.r14.s64 + 18;
	// lwz r6,348(r30)
	ctx.current_instruction = 0x88212120;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// rlwinm r3,r29,1,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x2;
	// lwz r5,432(r30)
	ctx.current_instruction = 0x88212128;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 432);
	// srawi r11,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 1;
	// lwz r9,1224(r30)
	ctx.current_instruction = 0x88212130;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1224);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,92(r1)
	ctx.current_instruction = 0x88212138;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + ctx.r15.u64;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// add r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 + ctx.r15.u64;
	// lhzx r10,r8,r30
	ctx.current_instruction = 0x8821214C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r7,r14,31
	ctx.r7.u64 = ctx.r14.u32 & 0x1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r4,r30
	ctx.current_instruction = 0x8821216C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r15,r7,r15
	ctx.r15.u64 = ctx.r7.u64 + ctx.r15.u64;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r18,r8,r6
	ctx.r18.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r29,r5,r10
	ctx.r29.u64 = ctx.r5.u64 + ctx.r10.u64;
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// b 0x882121d8
	goto loc_882121D8;
loc_8821218C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// lwz r8,352(r30)
	ctx.current_instruction = 0x88212190;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 352);
	// addi r6,r14,105
	ctx.r6.s64 = ctx.r14.s64 + 105;
	// lwz r9,1228(r30)
	ctx.current_instruction = 0x88212198;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1228);
	// addi r5,r11,182
	ctx.r5.s64 = ctx.r11.s64 + 182;
	// lwz r21,96(r1)
	ctx.current_instruction = 0x882121A0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + ctx.r15.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r30
	ctx.current_instruction = 0x882121C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r6,r3,r30
	ctx.current_instruction = 0x882121C8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// add r18,r11,r8
	ctx.r18.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r19,r6
	ctx.r19.s64 = ctx.r6.s16;
loc_882121D8:
	// lwz r11,28(r27)
	ctx.current_instruction = 0x882121D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r23,16(r24)
	ctx.current_instruction = 0x882121DC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// addi r20,r11,-128
	ctx.r20.s64 = ctx.r11.s64 + -128;
	// stw r20,28(r27)
	ctx.current_instruction = 0x882121E4;
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r20.u32);
	// dcbzl r0,r20
	ea = (ctx.r20.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r31,0(r30)
	ctx.current_instruction = 0x882121F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8821220c
	if (!ctx.cr6.eq) goto loc_8821220C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88212204;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88212330
	goto loc_88212330;
loc_8821220C:
	// lbz r4,8(r9)
	ctx.current_instruction = 0x8821220C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// lwz r27,0(r9)
	ctx.current_instruction = 0x88212210;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.current_instruction = 0x88212218;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.current_instruction = 0x88212228;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x882122f8
	if (ctx.cr6.lt) goto loc_882122F8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88212238;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88212248;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88212250;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x882122f0
	if (!ctx.cr6.lt) goto loc_882122F0;
loc_88212258:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88212258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8821225C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88212284
	if (ctx.cr6.lt) goto loc_88212284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88212274;
	sub_88156440(ctx, base);
loc_88212274:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88212258
	if (ctx.cr6.eq) goto loc_88212258;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x88212330
	goto loc_88212330;
loc_88212284:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88212284;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x8821228C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88212294;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88212298;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x882122A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x882122A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882122AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x882122B0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x882122B8;
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
	ctx.current_instruction = 0x882122D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x882122EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_882122F0:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x88212330
	goto loc_88212330;
loc_882122F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88212300;
	sub_88156500(ctx, base);
loc_88212300:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88212300;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x88212318;
	sub_88156500(ctx, base);
loc_88212318:
	// add r10,r28,r25
	ctx.r10.u64 = ctx.r28.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.current_instruction = 0x88212320;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x88212300
	if (ctx.cr6.lt) goto loc_88212300;
loc_88212330:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x88212458
	if (ctx.cr6.eq) goto loc_88212458;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8821257c
	if (ctx.cr6.eq) goto loc_8821257C;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bne cr6,0x88212390
	if (!ctx.cr6.eq) goto loc_88212390;
	// ld r10,0(r31)
	ctx.current_instruction = 0x88212350;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x88212354;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x88212364;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x88212368;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x88212378
	if (!ctx.cr0.lt) goto loc_88212378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88212378;
	sub_88156678(ctx, base);
loc_88212378:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x88212540
	goto loc_88212540;
loc_88212390:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x88212540
	if (!ctx.cr6.eq) goto loc_88212540;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88212398;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88212408
	if (!ctx.cr6.lt) goto loc_88212408;
loc_882123B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88212408
	if (ctx.cr6.eq) goto loc_88212408;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882123BC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r3,8(r31)
	ctx.current_instruction = 0x882123E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882123E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882123f8
	if (!ctx.cr0.lt) goto loc_882123F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882123F8;
	sub_88156678(ctx, base);
loc_882123F8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882123F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882123b0
	if (ctx.cr6.gt) goto loc_882123B0;
loc_88212408:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8821240C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r6,8(r31)
	ctx.current_instruction = 0x88212424;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88212430;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88212440
	if (!ctx.cr0.lt) goto loc_88212440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88212440;
	sub_88156678(ctx, base);
loc_88212440:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x88212540
	goto loc_88212540;
loc_88212458:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bgt cr6,0x8821246c
	if (ctx.cr6.gt) goto loc_8821246C;
	// srawi r11,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x88212470
	goto loc_88212470;
loc_8821246C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88212470:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88212470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x88212490
	if (!ctx.cr6.gt) goto loc_88212490;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8821253c
	goto loc_8821253C;
loc_88212490:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x882124a0
	if (!ctx.cr6.eq) goto loc_882124A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8821253c
	goto loc_8821253C;
loc_882124A0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88212500
	if (!ctx.cr6.gt) goto loc_88212500;
loc_882124A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88212500
	if (ctx.cr6.eq) goto loc_88212500;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882124B4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r3,8(r31)
	ctx.current_instruction = 0x882124D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882124E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882124f0
	if (!ctx.cr0.lt) goto loc_882124F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882124F0;
	sub_88156678(ctx, base);
loc_882124F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882124F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882124a8
	if (ctx.cr6.gt) goto loc_882124A8;
loc_88212500:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88212504;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r6,8(r31)
	ctx.current_instruction = 0x8821251C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88212528;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88212538
	if (!ctx.cr0.lt) goto loc_88212538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88212538;
	sub_88156678(ctx, base);
loc_88212538:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8821253C:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_88212540:
	// ld r10,0(r31)
	ctx.current_instruction = 0x88212540;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x88212544;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	ctx.current_instruction = 0x88212550;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88212558;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x88212568
	if (!ctx.cr0.lt) goto loc_88212568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88212568;
	sub_88156678(ctx, base);
loc_88212568:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r24,r8
	ctx.r24.s64 = ctx.r8.s16;
loc_8821257C:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8821257C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// sth r24,0(r20)
	ctx.current_instruction = 0x88212580;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r24.u16);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88212584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88212e80
	if (!ctx.cr6.eq) goto loc_88212E80;
	// lwz r24,100(r1)
	ctx.current_instruction = 0x88212590;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x882125bc
	if (ctx.cr6.eq) goto loc_882125BC;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,0(r21)
	ctx.current_instruction = 0x882125A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,444(r30)
	ctx.current_instruction = 0x882125AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x882153a8
	ctx.lr = 0x882125B4;
	sub_882153A8(ctx, base);
loc_882125B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88212e80
	if (ctx.cr6.lt) goto loc_88212E80;
loc_882125BC:
	// srawi r11,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 2;
	// lhz r31,50(r30)
	ctx.current_instruction = 0x882125C0;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + 50);
	// li r26,1
	ctx.r26.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x88212608
	if (ctx.cr6.eq) goto loc_88212608;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.current_instruction = 0x882125EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,16384
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16384, ctx.xer);
	// bne cr6,0x88212608
	if (!ctx.cr6.eq) goto loc_88212608;
	// rlwinm r10,r19,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 5) & 0xFFFFFFE0;
	// li r26,8
	ctx.r26.s64 = 8;
	// subf r28,r10,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r10.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_88212608:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x88212864
	if (ctx.cr6.eq) goto loc_88212864;
	// lwz r9,-4(r18)
	ctx.current_instruction = 0x88212610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + -4);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x88212864
	if (!ctx.cr6.eq) goto loc_88212864;
	// addic. r27,r29,-32
	ctx.xer.ca = ctx.r29.u32 > 31;
	ctx.r27.s64 = ctx.r29.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq 0x88212bb4
	if (ctx.cr0.eq) goto loc_88212BB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88212864
	if (ctx.cr6.eq) goto loc_88212864;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r9.u64;
	// lwz r6,0(r8)
	ctx.current_instruction = 0x88212644;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// bne cr6,0x88212658
	if (!ctx.cr6.eq) goto loc_88212658;
	// lhz r11,-16(r28)
	ctx.current_instruction = 0x88212650;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + -16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
loc_88212658:
	// lhz r11,16(r28)
	ctx.current_instruction = 0x88212658;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// lhz r9,0(r27)
	ctx.current_instruction = 0x8821265C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lbz r8,27(r30)
	ctx.current_instruction = 0x88212660;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 27);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88212828
	if (ctx.cr6.eq) goto loc_88212828;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x88212770
	if (ctx.cr6.eq) goto loc_88212770;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x88212770
	if (ctx.cr6.eq) goto loc_88212770;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x88212770
	if (ctx.cr6.eq) goto loc_88212770;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x8821268C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x88212704
	if (!ctx.cr6.eq) goto loc_88212704;
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lwz r11,388(r30)
	ctx.current_instruction = 0x8821269C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x882126A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r3)
	ctx.current_instruction = 0x882126B4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.current_instruction = 0x882126C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r3,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r8,r4
	ctx.current_instruction = 0x882126D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r9,16(r3)
	ctx.current_instruction = 0x882126DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r9,r3,r22
	ctx.r9.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// srawi r7,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 18;
	// srawi r6,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 18;
	// b 0x88212830
	goto loc_88212830;
loc_88212704:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x8821282c
	if (!ctx.cr6.eq) goto loc_8821282C;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,-8(r25)
	ctx.current_instruction = 0x88212710;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + -8);
	// lwz r11,388(r30)
	ctx.current_instruction = 0x88212714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// add r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r4,26
	ctx.r9.u64 = ctx.r4.u32 & 0x3F;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88212730;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,16(r3)
	ctx.current_instruction = 0x88212734;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r3,r4
	ctx.current_instruction = 0x88212744;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r8,16(r11)
	ctx.current_instruction = 0x88212748;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r5,r8,r22
	ctx.r5.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + ctx.r22.u64;
	// srawi r7,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
	// b 0x88212830
	goto loc_88212830;
loc_88212770:
	// lwz r25,84(r1)
	ctx.current_instruction = 0x88212770;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.current_instruction = 0x8821277C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// subf r4,r8,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r3,r16,r9
	ctx.r3.u64 = ctx.r16.u64 + ctx.r9.u64;
	// lbz r9,-8(r25)
	ctx.current_instruction = 0x88212788;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + -8);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbz r3,-8(r4)
	ctx.current_instruction = 0x88212794;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + -8);
	// lbz r23,0(r4)
	ctx.current_instruction = 0x88212798;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r21,r8,r11
	ctx.r21.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r23,26
	ctx.r8.u64 = ctx.r23.u32 & 0x3F;
	// add r23,r9,r4
	ctx.r23.u64 = ctx.r9.u64 + ctx.r4.u64;
	// clrlwi r9,r3,26
	ctx.r9.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,16(r21)
	ctx.current_instruction = 0x882127B4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x882127D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r23,r21,2,24,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,16(r3)
	ctx.current_instruction = 0x882127E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r9)
	ctx.current_instruction = 0x882127E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r23,r4
	ctx.current_instruction = 0x882127F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r4.u32);
	// lwz r3,16(r8)
	ctx.current_instruction = 0x882127F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + ctx.r22.u64;
	// add r11,r6,r22
	ctx.r11.u64 = ctx.r6.u64 + ctx.r22.u64;
	// add r9,r5,r22
	ctx.r9.u64 = ctx.r5.u64 + ctx.r22.u64;
	// srawi r7,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 18;
	// srawi r6,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 18;
	// srawi r5,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 18;
	// b 0x88212830
	goto loc_88212830;
loc_88212828:
	// lwz r25,84(r1)
	ctx.current_instruction = 0x88212828;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8821282C:
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8821282C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88212830:
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
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
	// subf r3,r8,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8821286c
	if (!ctx.cr6.lt) goto loc_8821286C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x8821286c
	goto loc_8821286C;
loc_88212864:
	// lwz r25,84(r1)
	ctx.current_instruction = 0x88212864;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88212868;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8821286C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88212bb4
	if (ctx.cr6.eq) goto loc_88212BB4;
	// lbz r8,80(r1)
	ctx.current_instruction = 0x88212874;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,27(r30)
	ctx.current_instruction = 0x88212878;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 27);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 | ctx.r26.u64;
	// beq cr6,0x88212ba8
	if (ctx.cr6.eq) goto loc_88212BA8;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x88212a18
	if (!ctx.cr6.eq) goto loc_88212A18;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x882128dc
	if (ctx.cr6.eq) goto loc_882128DC;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x882128dc
	if (ctx.cr6.eq) goto loc_882128DC;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x882128dc
	if (ctx.cr6.eq) goto loc_882128DC;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x882128dc
	if (ctx.cr6.eq) goto loc_882128DC;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_882128C8:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x882128C8;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x882128CC;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x882128c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882128C8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x88212bb4
	goto loc_88212BB4;
loc_882128DC:
	// lbz r9,-8(r25)
	ctx.current_instruction = 0x882128DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + -8);
	// rlwinm r8,r16,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.current_instruction = 0x882128E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// rlwinm r6,r16,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFC;
	// add r5,r16,r8
	ctx.r5.u64 = ctx.r16.u64 + ctx.r8.u64;
	// lhz r3,0(r10)
	ctx.current_instruction = 0x882128F0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r7,16(r7)
	ctx.current_instruction = 0x88212914;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r6,r4
	ctx.current_instruction = 0x8821291C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r6,r7,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// addi r28,r1,146
	ctx.r28.s64 = ctx.r1.s64 + 146;
	// addi r7,r1,138
	ctx.r7.s64 = ctx.r1.s64 + 138;
	// lwz r31,16(r31)
	ctx.current_instruction = 0x88212930;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r1,148
	ctx.r27.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwzx r4,r6,r4
	ctx.current_instruction = 0x88212940;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r4,r3
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r4,r6,r22
	ctx.r4.u64 = ctx.r6.u64 + ctx.r22.u64;
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// subf r5,r10,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r10.u64;
	// sth r3,144(r1)
	ctx.current_instruction = 0x8821295C;
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
loc_88212964:
	// lhz r4,-4(r11)
	ctx.current_instruction = 0x88212964;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.current_instruction = 0x88212968;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.current_instruction = 0x8821296C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	ctx.current_instruction = 0x88212974;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	ctx.current_instruction = 0x8821297C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mullw r27,r8,r27
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	ctx.current_instruction = 0x882129CC;
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// sthx r31,r6,r11
	ctx.current_instruction = 0x882129EC;
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r5,r11
	ctx.current_instruction = 0x882129F4;
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r28.u16);
	// sthx r4,r10,r11
	ctx.current_instruction = 0x882129F8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ctx.current_instruction = 0x88212A00;
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x88212964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88212964;
	// lhz r11,144(r1)
	ctx.current_instruction = 0x88212A08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	ctx.current_instruction = 0x88212A10;
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x88212bb4
	goto loc_88212BB4;
loc_88212A18:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x88212a60
	if (ctx.cr6.eq) goto loc_88212A60;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x88212a60
	if (ctx.cr6.eq) goto loc_88212A60;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x88212a60
	if (ctx.cr6.eq) goto loc_88212A60;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x88212a60
	if (ctx.cr6.eq) goto loc_88212A60;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88212A4C:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88212A4C;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88212A50;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88212a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88212A4C;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x88212bb4
	goto loc_88212BB4;
loc_88212A60:
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x88212A64;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.current_instruction = 0x88212A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// subf r6,r8,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r5,r16,r9
	ctx.r5.u64 = ctx.r16.u64 + ctx.r9.u64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r8,0(r6)
	ctx.current_instruction = 0x88212A84;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r16,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFC;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r7,16(r5)
	ctx.current_instruction = 0x88212AA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r4
	ctx.current_instruction = 0x88212AAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,146
	ctx.r31.s64 = ctx.r1.s64 + 146;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r27,r1,148
	ctx.r27.s64 = ctx.r1.s64 + 148;
	// lwzx r4,r7,r4
	ctx.current_instruction = 0x88212AC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r7,r6,-10
	ctx.r7.s64 = ctx.r6.s64 + -10;
	// subf r6,r10,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r10.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwz r28,16(r5)
	ctx.current_instruction = 0x88212AD4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r10,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// mullw r3,r28,r3
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r22
	ctx.r3.u64 = ctx.r4.u64 + ctx.r22.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,144(r1)
	ctx.current_instruction = 0x88212AF0;
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
loc_88212AF4:
	// lhz r4,-4(r11)
	ctx.current_instruction = 0x88212AF4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.current_instruction = 0x88212AF8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.current_instruction = 0x88212AFC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	ctx.current_instruction = 0x88212B04;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	ctx.current_instruction = 0x88212B0C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mullw r27,r8,r27
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	ctx.current_instruction = 0x88212B5C;
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// sthx r31,r11,r6
	ctx.current_instruction = 0x88212B7C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r11,r5
	ctx.current_instruction = 0x88212B84;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u16);
	// sthx r4,r11,r10
	ctx.current_instruction = 0x88212B88;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ctx.current_instruction = 0x88212B90;
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x88212af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88212AF4;
	// lhz r11,144(r1)
	ctx.current_instruction = 0x88212B98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	ctx.current_instruction = 0x88212BA0;
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x88212bb4
	goto loc_88212BB4;
loc_88212BA8:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x88212bb4
	if (!ctx.cr6.eq) goto loc_88212BB4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_88212BB4:
	// lwz r6,388(r1)
	ctx.current_instruction = 0x88212BB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,28(r6)
	ctx.current_instruction = 0x88212BBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// beq cr6,0x88212d98
	if (ctx.cr6.eq) goto loc_88212D98;
	// lhz r9,0(r11)
	ctx.current_instruction = 0x88212BC4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lhz r8,0(r10)
	ctx.current_instruction = 0x88212BCC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,0(r11)
	ctx.current_instruction = 0x88212BD8;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,0(r29)
	ctx.current_instruction = 0x88212BDC;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r5.u16);
	// sth r5,16(r29)
	ctx.current_instruction = 0x88212BE0;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r5.u16);
	// bne cr6,0x88212ccc
	if (!ctx.cr6.eq) goto loc_88212CCC;
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88212BE8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x88212BEC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,2(r11)
	ctx.current_instruction = 0x88212BF8;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r5,2(r29)
	ctx.current_instruction = 0x88212BFC;
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r5.u16);
	// lhz r9,4(r10)
	ctx.current_instruction = 0x88212C00;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,4(r11)
	ctx.current_instruction = 0x88212C04;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,4(r11)
	ctx.current_instruction = 0x88212C10;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,4(r29)
	ctx.current_instruction = 0x88212C14;
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r8.u16);
	// lhz r9,6(r10)
	ctx.current_instruction = 0x88212C18;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,6(r11)
	ctx.current_instruction = 0x88212C1C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,6(r11)
	ctx.current_instruction = 0x88212C28;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// sth r3,6(r29)
	ctx.current_instruction = 0x88212C2C;
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r3.u16);
	// lhz r9,8(r10)
	ctx.current_instruction = 0x88212C30;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,8(r11)
	ctx.current_instruction = 0x88212C34;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,8(r11)
	ctx.current_instruction = 0x88212C40;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// sth r4,8(r29)
	ctx.current_instruction = 0x88212C44;
	REX_STORE_U16(ctx.r29.u32 + 8, ctx.r4.u16);
	// lhz r9,10(r10)
	ctx.current_instruction = 0x88212C48;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,10(r11)
	ctx.current_instruction = 0x88212C4C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,10(r11)
	ctx.current_instruction = 0x88212C58;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// sth r7,10(r29)
	ctx.current_instruction = 0x88212C5C;
	REX_STORE_U16(ctx.r29.u32 + 10, ctx.r7.u16);
	// lhz r9,12(r10)
	ctx.current_instruction = 0x88212C60;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r8,12(r11)
	ctx.current_instruction = 0x88212C64;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,12(r11)
	ctx.current_instruction = 0x88212C70;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// sth r9,12(r29)
	ctx.current_instruction = 0x88212C74;
	REX_STORE_U16(ctx.r29.u32 + 12, ctx.r9.u16);
	// lhz r9,14(r11)
	ctx.current_instruction = 0x88212C78;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,14(r10)
	ctx.current_instruction = 0x88212C7C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,14(r11)
	ctx.current_instruction = 0x88212C88;
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// sth r4,14(r29)
	ctx.current_instruction = 0x88212C8C;
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.current_instruction = 0x88212C90;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r3,18(r29)
	ctx.current_instruction = 0x88212C94;
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r3.u16);
	// lhz r10,32(r11)
	ctx.current_instruction = 0x88212C98;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r10,20(r29)
	ctx.current_instruction = 0x88212C9C;
	REX_STORE_U16(ctx.r29.u32 + 20, ctx.r10.u16);
	// lhz r9,48(r11)
	ctx.current_instruction = 0x88212CA0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r9,22(r29)
	ctx.current_instruction = 0x88212CA4;
	REX_STORE_U16(ctx.r29.u32 + 22, ctx.r9.u16);
	// lhz r8,64(r11)
	ctx.current_instruction = 0x88212CA8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r8,24(r29)
	ctx.current_instruction = 0x88212CAC;
	REX_STORE_U16(ctx.r29.u32 + 24, ctx.r8.u16);
	// lhz r7,80(r11)
	ctx.current_instruction = 0x88212CB0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r7,26(r29)
	ctx.current_instruction = 0x88212CB4;
	REX_STORE_U16(ctx.r29.u32 + 26, ctx.r7.u16);
	// lhz r5,96(r11)
	ctx.current_instruction = 0x88212CB8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r5,28(r29)
	ctx.current_instruction = 0x88212CBC;
	REX_STORE_U16(ctx.r29.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r11)
	ctx.current_instruction = 0x88212CC0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r4,30(r29)
	ctx.current_instruction = 0x88212CC4;
	REX_STORE_U16(ctx.r29.u32 + 30, ctx.r4.u16);
	// b 0x88212df4
	goto loc_88212DF4;
loc_88212CCC:
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x88212da4
	if (!ctx.cr6.eq) goto loc_88212DA4;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x88212CD4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r9,2(r29)
	ctx.current_instruction = 0x88212CD8;
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x88212CDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r29)
	ctx.current_instruction = 0x88212CE0;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// ld r7,8(r11)
	ctx.current_instruction = 0x88212CE4;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r29)
	ctx.current_instruction = 0x88212CE8;
	REX_STORE_U64(ctx.r29.u32 + 8, ctx.r7.u64);
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88212CEC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,16(r11)
	ctx.current_instruction = 0x88212CF0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,16(r11)
	ctx.current_instruction = 0x88212CFC;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// sth r9,18(r29)
	ctx.current_instruction = 0x88212D00;
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r9.u16);
	// lhz r8,32(r11)
	ctx.current_instruction = 0x88212D04;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r9,4(r10)
	ctx.current_instruction = 0x88212D08;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,32(r11)
	ctx.current_instruction = 0x88212D14;
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r4.u16);
	// sth r4,20(r29)
	ctx.current_instruction = 0x88212D18;
	REX_STORE_U16(ctx.r29.u32 + 20, ctx.r4.u16);
	// lhz r9,6(r10)
	ctx.current_instruction = 0x88212D1C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,48(r11)
	ctx.current_instruction = 0x88212D20;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,48(r11)
	ctx.current_instruction = 0x88212D2C;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r7.u16);
	// sth r7,22(r29)
	ctx.current_instruction = 0x88212D30;
	REX_STORE_U16(ctx.r29.u32 + 22, ctx.r7.u16);
	// lhz r9,8(r10)
	ctx.current_instruction = 0x88212D34;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,64(r11)
	ctx.current_instruction = 0x88212D38;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,64(r11)
	ctx.current_instruction = 0x88212D44;
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r9.u16);
	// sth r9,24(r29)
	ctx.current_instruction = 0x88212D48;
	REX_STORE_U16(ctx.r29.u32 + 24, ctx.r9.u16);
	// lhz r9,10(r10)
	ctx.current_instruction = 0x88212D4C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,80(r11)
	ctx.current_instruction = 0x88212D50;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,80(r11)
	ctx.current_instruction = 0x88212D5C;
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r4.u16);
	// sth r4,26(r29)
	ctx.current_instruction = 0x88212D60;
	REX_STORE_U16(ctx.r29.u32 + 26, ctx.r4.u16);
	// lhz r8,96(r11)
	ctx.current_instruction = 0x88212D64;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// lhz r9,12(r10)
	ctx.current_instruction = 0x88212D68;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,96(r11)
	ctx.current_instruction = 0x88212D74;
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r7.u16);
	// sth r7,28(r29)
	ctx.current_instruction = 0x88212D78;
	REX_STORE_U16(ctx.r29.u32 + 28, ctx.r7.u16);
	// lhz r9,112(r11)
	ctx.current_instruction = 0x88212D7C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// lhz r10,14(r10)
	ctx.current_instruction = 0x88212D80;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r10,112(r11)
	ctx.current_instruction = 0x88212D8C;
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r10,30(r29)
	ctx.current_instruction = 0x88212D90;
	REX_STORE_U16(ctx.r29.u32 + 30, ctx.r10.u16);
	// b 0x88212df4
	goto loc_88212DF4;
loc_88212D98:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88212D98;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	ctx.current_instruction = 0x88212D9C;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// sth r10,16(r29)
	ctx.current_instruction = 0x88212DA0;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
loc_88212DA4:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x88212DA4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,2(r29)
	ctx.current_instruction = 0x88212DA8;
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88212DAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r29)
	ctx.current_instruction = 0x88212DB0;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// ld r8,8(r11)
	ctx.current_instruction = 0x88212DB4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r29)
	ctx.current_instruction = 0x88212DB8;
	REX_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// lhz r7,16(r11)
	ctx.current_instruction = 0x88212DBC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r7,18(r29)
	ctx.current_instruction = 0x88212DC0;
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r7.u16);
	// lhz r5,32(r11)
	ctx.current_instruction = 0x88212DC4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r5,20(r29)
	ctx.current_instruction = 0x88212DC8;
	REX_STORE_U16(ctx.r29.u32 + 20, ctx.r5.u16);
	// lhz r4,48(r11)
	ctx.current_instruction = 0x88212DCC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r4,22(r29)
	ctx.current_instruction = 0x88212DD0;
	REX_STORE_U16(ctx.r29.u32 + 22, ctx.r4.u16);
	// lhz r3,64(r11)
	ctx.current_instruction = 0x88212DD4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r3,24(r29)
	ctx.current_instruction = 0x88212DD8;
	REX_STORE_U16(ctx.r29.u32 + 24, ctx.r3.u16);
	// lhz r10,80(r11)
	ctx.current_instruction = 0x88212DDC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r10,26(r29)
	ctx.current_instruction = 0x88212DE0;
	REX_STORE_U16(ctx.r29.u32 + 26, ctx.r10.u16);
	// lhz r9,96(r11)
	ctx.current_instruction = 0x88212DE4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r9,28(r29)
	ctx.current_instruction = 0x88212DE8;
	REX_STORE_U16(ctx.r29.u32 + 28, ctx.r9.u16);
	// lhz r8,112(r11)
	ctx.current_instruction = 0x88212DEC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r8,30(r29)
	ctx.current_instruction = 0x88212DF0;
	REX_STORE_U16(ctx.r29.u32 + 30, ctx.r8.u16);
loc_88212DF4:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// lwz r5,372(r1)
	ctx.current_instruction = 0x88212DF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// ld r3,128(r1)
	ctx.current_instruction = 0x88212E00;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,380(r1)
	ctx.current_instruction = 0x88212E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// stw r8,100(r1)
	ctx.current_instruction = 0x88212E10;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// or r11,r7,r14
	ctx.r11.u64 = ctx.r7.u64 | ctx.r14.u64;
	// lwz r9,32(r6)
	ctx.current_instruction = 0x88212E18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// ori r8,r4,128
	ctx.r8.u64 = ctx.r4.u64 | 128;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rldicr r7,r4,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// std r7,128(r1)
	ctx.current_instruction = 0x88212E3C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// stw r10,0(r9)
	ctx.current_instruction = 0x88212E44;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,32(r6)
	ctx.current_instruction = 0x88212E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,32(r6)
	ctx.current_instruction = 0x88212E50;
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// bge cr6,0x88212e8c
	if (!ctx.cr6.lt) goto loc_88212E8C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r7,104(r1)
	ctx.current_instruction = 0x88212E5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r24,108(r1)
	ctx.current_instruction = 0x88212E60;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r15,372(r1)
	ctx.current_instruction = 0x88212E64;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// ori r25,r11,32768
	ctx.r25.u64 = ctx.r11.u64 | 32768;
	// lwz r29,380(r1)
	ctx.current_instruction = 0x88212E6C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r27,388(r1)
	ctx.current_instruction = 0x88212E70;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,112(r1)
	ctx.current_instruction = 0x88212E74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r17,116(r1)
	ctx.current_instruction = 0x88212E78;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x88212110
	goto loc_88212110;
loc_88212E80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88212E8C:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x88212E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rldicl r29,r7,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r4,4(r6)
	ctx.current_instruction = 0x88212E94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// li r31,16384
	ctx.r31.s64 = 16384;
	// lbz r7,1324(r30)
	ctx.current_instruction = 0x88212E9C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 1324);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,120(r1)
	ctx.current_instruction = 0x88212EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.current_instruction = 0x88212EA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88212EAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,4(r11)
	ctx.current_instruction = 0x88212EB4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r9,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x7;
	// lbz r28,5(r11)
	ctx.current_instruction = 0x88212EBC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r26,r5,8,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1708(r30)
	ctx.current_instruction = 0x88212EC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1708);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r11,1716(r30)
	ctx.current_instruction = 0x88212ECC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1716);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,1312(r30)
	ctx.current_instruction = 0x88212ED4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r25,r7,6,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// or r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 | ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 | ctx.r28.u64;
	// rldicr r28,r28,48,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 48) & 0xFFFF000000000000;
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// stdx r29,r30,r27
	ctx.current_instruction = 0x88212F18;
	REX_STORE_U64(ctx.r30.u32 + ctx.r27.u32, ctx.r29.u64);
	// sth r31,2(r6)
	ctx.current_instruction = 0x88212F1C;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r31.u16);
	// sthx r31,r9,r8
	ctx.current_instruction = 0x88212F20;
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
	// sth r31,2(r5)
	ctx.current_instruction = 0x88212F24;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r31.u16);
	// sthx r31,r10,r9
	ctx.current_instruction = 0x88212F28;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u16);
	// sth r31,2(r7)
	ctx.current_instruction = 0x88212F2C;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r31.u16);
	// sthx r31,r11,r8
	ctx.current_instruction = 0x88212F30;
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u16);
	// sth r31,2(r4)
	ctx.current_instruction = 0x88212F34;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r31.u16);
	// sthx r31,r11,r10
	ctx.current_instruction = 0x88212F38;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u16);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88226510) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88226510;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88226510) {
			switch (rex_dispatch_address) {
				case 0x88226518:
				case 0x88226564:
				case 0x88226588:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88226510;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88226518: goto loc_88226518;
		case 0x88226564: goto loc_88226564;
		case 0x88226588: goto loc_88226588;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88226518;
	__savegprlr_28(ctx, base);
loc_88226518:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x88226518;
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.current_instruction = 0x8822651C;
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
	ctx.current_instruction = 0x88226558;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8821b4b8
	ctx.lr = 0x88226564;
	sub_8821B4B8(ctx, base);
loc_88226564:
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
	// bl 0x88222df8
	ctx.lr = 0x88226588;
	sub_88222DF8(ctx, base);
loc_88226588:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88226E88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88226E88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88226E88) {
			switch (rex_dispatch_address) {
				case 0x88226E90:
				case 0x88226EDC:
				case 0x88226F00:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88226E88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88226E90: goto loc_88226E90;
		case 0x88226EDC: goto loc_88226EDC;
		case 0x88226F00: goto loc_88226F00;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88226E90;
	__savegprlr_28(ctx, base);
loc_88226E90:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x88226E90;
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.current_instruction = 0x88226E94;
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
	ctx.current_instruction = 0x88226ED0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8821b4b8
	ctx.lr = 0x88226EDC;
	sub_8821B4B8(ctx, base);
loc_88226EDC:
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
	// bl 0x88223088
	ctx.lr = 0x88226F00;
	sub_88223088(ctx, base);
loc_88226F00:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227450) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88227450;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88227450) {
			switch (rex_dispatch_address) {
				case 0x88227458:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88227450;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88227458: goto loc_88227458;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88227458;
	__savegprlr_26(ctx, base);
loc_88227458:
	// lwz r11,1140(r7)
	ctx.current_instruction = 0x88227458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1140);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x88227460;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x88227468;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x88227470;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v12,5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x5)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x88227480;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x88227488;
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	ctx.r27.s64 = -32;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lvx128 v10,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	ctx.r28.s64 = -16;
	// lvx128 v9,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v31,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v26,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x8822761c
	if (!ctx.cr6.eq) goto loc_8822761C;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
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
	// ble cr6,0x882277f4
	if (!ctx.cr6.gt) goto loc_882277F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88227540:
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
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vsrah v17,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88227540
	if (ctx.cr6.lt) goto loc_88227540;
	// b 0x882277f4
	goto loc_882277F4;
loc_8822761C:
	// li r30,32
	ctx.r30.s64 = 32;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
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
	// ble cr6,0x882277f4
	if (!ctx.cr6.gt) goto loc_882277F4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_882276A0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
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
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
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
	// vslh v22,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vslh v18,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v25,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v14,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vsrah v28,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// stvx128 v28,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x882276a0
	if (ctx.cr6.lt) goto loc_882276A0;
loc_882277F4:
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
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x882278a4
	if (!ctx.cr6.eq) goto loc_882278A4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822798c
	if (!ctx.cr6.gt) goto loc_8822798C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88227828:
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v9,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v8,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vpkshus128 v39,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx128 v39,r0,r11
	ctx.current_instruction = 0x88227890;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ctx.current_instruction = 0x88227894;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88227828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88227828;
	// b 0x8822798c
	goto loc_8822798C;
loc_882278A4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822798c
	if (!ctx.cr6.gt) goto loc_8822798C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_882278BC:
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
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v25,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v23,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x882278bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882278BC;
loc_8822798C:
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
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

