#include "forzahorizon2_funcs.34.h"

DEFINE_REX_FUNC(sub_88050328) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050328);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050328;
	ctx.current_instruction = 0x88050328;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,200(r11)
	ctx.current_instruction = 0x88050330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_25) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805088C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x8805088C;
	ctx.current_instruction = 0x8805088C;
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

DEFINE_REX_FUNC(sub_88051190) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88051190;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88051190) {
			switch (rex_dispatch_address) {
				case 0x880511B0:
				case 0x880511C0:
				case 0x880511D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051190;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880511B0: goto loc_880511B0;
		case 0x880511C0: goto loc_880511C0;
		case 0x880511D4: goto loc_880511D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88051194;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88051198;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805119C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x880511A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x88052678
	ctx.lr = 0x880511B0;
	sub_88052678(ctx, base);
loc_880511B0:
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x880511c8
	if (ctx.cr6.eq) goto loc_880511C8;
loc_880511B8:
	// lbzu r3,1(r31)
	ctx.current_instruction = 0x880511B8;
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x88052658
	ctx.lr = 0x880511C0;
	sub_88052658(ctx, base);
loc_880511C0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x880511b8
	if (!ctx.cr0.eq) goto loc_880511B8;
loc_880511C8:
	// lbz r11,0(r31)
	ctx.current_instruction = 0x880511C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x88052678
	ctx.lr = 0x880511D4;
	sub_88052678(ctx, base);
loc_880511D4:
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x880511e0
	if (!ctx.cr6.eq) goto loc_880511E0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_880511E0:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lbz r10,0(r31)
	ctx.current_instruction = 0x880511E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,1032(r11)
	ctx.current_instruction = 0x880511E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1032);
	// lwz r9,188(r11)
	ctx.current_instruction = 0x880511EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,0(r9)
	ctx.current_instruction = 0x880511F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.current_instruction = 0x880511F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	ctx.current_instruction = 0x880511FC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_88051200:
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88051200;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x88051204;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x88051208;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x88051200
	if (!ctx.cr0.eq) goto loc_88051200;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805121C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88051224;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88056E90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88056E90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88056E90) {
			switch (rex_dispatch_address) {
				case 0x88056EA8:
				case 0x88056F48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88056E90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88056EA8: goto loc_88056EA8;
		case 0x88056F48: goto loc_88056F48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88056E94;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88056E98;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88056E9C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062210
	ctx.lr = 0x88056EA8;
	sub_88062210(ctx, base);
loc_88056EA8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,6716(r10)
	ctx.current_instruction = 0x88056EBC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,56(r31)
	ctx.current_instruction = 0x88056EC0;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f13,6712(r9)
	ctx.current_instruction = 0x88056EC4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6712);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x88056EC8;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f12,6708(r8)
	ctx.current_instruction = 0x88056ECC;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88056ED0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,132(r31)
	ctx.current_instruction = 0x88056ED4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x88056ED8;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stfs f13,136(r31)
	ctx.current_instruction = 0x88056EDC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r11,72(r31)
	ctx.current_instruction = 0x88056EE0;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f12,140(r31)
	ctx.current_instruction = 0x88056EE4;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r11,76(r31)
	ctx.current_instruction = 0x88056EE8;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r7,112(r31)
	ctx.current_instruction = 0x88056EEC;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// li r5,120
	ctx.r5.s64 = 120;
	// stw r11,116(r31)
	ctx.current_instruction = 0x88056EF4;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r31)
	ctx.current_instruction = 0x88056EFC;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r11,124(r31)
	ctx.current_instruction = 0x88056F04;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	ctx.current_instruction = 0x88056F08;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,264(r31)
	ctx.current_instruction = 0x88056F0C;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	ctx.current_instruction = 0x88056F10;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	ctx.current_instruction = 0x88056F14;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	ctx.current_instruction = 0x88056F18;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	ctx.current_instruction = 0x88056F1C;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	ctx.current_instruction = 0x88056F20;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,80(r31)
	ctx.current_instruction = 0x88056F24;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	ctx.current_instruction = 0x88056F28;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	ctx.current_instruction = 0x88056F2C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	ctx.current_instruction = 0x88056F30;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	ctx.current_instruction = 0x88056F34;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	ctx.current_instruction = 0x88056F38;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	ctx.current_instruction = 0x88056F3C;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	ctx.current_instruction = 0x88056F40;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x88052d90
	ctx.lr = 0x88056F48;
	sub_88052D90(ctx, base);
loc_88056F48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88056F4C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88056F54;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059718) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059718;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059718) {
			switch (rex_dispatch_address) {
				case 0x88059760:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059718;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059760: goto loc_88059760;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805971C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88059720;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88059724;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805972C;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	ctx.current_instruction = 0x88059734;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,88(r31)
	ctx.current_instruction = 0x8805973C;
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// std r11,528(r3)
	ctx.current_instruction = 0x88059748;
	REX_STORE_U64(ctx.r3.u32 + 528, ctx.r11.u64);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// stw r11,536(r3)
	ctx.current_instruction = 0x88059750;
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r3,520(r3)
	ctx.current_instruction = 0x88059758;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x88065158
	ctx.lr = 0x88059760;
	sub_88065158(ctx, base);
loc_88059760:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,16389
	ctx.r7.u64 = ctx.r10.u64 | 16389;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r11,80(r31)
	ctx.current_instruction = 0x88059778;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805979c
	goto loc_8805979C;
loc_8805979C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880597ac
	if (ctx.cr6.eq) goto loc_880597AC;
	// ld r10,88(r31)
	ctx.current_instruction = 0x880597A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// stw r10,0(r30)
	ctx.current_instruction = 0x880597A8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_880597AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880597B4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880597BC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880597C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805B748) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805B748);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B748;
	ctx.current_instruction = 0x8805B748;
	// ld r11,288(r3)
	ctx.current_instruction = 0x8805B748;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	ctx.current_instruction = 0x8805B750;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BB80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BB80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BB80;
	ctx.current_instruction = 0x8805BB80;
	// lwz r11,324(r3)
	ctx.current_instruction = 0x8805BB80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,324(r10)
	ctx.current_instruction = 0x8805BB90;
	REX_STORE_U32(ctx.r10.u32 + 324, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BCF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BCF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BCF0) {
			switch (rex_dispatch_address) {
				case 0x8805BD1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BCF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BD1C: goto loc_8805BD1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805BCF4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805BCF8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805BCFC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,304(r3)
	ctx.current_instruction = 0x8805BD00;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x8805BD08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,288(r3)
	ctx.current_instruction = 0x8805BD0C;
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// lwz r9,116(r10)
	ctx.current_instruction = 0x8805BD10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805BD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BD1C:
	// std r3,296(r31)
	ctx.current_instruction = 0x8805BD1C;
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r3.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805BD28;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805BD30;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C188) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805C188);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C188;
	ctx.current_instruction = 0x8805C188;
	// lwz r11,52(r3)
	ctx.current_instruction = 0x8805C188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r9)
	ctx.current_instruction = 0x8805C19C;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C578) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C578;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C578) {
			switch (rex_dispatch_address) {
				case 0x8805C5E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C578;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C5E4: goto loc_8805C5E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805C57C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805C580;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805C584;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ctx.current_instruction = 0x8805C588;
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.current_instruction = 0x8805C58C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805c5c4
	if (ctx.cr6.eq) goto loc_8805C5C4;
loc_8805C59C:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bge cr6,0x8805c5c4
	if (!ctx.cr6.lt) goto loc_8805C5C4;
	// lhz r31,0(r4)
	ctx.current_instruction = 0x8805C5A4;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lhzu r10,2(r4)
	ctx.current_instruction = 0x8805C5AC;
	ea = 2 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r31,r11,r30
	ctx.current_instruction = 0x8805C5B8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8805c59c
	if (!ctx.cr6.eq) goto loc_8805C59C;
loc_8805C5C4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r3)
	ctx.current_instruction = 0x8805C5C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r31,r11,r10
	ctx.current_instruction = 0x8805C5D0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u8);
	// lwz r11,108(r4)
	ctx.current_instruction = 0x8805C5D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805C5E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C5E4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805C5E8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805C5F0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805C5F4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88060550) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88060550;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88060550) {
			switch (rex_dispatch_address) {
				case 0x88060558:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88060550;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88060558: goto loc_88060558;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88060558;
	__savegprlr_23(ctx, base);
loc_88060558:
	// lwz r25,14628(r9)
	ctx.current_instruction = 0x88060558;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r31,14524(r9)
	ctx.current_instruction = 0x88060560;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r10,r25,r7
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lwz r30,14500(r9)
	ctx.current_instruction = 0x8806056C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// lwz r7,14532(r9)
	ctx.current_instruction = 0x88060570;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r29,14504(r9)
	ctx.current_instruction = 0x88060574;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14504);
	// lwz r28,14508(r9)
	ctx.current_instruction = 0x88060578;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14508);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// mullw r31,r31,r11
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// addze r11,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r11.s64 = temp.s64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r31,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addze r26,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r26.s64 = temp.s64;
	// add r29,r7,r3
	ctx.r29.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r28,r30,r5
	ctx.r28.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x880606ec
	if (!ctx.cr0.gt) goto loc_880606EC;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lwz r4,14476(r9)
	ctx.current_instruction = 0x880605BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// neg r24,r25
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r25.u64);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r30,r31,-2
	ctx.xer.ca = ctx.r31.u32 <= 4294967294;
	ctx.r30.u64 = static_cast<uint64_t>(-2) - ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880605D4:
	// lwz r11,14524(r9)
	ctx.current_instruction = 0x880605D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,14628(r9)
	ctx.current_instruction = 0x880605DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ble cr6,0x880606d0
	if (!ctx.cr6.gt) goto loc_880606D0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r5,r28,-2
	ctx.r5.s64 = ctx.r28.s64 + -2;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r6,r27,3
	ctx.r6.s64 = ctx.r27.s64 + 3;
	// subf r3,r27,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r27.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_88060608:
	// lbz r4,1(r11)
	ctx.current_instruction = 0x88060608;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,3(r5)
	ctx.current_instruction = 0x8806060C;
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r4.u8);
	// stb r4,2(r5)
	ctx.current_instruction = 0x88060610;
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r4.u8);
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88060614;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r4,-2(r10)
	ctx.current_instruction = 0x88060618;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r4,3(r11)
	ctx.current_instruction = 0x8806061C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r4,-2(r6)
	ctx.current_instruction = 0x88060620;
	REX_STORE_U8(ctx.r6.u32 + -2, ctx.r4.u8);
	// stb r4,-3(r6)
	ctx.current_instruction = 0x88060624;
	REX_STORE_U8(ctx.r6.u32 + -3, ctx.r4.u8);
	// lbz r4,4(r11)
	ctx.current_instruction = 0x88060628;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r4,-1(r10)
	ctx.current_instruction = 0x8806062C;
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r4,5(r11)
	ctx.current_instruction = 0x88060630;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stbx r4,r3,r6
	ctx.current_instruction = 0x88060634;
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r4.u8);
	// stbu r4,4(r5)
	ctx.current_instruction = 0x88060638;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// lbz r4,6(r11)
	ctx.current_instruction = 0x8806063C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// stb r4,0(r10)
	ctx.current_instruction = 0x88060640;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r4,7(r11)
	ctx.current_instruction = 0x88060644;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,0(r6)
	ctx.current_instruction = 0x88060648;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// stb r4,-1(r6)
	ctx.current_instruction = 0x8806064C;
	REX_STORE_U8(ctx.r6.u32 + -1, ctx.r4.u8);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88060654;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r4,1(r10)
	ctx.current_instruction = 0x88060658;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r4,9(r11)
	ctx.current_instruction = 0x8806065C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stb r4,2(r10)
	ctx.current_instruction = 0x88060660;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r4,10(r11)
	ctx.current_instruction = 0x88060664;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// stb r4,3(r10)
	ctx.current_instruction = 0x88060668;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r4,11(r11)
	ctx.current_instruction = 0x8806066C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stb r4,4(r10)
	ctx.current_instruction = 0x88060670;
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lbzu r4,12(r11)
	ctx.current_instruction = 0x88060674;
	ea = 12 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r4,5(r10)
	ctx.current_instruction = 0x88060678;
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lbz r4,2(r8)
	ctx.current_instruction = 0x88060680;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// add r23,r30,r10
	ctx.r23.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r4,1(r7)
	ctx.current_instruction = 0x88060688;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r4.u8);
	// lbz r4,4(r8)
	ctx.current_instruction = 0x8806068C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// stb r4,2(r7)
	ctx.current_instruction = 0x88060690;
	REX_STORE_U8(ctx.r7.u32 + 2, ctx.r4.u8);
	// lbz r4,6(r8)
	ctx.current_instruction = 0x88060694;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 6);
	// stb r4,3(r7)
	ctx.current_instruction = 0x88060698;
	REX_STORE_U8(ctx.r7.u32 + 3, ctx.r4.u8);
	// lbz r4,8(r8)
	ctx.current_instruction = 0x8806069C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// stb r4,4(r7)
	ctx.current_instruction = 0x880606A0;
	REX_STORE_U8(ctx.r7.u32 + 4, ctx.r4.u8);
	// lbz r4,9(r8)
	ctx.current_instruction = 0x880606A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// stb r4,5(r7)
	ctx.current_instruction = 0x880606A8;
	REX_STORE_U8(ctx.r7.u32 + 5, ctx.r4.u8);
	// lbz r4,10(r8)
	ctx.current_instruction = 0x880606AC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 10);
	// stb r4,6(r7)
	ctx.current_instruction = 0x880606B0;
	REX_STORE_U8(ctx.r7.u32 + 6, ctx.r4.u8);
	// lbz r4,11(r8)
	ctx.current_instruction = 0x880606B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 11);
	// stb r4,7(r7)
	ctx.current_instruction = 0x880606B8;
	REX_STORE_U8(ctx.r7.u32 + 7, ctx.r4.u8);
	// lbzu r4,12(r8)
	ctx.current_instruction = 0x880606BC;
	ea = 12 + ctx.r8.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r4,8(r7)
	ctx.current_instruction = 0x880606C0;
	ea = 8 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// lwz r4,14476(r9)
	ctx.current_instruction = 0x880606C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r23,r4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88060608
	if (ctx.cr6.lt) goto loc_88060608;
loc_880606D0:
	// lwz r11,14528(r9)
	ctx.current_instruction = 0x880606D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14528);
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bdnz 0x880605d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880605D4;
loc_880606EC:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880656F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880656F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880656F0) {
			switch (rex_dispatch_address) {
				case 0x880656F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880656F0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880656F8: goto loc_880656F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880656F8;
	__savegprlr_28(ctx, base);
loc_880656F8:
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r29,r5,31,17,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x880657d8
	if (ctx.cr6.eq) goto loc_880657D8;
loc_88065714:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88065744
	if (!ctx.cr6.eq) goto loc_88065744;
	// lbz r11,0(r4)
	ctx.current_instruction = 0x88065720;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x88065734
	if (ctx.cr6.lt) goto loc_88065734;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x88065744
	if (!ctx.cr6.gt) goto loc_88065744;
loc_88065734:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_88065744:
	// lbz r10,0(r3)
	ctx.current_instruction = 0x88065744;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x88065764
	if (!ctx.cr6.eq) goto loc_88065764;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88065764
	if (ctx.cr6.eq) goto loc_88065764;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// stwx r28,r11,r6
	ctx.current_instruction = 0x88065760;
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
loc_88065764:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8806579c
	if (!ctx.cr6.eq) goto loc_8806579C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8806579c
	if (ctx.cr6.eq) goto loc_8806579C;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lbz r8,0(r4)
	ctx.current_instruction = 0x8806577C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwzx r10,r11,r6
	ctx.current_instruction = 0x88065780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// stwx r8,r11,r6
	ctx.current_instruction = 0x88065798;
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
loc_8806579C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880657bc
	if (!ctx.cr6.eq) goto loc_880657BC;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x880657A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x880657bc
	if (ctx.cr6.eq) goto loc_880657BC;
	// lbz r9,0(r4)
	ctx.current_instruction = 0x880657B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x880657e0
	if (!ctx.cr6.eq) goto loc_880657E0;
loc_880657BC:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x88065714
	if (ctx.cr6.lt) goto loc_88065714;
loc_880657D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880657E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067EB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067EB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067EB8) {
			switch (rex_dispatch_address) {
				case 0x88067EE4:
				case 0x88067EEC:
				case 0x88067F08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067EB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067EE4: goto loc_88067EE4;
		case 0x88067EEC: goto loc_88067EEC;
		case 0x88067F08: goto loc_88067F08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88067EBC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88067EC0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067EC4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88067EC8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10744
	ctx.r10.s64 = ctx.r11.s64 + 10744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88067EDC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88067818
	ctx.lr = 0x88067EE4;
	sub_88067818(ctx, base);
loc_88067EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x88067EEC;
	sub_88062000(ctx, base);
loc_88067EEC:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88067f0c
	if (ctx.cr6.eq) goto loc_88067F0C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x88050358
	ctx.lr = 0x88067F08;
	sub_88050358(ctx, base);
loc_88067F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88067F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88067F10;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88067F18;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88067F1C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880692E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880692E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880692E8) {
			switch (rex_dispatch_address) {
				case 0x88069304:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880692E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069304: goto loc_88069304;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880692EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880692F0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880692F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.current_instruction = 0x880692F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069304:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806930C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880694B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880694B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880694B8;
	ctx.current_instruction = 0x880694B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88069710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88069710) {
			switch (rex_dispatch_address) {
				case 0x8806973C:
				case 0x8806975C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069710;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806973C: goto loc_8806973C;
		case 0x8806975C: goto loc_8806975C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88069714;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88069718;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806971C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88069720;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88069730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806973C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806973C:
	// lwz r9,224(r31)
	ctx.current_instruction = 0x8806973C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88069744;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// andc r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r30.u64;
	// stw r7,224(r31)
	ctx.current_instruction = 0x8806974C;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.current_instruction = 0x88069750;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806975C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806975C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88069760;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88069768;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806976C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806CA38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806CA38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806CA38) {
			switch (rex_dispatch_address) {
				case 0x8806CB0C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806CA38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806CB0C: goto loc_8806CB0C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806CA3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806CA40;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.current_instruction = 0x8806CA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806cb24
	if (!ctx.cr6.eq) goto loc_8806CB24;
	// lwz r11,800(r3)
	ctx.current_instruction = 0x8806CA54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lfd f13,7896(r3)
	ctx.current_instruction = 0x8806CA58;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7896);
	// lwz r10,796(r3)
	ctx.current_instruction = 0x8806CA5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r5,7936(r3)
	ctx.current_instruction = 0x8806CA64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 7936);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f0,9656(r9)
	ctx.current_instruction = 0x8806CA6C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9656);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	ctx.current_instruction = 0x8806CA74;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8806CA78;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	ctx.current_instruction = 0x8806CA7C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x8806CA80;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fdiv f1,f9,f8
	ctx.f1.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8806cb24
	if (!ctx.cr6.lt) goto loc_8806CB24;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x8806CA9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cb1c
	if (ctx.cr6.eq) goto loc_8806CB1C;
	// lwz r11,31012(r3)
	ctx.current_instruction = 0x8806CAA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31012);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cacc
	if (ctx.cr6.eq) goto loc_8806CACC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30724(r3)
	ctx.current_instruction = 0x8806CABC;
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r11.u32);
	// stw r11,30720(r3)
	ctx.current_instruction = 0x8806CAC0;
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r11.u32);
	// stw r11,30732(r3)
	ctx.current_instruction = 0x8806CAC4;
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r11.u32);
	// b 0x8806cad8
	goto loc_8806CAD8;
loc_8806CACC:
	// stw r10,30724(r3)
	ctx.current_instruction = 0x8806CACC;
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r10.u32);
	// stw r10,30720(r3)
	ctx.current_instruction = 0x8806CAD0;
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r10.u32);
	// stw r10,30732(r3)
	ctx.current_instruction = 0x8806CAD4;
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r10.u32);
loc_8806CAD8:
	// lwz r11,31016(r3)
	ctx.current_instruction = 0x8806CAD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806caf8
	if (ctx.cr6.eq) goto loc_8806CAF8;
	// lwz r11,30624(r3)
	ctx.current_instruction = 0x8806CAE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30624);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,30628(r3)
	ctx.current_instruction = 0x8806CAF0;
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r9.u32);
	// b 0x8806cafc
	goto loc_8806CAFC;
loc_8806CAF8:
	// stw r10,30628(r3)
	ctx.current_instruction = 0x8806CAF8;
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r10.u32);
loc_8806CAFC:
	// lwz r11,8104(r3)
	ctx.current_instruction = 0x8806CAFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806cb24
	if (!ctx.cr6.gt) goto loc_8806CB24;
	// bl 0x8807e080
	ctx.lr = 0x8806CB0C;
	sub_8807E080(ctx, base);
loc_8806CB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806CB10;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806CB1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2812(r3)
	ctx.current_instruction = 0x8806CB20;
	REX_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
loc_8806CB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806CB28;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806FD48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806FD48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806FD48;
	ctx.current_instruction = 0x8806FD48;
	// lwz r10,31544(r3)
	ctx.current_instruction = 0x8806FD48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,2804(r11)
	ctx.current_instruction = 0x8806FD5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2804);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,2808(r11)
	ctx.current_instruction = 0x8806FD68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880701B0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880701B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880701B0;
	ctx.current_instruction = 0x880701B0;
	// lwz r11,1380(r3)
	ctx.current_instruction = 0x880701B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,1384(r3)
	ctx.current_instruction = 0x880701B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// beq cr6,0x880701e4
	if (ctx.cr6.eq) goto loc_880701E4;
	// lwz r9,1360(r3)
	ctx.current_instruction = 0x880701C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,1372(r3)
	ctx.current_instruction = 0x880701C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// stw r8,1380(r3)
	ctx.current_instruction = 0x880701D4;
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r8.u32);
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stw r6,1384(r3)
	ctx.current_instruction = 0x880701DC;
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r6.u32);
	// b 0x880701fc
	goto loc_880701FC;
loc_880701E4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1360(r3)
	ctx.current_instruction = 0x880701E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r4,1372(r3)
	ctx.current_instruction = 0x880701F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// stw r9,1380(r3)
	ctx.current_instruction = 0x880701F4;
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r9.u32);
	// stw r8,1384(r3)
	ctx.current_instruction = 0x880701F8;
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r8.u32);
loc_880701FC:
	// lwz r9,1624(r3)
	ctx.current_instruction = 0x880701FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// divwu r11,r5,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
	// divwu r10,r4,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r4.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,3028(r3)
	ctx.current_instruction = 0x8807020C;
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r11.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,3036(r3)
	ctx.current_instruction = 0x88070214;
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r10.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,3992(r3)
	ctx.current_instruction = 0x88070224;
	REX_STORE_U32(ctx.r3.u32 + 3992, ctx.r11.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,4000(r3)
	ctx.current_instruction = 0x8807022C;
	REX_STORE_U32(ctx.r3.u32 + 4000, ctx.r10.u32);
	// stw r8,3996(r3)
	ctx.current_instruction = 0x88070230;
	REX_STORE_U32(ctx.r3.u32 + 3996, ctx.r8.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// stw r7,4004(r3)
	ctx.current_instruction = 0x88070238;
	REX_STORE_U32(ctx.r3.u32 + 4004, ctx.r7.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,4960(r3)
	ctx.current_instruction = 0x88070244;
	REX_STORE_U32(ctx.r3.u32 + 4960, ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,4968(r3)
	ctx.current_instruction = 0x8807024C;
	REX_STORE_U32(ctx.r3.u32 + 4968, ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,5932(r3)
	ctx.current_instruction = 0x88070254;
	REX_STORE_U32(ctx.r3.u32 + 5932, ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,5940(r3)
	ctx.current_instruction = 0x8807025C;
	REX_STORE_U32(ctx.r3.u32 + 5940, ctx.r4.u32);
	// stw r11,4964(r3)
	ctx.current_instruction = 0x88070260;
	REX_STORE_U32(ctx.r3.u32 + 4964, ctx.r11.u32);
	// stw r10,4972(r3)
	ctx.current_instruction = 0x88070264;
	REX_STORE_U32(ctx.r3.u32 + 4972, ctx.r10.u32);
	// stw r11,5928(r3)
	ctx.current_instruction = 0x88070268;
	REX_STORE_U32(ctx.r3.u32 + 5928, ctx.r11.u32);
	// stw r10,5936(r3)
	ctx.current_instruction = 0x8807026C;
	REX_STORE_U32(ctx.r3.u32 + 5936, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880747F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880747F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880747F0) {
			switch (rex_dispatch_address) {
				case 0x880747F8:
				case 0x88074800:
				case 0x88074E5C:
				case 0x88074E64:
				case 0x88075144:
				case 0x8807514C:
				case 0x88075160:
				case 0x88075170:
				case 0x88075178:
				case 0x88075180:
				case 0x88075190:
				case 0x880751D8:
				case 0x88075280:
				case 0x8807529C:
				case 0x880752C0:
				case 0x880752DC:
				case 0x880754F0:
				case 0x88075508:
				case 0x8807552C:
				case 0x88075544:
				case 0x880755A0:
				case 0x880755B4:
				case 0x880755F4:
				case 0x88075604:
				case 0x88075628:
				case 0x88075740:
				case 0x8807574C:
				case 0x8807575C:
				case 0x88075784:
				case 0x88075794:
				case 0x880757AC:
				case 0x880757BC:
				case 0x880757C4:
				case 0x88075838:
				case 0x88075878:
				case 0x88075880:
				case 0x88075884:
				case 0x8807588C:
				case 0x88075898:
				case 0x880758A0:
				case 0x880758C4:
				case 0x880758C8:
				case 0x88075918:
				case 0x88075A9C:
				case 0x88075AD4:
				case 0x88075B18:
				case 0x88075B74:
				case 0x88075B94:
				case 0x88075BDC:
				case 0x88075C04:
				case 0x88075C50:
				case 0x88075C78:
				case 0x88075CB8:
				case 0x88075CF4:
				case 0x88075D30:
				case 0x88075D7C:
				case 0x88075DBC:
				case 0x88075DFC:
				case 0x88075E20:
				case 0x88075E54:
				case 0x88075E7C:
				case 0x88075EA0:
				case 0x88075ED4:
				case 0x8807606C:
				case 0x8807607C:
				case 0x880760F4:
				case 0x88076118:
				case 0x88076164:
				case 0x88076188:
				case 0x880761C0:
				case 0x880761D4:
				case 0x88076294:
				case 0x88076320:
				case 0x88076410:
				case 0x88076420:
				case 0x88076444:
				case 0x88076468:
				case 0x880764CC:
				case 0x880764FC:
				case 0x88076510:
				case 0x8807651C:
				case 0x88076554:
				case 0x88076568:
				case 0x880765A8:
				case 0x880765D4:
				case 0x880765F0:
				case 0x8807669C:
				case 0x880766CC:
				case 0x8807677C:
				case 0x88076798:
				case 0x88076840:
				case 0x88076870:
				case 0x88076930:
				case 0x880769D4:
				case 0x88076A2C:
				case 0x88076A68:
				case 0x88076A80:
				case 0x88076AA0:
				case 0x88076B08:
				case 0x88076B50:
				case 0x88076B6C:
				case 0x88076B84:
				case 0x88076B9C:
				case 0x88076BB4:
				case 0x88076BCC:
				case 0x88076BD8:
				case 0x88076BE4:
				case 0x88076C0C:
				case 0x88076C2C:
				case 0x88076C40:
				case 0x88076D80:
				case 0x88076DA8:
				case 0x8807705C:
				case 0x880770B4:
				case 0x880770E0:
				case 0x880770F8:
				case 0x88077190:
				case 0x880771D8:
				case 0x88077270:
				case 0x880772CC:
				case 0x880772E8:
				case 0x880772F8:
				case 0x88077324:
				case 0x88077350:
				case 0x88077384:
				case 0x880773A0:
				case 0x880773C4:
				case 0x880773E0:
				case 0x880773E8:
				case 0x8807740C:
				case 0x8807741C:
				case 0x88077430:
				case 0x88077444:
				case 0x88077458:
				case 0x88077464:
				case 0x88077474:
				case 0x88077488:
				case 0x8807749C:
				case 0x880774B0:
				case 0x880774C8:
				case 0x880774E0:
				case 0x880774F8:
				case 0x88077510:
				case 0x88077528:
				case 0x88077540:
				case 0x880775D8:
				case 0x880776B4:
				case 0x880776FC:
				case 0x88077718:
				case 0x88077738:
				case 0x8807774C:
				case 0x88077780:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880747F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880747F8: goto loc_880747F8;
		case 0x88074800: goto loc_88074800;
		case 0x88074E5C: goto loc_88074E5C;
		case 0x88074E64: goto loc_88074E64;
		case 0x88075144: goto loc_88075144;
		case 0x8807514C: goto loc_8807514C;
		case 0x88075160: goto loc_88075160;
		case 0x88075170: goto loc_88075170;
		case 0x88075178: goto loc_88075178;
		case 0x88075180: goto loc_88075180;
		case 0x88075190: goto loc_88075190;
		case 0x880751D8: goto loc_880751D8;
		case 0x88075280: goto loc_88075280;
		case 0x8807529C: goto loc_8807529C;
		case 0x880752C0: goto loc_880752C0;
		case 0x880752DC: goto loc_880752DC;
		case 0x880754F0: goto loc_880754F0;
		case 0x88075508: goto loc_88075508;
		case 0x8807552C: goto loc_8807552C;
		case 0x88075544: goto loc_88075544;
		case 0x880755A0: goto loc_880755A0;
		case 0x880755B4: goto loc_880755B4;
		case 0x880755F4: goto loc_880755F4;
		case 0x88075604: goto loc_88075604;
		case 0x88075628: goto loc_88075628;
		case 0x88075740: goto loc_88075740;
		case 0x8807574C: goto loc_8807574C;
		case 0x8807575C: goto loc_8807575C;
		case 0x88075784: goto loc_88075784;
		case 0x88075794: goto loc_88075794;
		case 0x880757AC: goto loc_880757AC;
		case 0x880757BC: goto loc_880757BC;
		case 0x880757C4: goto loc_880757C4;
		case 0x88075838: goto loc_88075838;
		case 0x88075878: goto loc_88075878;
		case 0x88075880: goto loc_88075880;
		case 0x88075884: goto loc_88075884;
		case 0x8807588C: goto loc_8807588C;
		case 0x88075898: goto loc_88075898;
		case 0x880758A0: goto loc_880758A0;
		case 0x880758C4: goto loc_880758C4;
		case 0x880758C8: goto loc_880758C8;
		case 0x88075918: goto loc_88075918;
		case 0x88075A9C: goto loc_88075A9C;
		case 0x88075AD4: goto loc_88075AD4;
		case 0x88075B18: goto loc_88075B18;
		case 0x88075B74: goto loc_88075B74;
		case 0x88075B94: goto loc_88075B94;
		case 0x88075BDC: goto loc_88075BDC;
		case 0x88075C04: goto loc_88075C04;
		case 0x88075C50: goto loc_88075C50;
		case 0x88075C78: goto loc_88075C78;
		case 0x88075CB8: goto loc_88075CB8;
		case 0x88075CF4: goto loc_88075CF4;
		case 0x88075D30: goto loc_88075D30;
		case 0x88075D7C: goto loc_88075D7C;
		case 0x88075DBC: goto loc_88075DBC;
		case 0x88075DFC: goto loc_88075DFC;
		case 0x88075E20: goto loc_88075E20;
		case 0x88075E54: goto loc_88075E54;
		case 0x88075E7C: goto loc_88075E7C;
		case 0x88075EA0: goto loc_88075EA0;
		case 0x88075ED4: goto loc_88075ED4;
		case 0x8807606C: goto loc_8807606C;
		case 0x8807607C: goto loc_8807607C;
		case 0x880760F4: goto loc_880760F4;
		case 0x88076118: goto loc_88076118;
		case 0x88076164: goto loc_88076164;
		case 0x88076188: goto loc_88076188;
		case 0x880761C0: goto loc_880761C0;
		case 0x880761D4: goto loc_880761D4;
		case 0x88076294: goto loc_88076294;
		case 0x88076320: goto loc_88076320;
		case 0x88076410: goto loc_88076410;
		case 0x88076420: goto loc_88076420;
		case 0x88076444: goto loc_88076444;
		case 0x88076468: goto loc_88076468;
		case 0x880764CC: goto loc_880764CC;
		case 0x880764FC: goto loc_880764FC;
		case 0x88076510: goto loc_88076510;
		case 0x8807651C: goto loc_8807651C;
		case 0x88076554: goto loc_88076554;
		case 0x88076568: goto loc_88076568;
		case 0x880765A8: goto loc_880765A8;
		case 0x880765D4: goto loc_880765D4;
		case 0x880765F0: goto loc_880765F0;
		case 0x8807669C: goto loc_8807669C;
		case 0x880766CC: goto loc_880766CC;
		case 0x8807677C: goto loc_8807677C;
		case 0x88076798: goto loc_88076798;
		case 0x88076840: goto loc_88076840;
		case 0x88076870: goto loc_88076870;
		case 0x88076930: goto loc_88076930;
		case 0x880769D4: goto loc_880769D4;
		case 0x88076A2C: goto loc_88076A2C;
		case 0x88076A68: goto loc_88076A68;
		case 0x88076A80: goto loc_88076A80;
		case 0x88076AA0: goto loc_88076AA0;
		case 0x88076B08: goto loc_88076B08;
		case 0x88076B50: goto loc_88076B50;
		case 0x88076B6C: goto loc_88076B6C;
		case 0x88076B84: goto loc_88076B84;
		case 0x88076B9C: goto loc_88076B9C;
		case 0x88076BB4: goto loc_88076BB4;
		case 0x88076BCC: goto loc_88076BCC;
		case 0x88076BD8: goto loc_88076BD8;
		case 0x88076BE4: goto loc_88076BE4;
		case 0x88076C0C: goto loc_88076C0C;
		case 0x88076C2C: goto loc_88076C2C;
		case 0x88076C40: goto loc_88076C40;
		case 0x88076D80: goto loc_88076D80;
		case 0x88076DA8: goto loc_88076DA8;
		case 0x8807705C: goto loc_8807705C;
		case 0x880770B4: goto loc_880770B4;
		case 0x880770E0: goto loc_880770E0;
		case 0x880770F8: goto loc_880770F8;
		case 0x88077190: goto loc_88077190;
		case 0x880771D8: goto loc_880771D8;
		case 0x88077270: goto loc_88077270;
		case 0x880772CC: goto loc_880772CC;
		case 0x880772E8: goto loc_880772E8;
		case 0x880772F8: goto loc_880772F8;
		case 0x88077324: goto loc_88077324;
		case 0x88077350: goto loc_88077350;
		case 0x88077384: goto loc_88077384;
		case 0x880773A0: goto loc_880773A0;
		case 0x880773C4: goto loc_880773C4;
		case 0x880773E0: goto loc_880773E0;
		case 0x880773E8: goto loc_880773E8;
		case 0x8807740C: goto loc_8807740C;
		case 0x8807741C: goto loc_8807741C;
		case 0x88077430: goto loc_88077430;
		case 0x88077444: goto loc_88077444;
		case 0x88077458: goto loc_88077458;
		case 0x88077464: goto loc_88077464;
		case 0x88077474: goto loc_88077474;
		case 0x88077488: goto loc_88077488;
		case 0x8807749C: goto loc_8807749C;
		case 0x880774B0: goto loc_880774B0;
		case 0x880774C8: goto loc_880774C8;
		case 0x880774E0: goto loc_880774E0;
		case 0x880774F8: goto loc_880774F8;
		case 0x88077510: goto loc_88077510;
		case 0x88077528: goto loc_88077528;
		case 0x88077540: goto loc_88077540;
		case 0x880775D8: goto loc_880775D8;
		case 0x880776B4: goto loc_880776B4;
		case 0x880776FC: goto loc_880776FC;
		case 0x88077718: goto loc_88077718;
		case 0x88077738: goto loc_88077738;
		case 0x8807774C: goto loc_8807774C;
		case 0x88077780: goto loc_88077780;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880747F8;
	__savegprlr_14(ctx, base);
loc_880747F8:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef284
	ctx.lr = 0x88074800;
	__savefpr_27(ctx, base);
loc_88074800:
	// stwu r1,-544(r1)
	ctx.current_instruction = 0x88074800;
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,780(r1)
	ctx.current_instruction = 0x88074804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,588(r1)
	ctx.current_instruction = 0x88074810;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// stw r7,596(r1)
	ctx.current_instruction = 0x88074814;
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r7.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x8807481C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	ctx.current_instruction = 0x88074824;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r3)
	ctx.current_instruction = 0x8807482C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,16(r3)
	ctx.current_instruction = 0x88074834;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r16,-1
	ctx.r16.s64 = -1;
	// lwz r3,0(r8)
	ctx.current_instruction = 0x8807483C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r3,624(r31)
	ctx.current_instruction = 0x88074844;
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r3.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// stw r11,152(r1)
	ctx.current_instruction = 0x8807484C;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,160(r1)
	ctx.current_instruction = 0x88074854;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,4(r8)
	ctx.current_instruction = 0x8807485C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r24,-100
	ctx.r24.s64 = -100;
	// stw r11,628(r31)
	ctx.current_instruction = 0x88074864;
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r10,8(r8)
	ctx.current_instruction = 0x88074868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,572(r1)
	ctx.current_instruction = 0x8807486C;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,632(r31)
	ctx.current_instruction = 0x88074874;
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
	// stw r9,144(r1)
	ctx.current_instruction = 0x88074878;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r9,12(r8)
	ctx.current_instruction = 0x8807487C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,636(r31)
	ctx.current_instruction = 0x88074880;
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stw r7,644(r31)
	ctx.current_instruction = 0x88074884;
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r7.u32);
	// stw r6,640(r31)
	ctx.current_instruction = 0x88074888;
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// stw r4,652(r31)
	ctx.current_instruction = 0x8807488C;
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r4.u32);
	// stw r16,648(r31)
	ctx.current_instruction = 0x88074890;
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r16.u32);
	// stw r5,580(r1)
	ctx.current_instruction = 0x88074894;
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// std r30,736(r31)
	ctx.current_instruction = 0x8807489C;
	REX_STORE_U64(ctx.r31.u32 + 736, ctx.r30.u64);
	// stw r30,768(r31)
	ctx.current_instruction = 0x880748A0;
	REX_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	ctx.current_instruction = 0x880748A4;
	REX_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,780(r31)
	ctx.current_instruction = 0x880748A8;
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,788(r31)
	ctx.current_instruction = 0x880748AC;
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	ctx.current_instruction = 0x880748B0;
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r20,836(r31)
	ctx.current_instruction = 0x880748B4;
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r20.u32);
	// stw r30,868(r31)
	ctx.current_instruction = 0x880748B8;
	REX_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	ctx.current_instruction = 0x880748BC;
	REX_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// stw r30,1260(r31)
	ctx.current_instruction = 0x880748C0;
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stw r30,1264(r31)
	ctx.current_instruction = 0x880748C4;
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r30,1268(r31)
	ctx.current_instruction = 0x880748C8;
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stw r30,1272(r31)
	ctx.current_instruction = 0x880748CC;
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r30.u32);
	// stw r30,1276(r31)
	ctx.current_instruction = 0x880748D0;
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r30.u32);
	// stw r30,1424(r31)
	ctx.current_instruction = 0x880748D4;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	ctx.current_instruction = 0x880748D8;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1436(r31)
	ctx.current_instruction = 0x880748DC;
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r31)
	ctx.current_instruction = 0x880748E0;
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	ctx.current_instruction = 0x880748E4;
	REX_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	ctx.current_instruction = 0x880748E8;
	REX_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r20,1480(r31)
	ctx.current_instruction = 0x880748EC;
	REX_STORE_U32(ctx.r31.u32 + 1480, ctx.r20.u32);
	// stw r30,1488(r31)
	ctx.current_instruction = 0x880748F0;
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r30,1492(r31)
	ctx.current_instruction = 0x880748F4;
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	ctx.current_instruction = 0x880748F8;
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	ctx.current_instruction = 0x880748FC;
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r31)
	ctx.current_instruction = 0x88074900;
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stw r30,1508(r31)
	ctx.current_instruction = 0x88074904;
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	ctx.current_instruction = 0x88074908;
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1536(r31)
	ctx.current_instruction = 0x8807490C;
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	ctx.current_instruction = 0x88074910;
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r20,1544(r31)
	ctx.current_instruction = 0x88074914;
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r20.u32);
	// stw r30,1560(r31)
	ctx.current_instruction = 0x88074918;
	REX_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	ctx.current_instruction = 0x8807491C;
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	ctx.current_instruction = 0x88074920;
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	ctx.current_instruction = 0x88074924;
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	ctx.current_instruction = 0x88074928;
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1580(r31)
	ctx.current_instruction = 0x8807492C;
	REX_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r30,1584(r31)
	ctx.current_instruction = 0x88074930;
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1604(r31)
	ctx.current_instruction = 0x88074934;
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stw r30,1608(r31)
	ctx.current_instruction = 0x88074938;
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	ctx.current_instruction = 0x8807493C;
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	ctx.current_instruction = 0x88074940;
	REX_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	ctx.current_instruction = 0x88074944;
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r20,1624(r31)
	ctx.current_instruction = 0x88074948;
	REX_STORE_U32(ctx.r31.u32 + 1624, ctx.r20.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,1628(r31)
	ctx.current_instruction = 0x88074950;
	REX_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// stw r5,1632(r31)
	ctx.current_instruction = 0x88074954;
	REX_STORE_U32(ctx.r31.u32 + 1632, ctx.r5.u32);
	// stw r29,1640(r31)
	ctx.current_instruction = 0x88074958;
	REX_STORE_U32(ctx.r31.u32 + 1640, ctx.r29.u32);
	// stw r30,1656(r31)
	ctx.current_instruction = 0x8807495C;
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	ctx.current_instruction = 0x88074960;
	REX_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	ctx.current_instruction = 0x88074964;
	REX_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	ctx.current_instruction = 0x88074968;
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r31)
	ctx.current_instruction = 0x8807496C;
	REX_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1676(r31)
	ctx.current_instruction = 0x88074970;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1680(r31)
	ctx.current_instruction = 0x88074974;
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r24,1684(r31)
	ctx.current_instruction = 0x88074978;
	REX_STORE_U32(ctx.r31.u32 + 1684, ctx.r24.u32);
	// stw r24,1688(r31)
	ctx.current_instruction = 0x8807497C;
	REX_STORE_U32(ctx.r31.u32 + 1688, ctx.r24.u32);
	// stw r24,1692(r31)
	ctx.current_instruction = 0x88074980;
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r24.u32);
	// stw r24,1696(r31)
	ctx.current_instruction = 0x88074984;
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r24.u32);
	// stw r30,1700(r31)
	ctx.current_instruction = 0x88074988;
	REX_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r16,2088(r31)
	ctx.current_instruction = 0x8807498C;
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r16.u32);
	// stw r16,2092(r31)
	ctx.current_instruction = 0x88074990;
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r16.u32);
	// stw r30,2096(r31)
	ctx.current_instruction = 0x88074994;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2100(r31)
	ctx.current_instruction = 0x88074998;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// stw r30,2108(r31)
	ctx.current_instruction = 0x8807499C;
	REX_STORE_U32(ctx.r31.u32 + 2108, ctx.r30.u32);
	// stw r30,2112(r31)
	ctx.current_instruction = 0x880749A0;
	REX_STORE_U32(ctx.r31.u32 + 2112, ctx.r30.u32);
	// stw r30,2116(r31)
	ctx.current_instruction = 0x880749A4;
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// stw r30,2120(r31)
	ctx.current_instruction = 0x880749A8;
	REX_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r30,2124(r31)
	ctx.current_instruction = 0x880749AC;
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// stw r30,2148(r31)
	ctx.current_instruction = 0x880749B0;
	REX_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r16,2152(r31)
	ctx.current_instruction = 0x880749B4;
	REX_STORE_U32(ctx.r31.u32 + 2152, ctx.r16.u32);
	// stw r30,2164(r31)
	ctx.current_instruction = 0x880749B8;
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	ctx.current_instruction = 0x880749BC;
	REX_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	ctx.current_instruction = 0x880749C0;
	REX_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r30,2176(r31)
	ctx.current_instruction = 0x880749C4;
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// stw r16,2180(r31)
	ctx.current_instruction = 0x880749C8;
	REX_STORE_U32(ctx.r31.u32 + 2180, ctx.r16.u32);
	// stw r16,2184(r31)
	ctx.current_instruction = 0x880749CC;
	REX_STORE_U32(ctx.r31.u32 + 2184, ctx.r16.u32);
	// stw r30,2188(r31)
	ctx.current_instruction = 0x880749D0;
	REX_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// stw r30,2204(r31)
	ctx.current_instruction = 0x880749D4;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// stw r30,2260(r31)
	ctx.current_instruction = 0x880749D8;
	REX_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
	// stw r30,2268(r31)
	ctx.current_instruction = 0x880749DC;
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r30.u32);
	// stw r30,2272(r31)
	ctx.current_instruction = 0x880749E0;
	REX_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// stw r30,2276(r31)
	ctx.current_instruction = 0x880749E4;
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r30,2280(r31)
	ctx.current_instruction = 0x880749E8;
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r30.u32);
	// stw r30,2284(r31)
	ctx.current_instruction = 0x880749EC;
	REX_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// stw r30,2288(r31)
	ctx.current_instruction = 0x880749F0;
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// stw r30,2296(r31)
	ctx.current_instruction = 0x880749F4;
	REX_STORE_U32(ctx.r31.u32 + 2296, ctx.r30.u32);
	// stw r20,2300(r31)
	ctx.current_instruction = 0x880749F8;
	REX_STORE_U32(ctx.r31.u32 + 2300, ctx.r20.u32);
	// stw r30,2312(r31)
	ctx.current_instruction = 0x880749FC;
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r30.u32);
	// stw r30,2324(r31)
	ctx.current_instruction = 0x88074A00;
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r30.u32);
	// stw r30,2328(r31)
	ctx.current_instruction = 0x88074A04;
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2336(r31)
	ctx.current_instruction = 0x88074A08;
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	ctx.current_instruction = 0x88074A0C;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	ctx.current_instruction = 0x88074A10;
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,2424(r31)
	ctx.current_instruction = 0x88074A14;
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// stw r30,2428(r31)
	ctx.current_instruction = 0x88074A18;
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r30.u32);
	// stb r30,2432(r31)
	ctx.current_instruction = 0x88074A1C;
	REX_STORE_U8(ctx.r31.u32 + 2432, ctx.r30.u8);
	// stw r30,2436(r31)
	ctx.current_instruction = 0x88074A20;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r30.u32);
	// stw r30,2440(r31)
	ctx.current_instruction = 0x88074A24;
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r30.u32);
	// stw r30,2444(r31)
	ctx.current_instruction = 0x88074A28;
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r30.u32);
	// stw r30,2448(r31)
	ctx.current_instruction = 0x88074A2C;
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// stw r30,2456(r31)
	ctx.current_instruction = 0x88074A30;
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r30.u32);
	// stw r30,2464(r31)
	ctx.current_instruction = 0x88074A34;
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r30.u32);
	// stw r30,2472(r31)
	ctx.current_instruction = 0x88074A38;
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r30.u32);
	// stw r30,2480(r31)
	ctx.current_instruction = 0x88074A3C;
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// stw r30,2484(r31)
	ctx.current_instruction = 0x88074A40;
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// stw r30,2544(r31)
	ctx.current_instruction = 0x88074A44;
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2552(r31)
	ctx.current_instruction = 0x88074A48;
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r30.u32);
	// stw r30,2564(r31)
	ctx.current_instruction = 0x88074A4C;
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r30.u32);
	// stw r30,2568(r31)
	ctx.current_instruction = 0x88074A50;
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// stw r30,2572(r31)
	ctx.current_instruction = 0x88074A54;
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r30.u32);
	// stw r30,2576(r31)
	ctx.current_instruction = 0x88074A58;
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r30.u32);
	// stw r30,2580(r31)
	ctx.current_instruction = 0x88074A5C;
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r30.u32);
	// stw r30,2584(r31)
	ctx.current_instruction = 0x88074A60;
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r30.u32);
	// stw r30,2588(r31)
	ctx.current_instruction = 0x88074A64;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r30.u32);
	// stw r30,2592(r31)
	ctx.current_instruction = 0x88074A68;
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// stw r16,2620(r31)
	ctx.current_instruction = 0x88074A6C;
	REX_STORE_U32(ctx.r31.u32 + 2620, ctx.r16.u32);
	// stw r30,2624(r31)
	ctx.current_instruction = 0x88074A70;
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r30.u32);
	// stw r30,2628(r31)
	ctx.current_instruction = 0x88074A74;
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
	// stw r30,2632(r31)
	ctx.current_instruction = 0x88074A78;
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r30.u32);
	// stw r30,2636(r31)
	ctx.current_instruction = 0x88074A7C;
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r30.u32);
	// stw r30,2640(r31)
	ctx.current_instruction = 0x88074A80;
	REX_STORE_U32(ctx.r31.u32 + 2640, ctx.r30.u32);
	// stw r30,2644(r31)
	ctx.current_instruction = 0x88074A84;
	REX_STORE_U32(ctx.r31.u32 + 2644, ctx.r30.u32);
	// stw r30,2648(r31)
	ctx.current_instruction = 0x88074A88;
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// stw r30,2792(r31)
	ctx.current_instruction = 0x88074A8C;
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r30.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r30,2796(r31)
	ctx.current_instruction = 0x88074A94;
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// stw r30,2812(r31)
	ctx.current_instruction = 0x88074A9C;
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r30.u32);
	// stw r30,2816(r31)
	ctx.current_instruction = 0x88074AA0;
	REX_STORE_U32(ctx.r31.u32 + 2816, ctx.r30.u32);
	// stw r30,2820(r31)
	ctx.current_instruction = 0x88074AA4;
	REX_STORE_U32(ctx.r31.u32 + 2820, ctx.r30.u32);
	// stw r30,2824(r31)
	ctx.current_instruction = 0x88074AA8;
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stw r8,6720(r31)
	ctx.current_instruction = 0x88074AAC;
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r8.u32);
	// lfd f31,1488(r6)
	ctx.current_instruction = 0x88074AB0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r6.u32 + 1488);
	// stw r30,6724(r31)
	ctx.current_instruction = 0x88074AB4;
	REX_STORE_U32(ctx.r31.u32 + 6724, ctx.r30.u32);
	// stw r30,6728(r31)
	ctx.current_instruction = 0x88074AB8;
	REX_STORE_U32(ctx.r31.u32 + 6728, ctx.r30.u32);
	// stw r20,6736(r31)
	ctx.current_instruction = 0x88074ABC;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r20.u32);
	// stw r30,6740(r31)
	ctx.current_instruction = 0x88074AC0;
	REX_STORE_U32(ctx.r31.u32 + 6740, ctx.r30.u32);
	// stw r30,6768(r31)
	ctx.current_instruction = 0x88074AC4;
	REX_STORE_U32(ctx.r31.u32 + 6768, ctx.r30.u32);
	// stw r30,6772(r31)
	ctx.current_instruction = 0x88074AC8;
	REX_STORE_U32(ctx.r31.u32 + 6772, ctx.r30.u32);
	// stw r30,6776(r31)
	ctx.current_instruction = 0x88074ACC;
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r30.u32);
	// stw r30,6780(r31)
	ctx.current_instruction = 0x88074AD0;
	REX_STORE_U32(ctx.r31.u32 + 6780, ctx.r30.u32);
	// stw r30,6784(r31)
	ctx.current_instruction = 0x88074AD4;
	REX_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// stw r30,6788(r31)
	ctx.current_instruction = 0x88074AD8;
	REX_STORE_U32(ctx.r31.u32 + 6788, ctx.r30.u32);
	// stw r30,6792(r31)
	ctx.current_instruction = 0x88074ADC;
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// stw r30,6796(r31)
	ctx.current_instruction = 0x88074AE0;
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// stw r30,6804(r31)
	ctx.current_instruction = 0x88074AE4;
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r30.u32);
	// stw r30,6808(r31)
	ctx.current_instruction = 0x88074AE8;
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r30.u32);
	// stw r30,6812(r31)
	ctx.current_instruction = 0x88074AEC;
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r30.u32);
	// stw r30,6816(r31)
	ctx.current_instruction = 0x88074AF0;
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r30.u32);
	// stw r30,6820(r31)
	ctx.current_instruction = 0x88074AF4;
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r30.u32);
	// stw r30,6824(r31)
	ctx.current_instruction = 0x88074AF8;
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r30.u32);
	// stw r30,6836(r31)
	ctx.current_instruction = 0x88074AFC;
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r30.u32);
	// stw r30,6840(r31)
	ctx.current_instruction = 0x88074B00;
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r30.u32);
	// stw r30,6844(r31)
	ctx.current_instruction = 0x88074B04;
	REX_STORE_U32(ctx.r31.u32 + 6844, ctx.r30.u32);
	// lwz r5,772(r1)
	ctx.current_instruction = 0x88074B08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r27,580(r1)
	ctx.current_instruction = 0x88074B0C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r28,812(r1)
	ctx.current_instruction = 0x88074B10;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r4,652(r1)
	ctx.current_instruction = 0x88074B14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,676(r1)
	ctx.current_instruction = 0x88074B18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r11,6720(r31)
	ctx.current_instruction = 0x88074B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6720);
	// stw r11,6856(r31)
	ctx.current_instruction = 0x88074B20;
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// stw r16,6860(r31)
	ctx.current_instruction = 0x88074B24;
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r16.u32);
	// stw r30,6864(r31)
	ctx.current_instruction = 0x88074B28;
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r30.u32);
	// stw r30,6876(r31)
	ctx.current_instruction = 0x88074B2C;
	REX_STORE_U32(ctx.r31.u32 + 6876, ctx.r30.u32);
	// stw r30,6880(r31)
	ctx.current_instruction = 0x88074B30;
	REX_STORE_U32(ctx.r31.u32 + 6880, ctx.r30.u32);
	// stw r30,6888(r31)
	ctx.current_instruction = 0x88074B34;
	REX_STORE_U32(ctx.r31.u32 + 6888, ctx.r30.u32);
	// stw r30,6908(r31)
	ctx.current_instruction = 0x88074B38;
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// stw r30,7048(r31)
	ctx.current_instruction = 0x88074B3C;
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r30.u32);
	// stw r30,7052(r31)
	ctx.current_instruction = 0x88074B40;
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r30.u32);
	// stw r30,7072(r31)
	ctx.current_instruction = 0x88074B44;
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r30.u32);
	// stw r30,7076(r31)
	ctx.current_instruction = 0x88074B48;
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r30.u32);
	// stw r20,7080(r31)
	ctx.current_instruction = 0x88074B4C;
	REX_STORE_U32(ctx.r31.u32 + 7080, ctx.r20.u32);
	// stw r30,7140(r31)
	ctx.current_instruction = 0x88074B50;
	REX_STORE_U32(ctx.r31.u32 + 7140, ctx.r30.u32);
	// stw r20,7144(r31)
	ctx.current_instruction = 0x88074B54;
	REX_STORE_U32(ctx.r31.u32 + 7144, ctx.r20.u32);
	// stw r30,7148(r31)
	ctx.current_instruction = 0x88074B58;
	REX_STORE_U32(ctx.r31.u32 + 7148, ctx.r30.u32);
	// stw r30,7152(r31)
	ctx.current_instruction = 0x88074B5C;
	REX_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// stw r30,7156(r31)
	ctx.current_instruction = 0x88074B60;
	REX_STORE_U32(ctx.r31.u32 + 7156, ctx.r30.u32);
	// std r30,7160(r31)
	ctx.current_instruction = 0x88074B64;
	REX_STORE_U64(ctx.r31.u32 + 7160, ctx.r30.u64);
	// stw r30,7176(r31)
	ctx.current_instruction = 0x88074B68;
	REX_STORE_U32(ctx.r31.u32 + 7176, ctx.r30.u32);
	// stw r30,7184(r31)
	ctx.current_instruction = 0x88074B6C;
	REX_STORE_U32(ctx.r31.u32 + 7184, ctx.r30.u32);
	// stw r29,7188(r31)
	ctx.current_instruction = 0x88074B70;
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
	// stw r30,7192(r31)
	ctx.current_instruction = 0x88074B74;
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// stw r5,7196(r31)
	ctx.current_instruction = 0x88074B78;
	REX_STORE_U32(ctx.r31.u32 + 7196, ctx.r5.u32);
	// stw r30,7200(r31)
	ctx.current_instruction = 0x88074B7C;
	REX_STORE_U32(ctx.r31.u32 + 7200, ctx.r30.u32);
	// stw r30,7204(r31)
	ctx.current_instruction = 0x88074B80;
	REX_STORE_U32(ctx.r31.u32 + 7204, ctx.r30.u32);
	// stw r30,7208(r31)
	ctx.current_instruction = 0x88074B84;
	REX_STORE_U32(ctx.r31.u32 + 7208, ctx.r30.u32);
	// stw r20,7212(r31)
	ctx.current_instruction = 0x88074B88;
	REX_STORE_U32(ctx.r31.u32 + 7212, ctx.r20.u32);
	// stw r20,7216(r31)
	ctx.current_instruction = 0x88074B8C;
	REX_STORE_U32(ctx.r31.u32 + 7216, ctx.r20.u32);
	// stw r30,7220(r31)
	ctx.current_instruction = 0x88074B90;
	REX_STORE_U32(ctx.r31.u32 + 7220, ctx.r30.u32);
	// stw r30,7224(r31)
	ctx.current_instruction = 0x88074B94;
	REX_STORE_U32(ctx.r31.u32 + 7224, ctx.r30.u32);
	// stw r30,7228(r31)
	ctx.current_instruction = 0x88074B98;
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r30.u32);
	// stw r30,7232(r31)
	ctx.current_instruction = 0x88074B9C;
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r30.u32);
	// stw r7,7572(r31)
	ctx.current_instruction = 0x88074BA0;
	REX_STORE_U32(ctx.r31.u32 + 7572, ctx.r7.u32);
	// stw r27,7596(r31)
	ctx.current_instruction = 0x88074BA4;
	REX_STORE_U32(ctx.r31.u32 + 7596, ctx.r27.u32);
	// stw r30,7604(r31)
	ctx.current_instruction = 0x88074BA8;
	REX_STORE_U32(ctx.r31.u32 + 7604, ctx.r30.u32);
	// stw r30,7608(r31)
	ctx.current_instruction = 0x88074BAC;
	REX_STORE_U32(ctx.r31.u32 + 7608, ctx.r30.u32);
	// stw r30,7612(r31)
	ctx.current_instruction = 0x88074BB0;
	REX_STORE_U32(ctx.r31.u32 + 7612, ctx.r30.u32);
	// stw r30,7624(r31)
	ctx.current_instruction = 0x88074BB4;
	REX_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// stw r30,7628(r31)
	ctx.current_instruction = 0x88074BB8;
	REX_STORE_U32(ctx.r31.u32 + 7628, ctx.r30.u32);
	// stw r30,7632(r31)
	ctx.current_instruction = 0x88074BBC;
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r30.u32);
	// stfd f31,7640(r31)
	ctx.current_instruction = 0x88074BC0;
	REX_STORE_U64(ctx.r31.u32 + 7640, ctx.f31.u64);
	// stfd f31,7648(r31)
	ctx.current_instruction = 0x88074BC4;
	REX_STORE_U64(ctx.r31.u32 + 7648, ctx.f31.u64);
	// stfd f31,7656(r31)
	ctx.current_instruction = 0x88074BC8;
	REX_STORE_U64(ctx.r31.u32 + 7656, ctx.f31.u64);
	// stw r30,7664(r31)
	ctx.current_instruction = 0x88074BCC;
	REX_STORE_U32(ctx.r31.u32 + 7664, ctx.r30.u32);
	// stw r30,7676(r31)
	ctx.current_instruction = 0x88074BD0;
	REX_STORE_U32(ctx.r31.u32 + 7676, ctx.r30.u32);
	// stfd f3,7688(r31)
	ctx.current_instruction = 0x88074BD4;
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f3.u64);
	// stw r30,7696(r31)
	ctx.current_instruction = 0x88074BD8;
	REX_STORE_U32(ctx.r31.u32 + 7696, ctx.r30.u32);
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// stw r30,7700(r31)
	ctx.current_instruction = 0x88074BE0;
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r30,7712(r31)
	ctx.current_instruction = 0x88074BE8;
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r30.u64);
	// addi r9,r10,26088
	ctx.r9.s64 = ctx.r10.s64 + 26088;
	// std r30,7736(r31)
	ctx.current_instruction = 0x88074BF0;
	REX_STORE_U64(ctx.r31.u32 + 7736, ctx.r30.u64);
	// stw r30,7756(r31)
	ctx.current_instruction = 0x88074BF4;
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r30.u32);
	// stw r30,7764(r31)
	ctx.current_instruction = 0x88074BF8;
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r30.u32);
	// stw r30,7768(r31)
	ctx.current_instruction = 0x88074BFC;
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r30.u32);
	// stw r30,7772(r31)
	ctx.current_instruction = 0x88074C00;
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r30.u32);
	// stw r30,7844(r31)
	ctx.current_instruction = 0x88074C04;
	REX_STORE_U32(ctx.r31.u32 + 7844, ctx.r30.u32);
	// stw r30,7848(r31)
	ctx.current_instruction = 0x88074C08;
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r30.u32);
	// stw r30,7852(r31)
	ctx.current_instruction = 0x88074C0C;
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r30.u32);
	// stw r30,7856(r31)
	ctx.current_instruction = 0x88074C10;
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r30.u32);
	// stw r30,7864(r31)
	ctx.current_instruction = 0x88074C14;
	REX_STORE_U32(ctx.r31.u32 + 7864, ctx.r30.u32);
	// lwz r8,668(r1)
	ctx.current_instruction = 0x88074C18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r30,7868(r31)
	ctx.current_instruction = 0x88074C1C;
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r30.u32);
	// stfd f1,7888(r31)
	ctx.current_instruction = 0x88074C20;
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f1.u64);
	// stfd f2,7896(r31)
	ctx.current_instruction = 0x88074C24;
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f2.u64);
	// stw r4,7904(r31)
	ctx.current_instruction = 0x88074C28;
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r4.u32);
	// lwz r7,684(r1)
	ctx.current_instruction = 0x88074C2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// stw r8,7936(r31)
	ctx.current_instruction = 0x88074C30;
	REX_STORE_U32(ctx.r31.u32 + 7936, ctx.r8.u32);
	// stw r30,7972(r31)
	ctx.current_instruction = 0x88074C34;
	REX_STORE_U32(ctx.r31.u32 + 7972, ctx.r30.u32);
	// stw r30,7976(r31)
	ctx.current_instruction = 0x88074C38;
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
	// stw r30,7980(r31)
	ctx.current_instruction = 0x88074C3C;
	REX_STORE_U32(ctx.r31.u32 + 7980, ctx.r30.u32);
	// stw r30,7984(r31)
	ctx.current_instruction = 0x88074C40;
	REX_STORE_U32(ctx.r31.u32 + 7984, ctx.r30.u32);
	// stw r30,7988(r31)
	ctx.current_instruction = 0x88074C44;
	REX_STORE_U32(ctx.r31.u32 + 7988, ctx.r30.u32);
	// stw r30,7992(r31)
	ctx.current_instruction = 0x88074C48;
	REX_STORE_U32(ctx.r31.u32 + 7992, ctx.r30.u32);
	// stw r30,8024(r31)
	ctx.current_instruction = 0x88074C4C;
	REX_STORE_U32(ctx.r31.u32 + 8024, ctx.r30.u32);
	// stw r30,8028(r31)
	ctx.current_instruction = 0x88074C50;
	REX_STORE_U32(ctx.r31.u32 + 8028, ctx.r30.u32);
	// stw r30,8032(r31)
	ctx.current_instruction = 0x88074C54;
	REX_STORE_U32(ctx.r31.u32 + 8032, ctx.r30.u32);
	// stfd f31,8040(r31)
	ctx.current_instruction = 0x88074C58;
	REX_STORE_U64(ctx.r31.u32 + 8040, ctx.f31.u64);
	// stw r30,8048(r31)
	ctx.current_instruction = 0x88074C5C;
	REX_STORE_U32(ctx.r31.u32 + 8048, ctx.r30.u32);
	// stw r3,8104(r31)
	ctx.current_instruction = 0x88074C60;
	REX_STORE_U32(ctx.r31.u32 + 8104, ctx.r3.u32);
	// stw r7,8108(r31)
	ctx.current_instruction = 0x88074C64;
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r7.u32);
	// stw r30,8176(r31)
	ctx.current_instruction = 0x88074C68;
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r30.u32);
	// stw r28,8180(r31)
	ctx.current_instruction = 0x88074C6C;
	REX_STORE_U32(ctx.r31.u32 + 8180, ctx.r28.u32);
	// stw r30,8236(r31)
	ctx.current_instruction = 0x88074C70;
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r30.u32);
	// stw r30,17536(r31)
	ctx.current_instruction = 0x88074C74;
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r30.u32);
	// stw r30,17540(r31)
	ctx.current_instruction = 0x88074C78;
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r30.u32);
	// stw r30,19108(r31)
	ctx.current_instruction = 0x88074C7C;
	REX_STORE_U32(ctx.r31.u32 + 19108, ctx.r30.u32);
	// stw r30,19112(r31)
	ctx.current_instruction = 0x88074C80;
	REX_STORE_U32(ctx.r31.u32 + 19112, ctx.r30.u32);
	// stw r30,19196(r31)
	ctx.current_instruction = 0x88074C84;
	REX_STORE_U32(ctx.r31.u32 + 19196, ctx.r30.u32);
	// stw r30,19200(r31)
	ctx.current_instruction = 0x88074C88;
	REX_STORE_U32(ctx.r31.u32 + 19200, ctx.r30.u32);
	// stw r30,19204(r31)
	ctx.current_instruction = 0x88074C8C;
	REX_STORE_U32(ctx.r31.u32 + 19204, ctx.r30.u32);
	// stw r30,19208(r31)
	ctx.current_instruction = 0x88074C90;
	REX_STORE_U32(ctx.r31.u32 + 19208, ctx.r30.u32);
	// stw r30,19212(r31)
	ctx.current_instruction = 0x88074C94;
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r30.u32);
	// stw r30,19216(r31)
	ctx.current_instruction = 0x88074C98;
	REX_STORE_U32(ctx.r31.u32 + 19216, ctx.r30.u32);
	// stw r30,19456(r31)
	ctx.current_instruction = 0x88074C9C;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r30.u32);
	// stw r20,19468(r31)
	ctx.current_instruction = 0x88074CA0;
	REX_STORE_U32(ctx.r31.u32 + 19468, ctx.r20.u32);
	// stw r30,20196(r31)
	ctx.current_instruction = 0x88074CA4;
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r30.u32);
	// stw r30,20200(r31)
	ctx.current_instruction = 0x88074CA8;
	REX_STORE_U32(ctx.r31.u32 + 20200, ctx.r30.u32);
	// stw r30,20204(r31)
	ctx.current_instruction = 0x88074CAC;
	REX_STORE_U32(ctx.r31.u32 + 20204, ctx.r30.u32);
	// stw r30,20212(r31)
	ctx.current_instruction = 0x88074CB0;
	REX_STORE_U32(ctx.r31.u32 + 20212, ctx.r30.u32);
	// stw r30,20216(r31)
	ctx.current_instruction = 0x88074CB4;
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r30.u32);
	// stw r30,20256(r31)
	ctx.current_instruction = 0x88074CB8;
	REX_STORE_U32(ctx.r31.u32 + 20256, ctx.r30.u32);
	// stw r30,20268(r31)
	ctx.current_instruction = 0x88074CBC;
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r30.u32);
	// stw r30,20272(r31)
	ctx.current_instruction = 0x88074CC0;
	REX_STORE_U32(ctx.r31.u32 + 20272, ctx.r30.u32);
	// stw r30,20276(r31)
	ctx.current_instruction = 0x88074CC4;
	REX_STORE_U32(ctx.r31.u32 + 20276, ctx.r30.u32);
	// stw r30,20280(r31)
	ctx.current_instruction = 0x88074CC8;
	REX_STORE_U32(ctx.r31.u32 + 20280, ctx.r30.u32);
	// stw r20,20284(r31)
	ctx.current_instruction = 0x88074CCC;
	REX_STORE_U32(ctx.r31.u32 + 20284, ctx.r20.u32);
	// stw r9,20820(r31)
	ctx.current_instruction = 0x88074CD0;
	REX_STORE_U32(ctx.r31.u32 + 20820, ctx.r9.u32);
	// stw r30,20836(r31)
	ctx.current_instruction = 0x88074CD4;
	REX_STORE_U32(ctx.r31.u32 + 20836, ctx.r30.u32);
	// stw r30,20840(r31)
	ctx.current_instruction = 0x88074CD8;
	REX_STORE_U32(ctx.r31.u32 + 20840, ctx.r30.u32);
	// stw r30,20844(r31)
	ctx.current_instruction = 0x88074CDC;
	REX_STORE_U32(ctx.r31.u32 + 20844, ctx.r30.u32);
	// stw r30,20872(r31)
	ctx.current_instruction = 0x88074CE0;
	REX_STORE_U32(ctx.r31.u32 + 20872, ctx.r30.u32);
	// stw r30,20912(r31)
	ctx.current_instruction = 0x88074CE4;
	REX_STORE_U32(ctx.r31.u32 + 20912, ctx.r30.u32);
	// stw r30,20916(r31)
	ctx.current_instruction = 0x88074CE8;
	REX_STORE_U32(ctx.r31.u32 + 20916, ctx.r30.u32);
	// stw r11,21004(r31)
	ctx.current_instruction = 0x88074CEC;
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r11.u32);
	// stw r30,21072(r31)
	ctx.current_instruction = 0x88074CF0;
	REX_STORE_U32(ctx.r31.u32 + 21072, ctx.r30.u32);
	// stw r30,21076(r31)
	ctx.current_instruction = 0x88074CF4;
	REX_STORE_U32(ctx.r31.u32 + 21076, ctx.r30.u32);
	// stw r20,21080(r31)
	ctx.current_instruction = 0x88074CF8;
	REX_STORE_U32(ctx.r31.u32 + 21080, ctx.r20.u32);
	// stw r20,21084(r31)
	ctx.current_instruction = 0x88074CFC;
	REX_STORE_U32(ctx.r31.u32 + 21084, ctx.r20.u32);
	// stw r30,21088(r31)
	ctx.current_instruction = 0x88074D00;
	REX_STORE_U32(ctx.r31.u32 + 21088, ctx.r30.u32);
	// stw r30,21092(r31)
	ctx.current_instruction = 0x88074D04;
	REX_STORE_U32(ctx.r31.u32 + 21092, ctx.r30.u32);
	// stw r30,21096(r31)
	ctx.current_instruction = 0x88074D08;
	REX_STORE_U32(ctx.r31.u32 + 21096, ctx.r30.u32);
	// stw r30,21104(r31)
	ctx.current_instruction = 0x88074D0C;
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r30.u32);
	// stw r30,21108(r31)
	ctx.current_instruction = 0x88074D10;
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r30.u32);
	// stw r30,21140(r31)
	ctx.current_instruction = 0x88074D14;
	REX_STORE_U32(ctx.r31.u32 + 21140, ctx.r30.u32);
	// addi r3,r31,30308
	ctx.r3.s64 = ctx.r31.s64 + 30308;
	// stw r30,21156(r31)
	ctx.current_instruction = 0x88074D1C;
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r30.u32);
	// stw r30,21160(r31)
	ctx.current_instruction = 0x88074D20;
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r30.u32);
	// stw r30,21256(r31)
	ctx.current_instruction = 0x88074D24;
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r30.u32);
	// stw r20,27968(r31)
	ctx.current_instruction = 0x88074D28;
	REX_STORE_U32(ctx.r31.u32 + 27968, ctx.r20.u32);
	// stw r30,27988(r31)
	ctx.current_instruction = 0x88074D2C;
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r30.u32);
	// stw r30,27992(r31)
	ctx.current_instruction = 0x88074D30;
	REX_STORE_U32(ctx.r31.u32 + 27992, ctx.r30.u32);
	// stw r30,27996(r31)
	ctx.current_instruction = 0x88074D34;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r30.u32);
	// stw r20,28000(r31)
	ctx.current_instruction = 0x88074D38;
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r20.u32);
	// stw r20,28004(r31)
	ctx.current_instruction = 0x88074D3C;
	REX_STORE_U32(ctx.r31.u32 + 28004, ctx.r20.u32);
	// stw r20,28008(r31)
	ctx.current_instruction = 0x88074D40;
	REX_STORE_U32(ctx.r31.u32 + 28008, ctx.r20.u32);
	// stw r20,28012(r31)
	ctx.current_instruction = 0x88074D44;
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r20.u32);
	// stw r30,28016(r31)
	ctx.current_instruction = 0x88074D48;
	REX_STORE_U32(ctx.r31.u32 + 28016, ctx.r30.u32);
	// stw r30,28020(r31)
	ctx.current_instruction = 0x88074D4C;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r30.u32);
	// stw r30,28024(r31)
	ctx.current_instruction = 0x88074D50;
	REX_STORE_U32(ctx.r31.u32 + 28024, ctx.r30.u32);
	// stw r30,28028(r31)
	ctx.current_instruction = 0x88074D54;
	REX_STORE_U32(ctx.r31.u32 + 28028, ctx.r30.u32);
	// stw r30,28032(r31)
	ctx.current_instruction = 0x88074D58;
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r30.u32);
	// stw r30,28036(r31)
	ctx.current_instruction = 0x88074D5C;
	REX_STORE_U32(ctx.r31.u32 + 28036, ctx.r30.u32);
	// stw r20,28040(r31)
	ctx.current_instruction = 0x88074D60;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r20.u32);
	// stw r30,28044(r31)
	ctx.current_instruction = 0x88074D64;
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r30.u32);
	// stw r30,28048(r31)
	ctx.current_instruction = 0x88074D68;
	REX_STORE_U32(ctx.r31.u32 + 28048, ctx.r30.u32);
	// stw r30,28052(r31)
	ctx.current_instruction = 0x88074D6C;
	REX_STORE_U32(ctx.r31.u32 + 28052, ctx.r30.u32);
	// stw r20,28056(r31)
	ctx.current_instruction = 0x88074D70;
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r20.u32);
	// stw r30,28060(r31)
	ctx.current_instruction = 0x88074D74;
	REX_STORE_U32(ctx.r31.u32 + 28060, ctx.r30.u32);
	// stw r30,28064(r31)
	ctx.current_instruction = 0x88074D78;
	REX_STORE_U32(ctx.r31.u32 + 28064, ctx.r30.u32);
	// stw r30,28068(r31)
	ctx.current_instruction = 0x88074D7C;
	REX_STORE_U32(ctx.r31.u32 + 28068, ctx.r30.u32);
	// stfd f31,28072(r31)
	ctx.current_instruction = 0x88074D80;
	REX_STORE_U64(ctx.r31.u32 + 28072, ctx.f31.u64);
	// stfd f31,28080(r31)
	ctx.current_instruction = 0x88074D84;
	REX_STORE_U64(ctx.r31.u32 + 28080, ctx.f31.u64);
	// stw r30,28088(r31)
	ctx.current_instruction = 0x88074D88;
	REX_STORE_U32(ctx.r31.u32 + 28088, ctx.r30.u32);
	// stw r30,28092(r31)
	ctx.current_instruction = 0x88074D8C;
	REX_STORE_U32(ctx.r31.u32 + 28092, ctx.r30.u32);
	// stw r30,28096(r31)
	ctx.current_instruction = 0x88074D90;
	REX_STORE_U32(ctx.r31.u32 + 28096, ctx.r30.u32);
	// stw r11,28100(r31)
	ctx.current_instruction = 0x88074D94;
	REX_STORE_U32(ctx.r31.u32 + 28100, ctx.r11.u32);
	// stw r20,28104(r31)
	ctx.current_instruction = 0x88074D98;
	REX_STORE_U32(ctx.r31.u32 + 28104, ctx.r20.u32);
	// stw r20,28108(r31)
	ctx.current_instruction = 0x88074D9C;
	REX_STORE_U32(ctx.r31.u32 + 28108, ctx.r20.u32);
	// stw r30,28132(r31)
	ctx.current_instruction = 0x88074DA0;
	REX_STORE_U32(ctx.r31.u32 + 28132, ctx.r30.u32);
	// stw r30,28136(r31)
	ctx.current_instruction = 0x88074DA4;
	REX_STORE_U32(ctx.r31.u32 + 28136, ctx.r30.u32);
	// stw r30,28148(r31)
	ctx.current_instruction = 0x88074DA8;
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r30.u32);
	// stw r20,28164(r31)
	ctx.current_instruction = 0x88074DAC;
	REX_STORE_U32(ctx.r31.u32 + 28164, ctx.r20.u32);
	// stw r30,28168(r31)
	ctx.current_instruction = 0x88074DB0;
	REX_STORE_U32(ctx.r31.u32 + 28168, ctx.r30.u32);
	// stw r30,28172(r31)
	ctx.current_instruction = 0x88074DB4;
	REX_STORE_U32(ctx.r31.u32 + 28172, ctx.r30.u32);
	// stw r30,28176(r31)
	ctx.current_instruction = 0x88074DB8;
	REX_STORE_U32(ctx.r31.u32 + 28176, ctx.r30.u32);
	// stw r30,28180(r31)
	ctx.current_instruction = 0x88074DBC;
	REX_STORE_U32(ctx.r31.u32 + 28180, ctx.r30.u32);
	// stw r30,28184(r31)
	ctx.current_instruction = 0x88074DC0;
	REX_STORE_U32(ctx.r31.u32 + 28184, ctx.r30.u32);
	// stw r30,28188(r31)
	ctx.current_instruction = 0x88074DC4;
	REX_STORE_U32(ctx.r31.u32 + 28188, ctx.r30.u32);
	// stw r30,28192(r31)
	ctx.current_instruction = 0x88074DC8;
	REX_STORE_U32(ctx.r31.u32 + 28192, ctx.r30.u32);
	// stw r30,28196(r31)
	ctx.current_instruction = 0x88074DCC;
	REX_STORE_U32(ctx.r31.u32 + 28196, ctx.r30.u32);
	// stw r30,28200(r31)
	ctx.current_instruction = 0x88074DD0;
	REX_STORE_U32(ctx.r31.u32 + 28200, ctx.r30.u32);
	// stw r30,28204(r31)
	ctx.current_instruction = 0x88074DD4;
	REX_STORE_U32(ctx.r31.u32 + 28204, ctx.r30.u32);
	// stw r30,28208(r31)
	ctx.current_instruction = 0x88074DD8;
	REX_STORE_U32(ctx.r31.u32 + 28208, ctx.r30.u32);
	// stw r30,28212(r31)
	ctx.current_instruction = 0x88074DDC;
	REX_STORE_U32(ctx.r31.u32 + 28212, ctx.r30.u32);
	// stw r30,28216(r31)
	ctx.current_instruction = 0x88074DE0;
	REX_STORE_U32(ctx.r31.u32 + 28216, ctx.r30.u32);
	// stw r30,28220(r31)
	ctx.current_instruction = 0x88074DE4;
	REX_STORE_U32(ctx.r31.u32 + 28220, ctx.r30.u32);
	// stw r30,28224(r31)
	ctx.current_instruction = 0x88074DE8;
	REX_STORE_U32(ctx.r31.u32 + 28224, ctx.r30.u32);
	// stw r30,28228(r31)
	ctx.current_instruction = 0x88074DEC;
	REX_STORE_U32(ctx.r31.u32 + 28228, ctx.r30.u32);
	// stw r30,28416(r31)
	ctx.current_instruction = 0x88074DF0;
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r30.u32);
	// stw r30,28424(r31)
	ctx.current_instruction = 0x88074DF4;
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r30.u32);
	// stw r30,28428(r31)
	ctx.current_instruction = 0x88074DF8;
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r30.u32);
	// stw r20,28488(r31)
	ctx.current_instruction = 0x88074DFC;
	REX_STORE_U32(ctx.r31.u32 + 28488, ctx.r20.u32);
	// stw r30,28492(r31)
	ctx.current_instruction = 0x88074E00;
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r30.u32);
	// stw r20,28496(r31)
	ctx.current_instruction = 0x88074E04;
	REX_STORE_U32(ctx.r31.u32 + 28496, ctx.r20.u32);
	// stw r30,28500(r31)
	ctx.current_instruction = 0x88074E08;
	REX_STORE_U32(ctx.r31.u32 + 28500, ctx.r30.u32);
	// stw r30,28504(r31)
	ctx.current_instruction = 0x88074E0C;
	REX_STORE_U32(ctx.r31.u32 + 28504, ctx.r30.u32);
	// stw r20,28508(r31)
	ctx.current_instruction = 0x88074E10;
	REX_STORE_U32(ctx.r31.u32 + 28508, ctx.r20.u32);
	// stw r30,28512(r31)
	ctx.current_instruction = 0x88074E14;
	REX_STORE_U32(ctx.r31.u32 + 28512, ctx.r30.u32);
	// stw r16,28516(r31)
	ctx.current_instruction = 0x88074E18;
	REX_STORE_U32(ctx.r31.u32 + 28516, ctx.r16.u32);
	// stw r30,28520(r31)
	ctx.current_instruction = 0x88074E1C;
	REX_STORE_U32(ctx.r31.u32 + 28520, ctx.r30.u32);
	// stw r30,28524(r31)
	ctx.current_instruction = 0x88074E20;
	REX_STORE_U32(ctx.r31.u32 + 28524, ctx.r30.u32);
	// stw r30,28528(r31)
	ctx.current_instruction = 0x88074E24;
	REX_STORE_U32(ctx.r31.u32 + 28528, ctx.r30.u32);
	// stw r30,28532(r31)
	ctx.current_instruction = 0x88074E28;
	REX_STORE_U32(ctx.r31.u32 + 28532, ctx.r30.u32);
	// stw r30,28536(r31)
	ctx.current_instruction = 0x88074E2C;
	REX_STORE_U32(ctx.r31.u32 + 28536, ctx.r30.u32);
	// stw r30,28540(r31)
	ctx.current_instruction = 0x88074E30;
	REX_STORE_U32(ctx.r31.u32 + 28540, ctx.r30.u32);
	// stw r30,28552(r31)
	ctx.current_instruction = 0x88074E34;
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r30.u32);
	// stw r30,28556(r31)
	ctx.current_instruction = 0x88074E38;
	REX_STORE_U32(ctx.r31.u32 + 28556, ctx.r30.u32);
	// stw r30,28560(r31)
	ctx.current_instruction = 0x88074E3C;
	REX_STORE_U32(ctx.r31.u32 + 28560, ctx.r30.u32);
	// stw r30,28564(r31)
	ctx.current_instruction = 0x88074E40;
	REX_STORE_U32(ctx.r31.u32 + 28564, ctx.r30.u32);
	// stw r30,28568(r31)
	ctx.current_instruction = 0x88074E44;
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r30.u32);
	// stw r30,30220(r31)
	ctx.current_instruction = 0x88074E48;
	REX_STORE_U32(ctx.r31.u32 + 30220, ctx.r30.u32);
	// stw r30,30224(r31)
	ctx.current_instruction = 0x88074E4C;
	REX_STORE_U32(ctx.r31.u32 + 30224, ctx.r30.u32);
	// stw r30,30228(r31)
	ctx.current_instruction = 0x88074E50;
	REX_STORE_U32(ctx.r31.u32 + 30228, ctx.r30.u32);
	// stw r30,30304(r31)
	ctx.current_instruction = 0x88074E54;
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r30.u32);
	// bl 0x880fc800
	ctx.lr = 0x88074E5C;
	sub_880FC800(ctx, base);
loc_88074E5C:
	// addi r3,r31,30344
	ctx.r3.s64 = ctx.r31.s64 + 30344;
	// bl 0x880fc818
	ctx.lr = 0x88074E64;
	sub_880FC818(ctx, base);
loc_88074E64:
	// lwz r11,788(r1)
	ctx.current_instruction = 0x88074E64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// stw r30,30396(r31)
	ctx.current_instruction = 0x88074E68;
	REX_STORE_U32(ctx.r31.u32 + 30396, ctx.r30.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r30,30400(r31)
	ctx.current_instruction = 0x88074E70;
	REX_STORE_U32(ctx.r31.u32 + 30400, ctx.r30.u32);
	// li r5,5000
	ctx.r5.s64 = 5000;
	// stw r30,30404(r31)
	ctx.current_instruction = 0x88074E78;
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r30.u32);
	// stw r11,30408(r31)
	ctx.current_instruction = 0x88074E7C;
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r11.u32);
	// stw r11,30412(r31)
	ctx.current_instruction = 0x88074E80;
	REX_STORE_U32(ctx.r31.u32 + 30412, ctx.r11.u32);
	// stw r30,30416(r31)
	ctx.current_instruction = 0x88074E84;
	REX_STORE_U32(ctx.r31.u32 + 30416, ctx.r30.u32);
	// stw r30,30420(r31)
	ctx.current_instruction = 0x88074E88;
	REX_STORE_U32(ctx.r31.u32 + 30420, ctx.r30.u32);
	// stw r30,30424(r31)
	ctx.current_instruction = 0x88074E8C;
	REX_STORE_U32(ctx.r31.u32 + 30424, ctx.r30.u32);
	// stw r20,30428(r31)
	ctx.current_instruction = 0x88074E90;
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// stfd f31,30440(r31)
	ctx.current_instruction = 0x88074E94;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f31.u64);
	// stfd f31,30448(r31)
	ctx.current_instruction = 0x88074E98;
	REX_STORE_U64(ctx.r31.u32 + 30448, ctx.f31.u64);
	// stfd f31,30456(r31)
	ctx.current_instruction = 0x88074E9C;
	REX_STORE_U64(ctx.r31.u32 + 30456, ctx.f31.u64);
	// stfd f31,30464(r31)
	ctx.current_instruction = 0x88074EA0;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f31.u64);
	// stfd f31,30472(r31)
	ctx.current_instruction = 0x88074EA4;
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f31.u64);
	// stw r6,30480(r31)
	ctx.current_instruction = 0x88074EA8;
	REX_STORE_U32(ctx.r31.u32 + 30480, ctx.r6.u32);
	// stfd f31,30488(r31)
	ctx.current_instruction = 0x88074EAC;
	REX_STORE_U64(ctx.r31.u32 + 30488, ctx.f31.u64);
	// stfd f31,30496(r31)
	ctx.current_instruction = 0x88074EB0;
	REX_STORE_U64(ctx.r31.u32 + 30496, ctx.f31.u64);
	// stfd f31,30504(r31)
	ctx.current_instruction = 0x88074EB4;
	REX_STORE_U64(ctx.r31.u32 + 30504, ctx.f31.u64);
	// stw r30,30512(r31)
	ctx.current_instruction = 0x88074EB8;
	REX_STORE_U32(ctx.r31.u32 + 30512, ctx.r30.u32);
	// stw r20,30516(r31)
	ctx.current_instruction = 0x88074EBC;
	REX_STORE_U32(ctx.r31.u32 + 30516, ctx.r20.u32);
	// std r30,30520(r31)
	ctx.current_instruction = 0x88074EC0;
	REX_STORE_U64(ctx.r31.u32 + 30520, ctx.r30.u64);
	// std r30,30528(r31)
	ctx.current_instruction = 0x88074EC4;
	REX_STORE_U64(ctx.r31.u32 + 30528, ctx.r30.u64);
	// std r30,30536(r31)
	ctx.current_instruction = 0x88074EC8;
	REX_STORE_U64(ctx.r31.u32 + 30536, ctx.r30.u64);
	// stw r20,30544(r31)
	ctx.current_instruction = 0x88074ECC;
	REX_STORE_U32(ctx.r31.u32 + 30544, ctx.r20.u32);
	// std r5,30552(r31)
	ctx.current_instruction = 0x88074ED0;
	REX_STORE_U64(ctx.r31.u32 + 30552, ctx.r5.u64);
	// stw r30,30584(r31)
	ctx.current_instruction = 0x88074ED4;
	REX_STORE_U32(ctx.r31.u32 + 30584, ctx.r30.u32);
	// stw r20,30588(r31)
	ctx.current_instruction = 0x88074ED8;
	REX_STORE_U32(ctx.r31.u32 + 30588, ctx.r20.u32);
	// stw r30,30592(r31)
	ctx.current_instruction = 0x88074EDC;
	REX_STORE_U32(ctx.r31.u32 + 30592, ctx.r30.u32);
	// stw r30,30596(r31)
	ctx.current_instruction = 0x88074EE0;
	REX_STORE_U32(ctx.r31.u32 + 30596, ctx.r30.u32);
	// stw r30,30864(r31)
	ctx.current_instruction = 0x88074EE4;
	REX_STORE_U32(ctx.r31.u32 + 30864, ctx.r30.u32);
	// stw r30,30868(r31)
	ctx.current_instruction = 0x88074EE8;
	REX_STORE_U32(ctx.r31.u32 + 30868, ctx.r30.u32);
	// stw r30,30872(r31)
	ctx.current_instruction = 0x88074EEC;
	REX_STORE_U32(ctx.r31.u32 + 30872, ctx.r30.u32);
	// stw r30,30876(r31)
	ctx.current_instruction = 0x88074EF0;
	REX_STORE_U32(ctx.r31.u32 + 30876, ctx.r30.u32);
	// stw r30,30880(r31)
	ctx.current_instruction = 0x88074EF4;
	REX_STORE_U32(ctx.r31.u32 + 30880, ctx.r30.u32);
	// stw r30,30884(r31)
	ctx.current_instruction = 0x88074EF8;
	REX_STORE_U32(ctx.r31.u32 + 30884, ctx.r30.u32);
	// stw r30,30888(r31)
	ctx.current_instruction = 0x88074EFC;
	REX_STORE_U32(ctx.r31.u32 + 30888, ctx.r30.u32);
	// stw r30,30892(r31)
	ctx.current_instruction = 0x88074F00;
	REX_STORE_U32(ctx.r31.u32 + 30892, ctx.r30.u32);
	// stw r30,30896(r31)
	ctx.current_instruction = 0x88074F04;
	REX_STORE_U32(ctx.r31.u32 + 30896, ctx.r30.u32);
	// stw r30,30900(r31)
	ctx.current_instruction = 0x88074F08;
	REX_STORE_U32(ctx.r31.u32 + 30900, ctx.r30.u32);
	// stw r30,30904(r31)
	ctx.current_instruction = 0x88074F0C;
	REX_STORE_U32(ctx.r31.u32 + 30904, ctx.r30.u32);
	// stw r30,30908(r31)
	ctx.current_instruction = 0x88074F10;
	REX_STORE_U32(ctx.r31.u32 + 30908, ctx.r30.u32);
	// stw r30,30912(r31)
	ctx.current_instruction = 0x88074F14;
	REX_STORE_U32(ctx.r31.u32 + 30912, ctx.r30.u32);
	// stw r30,30916(r31)
	ctx.current_instruction = 0x88074F18;
	REX_STORE_U32(ctx.r31.u32 + 30916, ctx.r30.u32);
	// stw r16,30920(r31)
	ctx.current_instruction = 0x88074F1C;
	REX_STORE_U32(ctx.r31.u32 + 30920, ctx.r16.u32);
	// stw r16,30924(r31)
	ctx.current_instruction = 0x88074F20;
	REX_STORE_U32(ctx.r31.u32 + 30924, ctx.r16.u32);
	// stw r16,30928(r31)
	ctx.current_instruction = 0x88074F24;
	REX_STORE_U32(ctx.r31.u32 + 30928, ctx.r16.u32);
	// stw r16,30932(r31)
	ctx.current_instruction = 0x88074F28;
	REX_STORE_U32(ctx.r31.u32 + 30932, ctx.r16.u32);
	// stw r30,30936(r31)
	ctx.current_instruction = 0x88074F2C;
	REX_STORE_U32(ctx.r31.u32 + 30936, ctx.r30.u32);
	// stw r30,30940(r31)
	ctx.current_instruction = 0x88074F30;
	REX_STORE_U32(ctx.r31.u32 + 30940, ctx.r30.u32);
	// stw r30,30944(r31)
	ctx.current_instruction = 0x88074F34;
	REX_STORE_U32(ctx.r31.u32 + 30944, ctx.r30.u32);
	// stw r30,30948(r31)
	ctx.current_instruction = 0x88074F38;
	REX_STORE_U32(ctx.r31.u32 + 30948, ctx.r30.u32);
	// stw r30,30952(r31)
	ctx.current_instruction = 0x88074F3C;
	REX_STORE_U32(ctx.r31.u32 + 30952, ctx.r30.u32);
	// stw r30,30956(r31)
	ctx.current_instruction = 0x88074F40;
	REX_STORE_U32(ctx.r31.u32 + 30956, ctx.r30.u32);
	// stw r16,30960(r31)
	ctx.current_instruction = 0x88074F44;
	REX_STORE_U32(ctx.r31.u32 + 30960, ctx.r16.u32);
	// stw r16,30964(r31)
	ctx.current_instruction = 0x88074F48;
	REX_STORE_U32(ctx.r31.u32 + 30964, ctx.r16.u32);
	// stw r16,30968(r31)
	ctx.current_instruction = 0x88074F4C;
	REX_STORE_U32(ctx.r31.u32 + 30968, ctx.r16.u32);
	// stw r16,30972(r31)
	ctx.current_instruction = 0x88074F50;
	REX_STORE_U32(ctx.r31.u32 + 30972, ctx.r16.u32);
	// stw r29,30976(r31)
	ctx.current_instruction = 0x88074F54;
	REX_STORE_U32(ctx.r31.u32 + 30976, ctx.r29.u32);
	// stw r29,30980(r31)
	ctx.current_instruction = 0x88074F58;
	REX_STORE_U32(ctx.r31.u32 + 30980, ctx.r29.u32);
	// stw r29,30984(r31)
	ctx.current_instruction = 0x88074F5C;
	REX_STORE_U32(ctx.r31.u32 + 30984, ctx.r29.u32);
	// stw r29,30988(r31)
	ctx.current_instruction = 0x88074F60;
	REX_STORE_U32(ctx.r31.u32 + 30988, ctx.r29.u32);
	// stw r29,30992(r31)
	ctx.current_instruction = 0x88074F64;
	REX_STORE_U32(ctx.r31.u32 + 30992, ctx.r29.u32);
	// stw r30,30996(r31)
	ctx.current_instruction = 0x88074F68;
	REX_STORE_U32(ctx.r31.u32 + 30996, ctx.r30.u32);
	// stw r29,31000(r31)
	ctx.current_instruction = 0x88074F6C;
	REX_STORE_U32(ctx.r31.u32 + 31000, ctx.r29.u32);
	// stw r29,31004(r31)
	ctx.current_instruction = 0x88074F70;
	REX_STORE_U32(ctx.r31.u32 + 31004, ctx.r29.u32);
	// stw r29,31008(r31)
	ctx.current_instruction = 0x88074F74;
	REX_STORE_U32(ctx.r31.u32 + 31008, ctx.r29.u32);
	// stw r29,31012(r31)
	ctx.current_instruction = 0x88074F78;
	REX_STORE_U32(ctx.r31.u32 + 31012, ctx.r29.u32);
	// stw r29,31016(r31)
	ctx.current_instruction = 0x88074F7C;
	REX_STORE_U32(ctx.r31.u32 + 31016, ctx.r29.u32);
	// stw r29,31020(r31)
	ctx.current_instruction = 0x88074F80;
	REX_STORE_U32(ctx.r31.u32 + 31020, ctx.r29.u32);
	// stw r20,31024(r31)
	ctx.current_instruction = 0x88074F84;
	REX_STORE_U32(ctx.r31.u32 + 31024, ctx.r20.u32);
	// stw r29,31028(r31)
	ctx.current_instruction = 0x88074F88;
	REX_STORE_U32(ctx.r31.u32 + 31028, ctx.r29.u32);
	// stw r29,31032(r31)
	ctx.current_instruction = 0x88074F8C;
	REX_STORE_U32(ctx.r31.u32 + 31032, ctx.r29.u32);
	// stw r30,31036(r31)
	ctx.current_instruction = 0x88074F90;
	REX_STORE_U32(ctx.r31.u32 + 31036, ctx.r30.u32);
	// stw r30,31040(r31)
	ctx.current_instruction = 0x88074F94;
	REX_STORE_U32(ctx.r31.u32 + 31040, ctx.r30.u32);
	// stw r29,31044(r31)
	ctx.current_instruction = 0x88074F98;
	REX_STORE_U32(ctx.r31.u32 + 31044, ctx.r29.u32);
	// stw r16,31048(r31)
	ctx.current_instruction = 0x88074F9C;
	REX_STORE_U32(ctx.r31.u32 + 31048, ctx.r16.u32);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// stw r16,31052(r31)
	ctx.current_instruction = 0x88074FA4;
	REX_STORE_U32(ctx.r31.u32 + 31052, ctx.r16.u32);
	// addi r11,r31,552
	ctx.r11.s64 = ctx.r31.s64 + 552;
	// stw r16,31056(r31)
	ctx.current_instruction = 0x88074FAC;
	REX_STORE_U32(ctx.r31.u32 + 31056, ctx.r16.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r16,31060(r31)
	ctx.current_instruction = 0x88074FB4;
	REX_STORE_U32(ctx.r31.u32 + 31060, ctx.r16.u32);
	// stw r16,31064(r31)
	ctx.current_instruction = 0x88074FB8;
	REX_STORE_U32(ctx.r31.u32 + 31064, ctx.r16.u32);
	// stw r16,31068(r31)
	ctx.current_instruction = 0x88074FBC;
	REX_STORE_U32(ctx.r31.u32 + 31068, ctx.r16.u32);
	// lfd f28,8624(r4)
	ctx.current_instruction = 0x88074FC0;
	ctx.f28.u64 = REX_LOAD_U64(ctx.r4.u32 + 8624);
	// stw r16,31072(r31)
	ctx.current_instruction = 0x88074FC4;
	REX_STORE_U32(ctx.r31.u32 + 31072, ctx.r16.u32);
	// stw r16,31076(r31)
	ctx.current_instruction = 0x88074FC8;
	REX_STORE_U32(ctx.r31.u32 + 31076, ctx.r16.u32);
	// stw r29,31080(r31)
	ctx.current_instruction = 0x88074FCC;
	REX_STORE_U32(ctx.r31.u32 + 31080, ctx.r29.u32);
	// stw r30,31084(r31)
	ctx.current_instruction = 0x88074FD0;
	REX_STORE_U32(ctx.r31.u32 + 31084, ctx.r30.u32);
	// stw r30,31092(r31)
	ctx.current_instruction = 0x88074FD4;
	REX_STORE_U32(ctx.r31.u32 + 31092, ctx.r30.u32);
	// stw r30,31096(r31)
	ctx.current_instruction = 0x88074FD8;
	REX_STORE_U32(ctx.r31.u32 + 31096, ctx.r30.u32);
	// stw r30,31100(r31)
	ctx.current_instruction = 0x88074FDC;
	REX_STORE_U32(ctx.r31.u32 + 31100, ctx.r30.u32);
	// stw r30,31104(r31)
	ctx.current_instruction = 0x88074FE0;
	REX_STORE_U32(ctx.r31.u32 + 31104, ctx.r30.u32);
	// stw r30,31108(r31)
	ctx.current_instruction = 0x88074FE4;
	REX_STORE_U32(ctx.r31.u32 + 31108, ctx.r30.u32);
	// stw r20,31112(r31)
	ctx.current_instruction = 0x88074FE8;
	REX_STORE_U32(ctx.r31.u32 + 31112, ctx.r20.u32);
	// stw r30,31116(r31)
	ctx.current_instruction = 0x88074FEC;
	REX_STORE_U32(ctx.r31.u32 + 31116, ctx.r30.u32);
	// stw r30,31472(r31)
	ctx.current_instruction = 0x88074FF0;
	REX_STORE_U32(ctx.r31.u32 + 31472, ctx.r30.u32);
	// stw r30,31476(r31)
	ctx.current_instruction = 0x88074FF4;
	REX_STORE_U32(ctx.r31.u32 + 31476, ctx.r30.u32);
	// stw r30,31480(r31)
	ctx.current_instruction = 0x88074FF8;
	REX_STORE_U32(ctx.r31.u32 + 31480, ctx.r30.u32);
	// stw r30,31484(r31)
	ctx.current_instruction = 0x88074FFC;
	REX_STORE_U32(ctx.r31.u32 + 31484, ctx.r30.u32);
	// stw r30,31488(r31)
	ctx.current_instruction = 0x88075000;
	REX_STORE_U32(ctx.r31.u32 + 31488, ctx.r30.u32);
	// stw r30,31492(r31)
	ctx.current_instruction = 0x88075004;
	REX_STORE_U32(ctx.r31.u32 + 31492, ctx.r30.u32);
	// stw r30,31496(r31)
	ctx.current_instruction = 0x88075008;
	REX_STORE_U32(ctx.r31.u32 + 31496, ctx.r30.u32);
	// stw r30,31500(r31)
	ctx.current_instruction = 0x8807500C;
	REX_STORE_U32(ctx.r31.u32 + 31500, ctx.r30.u32);
	// stw r30,31504(r31)
	ctx.current_instruction = 0x88075010;
	REX_STORE_U32(ctx.r31.u32 + 31504, ctx.r30.u32);
	// stfd f28,31512(r31)
	ctx.current_instruction = 0x88075014;
	REX_STORE_U64(ctx.r31.u32 + 31512, ctx.f28.u64);
	// stfd f28,31520(r31)
	ctx.current_instruction = 0x88075018;
	REX_STORE_U64(ctx.r31.u32 + 31520, ctx.f28.u64);
	// stw r30,31532(r31)
	ctx.current_instruction = 0x8807501C;
	REX_STORE_U32(ctx.r31.u32 + 31532, ctx.r30.u32);
	// stb r30,31536(r31)
	ctx.current_instruction = 0x88075020;
	REX_STORE_U8(ctx.r31.u32 + 31536, ctx.r30.u8);
	// stb r30,31537(r31)
	ctx.current_instruction = 0x88075024;
	REX_STORE_U8(ctx.r31.u32 + 31537, ctx.r30.u8);
	// stb r30,31538(r31)
	ctx.current_instruction = 0x88075028;
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r30.u8);
	// stb r30,31539(r31)
	ctx.current_instruction = 0x8807502C;
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r30.u8);
	// stw r30,31540(r31)
	ctx.current_instruction = 0x88075030;
	REX_STORE_U32(ctx.r31.u32 + 31540, ctx.r30.u32);
	// stw r30,31544(r31)
	ctx.current_instruction = 0x88075034;
	REX_STORE_U32(ctx.r31.u32 + 31544, ctx.r30.u32);
	// stw r30,31548(r31)
	ctx.current_instruction = 0x88075038;
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,31552(r31)
	ctx.current_instruction = 0x8807503C;
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r30.u32);
	// stw r20,30432(r31)
	ctx.current_instruction = 0x88075040;
	REX_STORE_U32(ctx.r31.u32 + 30432, ctx.r20.u32);
	// stw r30,548(r31)
	ctx.current_instruction = 0x88075044;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,32(r31)
	ctx.current_instruction = 0x88075048;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,552(r31)
	ctx.current_instruction = 0x8807504C;
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	ctx.current_instruction = 0x88075050;
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	ctx.current_instruction = 0x88075054;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	ctx.current_instruction = 0x88075058;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// beq cr6,0x88075090
	if (ctx.cr6.eq) goto loc_88075090;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88075060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8176(r31)
	ctx.current_instruction = 0x88075064;
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r11.u32);
	// lwz r10,124(r28)
	ctx.current_instruction = 0x88075068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807507c
	if (ctx.cr6.eq) goto loc_8807507C;
	// lwz r11,8(r28)
	ctx.current_instruction = 0x88075074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,19212(r31)
	ctx.current_instruction = 0x88075078;
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r11.u32);
loc_8807507C:
	// lwz r11,196(r28)
	ctx.current_instruction = 0x8807507C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88075090
	if (ctx.cr6.eq) goto loc_88075090;
	// lwz r11,88(r28)
	ctx.current_instruction = 0x88075088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// stw r11,1272(r31)
	ctx.current_instruction = 0x8807508C;
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
loc_88075090:
	// lwz r11,8176(r31)
	ctx.current_instruction = 0x88075090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880750b4
	if (ctx.cr6.eq) goto loc_880750B4;
	// lwz r11,8180(r31)
	ctx.current_instruction = 0x8807509C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,120(r11)
	ctx.current_instruction = 0x880750A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880750b4
	if (ctx.cr6.eq) goto loc_880750B4;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880750AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,21156(r31)
	ctx.current_instruction = 0x880750B0;
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r11.u32);
loc_880750B4:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x880750c4
	if (ctx.cr6.eq) goto loc_880750C4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880750d0
	if (!ctx.cr6.eq) goto loc_880750D0;
loc_880750C4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x880750d0
	if (ctx.cr6.gt) goto loc_880750D0;
	// stfd f29,7896(r31)
	ctx.current_instruction = 0x880750CC;
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f29.u64);
loc_880750D0:
	// stw r30,860(r31)
	ctx.current_instruction = 0x880750D0;
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,856(r31)
	ctx.current_instruction = 0x880750D4;
	REX_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880750D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// stw r30,840(r31)
	ctx.current_instruction = 0x880750DC;
	REX_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r30,844(r31)
	ctx.current_instruction = 0x880750E0;
	REX_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,864(r31)
	ctx.current_instruction = 0x880750E8;
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// lwz r26,588(r1)
	ctx.current_instruction = 0x880750EC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// stw r30,6748(r31)
	ctx.current_instruction = 0x880750F0;
	REX_STORE_U32(ctx.r31.u32 + 6748, ctx.r30.u32);
	// beq cr6,0x88075100
	if (ctx.cr6.eq) goto loc_88075100;
	// stw r11,808(r31)
	ctx.current_instruction = 0x880750F8;
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// b 0x88075104
	goto loc_88075104;
loc_88075100:
	// stw r26,808(r31)
	ctx.current_instruction = 0x88075100;
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r26.u32);
loc_88075104:
	// lwz r11,804(r1)
	ctx.current_instruction = 0x88075104;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r27,596(r1)
	ctx.current_instruction = 0x88075108;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807511c
	if (ctx.cr6.eq) goto loc_8807511C;
	// stw r11,812(r31)
	ctx.current_instruction = 0x88075114;
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// b 0x88075120
	goto loc_88075120;
loc_8807511C:
	// stw r27,812(r31)
	ctx.current_instruction = 0x8807511C;
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r27.u32);
loc_88075120:
	// lwz r17,572(r1)
	ctx.current_instruction = 0x88075120;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r17,4(r31)
	ctx.current_instruction = 0x88075124;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// lwz r11,30432(r31)
	ctx.current_instruction = 0x88075128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075144
	if (!ctx.cr6.eq) goto loc_88075144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807df68
	ctx.lr = 0x88075144;
	sub_8807DF68(ctx, base);
loc_88075144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c04f0
	ctx.lr = 0x8807514C;
	sub_880C04F0(ctx, base);
loc_8807514C:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807514C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88075160
	if (!ctx.cr6.eq) goto loc_88075160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880823d0
	ctx.lr = 0x88075160;
	sub_880823D0(ctx, base);
loc_88075160:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807df18
	ctx.lr = 0x88075170;
	sub_8807DF18(ctx, base);
loc_88075170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807de70
	ctx.lr = 0x88075178;
	sub_8807DE70(ctx, base);
loc_88075178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807de90
	ctx.lr = 0x88075180;
	sub_8807DE90(ctx, base);
loc_88075180:
	// li r5,3872
	ctx.r5.s64 = 3872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// bl 0x88052d90
	ctx.lr = 0x88075190;
	sub_88052D90(ctx, base);
loc_88075190:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88075190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880751dc
	if (!ctx.cr6.eq) goto loc_880751DC;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807519C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880751c0
	if (!ctx.cr6.eq) goto loc_880751C0;
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x880751A8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x880751c0
	if (ctx.cr6.eq) goto loc_880751C0;
	// lfd f0,7888(r31)
	ctx.current_instruction = 0x880751B4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x880751dc
	if (!ctx.cr6.eq) goto loc_880751DC;
loc_880751C0:
	// lwz r11,748(r1)
	ctx.current_instruction = 0x880751C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,0(r11)
	ctx.current_instruction = 0x880751C8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880751D8;
	__restfpr_27(ctx, base);
loc_880751D8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880751DC:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880751DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88075218
	if (!ctx.cr6.eq) goto loc_88075218;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	ctx.current_instruction = 0x880751EC;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r20,30408(r31)
	ctx.current_instruction = 0x880751F0;
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r20.u32);
	// lwz r10,30432(r31)
	ctx.current_instruction = 0x880751F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807520c
	if (!ctx.cr6.eq) goto loc_8807520C;
	// stw r20,31548(r31)
	ctx.current_instruction = 0x88075200;
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r20.u32);
	// stw r20,30428(r31)
	ctx.current_instruction = 0x88075204;
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// b 0x88075214
	goto loc_88075214;
loc_8807520C:
	// stw r30,31548(r31)
	ctx.current_instruction = 0x8807520C;
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,30428(r31)
	ctx.current_instruction = 0x88075210;
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r30.u32);
loc_88075214:
	// stw r20,1620(r31)
	ctx.current_instruction = 0x88075214;
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r20.u32);
loc_88075218:
	// lwz r11,8108(r31)
	ctx.current_instruction = 0x88075218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88075228
	if (!ctx.cr6.eq) goto loc_88075228;
	// stw r20,8108(r31)
	ctx.current_instruction = 0x88075224;
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r20.u32);
loc_88075228:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88075228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,756(r1)
	ctx.current_instruction = 0x8807522C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,700(r1)
	ctx.current_instruction = 0x88075234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// bne cr6,0x880752a0
	if (!ctx.cr6.eq) goto loc_880752A0;
	// lwz r10,716(r1)
	ctx.current_instruction = 0x8807523C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r11,28492(r31)
	ctx.current_instruction = 0x88075240;
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	ctx.current_instruction = 0x88075244;
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
	// stw r20,2572(r31)
	ctx.current_instruction = 0x88075248;
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r20.u32);
	// stw r10,2824(r31)
	ctx.current_instruction = 0x8807524C;
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// lwz r9,30408(r31)
	ctx.current_instruction = 0x88075250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88075284
	if (ctx.cr6.eq) goto loc_88075284;
	// lwz r11,30432(r31)
	ctx.current_instruction = 0x8807525C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075284
	if (!ctx.cr6.eq) goto loc_88075284;
	// lwz r28,740(r1)
	ctx.current_instruction = 0x88075268;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f9ee8
	ctx.lr = 0x88075280;
	sub_880F9EE8(ctx, base);
loc_88075280:
	// b 0x880752dc
	goto loc_880752DC;
loc_88075284:
	// lwz r28,740(r1)
	ctx.current_instruction = 0x88075284;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806faf0
	ctx.lr = 0x8807529C;
	sub_8806FAF0(ctx, base);
loc_8807529C:
	// b 0x880752dc
	goto loc_880752DC;
loc_880752A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880752c4
	if (ctx.cr6.eq) goto loc_880752C4;
	// lwz r11,748(r1)
	ctx.current_instruction = 0x880752AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// stw r24,0(r11)
	ctx.current_instruction = 0x880752B0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880752C0;
	__restfpr_27(ctx, base);
loc_880752C0:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880752C4:
	// lwz r11,716(r1)
	ctx.current_instruction = 0x880752C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r28,740(r1)
	ctx.current_instruction = 0x880752CC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,2824(r31)
	ctx.current_instruction = 0x880752D4;
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x8806f8c8
	ctx.lr = 0x880752DC;
	sub_8806F8C8(ctx, base);
loc_880752DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88075328
	if (ctx.cr6.eq) goto loc_88075328;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880752E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x88075314
	if (!ctx.cr6.eq) goto loc_88075314;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880752F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,2824(r31)
	ctx.current_instruction = 0x880752F4;
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880752F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88075328
	if (!ctx.cr6.eq) goto loc_88075328;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x88075304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,2124(r31)
	ctx.current_instruction = 0x88075308;
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r31)
	ctx.current_instruction = 0x8807530C;
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// b 0x88075328
	goto loc_88075328;
loc_88075314:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88075328
	if (!ctx.cr6.eq) goto loc_88075328;
	// lwz r11,248(r1)
	ctx.current_instruction = 0x8807531C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,28492(r31)
	ctx.current_instruction = 0x88075320;
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	ctx.current_instruction = 0x88075324;
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
loc_88075328:
	// lwz r11,708(r1)
	ctx.current_instruction = 0x88075328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,2176(r31)
	ctx.current_instruction = 0x88075330;
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// lfd f0,9672(r10)
	ctx.current_instruction = 0x88075334;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 9672);
	// stw r26,796(r31)
	ctx.current_instruction = 0x88075338;
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r26.u32);
	// stw r27,800(r31)
	ctx.current_instruction = 0x8807533C;
	REX_STORE_U32(ctx.r31.u32 + 800, ctx.r27.u32);
	// lwz r9,796(r31)
	ctx.current_instruction = 0x88075340;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// stw r8,804(r31)
	ctx.current_instruction = 0x88075348;
	REX_STORE_U32(ctx.r31.u32 + 804, ctx.r8.u32);
	// lfd f13,7688(r31)
	ctx.current_instruction = 0x8807534C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8807535c
	if (!ctx.cr6.lt) goto loc_8807535C;
	// stfd f0,7688(r31)
	ctx.current_instruction = 0x88075358;
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f0.u64);
loc_8807535C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,7888(r31)
	ctx.current_instruction = 0x88075360;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lwz r22,644(r1)
	ctx.current_instruction = 0x88075364;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lfd f0,12400(r11)
	ctx.current_instruction = 0x88075368;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12400);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x88075380
	if (!ctx.cr6.gt) goto loc_88075380;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x88075380
	if (ctx.cr6.eq) goto loc_88075380;
	// stfd f0,7888(r31)
	ctx.current_instruction = 0x8807537C;
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_88075380:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,7596(r31)
	ctx.current_instruction = 0x88075384;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f29,632(r1)
	ctx.current_instruction = 0x8807538C;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lfd f27,12392(r11)
	ctx.current_instruction = 0x88075394;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 12392);
	// lfd f30,12000(r9)
	ctx.current_instruction = 0x88075398;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 12000);
	// bne cr6,0x8807546c
	if (!ctx.cr6.eq) goto loc_8807546C;
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x880753A0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x880753c8
	if (!ctx.cr6.gt) goto loc_880753C8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,7888(r31)
	ctx.current_instruction = 0x880753B0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,12384(r11)
	ctx.current_instruction = 0x880753B4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12384);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x880753c8
	if (ctx.cr6.gt) goto loc_880753C8;
	// stw r30,7188(r31)
	ctx.current_instruction = 0x880753C4;
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_880753C8:
	// fcfid f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f29.s64);
	// lfd f12,7688(r31)
	ctx.current_instruction = 0x880753CC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12096(r11)
	ctx.current_instruction = 0x880753D4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// fmul f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x880753ec
	if (!ctx.cr6.lt) goto loc_880753EC;
	// stw r30,7188(r31)
	ctx.current_instruction = 0x880753E8;
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_880753EC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880753EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lfd f0,7888(r31)
	ctx.current_instruction = 0x880753F0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880753F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// beq cr6,0x88075430
	if (ctx.cr6.eq) goto loc_88075430;
	// lwz r9,800(r31)
	ctx.current_instruction = 0x88075400;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fmul f13,f0,f27
	ctx.f13.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfd f0,12376(r10)
	ctx.current_instruction = 0x88075410;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12376);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	ctx.current_instruction = 0x88075418;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f12,144(r1)
	ctx.current_instruction = 0x8807541C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f11,f0,f28
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f28.f64);
	// fdiv f0,f13,f10
	ctx.f0.f64 = ctx.f13.f64 / ctx.f10.f64;
	// b 0x88075458
	goto loc_88075458;
loc_88075430:
	// lwz r10,800(r31)
	ctx.current_instruction = 0x88075430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lfd f13,7688(r31)
	ctx.current_instruction = 0x88075434;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fmul f12,f0,f27
	ctx.f12.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x88075444;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x88075448;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmadd f9,f10,f13,f28
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f28.f64);
	// fdiv f0,f12,f9
	ctx.f0.f64 = ctx.f12.f64 / ctx.f9.f64;
loc_88075458:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12368(r11)
	ctx.current_instruction = 0x8807545C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12368);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807546c
	if (!ctx.cr6.lt) goto loc_8807546C;
	// stw r30,7188(r31)
	ctx.current_instruction = 0x88075468;
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_8807546C:
	// lwz r11,7188(r31)
	ctx.current_instruction = 0x8807546C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807547c
	if (ctx.cr6.eq) goto loc_8807547C;
	// stw r29,7188(r31)
	ctx.current_instruction = 0x88075478;
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
loc_8807547C:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807547C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88075494
	if (ctx.cr6.eq) goto loc_88075494;
	// lwz r11,7188(r31)
	ctx.current_instruction = 0x88075488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075498
	if (!ctx.cr6.eq) goto loc_88075498;
loc_88075494:
	// stw r20,30304(r31)
	ctx.current_instruction = 0x88075494;
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r20.u32);
loc_88075498:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88075498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880754b0
	if (!ctx.cr6.eq) goto loc_880754B0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12360(r11)
	ctx.current_instruction = 0x880754A8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12360);
	// stfd f0,7888(r31)
	ctx.current_instruction = 0x880754AC;
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_880754B0:
	// lwz r11,8104(r31)
	ctx.current_instruction = 0x880754B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// stw r30,152(r1)
	ctx.current_instruction = 0x880754B4;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,196(r1)
	ctx.current_instruction = 0x880754B8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,192(r1)
	ctx.current_instruction = 0x880754C0;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r16,204(r1)
	ctx.current_instruction = 0x880754C4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r16.u32);
	// stw r16,200(r1)
	ctx.current_instruction = 0x880754C8;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r16.u32);
	// stw r30,180(r1)
	ctx.current_instruction = 0x880754CC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,176(r1)
	ctx.current_instruction = 0x880754D0;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r16,188(r1)
	ctx.current_instruction = 0x880754D4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// stw r16,184(r1)
	ctx.current_instruction = 0x880754D8;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// blt cr6,0x88076d78
	if (ctx.cr6.lt) goto loc_88076D78;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x88076d78
	if (ctx.cr6.gt) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c380
	ctx.lr = 0x880754F0;
	sub_8806C380(ctx, base);
loc_880754F0:
	// stw r30,6868(r31)
	ctx.current_instruction = 0x880754F0;
	REX_STORE_U32(ctx.r31.u32 + 6868, ctx.r30.u32);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,60
	ctx.r3.s64 = 60;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075508;
	sub_88050340(ctx, base);
loc_88075508:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075530
	if (ctx.cr6.eq) goto loc_88075530;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88075510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e6920
	ctx.lr = 0x8807552C;
	sub_880E6920(ctx, base);
loc_8807552C:
	// b 0x88075534
	goto loc_88075534;
loc_88075530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075534:
	// stw r3,7868(r31)
	ctx.current_instruction = 0x88075534;
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// bl 0x880e6900
	ctx.lr = 0x88075544;
	sub_880E6900(ctx, base);
loc_88075544:
	// fcfid f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f29.s64);
	// lfd f13,7688(r31)
	ctx.current_instruction = 0x88075548;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f13,12088(r11)
	ctx.current_instruction = 0x88075554;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x88075578
	if (!ctx.cr6.gt) goto loc_88075578;
	// fmadd f0,f0,f30,f13
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	ctx.current_instruction = 0x8807556C;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.current_instruction = 0x88075570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x88075588
	goto loc_88075588;
loc_88075578:
	// fmsub f0,f0,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, -ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	ctx.current_instruction = 0x88075580;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.current_instruction = 0x88075584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_88075588:
	// lwz r4,764(r1)
	ctx.current_instruction = 0x88075588;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// stw r11,7752(r31)
	ctx.current_instruction = 0x8807558C;
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880755a0
	if (ctx.cr6.eq) goto loc_880755A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806cbe8
	ctx.lr = 0x880755A0;
	sub_8806CBE8(ctx, base);
loc_880755A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,140(r1)
	ctx.current_instruction = 0x880755A4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x880547a0
	ctx.lr = 0x880755B4;
	sub_880547A0(ctx, base);
loc_880755B4:
	// ld r29,240(r1)
	ctx.current_instruction = 0x880755B4;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// ld r28,248(r1)
	ctx.current_instruction = 0x880755B8;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r27,256(r1)
	ctx.current_instruction = 0x880755C0;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r26,264(r1)
	ctx.current_instruction = 0x880755C8;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r25,272(r1)
	ctx.current_instruction = 0x880755D0;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ld r24,280(r1)
	ctx.current_instruction = 0x880755D8;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ld r23,288(r1)
	ctx.current_instruction = 0x880755E0;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bl 0x8806c6e0
	ctx.lr = 0x880755F4;
	sub_8806C6E0(ctx, base);
loc_880755F4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x880547a0
	ctx.lr = 0x88075604;
	sub_880547A0(ctx, base);
loc_88075604:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072e70
	ctx.lr = 0x88075628;
	sub_88072E70(ctx, base);
loc_88075628:
	// stw r20,6864(r31)
	ctx.current_instruction = 0x88075628;
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r20.u32);
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x8807562C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88075690
	if (ctx.cr6.eq) goto loc_88075690;
	// lwz r11,724(r1)
	ctx.current_instruction = 0x88075638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807564c
	if (!ctx.cr6.eq) goto loc_8807564C;
	// stw r20,7228(r31)
	ctx.current_instruction = 0x88075644;
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r20.u32);
	// b 0x88075690
	goto loc_88075690;
loc_8807564C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8807565c
	if (ctx.cr6.eq) goto loc_8807565C;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_8807565C:
	// lwz r10,732(r1)
	ctx.current_instruction = 0x8807565C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// beq cr6,0x88075670
	if (ctx.cr6.eq) goto loc_88075670;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_88075670:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8807567c
	if (!ctx.cr6.eq) goto loc_8807567C;
	// stw r20,16(r31)
	ctx.current_instruction = 0x88075678;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
loc_8807567C:
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x88075690
	if (!ctx.cr6.eq) goto loc_88075690;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88075684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,16(r31)
	ctx.current_instruction = 0x8807568C;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_88075690:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x88075690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880756a4
	if (ctx.cr6.eq) goto loc_880756A4;
	// stw r30,7880(r31)
	ctx.current_instruction = 0x8807569C;
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r30.u32);
	// b 0x880756b0
	goto loc_880756B0;
loc_880756A4:
	// lwz r11,692(r1)
	ctx.current_instruction = 0x880756A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,7880(r31)
	ctx.current_instruction = 0x880756AC;
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r10.u32);
loc_880756B0:
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// lis r24,-30680
	ctx.r24.s64 = -2010644480;
	// addi r10,r11,18712
	ctx.r10.s64 = ctx.r11.s64 + 18712;
	// lis r23,-30680
	ctx.r23.s64 = -2010644480;
	// stw r10,8184(r31)
	ctx.current_instruction = 0x880756C0;
	REX_STORE_U32(ctx.r31.u32 + 8184, ctx.r10.u32);
	// stw r16,748(r31)
	ctx.current_instruction = 0x880756C4;
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r16.u32);
	// lwz r11,18412(r24)
	ctx.current_instruction = 0x880756C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880756e0
	if (!ctx.cr6.eq) goto loc_880756E0;
	// lwz r11,18416(r23)
	ctx.current_instruction = 0x880756D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880756e4
	if (ctx.cr6.eq) goto loc_880756E4;
loc_880756E0:
	// stw r30,748(r31)
	ctx.current_instruction = 0x880756E0;
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
loc_880756E4:
	// lwz r11,7752(r31)
	ctx.current_instruction = 0x880756E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880756fc
	if (!ctx.cr6.eq) goto loc_880756FC;
	// stw r20,7752(r31)
	ctx.current_instruction = 0x880756F0;
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r20.u32);
	// stw r20,19464(r31)
	ctx.current_instruction = 0x880756F4;
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r20.u32);
	// b 0x88075700
	goto loc_88075700;
loc_880756FC:
	// stw r30,19464(r31)
	ctx.current_instruction = 0x880756FC;
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r30.u32);
loc_88075700:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8807571c
	if (ctx.cr6.eq) goto loc_8807571C;
	// lwz r11,7752(r31)
	ctx.current_instruction = 0x88075708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x88075718
	if (ctx.cr6.lt) goto loc_88075718;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_88075718:
	// stw r11,7752(r31)
	ctx.current_instruction = 0x88075718;
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
loc_8807571C:
	// ld r11,632(r1)
	ctx.current_instruction = 0x8807571C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,7704(r31)
	ctx.current_instruction = 0x88075724;
	REX_STORE_U64(ctx.r31.u32 + 7704, ctx.r11.u64);
	// lfd f0,7688(r31)
	ctx.current_instruction = 0x88075728;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f27,f0
	ctx.f13.f64 = ctx.f27.f64 / ctx.f0.f64;
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,7720(r31)
	ctx.current_instruction = 0x88075734;
	REX_STORE_U64(ctx.r31.u32 + 7720, ctx.f12.u64);
	// stw r30,7872(r31)
	ctx.current_instruction = 0x88075738;
	REX_STORE_U32(ctx.r31.u32 + 7872, ctx.r30.u32);
	// bl 0x88100f30
	ctx.lr = 0x88075740;
	sub_88100F30(ctx, base);
loc_88075740:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x88050340
	ctx.lr = 0x8807574C;
	sub_88050340(ctx, base);
loc_8807574C:
	// stw r3,17536(r31)
	ctx.current_instruction = 0x8807574C;
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r3.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x88050340
	ctx.lr = 0x8807575C;
	sub_88050340(ctx, base);
loc_8807575C:
	// stw r3,17540(r31)
	ctx.current_instruction = 0x8807575C;
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r3.u32);
	// lwz r11,17536(r31)
	ctx.current_instruction = 0x88075760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88052d90
	ctx.lr = 0x88075784;
	sub_88052D90(ctx, base);
loc_88075784:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17540(r31)
	ctx.current_instruction = 0x8807578C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// bl 0x88052d90
	ctx.lr = 0x88075794;
	sub_88052D90(ctx, base);
loc_88075794:
	// lwz r11,17536(r31)
	ctx.current_instruction = 0x88075794;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// li r21,128
	ctx.r21.s64 = 128;
	// sth r21,0(r11)
	ctx.current_instruction = 0x8807579C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// lwz r10,17540(r31)
	ctx.current_instruction = 0x880757A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r21,0(r10)
	ctx.current_instruction = 0x880757A4;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r21.u16);
	// bl 0x880e2860
	ctx.lr = 0x880757AC;
	sub_880E2860(ctx, base);
loc_880757AC:
	// lis r9,-30679
	ctx.r9.s64 = -2010578944;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,-23196(r9)
	ctx.current_instruction = 0x880757B4;
	REX_STORE_U32(ctx.r9.u32 + -23196, ctx.r20.u32);
	// bl 0x880e2860
	ctx.lr = 0x880757BC;
	sub_880E2860(ctx, base);
loc_880757BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f6f8
	ctx.lr = 0x880757C4;
	sub_8806F6F8(ctx, base);
loc_880757C4:
	// lis r8,-30705
	ctx.r8.s64 = -2012282880;
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// lis r6,-30705
	ctx.r6.s64 = -2012282880;
	// addi r5,r8,-10064
	ctx.r5.s64 = ctx.r8.s64 + -10064;
	// addi r3,r7,-7880
	ctx.r3.s64 = ctx.r7.s64 + -7880;
	// addi r10,r6,-9888
	ctx.r10.s64 = ctx.r6.s64 + -9888;
	// stw r5,8084(r31)
	ctx.current_instruction = 0x880757DC;
	REX_STORE_U32(ctx.r31.u32 + 8084, ctx.r5.u32);
	// stw r3,8088(r31)
	ctx.current_instruction = 0x880757E0;
	REX_STORE_U32(ctx.r31.u32 + 8088, ctx.r3.u32);
	// lis r4,-30705
	ctx.r4.s64 = -2012282880;
	// stw r10,8092(r31)
	ctx.current_instruction = 0x880757E8;
	REX_STORE_U32(ctx.r31.u32 + 8092, ctx.r10.u32);
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r9,r4,-9096
	ctx.r9.s64 = ctx.r4.s64 + -9096;
	// lis r8,-30679
	ctx.r8.s64 = -2010578944;
	// addi r7,r11,-8328
	ctx.r7.s64 = ctx.r11.s64 + -8328;
	// stw r9,8096(r31)
	ctx.current_instruction = 0x880757FC;
	REX_STORE_U32(ctx.r31.u32 + 8096, ctx.r9.u32);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lis r5,-30705
	ctx.r5.s64 = -2012282880;
	// stw r7,8100(r31)
	ctx.current_instruction = 0x88075808;
	REX_STORE_U32(ctx.r31.u32 + 8100, ctx.r7.u32);
	// lis r4,-30705
	ctx.r4.s64 = -2012282880;
	// stw r20,28552(r31)
	ctx.current_instruction = 0x88075810;
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r20.u32);
	// addi r10,r5,28664
	ctx.r10.s64 = ctx.r5.s64 + 28664;
	// addi r9,r4,30960
	ctx.r9.s64 = ctx.r4.s64 + 30960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-25280(r8)
	ctx.current_instruction = 0x88075820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -25280);
	// stw r11,-22720(r6)
	ctx.current_instruction = 0x88075824;
	REX_STORE_U32(ctx.r6.u32 + -22720, ctx.r11.u32);
	// stw r11,1600(r31)
	ctx.current_instruction = 0x88075828;
	REX_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r10,1588(r31)
	ctx.current_instruction = 0x8807582C;
	REX_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// stw r9,1592(r31)
	ctx.current_instruction = 0x88075830;
	REX_STORE_U32(ctx.r31.u32 + 1592, ctx.r9.u32);
	// bl 0x881054f8
	ctx.lr = 0x88075838;
	sub_881054F8(ctx, base);
loc_88075838:
	// lwz r8,2572(r31)
	ctx.current_instruction = 0x88075838;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88075858
	if (ctx.cr6.eq) goto loc_88075858;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r9,r11,-31248
	ctx.r9.s64 = ctx.r11.s64 + -31248;
	// addi r8,r10,-30832
	ctx.r8.s64 = ctx.r10.s64 + -30832;
	// b 0x88075868
	goto loc_88075868;
loc_88075858:
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r9,r11,-32024
	ctx.r9.s64 = ctx.r11.s64 + -32024;
	// addi r8,r10,-31728
	ctx.r8.s64 = ctx.r10.s64 + -31728;
loc_88075868:
	// stw r9,8188(r31)
	ctx.current_instruction = 0x88075868;
	REX_STORE_U32(ctx.r31.u32 + 8188, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8192(r31)
	ctx.current_instruction = 0x88075870;
	REX_STORE_U32(ctx.r31.u32 + 8192, ctx.r8.u32);
	// bl 0x880e6c70
	ctx.lr = 0x88075878;
	sub_880E6C70(ctx, base);
loc_88075878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e5c0
	ctx.lr = 0x88075880;
	sub_8810E5C0(ctx, base);
loc_88075880:
	// bl 0x8810a908
	ctx.lr = 0x88075884;
	sub_8810A908(ctx, base);
loc_88075884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ee88
	ctx.lr = 0x8807588C;
	sub_8806EE88(ctx, base);
loc_8807588C:
	// stw r30,7760(r31)
	ctx.current_instruction = 0x8807588C;
	REX_STORE_U32(ctx.r31.u32 + 7760, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d178
	ctx.lr = 0x88075898;
	sub_8806D178(ctx, base);
loc_88075898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072c48
	ctx.lr = 0x880758A0;
	sub_88072C48(ctx, base);
loc_880758A0:
	// lwz r11,748(r1)
	ctx.current_instruction = 0x880758A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r11)
	ctx.current_instruction = 0x880758A8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18420(r11)
	ctx.current_instruction = 0x880758B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18420);
	// stw r11,6776(r31)
	ctx.current_instruction = 0x880758BC;
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r11.u32);
	// bl 0x8806c478
	ctx.lr = 0x880758C4;
	sub_8806C478(ctx, base);
loc_880758C4:
	// bl 0x88061460
	ctx.lr = 0x880758C8;
	sub_88061460(ctx, base);
loc_880758C8:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880758C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x880758d8
	if (!ctx.cr6.gt) goto loc_880758D8;
	// stw r30,2336(r31)
	ctx.current_instruction = 0x880758D4;
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
loc_880758D8:
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880758DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// rlwinm r11,r8,0,22,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380;
	// li r14,-1
	ctx.r14.s64 = -1;
	// addi r7,r11,640
	ctx.r7.s64 = ctx.r11.s64 + 640;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075910
	if (!ctx.cr6.gt) goto loc_88075910;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075910:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075918;
	sub_88050340(ctx, base);
loc_88075918:
	// stw r3,2344(r31)
	ctx.current_instruction = 0x88075918;
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,2348(r31)
	ctx.current_instruction = 0x8807592C;
	REX_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88075930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2352(r31)
	ctx.current_instruction = 0x8807593C;
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.current_instruction = 0x88075944;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2356(r31)
	ctx.current_instruction = 0x88075950;
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x88075958;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2360(r31)
	ctx.current_instruction = 0x88075964;
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.current_instruction = 0x8807596C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2364(r31)
	ctx.current_instruction = 0x88075978;
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88075980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2368(r31)
	ctx.current_instruction = 0x8807598C;
	REX_STORE_U32(ctx.r31.u32 + 2368, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.current_instruction = 0x88075994;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2372(r31)
	ctx.current_instruction = 0x880759A0;
	REX_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// lwz r7,1624(r31)
	ctx.current_instruction = 0x880759A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x88075a74
	if (!ctx.cr6.gt) goto loc_88075A74;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880759B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2376(r31)
	ctx.current_instruction = 0x880759BC;
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880759C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2380(r31)
	ctx.current_instruction = 0x880759D0;
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x880759D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2384(r31)
	ctx.current_instruction = 0x880759E4;
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.current_instruction = 0x880759EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2388(r31)
	ctx.current_instruction = 0x880759F8;
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880759FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,2392(r31)
	ctx.current_instruction = 0x88075A0C;
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88075A14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2396(r31)
	ctx.current_instruction = 0x88075A20;
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88075A28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2400(r31)
	ctx.current_instruction = 0x88075A34;
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x88075A3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2404(r31)
	ctx.current_instruction = 0x88075A48;
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r4.u32);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,720(r31)
	ctx.current_instruction = 0x88075A50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2408(r31)
	ctx.current_instruction = 0x88075A5C;
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88075A64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2412(r31)
	ctx.current_instruction = 0x88075A70;
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r9.u32);
loc_88075A74:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075a94
	if (!ctx.cr6.gt) goto loc_88075A94;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075A94:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075A9C;
	sub_88050340(ctx, base);
loc_88075A9C:
	// stw r3,2312(r31)
	ctx.current_instruction = 0x88075A9C;
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r15,r9,65535
	ctx.r15.u64 = ctx.r9.u64 | 65535;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x88075acc
	if (!ctx.cr6.gt) goto loc_88075ACC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075ACC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075AD4;
	sub_88050340(ctx, base);
loc_88075AD4:
	// stw r3,2796(r31)
	ctx.current_instruction = 0x88075AD4;
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,2328(r31)
	ctx.current_instruction = 0x88075AE0;
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// lwz r9,1360(r31)
	ctx.current_instruction = 0x88075AE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x88075AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,160
	ctx.r3.s64 = ctx.r10.s64 + 160;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88075b10
	if (!ctx.cr6.lt) goto loc_88075B10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_88075B10:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075B18;
	sub_88050340(ctx, base);
loc_88075B18:
	// stw r3,2328(r31)
	ctx.current_instruction = 0x88075B18;
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2332(r31)
	ctx.current_instruction = 0x88075B30;
	REX_STORE_U32(ctx.r31.u32 + 2332, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x88075B34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2312(r31)
	ctx.current_instruction = 0x88075B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2316(r31)
	ctx.current_instruction = 0x88075B44;
	REX_STORE_U32(ctx.r31.u32 + 2316, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.current_instruction = 0x88075B4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2320(r31)
	ctx.current_instruction = 0x88075B58;
	REX_STORE_U32(ctx.r31.u32 + 2320, ctx.r6.u32);
	// lwz r3,2312(r31)
	ctx.current_instruction = 0x88075B5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x88052d90
	ctx.lr = 0x88075B74;
	sub_88052D90(ctx, base);
loc_88075B74:
	// lwz r4,728(r31)
	ctx.current_instruction = 0x88075B74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075b8c
	if (!ctx.cr6.gt) goto loc_88075B8C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075B8C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075B94;
	sub_88050340(ctx, base);
loc_88075B94:
	// stw r3,2440(r31)
	ctx.current_instruction = 0x88075B94;
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2444(r31)
	ctx.current_instruction = 0x88075BAC;
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r10.u32);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075BB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88075BB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075bd4
	if (!ctx.cr6.gt) goto loc_88075BD4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075BD4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075BDC;
	sub_88050340(ctx, base);
loc_88075BDC:
	// stw r3,2448(r31)
	ctx.current_instruction = 0x88075BDC;
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88075BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88052d90
	ctx.lr = 0x88075C04;
	sub_88052D90(ctx, base);
loc_88075C04:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075C04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x88075C08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,2448(r31)
	ctx.current_instruction = 0x88075C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2452(r31)
	ctx.current_instruction = 0x88075C20;
	REX_STORE_U32(ctx.r31.u32 + 2452, ctx.r4.u32);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r3,720(r31)
	ctx.current_instruction = 0x88075C2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075c48
	if (!ctx.cr6.gt) goto loc_88075C48;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075C48:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075C50;
	sub_88050340(ctx, base);
loc_88075C50:
	// stw r3,7848(r31)
	ctx.current_instruction = 0x88075C50;
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88075C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88052d90
	ctx.lr = 0x88075C78;
	sub_88052D90(ctx, base);
loc_88075C78:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x88075C7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,7848(r31)
	ctx.current_instruction = 0x88075C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,7852(r31)
	ctx.current_instruction = 0x88075C94;
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r4.u32);
	// lwz r3,728(r31)
	ctx.current_instruction = 0x88075C98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075cb0
	if (!ctx.cr6.gt) goto loc_88075CB0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075CB0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075CB8;
	sub_88050340(ctx, base);
loc_88075CB8:
	// stw r3,2472(r31)
	ctx.current_instruction = 0x88075CB8;
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2476(r31)
	ctx.current_instruction = 0x88075CD0;
	REX_STORE_U32(ctx.r31.u32 + 2476, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x88075CD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075cec
	if (!ctx.cr6.gt) goto loc_88075CEC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075CEC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075CF4;
	sub_88050340(ctx, base);
loc_88075CF4:
	// stw r3,2456(r31)
	ctx.current_instruction = 0x88075CF4;
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2460(r31)
	ctx.current_instruction = 0x88075D0C;
	REX_STORE_U32(ctx.r31.u32 + 2460, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x88075D10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075d28
	if (!ctx.cr6.gt) goto loc_88075D28;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075D28:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075D30;
	sub_88050340(ctx, base);
loc_88075D30:
	// stw r3,2464(r31)
	ctx.current_instruction = 0x88075D30;
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2468(r31)
	ctx.current_instruction = 0x88075D50;
	REX_STORE_U32(ctx.r31.u32 + 2468, ctx.r8.u32);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x88075d70
	if (ctx.cr6.gt) goto loc_88075D70;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x88075d74
	goto loc_88075D74;
loc_88075D70:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075D74:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075D7C;
	sub_88050340(ctx, base);
loc_88075D7C:
	// stw r3,2164(r31)
	ctx.current_instruction = 0x88075D7C;
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88075D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r9,724(r31)
	ctx.current_instruction = 0x88075D90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88075db4
	if (!ctx.cr6.gt) goto loc_88075DB4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075DB4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075DBC;
	sub_88050340(ctx, base);
loc_88075DBC:
	// stw r3,1680(r31)
	ctx.current_instruction = 0x88075DBC;
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r29,728(r31)
	ctx.current_instruction = 0x88075DCC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r25,-5
	ctx.r25.s64 = -5;
	// ori r26,r11,29443
	ctx.r26.u64 = ctx.r11.u64 | 29443;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88075df0
	if (ctx.cr6.gt) goto loc_88075DF0;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x88075df4
	if (!ctx.cr6.gt) goto loc_88075DF4;
loc_88075DF0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075DF4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075DFC;
	sub_88050340(ctx, base);
loc_88075DFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075e34
	if (ctx.cr6.eq) goto loc_88075E34;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	ctx.current_instruction = 0x88075E08;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88075e2c
	if (ctx.cr0.lt) goto loc_88075E2C;
loc_88075E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88075E20;
	sub_880D90B8(ctx, base);
loc_88075E20:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88075e18
	if (!ctx.cr0.lt) goto loc_88075E18;
loc_88075E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x88075e38
	goto loc_88075E38;
loc_88075E34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075E38:
	// stw r3,7764(r31)
	ctx.current_instruction = 0x88075E38;
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x88075E54;
	sub_88052D90(ctx, base);
loc_88075E54:
	// lwz r29,728(r31)
	ctx.current_instruction = 0x88075E54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88075e70
	if (ctx.cr6.gt) goto loc_88075E70;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x88075e74
	if (!ctx.cr6.gt) goto loc_88075E74;
loc_88075E70:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075E74:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075E7C;
	sub_88050340(ctx, base);
loc_88075E7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075eb4
	if (ctx.cr6.eq) goto loc_88075EB4;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	ctx.current_instruction = 0x88075E88;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88075eac
	if (ctx.cr0.lt) goto loc_88075EAC;
loc_88075E98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88075EA0;
	sub_880D90B8(ctx, base);
loc_88075EA0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88075e98
	if (!ctx.cr0.lt) goto loc_88075E98;
loc_88075EAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x88075eb8
	goto loc_88075EB8;
loc_88075EB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075EB8:
	// stw r3,7768(r31)
	ctx.current_instruction = 0x88075EB8;
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88075EC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x88075ED4;
	sub_88052D90(ctx, base);
loc_88075ED4:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075ED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88075fc0
	if (ctx.cr6.eq) goto loc_88075FC0;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88075EE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88075EEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88075fb0
	if (ctx.cr6.eq) goto loc_88075FB0;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mulli r10,r6,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(276));
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88075F04:
	// lwz r5,724(r31)
	ctx.current_instruction = 0x88075F04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x88075F10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r5,r5,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	ctx.current_instruction = 0x88075F50;
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x88075F54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,724(r31)
	ctx.current_instruction = 0x88075F5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lwz r9,7768(r31)
	ctx.current_instruction = 0x88075F6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r3,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x2;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	ctx.current_instruction = 0x88075FA0;
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88075FA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88075f04
	if (ctx.cr6.lt) goto loc_88075F04;
loc_88075FB0:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88075FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88075eec
	if (ctx.cr6.lt) goto loc_88075EEC;
loc_88075FC0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076060
	if (ctx.cr6.eq) goto loc_88076060;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88075FD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88075FD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076050
	if (ctx.cr6.eq) goto loc_88076050;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88075FEC:
	// lwz r7,724(r31)
	ctx.current_instruction = 0x88075FEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x88075FF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	ctx.current_instruction = 0x88076040;
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88076044;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88075fec
	if (ctx.cr6.lt) goto loc_88075FEC;
loc_88076050:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88076050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88075fd4
	if (ctx.cr6.lt) goto loc_88075FD4;
loc_88076060:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x88050340
	ctx.lr = 0x8807606C;
	sub_88050340(ctx, base);
loc_8807606C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076084
	if (ctx.cr6.eq) goto loc_88076084;
	// bl 0x880d90b8
	ctx.lr = 0x8807607C;
	sub_880D90B8(ctx, base);
loc_8807607C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x88076088
	goto loc_88076088;
loc_88076084:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88076088:
	// stw r11,7772(r31)
	ctx.current_instruction = 0x88076088;
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,4(r11)
	ctx.current_instruction = 0x88076094;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,7772(r31)
	ctx.current_instruction = 0x88076098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,8(r11)
	ctx.current_instruction = 0x8807609C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r10,7772(r31)
	ctx.current_instruction = 0x880760A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,12(r10)
	ctx.current_instruction = 0x880760A4;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r9,7772(r31)
	ctx.current_instruction = 0x880760A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,16(r9)
	ctx.current_instruction = 0x880760AC;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r8,7772(r31)
	ctx.current_instruction = 0x880760B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,20(r8)
	ctx.current_instruction = 0x880760B4;
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// lwz r7,7772(r31)
	ctx.current_instruction = 0x880760B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,24(r7)
	ctx.current_instruction = 0x880760BC;
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r30.u32);
	// lwz r6,6864(r31)
	ctx.current_instruction = 0x880760C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880762f0
	if (ctx.cr6.eq) goto loc_880762F0;
	// lwz r29,728(r31)
	ctx.current_instruction = 0x880760CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x880760e8
	if (ctx.cr6.gt) goto loc_880760E8;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x880760ec
	if (!ctx.cr6.gt) goto loc_880760EC;
loc_880760E8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880760EC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880760F4;
	sub_88050340(ctx, base);
loc_880760F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807612c
	if (ctx.cr6.eq) goto loc_8807612C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	ctx.current_instruction = 0x88076100;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88076124
	if (ctx.cr0.lt) goto loc_88076124;
loc_88076110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88076118;
	sub_880D90B8(ctx, base);
loc_88076118:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88076110
	if (!ctx.cr0.lt) goto loc_88076110;
loc_88076124:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x88076130
	goto loc_88076130;
loc_8807612C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88076130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7788(r31)
	ctx.current_instruction = 0x88076134;
	REX_STORE_U32(ctx.r31.u32 + 7788, ctx.r11.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r29,728(r31)
	ctx.current_instruction = 0x8807613C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88076158
	if (ctx.cr6.gt) goto loc_88076158;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8807615c
	if (!ctx.cr6.gt) goto loc_8807615C;
loc_88076158:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8807615C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076164;
	sub_88050340(ctx, base);
loc_88076164:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807619c
	if (ctx.cr6.eq) goto loc_8807619C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	ctx.current_instruction = 0x88076170;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88076194
	if (ctx.cr0.lt) goto loc_88076194;
loc_88076180:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88076188;
	sub_880D90B8(ctx, base);
loc_88076188:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88076180
	if (!ctx.cr0.lt) goto loc_88076180;
loc_88076194:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x880761a0
	goto loc_880761A0;
loc_8807619C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880761A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7792(r31)
	ctx.current_instruction = 0x880761A4;
	REX_STORE_U32(ctx.r31.u32 + 7792, ctx.r11.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880761AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,7788(r31)
	ctx.current_instruction = 0x880761B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x880761C0;
	sub_88052D90(ctx, base);
loc_880761C0:
	// lwz r10,728(r31)
	ctx.current_instruction = 0x880761C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r3,7792(r31)
	ctx.current_instruction = 0x880761C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r10,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x880761D4;
	sub_88052D90(ctx, base);
loc_880761D4:
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880761D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x88076284
	if (!ctx.cr6.gt) goto loc_88076284;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880761E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_880761EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076274
	if (ctx.cr6.eq) goto loc_88076274;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88076204:
	// lwz r7,724(r31)
	ctx.current_instruction = 0x88076204;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7788(r31)
	ctx.current_instruction = 0x88076210;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	ctx.current_instruction = 0x88076254;
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,7792(r31)
	ctx.current_instruction = 0x88076258;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,120(r4)
	ctx.current_instruction = 0x88076260;
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r7.u32);
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88076268;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88076204
	if (ctx.cr6.lt) goto loc_88076204;
loc_88076274:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88076274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880761ec
	if (ctx.cr6.lt) goto loc_880761EC;
loc_88076284:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076294;
	sub_88050340(ctx, base);
loc_88076294:
	// stw r3,7832(r31)
	ctx.current_instruction = 0x88076294;
	REX_STORE_U32(ctx.r31.u32 + 7832, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,728(r31)
	ctx.current_instruction = 0x880762A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2796(r31)
	ctx.current_instruction = 0x880762A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7780(r31)
	ctx.current_instruction = 0x880762B0;
	REX_STORE_U32(ctx.r31.u32 + 7780, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.current_instruction = 0x880762B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,7784(r31)
	ctx.current_instruction = 0x880762C4;
	REX_STORE_U32(ctx.r31.u32 + 7784, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.current_instruction = 0x880762CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,7796(r31)
	ctx.current_instruction = 0x880762D8;
	REX_STORE_U32(ctx.r31.u32 + 7796, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.current_instruction = 0x880762E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,7800(r31)
	ctx.current_instruction = 0x880762EC;
	REX_STORE_U32(ctx.r31.u32 + 7800, ctx.r3.u32);
loc_880762F0:
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x880762F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807632c
	if (ctx.cr6.eq) goto loc_8807632C;
	// lwz r10,1360(r31)
	ctx.current_instruction = 0x880762FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x88076304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x88076320;
	sub_88050340(ctx, base);
loc_88076320:
	// stw r3,7232(r31)
	ctx.current_instruction = 0x88076320;
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_8807632C:
	// lwz r11,2336(r31)
	ctx.current_instruction = 0x8807632C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880763a0
	if (ctx.cr6.eq) goto loc_880763A0;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x88076338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076350
	if (!ctx.cr6.eq) goto loc_88076350;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88076348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// b 0x88076368
	goto loc_88076368;
loc_88076350:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88076354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// bge cr6,0x88076364
	if (!ctx.cr6.lt) goto loc_88076364;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x88076368
	goto loc_88076368;
loc_88076364:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88076368:
	// stw r11,7072(r31)
	ctx.current_instruction = 0x88076368;
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r31)
	ctx.current_instruction = 0x8807636C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076384
	if (!ctx.cr6.eq) goto loc_88076384;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807637C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// b 0x8807639c
	goto loc_8807639C;
loc_88076384:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88076388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// bge cr6,0x88076398
	if (!ctx.cr6.lt) goto loc_88076398;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x8807639c
	goto loc_8807639C;
loc_88076398:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8807639C:
	// stw r11,7076(r31)
	ctx.current_instruction = 0x8807639C;
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r11.u32);
loc_880763A0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18508(r11)
	ctx.current_instruction = 0x880763A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076428
	if (ctx.cr6.eq) goto loc_88076428;
	// stw r20,28568(r31)
	ctx.current_instruction = 0x880763B0;
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r20.u32);
	// li r5,504
	ctx.r5.s64 = 504;
	// stw r30,28588(r31)
	ctx.current_instruction = 0x880763B8;
	REX_STORE_U32(ctx.r31.u32 + 28588, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,28592(r31)
	ctx.current_instruction = 0x880763C0;
	REX_STORE_U32(ctx.r31.u32 + 28592, ctx.r30.u32);
	// addi r3,r31,29412
	ctx.r3.s64 = ctx.r31.s64 + 29412;
	// stw r30,28596(r31)
	ctx.current_instruction = 0x880763C8;
	REX_STORE_U32(ctx.r31.u32 + 28596, ctx.r30.u32);
	// stw r30,28600(r31)
	ctx.current_instruction = 0x880763CC;
	REX_STORE_U32(ctx.r31.u32 + 28600, ctx.r30.u32);
	// stw r30,28640(r31)
	ctx.current_instruction = 0x880763D0;
	REX_STORE_U32(ctx.r31.u32 + 28640, ctx.r30.u32);
	// stw r30,28644(r31)
	ctx.current_instruction = 0x880763D4;
	REX_STORE_U32(ctx.r31.u32 + 28644, ctx.r30.u32);
	// stw r30,28648(r31)
	ctx.current_instruction = 0x880763D8;
	REX_STORE_U32(ctx.r31.u32 + 28648, ctx.r30.u32);
	// stw r30,30152(r31)
	ctx.current_instruction = 0x880763DC;
	REX_STORE_U32(ctx.r31.u32 + 30152, ctx.r30.u32);
	// stw r30,28652(r31)
	ctx.current_instruction = 0x880763E0;
	REX_STORE_U32(ctx.r31.u32 + 28652, ctx.r30.u32);
	// stw r30,28656(r31)
	ctx.current_instruction = 0x880763E4;
	REX_STORE_U32(ctx.r31.u32 + 28656, ctx.r30.u32);
	// stw r30,28660(r31)
	ctx.current_instruction = 0x880763E8;
	REX_STORE_U32(ctx.r31.u32 + 28660, ctx.r30.u32);
	// stw r30,28664(r31)
	ctx.current_instruction = 0x880763EC;
	REX_STORE_U32(ctx.r31.u32 + 28664, ctx.r30.u32);
	// stw r30,28672(r31)
	ctx.current_instruction = 0x880763F0;
	REX_STORE_U32(ctx.r31.u32 + 28672, ctx.r30.u32);
	// stw r30,28668(r31)
	ctx.current_instruction = 0x880763F4;
	REX_STORE_U32(ctx.r31.u32 + 28668, ctx.r30.u32);
	// stw r30,30160(r31)
	ctx.current_instruction = 0x880763F8;
	REX_STORE_U32(ctx.r31.u32 + 30160, ctx.r30.u32);
	// stw r30,30168(r31)
	ctx.current_instruction = 0x880763FC;
	REX_STORE_U32(ctx.r31.u32 + 30168, ctx.r30.u32);
	// stw r30,30176(r31)
	ctx.current_instruction = 0x88076400;
	REX_STORE_U32(ctx.r31.u32 + 30176, ctx.r30.u32);
	// stw r30,30184(r31)
	ctx.current_instruction = 0x88076404;
	REX_STORE_U32(ctx.r31.u32 + 30184, ctx.r30.u32);
	// stw r30,30196(r31)
	ctx.current_instruction = 0x88076408;
	REX_STORE_U32(ctx.r31.u32 + 30196, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x88076410;
	sub_88052D90(ctx, base);
loc_88076410:
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18436(r29)
	ctx.current_instruction = 0x88076418;
	REX_STORE_U32(ctx.r29.u32 + 18436, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076420;
	sub_881EF4A8(ctx, base);
loc_88076420:
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18436(r29)
	ctx.current_instruction = 0x88076424;
	REX_STORE_U32(ctx.r29.u32 + 18436, ctx.r11.u32);
loc_88076428:
	// lwz r11,18412(r24)
	ctx.current_instruction = 0x88076428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807644c
	if (ctx.cr6.eq) goto loc_8807644C;
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18428(r29)
	ctx.current_instruction = 0x8807643C;
	REX_STORE_U32(ctx.r29.u32 + 18428, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076444;
	sub_881EF4A8(ctx, base);
loc_88076444:
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18428(r29)
	ctx.current_instruction = 0x88076448;
	REX_STORE_U32(ctx.r29.u32 + 18428, ctx.r11.u32);
loc_8807644C:
	// lwz r11,18416(r23)
	ctx.current_instruction = 0x8807644C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076470
	if (ctx.cr6.eq) goto loc_88076470;
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18432(r29)
	ctx.current_instruction = 0x88076460;
	REX_STORE_U32(ctx.r29.u32 + 18432, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076468;
	sub_881EF4A8(ctx, base);
loc_88076468:
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18432(r29)
	ctx.current_instruction = 0x8807646C;
	REX_STORE_U32(ctx.r29.u32 + 18432, ctx.r11.u32);
loc_88076470:
	// cmpwi cr6,r17,7
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 7, ctx.xer);
	// beq cr6,0x88076480
	if (ctx.cr6.eq) goto loc_88076480;
	// cmpwi cr6,r17,8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 8, ctx.xer);
	// bne cr6,0x88076490
	if (!ctx.cr6.eq) goto loc_88076490;
loc_88076480:
	// lwz r11,2112(r31)
	ctx.current_instruction = 0x88076480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88076490
	if (!ctx.cr6.eq) goto loc_88076490;
	// stw r30,2104(r31)
	ctx.current_instruction = 0x8807648C;
	REX_STORE_U32(ctx.r31.u32 + 2104, ctx.r30.u32);
loc_88076490:
	// lwz r11,18412(r24)
	ctx.current_instruction = 0x88076490;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880764a8
	if (!ctx.cr6.eq) goto loc_880764A8;
	// lwz r11,18416(r23)
	ctx.current_instruction = 0x8807649C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880764d8
	if (ctx.cr6.eq) goto loc_880764D8;
loc_880764A8:
	// lwz r10,800(r31)
	ctx.current_instruction = 0x880764A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880764B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x880764CC;
	sub_88050340(ctx, base);
loc_880764CC:
	// stw r3,20216(r31)
	ctx.current_instruction = 0x880764CC;
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_880764D8:
	// lwz r10,800(r31)
	ctx.current_instruction = 0x880764D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880764E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x880764FC;
	sub_88050340(ctx, base);
loc_880764FC:
	// stw r3,20196(r31)
	ctx.current_instruction = 0x880764FC;
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb120
	ctx.lr = 0x88076510;
	sub_880EB120(ctx, base);
loc_88076510:
	// stw r30,7192(r31)
	ctx.current_instruction = 0x88076510;
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88109208
	ctx.lr = 0x8807651C;
	sub_88109208(ctx, base);
loc_8807651C:
	// lwz r11,1584(r31)
	ctx.current_instruction = 0x8807651C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bne cr6,0x88076538
	if (!ctx.cr6.eq) goto loc_88076538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x88076548
	goto loc_88076548;
loc_88076538:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_88076548:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x88050340
	ctx.lr = 0x88076554;
	sub_88050340(ctx, base);
loc_88076554:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807656c
	if (ctx.cr6.eq) goto loc_8807656C;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880f9b78
	ctx.lr = 0x88076568;
	sub_880F9B78(ctx, base);
loc_88076568:
	// b 0x88076570
	goto loc_88076570;
loc_8807656C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88076570:
	// stw r3,7192(r31)
	ctx.current_instruction = 0x88076570;
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,152(r1)
	ctx.current_instruction = 0x8807657C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076588;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880765a0
	if (!ctx.cr6.gt) goto loc_880765A0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880765A0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880765A8;
	sub_88050340(ctx, base);
loc_880765A8:
	// stw r3,2324(r31)
	ctx.current_instruction = 0x880765A8;
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880765B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880765cc
	if (!ctx.cr6.gt) goto loc_880765CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880765CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880765D4;
	sub_88050340(ctx, base);
loc_880765D4:
	// stw r3,7856(r31)
	ctx.current_instruction = 0x880765D4;
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880765E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// bl 0x88050340
	ctx.lr = 0x880765F0;
	sub_88050340(ctx, base);
loc_880765F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2940(r31)
	ctx.current_instruction = 0x880765F4;
	REX_STORE_U32(ctx.r31.u32 + 2940, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880765FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8807663c
	if (ctx.cr6.lt) goto loc_8807663C;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stw r11,3908(r31)
	ctx.current_instruction = 0x88076610;
	REX_STORE_U32(ctx.r31.u32 + 3908, ctx.r11.u32);
	// lwz r10,1624(r31)
	ctx.current_instruction = 0x88076614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x8807663c
	if (!ctx.cr6.gt) goto loc_8807663C;
	// lwz r11,2940(r31)
	ctx.current_instruction = 0x88076620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// stw r10,4876(r31)
	ctx.current_instruction = 0x88076628;
	REX_STORE_U32(ctx.r31.u32 + 4876, ctx.r10.u32);
	// lwz r9,2940(r31)
	ctx.current_instruction = 0x8807662C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 131072;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// stw r8,5844(r31)
	ctx.current_instruction = 0x88076638;
	REX_STORE_U32(ctx.r31.u32 + 5844, ctx.r8.u32);
loc_8807663C:
	// stw r30,2944(r31)
	ctx.current_instruction = 0x8807663C;
	REX_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// stw r30,3912(r31)
	ctx.current_instruction = 0x88076640;
	REX_STORE_U32(ctx.r31.u32 + 3912, ctx.r30.u32);
	// stw r30,4880(r31)
	ctx.current_instruction = 0x88076644;
	REX_STORE_U32(ctx.r31.u32 + 4880, ctx.r30.u32);
	// stw r30,5848(r31)
	ctx.current_instruction = 0x88076648;
	REX_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807664C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88076758
	if (!ctx.cr6.eq) goto loc_88076758;
	// lwz r11,2564(r31)
	ctx.current_instruction = 0x88076658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076670
	if (ctx.cr6.eq) goto loc_88076670;
	// li r29,256
	ctx.r29.s64 = 256;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x88076678
	goto loc_88076678;
loc_88076670:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r28,64
	ctx.r28.s64 = 64;
loc_88076678:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88076678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88076694
	if (!ctx.cr6.gt) goto loc_88076694;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076694:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x8807669C;
	sub_88050340(ctx, base);
loc_8807669C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2948(r31)
	ctx.current_instruction = 0x880766A0;
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880766A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880766c4
	if (!ctx.cr6.gt) goto loc_880766C4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880766C4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880766CC;
	sub_88050340(ctx, base);
loc_880766CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2952(r31)
	ctx.current_instruction = 0x880766D0;
	REX_STORE_U32(ctx.r31.u32 + 2952, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r9,2948(r31)
	ctx.current_instruction = 0x880766D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880766E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x88076758
	if (ctx.cr6.lt) goto loc_88076758;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,3916(r31)
	ctx.current_instruction = 0x880766FC;
	REX_STORE_U32(ctx.r31.u32 + 3916, ctx.r9.u32);
	// lwz r9,2952(r31)
	ctx.current_instruction = 0x88076700;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,3920(r31)
	ctx.current_instruction = 0x88076708;
	REX_STORE_U32(ctx.r31.u32 + 3920, ctx.r8.u32);
	// lwz r7,1624(r31)
	ctx.current_instruction = 0x8807670C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// ble cr6,0x88076758
	if (!ctx.cr6.gt) goto loc_88076758;
	// lwz r8,2948(r31)
	ctx.current_instruction = 0x88076718;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4884(r31)
	ctx.current_instruction = 0x8807672C;
	REX_STORE_U32(ctx.r31.u32 + 4884, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2952(r31)
	ctx.current_instruction = 0x88076734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4888(r31)
	ctx.current_instruction = 0x8807673C;
	REX_STORE_U32(ctx.r31.u32 + 4888, ctx.r6.u32);
	// lwz r10,2948(r31)
	ctx.current_instruction = 0x88076740;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,5852(r31)
	ctx.current_instruction = 0x88076748;
	REX_STORE_U32(ctx.r31.u32 + 5852, ctx.r5.u32);
	// lwz r10,2952(r31)
	ctx.current_instruction = 0x8807674C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,5856(r31)
	ctx.current_instruction = 0x88076754;
	REX_STORE_U32(ctx.r31.u32 + 5856, ctx.r4.u32);
loc_88076758:
	// stw r30,6908(r31)
	ctx.current_instruction = 0x88076758;
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x8807675C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076774
	if (!ctx.cr6.gt) goto loc_88076774;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076774:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x8807677C;
	sub_88050340(ctx, base);
loc_8807677C:
	// stw r3,6908(r31)
	ctx.current_instruction = 0x8807677C;
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x88052d90
	ctx.lr = 0x88076798;
	sub_88052D90(ctx, base);
loc_88076798:
	// lwz r9,728(r31)
	ctx.current_instruction = 0x88076798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r10,6908(r31)
	ctx.current_instruction = 0x8807679C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6912(r31)
	ctx.current_instruction = 0x880767AC;
	REX_STORE_U32(ctx.r31.u32 + 6912, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880767B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6916(r31)
	ctx.current_instruction = 0x880767C0;
	REX_STORE_U32(ctx.r31.u32 + 6916, ctx.r6.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,728(r31)
	ctx.current_instruction = 0x880767C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,6920(r31)
	ctx.current_instruction = 0x880767D4;
	REX_STORE_U32(ctx.r31.u32 + 6920, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880767DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6924(r31)
	ctx.current_instruction = 0x880767E8;
	REX_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// stw r11,2552(r31)
	ctx.current_instruction = 0x880767EC;
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x880767F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6924(r31)
	ctx.current_instruction = 0x880767F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6924);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6928(r31)
	ctx.current_instruction = 0x88076800;
	REX_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// stw r11,2556(r31)
	ctx.current_instruction = 0x88076804;
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r8,728(r31)
	ctx.current_instruction = 0x88076808;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6928(r31)
	ctx.current_instruction = 0x88076810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6928);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,2544(r31)
	ctx.current_instruction = 0x88076818;
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.current_instruction = 0x88076820;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,2548(r31)
	ctx.current_instruction = 0x8807682C;
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r5.u32);
	// lwz r3,6908(r31)
	ctx.current_instruction = 0x88076830;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// stw r3,7044(r31)
	ctx.current_instruction = 0x88076834;
	REX_STORE_U32(ctx.r31.u32 + 7044, ctx.r3.u32);
	// lwz r3,728(r31)
	ctx.current_instruction = 0x88076838;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bl 0x88050340
	ctx.lr = 0x88076840;
	sub_88050340(ctx, base);
loc_88076840:
	// stw r3,7048(r31)
	ctx.current_instruction = 0x88076840;
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x8807684C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88076854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x88050340
	ctx.lr = 0x88076870;
	sub_88050340(ctx, base);
loc_88076870:
	// stw r3,7052(r31)
	ctx.current_instruction = 0x88076870;
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,6908(r31)
	ctx.current_instruction = 0x8807687C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r11,7532(r31)
	ctx.current_instruction = 0x88076884;
	REX_STORE_U32(ctx.r31.u32 + 7532, ctx.r11.u32);
	// lwz r10,728(r31)
	ctx.current_instruction = 0x88076888;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7536(r31)
	ctx.current_instruction = 0x88076894;
	REX_STORE_U32(ctx.r31.u32 + 7536, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.current_instruction = 0x8807689C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,7540(r31)
	ctx.current_instruction = 0x880768A8;
	REX_STORE_U32(ctx.r31.u32 + 7540, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.current_instruction = 0x880768B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,7544(r31)
	ctx.current_instruction = 0x880768BC;
	REX_STORE_U32(ctx.r31.u32 + 7544, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.current_instruction = 0x880768C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,7548(r31)
	ctx.current_instruction = 0x880768D0;
	REX_STORE_U32(ctx.r31.u32 + 7548, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880768D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,7552(r31)
	ctx.current_instruction = 0x880768E4;
	REX_STORE_U32(ctx.r31.u32 + 7552, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x880768EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,7524(r31)
	ctx.current_instruction = 0x880768F8;
	REX_STORE_U32(ctx.r31.u32 + 7524, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.current_instruction = 0x88076900;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,7528(r31)
	ctx.current_instruction = 0x8807690C;
	REX_STORE_U32(ctx.r31.u32 + 7528, ctx.r6.u32);
	// lwz r5,1624(r31)
	ctx.current_instruction = 0x88076910;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x8807697c
	if (!ctx.cr6.gt) goto loc_8807697C;
	// addi r29,r31,2864
	ctx.r29.s64 = ctx.r31.s64 + 2864;
loc_88076920:
	// stw r30,0(r29)
	ctx.current_instruction = 0x88076920;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x88050340
	ctx.lr = 0x88076930;
	sub_88050340(ctx, base);
loc_88076930:
	// stw r3,0(r29)
	ctx.current_instruction = 0x88076930;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// addi r9,r29,783
	ctx.r9.s64 = ctx.r29.s64 + 783;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r11,4(r29)
	ctx.current_instruction = 0x88076948;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// stw r10,8(r29)
	ctx.current_instruction = 0x88076954;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r8,928(r29)
	ctx.current_instruction = 0x88076958;
	REX_STORE_U32(ctx.r29.u32 + 928, ctx.r8.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,12(r29)
	ctx.current_instruction = 0x88076960;
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// stw r7,16(r29)
	ctx.current_instruction = 0x88076968;
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// addi r29,r29,968
	ctx.r29.s64 = ctx.r29.s64 + 968;
	// lwz r6,1624(r31)
	ctx.current_instruction = 0x88076970;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x88076920
	if (ctx.cr6.lt) goto loc_88076920;
loc_8807697C:
	// lwz r11,7832(r31)
	ctx.current_instruction = 0x8807697C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7832);
	// stw r11,7836(r31)
	ctx.current_instruction = 0x88076980;
	REX_STORE_U32(ctx.r31.u32 + 7836, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88076984;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x880769ec
	if (!ctx.cr6.eq) goto loc_880769EC;
	// lwz r11,6916(r31)
	ctx.current_instruction = 0x88076990;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6916);
	// stw r11,21136(r31)
	ctx.current_instruction = 0x88076994;
	REX_STORE_U32(ctx.r31.u32 + 21136, ctx.r11.u32);
	// lwz r10,6920(r31)
	ctx.current_instruction = 0x88076998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6920);
	// stw r10,28416(r31)
	ctx.current_instruction = 0x8807699C;
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r10.u32);
	// lwz r9,6912(r31)
	ctx.current_instruction = 0x880769A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6912);
	// stw r9,28424(r31)
	ctx.current_instruction = 0x880769A4;
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r9.u32);
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880769A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x880769cc
	if (!ctx.cr6.gt) goto loc_880769CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880769CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880769D4;
	sub_88050340(ctx, base);
loc_880769D4:
	// stw r3,2480(r31)
	ctx.current_instruction = 0x880769D4;
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2484(r31)
	ctx.current_instruction = 0x880769E8;
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r10.u32);
loc_880769EC:
	// lwz r28,720(r31)
	ctx.current_instruction = 0x880769EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r29,724(r31)
	ctx.current_instruction = 0x880769F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880769F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88076a10
	if (!ctx.cr6.eq) goto loc_88076A10;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r29,r11,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
loc_88076A10:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x88050340
	ctx.lr = 0x88076A2C;
	sub_88050340(ctx, base);
loc_88076A2C:
	// stw r3,6804(r31)
	ctx.current_instruction = 0x88076A2C;
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r29,r8,r10
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r28,r29,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,6800(r31)
	ctx.current_instruction = 0x88076A58;
	REX_STORE_U32(ctx.r31.u32 + 6800, ctx.r7.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x88076A68;
	sub_88050340(ctx, base);
loc_88076A68:
	// stw r3,6808(r31)
	ctx.current_instruction = 0x88076A68;
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x88076A80;
	sub_88050340(ctx, base);
loc_88076A80:
	// stw r3,6812(r31)
	ctx.current_instruction = 0x88076A80;
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r3,r11,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x88050340
	ctx.lr = 0x88076AA0;
	sub_88050340(ctx, base);
loc_88076AA0:
	// stw r3,6816(r31)
	ctx.current_instruction = 0x88076AA0;
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r3,6820(r31)
	ctx.current_instruction = 0x88076AB0;
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r3.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6824(r31)
	ctx.current_instruction = 0x88076ABC;
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6828(r31)
	ctx.current_instruction = 0x88076AC4;
	REX_STORE_U32(ctx.r31.u32 + 6828, ctx.r9.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6832(r31)
	ctx.current_instruction = 0x88076ACC;
	REX_STORE_U32(ctx.r31.u32 + 6832, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6836(r31)
	ctx.current_instruction = 0x88076AD4;
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r9.u32);
	// stw r11,6840(r31)
	ctx.current_instruction = 0x88076AD8;
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// lwz r10,1480(r31)
	ctx.current_instruction = 0x88076ADC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88076bf8
	if (ctx.cr6.eq) goto loc_88076BF8;
	// mulli r11,r29,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(84));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076b00
	if (!ctx.cr6.gt) goto loc_88076B00;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B00:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B08;
	sub_88050340(ctx, base);
loc_88076B08:
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// stw r3,1484(r31)
	ctx.current_instruction = 0x88076B0C;
	REX_STORE_U32(ctx.r31.u32 + 1484, ctx.r3.u32);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,1488(r31)
	ctx.current_instruction = 0x88076B14;
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r9,r29,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1492(r31)
	ctx.current_instruction = 0x88076B34;
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1496(r31)
	ctx.current_instruction = 0x88076B3C;
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r10.u32);
	// ble cr6,0x88076b48
	if (!ctx.cr6.gt) goto loc_88076B48;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B48:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B50;
	sub_88050340(ctx, base);
loc_88076B50:
	// stw r3,1500(r31)
	ctx.current_instruction = 0x88076B50;
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x88052d90
	ctx.lr = 0x88076B6C;
	sub_88052D90(ctx, base);
loc_88076B6C:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076b7c
	if (!ctx.cr6.gt) goto loc_88076B7C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B7C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B84;
	sub_88050340(ctx, base);
loc_88076B84:
	// stw r3,1504(r31)
	ctx.current_instruction = 0x88076B84;
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x88052d90
	ctx.lr = 0x88076B9C;
	sub_88052D90(ctx, base);
loc_88076B9C:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076bac
	if (!ctx.cr6.gt) goto loc_88076BAC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076BAC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076BB4;
	sub_88050340(ctx, base);
loc_88076BB4:
	// stw r3,1508(r31)
	ctx.current_instruction = 0x88076BB4;
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x88052d90
	ctx.lr = 0x88076BCC;
	sub_88052D90(ctx, base);
loc_88076BCC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,29688
	ctx.r3.s64 = 29688;
	// bl 0x88050340
	ctx.lr = 0x88076BD8;
	sub_88050340(ctx, base);
loc_88076BD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076be8
	if (ctx.cr6.eq) goto loc_88076BE8;
	// bl 0x88244148
	ctx.lr = 0x88076BE4;
	sub_88244148(ctx, base);
loc_88076BE4:
	// b 0x88076bec
	goto loc_88076BEC;
loc_88076BE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88076BEC:
	// stw r3,1512(r31)
	ctx.current_instruction = 0x88076BEC;
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_88076BF8:
	// stw r30,6792(r31)
	ctx.current_instruction = 0x88076BF8;
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076C0C;
	sub_88050340(ctx, base);
loc_88076C0C:
	// stw r3,6792(r31)
	ctx.current_instruction = 0x88076C0C;
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,6796(r31)
	ctx.current_instruction = 0x88076C18;
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88076C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076C2C;
	sub_88050340(ctx, base);
loc_88076C2C:
	// stw r3,6796(r31)
	ctx.current_instruction = 0x88076C2C;
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88073680
	ctx.lr = 0x88076C40;
	sub_88073680(ctx, base);
loc_88076C40:
	// lwz r25,748(r1)
	ctx.current_instruction = 0x88076C40;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r25)
	ctx.current_instruction = 0x88076C48;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88076C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,19452(r31)
	ctx.current_instruction = 0x88076C60;
	REX_STORE_U32(ctx.r31.u32 + 19452, ctx.r10.u32);
	// lwz r8,7936(r31)
	ctx.current_instruction = 0x88076C64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7936);
	// lfd f0,7688(r31)
	ctx.current_instruction = 0x88076C68;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// std r8,144(r1)
	ctx.current_instruction = 0x88076C6C;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.current_instruction = 0x88076C70;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,144(r1)
	ctx.current_instruction = 0x88076C84;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x88076C88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,7940(r31)
	ctx.current_instruction = 0x88076C90;
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r7.u32);
	// bgt cr6,0x88076c9c
	if (ctx.cr6.gt) goto loc_88076C9C;
	// stw r20,7940(r31)
	ctx.current_instruction = 0x88076C98;
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r20.u32);
loc_88076C9C:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88076C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88076ccc
	if (!ctx.cr6.eq) goto loc_88076CCC;
	// lwz r11,7188(r31)
	ctx.current_instruction = 0x88076CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076ccc
	if (ctx.cr6.eq) goto loc_88076CCC;
	// lwz r11,7940(r31)
	ctx.current_instruction = 0x88076CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x88076ccc
	if (!ctx.cr6.lt) goto loc_88076CCC;
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r24,7940(r31)
	ctx.current_instruction = 0x88076CC4;
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r24.u32);
	// b 0x88076cd0
	goto loc_88076CD0;
loc_88076CCC:
	// li r24,8
	ctx.r24.s64 = 8;
loc_88076CD0:
	// lwz r11,7188(r31)
	ctx.current_instruction = 0x88076CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x88076CD4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076d50
	if (!ctx.cr6.eq) goto loc_88076D50;
	// lfd f13,7888(r31)
	ctx.current_instruction = 0x88076CE0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88076cf8
	if (!ctx.cr6.lt) goto loc_88076CF8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x88076cf8
	if (!ctx.cr6.gt) goto loc_88076CF8;
	// stfd f0,7888(r31)
	ctx.current_instruction = 0x88076CF4;
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_88076CF8:
	// stfd f31,7896(r31)
	ctx.current_instruction = 0x88076CF8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.current_instruction = 0x88076CFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r9,144(r1)
	ctx.current_instruction = 0x88076D04;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,12352(r10)
	ctx.current_instruction = 0x88076D08;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12352);
	// lwz r8,7880(r31)
	ctx.current_instruction = 0x88076D0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.current_instruction = 0x88076D10;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.current_instruction = 0x88076D14;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	ctx.current_instruction = 0x88076D1C;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x88076D20;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.current_instruction = 0x88076D28;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076f4c
	if (!ctx.cr6.gt) goto loc_88076F4C;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	ctx.current_instruction = 0x88076D48;
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076f58
	goto loc_88076F58;
loc_88076D50:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x88076e24
	if (!ctx.cr6.gt) goto loc_88076E24;
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88076D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88076e24
	if (!ctx.cr6.eq) goto loc_88076E24;
	// lfd f13,7888(r31)
	ctx.current_instruction = 0x88076D64;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88076dac
	if (!ctx.cr6.lt) goto loc_88076DAC;
	// li r11,-100
	ctx.r11.s64 = -100;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88076D74;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_88076D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071e98
	ctx.lr = 0x88076D80;
	sub_88071E98(ctx, base);
loc_88076D80:
	// lwz r11,748(r1)
	ctx.current_instruction = 0x88076D80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88076D84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d98
	if (!ctx.cr6.eq) goto loc_88076D98;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88076D94;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_88076D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x88076DA8;
	__restfpr_27(ctx, base);
loc_88076DA8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88076DAC:
	// lwz r11,7880(r31)
	ctx.current_instruction = 0x88076DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.current_instruction = 0x88076DB0;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.current_instruction = 0x88076DB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x88076DC0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	ctx.current_instruction = 0x88076DC4;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,12352(r9)
	ctx.current_instruction = 0x88076DC8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 12352);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x88076DCC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.current_instruction = 0x88076DD4;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076e08
	if (!ctx.cr6.gt) goto loc_88076E08;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	ctx.current_instruction = 0x88076DF4;
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x88076DF8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	ctx.current_instruction = 0x88076DFC;
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.current_instruction = 0x88076E00;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x88076f64
	goto loc_88076F64;
loc_88076E08:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	ctx.current_instruction = 0x88076E10;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x88076E14;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	ctx.current_instruction = 0x88076E18;
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.current_instruction = 0x88076E1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x88076f64
	goto loc_88076F64;
loc_88076E24:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88076E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88076ef4
	if (!ctx.cr6.eq) goto loc_88076EF4;
	// lwz r11,7880(r31)
	ctx.current_instruction = 0x88076E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.current_instruction = 0x88076E34;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.current_instruction = 0x88076E38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x88076E44;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	ctx.current_instruction = 0x88076E48;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,12352(r9)
	ctx.current_instruction = 0x88076E4C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 12352);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x88076E50;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.current_instruction = 0x88076E58;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076e80
	if (!ctx.cr6.gt) goto loc_88076E80;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	ctx.current_instruction = 0x88076E78;
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076e8c
	goto loc_88076E8C;
loc_88076E80:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	ctx.current_instruction = 0x88076E88;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_88076E8C:
	// lfd f0,7896(r31)
	ctx.current_instruction = 0x88076E8C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// li r11,30576
	ctx.r11.s64 = 30576;
	// stfd f0,8008(r31)
	ctx.current_instruction = 0x88076E94;
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// li r10,30560
	ctx.r10.s64 = 30560;
	// lfd f13,7896(r31)
	ctx.current_instruction = 0x88076E9C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fmul f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.current_instruction = 0x88076EA4;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	ctx.current_instruction = 0x88076EB4;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
	// lfd f8,7888(r31)
	ctx.current_instruction = 0x88076EB8;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f8,30568(r31)
	ctx.current_instruction = 0x88076EBC;
	REX_STORE_U64(ctx.r31.u32 + 30568, ctx.f8.u64);
	// lfd f7,7888(r31)
	ctx.current_instruction = 0x88076EC0;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f6,f7,f27
	ctx.f6.f64 = ctx.f7.f64 * ctx.f27.f64;
	// lfd f5,7688(r31)
	ctx.current_instruction = 0x88076EC8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f4,f6,f5
	ctx.f4.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r31,r11
	ctx.current_instruction = 0x88076ED4;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f3.u32);
	// lfd f1,7888(r31)
	ctx.current_instruction = 0x88076ED8;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f0,f1,f27
	ctx.f0.f64 = ctx.f1.f64 * ctx.f27.f64;
	// lfd f2,7688(r31)
	ctx.current_instruction = 0x88076EE0;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 / ctx.f2.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r10
	ctx.current_instruction = 0x88076EEC;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// b 0x88076f7c
	goto loc_88076F7C;
loc_88076EF4:
	// stfd f31,7896(r31)
	ctx.current_instruction = 0x88076EF4;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.current_instruction = 0x88076EF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r9,144(r1)
	ctx.current_instruction = 0x88076F00;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,12352(r10)
	ctx.current_instruction = 0x88076F04;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12352);
	// lwz r8,7880(r31)
	ctx.current_instruction = 0x88076F08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.current_instruction = 0x88076F0C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.current_instruction = 0x88076F10;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	ctx.current_instruction = 0x88076F18;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.current_instruction = 0x88076F1C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.current_instruction = 0x88076F24;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076f4c
	if (!ctx.cr6.gt) goto loc_88076F4C;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	ctx.current_instruction = 0x88076F44;
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076f58
	goto loc_88076F58;
loc_88076F4C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	ctx.current_instruction = 0x88076F54;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_88076F58:
	// lfd f0,7888(r31)
	ctx.current_instruction = 0x88076F58;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f0,8008(r31)
	ctx.current_instruction = 0x88076F5C;
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7888(r31)
	ctx.current_instruction = 0x88076F60;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
loc_88076F64:
	// fmul f12,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.current_instruction = 0x88076F68;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	ctx.current_instruction = 0x88076F78;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
loc_88076F7C:
	// lwz r11,7952(r31)
	ctx.current_instruction = 0x88076F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r9,8016
	ctx.r9.s64 = 8016;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// stw r11,8000(r31)
	ctx.current_instruction = 0x88076F94;
	REX_STORE_U32(ctx.r31.u32 + 8000, ctx.r11.u32);
	// lfd f0,12344(r10)
	ctx.current_instruction = 0x88076F98;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12344);
	// lfs f13,12336(r8)
	ctx.current_instruction = 0x88076F9C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12336);
	ctx.f13.f64 = double(temp.f32);
	// li r7,7960
	ctx.r7.s64 = 7960;
	// li r5,7964
	ctx.r5.s64 = 7964;
	// lfs f12,12332(r6)
	ctx.current_instruction = 0x88076FA8;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12332);
	ctx.f12.f64 = double(temp.f32);
	// li r11,7968
	ctx.r11.s64 = 7968;
	// lfs f11,12328(r4)
	ctx.current_instruction = 0x88076FB0;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12328);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,7952(r31)
	ctx.current_instruction = 0x88076FB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x88076FC0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.current_instruction = 0x88076FC4;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r31,r9
	ctx.current_instruction = 0x88076FD4;
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f7.u32);
	// lwz r6,8000(r31)
	ctx.current_instruction = 0x88076FD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,144(r1)
	ctx.current_instruction = 0x88076FE0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f6,144(r1)
	ctx.current_instruction = 0x88076FE4;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r31,r7
	ctx.current_instruction = 0x88076FF8;
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f2.u32);
	// lwz r10,8000(r31)
	ctx.current_instruction = 0x88076FFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	ctx.current_instruction = 0x88077004;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f1,144(r1)
	ctx.current_instruction = 0x88077008;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f10,r31,r5
	ctx.current_instruction = 0x8807701C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f10.u32);
	// lwz r8,8000(r31)
	ctx.current_instruction = 0x88077020;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	ctx.current_instruction = 0x88077028;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f9,144(r1)
	ctx.current_instruction = 0x8807702C;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r31,r11
	ctx.current_instruction = 0x88077040;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f5.u32);
	// lwz r6,8000(r31)
	ctx.current_instruction = 0x88077044;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// stw r6,7956(r31)
	ctx.current_instruction = 0x88077048;
	REX_STORE_U32(ctx.r31.u32 + 7956, ctx.r6.u32);
	// lwz r5,7884(r31)
	ctx.current_instruction = 0x8807704C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7884);
	// stw r5,7944(r31)
	ctx.current_instruction = 0x88077050;
	REX_STORE_U32(ctx.r31.u32 + 7944, ctx.r5.u32);
	// stw r5,7948(r31)
	ctx.current_instruction = 0x88077054;
	REX_STORE_U32(ctx.r31.u32 + 7948, ctx.r5.u32);
	// bl 0x8806d1e8
	ctx.lr = 0x8807705C;
	sub_8806D1E8(ctx, base);
loc_8807705C:
	// stw r3,0(r25)
	ctx.current_instruction = 0x8807705C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88077068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,636(r31)
	ctx.current_instruction = 0x8807706C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 636);
	// lwz r29,652(r31)
	ctx.current_instruction = 0x88077070;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x88077088
	if (!ctx.cr6.eq) goto loc_88077088;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
loc_88077088:
	// lwz r10,632(r31)
	ctx.current_instruction = 0x88077088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// li r9,-32
	ctx.r9.s64 = -32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,208(r1)
	ctx.current_instruction = 0x88077098;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r9,212(r1)
	ctx.current_instruction = 0x8807709C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r10,216(r1)
	ctx.current_instruction = 0x880770A4;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,220(r1)
	ctx.current_instruction = 0x880770AC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x880cad40
	ctx.lr = 0x880770B4;
	sub_880CAD40(ctx, base);
loc_880770B4:
	// li r11,-16
	ctx.r11.s64 = -16;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// stw r11,224(r1)
	ctx.current_instruction = 0x880770BC;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r11,228(r1)
	ctx.current_instruction = 0x880770C4;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r9,236(r1)
	ctx.current_instruction = 0x880770CC;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r11,648(r31)
	ctx.current_instruction = 0x880770D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 648);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,232(r1)
	ctx.current_instruction = 0x880770D8;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// bl 0x880cad40
	ctx.lr = 0x880770E0;
	sub_880CAD40(ctx, base);
loc_880770E0:
	// lwz r7,21096(r31)
	ctx.current_instruction = 0x880770E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21096);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880772a0
	if (ctx.cr6.eq) goto loc_880772A0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x880770F8;
	sub_88050340(ctx, base);
loc_880770F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88077154
	if (ctx.cr6.eq) goto loc_88077154;
	// stw r30,4(r3)
	ctx.current_instruction = 0x88077100;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	ctx.current_instruction = 0x88077104;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	ctx.current_instruction = 0x88077108;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	ctx.current_instruction = 0x8807710C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	ctx.current_instruction = 0x88077110;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	ctx.current_instruction = 0x88077114;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	ctx.current_instruction = 0x88077118;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	ctx.current_instruction = 0x8807711C;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	ctx.current_instruction = 0x88077120;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	ctx.current_instruction = 0x88077124;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	ctx.current_instruction = 0x88077128;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	ctx.current_instruction = 0x8807712C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	ctx.current_instruction = 0x88077130;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	ctx.current_instruction = 0x88077134;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	ctx.current_instruction = 0x88077138;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	ctx.current_instruction = 0x8807713C;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	ctx.current_instruction = 0x88077140;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	ctx.current_instruction = 0x88077144;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	ctx.current_instruction = 0x88077148;
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	ctx.current_instruction = 0x8807714C;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x88077158
	goto loc_88077158;
loc_88077154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077158:
	// stw r3,21104(r31)
	ctx.current_instruction = 0x88077158;
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88077164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.current_instruction = 0x88077170;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.current_instruction = 0x88077178;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x88077190;
	sub_880FC618(ctx, base);
loc_88077190:
	// lwz r10,0(r25)
	ctx.current_instruction = 0x88077190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,21104(r31)
	ctx.current_instruction = 0x8807719C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x880771A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21112(r31)
	ctx.current_instruction = 0x880771A4;
	REX_STORE_U32(ctx.r31.u32 + 21112, ctx.r10.u32);
	// lwz r9,21104(r31)
	ctx.current_instruction = 0x880771A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r8,88(r9)
	ctx.current_instruction = 0x880771AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21116(r31)
	ctx.current_instruction = 0x880771B0;
	REX_STORE_U32(ctx.r31.u32 + 21116, ctx.r8.u32);
	// lwz r7,21104(r31)
	ctx.current_instruction = 0x880771B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r6,112(r7)
	ctx.current_instruction = 0x880771B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21120(r31)
	ctx.current_instruction = 0x880771BC;
	REX_STORE_U32(ctx.r31.u32 + 21120, ctx.r6.u32);
	// lwz r5,27988(r31)
	ctx.current_instruction = 0x880771C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880772a0
	if (ctx.cr6.eq) goto loc_880772A0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x880771D8;
	sub_88050340(ctx, base);
loc_880771D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88077234
	if (ctx.cr6.eq) goto loc_88077234;
	// stw r30,4(r3)
	ctx.current_instruction = 0x880771E0;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	ctx.current_instruction = 0x880771E4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	ctx.current_instruction = 0x880771E8;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	ctx.current_instruction = 0x880771EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	ctx.current_instruction = 0x880771F0;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	ctx.current_instruction = 0x880771F4;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	ctx.current_instruction = 0x880771F8;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	ctx.current_instruction = 0x880771FC;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	ctx.current_instruction = 0x88077200;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	ctx.current_instruction = 0x88077204;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	ctx.current_instruction = 0x88077208;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	ctx.current_instruction = 0x8807720C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	ctx.current_instruction = 0x88077210;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	ctx.current_instruction = 0x88077214;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	ctx.current_instruction = 0x88077218;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	ctx.current_instruction = 0x8807721C;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	ctx.current_instruction = 0x88077220;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	ctx.current_instruction = 0x88077224;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	ctx.current_instruction = 0x88077228;
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	ctx.current_instruction = 0x8807722C;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x88077238
	goto loc_88077238;
loc_88077234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077238:
	// stw r3,21108(r31)
	ctx.current_instruction = 0x88077238;
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88077244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.current_instruction = 0x88077250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.current_instruction = 0x88077258;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x88077270;
	sub_880FC618(ctx, base);
loc_88077270:
	// lwz r10,0(r25)
	ctx.current_instruction = 0x88077270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,21108(r31)
	ctx.current_instruction = 0x8807727C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x88077280;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21124(r31)
	ctx.current_instruction = 0x88077284;
	REX_STORE_U32(ctx.r31.u32 + 21124, ctx.r10.u32);
	// lwz r9,21108(r31)
	ctx.current_instruction = 0x88077288;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r8,88(r9)
	ctx.current_instruction = 0x8807728C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21128(r31)
	ctx.current_instruction = 0x88077290;
	REX_STORE_U32(ctx.r31.u32 + 21128, ctx.r8.u32);
	// lwz r7,21108(r31)
	ctx.current_instruction = 0x88077294;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r6,112(r7)
	ctx.current_instruction = 0x88077298;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21132(r31)
	ctx.current_instruction = 0x8807729C;
	REX_STORE_U32(ctx.r31.u32 + 21132, ctx.r6.u32);
loc_880772A0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880772A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880772dc
	if (!ctx.cr6.eq) goto loc_880772DC;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880772AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x880772c4
	if (!ctx.cr6.gt) goto loc_880772C4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880772C4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880772CC;
	sub_88050340(ctx, base);
loc_880772CC:
	// stw r3,28428(r31)
	ctx.current_instruction = 0x880772CC;
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r3,28432(r31)
	ctx.current_instruction = 0x880772D8;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r3.u32);
loc_880772DC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x88050340
	ctx.lr = 0x880772E8;
	sub_88050340(ctx, base);
loc_880772E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880772fc
	if (ctx.cr6.eq) goto loc_880772FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880bf788
	ctx.lr = 0x880772F8;
	sub_880BF788(ctx, base);
loc_880772F8:
	// b 0x88077300
	goto loc_88077300;
loc_880772FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077300:
	// stw r3,31552(r31)
	ctx.current_instruction = 0x88077300;
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r3.u32);
	// lbz r6,31536(r31)
	ctx.current_instruction = 0x88077304;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 31536);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x88077314
	if (ctx.cr6.gt) goto loc_88077314;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_88077314:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,800(r31)
	ctx.current_instruction = 0x88077318;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r4,796(r31)
	ctx.current_instruction = 0x8807731C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// bl 0x880bf400
	ctx.lr = 0x88077324;
	sub_880BF400(ctx, base);
loc_88077324:
	// lwz r11,1360(r31)
	ctx.current_instruction = 0x88077324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28152(r31)
	ctx.current_instruction = 0x88077334;
	REX_STORE_U32(ctx.r31.u32 + 28152, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88077348
	if (!ctx.cr6.gt) goto loc_88077348;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88077348:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88077350;
	sub_88050340(ctx, base);
loc_88077350:
	// stw r3,28148(r31)
	ctx.current_instruction = 0x88077350;
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1360(r31)
	ctx.current_instruction = 0x8807735C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2292(r31)
	ctx.current_instruction = 0x88077368;
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8807737c
	if (!ctx.cr6.gt) goto loc_8807737C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8807737C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88077384;
	sub_88050340(ctx, base);
loc_88077384:
	// stw r3,2268(r31)
	ctx.current_instruction = 0x88077384;
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,2292(r31)
	ctx.current_instruction = 0x88077390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880773A0;
	sub_88052D90(ctx, base);
loc_880773A0:
	// lwz r10,2268(r31)
	ctx.current_instruction = 0x880773A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// stw r10,2264(r31)
	ctx.current_instruction = 0x880773A4;
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r10.u32);
	// lwz r11,2292(r31)
	ctx.current_instruction = 0x880773A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880773bc
	if (!ctx.cr6.gt) goto loc_880773BC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880773BC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880773C4;
	sub_88050340(ctx, base);
loc_880773C4:
	// stw r3,2276(r31)
	ctx.current_instruction = 0x880773C4;
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,2292(r31)
	ctx.current_instruction = 0x880773D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880773E0;
	sub_88052D90(ctx, base);
loc_880773E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f4798
	ctx.lr = 0x880773E8;
	sub_880F4798(ctx, base);
loc_880773E8:
	// stw r3,0(r25)
	ctx.current_instruction = 0x880773E8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880773F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880774b4
	if (!ctx.cr6.eq) goto loc_880774B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8806efc0
	ctx.lr = 0x8807740C;
	sub_8806EFC0(ctx, base);
loc_8807740C:
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,12928
	ctx.r4.s64 = ctx.r31.s64 + 12928;
	// lwz r5,8264(r31)
	ctx.current_instruction = 0x88077414;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x880ec9e8
	ctx.lr = 0x8807741C;
	sub_880EC9E8(ctx, base);
loc_8807741C:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,14976
	ctx.r4.s64 = ctx.r31.s64 + 14976;
	// lwz r5,8268(r31)
	ctx.current_instruction = 0x88077424;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077430;
	sub_880EC9E8(ctx, base);
loc_88077430:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,16000
	ctx.r4.s64 = ctx.r31.s64 + 16000;
	// lwz r5,8272(r31)
	ctx.current_instruction = 0x88077438;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077444;
	sub_880EC9E8(ctx, base);
loc_88077444:
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,17024
	ctx.r4.s64 = ctx.r31.s64 + 17024;
	// lwz r5,8276(r31)
	ctx.current_instruction = 0x8807744C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077458;
	sub_880EC9E8(ctx, base);
loc_88077458:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806efc0
	ctx.lr = 0x88077464;
	sub_8806EFC0(ctx, base);
loc_88077464:
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,8320
	ctx.r4.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.current_instruction = 0x8807746C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x880ec9e8
	ctx.lr = 0x88077474;
	sub_880EC9E8(ctx, base);
loc_88077474:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,10368
	ctx.r4.s64 = ctx.r31.s64 + 10368;
	// lwz r5,8268(r31)
	ctx.current_instruction = 0x8807747C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077488;
	sub_880EC9E8(ctx, base);
loc_88077488:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,11392
	ctx.r4.s64 = ctx.r31.s64 + 11392;
	// lwz r5,8272(r31)
	ctx.current_instruction = 0x88077490;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x8807749C;
	sub_880EC9E8(ctx, base);
loc_8807749C:
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,12416
	ctx.r4.s64 = ctx.r31.s64 + 12416;
	// lwz r5,8276(r31)
	ctx.current_instruction = 0x880774A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774B0;
	sub_880EC9E8(ctx, base);
loc_880774B0:
	// b 0x88077520
	goto loc_88077520;
loc_880774B4:
	// addi r29,r31,8320
	ctx.r29.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.current_instruction = 0x880774B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774C8;
	sub_880EC9E8(ctx, base);
loc_880774C8:
	// addi r28,r31,10368
	ctx.r28.s64 = ctx.r31.s64 + 10368;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8268(r31)
	ctx.current_instruction = 0x880774D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774E0;
	sub_880EC9E8(ctx, base);
loc_880774E0:
	// addi r27,r31,11392
	ctx.r27.s64 = ctx.r31.s64 + 11392;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8272(r31)
	ctx.current_instruction = 0x880774E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774F8;
	sub_880EC9E8(ctx, base);
loc_880774F8:
	// addi r26,r31,12416
	ctx.r26.s64 = ctx.r31.s64 + 12416;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,8276(r31)
	ctx.current_instruction = 0x88077500;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077510;
	sub_880EC9E8(ctx, base);
loc_88077510:
	// stw r29,8304(r31)
	ctx.current_instruction = 0x88077510;
	REX_STORE_U32(ctx.r31.u32 + 8304, ctx.r29.u32);
	// stw r28,8308(r31)
	ctx.current_instruction = 0x88077514;
	REX_STORE_U32(ctx.r31.u32 + 8308, ctx.r28.u32);
	// stw r27,8312(r31)
	ctx.current_instruction = 0x88077518;
	REX_STORE_U32(ctx.r31.u32 + 8312, ctx.r27.u32);
	// stw r26,8316(r31)
	ctx.current_instruction = 0x8807751C;
	REX_STORE_U32(ctx.r31.u32 + 8316, ctx.r26.u32);
loc_88077520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f108
	ctx.lr = 0x88077528;
	sub_8806F108(ctx, base);
loc_88077528:
	// lwz r11,6864(r31)
	ctx.current_instruction = 0x88077528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880775e4
	if (ctx.cr6.eq) goto loc_880775E4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x88077540;
	sub_88050340(ctx, base);
loc_88077540:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807759c
	if (ctx.cr6.eq) goto loc_8807759C;
	// stw r30,4(r3)
	ctx.current_instruction = 0x88077548;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	ctx.current_instruction = 0x8807754C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	ctx.current_instruction = 0x88077550;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	ctx.current_instruction = 0x88077554;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	ctx.current_instruction = 0x88077558;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	ctx.current_instruction = 0x8807755C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	ctx.current_instruction = 0x88077560;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	ctx.current_instruction = 0x88077564;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	ctx.current_instruction = 0x88077568;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	ctx.current_instruction = 0x8807756C;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	ctx.current_instruction = 0x88077570;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	ctx.current_instruction = 0x88077574;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	ctx.current_instruction = 0x88077578;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	ctx.current_instruction = 0x8807757C;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	ctx.current_instruction = 0x88077580;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	ctx.current_instruction = 0x88077584;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	ctx.current_instruction = 0x88077588;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	ctx.current_instruction = 0x8807758C;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	ctx.current_instruction = 0x88077590;
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	ctx.current_instruction = 0x88077594;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x880775a0
	goto loc_880775A0;
loc_8807759C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880775A0:
	// stw r3,7776(r31)
	ctx.current_instruction = 0x880775A0;
	REX_STORE_U32(ctx.r31.u32 + 7776, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880775AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.current_instruction = 0x880775B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.current_instruction = 0x880775C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x880775D8;
	sub_880FC618(ctx, base);
loc_880775D8:
	// lwz r10,0(r25)
	ctx.current_instruction = 0x880775D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_880775E4:
	// lwz r11,7980(r31)
	ctx.current_instruction = 0x880775E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880775f4
	if (ctx.cr6.eq) goto loc_880775F4;
	// stw r30,7976(r31)
	ctx.current_instruction = 0x880775F0;
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
loc_880775F4:
	// lwz r11,2940(r31)
	ctx.current_instruction = 0x880775F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r11,2924(r31)
	ctx.current_instruction = 0x880775F8;
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r30,2928(r31)
	ctx.current_instruction = 0x880775FC;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// lwz r10,3112(r31)
	ctx.current_instruction = 0x88077600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// stw r10,2932(r31)
	ctx.current_instruction = 0x88077604;
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// lwz r9,3116(r31)
	ctx.current_instruction = 0x88077608;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// stw r9,2936(r31)
	ctx.current_instruction = 0x8807760C;
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r9.u32);
	// lwz r8,3908(r31)
	ctx.current_instruction = 0x88077610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3908);
	// stw r8,3892(r31)
	ctx.current_instruction = 0x88077614;
	REX_STORE_U32(ctx.r31.u32 + 3892, ctx.r8.u32);
	// stw r30,3896(r31)
	ctx.current_instruction = 0x88077618;
	REX_STORE_U32(ctx.r31.u32 + 3896, ctx.r30.u32);
	// lwz r7,4080(r31)
	ctx.current_instruction = 0x8807761C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4080);
	// stw r7,3900(r31)
	ctx.current_instruction = 0x88077620;
	REX_STORE_U32(ctx.r31.u32 + 3900, ctx.r7.u32);
	// lwz r6,4084(r31)
	ctx.current_instruction = 0x88077624;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4084);
	// stw r6,3904(r31)
	ctx.current_instruction = 0x88077628;
	REX_STORE_U32(ctx.r31.u32 + 3904, ctx.r6.u32);
	// lwz r5,4876(r31)
	ctx.current_instruction = 0x8807762C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4876);
	// stw r5,4860(r31)
	ctx.current_instruction = 0x88077630;
	REX_STORE_U32(ctx.r31.u32 + 4860, ctx.r5.u32);
	// stw r30,4864(r31)
	ctx.current_instruction = 0x88077634;
	REX_STORE_U32(ctx.r31.u32 + 4864, ctx.r30.u32);
	// lwz r4,5048(r31)
	ctx.current_instruction = 0x88077638;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 5048);
	// stw r4,4868(r31)
	ctx.current_instruction = 0x8807763C;
	REX_STORE_U32(ctx.r31.u32 + 4868, ctx.r4.u32);
	// lwz r3,5052(r31)
	ctx.current_instruction = 0x88077640;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5052);
	// stw r3,4872(r31)
	ctx.current_instruction = 0x88077644;
	REX_STORE_U32(ctx.r31.u32 + 4872, ctx.r3.u32);
	// lwz r11,5844(r31)
	ctx.current_instruction = 0x88077648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5844);
	// stw r11,5828(r31)
	ctx.current_instruction = 0x8807764C;
	REX_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// stw r30,5832(r31)
	ctx.current_instruction = 0x88077650;
	REX_STORE_U32(ctx.r31.u32 + 5832, ctx.r30.u32);
	// lwz r10,6016(r31)
	ctx.current_instruction = 0x88077654;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6016);
	// stw r10,5836(r31)
	ctx.current_instruction = 0x88077658;
	REX_STORE_U32(ctx.r31.u32 + 5836, ctx.r10.u32);
	// lwz r9,6020(r31)
	ctx.current_instruction = 0x8807765C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6020);
	// stw r9,5840(r31)
	ctx.current_instruction = 0x88077660;
	REX_STORE_U32(ctx.r31.u32 + 5840, ctx.r9.u32);
	// lwz r8,21160(r31)
	ctx.current_instruction = 0x88077664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88077750
	if (ctx.cr6.eq) goto loc_88077750;
	// lwz r11,1376(r31)
	ctx.current_instruction = 0x88077670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88076d78
	if (!ctx.cr6.gt) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x8807767C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88076d78
	if (!ctx.cr6.gt) goto loc_88076D78;
	// stw r24,21244(r31)
	ctx.current_instruction = 0x88077688;
	REX_STORE_U32(ctx.r31.u32 + 21244, ctx.r24.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r24,21248(r31)
	ctx.current_instruction = 0x88077690;
	REX_STORE_U32(ctx.r31.u32 + 21248, ctx.r24.u32);
	// addi r29,r31,21200
	ctx.r29.s64 = ctx.r31.s64 + 21200;
	// stw r24,21252(r31)
	ctx.current_instruction = 0x88077698;
	REX_STORE_U32(ctx.r31.u32 + 21252, ctx.r24.u32);
loc_8807769C:
	// lwz r11,804(r31)
	ctx.current_instruction = 0x8807769C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// bl 0x88050340
	ctx.lr = 0x880776B4;
	sub_88050340(ctx, base);
loc_880776B4:
	// stw r3,-36(r29)
	ctx.current_instruction = 0x880776B4;
	REX_STORE_U32(ctx.r29.u32 + -36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,804(r31)
	ctx.current_instruction = 0x880776C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// stw r11,-16(r29)
	ctx.current_instruction = 0x880776D0;
	REX_STORE_U32(ctx.r29.u32 + -16, ctx.r11.u32);
	// lwz r10,804(r31)
	ctx.current_instruction = 0x880776D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r11,4(r29)
	ctx.current_instruction = 0x880776E0;
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x8807769c
	if (ctx.cr6.lt) goto loc_8807769C;
	// addi r29,r31,21224
	ctx.r29.s64 = ctx.r31.s64 + 21224;
loc_880776EC:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880776EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88050340
	ctx.lr = 0x880776FC;
	sub_88050340(ctx, base);
loc_880776FC:
	// stw r3,0(r29)
	ctx.current_instruction = 0x880776FC;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88077708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88077718;
	sub_88052D90(ctx, base);
loc_88077718:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x880776ec
	if (ctx.cr6.lt) goto loc_880776EC;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88077728;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88050340
	ctx.lr = 0x88077738;
	sub_88050340(ctx, base);
loc_88077738:
	// stw r3,21256(r31)
	ctx.current_instruction = 0x88077738;
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x8807774C;
	__restfpr_27(ctx, base);
loc_8807774C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88077750:
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r31,21220
	ctx.r11.s64 = ctx.r31.s64 + 21220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8807775C:
	// stw r30,-16(r11)
	ctx.current_instruction = 0x8807775C;
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r30.u32);
	// stw r30,-36(r11)
	ctx.current_instruction = 0x88077760;
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r30.u32);
	// stw r30,-56(r11)
	ctx.current_instruction = 0x88077764;
	REX_STORE_U32(ctx.r11.u32 + -56, ctx.r30.u32);
	// stwu r30,4(r11)
	ctx.current_instruction = 0x88077768;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8807775c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807775C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x88077780;
	__restfpr_27(ctx, base);
loc_88077780:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111338) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88111338);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111338;
	ctx.current_instruction = 0x88111338;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	ctx.current_instruction = 0x88111340;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	ctx.current_instruction = 0x88111344;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x88111348;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,96(r3)
	ctx.current_instruction = 0x8811134C;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,76(r3)
	ctx.current_instruction = 0x88111350;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x88111354;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x88111358;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	ctx.current_instruction = 0x8811135C;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x88111360;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,0(r3)
	ctx.current_instruction = 0x88111364;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88111368;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	ctx.current_instruction = 0x8811136C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x88111370;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x88111374;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	ctx.current_instruction = 0x88111378;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x8811137C;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x88111380;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881119A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881119A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881119A8) {
			switch (rex_dispatch_address) {
				case 0x881119B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881119A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881119B0: goto loc_881119B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881119B0;
	__savegprlr_26(ctx, base);
loc_881119B0:
	// lwz r10,116(r3)
	ctx.current_instruction = 0x881119B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x881119B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88111bec
	if (ctx.cr6.eq) goto loc_88111BEC;
	// lwz r9,100(r3)
	ctx.current_instruction = 0x881119C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88111bec
	if (ctx.cr6.eq) goto loc_88111BEC;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x881119CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88111bec
	if (ctx.cr6.eq) goto loc_88111BEC;
	// lwz r10,96(r3)
	ctx.current_instruction = 0x881119D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88111bec
	if (ctx.cr6.eq) goto loc_88111BEC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r31,r26,r8
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// divw r28,r31,r11
	ctx.r28.u64 = uint32_t((ctx.r11.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r31.s32 / ctx.r11.s32 : 0);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r27,r7,r8
	ctx.r27.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88111a38
	if (!ctx.cr6.gt) goto loc_88111A38;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_88111A38:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x88111bec
	if (!ctx.cr6.gt) goto loc_88111BEC;
	// lwz r11,104(r3)
	ctx.current_instruction = 0x88111A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88111a5c
	if (ctx.cr6.eq) goto loc_88111A5C;
	// addi r11,r27,-256
	ctx.r11.s64 = ctx.r27.s64 + -256;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x88111a60
	goto loc_88111A60;
loc_88111A5C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_88111A60:
	// mullw r11,r27,r4
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// lwz r10,124(r3)
	ctx.current_instruction = 0x88111A64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mullw r8,r30,r4
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge 0x88111ae0
	if (!ctx.cr0.lt) goto loc_88111AE0;
	// subf r9,r31,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r31.u64;
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r27
	ctx.r7.u64 = uint32_t((ctx.r27.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r9.s32 / ctx.r27.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// andc r11,r27,r6
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r6.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88111ad4
	if (!ctx.cr6.lt) goto loc_88111AD4;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
loc_88111AA8:
	// lwz r11,132(r3)
	ctx.current_instruction = 0x88111AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88111acc
	if (!ctx.cr6.gt) goto loc_88111ACC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_88111ABC:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88111ABC;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r9,0(r10)
	ctx.current_instruction = 0x88111AC0;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x88111abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111ABC;
loc_88111ACC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88111aa8
	if (!ctx.cr0.eq) goto loc_88111AA8;
loc_88111AD4:
	// mullw r11,r7,r27
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_88111AE0:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88111b50
	if (!ctx.cr6.lt) goto loc_88111B50;
	// subf r29,r4,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r4.u64;
loc_88111AEC:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lwz r8,132(r3)
	ctx.current_instruction = 0x88111AF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x88111b44
	if (!ctx.cr6.gt) goto loc_88111B44;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_88111B18:
	// lhzx r8,r4,r11
	ctx.current_instruction = 0x88111B18;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x88111B1C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,0(r10)
	ctx.current_instruction = 0x88111B38;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x88111b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111B18;
loc_88111B44:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x88111aec
	if (!ctx.cr0.eq) goto loc_88111AEC;
loc_88111B50:
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88111bec
	if (!ctx.cr6.lt) goto loc_88111BEC;
	// subf r4,r28,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r28.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_88111B60:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lwz r7,132(r3)
	ctx.current_instruction = 0x88111B64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bge cr6,0x88111bc4
	if (!ctx.cr6.lt) goto loc_88111BC4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88111be0
	if (!ctx.cr6.gt) goto loc_88111BE0;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_88111B94:
	// lhzx r8,r5,r11
	ctx.current_instruction = 0x88111B94;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x88111B98;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,2(r10)
	ctx.current_instruction = 0x88111BB4;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x88111b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111B94;
	// b 0x88111be0
	goto loc_88111BE0;
loc_88111BC4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88111be0
	if (!ctx.cr6.gt) goto loc_88111BE0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_88111BD4:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88111BD4;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88111BD8;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88111bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111BD4;
loc_88111BE0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x88111b60
	if (!ctx.cr0.eq) goto loc_88111B60;
loc_88111BEC:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811B2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811B2D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811B2D8) {
			switch (rex_dispatch_address) {
				case 0x8811B2E0:
				case 0x8811B320:
				case 0x8811B360:
				case 0x8811B384:
				case 0x8811B3A8:
				case 0x8811B3CC:
				case 0x8811B428:
				case 0x8811B47C:
				case 0x8811B4C0:
				case 0x8811B4DC:
				case 0x8811B524:
				case 0x8811B554:
				case 0x8811B584:
				case 0x8811B5D0:
				case 0x8811B600:
				case 0x8811B630:
				case 0x8811B68C:
				case 0x8811B6B0:
				case 0x8811B6E0:
				case 0x8811B750:
				case 0x8811B7AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811B2D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811B2E0: goto loc_8811B2E0;
		case 0x8811B320: goto loc_8811B320;
		case 0x8811B360: goto loc_8811B360;
		case 0x8811B384: goto loc_8811B384;
		case 0x8811B3A8: goto loc_8811B3A8;
		case 0x8811B3CC: goto loc_8811B3CC;
		case 0x8811B428: goto loc_8811B428;
		case 0x8811B47C: goto loc_8811B47C;
		case 0x8811B4C0: goto loc_8811B4C0;
		case 0x8811B4DC: goto loc_8811B4DC;
		case 0x8811B524: goto loc_8811B524;
		case 0x8811B554: goto loc_8811B554;
		case 0x8811B584: goto loc_8811B584;
		case 0x8811B5D0: goto loc_8811B5D0;
		case 0x8811B600: goto loc_8811B600;
		case 0x8811B630: goto loc_8811B630;
		case 0x8811B68C: goto loc_8811B68C;
		case 0x8811B6B0: goto loc_8811B6B0;
		case 0x8811B6E0: goto loc_8811B6E0;
		case 0x8811B750: goto loc_8811B750;
		case 0x8811B7AC: goto loc_8811B7AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8811B2E0;
	__savegprlr_22(ctx, base);
loc_8811B2E0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8811B2E0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	ctx.current_instruction = 0x8811B2E4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r22,96(r1)
	ctx.current_instruction = 0x8811B2F0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r26,r4,-24
	ctx.r26.s64 = ctx.r4.s64 + -24;
	// stw r22,88(r1)
	ctx.current_instruction = 0x8811B2F8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	ctx.current_instruction = 0x8811B2FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r25)
	ctx.current_instruction = 0x8811B304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r26,92(r1)
	ctx.current_instruction = 0x8811B308;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x8811B30C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r22,104(r1)
	ctx.current_instruction = 0x8811B310;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8811B314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8811B320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811B320:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// cmplwi cr6,r26,24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 24, ctx.xer);
	// bge cr6,0x8811b348
	if (!ctx.cr6.lt) goto loc_8811B348;
loc_8811B334:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811B348:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811B360;
	sub_881196F8(ctx, base);
loc_8811B360:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811B384;
	sub_88119390(ctx, base);
loc_8811B384:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B3A8;
	sub_88119210(ctx, base);
loc_8811B3A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B3CC;
	sub_88119210(ctx, base);
loc_8811B3CC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811B3D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// li r30,24
	ctx.r30.s64 = 24;
	// lhz r10,52(r11)
	ctx.current_instruction = 0x8811B3E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// lwz r24,104(r1)
	ctx.current_instruction = 0x8811B3F0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,92(r11)
	ctx.current_instruction = 0x8811B3F8;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r24.u32);
	// bne cr6,0x8811b44c
	if (!ctx.cr6.eq) goto loc_8811B44C;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811B400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// addic. r30,r10,-24
	ctx.xer.ca = ctx.r10.u32 > 23;
	ctx.r30.s64 = ctx.r10.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811b7c8
	if (ctx.cr0.eq) goto loc_8811B7C8;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8811B410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811B41C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811B428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811B428:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// ld r11,8(r25)
	ctx.current_instruction = 0x8811B434;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r25)
	ctx.current_instruction = 0x8811B440;
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811B44C:
	// lhz r5,80(r1)
	ctx.current_instruction = 0x8811B44C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8811b488
	if (ctx.cr6.eq) goto loc_8811B488;
	// addi r30,r5,24
	ctx.r30.s64 = ctx.r5.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811B47C;
	sub_881198A8(ctx, base);
loc_8811B47C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
loc_8811B488:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811B4A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B4C0;
	sub_880CB2C0(ctx, base);
loc_8811B4C0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8811B4D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8811B4DC;
	sub_88052D90(ctx, base);
loc_8811B4DC:
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811B4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B4E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r10,88(r11)
	ctx.current_instruction = 0x8811B4EC;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.current_instruction = 0x8811B4F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r8,88(r9)
	ctx.current_instruction = 0x8811B4F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8811B4F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x8811b774
	if (ctx.cr6.eq) goto loc_8811B774;
loc_8811B500:
	// addi r30,r30,18
	ctx.r30.s64 = ctx.r30.s64 + 18;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119528
	ctx.lr = 0x8811B524;
	sub_88119528(ctx, base);
loc_8811B524:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.current_instruction = 0x8811B538;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r10,0(r11)
	ctx.current_instruction = 0x8811B54C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x88119528
	ctx.lr = 0x8811B554;
	sub_88119528(ctx, base);
loc_8811B554:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.current_instruction = 0x8811B568;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r10,8(r11)
	ctx.current_instruction = 0x8811B57C;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x88119210
	ctx.lr = 0x8811B584;
	sub_88119210(ctx, base);
loc_8811B584:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x8811B590;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,16(r11)
	ctx.current_instruction = 0x8811B598;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B59C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,16(r10)
	ctx.current_instruction = 0x8811B5A0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x8811b760
	if (ctx.cr6.lt) goto loc_8811B760;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811B5D0;
	sub_88119390(ctx, base);
loc_8811B5D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8811B5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,20(r10)
	ctx.current_instruction = 0x8811B5F8;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x88119390
	ctx.lr = 0x8811B600;
	sub_88119390(ctx, base);
loc_8811B600:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8811B60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,24(r10)
	ctx.current_instruction = 0x8811B628;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x88119390
	ctx.lr = 0x8811B630;
	sub_88119390(ctx, base);
loc_8811B630:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B63C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8811B640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,28(r11)
	ctx.current_instruction = 0x8811B644;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.current_instruction = 0x8811B64C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhz r9,16(r10)
	ctx.current_instruction = 0x8811B654;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811b718
	if (ctx.cr6.eq) goto loc_8811B718;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r30
	ctx.r28.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811B680;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B68C;
	sub_880CB2C0(ctx, base);
loc_8811B68C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.current_instruction = 0x8811B6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,32(r11)
	ctx.current_instruction = 0x8811B6A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8811B6B0;
	sub_88052D90(ctx, base);
loc_8811B6B0:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B6B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r11,28(r10)
	ctx.current_instruction = 0x8811B6B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811b714
	if (ctx.cr6.eq) goto loc_8811B714;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8811B6C8:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B6E0;
	sub_88119210(ctx, base);
loc_8811B6E0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811B6EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x8811B6F4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.current_instruction = 0x8811B6F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// sthx r10,r9,r29
	ctx.current_instruction = 0x8811B6FC;
	REX_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u16);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.current_instruction = 0x8811B708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8811b6c8
	if (ctx.cr6.lt) goto loc_8811B6C8;
loc_8811B714:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8811B718:
	// lhz r9,16(r10)
	ctx.current_instruction = 0x8811B718;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addic. r5,r7,-12
	ctx.xer.ca = ctx.r7.u32 > 11;
	ctx.r5.s64 = ctx.r7.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8811b760
	if (ctx.cr0.eq) goto loc_8811B760;
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811B750;
	sub_881198A8(ctx, base);
loc_8811B750:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811B75C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8811B760:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8811B76C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8811b500
	if (ctx.cr6.lt) goto loc_8811B500;
loc_8811B774:
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811B774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,52(r11)
	ctx.current_instruction = 0x8811B778;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,52(r11)
	ctx.current_instruction = 0x8811B780;
	REX_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8811B784;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r7.u64;
	// subf. r30,r30,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811b7c8
	if (ctx.cr0.eq) goto loc_8811B7C8;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8811B794;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811B7A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811B7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811B7AC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// ld r10,8(r25)
	ctx.current_instruction = 0x8811B7B8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	ctx.current_instruction = 0x8811B7C4;
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
loc_8811B7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124298) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124298;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124298) {
			switch (rex_dispatch_address) {
				case 0x881242B8:
				case 0x881242C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124298;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881242B8: goto loc_881242B8;
		case 0x881242C8: goto loc_881242C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812429C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881242A0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881242A4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881242A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881242AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88123a90
	ctx.lr = 0x881242B8;
	sub_88123A90(ctx, base);
loc_881242B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88124308
	if (ctx.cr6.lt) goto loc_88124308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88123ec0
	ctx.lr = 0x881242C8;
	sub_88123EC0(ctx, base);
loc_881242C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88124308
	if (ctx.cr6.lt) goto loc_88124308;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,56(r31)
	ctx.current_instruction = 0x881242D8;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r10,0(r31)
	ctx.current_instruction = 0x881242DC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x881242E0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// std r11,32(r31)
	ctx.current_instruction = 0x881242E4;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	ctx.current_instruction = 0x881242E8;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r11,128(r31)
	ctx.current_instruction = 0x881242EC;
	REX_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
	// stw r11,68(r31)
	ctx.current_instruction = 0x881242F0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x881242F4;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881242F8;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x881242FC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x88124300;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	ctx.current_instruction = 0x88124304;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_88124308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8812430C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88124314;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88124318;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881255E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881255E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881255E8) {
			switch (rex_dispatch_address) {
				case 0x88125608:
				case 0x88125618:
				case 0x88125634:
				case 0x88125650:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881255E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125608: goto loc_88125608;
		case 0x88125618: goto loc_88125618;
		case 0x88125634: goto loc_88125634;
		case 0x88125650: goto loc_88125650;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881255EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881255F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881255F4;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881255F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88125600;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88124f50
	ctx.lr = 0x88125608;
	sub_88124F50(ctx, base);
loc_88125608:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125650
	if (ctx.cr6.lt) goto loc_88125650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88125218
	ctx.lr = 0x88125618;
	sub_88125218(ctx, base);
loc_88125618:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125650
	if (ctx.cr6.lt) goto loc_88125650;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88125620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,48(r11)
	ctx.current_instruction = 0x8812562C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x880cb318
	ctx.lr = 0x88125634;
	sub_880CB318(ctx, base);
loc_88125634:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125650
	if (ctx.cr6.lt) goto loc_88125650;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812563C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,48(r11)
	ctx.current_instruction = 0x88125648;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x880cb318
	ctx.lr = 0x88125650;
	sub_880CB318(ctx, base);
loc_88125650:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88125654;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8812565C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88126BE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88126BE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88126BE8) {
			switch (rex_dispatch_address) {
				case 0x88126C20:
				case 0x88126C9C:
				case 0x88126CBC:
				case 0x88126CDC:
				case 0x88126CF0:
				case 0x88126D04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88126BE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88126C20: goto loc_88126C20;
		case 0x88126C9C: goto loc_88126C9C;
		case 0x88126CBC: goto loc_88126CBC;
		case 0x88126CDC: goto loc_88126CDC;
		case 0x88126CF0: goto loc_88126CF0;
		case 0x88126D04: goto loc_88126D04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88126BEC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88126BF0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88126BF4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88126BF8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88126C00;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,356(r3)
	ctx.current_instruction = 0x88126C08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r30,4(r31)
	ctx.current_instruction = 0x88126C14;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,440(r31)
	ctx.current_instruction = 0x88126C18;
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x88126C20;
	sub_88052D90(ctx, base);
loc_88126C20:
	// lwz r10,460(r31)
	ctx.current_instruction = 0x88126C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88126c4c
	if (ctx.cr6.eq) goto loc_88126C4C;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88126C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.current_instruction = 0x88126C30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sraw r11,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x88126c84
	goto loc_88126C84;
loc_88126C4C:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x88126C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88126C54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x88126c78
	if (ctx.cr6.eq) goto loc_88126C78;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.current_instruction = 0x88126C64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x88126c84
	goto loc_88126C84;
loc_88126C78:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_88126C84:
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88126C84;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,324(r31)
	ctx.current_instruction = 0x88126C8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88126C9C;
	sub_88052D90(ctx, base);
loc_88126C9C:
	// lwz r8,460(r31)
	ctx.current_instruction = 0x88126C9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88126cbc
	if (ctx.cr6.eq) goto loc_88126CBC;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88126CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,328(r31)
	ctx.current_instruction = 0x88126CB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88126CBC;
	sub_88052D90(ctx, base);
loc_88126CBC:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126CBC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,360(r31)
	ctx.current_instruction = 0x88126CC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r30,388(r31)
	ctx.current_instruction = 0x88126CCC;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	ctx.current_instruction = 0x88126CD0;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,372(r31)
	ctx.current_instruction = 0x88126CD4;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x88126CDC;
	sub_88052D90(ctx, base);
loc_88126CDC:
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88126CDC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,364(r31)
	ctx.current_instruction = 0x88126CE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x88052d90
	ctx.lr = 0x88126CF0;
	sub_88052D90(ctx, base);
loc_88126CF0:
	// lhz r9,34(r31)
	ctx.current_instruction = 0x88126CF0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,368(r31)
	ctx.current_instruction = 0x88126CF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x88052d90
	ctx.lr = 0x88126D04;
	sub_88052D90(ctx, base);
loc_88126D04:
	// li r8,64
	ctx.r8.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,296(r31)
	ctx.current_instruction = 0x88126D0C;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88126D14;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88126D1C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88126D20;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812BE50) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812BE50);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BE50;
	ctx.current_instruction = 0x8812BE50;
	// lwz r11,76(r3)
	ctx.current_instruction = 0x8812BE50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812be94
	if (ctx.cr6.eq) goto loc_8812BE94;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8812BE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,704(r11)
	ctx.current_instruction = 0x8812BE60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812be8c
	if (ctx.cr6.eq) goto loc_8812BE8C;
	// lwz r8,28(r3)
	ctx.current_instruction = 0x8812BE6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r3)
	ctx.current_instruction = 0x8812BE70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,24(r3)
	ctx.current_instruction = 0x8812BE74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8812BE78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8812be94
	if (ctx.cr6.lt) goto loc_8812BE94;
loc_8812BE8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812BE94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812C528) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812C528;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812C528) {
			switch (rex_dispatch_address) {
				case 0x8812C530:
				case 0x8812C600:
				case 0x8812C650:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812C528;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812C530: goto loc_8812C530;
		case 0x8812C600: goto loc_8812C600;
		case 0x8812C650: goto loc_8812C650;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8812C530;
	__savegprlr_28(ctx, base);
loc_8812C530:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8812C530;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// ble cr6,0x8812c55c
	if (!ctx.cr6.gt) goto loc_8812C55C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8812C55C:
	// lwz r9,40(r31)
	ctx.current_instruction = 0x8812C55C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8812c65c
	if (!ctx.cr6.lt) goto loc_8812C65C;
	// lwz r10,48(r31)
	ctx.current_instruction = 0x8812C568;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812c5c0
	if (ctx.cr6.eq) goto loc_8812C5C0;
	// subfic r11,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8812c584
	if (ctx.cr6.lt) goto loc_8812C584;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8812C584:
	// lwz r8,44(r31)
	ctx.current_instruction = 0x8812C584;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,36(r31)
	ctx.current_instruction = 0x8812C590;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,48(r31)
	ctx.current_instruction = 0x8812C598;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	ctx.current_instruction = 0x8812C5B4;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	ctx.current_instruction = 0x8812C5B8;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,40(r31)
	ctx.current_instruction = 0x8812C5BC;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_8812C5C0:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8812c634
	if (ctx.cr6.gt) goto loc_8812C634;
loc_8812C5CC:
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8812C5CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812c634
	if (!ctx.cr6.gt) goto loc_8812C634;
	// lwz r10,36(r31)
	ctx.current_instruction = 0x8812C5D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.current_instruction = 0x8812C5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.current_instruction = 0x8812C5E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	ctx.current_instruction = 0x8812C5EC;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8812C5F0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	ctx.current_instruction = 0x8812C5F4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8812C600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812C600:
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8812C600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.current_instruction = 0x8812C604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,36(r31)
	ctx.current_instruction = 0x8812C610;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	ctx.current_instruction = 0x8812C61C;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	ctx.current_instruction = 0x8812C624;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r4,36(r31)
	ctx.current_instruction = 0x8812C628;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x8812c5cc
	if (!ctx.cr6.gt) goto loc_8812C5CC;
loc_8812C634:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8812c65c
	if (!ctx.cr6.lt) goto loc_8812C65C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c398
	ctx.lr = 0x8812C650;
	sub_8812C398(ctx, base);
loc_8812C650:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812c688
	if (ctx.cr6.lt) goto loc_8812C688;
loc_8812C65C:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C65C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,36(r31)
	ctx.current_instruction = 0x8812C668;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subf r7,r30,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r6,r10,23968
	ctx.r6.s64 = ctx.r10.s64 + 23968;
	// stw r7,40(r31)
	ctx.current_instruction = 0x8812C674;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r4,r9,r6
	ctx.current_instruction = 0x8812C67C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// stw r3,0(r28)
	ctx.current_instruction = 0x8812C684;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8812C688:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88134418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88134418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88134418) {
			switch (rex_dispatch_address) {
				case 0x88134420:
				case 0x88134440:
				case 0x88134450:
				case 0x88134460:
				case 0x88134494:
				case 0x881344B4:
				case 0x881344D8:
				case 0x881344E8:
				case 0x881344F8:
				case 0x88134508:
				case 0x88134518:
				case 0x88134528:
				case 0x88134538:
				case 0x88134548:
				case 0x88134550:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88134418;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88134420: goto loc_88134420;
		case 0x88134440: goto loc_88134440;
		case 0x88134450: goto loc_88134450;
		case 0x88134460: goto loc_88134460;
		case 0x88134494: goto loc_88134494;
		case 0x881344B4: goto loc_881344B4;
		case 0x881344D8: goto loc_881344D8;
		case 0x881344E8: goto loc_881344E8;
		case 0x881344F8: goto loc_881344F8;
		case 0x88134508: goto loc_88134508;
		case 0x88134518: goto loc_88134518;
		case 0x88134528: goto loc_88134528;
		case 0x88134538: goto loc_88134538;
		case 0x88134548: goto loc_88134548;
		case 0x88134550: goto loc_88134550;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88134420;
	__savegprlr_29(ctx, base);
loc_88134420:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88134420;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134550
	if (ctx.cr6.eq) goto loc_88134550;
	// lwz r3,192(r3)
	ctx.current_instruction = 0x88134430;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134440
	if (ctx.cr6.eq) goto loc_88134440;
	// bl 0x88125e70
	ctx.lr = 0x88134440;
	sub_88125E70(ctx, base);
loc_88134440:
	// lwz r3,196(r30)
	ctx.current_instruction = 0x88134440;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134450
	if (ctx.cr6.eq) goto loc_88134450;
	// bl 0x88125e70
	ctx.lr = 0x88134450;
	sub_88125E70(ctx, base);
loc_88134450:
	// lwz r3,296(r30)
	ctx.current_instruction = 0x88134450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134460
	if (ctx.cr6.eq) goto loc_88134460;
	// bl 0x88125e70
	ctx.lr = 0x88134460;
	sub_88125E70(ctx, base);
loc_88134460:
	// lwz r11,256(r30)
	ctx.current_instruction = 0x88134460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 256);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881344c8
	if (!ctx.cr6.gt) goto loc_881344C8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88134474:
	// lwz r11,268(r30)
	ctx.current_instruction = 0x88134474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88134494
	if (ctx.cr6.eq) goto loc_88134494;
	// lwzx r10,r31,r11
	ctx.current_instruction = 0x88134480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88134494
	if (ctx.cr6.eq) goto loc_88134494;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x88134494;
	sub_88125E70(ctx, base);
loc_88134494:
	// lwz r11,272(r30)
	ctx.current_instruction = 0x88134494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881344b4
	if (ctx.cr6.eq) goto loc_881344B4;
	// lwzx r10,r31,r11
	ctx.current_instruction = 0x881344A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881344b4
	if (ctx.cr6.eq) goto loc_881344B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x881344B4;
	sub_88125E70(ctx, base);
loc_881344B4:
	// lwz r11,256(r30)
	ctx.current_instruction = 0x881344B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 256);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88134474
	if (ctx.cr6.lt) goto loc_88134474;
loc_881344C8:
	// lwz r3,268(r30)
	ctx.current_instruction = 0x881344C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881344d8
	if (ctx.cr6.eq) goto loc_881344D8;
	// bl 0x88125e70
	ctx.lr = 0x881344D8;
	sub_88125E70(ctx, base);
loc_881344D8:
	// lwz r3,272(r30)
	ctx.current_instruction = 0x881344D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881344e8
	if (ctx.cr6.eq) goto loc_881344E8;
	// bl 0x88125e70
	ctx.lr = 0x881344E8;
	sub_88125E70(ctx, base);
loc_881344E8:
	// lwz r3,260(r30)
	ctx.current_instruction = 0x881344E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881344f8
	if (ctx.cr6.eq) goto loc_881344F8;
	// bl 0x88125e70
	ctx.lr = 0x881344F8;
	sub_88125E70(ctx, base);
loc_881344F8:
	// lwz r3,264(r30)
	ctx.current_instruction = 0x881344F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134508
	if (ctx.cr6.eq) goto loc_88134508;
	// bl 0x88125e70
	ctx.lr = 0x88134508;
	sub_88125E70(ctx, base);
loc_88134508:
	// lwz r3,280(r30)
	ctx.current_instruction = 0x88134508;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134518
	if (ctx.cr6.eq) goto loc_88134518;
	// bl 0x88125e70
	ctx.lr = 0x88134518;
	sub_88125E70(ctx, base);
loc_88134518:
	// lwz r3,48(r30)
	ctx.current_instruction = 0x88134518;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134528
	if (ctx.cr6.eq) goto loc_88134528;
	// bl 0x88125e70
	ctx.lr = 0x88134528;
	sub_88125E70(ctx, base);
loc_88134528:
	// lwz r3,288(r30)
	ctx.current_instruction = 0x88134528;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134538
	if (ctx.cr6.eq) goto loc_88134538;
	// bl 0x88125e70
	ctx.lr = 0x88134538;
	sub_88125E70(ctx, base);
loc_88134538:
	// lwz r3,292(r30)
	ctx.current_instruction = 0x88134538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134548
	if (ctx.cr6.eq) goto loc_88134548;
	// bl 0x88125e70
	ctx.lr = 0x88134548;
	sub_88125E70(ctx, base);
loc_88134548:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88134310
	ctx.lr = 0x88134550;
	sub_88134310(ctx, base);
loc_88134550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881387C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881387C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881387C0) {
			switch (rex_dispatch_address) {
				case 0x881387C8:
				case 0x881388F0:
				case 0x88138904:
				case 0x88138990:
				case 0x881389A4:
				case 0x88138A2C:
				case 0x88138A40:
				case 0x88138AA8:
				case 0x88138B00:
				case 0x88138BA0:
				case 0x88138C64:
				case 0x88138D3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881387C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881387C8: goto loc_881387C8;
		case 0x881388F0: goto loc_881388F0;
		case 0x88138904: goto loc_88138904;
		case 0x88138990: goto loc_88138990;
		case 0x881389A4: goto loc_881389A4;
		case 0x88138A2C: goto loc_88138A2C;
		case 0x88138A40: goto loc_88138A40;
		case 0x88138AA8: goto loc_88138AA8;
		case 0x88138B00: goto loc_88138B00;
		case 0x88138BA0: goto loc_88138BA0;
		case 0x88138C64: goto loc_88138C64;
		case 0x88138D3C: goto loc_88138D3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881387C8;
	__savegprlr_14(ctx, base);
loc_881387C8:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881387C8;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,36(r4)
	ctx.current_instruction = 0x881387CC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r30,0(r3)
	ctx.current_instruction = 0x881387D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r11,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 8;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// stw r10,88(r1)
	ctx.current_instruction = 0x881387EC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r29,r3,224
	ctx.r29.s64 = ctx.r3.s64 + 224;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r31,r25,516
	ctx.r31.s64 = ctx.r25.s64 + 516;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r23,5
	ctx.r23.s64 = 5;
	// lis r26,-30719
	ctx.r26.s64 = -2013200384;
	// li r15,3
	ctx.r15.s64 = 3;
	// lis r18,-30719
	ctx.r18.s64 = -2013200384;
	// lis r19,-30719
	ctx.r19.s64 = -2013200384;
	// addi r22,r10,11728
	ctx.r22.s64 = ctx.r10.s64 + 11728;
	// addi r27,r9,16472
	ctx.r27.s64 = ctx.r9.s64 + 16472;
	// addi r21,r8,11184
	ctx.r21.s64 = ctx.r8.s64 + 11184;
	// addi r28,r7,16216
	ctx.r28.s64 = ctx.r7.s64 + 16216;
	// addi r20,r11,10704
	ctx.r20.s64 = ctx.r11.s64 + 10704;
loc_88138838:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88138838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x88138838
	if (ctx.cr6.gt) goto loc_88138838;
	// lis r12,-30700
	ctx.r12.s64 = -2011955200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30624
	ctx.r12.s64 = ctx.r12.s64 + -30624;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x88138854;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8813889C;
	case 1:
		goto loc_88138978;
	case 2:
		goto loc_88138A14;
	case 3:
		goto loc_88138A90;
	case 4:
		goto loc_88138AF0;
	case 5:
		goto loc_88138838;
	case 6:
		goto loc_88138838;
	case 7:
		goto loc_88138838;
	case 8:
		goto loc_88138838;
	case 9:
		goto loc_88138838;
	case 10:
		goto loc_88138838;
	case 11:
		goto loc_88138838;
	case 12:
		goto loc_88138838;
	case 13:
		goto loc_88138BB8;
	case 14:
		goto loc_88138D24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8813889C:
	// stw r17,8(r31)
	ctx.current_instruction = 0x8813889C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// lwz r11,592(r30)
	ctx.current_instruction = 0x881388A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881388bc
	if (ctx.cr6.eq) goto loc_881388BC;
	// lwz r11,56(r31)
	ctx.current_instruction = 0x881388AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,484(r14)
	ctx.current_instruction = 0x881388B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 484);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88138c44
	if (ctx.cr6.eq) goto loc_88138C44;
loc_881388BC:
	// lhz r10,202(r30)
	ctx.current_instruction = 0x881388BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881388C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88138c6c
	if (!ctx.cr6.lt) goto loc_88138C6C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88139a00
	ctx.lr = 0x881388F0;
	sub_88139A00(ctx, base);
loc_881388F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x881388FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8812c818
	ctx.lr = 0x88138904;
	sub_8812C818(ctx, base);
loc_88138904:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// lwz r10,17832(r19)
	ctx.current_instruction = 0x8813890C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 17832);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88138910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88138930
	if (!ctx.cr6.eq) goto loc_88138930;
	// lwz r11,56(r31)
	ctx.current_instruction = 0x8813891C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r16,0(r31)
	ctx.current_instruction = 0x88138920;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88138928;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138930:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r28
	ctx.current_instruction = 0x88138934;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// stw r9,20(r31)
	ctx.current_instruction = 0x8813893C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lbzx r8,r11,r28
	ctx.current_instruction = 0x88138940;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// stw r7,24(r31)
	ctx.current_instruction = 0x88138948;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lhzx r6,r11,r28
	ctx.current_instruction = 0x8813894C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r5,r6,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// stw r5,28(r31)
	ctx.current_instruction = 0x88138954;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lhzx r4,r11,r28
	ctx.current_instruction = 0x88138958;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// stw r11,32(r31)
	ctx.current_instruction = 0x88138960;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.current_instruction = 0x88138964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r23,0(r31)
	ctx.current_instruction = 0x88138968;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88138970;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138978:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88139a00
	ctx.lr = 0x88138990;
	sub_88139A00(ctx, base);
loc_88138990:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x8813899C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8812c818
	ctx.lr = 0x881389A4;
	sub_8812C818(ctx, base);
loc_881389A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// lwz r10,17840(r18)
	ctx.current_instruction = 0x881389AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 17840);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881389B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881389c4
	if (!ctx.cr6.eq) goto loc_881389C4;
loc_881389BC:
	// stw r15,0(r31)
	ctx.current_instruction = 0x881389BC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// b 0x88138838
	goto loc_88138838;
loc_881389C4:
	// lbzx r10,r11,r27
	ctx.current_instruction = 0x881389C4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881389C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	ctx.current_instruction = 0x881389D8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x881389DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881389E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r6,r27
	ctx.current_instruction = 0x881389EC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stwx r10,r4,r31
	ctx.current_instruction = 0x881389F4;
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881389F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88138A00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_88138A04:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88138838
	if (!ctx.cr6.eq) goto loc_88138838;
	// stw r23,0(r31)
	ctx.current_instruction = 0x88138A0C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138A14:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88139a00
	ctx.lr = 0x88138A2C;
	sub_88139A00(ctx, base);
loc_88138A2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88138A38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8812c818
	ctx.lr = 0x88138A40;
	sub_8812C818(ctx, base);
loc_88138A40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// lwz r11,17848(r26)
	ctx.current_instruction = 0x88138A48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 17848);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88138A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88138a64
	if (!ctx.cr6.eq) goto loc_88138A64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88138A5C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138A64:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	ctx.current_instruction = 0x88138A70;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88138A7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88138a04
	if (!ctx.cr6.eq) goto loc_88138A04;
	// stw r16,0(r31)
	ctx.current_instruction = 0x88138A88;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138A90:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,17848(r26)
	ctx.current_instruction = 0x88138A94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 17848);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881380f8
	ctx.lr = 0x88138AA8;
	sub_881380F8(ctx, base);
loc_88138AA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88138AB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	ctx.current_instruction = 0x88138AC0;
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138AC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88138ACC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88138ae0
	if (!ctx.cr6.eq) goto loc_88138AE0;
	// stw r16,0(r31)
	ctx.current_instruction = 0x88138AD8;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138AE0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881389bc
	if (!ctx.cr6.eq) goto loc_881389BC;
	// stw r23,0(r31)
	ctx.current_instruction = 0x88138AE8;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138AF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88139018
	ctx.lr = 0x88138B00;
	sub_88139018(ctx, base);
loc_88138B00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// lwz r9,20(r31)
	ctx.current_instruction = 0x88138B08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88138B10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88138b30
	if (ctx.cr6.eq) goto loc_88138B30;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r9,36(r31)
	ctx.current_instruction = 0x88138B28;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
loc_88138B30:
	// lwz r9,24(r31)
	ctx.current_instruction = 0x88138B30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88138b54
	if (ctx.cr6.eq) goto loc_88138B54;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r8,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r7,40(r31)
	ctx.current_instruction = 0x88138B4C;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_88138B54:
	// lwz r9,28(r31)
	ctx.current_instruction = 0x88138B54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88138b78
	if (ctx.cr6.eq) goto loc_88138B78;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r8,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r7,44(r31)
	ctx.current_instruction = 0x88138B70;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_88138B78:
	// lwz r9,32(r31)
	ctx.current_instruction = 0x88138B78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88138b98
	if (ctx.cr6.eq) goto loc_88138B98;
	// subfic r9,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r7,48(r31)
	ctx.current_instruction = 0x88138B94;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
loc_88138B98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c818
	ctx.lr = 0x88138BA0;
	sub_8812C818(ctx, base);
loc_88138BA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88138d3c
	if (ctx.cr6.lt) goto loc_88138D3C;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r17,8(r31)
	ctx.current_instruction = 0x88138BAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// stw r11,0(r31)
	ctx.current_instruction = 0x88138BB0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138BB8:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88138BC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88138c84
	if (!ctx.cr6.eq) goto loc_88138C84;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88138BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	ctx.current_instruction = 0x88138BDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88138BE0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,592(r30)
	ctx.current_instruction = 0x88138BE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88138c04
	if (!ctx.cr6.eq) goto loc_88138C04;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88138BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88138c04
	if (!ctx.cr6.gt) goto loc_88138C04;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	ctx.current_instruction = 0x88138C00;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_88138C04:
	// lhz r10,202(r30)
	ctx.current_instruction = 0x88138C04;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88138C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88138c6c
	if (!ctx.cr6.lt) goto loc_88138C6C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x88138838
	if (!ctx.cr6.eq) goto loc_88138838;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88138C28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	ctx.current_instruction = 0x88138C3C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x88138838
	goto loc_88138838;
loc_88138C44:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-31792
	ctx.r9.s64 = ctx.r11.s64 + -31792;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88138C50;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r9,484(r30)
	ctx.current_instruction = 0x88138C58;
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881383d0
	ctx.lr = 0x88138C64;
	sub_881383D0(ctx, base);
loc_88138C64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88138C6C:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r17,20(r30)
	ctx.current_instruction = 0x88138C70;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r17.u32);
	// stw r17,24(r30)
	ctx.current_instruction = 0x88138C74;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r17.u32);
	// stw r10,16(r30)
	ctx.current_instruction = 0x88138C78;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88138C84:
	// lwz r11,592(r30)
	ctx.current_instruction = 0x88138C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88138ca8
	if (!ctx.cr6.eq) goto loc_88138CA8;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88138C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88138C94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88138ca8
	if (!ctx.cr6.gt) goto loc_88138CA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	ctx.current_instruction = 0x88138CA4;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_88138CA8:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88138CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r30)
	ctx.current_instruction = 0x88138CB0;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,12(r31)
	ctx.current_instruction = 0x88138CC0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r17.u32);
	// lwzx r6,r7,r31
	ctx.current_instruction = 0x88138CC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r6,20(r30)
	ctx.current_instruction = 0x88138CC8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.current_instruction = 0x88138CD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	ctx.current_instruction = 0x88138CE0;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88138CE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88138CEC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88138d3c
	if (!ctx.cr6.eq) goto loc_88138D3C;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88138CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88138d14
	if (ctx.cr6.eq) goto loc_88138D14;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88138D08;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88138D14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88138D18;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88138D24:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r10,r11,-31792
	ctx.r10.s64 = ctx.r11.s64 + -31792;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,484(r30)
	ctx.current_instruction = 0x88138D34;
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r10.u32);
	// bl 0x881383d0
	ctx.lr = 0x88138D3C;
	sub_881383D0(ctx, base);
loc_88138D3C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881449C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881449C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881449C8) {
			switch (rex_dispatch_address) {
				case 0x881449D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881449C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881449D0: goto loc_881449D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881449D0;
	__savegprlr_26(ctx, base);
loc_881449D0:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ble cr6,0x88144a50
	if (!ctx.cr6.gt) goto loc_88144A50;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r28,r10,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_881449EC:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88144a50
	if (!ctx.cr6.lt) goto loc_88144A50;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r11)
	ctx.current_instruction = 0x881449F8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// blt cr6,0x88144a40
	if (ctx.cr6.lt) goto loc_88144A40;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88144A14:
	// lwzu r31,-4(r10)
	ctx.current_instruction = 0x88144A14;
	ea = -4 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ctx.current_instruction = 0x88144A18;
	ea = 4 + ctx.r3.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r26,r31
	ctx.r26.s64 = ctx.r31.s32;
	// lwz r31,0(r11)
	ctx.current_instruction = 0x88144A20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// mulld r30,r26,r30
	ctx.r30.s64 = static_cast<int64_t>(ctx.r26.u64 * ctx.r30.u64);
	// sradi r30,r30,30
	ctx.xer.ca = (ctx.r30.s64 < 0) & ((ctx.r30.u64 & 0x3FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s64 >> 30;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r31,0(r11)
	ctx.current_instruction = 0x88144A38;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bdnz 0x88144a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144A14;
loc_88144A40:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x881449ec
	if (ctx.cr6.lt) goto loc_881449EC;
loc_88144A50:
	// add r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88144ad0
	if (!ctx.cr6.lt) goto loc_88144AD0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r3,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r29,r5,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_88144A7C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r27,0(r11)
	ctx.current_instruction = 0x88144A80;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// ble cr6,0x88144ac4
	if (!ctx.cr6.gt) goto loc_88144AC4;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_88144A98:
	// lwzu r6,-4(r10)
	ctx.current_instruction = 0x88144A98;
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r3,4(r7)
	ctx.current_instruction = 0x88144A9C;
	ea = 4 + ctx.r7.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r31,0(r11)
	ctx.current_instruction = 0x88144AA4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r6,r6,r3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x88144ABC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x88144a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144A98;
loc_88144AC4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x88144a7c
	if (!ctx.cr0.eq) goto loc_88144A7C;
loc_88144AD0:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r11,0(r9)
	ctx.current_instruction = 0x88144ADC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x88144b2c
	if (!ctx.cr0.gt) goto loc_88144B2C;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_88144AF4:
	// lwz r5,0(r11)
	ctx.current_instruction = 0x88144AF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r11
	ctx.current_instruction = 0x88144AF8;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.current_instruction = 0x88144B00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r8
	ctx.current_instruction = 0x88144B14;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.current_instruction = 0x88144B18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88144af4
	if (ctx.cr6.lt) goto loc_88144AF4;
loc_88144B2C:
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88144B2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.current_instruction = 0x88144B40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r5,r6,r8
	ctx.current_instruction = 0x88144B44;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881495E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881495E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881495E8;
	ctx.current_instruction = 0x881495E8;
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
	ctx.current_instruction = 0x88149600;
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
	ctx.current_instruction = 0x8814961C;
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
loc_8814963C:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vmrghb v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v7,v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v9,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v9,v12,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v29,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v28,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vperm128 v60,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v10,v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v12,v9,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v20,v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v21,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v12,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v14,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v9,v18,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v1,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v7,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v2,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v16,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v30,v20,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v27,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v26,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v25,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v22,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v21,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v19,v27,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x8814963c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814963C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814C948) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814C948);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C948;
	ctx.current_instruction = 0x8814C948;
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x8814a800
	sub_8814A800(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C978) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814C978;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814C978) {
			switch (rex_dispatch_address) {
				case 0x8814C980:
				case 0x8814C9A8:
				case 0x8814C9C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C978;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814C980: goto loc_8814C980;
		case 0x8814C9A8: goto loc_8814C9A8;
		case 0x8814C9C4: goto loc_8814C9C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814C980;
	__savegprlr_28(ctx, base);
loc_8814C980:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8814C980;
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
	// bl 0x8814b8f8
	ctx.lr = 0x8814C9A8;
	sub_8814B8F8(ctx, base);
loc_8814C9A8:
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
	ctx.lr = 0x8814C9C4;
	sub_8814C150(ctx, base);
loc_8814C9C4:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CBA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CBA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CBA8) {
			switch (rex_dispatch_address) {
				case 0x8814CBB0:
				case 0x8814CBD8:
				case 0x8814CBF4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CBA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CBB0: goto loc_8814CBB0;
		case 0x8814CBD8: goto loc_8814CBD8;
		case 0x8814CBF4: goto loc_8814CBF4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CBB0;
	__savegprlr_28(ctx, base);
loc_8814CBB0:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8814CBB0;
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
	// bl 0x8814b8f8
	ctx.lr = 0x8814CBD8;
	sub_8814B8F8(ctx, base);
loc_8814CBD8:
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
	ctx.lr = 0x8814CBF4;
	sub_8814C750(ctx, base);
loc_8814CBF4:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CFE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CFE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CFE0) {
			switch (rex_dispatch_address) {
				case 0x8814D020:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CFE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814D020: goto loc_8814D020;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814CFE4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8814CFE8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814CFEC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8814CFF0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x8814CFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d028
	if (ctx.cr6.eq) goto loc_8814D028;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8814d024
	if (ctx.cr6.eq) goto loc_8814D024;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8814D010;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814d024
	if (ctx.cr6.eq) goto loc_8814D024;
	// bl 0x8815ba70
	ctx.lr = 0x8814D020;
	sub_8815BA70(ctx, base);
loc_8814D020:
	// stw r30,0(r31)
	ctx.current_instruction = 0x8814D020;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8814D024:
	// stw r30,0(r31)
	ctx.current_instruction = 0x8814D024;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8814D028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D02C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8814D034;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814D038;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814F740) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814F740;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814F740) {
			switch (rex_dispatch_address) {
				case 0x8814F788:
				case 0x8814F7B0:
				case 0x8814F7D8:
				case 0x8814F800:
				case 0x8814F828:
				case 0x8814F850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814F740;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814F788: goto loc_8814F788;
		case 0x8814F7B0: goto loc_8814F7B0;
		case 0x8814F7D8: goto loc_8814F7D8;
		case 0x8814F800: goto loc_8814F800;
		case 0x8814F828: goto loc_8814F828;
		case 0x8814F850: goto loc_8814F850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814F744;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814F748;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8814F74C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21888(r3)
	ctx.current_instruction = 0x8814F750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814f850
	if (!ctx.cr6.eq) goto loc_8814F850;
	// lwz r3,3776(r3)
	ctx.current_instruction = 0x8814F760;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f788
	if (ctx.cr6.eq) goto loc_8814F788;
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x8814F76C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f788
	if (ctx.cr6.eq) goto loc_8814F788;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x8814F778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8814F77C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F788;
	sub_881ECE80(ctx, base);
loc_8814F788:
	// lwz r3,3780(r31)
	ctx.current_instruction = 0x8814F788;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f7b0
	if (ctx.cr6.eq) goto loc_8814F7B0;
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x8814F794;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f7b0
	if (ctx.cr6.eq) goto loc_8814F7B0;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8814F7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8814F7A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F7B0;
	sub_881ECE80(ctx, base);
loc_8814F7B0:
	// lwz r3,3784(r31)
	ctx.current_instruction = 0x8814F7B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f7d8
	if (ctx.cr6.eq) goto loc_8814F7D8;
	// lwz r4,3796(r31)
	ctx.current_instruction = 0x8814F7BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f7d8
	if (ctx.cr6.eq) goto loc_8814F7D8;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8814F7C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8814F7CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F7D8;
	sub_881ECE80(ctx, base);
loc_8814F7D8:
	// lwz r3,3832(r31)
	ctx.current_instruction = 0x8814F7D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f800
	if (ctx.cr6.eq) goto loc_8814F800;
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x8814F7E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f800
	if (ctx.cr6.eq) goto loc_8814F800;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x8814F7F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8814F7F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F800;
	sub_881ECE80(ctx, base);
loc_8814F800:
	// lwz r3,3836(r31)
	ctx.current_instruction = 0x8814F800;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f828
	if (ctx.cr6.eq) goto loc_8814F828;
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x8814F80C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f828
	if (ctx.cr6.eq) goto loc_8814F828;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8814F818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8814F81C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F828;
	sub_881ECE80(ctx, base);
loc_8814F828:
	// lwz r3,3840(r31)
	ctx.current_instruction = 0x8814F828;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814f850
	if (ctx.cr6.eq) goto loc_8814F850;
	// lwz r4,3796(r31)
	ctx.current_instruction = 0x8814F834;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8814f850
	if (ctx.cr6.eq) goto loc_8814F850;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8814F840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8814F844;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x881ece80
	ctx.lr = 0x8814F850;
	sub_881ECE80(ctx, base);
loc_8814F850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814F854;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814F85C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88151A70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88151A70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88151A70) {
			switch (rex_dispatch_address) {
				case 0x88151A78:
				case 0x88151AB8:
				case 0x88151AD0:
				case 0x88151AF8:
				case 0x88151B6C:
				case 0x88151B8C:
				case 0x88151BAC:
				case 0x88151BC0:
				case 0x88151C30:
				case 0x88151C54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88151A70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88151A78: goto loc_88151A78;
		case 0x88151AB8: goto loc_88151AB8;
		case 0x88151AD0: goto loc_88151AD0;
		case 0x88151AF8: goto loc_88151AF8;
		case 0x88151B6C: goto loc_88151B6C;
		case 0x88151B8C: goto loc_88151B8C;
		case 0x88151BAC: goto loc_88151BAC;
		case 0x88151BC0: goto loc_88151BC0;
		case 0x88151C30: goto loc_88151C30;
		case 0x88151C54: goto loc_88151C54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88151A78;
	__savegprlr_20(ctx, base);
loc_88151A78:
	// stfd f30,-120(r1)
	ctx.current_instruction = 0x88151A78;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	ctx.current_instruction = 0x88151A7C;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-496(r1)
	ctx.current_instruction = 0x88151A80;
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,772
	ctx.r3.s64 = 772;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88151AB8;
	sub_8815B9F8(ctx, base);
loc_88151AB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88151b14
	if (ctx.cr6.eq) goto loc_88151B14;
	// li r5,772
	ctx.r5.s64 = 772;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88151AD0;
	sub_88052D90(ctx, base);
loc_88151AD0:
	// stw r24,112(r1)
	ctx.current_instruction = 0x88151AD0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r23,116(r1)
	ctx.current_instruction = 0x88151AD4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,336(r1)
	ctx.current_instruction = 0x88151ADC;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x881519e8
	ctx.lr = 0x88151AF8;
	sub_881519E8(ctx, base);
loc_88151AF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88151b2c
	if (ctx.cr6.eq) goto loc_88151B2C;
loc_88151B00:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88151B08;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88151B0C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151B14:
	// li r3,-9
	ctx.r3.s64 = -9;
	// stw r29,0(r25)
	ctx.current_instruction = 0x88151B18;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88151B20;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88151B24;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151B2C:
	// lis r10,-30696
	ctx.r10.s64 = -2011693056;
	// stw r29,720(r30)
	ctx.current_instruction = 0x88151B30;
	REX_STORE_U32(ctx.r30.u32 + 720, ctx.r29.u32);
	// stw r28,728(r30)
	ctx.current_instruction = 0x88151B34;
	REX_STORE_U32(ctx.r30.u32 + 728, ctx.r28.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r9,r10,21496
	ctx.r9.s64 = ctx.r10.s64 + 21496;
	// stw r29,716(r30)
	ctx.current_instruction = 0x88151B40;
	REX_STORE_U32(ctx.r30.u32 + 716, ctx.r29.u32);
	// stw r29,724(r30)
	ctx.current_instruction = 0x88151B44;
	REX_STORE_U32(ctx.r30.u32 + 724, ctx.r29.u32);
	// addi r27,r11,18168
	ctx.r27.s64 = ctx.r11.s64 + 18168;
	// stw r29,732(r30)
	ctx.current_instruction = 0x88151B4C;
	REX_STORE_U32(ctx.r30.u32 + 732, ctx.r29.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r29,712(r30)
	ctx.current_instruction = 0x88151B54;
	REX_STORE_U32(ctx.r30.u32 + 712, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,192(r30)
	ctx.current_instruction = 0x88151B5C;
	REX_STORE_U32(ctx.r30.u32 + 192, ctx.r9.u32);
	// ori r4,r4,45872
	ctx.r4.u64 = ctx.r4.u64 | 45872;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8815e468
	ctx.lr = 0x88151B6C;
	sub_8815E468(ctx, base);
loc_88151B6C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,736(r30)
	ctx.current_instruction = 0x88151B70;
	REX_STORE_U32(ctx.r30.u32 + 736, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88151b14
	if (ctx.cr6.eq) goto loc_88151B14;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,45872
	ctx.r5.u64 = ctx.r5.u64 | 45872;
	// bl 0x88052d90
	ctx.lr = 0x88151B8C;
	sub_88052D90(ctx, base);
loc_88151B8C:
	// stw r30,24688(r31)
	ctx.current_instruction = 0x88151B8C;
	REX_STORE_U32(ctx.r31.u32 + 24688, ctx.r30.u32);
	// stw r29,0(r31)
	ctx.current_instruction = 0x88151B90;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,8(r31)
	ctx.current_instruction = 0x88151B98;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// stw r30,0(r25)
	ctx.current_instruction = 0x88151BA0;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x88151BAC;
	sub_8815E468(ctx, base);
loc_88151BAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	ctx.current_instruction = 0x88151BB0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x88151b00
	if (ctx.cr6.eq) goto loc_88151B00;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x88155e78
	ctx.lr = 0x88151BC0;
	sub_88155E78(ctx, base);
loc_88151BC0:
	// lis r11,22358
	ctx.r11.s64 = 1465253888;
	// lwz r9,588(r1)
	ctx.current_instruction = 0x88151BC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// ori r10,r11,17201
	ctx.r10.u64 = ctx.r11.u64 | 17201;
	// lwz r11,580(r1)
	ctx.current_instruction = 0x88151BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88151c68
	if (!ctx.cr6.eq) goto loc_88151C68;
	// lis r26,22349
	ctx.r26.s64 = 1464664064;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r26,r26,22081
	ctx.r26.u64 = ctx.r26.u64 | 22081;
loc_88151BE4:
	// lwz r7,596(r1)
	ctx.current_instruction = 0x88151BE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r6,80(r31)
	ctx.current_instruction = 0x88151BEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r9,20412(r31)
	ctx.current_instruction = 0x88151BF4;
	REX_STORE_U32(ctx.r31.u32 + 20412, ctx.r9.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r11,20408(r31)
	ctx.current_instruction = 0x88151BFC;
	REX_STORE_U32(ctx.r31.u32 + 20408, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x88151C08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r7,15300(r31)
	ctx.current_instruction = 0x88151C0C;
	REX_STORE_U32(ctx.r31.u32 + 15300, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,40(r6)
	ctx.current_instruction = 0x88151C14;
	REX_STORE_U32(ctx.r6.u32 + 40, ctx.r31.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// stw r24,22116(r31)
	ctx.current_instruction = 0x88151C1C;
	REX_STORE_U32(ctx.r31.u32 + 22116, ctx.r24.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r23,22120(r31)
	ctx.current_instruction = 0x88151C24;
	REX_STORE_U32(ctx.r31.u32 + 22120, ctx.r23.u32);
	// stw r29,16(r31)
	ctx.current_instruction = 0x88151C28;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x88150460
	ctx.lr = 0x88151C30;
	sub_88150460(ctx, base);
loc_88151C30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88151c44
	if (ctx.cr6.eq) goto loc_88151C44;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,22184(r31)
	ctx.current_instruction = 0x88151C40;
	REX_STORE_U32(ctx.r31.u32 + 22184, ctx.r11.u32);
loc_88151C44:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x88151c54
	if (!ctx.cr6.eq) goto loc_88151C54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881505c8
	ctx.lr = 0x88151C54;
	sub_881505C8(ctx, base);
loc_88151C54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88151C5C;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88151C60;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151C68:
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r8,r10,22067
	ctx.r8.u64 = ctx.r10.u64 | 22067;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88151ca8
	if (ctx.cr6.eq) goto loc_88151CA8;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r8,r10,30259
	ctx.r8.u64 = ctx.r10.u64 | 30259;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88151ca8
	if (ctx.cr6.eq) goto loc_88151CA8;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r8,r10,22096
	ctx.r8.u64 = ctx.r10.u64 | 22096;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88151ca8
	if (ctx.cr6.eq) goto loc_88151CA8;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r8,r10,30320
	ctx.r8.u64 = ctx.r10.u64 | 30320;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88151be4
	if (!ctx.cr6.eq) goto loc_88151BE4;
loc_88151CA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88151be4
	if (ctx.cr6.eq) goto loc_88151BE4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88151be4
	if (ctx.cr6.eq) goto loc_88151BE4;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88151CB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r8,3992(r31)
	ctx.current_instruction = 0x88151CC0;
	REX_STORE_U32(ctx.r31.u32 + 3992, ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,3980(r31)
	ctx.current_instruction = 0x88151CC8;
	REX_STORE_U32(ctx.r31.u32 + 3980, ctx.r8.u32);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x88151CCC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r7,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1;
	// stw r6,3996(r31)
	ctx.current_instruction = 0x88151CD4;
	REX_STORE_U32(ctx.r31.u32 + 3996, ctx.r6.u32);
	// stw r6,15364(r31)
	ctx.current_instruction = 0x88151CD8;
	REX_STORE_U32(ctx.r31.u32 + 15364, ctx.r6.u32);
	// beq cr6,0x88151be4
	if (ctx.cr6.eq) goto loc_88151BE4;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88151CE8;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88151CEC;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815BC60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815BC60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815BC60) {
			switch (rex_dispatch_address) {
				case 0x8815BC68:
				case 0x8815BCEC:
				case 0x8815BD2C:
				case 0x8815BD3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815BC60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815BC68: goto loc_8815BC68;
		case 0x8815BCEC: goto loc_8815BCEC;
		case 0x8815BD2C: goto loc_8815BD2C;
		case 0x8815BD3C: goto loc_8815BD3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8815BC68;
	__savegprlr_29(ctx, base);
loc_8815BC68:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8815BC68;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,3428(r3)
	ctx.current_instruction = 0x8815BC70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// lwz r10,24688(r3)
	ctx.current_instruction = 0x8815BC74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r11,288(r31)
	ctx.current_instruction = 0x8815BC8C;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r8,14852(r31)
	ctx.current_instruction = 0x8815BC90;
	REX_STORE_U32(ctx.r31.u32 + 14852, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8815bccc
	if (ctx.cr6.eq) goto loc_8815BCCC;
	// lwz r10,22064(r31)
	ctx.current_instruction = 0x8815BC9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22064);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815bcb4
	if (ctx.cr6.eq) goto loc_8815BCB4;
	// lwz r10,22068(r31)
	ctx.current_instruction = 0x8815BCA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815bccc
	if (ctx.cr6.eq) goto loc_8815BCCC;
loc_8815BCB4:
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r11,3416(r31)
	ctx.current_instruction = 0x8815BCB8;
	REX_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stw r11,3432(r31)
	ctx.current_instruction = 0x8815BCBC;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// stw r10,3412(r31)
	ctx.current_instruction = 0x8815BCC0;
	REX_STORE_U32(ctx.r31.u32 + 3412, ctx.r10.u32);
	// stw r11,3420(r31)
	ctx.current_instruction = 0x8815BCC4;
	REX_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r31)
	ctx.current_instruction = 0x8815BCC8;
	REX_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
loc_8815BCCC:
	// lwz r10,1876(r31)
	ctx.current_instruction = 0x8815BCCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1876);
	// stw r11,3396(r31)
	ctx.current_instruction = 0x8815BCD0;
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8815bd10
	if (!ctx.cr6.eq) goto loc_8815BD10;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r4,832
	ctx.r4.s64 = 832;
	// addi r5,r11,18168
	ctx.r5.s64 = ctx.r11.s64 + 18168;
	// bl 0x8815e468
	ctx.lr = 0x8815BCEC;
	sub_8815E468(ctx, base);
loc_8815BCEC:
	// stw r3,1876(r31)
	ctx.current_instruction = 0x8815BCEC;
	REX_STORE_U32(ctx.r31.u32 + 1876, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8815bd04
	if (!ctx.cr6.eq) goto loc_8815BD04;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8815BD04:
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,1880(r31)
	ctx.current_instruction = 0x8815BD0C;
	REX_STORE_U32(ctx.r31.u32 + 1880, ctx.r10.u32);
loc_8815BD10:
	// lwz r11,21888(r31)
	ctx.current_instruction = 0x8815BD10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815bd3c
	if (ctx.cr6.eq) goto loc_8815BD3C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815baf8
	ctx.lr = 0x8815BD2C;
	sub_8815BAF8(ctx, base);
loc_8815BD2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815bd40
	if (!ctx.cr6.eq) goto loc_8815BD40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881598f0
	ctx.lr = 0x8815BD3C;
	sub_881598F0(ctx, base);
loc_8815BD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8815BD40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E530) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E530);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E530;
	ctx.current_instruction = 0x8815E530;
	// lwz r10,60(r3)
	ctx.current_instruction = 0x8815E530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8815e548
	if (ctx.cr6.eq) goto loc_8815E548;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x8814d138
	sub_8814D138(ctx, base);
	return;
loc_8815E548:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8815ba70
	sub_8815BA70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815ECB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815ECB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815ECB0) {
			switch (rex_dispatch_address) {
				case 0x8815ECB8:
				case 0x8815ED24:
				case 0x8815ED6C:
				case 0x8815EDDC:
				case 0x8815EE24:
				case 0x8815EE9C:
				case 0x8815EEE4:
				case 0x8815EF4C:
				case 0x8815EF94:
				case 0x8815EFFC:
				case 0x8815F044:
				case 0x8815F0AC:
				case 0x8815F0F4:
				case 0x8815F15C:
				case 0x8815F1A4:
				case 0x8815F20C:
				case 0x8815F254:
				case 0x8815F2BC:
				case 0x8815F304:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815ECB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815ECB8: goto loc_8815ECB8;
		case 0x8815ED24: goto loc_8815ED24;
		case 0x8815ED6C: goto loc_8815ED6C;
		case 0x8815EDDC: goto loc_8815EDDC;
		case 0x8815EE24: goto loc_8815EE24;
		case 0x8815EE9C: goto loc_8815EE9C;
		case 0x8815EEE4: goto loc_8815EEE4;
		case 0x8815EF4C: goto loc_8815EF4C;
		case 0x8815EF94: goto loc_8815EF94;
		case 0x8815EFFC: goto loc_8815EFFC;
		case 0x8815F044: goto loc_8815F044;
		case 0x8815F0AC: goto loc_8815F0AC;
		case 0x8815F0F4: goto loc_8815F0F4;
		case 0x8815F15C: goto loc_8815F15C;
		case 0x8815F1A4: goto loc_8815F1A4;
		case 0x8815F20C: goto loc_8815F20C;
		case 0x8815F254: goto loc_8815F254;
		case 0x8815F2BC: goto loc_8815F2BC;
		case 0x8815F304: goto loc_8815F304;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815ECB8;
	__savegprlr_27(ctx, base);
loc_8815ECB8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815ECB8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8815ECBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815ECCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8815ed34
	if (!ctx.cr6.lt) goto loc_8815ED34;
loc_8815ECDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815ed34
	if (ctx.cr6.eq) goto loc_8815ED34;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815ECE8;
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
	ctx.current_instruction = 0x8815ED0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815ED14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815ed24
	if (!ctx.cr0.lt) goto loc_8815ED24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815ED24;
	sub_88156678(ctx, base);
loc_8815ED24:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815ED24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ecdc
	if (ctx.cr6.gt) goto loc_8815ECDC;
loc_8815ED34:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815ED38;
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
	ctx.current_instruction = 0x8815ED50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815ED5C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815ed6c
	if (!ctx.cr0.lt) goto loc_8815ED6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815ED6C;
	sub_88156678(ctx, base);
loc_8815ED6C:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stw r28,3712(r27)
	ctx.current_instruction = 0x8815ED70;
	REX_STORE_U32(ctx.r27.u32 + 3712, ctx.r28.u32);
	// li r30,11
	ctx.r30.s64 = 11;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,-11660(r11)
	ctx.current_instruction = 0x8815ED7C;
	REX_STORE_U32(ctx.r11.u32 + -11660, ctx.r28.u32);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815ED80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815ED84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x8815edec
	if (!ctx.cr6.lt) goto loc_8815EDEC;
loc_8815ED94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815edec
	if (ctx.cr6.eq) goto loc_8815EDEC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EDA0;
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
	ctx.current_instruction = 0x8815EDC4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EDCC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815eddc
	if (!ctx.cr0.lt) goto loc_8815EDDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EDDC;
	sub_88156678(ctx, base);
loc_8815EDDC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EDDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ed94
	if (ctx.cr6.gt) goto loc_8815ED94;
loc_8815EDEC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EDF0;
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
	ctx.current_instruction = 0x8815EE08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EE14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815ee24
	if (!ctx.cr0.lt) goto loc_8815EE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EE24;
	sub_88156678(ctx, base);
loc_8815EE24:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stw r28,3716(r27)
	ctx.current_instruction = 0x8815EE28;
	REX_STORE_U32(ctx.r27.u32 + 3716, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,-11664(r11)
	ctx.current_instruction = 0x8815EE38;
	REX_STORE_U32(ctx.r11.u32 + -11664, ctx.r28.u32);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EE3C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// stw r10,3956(r27)
	ctx.current_instruction = 0x8815EE40;
	REX_STORE_U32(ctx.r27.u32 + 3956, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EE44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815eeac
	if (!ctx.cr6.lt) goto loc_8815EEAC;
loc_8815EE54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815eeac
	if (ctx.cr6.eq) goto loc_8815EEAC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EE60;
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
	ctx.current_instruction = 0x8815EE84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EE8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815ee9c
	if (!ctx.cr0.lt) goto loc_8815EE9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EE9C;
	sub_88156678(ctx, base);
loc_8815EE9C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EE9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ee54
	if (ctx.cr6.gt) goto loc_8815EE54;
loc_8815EEAC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EEB0;
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
	ctx.current_instruction = 0x8815EEC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EED4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815eee4
	if (!ctx.cr0.lt) goto loc_8815EEE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EEE4;
	sub_88156678(ctx, base);
loc_8815EEE4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EEE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,3944(r27)
	ctx.current_instruction = 0x8815EEEC;
	REX_STORE_U32(ctx.r27.u32 + 3944, ctx.r29.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EEF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815ef5c
	if (!ctx.cr6.lt) goto loc_8815EF5C;
loc_8815EF04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815ef5c
	if (ctx.cr6.eq) goto loc_8815EF5C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EF10;
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
	ctx.current_instruction = 0x8815EF34;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EF3C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815ef4c
	if (!ctx.cr0.lt) goto loc_8815EF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EF4C;
	sub_88156678(ctx, base);
loc_8815EF4C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ef04
	if (ctx.cr6.gt) goto loc_8815EF04;
loc_8815EF5C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EF60;
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
	ctx.current_instruction = 0x8815EF78;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EF84;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815ef94
	if (!ctx.cr0.lt) goto loc_8815EF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EF94;
	sub_88156678(ctx, base);
loc_8815EF94:
	// stw r29,3948(r27)
	ctx.current_instruction = 0x8815EF94;
	REX_STORE_U32(ctx.r27.u32 + 3948, ctx.r29.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EF9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EFA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f00c
	if (!ctx.cr6.lt) goto loc_8815F00C;
loc_8815EFB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f00c
	if (ctx.cr6.eq) goto loc_8815F00C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EFC0;
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
	ctx.current_instruction = 0x8815EFE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EFEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815effc
	if (!ctx.cr0.lt) goto loc_8815EFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EFFC;
	sub_88156678(ctx, base);
loc_8815EFFC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EFFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815efb4
	if (ctx.cr6.gt) goto loc_8815EFB4;
loc_8815F00C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F010;
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
	ctx.current_instruction = 0x8815F028;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F034;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f044
	if (!ctx.cr0.lt) goto loc_8815F044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F044;
	sub_88156678(ctx, base);
loc_8815F044:
	// stw r30,440(r27)
	ctx.current_instruction = 0x8815F044;
	REX_STORE_U32(ctx.r27.u32 + 440, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815F04C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f0bc
	if (!ctx.cr6.lt) goto loc_8815F0BC;
loc_8815F064:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f0bc
	if (ctx.cr6.eq) goto loc_8815F0BC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F070;
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
	ctx.current_instruction = 0x8815F094;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F09C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f0ac
	if (!ctx.cr0.lt) goto loc_8815F0AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F0AC;
	sub_88156678(ctx, base);
loc_8815F0AC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F0AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f064
	if (ctx.cr6.gt) goto loc_8815F064;
loc_8815F0BC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F0C0;
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
	ctx.current_instruction = 0x8815F0D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F0E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f0f4
	if (!ctx.cr0.lt) goto loc_8815F0F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F0F4;
	sub_88156678(ctx, base);
loc_8815F0F4:
	// stw r30,3940(r27)
	ctx.current_instruction = 0x8815F0F4;
	REX_STORE_U32(ctx.r27.u32 + 3940, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815F0FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f16c
	if (!ctx.cr6.lt) goto loc_8815F16C;
loc_8815F114:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f16c
	if (ctx.cr6.eq) goto loc_8815F16C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F120;
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
	ctx.current_instruction = 0x8815F144;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F14C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f15c
	if (!ctx.cr0.lt) goto loc_8815F15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F15C;
	sub_88156678(ctx, base);
loc_8815F15C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F15C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f114
	if (ctx.cr6.gt) goto loc_8815F114;
loc_8815F16C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F170;
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
	ctx.current_instruction = 0x8815F188;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F194;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f1a4
	if (!ctx.cr0.lt) goto loc_8815F1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F1A4;
	sub_88156678(ctx, base);
loc_8815F1A4:
	// stw r30,448(r27)
	ctx.current_instruction = 0x8815F1A4;
	REX_STORE_U32(ctx.r27.u32 + 448, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815F1AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F1B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f21c
	if (!ctx.cr6.lt) goto loc_8815F21C;
loc_8815F1C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f21c
	if (ctx.cr6.eq) goto loc_8815F21C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F1D0;
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
	ctx.current_instruction = 0x8815F1F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F1FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f20c
	if (!ctx.cr0.lt) goto loc_8815F20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F20C;
	sub_88156678(ctx, base);
loc_8815F20C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F20C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f1c4
	if (ctx.cr6.gt) goto loc_8815F1C4;
loc_8815F21C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F220;
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
	ctx.current_instruction = 0x8815F238;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F244;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f254
	if (!ctx.cr0.lt) goto loc_8815F254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F254;
	sub_88156678(ctx, base);
loc_8815F254:
	// stw r30,400(r27)
	ctx.current_instruction = 0x8815F254;
	REX_STORE_U32(ctx.r27.u32 + 400, ctx.r30.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815F25C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8815f2cc
	if (!ctx.cr6.lt) goto loc_8815F2CC;
loc_8815F274:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f2cc
	if (ctx.cr6.eq) goto loc_8815F2CC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F280;
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
	ctx.current_instruction = 0x8815F2A4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F2AC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f2bc
	if (!ctx.cr0.lt) goto loc_8815F2BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F2BC;
	sub_88156678(ctx, base);
loc_8815F2BC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F2BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f274
	if (ctx.cr6.gt) goto loc_8815F274;
loc_8815F2CC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F2D0;
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
	ctx.current_instruction = 0x8815F2E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F2F4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f304
	if (!ctx.cr0.lt) goto loc_8815F304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F304;
	sub_88156678(ctx, base);
loc_8815F304:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,15528(r27)
	ctx.current_instruction = 0x8815F308;
	REX_STORE_U32(ctx.r27.u32 + 15528, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88178820) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88178820;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88178820) {
			switch (rex_dispatch_address) {
				case 0x88178828:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88178820;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88178828: goto loc_88178828;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88178828;
	__savegprlr_18(ctx, base);
loc_88178828:
	// lwz r11,0(r7)
	ctx.current_instruction = 0x88178828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r24,128
	ctx.r24.s64 = 128;
	// lwz r10,12(r7)
	ctx.current_instruction = 0x88178830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 1;
	// li r19,1
	ctx.r19.s64 = 1;
	// rlwinm r20,r27,0,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r23,r10,r8
	ctx.r23.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x88178b30
	if (!ctx.cr6.gt) goto loc_88178B30;
	// lis r11,-32640
	ctx.r11.s64 = -2139095040;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r22,r5,r3
	ctx.r22.u64 = ctx.r3.u64 - ctx.r5.u64;
	// ori r21,r11,32896
	ctx.r21.u64 = ctx.r11.u64 | 32896;
loc_88178860:
	// lwz r11,60(r7)
	ctx.current_instruction = 0x88178860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lbzx r26,r10,r11
	ctx.current_instruction = 0x88178868;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x88178884
	if (!ctx.cr6.eq) goto loc_88178884;
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stwx r21,r22,r11
	ctx.current_instruction = 0x88178878;
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, ctx.r21.u32);
	// stwx r21,r30,r5
	ctx.current_instruction = 0x8817887C;
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r21.u32);
	// b 0x88178b20
	goto loc_88178B20;
loc_88178884:
	// li r12,85
	ctx.r12.s64 = 85;
	// and r11,r26,r12
	ctx.r11.u64 = ctx.r26.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// bne cr6,0x88178a80
	if (!ctx.cr6.eq) goto loc_88178A80;
	// lwz r11,68(r7)
	ctx.current_instruction = 0x88178894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r9,64(r7)
	ctx.current_instruction = 0x88178898;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r10,12(r7)
	ctx.current_instruction = 0x8817889C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r8,r25,r11
	ctx.current_instruction = 0x881788A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwzx r11,r25,r9
	ctx.current_instruction = 0x881788A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// mullw r9,r8,r23
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r23.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x881788f8
	if (ctx.cr6.lt) goto loc_881788F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881788f8
	if (ctx.cr6.lt) goto loc_881788F8;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x881788C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881788f8
	if (!ctx.cr6.lt) goto loc_881788F8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r8,r11,r4
	ctx.current_instruction = 0x881788E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r8,r22,r10
	ctx.current_instruction = 0x881788E8;
	REX_STORE_U8(ctx.r22.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r11,r11,r6
	ctx.current_instruction = 0x881788EC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r11,r30,r5
	ctx.current_instruction = 0x881788F0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u8);
	// b 0x88178904
	goto loc_88178904;
loc_881788F8:
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stbx r24,r22,r11
	ctx.current_instruction = 0x881788FC;
	REX_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r24.u8);
	// stbx r24,r30,r5
	ctx.current_instruction = 0x88178900;
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r24.u8);
loc_88178904:
	// lwz r10,68(r7)
	ctx.current_instruction = 0x88178904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r11,64(r7)
	ctx.current_instruction = 0x88178908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r9,12(r7)
	ctx.current_instruction = 0x88178910;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x88178918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,8(r8)
	ctx.current_instruction = 0x8817891C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r8,r10,r23
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// srawi r10,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x88178974
	if (ctx.cr6.lt) goto loc_88178974;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88178974
	if (ctx.cr6.lt) goto loc_88178974;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x8817893C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88178974
	if (!ctx.cr6.lt) goto loc_88178974;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r9,r11,r4
	ctx.current_instruction = 0x88178960;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r9,1(r8)
	ctx.current_instruction = 0x88178964;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// lbzx r8,r11,r6
	ctx.current_instruction = 0x88178968;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r8,1(r10)
	ctx.current_instruction = 0x8817896C;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// b 0x88178984
	goto loc_88178984;
loc_88178974:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stb r24,1(r11)
	ctx.current_instruction = 0x8817897C;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r24.u8);
	// stb r24,1(r10)
	ctx.current_instruction = 0x88178980;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r24.u8);
loc_88178984:
	// addi r8,r25,24
	ctx.r8.s64 = ctx.r25.s64 + 24;
	// lwz r10,68(r7)
	ctx.current_instruction = 0x88178988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r31,64(r7)
	ctx.current_instruction = 0x8817898C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// lwz r9,12(r7)
	ctx.current_instruction = 0x88178994;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r10,r11,r10
	ctx.current_instruction = 0x88178998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x8817899C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x881789f4
	if (ctx.cr6.lt) goto loc_881789F4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881789f4
	if (ctx.cr6.lt) goto loc_881789F4;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x881789BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881789f4
	if (!ctx.cr6.lt) goto loc_881789F4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r9,r30,r5
	ctx.r9.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r31,r11,r4
	ctx.current_instruction = 0x881789E0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r31,2(r10)
	ctx.current_instruction = 0x881789E4;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r31.u8);
	// lbzx r11,r11,r6
	ctx.current_instruction = 0x881789E8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r11,2(r9)
	ctx.current_instruction = 0x881789EC;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// b 0x88178a04
	goto loc_88178A04;
loc_881789F4:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stb r24,2(r11)
	ctx.current_instruction = 0x881789FC;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r24.u8);
	// stb r24,2(r10)
	ctx.current_instruction = 0x88178A00;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r24.u8);
loc_88178A04:
	// lwz r11,68(r7)
	ctx.current_instruction = 0x88178A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r10,64(r7)
	ctx.current_instruction = 0x88178A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r9,12(r7)
	ctx.current_instruction = 0x88178A0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r31,r8,r11
	ctx.current_instruction = 0x88178A10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x88178A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r31,r23
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r23.s32);
	// srawi r10,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x88178a6c
	if (ctx.cr6.lt) goto loc_88178A6C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88178a6c
	if (ctx.cr6.lt) goto loc_88178A6C;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x88178A34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88178a6c
	if (!ctx.cr6.lt) goto loc_88178A6C;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r9,r11,r4
	ctx.current_instruction = 0x88178A58;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r9,3(r8)
	ctx.current_instruction = 0x88178A5C;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lbzx r8,r11,r6
	ctx.current_instruction = 0x88178A60;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r8,3(r10)
	ctx.current_instruction = 0x88178A64;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// b 0x88178b20
	goto loc_88178B20;
loc_88178A6C:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stb r24,3(r11)
	ctx.current_instruction = 0x88178A74;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r24.u8);
	// stb r24,3(r10)
	ctx.current_instruction = 0x88178A78;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r24.u8);
	// b 0x88178b20
	goto loc_88178B20;
loc_88178A80:
	// li r10,4
	ctx.r10.s64 = 4;
	// add r8,r30,r5
	ctx.r8.u64 = ctx.r30.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r29,r22,r8
	ctx.r29.u64 = ctx.r22.u64 + ctx.r8.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88178A98:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r19,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r10.u8 & 0x3F));
	// and r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 & ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88178b0c
	if (ctx.cr6.eq) goto loc_88178B0C;
	// lwz r10,68(r7)
	ctx.current_instruction = 0x88178AAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r9,64(r7)
	ctx.current_instruction = 0x88178AB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	ctx.current_instruction = 0x88178AB4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r18,r10,r28
	ctx.current_instruction = 0x88178AB8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwzx r10,r9,r28
	ctx.current_instruction = 0x88178ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// mullw r9,r18,r23
	ctx.r9.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r23.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// blt cr6,0x88178b0c
	if (ctx.cr6.lt) goto loc_88178B0C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x88178b0c
	if (ctx.cr6.lt) goto loc_88178B0C;
	// lwz r31,4(r7)
	ctx.current_instruction = 0x88178ADC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88178b0c
	if (!ctx.cr6.lt) goto loc_88178B0C;
	// srawi r31,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r31,r27
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r4
	ctx.current_instruction = 0x88178AF8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r29,r11
	ctx.current_instruction = 0x88178AFC;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r10,r10,r6
	ctx.current_instruction = 0x88178B00;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r10,r8,r11
	ctx.current_instruction = 0x88178B04;
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x88178b14
	goto loc_88178B14;
loc_88178B0C:
	// stbx r24,r29,r11
	ctx.current_instruction = 0x88178B0C;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r24.u8);
	// stbx r24,r8,r11
	ctx.current_instruction = 0x88178B10;
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r24.u8);
loc_88178B14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bdnz 0x88178a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88178A98;
loc_88178B20:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x88178860
	if (ctx.cr6.lt) goto loc_88178860;
loc_88178B30:
	// cmpw cr6,r20,r27
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x88178bf0
	if (ctx.cr6.eq) goto loc_88178BF0;
	// lwz r11,60(r7)
	ctx.current_instruction = 0x88178B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// lbzx r11,r10,r11
	ctx.current_instruction = 0x88178B44;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x88178bf0
	if (!ctx.cr6.lt) goto loc_88178BF0;
	// subf r9,r30,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r30.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r31,r30,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88178B64:
	// rlwinm r11,r30,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x6;
	// slw r9,r19,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 & ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88178bd8
	if (ctx.cr6.eq) goto loc_88178BD8;
	// lwz r11,68(r7)
	ctx.current_instruction = 0x88178B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r9,64(r7)
	ctx.current_instruction = 0x88178B7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r8,12(r7)
	ctx.current_instruction = 0x88178B80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r28,r11,r31
	ctx.current_instruction = 0x88178B84;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r11,r9,r31
	ctx.current_instruction = 0x88178B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mullw r9,r28,r23
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// blt cr6,0x88178bd8
	if (ctx.cr6.lt) goto loc_88178BD8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x88178bd8
	if (ctx.cr6.lt) goto loc_88178BD8;
	// lwz r8,4(r7)
	ctx.current_instruction = 0x88178BA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88178bd8
	if (!ctx.cr6.lt) goto loc_88178BD8;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r8,r27
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r11,r4
	ctx.current_instruction = 0x88178BC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r9,r10,r5
	ctx.current_instruction = 0x88178BC8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// lbzx r8,r11,r6
	ctx.current_instruction = 0x88178BCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r8,0(r10)
	ctx.current_instruction = 0x88178BD0;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// b 0x88178be0
	goto loc_88178BE0;
loc_88178BD8:
	// stbx r24,r10,r5
	ctx.current_instruction = 0x88178BD8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r24.u8);
	// stb r24,0(r10)
	ctx.current_instruction = 0x88178BDC;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r24.u8);
loc_88178BE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88178b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88178B64;
loc_88178BF0:
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817EA48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817EA48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817EA48) {
			switch (rex_dispatch_address) {
				case 0x8817EA50:
				case 0x8817EAEC:
				case 0x8817ED0C:
				case 0x8817ED34:
				case 0x8817ED7C:
				case 0x8817EDA4:
				case 0x8817EDE4:
				case 0x8817EE0C:
				case 0x8817EE4C:
				case 0x8817EE74:
				case 0x8817EF90:
				case 0x8817EFB8:
				case 0x8817F008:
				case 0x8817F030:
				case 0x8817F074:
				case 0x8817F09C:
				case 0x8817F0E0:
				case 0x8817F108:
				case 0x8817F158:
				case 0x8817F17C:
				case 0x8817F1C0:
				case 0x8817F1E4:
				case 0x8817F228:
				case 0x8817F24C:
				case 0x8817F290:
				case 0x8817F2B4:
				case 0x8817F3B4:
				case 0x8817F3D8:
				case 0x8817F41C:
				case 0x8817F440:
				case 0x8817F484:
				case 0x8817F4A8:
				case 0x8817F5EC:
				case 0x8817F628:
				case 0x8817F6DC:
				case 0x8817F708:
				case 0x8817F740:
				case 0x8817F770:
				case 0x8817F824:
				case 0x8817F980:
				case 0x8817F9AC:
				case 0x8817FA5C:
				case 0x8817FA88:
				case 0x8817FAC4:
				case 0x8817FAF4:
				case 0x8817FBA4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817EA48;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817EA50: goto loc_8817EA50;
		case 0x8817EAEC: goto loc_8817EAEC;
		case 0x8817ED0C: goto loc_8817ED0C;
		case 0x8817ED34: goto loc_8817ED34;
		case 0x8817ED7C: goto loc_8817ED7C;
		case 0x8817EDA4: goto loc_8817EDA4;
		case 0x8817EDE4: goto loc_8817EDE4;
		case 0x8817EE0C: goto loc_8817EE0C;
		case 0x8817EE4C: goto loc_8817EE4C;
		case 0x8817EE74: goto loc_8817EE74;
		case 0x8817EF90: goto loc_8817EF90;
		case 0x8817EFB8: goto loc_8817EFB8;
		case 0x8817F008: goto loc_8817F008;
		case 0x8817F030: goto loc_8817F030;
		case 0x8817F074: goto loc_8817F074;
		case 0x8817F09C: goto loc_8817F09C;
		case 0x8817F0E0: goto loc_8817F0E0;
		case 0x8817F108: goto loc_8817F108;
		case 0x8817F158: goto loc_8817F158;
		case 0x8817F17C: goto loc_8817F17C;
		case 0x8817F1C0: goto loc_8817F1C0;
		case 0x8817F1E4: goto loc_8817F1E4;
		case 0x8817F228: goto loc_8817F228;
		case 0x8817F24C: goto loc_8817F24C;
		case 0x8817F290: goto loc_8817F290;
		case 0x8817F2B4: goto loc_8817F2B4;
		case 0x8817F3B4: goto loc_8817F3B4;
		case 0x8817F3D8: goto loc_8817F3D8;
		case 0x8817F41C: goto loc_8817F41C;
		case 0x8817F440: goto loc_8817F440;
		case 0x8817F484: goto loc_8817F484;
		case 0x8817F4A8: goto loc_8817F4A8;
		case 0x8817F5EC: goto loc_8817F5EC;
		case 0x8817F628: goto loc_8817F628;
		case 0x8817F6DC: goto loc_8817F6DC;
		case 0x8817F708: goto loc_8817F708;
		case 0x8817F740: goto loc_8817F740;
		case 0x8817F770: goto loc_8817F770;
		case 0x8817F824: goto loc_8817F824;
		case 0x8817F980: goto loc_8817F980;
		case 0x8817F9AC: goto loc_8817F9AC;
		case 0x8817FA5C: goto loc_8817FA5C;
		case 0x8817FA88: goto loc_8817FA88;
		case 0x8817FAC4: goto loc_8817FAC4;
		case 0x8817FAF4: goto loc_8817FAF4;
		case 0x8817FBA4: goto loc_8817FBA4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8817EA50;
	__savegprlr_14(ctx, base);
loc_8817EA50:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x8817EA50;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r11,74(r4)
	ctx.current_instruction = 0x8817EA58;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// stw r8,364(r1)
	ctx.current_instruction = 0x8817EA5C;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r6,348(r1)
	ctx.current_instruction = 0x8817EA68;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r7,356(r1)
	ctx.current_instruction = 0x8817EA70;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,372(r1)
	ctx.current_instruction = 0x8817EA78;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// lhz r8,50(r31)
	ctx.current_instruction = 0x8817EA7C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,52(r31)
	ctx.current_instruction = 0x8817EA84;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lhz r9,76(r31)
	ctx.current_instruction = 0x8817EA8C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r24,r8,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r21,r6,31,1,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,324(r1)
	ctx.current_instruction = 0x8817EA98;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,15720(r3)
	ctx.current_instruction = 0x8817EAA0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15720);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r27,15724(r3)
	ctx.current_instruction = 0x8817EAA8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 15724);
	// rotlwi r23,r11,3
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwz r17,1356(r31)
	ctx.current_instruction = 0x8817EAB0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// rotlwi r22,r11,4
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwz r29,15728(r3)
	ctx.current_instruction = 0x8817EAB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15728);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r26,15732(r3)
	ctx.current_instruction = 0x8817EAC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 15732);
	// rotlwi r6,r9,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r10,120(r1)
	ctx.current_instruction = 0x8817EAC8;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r24,108(r1)
	ctx.current_instruction = 0x8817EACC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r21,104(r1)
	ctx.current_instruction = 0x8817EAD0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r23,92(r1)
	ctx.current_instruction = 0x8817EAD4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r8,124(r1)
	ctx.current_instruction = 0x8817EAD8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r22,96(r1)
	ctx.current_instruction = 0x8817EADC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r7,116(r1)
	ctx.current_instruction = 0x8817EAE0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x8817EAE4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x8817dfc8
	ctx.lr = 0x8817EAEC;
	sub_8817DFC8(ctx, base);
loc_8817EAEC:
	// mullw r10,r24,r25
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x8817EAF0;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r14,r11,r28
	ctx.r14.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r15,r11,r27
	ctx.r15.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r4,132(r1)
	ctx.current_instruction = 0x8817EB04;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8817EB0C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,1588(r31)
	ctx.current_instruction = 0x8817EB10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817eb3c
	if (!ctx.cr6.eq) goto loc_8817EB3C;
	// lwz r8,20680(r3)
	ctx.current_instruction = 0x8817EB1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.current_instruction = 0x8817EB28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817eb84
	if (ctx.cr6.eq) goto loc_8817EB84;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8817EB3C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8817eb64
	if (!ctx.cr6.eq) goto loc_8817EB64;
	// lwz r8,20680(r3)
	ctx.current_instruction = 0x8817EB44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.current_instruction = 0x8817EB50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817eb84
	if (ctx.cr6.eq) goto loc_8817EB84;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8817EB64:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r8,20680(r3)
	ctx.current_instruction = 0x8817EB6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.current_instruction = 0x8817EB78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
loc_8817EB84:
	// lhz r11,74(r31)
	ctx.current_instruction = 0x8817EB84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r10,r23,r30
	ctx.r10.u64 = ctx.r23.u64 + ctx.r30.u64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r4,r10
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r10
	// rotlwi r29,r11,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r28,r29
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// dcbt r28,r10
	// neg r27,r11
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r27,r10
	// dcbt r23,r30
	// dcbt r11,r10
	// dcbt r29,r10
	// dcbt r9,r10
	// add r10,r22,r30
	ctx.r10.u64 = ctx.r22.u64 + ctx.r30.u64;
	// dcbt r4,r10
	// dcbt r6,r10
	// dcbt r28,r10
	// dcbt r27,r10
	// dcbt r22,r30
	// dcbt r11,r10
	// dcbt r29,r10
	// dcbt r9,r10
	// dcbt r0,r30
	// dcbt r11,r30
	// dcbt r29,r30
	// dcbt r9,r30
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8817ec2c
	if (ctx.cr6.eq) goto loc_8817EC2C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817ec2c
	if (ctx.cr6.eq) goto loc_8817EC2C;
	// lwz r11,1372(r31)
	ctx.current_instruction = 0x8817EC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8817ec2c
	if (!ctx.cr6.eq) goto loc_8817EC2C;
	// lwz r10,21972(r3)
	ctx.current_instruction = 0x8817EC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8817ec30
	goto loc_8817EC30;
loc_8817EC2C:
	// lwz r11,21972(r3)
	ctx.current_instruction = 0x8817EC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
loc_8817EC30:
	// stw r11,21968(r3)
	ctx.current_instruction = 0x8817EC30;
	REX_STORE_U32(ctx.r3.u32 + 21968, ctx.r11.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// stw r25,100(r1)
	ctx.current_instruction = 0x8817EC38;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// addi r11,r11,20448
	ctx.r11.s64 = ctx.r11.s64 + 20448;
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r5.u32, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x8817EC48;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8817f4cc
	if (!ctx.cr6.lt) goto loc_8817F4CC;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x8817EC50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,112(r1)
	ctx.current_instruction = 0x8817EC58;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8817EC5C:
	// lwz r10,324(r1)
	ctx.current_instruction = 0x8817EC5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,100(r1)
	ctx.current_instruction = 0x8817EC60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,21940(r10)
	ctx.current_instruction = 0x8817EC64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8817EC6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8817eca8
	if (ctx.cr6.eq) goto loc_8817ECA8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8817eca0
	if (!ctx.cr6.lt) goto loc_8817ECA0;
	// lwz r11,21968(r10)
	ctx.current_instruction = 0x8817EC80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21968);
	// lwz r10,112(r1)
	ctx.current_instruction = 0x8817EC84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.current_instruction = 0x8817EC8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8817eca0
	if (!ctx.cr6.eq) goto loc_8817ECA0;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x8817ecb4
	goto loc_8817ECB4;
loc_8817ECA0:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x8817ecb4
	goto loc_8817ECB4;
loc_8817ECA8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfze r23,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r23.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817ECB4:
	// lbz r25,0(r14)
	ctx.current_instruction = 0x8817ECB4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// lbzu r26,1(r14)
	ctx.current_instruction = 0x8817ECBC;
	ea = 1 + ctx.r14.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r14.u32 = ea;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8817ECC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r26,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817ECC8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r27,74(r31)
	ctx.current_instruction = 0x8817ECCC;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r24,80(r1)
	ctx.current_instruction = 0x8817ECD4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r16,r10
	ctx.r28.u64 = ctx.r16.u64 + ctx.r10.u64;
	// stw r23,88(r1)
	ctx.current_instruction = 0x8817ECDC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ed34
	if (ctx.cr6.eq) goto loc_8817ED34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r30,r11,r10
	ctx.current_instruction = 0x8817ECF8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED0C;
	sub_881973D8(ctx, base);
loc_8817ED0C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ed34
	if (ctx.cr6.eq) goto loc_8817ED34;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED34;
	sub_881973D8(ctx, base);
loc_8817ED34:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8817eda4
	if (!ctx.cr6.eq) goto loc_8817EDA4;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x8817ED3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817ED44;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r27,74(r31)
	ctx.current_instruction = 0x8817ED48;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r28,r16,r10
	ctx.r28.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817eda4
	if (ctx.cr6.eq) goto loc_8817EDA4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r30,r11,r10
	ctx.current_instruction = 0x8817ED68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED7C;
	sub_881973D8(ctx, base);
loc_8817ED7C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817eda4
	if (ctx.cr6.eq) goto loc_8817EDA4;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EDA4;
	sub_881973D8(ctx, base);
loc_8817EDA4:
	// lwz r10,120(r1)
	ctx.current_instruction = 0x8817EDA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r25,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817EDAC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.current_instruction = 0x8817EDB0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ee0c
	if (ctx.cr6.eq) goto loc_8817EE0C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r30,r11,r10
	ctx.current_instruction = 0x8817EDD0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EDE4;
	sub_881973D8(ctx, base);
loc_8817EDE4:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ee0c
	if (ctx.cr6.eq) goto loc_8817EE0C;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE0C;
	sub_881973D8(ctx, base);
loc_8817EE0C:
	// lwz r10,124(r1)
	ctx.current_instruction = 0x8817EE0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817EE14;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.current_instruction = 0x8817EE18;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ee74
	if (ctx.cr6.eq) goto loc_8817EE74;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r30,r11,r10
	ctx.current_instruction = 0x8817EE38;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE4C;
	sub_881973D8(ctx, base);
loc_8817EE4C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ee74
	if (ctx.cr6.eq) goto loc_8817EE74;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE74;
	sub_881973D8(ctx, base);
loc_8817EE74:
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8817EE74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8817f2cc
	if (!ctx.cr6.gt) goto loc_8817F2CC;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8817EE84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r16,16
	ctx.r29.s64 = ctx.r16.s64 + 16;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x8817EE8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,120(r1)
	ctx.current_instruction = 0x8817EE90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r21,r10,-16
	ctx.r21.s64 = ctx.r10.s64 + -16;
	// lwz r7,124(r1)
	ctx.current_instruction = 0x8817EE98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r20,r9,-16
	ctx.r20.s64 = ctx.r9.s64 + -16;
	// addi r19,r8,-16
	ctx.r19.s64 = ctx.r8.s64 + -16;
	// addi r18,r7,-16
	ctx.r18.s64 = ctx.r7.s64 + -16;
loc_8817EEA8:
	// lbz r24,0(r14)
	ctx.current_instruction = 0x8817EEA8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// addic. r23,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r23.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lbzu r25,1(r14)
	ctx.current_instruction = 0x8817EEB0;
	ea = 1 + ctx.r14.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r14.u32 = ea;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// bne 0x8817ef4c
	if (!ctx.cr0.eq) goto loc_8817EF4C;
	// lhz r10,74(r31)
	ctx.current_instruction = 0x8817EEBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8817EEC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8817EF0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817EF4C:
	// rlwinm r11,r25,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817EF50;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817EF54;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817efb8
	if (ctx.cr6.eq) goto loc_8817EFB8;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817EF60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r21,r29
	ctx.r11.u64 = ctx.r21.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.current_instruction = 0x8817EF7C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EF90;
	sub_881973D8(ctx, base);
loc_8817EF90:
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817efb8
	if (ctx.cr6.eq) goto loc_8817EFB8;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EFB8;
	sub_881973D8(ctx, base);
loc_8817EFB8:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8817EFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817f030
	if (!ctx.cr6.eq) goto loc_8817F030;
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817EFC8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817EFCC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f030
	if (ctx.cr6.eq) goto loc_8817F030;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817EFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r20,r29
	ctx.r11.u64 = ctx.r20.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.current_instruction = 0x8817EFF4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F008;
	sub_881973D8(ctx, base);
loc_8817F008:
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f030
	if (ctx.cr6.eq) goto loc_8817F030;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F030;
	sub_881973D8(ctx, base);
loc_8817F030:
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F034;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F038;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f09c
	if (ctx.cr6.eq) goto loc_8817F09C;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817F044;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r19,r29
	ctx.r11.u64 = ctx.r19.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.current_instruction = 0x8817F060;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F074;
	sub_881973D8(ctx, base);
loc_8817F074:
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f09c
	if (ctx.cr6.eq) goto loc_8817F09C;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F09C;
	sub_881973D8(ctx, base);
loc_8817F09C:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F0A0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F0A4;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f108
	if (ctx.cr6.eq) goto loc_8817F108;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817F0B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r18,r29
	ctx.r11.u64 = ctx.r18.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.current_instruction = 0x8817F0CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F0E0;
	sub_881973D8(ctx, base);
loc_8817F0E0:
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f108
	if (ctx.cr6.eq) goto loc_8817F108;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F108;
	sub_881973D8(ctx, base);
loc_8817F108:
	// lbz r24,0(r15)
	ctx.current_instruction = 0x8817F108;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbzu r25,1(r15)
	ctx.current_instruction = 0x8817F10C;
	ea = 1 + ctx.r15.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F110;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r25,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F118;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f17c
	if (ctx.cr6.eq) goto loc_8817F17C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-13
	ctx.r28.s64 = ctx.r29.s64 + -13;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F144;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F158;
	sub_88197808(ctx, base);
loc_8817F158:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F158;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f17c
	if (ctx.cr6.lt) goto loc_8817F17C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F17C;
	sub_88197808(ctx, base);
loc_8817F17C:
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F180;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F184;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f1e4
	if (ctx.cr6.eq) goto loc_8817F1E4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-5
	ctx.r28.s64 = ctx.r29.s64 + -5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F1AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F1C0;
	sub_88197808(ctx, base);
loc_8817F1C0:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F1C0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f1e4
	if (ctx.cr6.lt) goto loc_8817F1E4;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F1D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F1E4;
	sub_88197808(ctx, base);
loc_8817F1E4:
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F1E8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F1EC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f24c
	if (ctx.cr6.eq) goto loc_8817F24C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-17
	ctx.r28.s64 = ctx.r29.s64 + -17;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F214;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F228;
	sub_88197808(ctx, base);
loc_8817F228:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F228;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f24c
	if (ctx.cr6.lt) goto loc_8817F24C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F24C;
	sub_88197808(ctx, base);
loc_8817F24C:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.current_instruction = 0x8817F250;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817F254;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f2b4
	if (ctx.cr6.eq) goto loc_8817F2B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-9
	ctx.r28.s64 = ctx.r29.s64 + -9;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F27C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F290;
	sub_88197808(ctx, base);
loc_8817F290:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F290;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f2b4
	if (ctx.cr6.lt) goto loc_8817F2B4;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F2A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F2B4;
	sub_88197808(ctx, base);
loc_8817F2B4:
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8817F2B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8817eea8
	if (ctx.cr6.lt) goto loc_8817EEA8;
loc_8817F2CC:
	// lhz r11,82(r31)
	ctx.current_instruction = 0x8817F2CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8817F2D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f364
	if (!ctx.cr6.eq) goto loc_8817F364;
	// lhz r10,74(r31)
	ctx.current_instruction = 0x8817F2E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8817F2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8817F32C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r16
	// dcbt r10,r16
	// dcbt r5,r16
	// dcbt r9,r16
loc_8817F364:
	// lbz r26,0(r15)
	ctx.current_instruction = 0x8817F364;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// addi r29,r22,3
	ctx.r29.s64 = ctx.r22.s64 + 3;
	// lbzu r11,1(r15)
	ctx.current_instruction = 0x8817F36C;
	ea = 1 + ctx.r15.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// lbz r28,1244(r31)
	ctx.current_instruction = 0x8817F370;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r27,74(r31)
	ctx.current_instruction = 0x8817F378;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f3d8
	if (ctx.cr6.eq) goto loc_8817F3D8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F3A0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F3A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F3B4;
	sub_88197808(ctx, base);
loc_8817F3B4:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F3B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f3d8
	if (ctx.cr6.lt) goto loc_8817F3D8;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F3C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F3D8;
	sub_88197808(ctx, base);
loc_8817F3D8:
	// rlwinm r11,r26,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817F3DC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.current_instruction = 0x8817F3E0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r27,r22,-1
	ctx.r27.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f440
	if (ctx.cr6.eq) goto loc_8817F440;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F408;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F40C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F41C;
	sub_88197808(ctx, base);
loc_8817F41C:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F41C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f440
	if (ctx.cr6.lt) goto loc_8817F440;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F42C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F440;
	sub_88197808(ctx, base);
loc_8817F440:
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.current_instruction = 0x8817F444;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.current_instruction = 0x8817F448;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r27,r22,7
	ctx.r27.s64 = ctx.r22.s64 + 7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f4a8
	if (ctx.cr6.eq) goto loc_8817F4A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F470;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8817F474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F484;
	sub_88197808(ctx, base);
loc_8817F484:
	// lbz r9,1(r30)
	ctx.current_instruction = 0x8817F484;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f4a8
	if (ctx.cr6.lt) goto loc_8817F4A8;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8817F494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F4A8;
	sub_88197808(ctx, base);
loc_8817F4A8:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8817F4A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,112(r1)
	ctx.current_instruction = 0x8817F4AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,372(r1)
	ctx.current_instruction = 0x8817F4B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8817F4BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,112(r1)
	ctx.current_instruction = 0x8817F4C4;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// blt cr6,0x8817ec5c
	if (ctx.cr6.lt) goto loc_8817EC5C;
loc_8817F4CC:
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817F4CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r8,348(r1)
	ctx.current_instruction = 0x8817F4D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8817F4D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r8
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r23,364(r1)
	ctx.current_instruction = 0x8817F530;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,372(r1)
	ctx.current_instruction = 0x8817F534;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8817f848
	if (!ctx.cr6.lt) goto loc_8817F848;
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8817F540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,128(r1)
	ctx.current_instruction = 0x8817F548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.current_instruction = 0x8817F54C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r20,r11,-1
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
loc_8817F55C:
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8817F55C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,21940(r11)
	ctx.current_instruction = 0x8817F560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817f598
	if (ctx.cr6.eq) goto loc_8817F598;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817f590
	if (!ctx.cr6.lt) goto loc_8817F590;
	// lwz r11,21968(r11)
	ctx.current_instruction = 0x8817F574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8817F57C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f590
	if (!ctx.cr6.eq) goto loc_8817F590;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8817f5a4
	goto loc_8817F5A4;
loc_8817F590:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8817f5a4
	goto loc_8817F5A4;
loc_8817F598:
	// subfc r11,r20,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r23.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r25,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r25.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817F5A4:
	// lbz r30,1(r24)
	ctx.current_instruction = 0x8817F5A4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8817f5f0
	if (!ctx.cr6.eq) goto loc_8817F5F0;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f5f0
	if (ctx.cr6.eq) goto loc_8817F5F0;
	// lwz r22,80(r1)
	ctx.current_instruction = 0x8817F5C4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,84(r1)
	ctx.current_instruction = 0x8817F5C8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F5CC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F5D0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8817F5D4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F5EC;
	sub_881973D8(ctx, base);
loc_8817F5EC:
	// b 0x8817f5f8
	goto loc_8817F5F8;
loc_8817F5F0:
	// lwz r17,84(r1)
	ctx.current_instruction = 0x8817F5F0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.current_instruction = 0x8817F5F4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817F5F8:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// lwz r16,116(r1)
	ctx.current_instruction = 0x8817F5FC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f628
	if (ctx.cr6.eq) goto loc_8817F628;
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8817F608;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F60C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F614;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F628;
	sub_881973D8(ctx, base);
loc_8817F628:
	// lwz r15,108(r1)
	ctx.current_instruction = 0x8817F628;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r18,8
	ctx.r19.s64 = ctx.r18.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x8817f788
	if (!ctx.cr6.gt) goto loc_8817F788;
	// addi r29,r19,8
	ctx.r29.s64 = ctx.r19.s64 + 8;
loc_8817F640:
	// lbzu r30,1(r24)
	ctx.current_instruction = 0x8817F640;
	ea = 1 + ctx.r24.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8817f6a8
	if (!ctx.cr0.eq) goto loc_8817F6A8;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817F64C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r19,r17
	ctx.r11.u64 = ctx.r19.u64 + ctx.r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r29
	// dcbt r10,r29
	// dcbt r5,r29
	// dcbt r9,r29
loc_8817F6A8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8817f6dc
	if (!ctx.cr6.eq) goto loc_8817F6DC;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f6dc
	if (ctx.cr6.eq) goto loc_8817F6DC;
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8817F6BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F6C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F6C8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F6DC;
	sub_881973D8(ctx, base);
loc_8817F6DC:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f708
	if (ctx.cr6.eq) goto loc_8817F708;
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8817F6E8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F6EC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F6F4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F708;
	sub_881973D8(ctx, base);
loc_8817F708:
	// lbz r30,1(r26)
	ctx.current_instruction = 0x8817F708;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F710;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f740
	if (ctx.cr6.eq) goto loc_8817F740;
	// lbzx r11,r11,r22
	ctx.current_instruction = 0x8817F720;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F724;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x88197808
	ctx.lr = 0x8817F740;
	sub_88197808(ctx, base);
loc_8817F740:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F744;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f770
	if (ctx.cr6.eq) goto loc_8817F770;
	// lbzx r11,r11,r22
	ctx.current_instruction = 0x8817F750;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F754;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817F770;
	sub_88197808(ctx, base);
loc_8817F770:
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8817f640
	if (ctx.cr6.lt) goto loc_8817F640;
loc_8817F788:
	// lhz r11,84(r31)
	ctx.current_instruction = 0x8817F788;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bne cr6,0x8817f7f0
	if (!ctx.cr6.eq) goto loc_8817F7F0;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817F798;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r18,r17
	ctx.r11.u64 = ctx.r18.u64 + ctx.r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r18,r17
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_8817F7F0:
	// lbzu r11,1(r26)
	ctx.current_instruction = 0x8817F7F0;
	ea = 1 + ctx.r26.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F7F4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f824
	if (ctx.cr6.eq) goto loc_8817F824;
	// lbzx r11,r11,r22
	ctx.current_instruction = 0x8817F804;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F808;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817F824;
	sub_88197808(ctx, base);
loc_8817F824:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8817F824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8817f55c
	if (ctx.cr6.lt) goto loc_8817F55C;
	// lwz r8,348(r1)
	ctx.current_instruction = 0x8817F838;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r23,364(r1)
	ctx.current_instruction = 0x8817F83C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8817F840;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8817f84c
	goto loc_8817F84C;
loc_8817F848:
	// lwz r19,136(r1)
	ctx.current_instruction = 0x8817F848;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8817F84C:
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817F84C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r26,356(r1)
	ctx.current_instruction = 0x8817F850;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r26
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8817F8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,136(r1)
	ctx.current_instruction = 0x8817F8B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,372(r1)
	ctx.current_instruction = 0x8817F8B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,15728(r11)
	ctx.current_instruction = 0x8817F8BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15728);
	// lwz r11,15732(r11)
	ctx.current_instruction = 0x8817F8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15732);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x8817fbb8
	if (!ctx.cr6.lt) goto loc_8817FBB8;
	// lwz r9,104(r1)
	ctx.current_instruction = 0x8817F8D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// lwz r8,364(r1)
	ctx.current_instruction = 0x8817F8D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// lwz r14,108(r1)
	ctx.current_instruction = 0x8817F8E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r20,r9,-1
	ctx.r20.s64 = ctx.r9.s64 + -1;
	// lwz r15,116(r1)
	ctx.current_instruction = 0x8817F8E8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r21,r8,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,84(r1)
	ctx.current_instruction = 0x8817F8F0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r17,80(r1)
	ctx.current_instruction = 0x8817F8F4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817F8F8:
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8817F8F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,21940(r11)
	ctx.current_instruction = 0x8817F8FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817f934
	if (ctx.cr6.eq) goto loc_8817F934;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817f92c
	if (!ctx.cr6.lt) goto loc_8817F92C;
	// lwz r11,21968(r11)
	ctx.current_instruction = 0x8817F910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8817F918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f92c
	if (!ctx.cr6.eq) goto loc_8817F92C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8817f940
	goto loc_8817F940;
loc_8817F92C:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8817f940
	goto loc_8817F940;
loc_8817F934:
	// subfc r11,r20,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r22.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817F940:
	// lbz r30,1(r23)
	ctx.current_instruction = 0x8817F940;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r23.u32 + 1);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8817f980
	if (!ctx.cr6.eq) goto loc_8817F980;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f980
	if (ctx.cr6.eq) goto loc_8817F980;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F960;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F964;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F96C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F980;
	sub_881973D8(ctx, base);
loc_8817F980:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f9ac
	if (ctx.cr6.eq) goto loc_8817F9AC;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817F98C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817F990;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817F998;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F9AC;
	sub_881973D8(ctx, base);
loc_8817F9AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 1, ctx.xer);
	// ble cr6,0x8817fb08
	if (!ctx.cr6.gt) goto loc_8817FB08;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
loc_8817F9BC:
	// lbzu r30,1(r23)
	ctx.current_instruction = 0x8817F9BC;
	ea = 1 + ctx.r23.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r23.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8817fa28
	if (!ctx.cr0.eq) goto loc_8817FA28;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817F9C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r29,r16
	ctx.r11.u64 = ctx.r29.u64 + ctx.r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r19,8
	ctx.r11.s64 = ctx.r19.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817FA28:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8817fa5c
	if (!ctx.cr6.eq) goto loc_8817FA5C;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fa5c
	if (ctx.cr6.eq) goto loc_8817FA5C;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817FA3C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817FA40;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817FA48;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817FA5C;
	sub_881973D8(ctx, base);
loc_8817FA5C:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fa88
	if (ctx.cr6.eq) goto loc_8817FA88;
	// lbzx r10,r11,r17
	ctx.current_instruction = 0x8817FA68;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817FA6C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817FA74;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817FA88;
	sub_881973D8(ctx, base);
loc_8817FA88:
	// lbz r10,1(r25)
	ctx.current_instruction = 0x8817FA88;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817FA90;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fac4
	if (ctx.cr6.eq) goto loc_8817FAC4;
	// lbzx r11,r11,r17
	ctx.current_instruction = 0x8817FAA4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817FAA8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x88197808
	ctx.lr = 0x8817FAC4;
	sub_88197808(ctx, base);
loc_8817FAC4:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817FAC8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817faf4
	if (ctx.cr6.eq) goto loc_8817FAF4;
	// lbzx r11,r11,r17
	ctx.current_instruction = 0x8817FAD4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817FAD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817FAF4;
	sub_88197808(ctx, base);
loc_8817FAF4:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8817f9bc
	if (ctx.cr6.lt) goto loc_8817F9BC;
loc_8817FB08:
	// lhz r11,84(r31)
	ctx.current_instruction = 0x8817FB08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne cr6,0x8817fb70
	if (!ctx.cr6.eq) goto loc_8817FB70;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817FB18;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r26,r16
	ctx.r11.u64 = ctx.r26.u64 + ctx.r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r26,r16
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_8817FB70:
	// lbzu r11,1(r25)
	ctx.current_instruction = 0x8817FB70;
	ea = 1 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817FB74;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fba4
	if (ctx.cr6.eq) goto loc_8817FBA4;
	// lbzx r11,r11,r17
	ctx.current_instruction = 0x8817FB84;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817FB88;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817FBA4;
	sub_88197808(ctx, base);
loc_8817FBA4:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8817FBA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8817f8f8
	if (ctx.cr6.lt) goto loc_8817F8F8;
loc_8817FBB8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AB868) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AB868;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AB868) {
			switch (rex_dispatch_address) {
				case 0x881AB870:
				case 0x881AB918:
				case 0x881AB998:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AB868;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AB870: goto loc_881AB870;
		case 0x881AB918: goto loc_881AB918;
		case 0x881AB998: goto loc_881AB998;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881AB870;
	__savegprlr_16(ctx, base);
loc_881AB870:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881AB870;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,3772(r3)
	ctx.current_instruction = 0x881AB874;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,15692(r3)
	ctx.current_instruction = 0x881AB87C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15692);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x881AB884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r21,r10,r4
	ctx.r21.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r19,132(r3)
	ctx.current_instruction = 0x881AB88C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r7,220(r3)
	ctx.current_instruction = 0x881AB890;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r8,0(r6)
	ctx.current_instruction = 0x881AB894;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lwz r9,4(r6)
	ctx.current_instruction = 0x881AB89C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,8(r6)
	ctx.current_instruction = 0x881AB8A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r22,r7,r8
	ctx.r22.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r24,128(r3)
	ctx.current_instruction = 0x881AB8A8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// add r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x881ab9e0
	if (ctx.cr6.eq) goto loc_881AB9E0;
loc_881AB8B8:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x881ab9b4
	if (ctx.cr6.eq) goto loc_881AB9B4;
	// addi r17,r24,-1
	ctx.r17.s64 = ctx.r24.s64 + -1;
	// addi r18,r19,-1
	ctx.r18.s64 = ctx.r19.s64 + -1;
	// subf r26,r25,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r25.u64;
loc_881AB8DC:
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x881ab924
	if (ctx.cr6.eq) goto loc_881AB924;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x881ab91c
	if (ctx.cr6.eq) goto loc_881AB91C;
	// lwz r11,15936(r31)
	ctx.current_instruction = 0x881AB8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15936);
	// add r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,15684(r31)
	ctx.current_instruction = 0x881AB8F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,108(r31)
	ctx.current_instruction = 0x881AB900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,96(r31)
	ctx.current_instruction = 0x881AB908;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881AB918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB918:
	// b 0x881ab998
	goto loc_881AB998;
loc_881AB91C:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x881ab934
	goto loc_881AB934;
loc_881AB924:
	// lwz r10,180(r31)
	ctx.current_instruction = 0x881AB924;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.current_instruction = 0x881AB928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_881AB934:
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x881ab944
	if (ctx.cr6.eq) goto loc_881AB944;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881ab96c
	goto loc_881AB96C;
loc_881AB944:
	// lwz r11,188(r31)
	ctx.current_instruction = 0x881AB944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.current_instruction = 0x881AB948;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_881AB96C:
	// lwz r16,15940(r31)
	ctx.current_instruction = 0x881AB96C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 15940);
	// add r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,108(r31)
	ctx.current_instruction = 0x881AB978;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.current_instruction = 0x881AB980;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881AB988;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x881AB998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB998:
	// lwz r11,15696(r31)
	ctx.current_instruction = 0x881AB998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15696);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x881ab8dc
	if (ctx.cr6.lt) goto loc_881AB8DC;
loc_881AB9B4:
	// lwz r11,108(r31)
	ctx.current_instruction = 0x881AB9B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r9,100(r31)
	ctx.current_instruction = 0x881AB9BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,15708(r31)
	ctx.current_instruction = 0x881AB9C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15708);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r9,r22
	ctx.r22.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r21,r10,r21
	ctx.r21.u64 = ctx.r10.u64 + ctx.r21.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x881ab8b8
	if (ctx.cr6.lt) goto loc_881AB8B8;
loc_881AB9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AD268) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881AD268);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AD268;
	ctx.current_instruction = 0x881AD268;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,13(r11)
	ctx.current_instruction = 0x881AD26C;
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ADB80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ADB80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ADB80) {
			switch (rex_dispatch_address) {
				case 0x881ADB88:
				case 0x881ADBFC:
				case 0x881ADC44:
				case 0x881ADCF4:
				case 0x881ADD3C:
				case 0x881ADDC0:
				case 0x881ADE08:
				case 0x881ADE74:
				case 0x881ADEBC:
				case 0x881ADEFC:
				case 0x881ADF28:
				case 0x881ADF48:
				case 0x881ADF58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ADB80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ADB88: goto loc_881ADB88;
		case 0x881ADBFC: goto loc_881ADBFC;
		case 0x881ADC44: goto loc_881ADC44;
		case 0x881ADCF4: goto loc_881ADCF4;
		case 0x881ADD3C: goto loc_881ADD3C;
		case 0x881ADDC0: goto loc_881ADDC0;
		case 0x881ADE08: goto loc_881ADE08;
		case 0x881ADE74: goto loc_881ADE74;
		case 0x881ADEBC: goto loc_881ADEBC;
		case 0x881ADEFC: goto loc_881ADEFC;
		case 0x881ADF28: goto loc_881ADF28;
		case 0x881ADF48: goto loc_881ADF48;
		case 0x881ADF58: goto loc_881ADF58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881ADB88;
	__savegprlr_26(ctx, base);
loc_881ADB88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881ADB88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881ADB8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,9
	ctx.r30.s64 = 9;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADBA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x881adc0c
	if (!ctx.cr6.lt) goto loc_881ADC0C;
loc_881ADBB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881adc0c
	if (ctx.cr6.eq) goto loc_881ADC0C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881ADBC0;
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
	ctx.current_instruction = 0x881ADBE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881ADBEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881adbfc
	if (!ctx.cr0.lt) goto loc_881ADBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADBFC;
	sub_88156678(ctx, base);
loc_881ADBFC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADBFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881adbb4
	if (ctx.cr6.gt) goto loc_881ADBB4;
loc_881ADC0C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881ADC10;
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
	ctx.current_instruction = 0x881ADC28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881ADC34;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881adc44
	if (!ctx.cr0.lt) goto loc_881ADC44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADC44;
	sub_88156678(ctx, base);
loc_881ADC44:
	// lwz r11,20680(r27)
	ctx.current_instruction = 0x881ADC44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881adc84
	if (ctx.cr6.eq) goto loc_881ADC84;
	// lwz r11,20684(r27)
	ctx.current_instruction = 0x881ADC50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881adc84
	if (ctx.cr6.eq) goto loc_881ADC84;
	// lwz r11,21704(r27)
	ctx.current_instruction = 0x881ADC5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881adc84
	if (!ctx.cr6.eq) goto loc_881ADC84;
	// lwz r11,140(r27)
	ctx.current_instruction = 0x881ADC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x881adc8c
	if (ctx.cr6.eq) goto loc_881ADC8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADC84:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x881adf64
	if (!ctx.cr6.eq) goto loc_881ADF64;
loc_881ADC8C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881ADC8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADC9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881add04
	if (!ctx.cr6.lt) goto loc_881ADD04;
loc_881ADCAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881add04
	if (ctx.cr6.eq) goto loc_881ADD04;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881ADCB8;
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
	ctx.current_instruction = 0x881ADCDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881ADCE4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881adcf4
	if (!ctx.cr0.lt) goto loc_881ADCF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADCF4;
	sub_88156678(ctx, base);
loc_881ADCF4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADCF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881adcac
	if (ctx.cr6.gt) goto loc_881ADCAC;
loc_881ADD04:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881ADD08;
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
	ctx.current_instruction = 0x881ADD20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881ADD2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881add3c
	if (!ctx.cr0.lt) goto loc_881ADD3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADD3C;
	sub_88156678(ctx, base);
loc_881ADD3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881add50
	if (!ctx.cr6.eq) goto loc_881ADD50;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADD50:
	// lwz r11,21864(r27)
	ctx.current_instruction = 0x881ADD50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881aded0
	if (ctx.cr6.eq) goto loc_881ADED0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881ADD5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADD68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881addd0
	if (!ctx.cr6.lt) goto loc_881ADDD0;
loc_881ADD78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881addd0
	if (ctx.cr6.eq) goto loc_881ADDD0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881ADD84;
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
	ctx.current_instruction = 0x881ADDA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881ADDB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881addc0
	if (!ctx.cr0.lt) goto loc_881ADDC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADDC0;
	sub_88156678(ctx, base);
loc_881ADDC0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADDC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881add78
	if (ctx.cr6.gt) goto loc_881ADD78;
loc_881ADDD0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881ADDD4;
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
	ctx.current_instruction = 0x881ADDEC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881ADDF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ade08
	if (!ctx.cr0.lt) goto loc_881ADE08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADE08;
	sub_88156678(ctx, base);
loc_881ADE08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881aded0
	if (ctx.cr6.eq) goto loc_881ADED0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881ADE10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADE1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881ade84
	if (!ctx.cr6.lt) goto loc_881ADE84;
loc_881ADE2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ade84
	if (ctx.cr6.eq) goto loc_881ADE84;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881ADE38;
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
	ctx.current_instruction = 0x881ADE5C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881ADE64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ade74
	if (!ctx.cr0.lt) goto loc_881ADE74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADE74;
	sub_88156678(ctx, base);
loc_881ADE74:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADE74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ade2c
	if (ctx.cr6.gt) goto loc_881ADE2C;
loc_881ADE84:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881ADE88;
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
	ctx.current_instruction = 0x881ADEA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881ADEAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881adebc
	if (!ctx.cr0.lt) goto loc_881ADEBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881ADEBC;
	sub_88156678(ctx, base);
loc_881ADEBC:
	// addi r11,r30,0
	ctx.r11.s64 = ctx.r30.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x881aded4
	goto loc_881ADED4;
loc_881ADED0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_881ADED4:
	// lwz r10,22140(r27)
	ctx.current_instruction = 0x881ADED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881adf64
	if (!ctx.cr6.eq) goto loc_881ADF64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x881adf14
	if (!ctx.cr6.eq) goto loc_881ADF14;
	// stw r26,20680(r27)
	ctx.current_instruction = 0x881ADEF0;
	REX_STORE_U32(ctx.r27.u32 + 20680, ctx.r26.u32);
	// stw r26,20688(r27)
	ctx.current_instruction = 0x881ADEF4;
	REX_STORE_U32(ctx.r27.u32 + 20688, ctx.r26.u32);
	// bl 0x88168ab8
	ctx.lr = 0x881ADEFC;
	sub_88168AB8(ctx, base);
loc_881ADEFC:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881ADEFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x881adf58
	if (!ctx.cr6.eq) goto loc_881ADF58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADF14:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r28,20680(r27)
	ctx.current_instruction = 0x881ADF18;
	REX_STORE_U32(ctx.r27.u32 + 20680, ctx.r28.u32);
	// bne cr6,0x881adf40
	if (!ctx.cr6.eq) goto loc_881ADF40;
	// stw r26,20688(r27)
	ctx.current_instruction = 0x881ADF20;
	REX_STORE_U32(ctx.r27.u32 + 20688, ctx.r26.u32);
	// bl 0x8818d488
	ctx.lr = 0x881ADF28;
	sub_8818D488(ctx, base);
loc_881ADF28:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881ADF28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x881adf58
	if (!ctx.cr6.eq) goto loc_881ADF58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADF40:
	// stw r28,20684(r27)
	ctx.current_instruction = 0x881ADF40;
	REX_STORE_U32(ctx.r27.u32 + 20684, ctx.r28.u32);
	// bl 0x88190148
	ctx.lr = 0x881ADF48;
	sub_88190148(ctx, base);
loc_881ADF48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881adf68
	if (!ctx.cr6.eq) goto loc_881ADF68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c6808
	ctx.lr = 0x881ADF58;
	sub_881C6808(ctx, base);
loc_881ADF58:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881ADF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x881adf68
	if (!ctx.cr6.eq) goto loc_881ADF68;
loc_881ADF64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881ADF68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B43C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B43C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B43C8;
	ctx.current_instruction = 0x881B43C8;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881B43C8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x881B43CC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x881B43D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881B43E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// or r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b44c8
	if (ctx.cr6.eq) goto loc_881B44C8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881b4414
	if (!ctx.cr6.eq) goto loc_881B4414;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r7)
	ctx.current_instruction = 0x881B440C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x881b44d8
	goto loc_881B44D8;
loc_881B4414:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881b4424
	if (!ctx.cr6.eq) goto loc_881B4424;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B4424:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbzx r11,r31,r4
	ctx.current_instruction = 0x881B4428;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lbz r10,-1(r10)
	ctx.current_instruction = 0x881B4434;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881b44cc
	if (ctx.cr6.eq) goto loc_881B44CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x881b445c
	if (!ctx.cr6.eq) goto loc_881B445C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b4470
	if (!ctx.cr6.eq) goto loc_881B4470;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B445C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881b4480
	if (!ctx.cr6.eq) goto loc_881B4480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881b44c8
	if (!ctx.cr6.eq) goto loc_881B44C8;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B4470:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881b44c8
	if (!ctx.cr6.eq) goto loc_881B44C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B4480:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881b44c8
	if (!ctx.cr6.eq) goto loc_881B44C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881b44c8
	if (!ctx.cr6.eq) goto loc_881B44C8;
	// lbz r11,-1(r9)
	ctx.current_instruction = 0x881B4490;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881b44a8
	if (!ctx.cr6.eq) goto loc_881B44A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B44A8:
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// ble cr6,0x881b44b8
	if (!ctx.cr6.gt) goto loc_881B44B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B44B8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881b44cc
	if (!ctx.cr6.eq) goto loc_881B44CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x881b44cc
	goto loc_881B44CC;
loc_881B44C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881B44CC:
	// stw r11,0(r7)
	ctx.current_instruction = 0x881B44CC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881b4504
	if (!ctx.cr6.eq) goto loc_881B4504;
loc_881B44D8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881b44f0
	if (!ctx.cr6.eq) goto loc_881B44F0;
	// li r11,16
	ctx.r11.s64 = 16;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x881b452c
	goto loc_881B452C;
loc_881B44F0:
	// lbz r11,0(r31)
	ctx.current_instruction = 0x881B44F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x881b452c
	goto loc_881B452C;
loc_881B4504:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x881B450C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x881b4520
	if (!ctx.cr6.eq) goto loc_881B4520;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// b 0x881b4528
	goto loc_881B4528;
loc_881B4520:
	// lbzx r11,r31,r4
	ctx.current_instruction = 0x881B4520;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_881B4528:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_881B452C:
	// and r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b4540
	if (!ctx.cr6.eq) goto loc_881B4540;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// b 0x881b454c
	goto loc_881B454C;
loc_881B4540:
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x881B4544;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_881B454C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881b4580
	if (!ctx.cr6.lt) goto loc_881B4580;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b458c
	if (ctx.cr6.lt) goto loc_881B458C;
loc_881B456C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,0(r8)
	ctx.current_instruction = 0x881B4570;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881B4574;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881B4578;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B4580:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881b456c
	if (ctx.cr6.lt) goto loc_881B456C;
loc_881B458C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r8)
	ctx.current_instruction = 0x881B4590;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881B4594;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881B4598;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881BBCA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881BBCA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881BBCA8) {
			switch (rex_dispatch_address) {
				case 0x881BBCB0:
				case 0x881BBD38:
				case 0x881BBD48:
				case 0x881BBDDC:
				case 0x881BBE68:
				case 0x881BBE80:
				case 0x881BBEEC:
				case 0x881BBF18:
				case 0x881BBFA0:
				case 0x881BC02C:
				case 0x881BC044:
				case 0x881BC0C8:
				case 0x881BC0F4:
				case 0x881BC17C:
				case 0x881BC208:
				case 0x881BC220:
				case 0x881BC2A8:
				case 0x881BC2D4:
				case 0x881BC2F8:
				case 0x881BC380:
				case 0x881BC3C8:
				case 0x881BC3F4:
				case 0x881BC488:
				case 0x881BC4D0:
				case 0x881BC54C:
				case 0x881BC594:
				case 0x881BC5FC:
				case 0x881BC644:
				case 0x881BC6AC:
				case 0x881BC6F4:
				case 0x881BC818:
				case 0x881BC8A4:
				case 0x881BC8BC:
				case 0x881BC920:
				case 0x881BC958:
				case 0x881BC9E0:
				case 0x881BCA6C:
				case 0x881BCA84:
				case 0x881BCB08:
				case 0x881BCB38:
				case 0x881BCBC0:
				case 0x881BCC4C:
				case 0x881BCC64:
				case 0x881BCCEC:
				case 0x881BCD1C:
				case 0x881BCD40:
				case 0x881BCDC8:
				case 0x881BCE10:
				case 0x881BCE3C:
				case 0x881BCED0:
				case 0x881BCF18:
				case 0x881BCF94:
				case 0x881BCFDC:
				case 0x881BD044:
				case 0x881BD08C:
				case 0x881BD0F4:
				case 0x881BD13C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881BBCA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881BBCB0: goto loc_881BBCB0;
		case 0x881BBD38: goto loc_881BBD38;
		case 0x881BBD48: goto loc_881BBD48;
		case 0x881BBDDC: goto loc_881BBDDC;
		case 0x881BBE68: goto loc_881BBE68;
		case 0x881BBE80: goto loc_881BBE80;
		case 0x881BBEEC: goto loc_881BBEEC;
		case 0x881BBF18: goto loc_881BBF18;
		case 0x881BBFA0: goto loc_881BBFA0;
		case 0x881BC02C: goto loc_881BC02C;
		case 0x881BC044: goto loc_881BC044;
		case 0x881BC0C8: goto loc_881BC0C8;
		case 0x881BC0F4: goto loc_881BC0F4;
		case 0x881BC17C: goto loc_881BC17C;
		case 0x881BC208: goto loc_881BC208;
		case 0x881BC220: goto loc_881BC220;
		case 0x881BC2A8: goto loc_881BC2A8;
		case 0x881BC2D4: goto loc_881BC2D4;
		case 0x881BC2F8: goto loc_881BC2F8;
		case 0x881BC380: goto loc_881BC380;
		case 0x881BC3C8: goto loc_881BC3C8;
		case 0x881BC3F4: goto loc_881BC3F4;
		case 0x881BC488: goto loc_881BC488;
		case 0x881BC4D0: goto loc_881BC4D0;
		case 0x881BC54C: goto loc_881BC54C;
		case 0x881BC594: goto loc_881BC594;
		case 0x881BC5FC: goto loc_881BC5FC;
		case 0x881BC644: goto loc_881BC644;
		case 0x881BC6AC: goto loc_881BC6AC;
		case 0x881BC6F4: goto loc_881BC6F4;
		case 0x881BC818: goto loc_881BC818;
		case 0x881BC8A4: goto loc_881BC8A4;
		case 0x881BC8BC: goto loc_881BC8BC;
		case 0x881BC920: goto loc_881BC920;
		case 0x881BC958: goto loc_881BC958;
		case 0x881BC9E0: goto loc_881BC9E0;
		case 0x881BCA6C: goto loc_881BCA6C;
		case 0x881BCA84: goto loc_881BCA84;
		case 0x881BCB08: goto loc_881BCB08;
		case 0x881BCB38: goto loc_881BCB38;
		case 0x881BCBC0: goto loc_881BCBC0;
		case 0x881BCC4C: goto loc_881BCC4C;
		case 0x881BCC64: goto loc_881BCC64;
		case 0x881BCCEC: goto loc_881BCCEC;
		case 0x881BCD1C: goto loc_881BCD1C;
		case 0x881BCD40: goto loc_881BCD40;
		case 0x881BCDC8: goto loc_881BCDC8;
		case 0x881BCE10: goto loc_881BCE10;
		case 0x881BCE3C: goto loc_881BCE3C;
		case 0x881BCED0: goto loc_881BCED0;
		case 0x881BCF18: goto loc_881BCF18;
		case 0x881BCF94: goto loc_881BCF94;
		case 0x881BCFDC: goto loc_881BCFDC;
		case 0x881BD044: goto loc_881BD044;
		case 0x881BD08C: goto loc_881BD08C;
		case 0x881BD0F4: goto loc_881BD0F4;
		case 0x881BD13C: goto loc_881BD13C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BBCB0;
	__savegprlr_14(ctx, base);
loc_881BBCB0:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x881BBCB0;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x881BBCB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r9,4(r7)
	ctx.current_instruction = 0x881BBCBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r14,0(r7)
	ctx.current_instruction = 0x881BBCC4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r18,1764(r3)
	ctx.current_instruction = 0x881BBCCC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r8,40(r10)
	ctx.current_instruction = 0x881BBCD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r10)
	ctx.current_instruction = 0x881BBCE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r6,16(r10)
	ctx.current_instruction = 0x881BBCE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lwz r30,20(r10)
	ctx.current_instruction = 0x881BBCF0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// lwz r29,24(r10)
	ctx.current_instruction = 0x881BBCF8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x881BBD00;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x881BBD04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	ctx.current_instruction = 0x881BBD08;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,28(r10)
	ctx.current_instruction = 0x881BBD0C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r17,r11,1
	ctx.r17.s64 = ctx.r11.s64 + 1;
	// lwz r21,32(r10)
	ctx.current_instruction = 0x881BBD14;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x881BBD18;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,80(r1)
	ctx.current_instruction = 0x881BBD1C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	ctx.current_instruction = 0x881BBD20;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x881BBD24;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r30,96(r1)
	ctx.current_instruction = 0x881BBD28;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x881BBD2C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,104(r1)
	ctx.current_instruction = 0x881BBD30;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x88052d90
	ctx.lr = 0x881BBD38;
	sub_88052D90(ctx, base);
loc_881BBD38:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88052d90
	ctx.lr = 0x881BBD48;
	sub_88052D90(ctx, base);
loc_881BBD48:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r16,3
	ctx.r16.s64 = 3;
	// ori r25,r11,32768
	ctx.r25.u64 = ctx.r11.u64 | 32768;
	// bne cr6,0x881bc798
	if (!ctx.cr6.eq) goto loc_881BC798;
loc_881BBD5C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BBD5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bbd74
	if (!ctx.cr6.eq) goto loc_881BBD74;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BBD6C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bbe98
	goto loc_881BBE98;
loc_881BBD74:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BBD74;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BBD78;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BBD80;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BBD90;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bbe60
	if (ctx.cr6.lt) goto loc_881BBE60;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BBDA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BBDB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BBDB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bbe58
	if (!ctx.cr6.lt) goto loc_881BBE58;
loc_881BBDC0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BBDC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BBDC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bbdec
	if (ctx.cr6.lt) goto loc_881BBDEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BBDDC;
	sub_88156440(ctx, base);
loc_881BBDDC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bbdc0
	if (ctx.cr6.eq) goto loc_881BBDC0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bbe98
	goto loc_881BBE98;
loc_881BBDEC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BBDEC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BBDF4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BBDFC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BBE00;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BBE08;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BBE0C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BBE14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BBE18;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BBE20;
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
	ctx.current_instruction = 0x881BBE3C;
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
	ctx.current_instruction = 0x881BBE54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BBE58:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bbe98
	goto loc_881BBE98;
loc_881BBE60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BBE68;
	sub_88156500(ctx, base);
loc_881BBE68:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BBE68;
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
	ctx.lr = 0x881BBE80;
	sub_88156500(ctx, base);
loc_881BBE80:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BBE88;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bbe68
	if (ctx.cr6.lt) goto loc_881BBE68;
loc_881BBE98:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bbef0
	if (ctx.cr6.eq) goto loc_881BBEF0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BBEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x881bbeb8
	if (ctx.cr6.lt) goto loc_881BBEB8;
	// li r23,1
	ctx.r23.s64 = 1;
loc_881BBEB8:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BBEB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lbzx r11,r30,r20
	ctx.current_instruction = 0x881BBEBC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// lbzx r28,r30,r21
	ctx.current_instruction = 0x881BBEC0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BBEC8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BBECC;
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
	ctx.current_instruction = 0x881BBEDC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BBEE0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc708
	if (!ctx.cr0.lt) goto loc_881BC708;
	// bl 0x88156678
	ctx.lr = 0x881BBEEC;
	sub_88156678(ctx, base);
loc_881BBEEC:
	// b 0x881bc708
	goto loc_881BC708;
loc_881BBEF0:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BBEF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BBEF4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BBEF8;
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
	ctx.current_instruction = 0x881BBF08;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BBF0C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bbf18
	if (!ctx.cr0.lt) goto loc_881BBF18;
	// bl 0x88156678
	ctx.lr = 0x881BBF18;
	sub_88156678(ctx, base);
loc_881BBF18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bc0cc
	if (ctx.cr6.eq) goto loc_881BC0CC;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BBF20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bbf38
	if (!ctx.cr6.eq) goto loc_881BBF38;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BBF30;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bc05c
	goto loc_881BC05C;
loc_881BBF38:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BBF38;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BBF3C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BBF44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BBF54;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc024
	if (ctx.cr6.lt) goto loc_881BC024;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BBF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BBF74;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BBF7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bc01c
	if (!ctx.cr6.lt) goto loc_881BC01C;
loc_881BBF84:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BBF84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BBF88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bbfb0
	if (ctx.cr6.lt) goto loc_881BBFB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BBFA0;
	sub_88156440(ctx, base);
loc_881BBFA0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bbf84
	if (ctx.cr6.eq) goto loc_881BBF84;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc05c
	goto loc_881BC05C;
loc_881BBFB0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BBFB0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BBFB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BBFC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BBFC4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BBFCC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BBFD0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BBFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BBFDC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BBFE4;
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
	ctx.current_instruction = 0x881BC000;
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
	ctx.current_instruction = 0x881BC018;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BC01C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc05c
	goto loc_881BC05C;
loc_881BC024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BC02C;
	sub_88156500(ctx, base);
loc_881BC02C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC02C;
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
	ctx.lr = 0x881BC044;
	sub_88156500(ctx, base);
loc_881BC044:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BC04C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc02c
	if (ctx.cr6.lt) goto loc_881BC02C;
loc_881BC05C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bd1b8
	if (ctx.cr6.eq) goto loc_881BD1B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BC064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lbzx r11,r30,r20
	ctx.current_instruction = 0x881BC070;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	ctx.current_instruction = 0x881BC078;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x881bc090
	if (ctx.cr6.lt) goto loc_881BC090;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881BC084;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x881bc094
	goto loc_881BC094;
loc_881BC090:
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881BC090;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881BC094:
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x881BC094;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC098;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC0A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC0A8;
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
	ctx.current_instruction = 0x881BC0B8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC0BC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc708
	if (!ctx.cr0.lt) goto loc_881BC708;
	// bl 0x88156678
	ctx.lr = 0x881BC0C8;
	sub_88156678(ctx, base);
loc_881BC0C8:
	// b 0x881bc708
	goto loc_881BC708;
loc_881BC0CC:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC0CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC0D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC0D4;
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
	ctx.current_instruction = 0x881BC0E4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC0E8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc0f4
	if (!ctx.cr0.lt) goto loc_881BC0F4;
	// bl 0x88156678
	ctx.lr = 0x881BC0F4;
	sub_88156678(ctx, base);
loc_881BC0F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bc2ac
	if (ctx.cr6.eq) goto loc_881BC2AC;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BC0FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bc114
	if (!ctx.cr6.eq) goto loc_881BC114;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BC10C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bc238
	goto loc_881BC238;
loc_881BC114:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BC114;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC118;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BC120;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BC130;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc200
	if (ctx.cr6.lt) goto loc_881BC200;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BC150;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BC158;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bc1f8
	if (!ctx.cr6.lt) goto loc_881BC1F8;
loc_881BC160:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BC160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BC164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bc18c
	if (ctx.cr6.lt) goto loc_881BC18C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BC17C;
	sub_88156440(ctx, base);
loc_881BC17C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bc160
	if (ctx.cr6.eq) goto loc_881BC160;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc238
	goto loc_881BC238;
loc_881BC18C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BC18C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BC194;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BC19C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BC1A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BC1A8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BC1AC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC1B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BC1B8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BC1C0;
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
	ctx.current_instruction = 0x881BC1DC;
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
	ctx.current_instruction = 0x881BC1F4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BC1F8:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc238
	goto loc_881BC238;
loc_881BC200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BC208;
	sub_88156500(ctx, base);
loc_881BC208:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC208;
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
	ctx.lr = 0x881BC220;
	sub_88156500(ctx, base);
loc_881BC220:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BC228;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc208
	if (ctx.cr6.lt) goto loc_881BC208;
loc_881BC238:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bd1b8
	if (ctx.cr6.eq) goto loc_881BD1B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BC240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lbzx r10,r30,r20
	ctx.current_instruction = 0x881BC24C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.current_instruction = 0x881BC254;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// lwz r10,1936(r26)
	ctx.current_instruction = 0x881BC25C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1936);
	// blt cr6,0x881bc270
	if (ctx.cr6.lt) goto loc_881BC270;
	// lwz r9,92(r1)
	ctx.current_instruction = 0x881BC264;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x881bc274
	goto loc_881BC274;
loc_881BC270:
	// lwz r9,96(r1)
	ctx.current_instruction = 0x881BC270;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_881BC274:
	// lbzx r9,r31,r9
	ctx.current_instruction = 0x881BC274;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC278;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC284;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC288;
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
	ctx.current_instruction = 0x881BC298;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC29C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc708
	if (!ctx.cr0.lt) goto loc_881BC708;
	// bl 0x88156678
	ctx.lr = 0x881BC2A8;
	sub_88156678(ctx, base);
loc_881BC2A8:
	// b 0x881bc708
	goto loc_881BC708;
loc_881BC2AC:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC2AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC2B0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC2B4;
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
	ctx.current_instruction = 0x881BC2C4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC2C8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc2d4
	if (!ctx.cr0.lt) goto loc_881BC2D4;
	// bl 0x88156678
	ctx.lr = 0x881BC2D4;
	sub_88156678(ctx, base);
loc_881BC2D4:
	// lwz r11,15536(r26)
	ctx.current_instruction = 0x881BC2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 15536);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x881bc598
	if (ctx.cr6.lt) goto loc_881BC598;
	// lwz r11,1948(r26)
	ctx.current_instruction = 0x881BC2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bc2fc
	if (ctx.cr6.eq) goto loc_881BC2FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881b8060
	ctx.lr = 0x881BC2F8;
	sub_881B8060(ctx, base);
loc_881BC2F8:
	// stw r22,1948(r26)
	ctx.current_instruction = 0x881BC2F8;
	REX_STORE_U32(ctx.r26.u32 + 1948, ctx.r22.u32);
loc_881BC2FC:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x881BC2FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r31,1956(r26)
	ctx.current_instruction = 0x881BC304;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BC30C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881bc320
	if (!ctx.cr6.gt) goto loc_881BC320;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bc3cc
	goto loc_881BC3CC;
loc_881BC320:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bc330
	if (!ctx.cr6.eq) goto loc_881BC330;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bc3cc
	goto loc_881BC3CC;
loc_881BC330:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bc390
	if (!ctx.cr6.gt) goto loc_881BC390;
loc_881BC338:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bc390
	if (ctx.cr6.eq) goto loc_881BC390;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BC344;
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
	ctx.current_instruction = 0x881BC368;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BC370;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bc380
	if (!ctx.cr0.lt) goto loc_881BC380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC380;
	sub_88156678(ctx, base);
loc_881BC380:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BC380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bc338
	if (ctx.cr6.gt) goto loc_881BC338;
loc_881BC390:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BC394;
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
	ctx.current_instruction = 0x881BC3AC;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BC3B8;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bc3c8
	if (!ctx.cr0.lt) goto loc_881BC3C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC3C8;
	sub_88156678(ctx, base);
loc_881BC3C8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_881BC3CC:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC3CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC3D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC3D4;
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
	ctx.current_instruction = 0x881BC3E4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC3E8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc3f4
	if (!ctx.cr0.lt) goto loc_881BC3F4;
	// bl 0x88156678
	ctx.lr = 0x881BC3F4;
	sub_88156678(ctx, base);
loc_881BC3F4:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x881BC3F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,1952(r26)
	ctx.current_instruction = 0x881BC3FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 1952);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BC404;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881bc4dc
	if (ctx.cr6.eq) goto loc_881BC4DC;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bc424
	if (!ctx.cr6.gt) goto loc_881BC424;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC424:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bc438
	if (!ctx.cr6.eq) goto loc_881BC438;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC438:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bc498
	if (!ctx.cr6.gt) goto loc_881BC498;
loc_881BC440:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bc498
	if (ctx.cr6.eq) goto loc_881BC498;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BC44C;
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
	ctx.current_instruction = 0x881BC470;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BC478;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bc488
	if (!ctx.cr0.lt) goto loc_881BC488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC488;
	sub_88156678(ctx, base);
loc_881BC488:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BC488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bc440
	if (ctx.cr6.gt) goto loc_881BC440;
loc_881BC498:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BC49C;
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
	ctx.current_instruction = 0x881BC4B4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BC4C0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bc4d0
	if (!ctx.cr0.lt) goto loc_881BC4D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC4D0;
	sub_88156678(ctx, base);
loc_881BC4D0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC4DC:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bc4ec
	if (!ctx.cr6.gt) goto loc_881BC4EC;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC4EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bc4fc
	if (!ctx.cr6.eq) goto loc_881BC4FC;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC4FC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bc55c
	if (!ctx.cr6.gt) goto loc_881BC55C;
loc_881BC504:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bc55c
	if (ctx.cr6.eq) goto loc_881BC55C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BC510;
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
	ctx.current_instruction = 0x881BC534;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BC53C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bc54c
	if (!ctx.cr0.lt) goto loc_881BC54C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC54C;
	sub_88156678(ctx, base);
loc_881BC54C:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BC54C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bc504
	if (ctx.cr6.gt) goto loc_881BC504;
loc_881BC55C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BC560;
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
	ctx.current_instruction = 0x881BC578;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BC584;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bc6f8
	if (!ctx.cr0.lt) goto loc_881BC6F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC594;
	sub_88156678(ctx, base);
loc_881BC594:
	// b 0x881bc6f8
	goto loc_881BC6F8;
loc_881BC598:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BC598;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC5A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881bc60c
	if (!ctx.cr6.lt) goto loc_881BC60C;
loc_881BC5B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bc60c
	if (ctx.cr6.eq) goto loc_881BC60C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BC5C0;
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
	ctx.current_instruction = 0x881BC5E4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BC5EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bc5fc
	if (!ctx.cr0.lt) goto loc_881BC5FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC5FC;
	sub_88156678(ctx, base);
loc_881BC5FC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC5FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bc5b4
	if (ctx.cr6.gt) goto loc_881BC5B4;
loc_881BC60C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BC610;
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
	ctx.current_instruction = 0x881BC628;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BC634;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bc644
	if (!ctx.cr0.lt) goto loc_881BC644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC644;
	sub_88156678(ctx, base);
loc_881BC644:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BC644;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC654;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881bc6bc
	if (!ctx.cr6.lt) goto loc_881BC6BC;
loc_881BC664:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bc6bc
	if (ctx.cr6.eq) goto loc_881BC6BC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BC670;
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
	ctx.current_instruction = 0x881BC694;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BC69C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bc6ac
	if (!ctx.cr0.lt) goto loc_881BC6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC6AC;
	sub_88156678(ctx, base);
loc_881BC6AC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bc664
	if (ctx.cr6.gt) goto loc_881BC664;
loc_881BC6BC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BC6C0;
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
	ctx.current_instruction = 0x881BC6D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BC6E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bc6f4
	if (!ctx.cr0.lt) goto loc_881BC6F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BC6F4;
	sub_88156678(ctx, base);
loc_881BC6F4:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
loc_881BC6F8:
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x881bc708
	if (!ctx.cr6.lt) goto loc_881BC708;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
loc_881BC708:
	// lwz r10,84(r26)
	ctx.current_instruction = 0x881BC708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = ctx.r28.u64 + ctx.r19.u64;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x881BC710;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881bd1b8
	if (!ctx.cr6.eq) goto loc_881BD1B8;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lwz r10,1832(r26)
	ctx.current_instruction = 0x881BC724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1832);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x881BC728;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881bc74c
	if (ctx.cr6.eq) goto loc_881BC74C;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 | ctx.r27.u64;
loc_881BC74C:
	// lwz r9,100(r1)
	ctx.current_instruction = 0x881BC74C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r31,r14
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r14.s32);
	// lbzx r8,r11,r15
	ctx.current_instruction = 0x881BC754;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// addi r7,r30,-1
	ctx.r7.s64 = ctx.r30.s64 + -1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// sthx r11,r4,r18
	ctx.current_instruction = 0x881BC778;
	REX_STORE_U16(ctx.r4.u32 + ctx.r18.u32, ctx.r11.u16);
	// bne cr6,0x881bc788
	if (!ctx.cr6.eq) goto loc_881BC788;
	// lwz r28,104(r1)
	ctx.current_instruction = 0x881BC780;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x881bbd5c
	goto loc_881BBD5C;
loc_881BC788:
	// stw r27,1944(r26)
	ctx.current_instruction = 0x881BC788;
	REX_STORE_U32(ctx.r26.u32 + 1944, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BC798:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BC798;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bc7b0
	if (!ctx.cr6.eq) goto loc_881BC7B0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BC7A8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bc8d4
	goto loc_881BC8D4;
loc_881BC7B0:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BC7B0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC7B4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BC7BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BC7CC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc89c
	if (ctx.cr6.lt) goto loc_881BC89C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC7DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BC7EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BC7F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bc894
	if (!ctx.cr6.lt) goto loc_881BC894;
loc_881BC7FC:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BC7FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BC800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bc828
	if (ctx.cr6.lt) goto loc_881BC828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BC818;
	sub_88156440(ctx, base);
loc_881BC818:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bc7fc
	if (ctx.cr6.eq) goto loc_881BC7FC;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc8d4
	goto loc_881BC8D4;
loc_881BC828:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881BC828;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881BC830;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BC838;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BC83C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BC844;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BC848;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BC854;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BC85C;
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
	ctx.current_instruction = 0x881BC878;
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
	ctx.current_instruction = 0x881BC890;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BC894:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bc8d4
	goto loc_881BC8D4;
loc_881BC89C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BC8A4;
	sub_88156500(ctx, base);
loc_881BC8A4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC8A4;
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
	ctx.lr = 0x881BC8BC;
	sub_88156500(ctx, base);
loc_881BC8BC:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BC8C4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bc8a4
	if (ctx.cr6.lt) goto loc_881BC8A4;
loc_881BC8D4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bc930
	if (ctx.cr6.eq) goto loc_881BC930;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BC8DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x881bc8f4
	if (ctx.cr6.lt) goto loc_881BC8F4;
	// li r23,1
	ctx.r23.s64 = 1;
loc_881BC8F4:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC8F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lbzx r28,r30,r21
	ctx.current_instruction = 0x881BC8F8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC8FC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC900;
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
	ctx.current_instruction = 0x881BC910;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC914;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc920
	if (!ctx.cr0.lt) goto loc_881BC920;
	// bl 0x88156678
	ctx.lr = 0x881BC920;
	sub_88156678(ctx, base);
loc_881BC920:
	// lbzx r11,r30,r20
	ctx.current_instruction = 0x881BC920;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x881bd150
	goto loc_881BD150;
loc_881BC930:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BC930;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BC934;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BC938;
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
	ctx.current_instruction = 0x881BC948;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BC94C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bc958
	if (!ctx.cr0.lt) goto loc_881BC958;
	// bl 0x88156678
	ctx.lr = 0x881BC958;
	sub_88156678(ctx, base);
loc_881BC958:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bcb10
	if (ctx.cr6.eq) goto loc_881BCB10;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BC960;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bc978
	if (!ctx.cr6.eq) goto loc_881BC978;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BC970;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bca9c
	goto loc_881BCA9C;
loc_881BC978:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BC978;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BC97C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BC984;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BC994;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bca64
	if (ctx.cr6.lt) goto loc_881BCA64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BC9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BC9B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BC9BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bca5c
	if (!ctx.cr6.lt) goto loc_881BCA5C;
loc_881BC9C4:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BC9C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BC9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bc9f0
	if (ctx.cr6.lt) goto loc_881BC9F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BC9E0;
	sub_88156440(ctx, base);
loc_881BC9E0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bc9c4
	if (ctx.cr6.eq) goto loc_881BC9C4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bca9c
	goto loc_881BCA9C;
loc_881BC9F0:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881BC9F0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881BC9F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881BCA00;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881BCA04;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881BCA0C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881BCA10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BCA18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BCA1C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BCA24;
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
	ctx.current_instruction = 0x881BCA40;
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
	ctx.current_instruction = 0x881BCA58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881BCA5C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bca9c
	goto loc_881BCA9C;
loc_881BCA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BCA6C;
	sub_88156500(ctx, base);
loc_881BCA6C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BCA6C;
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
	ctx.lr = 0x881BCA84;
	sub_88156500(ctx, base);
loc_881BCA84:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BCA8C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bca6c
	if (ctx.cr6.lt) goto loc_881BCA6C;
loc_881BCA9C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bd1b8
	if (ctx.cr6.eq) goto loc_881BD1B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BCAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lbzx r11,r30,r20
	ctx.current_instruction = 0x881BCAB0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	ctx.current_instruction = 0x881BCAB8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x881bcad0
	if (ctx.cr6.lt) goto loc_881BCAD0;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881BCAC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x881bcad4
	goto loc_881BCAD4;
loc_881BCAD0:
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881BCAD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881BCAD4:
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x881BCAD4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BCAD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BCAE4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BCAE8;
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
	ctx.current_instruction = 0x881BCAF8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BCAFC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bccec
	if (!ctx.cr0.lt) goto loc_881BCCEC;
	// bl 0x88156678
	ctx.lr = 0x881BCB08;
	sub_88156678(ctx, base);
loc_881BCB08:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x881bd150
	goto loc_881BD150;
loc_881BCB10:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BCB10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BCB14;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BCB18;
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
	ctx.current_instruction = 0x881BCB28;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BCB2C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bcb38
	if (!ctx.cr0.lt) goto loc_881BCB38;
	// bl 0x88156678
	ctx.lr = 0x881BCB38;
	sub_88156678(ctx, base);
loc_881BCB38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bccf4
	if (ctx.cr6.eq) goto loc_881BCCF4;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BCB40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x881bcb58
	if (!ctx.cr6.eq) goto loc_881BCB58;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r16,20(r31)
	ctx.current_instruction = 0x881BCB50;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// b 0x881bcc7c
	goto loc_881BCC7C;
loc_881BCB58:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x881BCB58;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BCB5C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x881BCB64;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BCB74;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bcc44
	if (ctx.cr6.lt) goto loc_881BCC44;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BCB84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BCB94;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BCB9C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bcc3c
	if (!ctx.cr6.lt) goto loc_881BCC3C;
loc_881BCBA4:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BCBA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BCBA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bcbd0
	if (ctx.cr6.lt) goto loc_881BCBD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BCBC0;
	sub_88156440(ctx, base);
loc_881BCBC0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bcba4
	if (ctx.cr6.eq) goto loc_881BCBA4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bcc7c
	goto loc_881BCC7C;
loc_881BCBD0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BCBD0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BCBD8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881BCBE0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881BCBE4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881BCBEC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881BCBF0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BCBF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BCBFC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BCC04;
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
	ctx.current_instruction = 0x881BCC20;
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
	ctx.current_instruction = 0x881BCC38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881BCC3C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bcc7c
	goto loc_881BCC7C;
loc_881BCC44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BCC4C;
	sub_88156500(ctx, base);
loc_881BCC4C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BCC4C;
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
	ctx.lr = 0x881BCC64;
	sub_88156500(ctx, base);
loc_881BCC64:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BCC6C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bcc4c
	if (ctx.cr6.lt) goto loc_881BCC4C;
loc_881BCC7C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881bd1b8
	if (ctx.cr6.eq) goto loc_881BD1B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881BCC84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lbzx r10,r30,r20
	ctx.current_instruction = 0x881BCC90;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.current_instruction = 0x881BCC98;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// lwz r9,1936(r26)
	ctx.current_instruction = 0x881BCC9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1936);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// blt cr6,0x881bccb4
	if (ctx.cr6.lt) goto loc_881BCCB4;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881BCCA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x881bccb8
	goto loc_881BCCB8;
loc_881BCCB4:
	// lwz r10,96(r1)
	ctx.current_instruction = 0x881BCCB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_881BCCB8:
	// lbzx r10,r31,r10
	ctx.current_instruction = 0x881BCCB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BCCBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BCCC8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BCCCC;
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
	ctx.current_instruction = 0x881BCCDC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BCCE0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bccec
	if (!ctx.cr0.lt) goto loc_881BCCEC;
	// bl 0x88156678
	ctx.lr = 0x881BCCEC;
	sub_88156678(ctx, base);
loc_881BCCEC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x881bd150
	goto loc_881BD150;
loc_881BCCF4:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BCCF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BCCF8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BCCFC;
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
	ctx.current_instruction = 0x881BCD0C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BCD10;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bcd1c
	if (!ctx.cr0.lt) goto loc_881BCD1C;
	// bl 0x88156678
	ctx.lr = 0x881BCD1C;
	sub_88156678(ctx, base);
loc_881BCD1C:
	// lwz r11,15536(r26)
	ctx.current_instruction = 0x881BCD1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 15536);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x881bcfe0
	if (ctx.cr6.lt) goto loc_881BCFE0;
	// lwz r11,1948(r26)
	ctx.current_instruction = 0x881BCD2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bcd44
	if (ctx.cr6.eq) goto loc_881BCD44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881b8060
	ctx.lr = 0x881BCD40;
	sub_881B8060(ctx, base);
loc_881BCD40:
	// stw r22,1948(r26)
	ctx.current_instruction = 0x881BCD40;
	REX_STORE_U32(ctx.r26.u32 + 1948, ctx.r22.u32);
loc_881BCD44:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x881BCD44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r31,1956(r26)
	ctx.current_instruction = 0x881BCD4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BCD54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881bcd68
	if (!ctx.cr6.gt) goto loc_881BCD68;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bce14
	goto loc_881BCE14;
loc_881BCD68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bcd78
	if (!ctx.cr6.eq) goto loc_881BCD78;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bce14
	goto loc_881BCE14;
loc_881BCD78:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bcdd8
	if (!ctx.cr6.gt) goto loc_881BCDD8;
loc_881BCD80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bcdd8
	if (ctx.cr6.eq) goto loc_881BCDD8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BCD8C;
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
	ctx.current_instruction = 0x881BCDB0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BCDB8;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bcdc8
	if (!ctx.cr0.lt) goto loc_881BCDC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCDC8;
	sub_88156678(ctx, base);
loc_881BCDC8:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BCDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bcd80
	if (ctx.cr6.gt) goto loc_881BCD80;
loc_881BCDD8:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BCDDC;
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
	ctx.current_instruction = 0x881BCDF4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BCE00;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bce10
	if (!ctx.cr0.lt) goto loc_881BCE10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCE10;
	sub_88156678(ctx, base);
loc_881BCE10:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_881BCE14:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881BCE14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BCE18;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BCE1C;
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
	ctx.current_instruction = 0x881BCE2C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BCE30;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bce3c
	if (!ctx.cr0.lt) goto loc_881BCE3C;
	// bl 0x88156678
	ctx.lr = 0x881BCE3C;
	sub_88156678(ctx, base);
loc_881BCE3C:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x881BCE3C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,1952(r26)
	ctx.current_instruction = 0x881BCE44;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 1952);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BCE4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881bcf24
	if (ctx.cr6.eq) goto loc_881BCF24;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bce6c
	if (!ctx.cr6.gt) goto loc_881BCE6C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCE6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bce80
	if (!ctx.cr6.eq) goto loc_881BCE80;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCE80:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bcee0
	if (!ctx.cr6.gt) goto loc_881BCEE0;
loc_881BCE88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bcee0
	if (ctx.cr6.eq) goto loc_881BCEE0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BCE94;
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
	ctx.current_instruction = 0x881BCEB8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BCEC0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bced0
	if (!ctx.cr0.lt) goto loc_881BCED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCED0;
	sub_88156678(ctx, base);
loc_881BCED0:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BCED0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bce88
	if (ctx.cr6.gt) goto loc_881BCE88;
loc_881BCEE0:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BCEE4;
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
	ctx.current_instruction = 0x881BCEFC;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BCF08;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bcf18
	if (!ctx.cr0.lt) goto loc_881BCF18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCF18;
	sub_88156678(ctx, base);
loc_881BCF18:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCF24:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bcf34
	if (!ctx.cr6.gt) goto loc_881BCF34;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCF34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bcf44
	if (!ctx.cr6.eq) goto loc_881BCF44;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCF44:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bcfa4
	if (!ctx.cr6.gt) goto loc_881BCFA4;
loc_881BCF4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bcfa4
	if (ctx.cr6.eq) goto loc_881BCFA4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BCF58;
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
	ctx.current_instruction = 0x881BCF7C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BCF84;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bcf94
	if (!ctx.cr0.lt) goto loc_881BCF94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCF94;
	sub_88156678(ctx, base);
loc_881BCF94:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BCF94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bcf4c
	if (ctx.cr6.gt) goto loc_881BCF4C;
loc_881BCFA4:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BCFA8;
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
	ctx.current_instruction = 0x881BCFC0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BCFCC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bd140
	if (!ctx.cr0.lt) goto loc_881BD140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BCFDC;
	sub_88156678(ctx, base);
loc_881BCFDC:
	// b 0x881bd140
	goto loc_881BD140;
loc_881BCFE0:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BCFE0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BCFEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881bd054
	if (!ctx.cr6.lt) goto loc_881BD054;
loc_881BCFFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bd054
	if (ctx.cr6.eq) goto loc_881BD054;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BD008;
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
	ctx.current_instruction = 0x881BD02C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BD034;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bd044
	if (!ctx.cr0.lt) goto loc_881BD044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BD044;
	sub_88156678(ctx, base);
loc_881BD044:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BD044;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bcffc
	if (ctx.cr6.gt) goto loc_881BCFFC;
loc_881BD054:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BD058;
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
	ctx.current_instruction = 0x881BD070;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BD07C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bd08c
	if (!ctx.cr0.lt) goto loc_881BD08C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BD08C;
	sub_88156678(ctx, base);
loc_881BD08C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881BD08C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BD09C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881bd104
	if (!ctx.cr6.lt) goto loc_881BD104;
loc_881BD0AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bd104
	if (ctx.cr6.eq) goto loc_881BD104;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BD0B8;
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
	ctx.current_instruction = 0x881BD0DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BD0E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bd0f4
	if (!ctx.cr0.lt) goto loc_881BD0F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BD0F4;
	sub_88156678(ctx, base);
loc_881BD0F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BD0F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bd0ac
	if (ctx.cr6.gt) goto loc_881BD0AC;
loc_881BD104:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BD108;
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
	ctx.current_instruction = 0x881BD120;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BD12C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bd13c
	if (!ctx.cr0.lt) goto loc_881BD13C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BD13C;
	sub_88156678(ctx, base);
loc_881BD13C:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
loc_881BD140:
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x881bd150
	if (!ctx.cr6.lt) goto loc_881BD150;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
loc_881BD150:
	// lwz r10,84(r26)
	ctx.current_instruction = 0x881BD150;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = ctx.r28.u64 + ctx.r19.u64;
	// lwz r8,20(r10)
	ctx.current_instruction = 0x881BD158;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881bd1b8
	if (!ctx.cr6.eq) goto loc_881BD1B8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x881bd1b8
	if (!ctx.cr6.lt) goto loc_881BD1B8;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x881BD16C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r31,r14
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r14.s32);
	// lbzx r7,r11,r15
	ctx.current_instruction = 0x881BD174;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// not r4,r6
	ctx.r4.u64 = ~ctx.r6.u64;
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// xor r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// sthx r9,r3,r18
	ctx.current_instruction = 0x881BD198;
	REX_STORE_U16(ctx.r3.u32 + ctx.r18.u32, ctx.r9.u16);
	// bne cr6,0x881bd1a8
	if (!ctx.cr6.eq) goto loc_881BD1A8;
	// lwz r28,104(r1)
	ctx.current_instruction = 0x881BD1A0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x881bc798
	goto loc_881BC798;
loc_881BD1A8:
	// stw r22,1944(r26)
	ctx.current_instruction = 0x881BD1A8;
	REX_STORE_U32(ctx.r26.u32 + 1944, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BD1B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDF4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDF4;
	ctx.current_instruction = 0x881EEDF4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_91) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE4C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE4C;
	ctx.current_instruction = 0x881EEE4C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_69) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF034);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF034;
	ctx.current_instruction = 0x881EF034;
	uint32_t ea{};
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_126) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1FC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1FC;
	ctx.current_instruction = 0x881EF1FC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF260);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF260;
	ctx.current_instruction = 0x881EF260;
	// stfd f18,-112(r12)
	ctx.current_instruction = 0x881EF260;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	ctx.current_instruction = 0x881EF264;
	REX_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	ctx.current_instruction = 0x881EF268;
	REX_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	ctx.current_instruction = 0x881EF26C;
	REX_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	ctx.current_instruction = 0x881EF270;
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	ctx.current_instruction = 0x881EF274;
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	ctx.current_instruction = 0x881EF278;
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	ctx.current_instruction = 0x881EF27C;
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	ctx.current_instruction = 0x881EF280;
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	ctx.current_instruction = 0x881EF284;
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

DEFINE_REX_FUNC(sub_881EF478) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF478;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF478) {
			switch (rex_dispatch_address) {
				case 0x881EF488:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF478;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF488: goto loc_881EF488;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF47C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EF480;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x881ef2e8
	ctx.lr = 0x881EF488;
	sub_881EF2E8(ctx, base);
loc_881EF488:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lfd f0,-30680(r11)
	ctx.current_instruction = 0x881EF48C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -30680);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EF498;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0828) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0828;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0828) {
			switch (rex_dispatch_address) {
				case 0x881F0830:
				case 0x881F0848:
				case 0x881F089C:
				case 0x881F08C8:
				case 0x881F08E0:
				case 0x881F08F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0828;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0830: goto loc_881F0830;
		case 0x881F0848: goto loc_881F0848;
		case 0x881F089C: goto loc_881F089C;
		case 0x881F08C8: goto loc_881F08C8;
		case 0x881F08E0: goto loc_881F08E0;
		case 0x881F08F8: goto loc_881F08F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F0830;
	__savegprlr_28(ctx, base);
loc_881F0830:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881F0834;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	ctx.current_instruction = 0x881F0840;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x88052218
	ctx.lr = 0x881F0848;
	sub_88052218(ctx, base);
loc_881F0848:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r30,r11,24320
	ctx.r30.s64 = ctx.r11.s64 + 24320;
	// addi r10,r10,24324
	ctx.r10.s64 = ctx.r10.s64 + 24324;
loc_881F085C:
	// stw r28,80(r31)
	ctx.current_instruction = 0x881F085C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881F0860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881f08ec
	if (!ctx.cr6.lt) goto loc_881F08EC;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F086C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.current_instruction = 0x881F0874;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f08e0
	if (ctx.cr6.eq) goto loc_881F08E0;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.current_instruction = 0x881F0884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f08e0
	if (ctx.cr0.eq) goto loc_881F08E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881ef690
	ctx.lr = 0x881F089C;
	sub_881EF690(ctx, base);
loc_881F089C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F08A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.current_instruction = 0x881F08A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881F08A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f08d4
	if (ctx.cr0.eq) goto loc_881F08D4;
	// lwz r11,28(r3)
	ctx.current_instruction = 0x881F08B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f08d4
	if (ctx.cr6.eq) goto loc_881F08D4;
	// bl 0x881f0408
	ctx.lr = 0x881F08C8;
	sub_881F0408(ctx, base);
loc_881F08C8:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881F08C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	ctx.current_instruction = 0x881F08D0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_881F08D4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x881f0954
	ctx.lr = 0x881F08E0;
	sub_881F0954(ctx, base);
loc_881F08E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x881f085c
	goto loc_881F085C;
loc_881F08EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x881f0904
	ctx.lr = 0x881F08F8;
	sub_881F0904(ctx, base);
loc_881F08F8:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881F08F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F5110) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F5110;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F5110) {
			switch (rex_dispatch_address) {
				case 0x881F5118:
				case 0x881F5470:
				case 0x881F54C0:
				case 0x881F55E8:
				case 0x881F579C:
				case 0x881F57D8:
				case 0x881F5930:
				case 0x881F5948:
				case 0x881F59C0:
				case 0x881F59E8:
				case 0x881F5A08:
				case 0x881F5AF8:
				case 0x881F5B74:
				case 0x881F5B98:
				case 0x881F5C38:
				case 0x881F5CB4:
				case 0x881F5CBC:
				case 0x881F5D04:
				case 0x881F5D38:
				case 0x881F5D70:
				case 0x881F5DA0:
				case 0x881F5DD4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F5110;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F5118: goto loc_881F5118;
		case 0x881F5470: goto loc_881F5470;
		case 0x881F54C0: goto loc_881F54C0;
		case 0x881F55E8: goto loc_881F55E8;
		case 0x881F579C: goto loc_881F579C;
		case 0x881F57D8: goto loc_881F57D8;
		case 0x881F5930: goto loc_881F5930;
		case 0x881F5948: goto loc_881F5948;
		case 0x881F59C0: goto loc_881F59C0;
		case 0x881F59E8: goto loc_881F59E8;
		case 0x881F5A08: goto loc_881F5A08;
		case 0x881F5AF8: goto loc_881F5AF8;
		case 0x881F5B74: goto loc_881F5B74;
		case 0x881F5B98: goto loc_881F5B98;
		case 0x881F5C38: goto loc_881F5C38;
		case 0x881F5CB4: goto loc_881F5CB4;
		case 0x881F5CBC: goto loc_881F5CBC;
		case 0x881F5D04: goto loc_881F5D04;
		case 0x881F5D38: goto loc_881F5D38;
		case 0x881F5D70: goto loc_881F5D70;
		case 0x881F5DA0: goto loc_881F5DA0;
		case 0x881F5DD4: goto loc_881F5DD4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F5118;
	__savegprlr_14(ctx, base);
loc_881F5118:
	// stwu r1,-2624(r1)
	ctx.current_instruction = 0x881F5118;
	ea = -2624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1312(r4)
	ctx.current_instruction = 0x881F511C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,3788(r3)
	ctx.current_instruction = 0x881F5124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,2644(r1)
	ctx.current_instruction = 0x881F512C;
	REX_STORE_U32(ctx.r1.u32 + 2644, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x881F5134;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,124(r1)
	ctx.current_instruction = 0x881F513C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x881f5168
	if (ctx.cr6.eq) goto loc_881F5168;
	// lwz r11,3792(r3)
	ctx.current_instruction = 0x881F5144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f5168
	if (ctx.cr6.eq) goto loc_881F5168;
	// lwz r11,3796(r3)
	ctx.current_instruction = 0x881F5150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f5168
	if (ctx.cr6.eq) goto loc_881F5168;
	// lwz r11,3088(r3)
	ctx.current_instruction = 0x881F515C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f5174
	if (!ctx.cr6.eq) goto loc_881F5174;
loc_881F5168:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881F5174:
	// lwz r9,22264(r3)
	ctx.current_instruction = 0x881F5174;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	ctx.current_instruction = 0x881F517C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	ctx.current_instruction = 0x881F5180;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x881F5184;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r10,108(r1)
	ctx.current_instruction = 0x881F5188;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,20(r30)
	ctx.current_instruction = 0x881F518C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r8,22276(r3)
	ctx.current_instruction = 0x881F5190;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r8,24(r30)
	ctx.current_instruction = 0x881F5194;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r7,616(r31)
	ctx.current_instruction = 0x881F5198;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// stw r7,36(r30)
	ctx.current_instruction = 0x881F519C;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r31)
	ctx.current_instruction = 0x881F51A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// stw r6,40(r30)
	ctx.current_instruction = 0x881F51A4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r6.u32);
	// lwz r5,1164(r31)
	ctx.current_instruction = 0x881F51A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1164);
	// stw r5,44(r30)
	ctx.current_instruction = 0x881F51AC;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r5.u32);
	// stw r10,0(r30)
	ctx.current_instruction = 0x881F51B0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r10,4(r30)
	ctx.current_instruction = 0x881F51B4;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// sth r10,16(r30)
	ctx.current_instruction = 0x881F51B8;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r10.u16);
	// sth r10,18(r30)
	ctx.current_instruction = 0x881F51BC;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// lhz r8,50(r31)
	ctx.current_instruction = 0x881F51C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r9,74(r31)
	ctx.current_instruction = 0x881F51C4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r4,52(r31)
	ctx.current_instruction = 0x881F51C8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,100(r1)
	ctx.current_instruction = 0x881F51D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,128(r1)
	ctx.current_instruction = 0x881F51D8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,144(r1)
	ctx.current_instruction = 0x881F51E0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r7,132(r1)
	ctx.current_instruction = 0x881F51E4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// ble cr6,0x881f5eb8
	if (!ctx.cr6.gt) goto loc_881F5EB8;
	// b 0x881f51f8
	goto loc_881F51F8;
loc_881F51F0:
	// lwz r3,2644(r1)
	ctx.current_instruction = 0x881F51F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2644);
	// li r10,0
	ctx.r10.s64 = 0;
loc_881F51F8:
	// sth r10,18(r30)
	ctx.current_instruction = 0x881F51F8;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881F51FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,120(r1)
	ctx.current_instruction = 0x881F5200;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,8(r30)
	ctx.current_instruction = 0x881F5204;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	ctx.current_instruction = 0x881F5208;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,21940(r3)
	ctx.current_instruction = 0x881F520C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881f5238
	if (ctx.cr6.eq) goto loc_881F5238;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x881F5218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,1304(r31)
	ctx.current_instruction = 0x881F521C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x881F5224;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881f5238
	if (ctx.cr6.eq) goto loc_881F5238;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	ctx.current_instruction = 0x881F5234;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_881F5238:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881F5238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,104(r1)
	ctx.current_instruction = 0x881F523C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881f5e58
	if (!ctx.cr6.gt) goto loc_881F5E58;
loc_881F5248:
	// lwz r9,124(r1)
	ctx.current_instruction = 0x881F5248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,104(r1)
	ctx.current_instruction = 0x881F524C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lwz r27,128(r1)
	ctx.current_instruction = 0x881F5254;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stw r8,124(r1)
	ctx.current_instruction = 0x881F5260;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ld r22,0(r9)
	ctx.current_instruction = 0x881F5264;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r11,588
	ctx.r7.s64 = ctx.r11.s64 + 588;
	// addi r6,r10,596
	ctx.r6.s64 = ctx.r10.s64 + 596;
	// rldicl r5,r22,3,61
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 3) & 0x7;
	// rldicl r4,r22,10,54
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u64, 10) & 0x3FF;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r5,r4,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r14,r5,29
	ctx.r14.u64 = ctx.r5.u32 & 0x7;
	// lhzx r9,r3,r31
	ctx.current_instruction = 0x881F528C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r6,r27,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r31
	ctx.current_instruction = 0x881F5294;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// add r19,r14,r31
	ctx.r19.u64 = ctx.r14.u64 + ctx.r31.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stb r14,80(r1)
	ctx.current_instruction = 0x881F52A0;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r31,472
	ctx.r9.s64 = ctx.r31.s64 + 472;
	// lbz r28,1751(r19)
	ctx.current_instruction = 0x881F52B4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r19.u32 + 1751);
	// add r29,r6,r27
	ctx.r29.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r7,r5,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
loc_881F52C0:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f5310
	if (ctx.cr6.eq) goto loc_881F5310;
	// lwz r5,8(r30)
	ctx.current_instruction = 0x881F52CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,-8(r9)
	ctx.current_instruction = 0x881F52D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,12(r30)
	ctx.current_instruction = 0x881F52D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r9)
	ctx.current_instruction = 0x881F52D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r3,8(r9)
	ctx.current_instruction = 0x881F52E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// dcbt r10,r11
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// dcbt r4,r11
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// dcbt r3,r11
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// dcbt r4,r11
	// dcbt r7,r5
	// dcbt r7,r8
loc_881F5310:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x881f52c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F52C0;
	// lwz r10,108(r1)
	ctx.current_instruction = 0x881F531C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r31,1784
	ctx.r11.s64 = ctx.r31.s64 + 1784;
	// lwz r9,1784(r31)
	ctx.current_instruction = 0x881F5324;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r21,r9
	ctx.current_instruction = 0x881F532C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x881f5de8
	if (ctx.cr6.eq) goto loc_881F5DE8;
	// lwz r10,1788(r31)
	ctx.current_instruction = 0x881F5338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// rldicl r9,r22,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u64, 17) & 0x1FFFF;
	// lbz r8,30(r31)
	ctx.current_instruction = 0x881F5340;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 30);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// clrlwi r20,r9,31
	ctx.r20.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r24,r21,r10
	ctx.current_instruction = 0x881F5350;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// beq cr6,0x881f5368
	if (ctx.cr6.eq) goto loc_881F5368;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r10,r24,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_881F5368:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x881F5368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,2188(r31)
	ctx.current_instruction = 0x881F536C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2188);
	// lwz r10,1596(r31)
	ctx.current_instruction = 0x881F5370;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x881F5378;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881F537C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// beq cr6,0x881f53e8
	if (ctx.cr6.eq) goto loc_881F53E8;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// addi r5,r9,255
	ctx.r5.s64 = ctx.r9.s64 + 255;
	// srawi r4,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 9;
	// addi r3,r11,255
	ctx.r3.s64 = ctx.r11.s64 + 255;
	// srawi r11,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 9;
	// srawi r10,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 9;
	// srawi r9,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 9;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,86(r1)
	ctx.current_instruction = 0x881F53D0;
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,84(r1)
	ctx.current_instruction = 0x881F53D8;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,90(r1)
	ctx.current_instruction = 0x881F53DC;
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// sth r5,88(r1)
	ctx.current_instruction = 0x881F53E0;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// b 0x881f541c
	goto loc_881F541C;
loc_881F53E8:
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// sth r4,86(r1)
	ctx.current_instruction = 0x881F5404;
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// sth r11,84(r1)
	ctx.current_instruction = 0x881F5410;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r10,90(r1)
	ctx.current_instruction = 0x881F5414;
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// sth r9,88(r1)
	ctx.current_instruction = 0x881F5418;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
loc_881F541C:
	// lwz r5,84(r1)
	ctx.current_instruction = 0x881F541C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,16(r30)
	ctx.current_instruction = 0x881F5420;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r27,1764(r31)
	ctx.current_instruction = 0x881F5424;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// lwz r26,1776(r31)
	ctx.current_instruction = 0x881F542C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r9,r11,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f5474
	if (ctx.cr6.eq) goto loc_881F5474;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a34d0
	ctx.lr = 0x881F5470;
	sub_881A34D0(ctx, base);
loc_881F5470:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_881F5474:
	// lwz r5,88(r1)
	ctx.current_instruction = 0x881F5474;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,84(r1)
	ctx.current_instruction = 0x881F547C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f54c0
	if (ctx.cr6.eq) goto loc_881F54C0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a34d0
	ctx.lr = 0x881F54C0;
	sub_881A34D0(ctx, base);
loc_881F54C0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881F54C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 1, ctx.xer);
	// stw r3,88(r1)
	ctx.current_instruction = 0x881F54C8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r28,r31,1784
	ctx.r28.s64 = ctx.r31.s64 + 1784;
	// stw r25,0(r11)
	ctx.current_instruction = 0x881F54D0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881F54D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r24,4(r10)
	ctx.current_instruction = 0x881F54D8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// lwz r9,1784(r31)
	ctx.current_instruction = 0x881F54DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// stwx r29,r21,r9
	ctx.current_instruction = 0x881F54E0;
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r8,1788(r31)
	ctx.current_instruction = 0x881F54E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// stwx r3,r21,r8
	ctx.current_instruction = 0x881F54E8;
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r3.u32);
	// beq cr6,0x881f585c
	if (ctx.cr6.eq) goto loc_881F585C;
	// subfic r23,r14,5
	ctx.xer.ca = ctx.r14.u32 <= 5;
	ctx.r23.u64 = static_cast<uint64_t>(5) - ctx.r14.u64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// beq cr6,0x881f5508
	if (ctx.cr6.eq) goto loc_881F5508;
	// stw r25,136(r1)
	ctx.current_instruction = 0x881F54FC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r24,140(r1)
	ctx.current_instruction = 0x881F5500;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// b 0x881f5510
	goto loc_881F5510;
loc_881F5508:
	// stw r25,140(r1)
	ctx.current_instruction = 0x881F5508;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r24,136(r1)
	ctx.current_instruction = 0x881F550C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
loc_881F5510:
	// lwz r25,96(r1)
	ctx.current_instruction = 0x881F5510;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r1,136
	ctx.r29.s64 = ctx.r1.s64 + 136;
	// subfic r27,r31,-1784
	ctx.xer.ca = ctx.r31.u32 <= 4294965512;
	ctx.r27.u64 = static_cast<uint64_t>(-1784) - ctx.r31.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_881F5520:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f5848
	if (ctx.cr6.eq) goto loc_881F5848;
	// lwz r10,0(r28)
	ctx.current_instruction = 0x881F552C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,1780(r31)
	ctx.current_instruction = 0x881F5534;
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// beq cr6,0x881f55f4
	if (ctx.cr6.eq) goto loc_881F55F4;
	// lhz r11,18(r30)
	ctx.current_instruction = 0x881F553C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f57d8
	if (ctx.cr6.eq) goto loc_881F57D8;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x881F554C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x881F5558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x881f57d8
	if (ctx.cr6.eq) goto loc_881F57D8;
	// lwz r10,2192(r31)
	ctx.current_instruction = 0x881F5564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2192);
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// lwz r8,16(r30)
	ctx.current_instruction = 0x881F556C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r7,r4,439
	ctx.r7.s64 = ctx.r4.s64 + 439;
	// addi r6,r4,442
	ctx.r6.s64 = ctx.r4.s64 + 442;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// subfic r10,r6,5
	ctx.xer.ca = ctx.r6.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r6.u64;
	// lwzx r5,r5,r31
	ctx.current_instruction = 0x881F5590;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r7,r7,r31
	ctx.current_instruction = 0x881F5594;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f57d8
	if (ctx.cr6.eq) goto loc_881F57D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881f55ec
	if (!ctx.cr6.eq) goto loc_881F55EC;
	// lwz r10,1168(r31)
	ctx.current_instruction = 0x881F55CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x881f55ec
	if (!ctx.cr6.eq) goto loc_881F55EC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215768
	ctx.lr = 0x881F55E8;
	sub_88215768(ctx, base);
loc_881F55E8:
	// b 0x881f57d8
	goto loc_881F57D8;
loc_881F55EC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x881f57cc
	goto loc_881F57CC;
loc_881F55F4:
	// lhz r11,18(r30)
	ctx.current_instruction = 0x881F55F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881F55F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,4(r30)
	ctx.current_instruction = 0x881F5600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfc r4,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r3,r11,r8
	ctx.r3.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r6,r10
	ctx.current_instruction = 0x881F563C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r3)
	ctx.current_instruction = 0x881F564C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// and r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// rlwinm r8,r4,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r10,r7,r10
	ctx.current_instruction = 0x881F5660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// xor r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r7,0,17,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// rlwinm r7,r4,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add. r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x881f5698
	if (!ctx.cr0.gt) goto loc_881F5698;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x881f57c0
	if (!ctx.cr6.eq) goto loc_881F57C0;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bne cr6,0x881f57a0
	if (!ctx.cr6.eq) goto loc_881F57A0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_881F5698:
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,2192(r31)
	ctx.current_instruction = 0x881F569C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2192);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r24,16(r30)
	ctx.current_instruction = 0x881F56A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r18,r10,16,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r17,r9,16,0,15
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r16,r3,r18
	ctx.r16.u64 = ctx.r18.u64 - ctx.r3.u64;
	// subf r5,r17,r18
	ctx.r5.u64 = ctx.r18.u64 - ctx.r17.u64;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// subf r6,r17,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r17.u64;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// xor r16,r16,r5
	ctx.r16.u64 = ctx.r16.u64 ^ ctx.r5.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// xor r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// nor r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srawi r6,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r16.s32 >> 31;
	// srawi r5,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// nor r9,r6,r5
	ctx.r9.u64 = ~(ctx.r6.u64 | ctx.r5.u64);
	// and r7,r6,r18
	ctx.r7.u64 = ctx.r6.u64 & ctx.r18.u64;
	// and r8,r5,r17
	ctx.r8.u64 = ctx.r5.u64 & ctx.r17.u64;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 | ctx.r3.u64;
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// addi r9,r4,439
	ctx.r9.s64 = ctx.r4.s64 + 439;
	// addi r8,r4,442
	ctx.r8.s64 = ctx.r4.s64 + 442;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r8,r3,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// lwzx r7,r5,r31
	ctx.current_instruction = 0x881F5740;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// subfic r11,r9,5
	ctx.xer.ca = ctx.r9.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r9.u64;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881F5748;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881f57d8
	if (ctx.cr6.eq) goto loc_881F57D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881f57c8
	if (!ctx.cr6.eq) goto loc_881F57C8;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x881F5780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881f57c8
	if (!ctx.cr6.eq) goto loc_881F57C8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215768
	ctx.lr = 0x881F579C;
	sub_88215768(ctx, base);
loc_881F579C:
	// b 0x881f57d8
	goto loc_881F57D8;
loc_881F57A0:
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881f57b0
	if (!ctx.cr6.eq) goto loc_881F57B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x881f5698
	goto loc_881F5698;
loc_881F57B0:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x881f5698
	if (!ctx.cr6.eq) goto loc_881F5698;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881f5698
	goto loc_881F5698;
loc_881F57C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881f57d8
	goto loc_881F57D8;
loc_881F57C8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_881F57CC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a34d0
	ctx.lr = 0x881F57D8;
	sub_881A34D0(ctx, base);
loc_881F57D8:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f5830
	if (!ctx.cr6.eq) goto loc_881F5830;
	// lhz r10,2(r29)
	ctx.current_instruction = 0x881F57E4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r7,0(r29)
	ctx.current_instruction = 0x881F57EC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,62(r31)
	ctx.current_instruction = 0x881F57F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 62);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r10,64(r31)
	ctx.current_instruction = 0x881F5800;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r5,66(r31)
	ctx.current_instruction = 0x881F5808;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 66);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r4,68(r31)
	ctx.current_instruction = 0x881F5810;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 68);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
loc_881F5830:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881F5830;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwx r3,r11,r28
	ctx.current_instruction = 0x881F583C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x881F5840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r3,r21,r10
	ctx.current_instruction = 0x881F5844;
	REX_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r3.u32);
loc_881F5848:
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x881f5520
	if (!ctx.cr0.eq) goto loc_881F5520;
	// b 0x881f586c
	goto loc_881F586C;
loc_881F585C:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881F585C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r11)
	ctx.current_instruction = 0x881F5860;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881F5864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r10)
	ctx.current_instruction = 0x881F5868;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_881F586C:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,388(r31)
	ctx.current_instruction = 0x881F5870;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// addi r11,r31,1724
	ctx.r11.s64 = ctx.r31.s64 + 1724;
	// stw r10,2180(r31)
	ctx.current_instruction = 0x881F5878;
	REX_STORE_U32(ctx.r31.u32 + 2180, ctx.r10.u32);
	// rldicl r8,r22,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u64, 8) & 0xFF;
	// stw r11,700(r31)
	ctx.current_instruction = 0x881F5880;
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// addi r7,r1,1312
	ctx.r7.s64 = ctx.r1.s64 + 1312;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// rldicl r6,r22,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u64, 16) & 0xFFFF;
	// stw r7,2184(r31)
	ctx.current_instruction = 0x881F5890;
	REX_STORE_U32(ctx.r31.u32 + 2184, ctx.r7.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r15,r6,26
	ctx.r15.u64 = ctx.r6.u32 & 0x3F;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r31,1748
	ctx.r21.s64 = ctx.r31.s64 + 1748;
	// add r17,r11,r9
	ctx.r17.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r24,r31,464
	ctx.r24.s64 = ctx.r31.s64 + 464;
	// subfic r20,r31,-464
	ctx.xer.ca = ctx.r31.u32 <= 4294966832;
	ctx.r20.u64 = static_cast<uint64_t>(-464) - ctx.r31.u64;
	// lbz r18,1751(r19)
	ctx.current_instruction = 0x881F58B8;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r19.u32 + 1751);
	// li r19,2
	ctx.r19.s64 = 2;
loc_881F58C0:
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f5b98
	if (ctx.cr6.eq) goto loc_881F5B98;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881F58CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r22,r20,r24
	ctx.r22.u64 = ctx.r20.u64 + ctx.r24.u64;
	// lwz r9,16(r30)
	ctx.current_instruction = 0x881F58D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,1756(r31)
	ctx.current_instruction = 0x881F58D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r7,1768(r31)
	ctx.current_instruction = 0x881F58DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r22,r10
	ctx.current_instruction = 0x881F58E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r5,r3,1,15,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// subf r4,r3,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,0,16,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f5948
	if (ctx.cr6.eq) goto loc_881F5948;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x881F5914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881f5934
	if (!ctx.cr6.eq) goto loc_881F5934;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215768
	ctx.lr = 0x881F5930;
	sub_88215768(ctx, base);
loc_881F5930:
	// b 0x881f5948
	goto loc_881F5948;
loc_881F5934:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a34d0
	ctx.lr = 0x881F5948;
	sub_881A34D0(ctx, base);
loc_881F5948:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881F5948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// srawi r26,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 16;
	// lwz r23,1716(r24)
	ctx.current_instruction = 0x881F5950;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r24.u32 + 1716);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// lbz r9,48(r31)
	ctx.current_instruction = 0x881F5958;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f5a08
	if (ctx.cr6.eq) goto loc_881F5A08;
	// lhz r4,90(r31)
	ctx.current_instruction = 0x881F5964;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// srawi r7,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 2;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,8(r30)
	ctx.current_instruction = 0x881F5970;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 2;
	// clrlwi r29,r25,30
	ctx.r29.u64 = ctx.r25.u32 & 0x3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x881f59ec
	if (!ctx.cr6.eq) goto loc_881F59EC;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x881F59B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x881F59C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F59C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881f5a08
	if (ctx.cr6.eq) goto loc_881F5A08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x881F59CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r4,90(r31)
	ctx.current_instruction = 0x881F59D4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ccf78
	ctx.lr = 0x881F59E8;
	sub_881CCF78(ctx, base);
loc_881F59E8:
	// b 0x881f5a08
	goto loc_881F5A08;
loc_881F59EC:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x881F59FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x881F5A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F5A08:
	// lwz r7,1172(r31)
	ctx.current_instruction = 0x881F5A08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881f5a30
	if (ctx.cr6.eq) goto loc_881F5A30;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881F5A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881F5A1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x881F5A20;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// b 0x881f5a38
	goto loc_881F5A38;
loc_881F5A30:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_881F5A38:
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// lbz r8,31(r31)
	ctx.current_instruction = 0x881F5A3C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 31);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r9,r9,r21
	ctx.current_instruction = 0x881F5A48;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// lbzx r8,r6,r21
	ctx.current_instruction = 0x881F5A4C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r21.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x881f5a94
	if (ctx.cr6.eq) goto loc_881F5A94;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// ble cr6,0x881f5a78
	if (!ctx.cr6.gt) goto loc_881F5A78;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x881f5a7c
	goto loc_881F5A7C;
loc_881F5A78:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_881F5A7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x881f5a90
	if (!ctx.cr6.gt) goto loc_881F5A90;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x881f5a94
	goto loc_881F5A94;
loc_881F5A90:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_881F5A94:
	// sth r10,94(r1)
	ctx.current_instruction = 0x881F5A94;
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,92(r1)
	ctx.current_instruction = 0x881F5A9C;
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// beq cr6,0x881f5b04
	if (ctx.cr6.eq) goto loc_881F5B04;
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881F5AA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,92(r1)
	ctx.current_instruction = 0x881F5AA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,2196(r31)
	ctx.current_instruction = 0x881F5AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2196);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,2200(r31)
	ctx.current_instruction = 0x881F5AB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2200);
	// rlwinm r7,r4,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881f5afc
	if (ctx.cr6.eq) goto loc_881F5AFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215848
	ctx.lr = 0x881F5AF8;
	sub_88215848(ctx, base);
loc_881F5AF8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_881F5AFC:
	// stw r10,92(r1)
	ctx.current_instruction = 0x881F5AFC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x881f5b08
	goto loc_881F5B08;
loc_881F5B04:
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881F5B04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881F5B08:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r4,92(r31)
	ctx.current_instruction = 0x881F5B0C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// lwz r7,12(r30)
	ctx.current_instruction = 0x881F5B14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,8(r24)
	ctx.current_instruction = 0x881F5B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r29,r23,768
	ctx.r29.s64 = ctx.r23.s64 + 768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x881f5b98
	if (ctx.cr6.eq) goto loc_881F5B98;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r9,r27,r31
	ctx.current_instruction = 0x881F5B68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x881F5B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F5B74:
	// lwzx r8,r27,r31
	ctx.current_instruction = 0x881F5B74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,16(r24)
	ctx.current_instruction = 0x881F5B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// lhz r4,92(r31)
	ctx.current_instruction = 0x881F5B88;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x881F5B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F5B98:
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x881f58c0
	if (!ctx.cr0.eq) goto loc_881F58C0;
	// lbz r25,80(r1)
	ctx.current_instruction = 0x881F5BA8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
loc_881F5BB0:
	// srawi r27,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 2;
	// addi r11,r28,140
	ctx.r11.s64 = ctx.r28.s64 + 140;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r15,31
	ctx.r7.u64 = ctx.r15.u32 & 0x1;
	// rldicl r6,r16,20,44
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u64, 20) & 0xFFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x881F5BD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// lwzx r10,r8,r30
	ctx.current_instruction = 0x881F5BD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x881f5d74
	if (ctx.cr6.eq) goto loc_881F5D74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f5cc0
	if (!ctx.cr6.eq) goto loc_881F5CC0;
	// lwz r11,24(r30)
	ctx.current_instruction = 0x881F5BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// lwz r4,444(r31)
	ctx.current_instruction = 0x881F5BF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r17)
	ctx.current_instruction = 0x881F5C00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r6,4(r17)
	ctx.current_instruction = 0x881F5C04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,40(r30)
	ctx.current_instruction = 0x881F5C0C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881F5C10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x881F5C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r3,24(r30)
	ctx.current_instruction = 0x881F5C18;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x881f5c40
	if (ctx.cr6.lt) goto loc_881F5C40;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817db68
	ctx.lr = 0x881F5C38;
	sub_8817DB68(ctx, base);
loc_881F5C38:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x881f5ca0
	goto loc_881F5CA0;
loc_881F5C40:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881f5c9c
	if (!ctx.cr6.gt) goto loc_881F5C9C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881F5C4C:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x881F5C4C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r24,r3,24,8,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r24,r7
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r24,r10,r4
	ctx.current_instruction = 0x881F5C74;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r23,r24,r5
	ctx.current_instruction = 0x881F5C88;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r5.u32);
	// rotlwi r24,r24,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r24,r29
	ctx.current_instruction = 0x881F5C94;
	REX_STORE_U16(ctx.r24.u32 + ctx.r29.u32, ctx.r8.u16);
	// bdnz 0x881f5c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F5C4C;
loc_881F5C9C:
	// stw r11,20(r30)
	ctx.current_instruction = 0x881F5C9C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_881F5CA0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x881f5cb8
	if (!ctx.cr6.eq) goto loc_881F5CB8;
	// bl 0x88193c80
	ctx.lr = 0x881F5CB4;
	sub_88193C80(ctx, base);
loc_881F5CB4:
	// b 0x881f5d04
	goto loc_881F5D04;
loc_881F5CB8:
	// bl 0x88217cc0
	ctx.lr = 0x881F5CBC;
	sub_88217CC0(ctx, base);
loc_881F5CBC:
	// b 0x881f5d04
	goto loc_881F5D04;
loc_881F5CC0:
	// rldicl r10,r16,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.current_instruction = 0x881F5CC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.current_instruction = 0x881F5CE4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x881F5CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881F5D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F5D04:
	// clrlwi r14,r25,24
	ctx.r14.u64 = ctx.r25.u32 & 0xFF;
	// lwz r10,700(r31)
	ctx.current_instruction = 0x881F5D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// bgt cr6,0x881f5d3c
	if (ctx.cr6.gt) goto loc_881F5D3C;
	// addi r11,r27,45
	ctx.r11.s64 = ctx.r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.current_instruction = 0x881F5D1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2184);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,2180(r31)
	ctx.current_instruction = 0x881F5D24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r10,r28
	ctx.current_instruction = 0x881F5D2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r7,r9,r31
	ctx.current_instruction = 0x881F5D30;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x881f60e0
	ctx.lr = 0x881F5D38;
	sub_881F60E0(ctx, base);
loc_881F5D38:
	// b 0x881f5dd4
	goto loc_881F5DD4;
loc_881F5D3C:
	// neg r11,r14
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// lbzx r6,r10,r28
	ctx.current_instruction = 0x881F5D40;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = ctx.r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhzx r6,r8,r31
	ctx.current_instruction = 0x881F5D60;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r11,r4,r31
	ctx.current_instruction = 0x881F5D64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8821e380
	ctx.lr = 0x881F5D70;
	sub_8821E380(ctx, base);
loc_881F5D70:
	// b 0x881f5dd4
	goto loc_881F5DD4;
loc_881F5D74:
	// lwz r10,700(r31)
	ctx.current_instruction = 0x881F5D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bgt cr6,0x881f5da4
	if (ctx.cr6.gt) goto loc_881F5DA4;
	// addi r11,r27,45
	ctx.r11.s64 = ctx.r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.current_instruction = 0x881F5D88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2184);
	// lwz r4,2180(r31)
	ctx.current_instruction = 0x881F5D8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r28
	ctx.current_instruction = 0x881F5D94;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r7,r9,r31
	ctx.current_instruction = 0x881F5D98;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x881f5fd0
	ctx.lr = 0x881F5DA0;
	sub_881F5FD0(ctx, base);
loc_881F5DA0:
	// b 0x881f5dd4
	goto loc_881F5DD4;
loc_881F5DA4:
	// neg r11,r14
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// lbzx r6,r10,r28
	ctx.current_instruction = 0x881F5DA8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = ctx.r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r8,r31
	ctx.current_instruction = 0x881F5DC4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r11,r4,r31
	ctx.current_instruction = 0x881F5DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8821e2c0
	ctx.lr = 0x881F5DD4;
	sub_8821E2C0(ctx, base);
loc_881F5DD4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r15,r15,31,25,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 31) & 0x7F;
	// rldicr r16,r16,8,55
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x881f5bb0
	if (ctx.cr6.lt) goto loc_881F5BB0;
loc_881F5DE8:
	// lhz r10,18(r30)
	ctx.current_instruction = 0x881F5DE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F5DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,104(r1)
	ctx.current_instruction = 0x881F5DF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881F5DF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// lwz r9,4(r30)
	ctx.current_instruction = 0x881F5E04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881F5E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881F5E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r6,108(r1)
	ctx.current_instruction = 0x881F5E18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,132(r1)
	ctx.current_instruction = 0x881F5E20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,104(r1)
	ctx.current_instruction = 0x881F5E2C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r3,116(r1)
	ctx.current_instruction = 0x881F5E34;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r5,0(r30)
	ctx.current_instruction = 0x881F5E38;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stw r9,4(r30)
	ctx.current_instruction = 0x881F5E40;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// sth r4,18(r30)
	ctx.current_instruction = 0x881F5E44;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r4.u16);
	// stw r10,8(r30)
	ctx.current_instruction = 0x881F5E48;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x881F5E4C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,12(r30)
	ctx.current_instruction = 0x881F5E50;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// blt cr6,0x881f5248
	if (ctx.cr6.lt) goto loc_881F5248;
loc_881F5E58:
	// lhz r8,16(r30)
	ctx.current_instruction = 0x881F5E58;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,128(r1)
	ctx.current_instruction = 0x881F5E60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// lwz r5,112(r1)
	ctx.current_instruction = 0x881F5E68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,100(r1)
	ctx.current_instruction = 0x881F5E70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// sth r4,16(r30)
	ctx.current_instruction = 0x881F5E74;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r4.u16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881F5E80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,120(r1)
	ctx.current_instruction = 0x881F5E84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// lwz r4,144(r1)
	ctx.current_instruction = 0x881F5E8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,100(r1)
	ctx.current_instruction = 0x881F5E94;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,96(r1)
	ctx.current_instruction = 0x881F5E98;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// stw r5,112(r1)
	ctx.current_instruction = 0x881F5EA0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r3,120(r1)
	ctx.current_instruction = 0x881F5EA4;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lhz r11,50(r31)
	ctx.current_instruction = 0x881F5EA8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	ctx.current_instruction = 0x881F5EB0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x881f51f0
	if (ctx.cr6.lt) goto loc_881F51F0;
loc_881F5EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88222908) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88222908;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88222908) {
			switch (rex_dispatch_address) {
				case 0x88222910:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88222908;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88222910: goto loc_88222910;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88222910;
	__savegprlr_27(ctx, base);
loc_88222910:
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
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-64
	ctx.r28.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v8,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r30,r10,r6
	ctx.r30.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v6,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v7,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v5,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v4,v8,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vslh v26,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v3,v7,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v21,v25,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v20,v24,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v19,v23,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v15,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v7,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vpkshus128 v54,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-72(r1)
	ctx.current_instruction = 0x88222A2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r29,-80(r1)
	ctx.current_instruction = 0x88222A30;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-64(r1)
	ctx.current_instruction = 0x88222A38;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r27,-56(r1)
	ctx.current_instruction = 0x88222A3C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r29,0(r5)
	ctx.current_instruction = 0x88222A40;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stwx r7,r5,r6
	ctx.current_instruction = 0x88222A44;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r28,r31,r5
	ctx.current_instruction = 0x88222A48;
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r27,r10,r6
	ctx.current_instruction = 0x88222A4C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// bne cr6,0x88222a74
	if (!ctx.cr6.eq) goto loc_88222A74;
	// lwz r7,-76(r1)
	ctx.current_instruction = 0x88222A54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-68(r1)
	ctx.current_instruction = 0x88222A58;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r28,-60(r1)
	ctx.current_instruction = 0x88222A5C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r27,-52(r1)
	ctx.current_instruction = 0x88222A60;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stw r7,4(r5)
	ctx.current_instruction = 0x88222A64;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r29,4(r9)
	ctx.current_instruction = 0x88222A68;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r28,4(r10)
	ctx.current_instruction = 0x88222A6C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r27,4(r30)
	ctx.current_instruction = 0x88222A70;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_88222A74:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x88222bc4
	if (!ctx.cr6.eq) goto loc_88222BC4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v47,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v46,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v7,v10,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v6,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v5,v0,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vslh v26,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v4,v8,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vslh v24,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v21,v25,v6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v24,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v19,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v16,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v12,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v10,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v8,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v7,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v45,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.current_instruction = 0x88222B78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r9,-60(r1)
	ctx.current_instruction = 0x88222B7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// stvx128 v44,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-80(r1)
	ctx.current_instruction = 0x88222B84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r4,-76(r1)
	ctx.current_instruction = 0x88222B88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-64(r1)
	ctx.current_instruction = 0x88222B8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r3,r5,r31
	ctx.current_instruction = 0x88222B90;
	ea = ctx.r5.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// lwz r3,-52(r1)
	ctx.current_instruction = 0x88222B94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r9,4(r5)
	ctx.current_instruction = 0x88222B9C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r8,r5,r6
	ctx.current_instruction = 0x88222BA0;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r9,-72(r1)
	ctx.current_instruction = 0x88222BA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r3,4(r11)
	ctx.current_instruction = 0x88222BA8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stwux r7,r10,r31
	ctx.current_instruction = 0x88222BAC;
	ea = ctx.r10.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-68(r1)
	ctx.current_instruction = 0x88222BB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r4,4(r10)
	ctx.current_instruction = 0x88222BB8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stwx r9,r10,r6
	ctx.current_instruction = 0x88222BBC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// stw r8,4(r11)
	ctx.current_instruction = 0x88222BC0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_88222BC4:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88229998) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88229998;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88229998) {
			switch (rex_dispatch_address) {
				case 0x882299A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88229998;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882299A0: goto loc_882299A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x882299A0;
	__savegprlr_26(ctx, base);
loc_882299A0:
	// lwz r11,1140(r7)
	ctx.current_instruction = 0x882299A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1140);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x882299A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x882299B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x882299B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v12,5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x5)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x882299C8;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x882299D0;
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
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vsplth v3,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v26,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x88229b70
	if (!ctx.cr6.eq) goto loc_88229B70;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88229d44
	if (!ctx.cr6.gt) goto loc_88229D44;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88229A88:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v1,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vadduhm v21,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v31,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
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
	// vsrah v31,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88229a88
	if (ctx.cr6.lt) goto loc_88229A88;
	// b 0x88229d44
	goto loc_88229D44;
loc_88229B70:
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
	// lvrx128 v53,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88229d44
	if (!ctx.cr6.gt) goto loc_88229D44;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_88229BF4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
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
	// vslh v18,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
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
	// vslh v16,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v19,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
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
	// vsrah v25,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// stvx128 v25,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x88229bf4
	if (ctx.cr6.lt) goto loc_88229BF4;
loc_88229D44:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x0)));
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
	// bne cr6,0x88229df4
	if (!ctx.cr6.eq) goto loc_88229DF4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88229edc
	if (!ctx.cr6.gt) goto loc_88229EDC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88229D78:
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v9,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v8,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v5,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v3,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
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
	// vor v6,v6,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v40,r0,r11
	ctx.current_instruction = 0x88229DE0;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r10
	ctx.current_instruction = 0x88229DE4;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88229d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88229D78;
	// b 0x88229edc
	goto loc_88229EDC;
loc_88229DF4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88229edc
	if (!ctx.cr6.gt) goto loc_88229EDC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_88229E0C:
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
	// vsldoi128 v7,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v5,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v23,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vslh v21,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v9,v20,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v19,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v7,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v5,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
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
	// vsubshs v25,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vadduhm v24,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
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
	// vor128 v38,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v6,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88229e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88229E0C;
loc_88229EDC:
	// vand v13,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
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

