#include "forzahorizon2_funcs.27.h"

DEFINE_REX_FUNC(sub_88050280) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050280);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050280;
	ctx.current_instruction = 0x88050280;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,168(r11)
	ctx.current_instruction = 0x88050288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050870);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050870;
	ctx.current_instruction = 0x88050870;
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

DEFINE_REX_FUNC(sub_880520D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880520D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880520D8) {
			switch (rex_dispatch_address) {
				case 0x880520E0:
				case 0x880520F8:
				case 0x88052104:
				case 0x8805210C:
				case 0x88052114:
				case 0x8805213C:
				case 0x88052148:
				case 0x88052164:
				case 0x88052180:
				case 0x88052190:
				case 0x88052194:
				case 0x880521B4:
				case 0x880521C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880520D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880520E0: goto loc_880520E0;
		case 0x880520F8: goto loc_880520F8;
		case 0x88052104: goto loc_88052104;
		case 0x8805210C: goto loc_8805210C;
		case 0x88052114: goto loc_88052114;
		case 0x8805213C: goto loc_8805213C;
		case 0x88052148: goto loc_88052148;
		case 0x88052164: goto loc_88052164;
		case 0x88052180: goto loc_88052180;
		case 0x88052190: goto loc_88052190;
		case 0x88052194: goto loc_88052194;
		case 0x880521B4: goto loc_880521B4;
		case 0x880521C0: goto loc_880521C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880520E0;
	__savegprlr_28(ctx, base);
loc_880520E0:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880520E4;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	ctx.current_instruction = 0x880520F0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x881e9150
	ctx.lr = 0x880520F8;
	sub_881E9150(ctx, base);
loc_880520F8:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x88052114
	if (!ctx.cr0.eq) goto loc_88052114;
	// bl 0x880525b8
	ctx.lr = 0x88052104;
	sub_880525B8(ctx, base);
loc_88052104:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x88052588
	ctx.lr = 0x8805210C;
	sub_88052588(ctx, base);
loc_8805210C:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88050cc8
	ctx.lr = 0x88052114;
	sub_88050CC8(ctx, base);
loc_88052114:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r29,r30
	ctx.current_instruction = 0x88052120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88052134
	if (ctx.cr6.eq) goto loc_88052134;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x880521c4
	goto loc_880521C4;
loc_88052134:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88052e38
	ctx.lr = 0x8805213C;
	sub_88052E38(ctx, base);
loc_8805213C:
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8805215c
	if (!ctx.cr0.eq) goto loc_8805215C;
	// bl 0x880529c8
	ctx.lr = 0x88052148;
	sub_880529C8(ctx, base);
loc_88052148:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88052154;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x880521c4
	goto loc_880521C4;
loc_8805215C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x88052218
	ctx.lr = 0x88052164;
	sub_88052218(ctx, base);
loc_88052164:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.current_instruction = 0x88052168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x880521b0
	if (!ctx.cr6.eq) goto loc_880521B0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x88051fb8
	ctx.lr = 0x88052180;
	sub_88051FB8(ctx, base);
loc_88052180:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x880521a8
	if (!ctx.cr0.eq) goto loc_880521A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88052278
	ctx.lr = 0x88052190;
	sub_88052278(ctx, base);
loc_88052190:
	// bl 0x880529c8
	ctx.lr = 0x88052194;
	sub_880529C8(ctx, base);
loc_88052194:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x8805219C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	ctx.current_instruction = 0x880521A0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x880521b4
	goto loc_880521B4;
loc_880521A8:
	// stwx r28,r29,r30
	ctx.current_instruction = 0x880521A8;
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x880521b4
	goto loc_880521B4;
loc_880521B0:
	// bl 0x88052278
	ctx.lr = 0x880521B4;
	sub_88052278(ctx, base);
loc_880521B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x880521e8
	ctx.lr = 0x880521C0;
	sub_880521E8(ctx, base);
loc_880521C0:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x880521C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_880521C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057A50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057A50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057A50) {
			switch (rex_dispatch_address) {
				case 0x88057A68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057A50;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057A68: goto loc_88057A68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057A54;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057A58;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88057A5C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062238
	ctx.lr = 0x88057A68;
	sub_88062238(ctx, base);
loc_88057A68:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88057A70;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x88057A74;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,6732(r10)
	ctx.current_instruction = 0x88057A78;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88057A7C;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	ctx.current_instruction = 0x88057A80;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x88057A84;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	ctx.current_instruction = 0x88057A88;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	ctx.current_instruction = 0x88057A8C;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057A94;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057A9C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880590A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880590A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880590A8;
	ctx.current_instruction = 0x880590A8;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880592A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880592A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880592A0) {
			switch (rex_dispatch_address) {
				case 0x880592DC:
				case 0x880592FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880592A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880592DC: goto loc_880592DC;
		case 0x880592FC: goto loc_880592FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880592A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880592A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880592AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.current_instruction = 0x880592B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880592fc
	if (ctx.cr6.eq) goto loc_880592FC;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x880592C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880592CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x880592D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880592DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880592DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880592fc
	if (ctx.cr6.lt) goto loc_880592FC;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880592E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.current_instruction = 0x880592EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x880592F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880592FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880592FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059300;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88059308;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805AC00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805AC00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805AC00) {
			switch (rex_dispatch_address) {
				case 0x8805AC08:
				case 0x8805AC8C:
				case 0x8805AC94:
				case 0x8805ACBC:
				case 0x8805ACD4:
				case 0x8805ACFC:
				case 0x8805AD24:
				case 0x8805AD54:
				case 0x8805AD7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805AC00;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805AC08: goto loc_8805AC08;
		case 0x8805AC8C: goto loc_8805AC8C;
		case 0x8805AC94: goto loc_8805AC94;
		case 0x8805ACBC: goto loc_8805ACBC;
		case 0x8805ACD4: goto loc_8805ACD4;
		case 0x8805ACFC: goto loc_8805ACFC;
		case 0x8805AD24: goto loc_8805AD24;
		case 0x8805AD54: goto loc_8805AD54;
		case 0x8805AD7C: goto loc_8805AD7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8805AC08;
	__savegprlr_25(ctx, base);
loc_8805AC08:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8805AC08;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,0(r6)
	ctx.current_instruction = 0x8805AC18;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8805acfc
	if (ctx.cr6.gt) goto loc_8805ACFC;
	// lwz r10,664(r3)
	ctx.current_instruction = 0x8805AC30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 664);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8805ac98
	if (ctx.cr6.lt) goto loc_8805AC98;
	// lwz r11,668(r3)
	ctx.current_instruction = 0x8805AC3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 668);
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8805ad8c
	if (!ctx.cr6.gt) goto loc_8805AD8C;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8805ac98
	if (ctx.cr6.lt) goto loc_8805AC98;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8805ac98
	if (!ctx.cr6.lt) goto loc_8805AC98;
	// subf r30,r4,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805AC6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x8805ac90
	if (ctx.cr6.gt) goto loc_8805AC90;
	// bl 0x880547a0
	ctx.lr = 0x8805AC8C;
	sub_880547A0(ctx, base);
loc_8805AC8C:
	// b 0x8805ac9c
	goto loc_8805AC9C;
loc_8805AC90:
	// bl 0x880527e0
	ctx.lr = 0x8805AC94;
	sub_880527E0(ctx, base);
loc_8805AC94:
	// b 0x8805ac9c
	goto loc_8805AC9C;
loc_8805AC98:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8805AC9C:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805AC9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805acbc
	if (ctx.cr6.eq) goto loc_8805ACBC;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805ACA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805ACAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8805ACB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805ACBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805ACBC:
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805ACBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805ACC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8805ACC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805ACD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805ACD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8805ad08
	if (!ctx.cr6.lt) goto loc_8805AD08;
loc_8805ACDC:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805ACDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
loc_8805ACE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805acfc
	if (ctx.cr6.eq) goto loc_8805ACFC;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805ACE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805ACEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8805ACF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805ACFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805ACFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805AD08:
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805AD08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x8805AD14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.current_instruction = 0x8805AD18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805AD24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AD24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805acdc
	if (ctx.cr6.lt) goto loc_8805ACDC;
	// stw r27,80(r1)
	ctx.current_instruction = 0x8805AD2C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805AD34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r5,r30,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r30.u64;
	// lwz r11,44(r31)
	ctx.current_instruction = 0x8805AD3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805AD44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x8805AD48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805AD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AD54:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805AD54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805ace0
	if (ctx.cr6.lt) goto loc_8805ACE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805ad7c
	if (ctx.cr6.eq) goto loc_8805AD7C;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805AD68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805AD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8805AD70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805AD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AD7C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805AD7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,664(r31)
	ctx.current_instruction = 0x8805AD80;
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,668(r31)
	ctx.current_instruction = 0x8805AD88;
	REX_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_8805AD8C:
	// lwz r10,668(r31)
	ctx.current_instruction = 0x8805AD8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r11,664(r31)
	ctx.current_instruction = 0x8805AD90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8805ada8
	if (!ctx.cr6.lt) goto loc_8805ADA8;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8805ADA8:
	// lwz r9,44(r31)
	ctx.current_instruction = 0x8805ADA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,0(r25)
	ctx.current_instruction = 0x8805ADB8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88061270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88061270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88061270) {
			switch (rex_dispatch_address) {
				case 0x88061278:
				case 0x88061314:
				case 0x88061364:
				case 0x8806138C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88061270;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88061278: goto loc_88061278;
		case 0x88061314: goto loc_88061314;
		case 0x88061364: goto loc_88061364;
		case 0x8806138C: goto loc_8806138C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88061278;
	__savegprlr_23(ctx, base);
loc_88061278:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88061278;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,14628(r9)
	ctx.current_instruction = 0x8806127C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,14524(r9)
	ctx.current_instruction = 0x88061288;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// mullw r10,r23,r7
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// lwz r9,14532(r9)
	ctx.current_instruction = 0x88061290;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r29,14504(r31)
	ctx.current_instruction = 0x88061294;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r26,14508(r31)
	ctx.current_instruction = 0x88061298;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r24,14684(r31)
	ctx.current_instruction = 0x8806129C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14684);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r25,r7,r8
	ctx.r25.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r7,14500(r31)
	ctx.current_instruction = 0x880612A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 14500);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r8,r5,r30
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r7,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r23.s32 >> 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addze r24,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r24.s64 = temp.s64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r6
	ctx.r26.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x88061394
	if (ctx.cr6.eq) goto loc_88061394;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,14476(r31)
	ctx.current_instruction = 0x880612F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r6,14628(r31)
	ctx.current_instruction = 0x880612FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88061304;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880ca2c8
	ctx.lr = 0x88061314;
	sub_880CA2C8(ctx, base);
loc_88061314:
	// lwz r10,14688(r31)
	ctx.current_instruction = 0x88061314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14688);
	// lwz r8,14680(r31)
	ctx.current_instruction = 0x88061318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 14680);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,14524(r31)
	ctx.current_instruction = 0x88061324;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 14524);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// beq cr6,0x8806136c
	if (ctx.cr6.eq) goto loc_8806136C;
	// lwz r11,14516(r31)
	ctx.current_instruction = 0x8806133C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14516);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r25,14512(r31)
	ctx.current_instruction = 0x88061344;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// stb r4,119(r1)
	ctx.current_instruction = 0x88061348;
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// addi r4,r29,3
	ctx.r4.s64 = ctx.r29.s64 + 3;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88061350;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x88061354;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x88061358;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r25,100(r1)
	ctx.current_instruction = 0x8806135C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// bl 0x880c87c0
	ctx.lr = 0x88061364;
	sub_880C87C0(ctx, base);
loc_88061364:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8806136C:
	// lwz r4,14484(r31)
	ctx.current_instruction = 0x8806136C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,92(r1)
	ctx.current_instruction = 0x88061374;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x88061378;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x8806137C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r4,84(r1)
	ctx.current_instruction = 0x88061380;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r29,3
	ctx.r4.s64 = ctx.r29.s64 + 3;
	// bl 0x880ca370
	ctx.lr = 0x8806138C;
	sub_880CA370(ctx, base);
loc_8806138C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88061394:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88061458
	if (!ctx.cr6.gt) goto loc_88061458;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880613AC:
	// lwz r9,14524(r31)
	ctx.current_instruction = 0x880613AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14524);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,14628(r31)
	ctx.current_instruction = 0x880613B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r6,14484(r31)
	ctx.current_instruction = 0x880613B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880613f0
	if (!ctx.cr6.gt) goto loc_880613F0;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_880613D0:
	// lbz r9,2(r10)
	ctx.current_instruction = 0x880613D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r9,r11,r27
	ctx.current_instruction = 0x880613D4;
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbzu r9,4(r10)
	ctx.current_instruction = 0x880613D8;
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r9,r11,r26
	ctx.current_instruction = 0x880613DC;
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,14484(r31)
	ctx.current_instruction = 0x880613E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880613d0
	if (ctx.cr6.lt) goto loc_880613D0;
loc_880613F0:
	// lwz r10,14476(r31)
	ctx.current_instruction = 0x880613F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88061440
	if (!ctx.cr6.gt) goto loc_88061440;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_88061410:
	// lbz r7,2(r10)
	ctx.current_instruction = 0x88061410;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r7,r11,r4
	ctx.current_instruction = 0x88061414;
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// lbzu r7,4(r10)
	ctx.current_instruction = 0x88061418;
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r7,r6,r11
	ctx.current_instruction = 0x8806141C;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r5,2(r9)
	ctx.current_instruction = 0x88061424;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r5,1(r8)
	ctx.current_instruction = 0x88061428;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lbzu r7,4(r9)
	ctx.current_instruction = 0x8806142C;
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r7,2(r8)
	ctx.current_instruction = 0x88061430;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r8.u32 = ea;
	// lwz r7,14476(r31)
	ctx.current_instruction = 0x88061434;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88061410
	if (ctx.cr6.lt) goto loc_88061410;
loc_88061440:
	// lwz r11,14528(r31)
	ctx.current_instruction = 0x88061440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14528);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 + ctx.r26.u64;
	// bdnz 0x880613ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880613AC;
loc_88061458:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88065ED8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88065ED8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065ED8;
	ctx.current_instruction = 0x88065ED8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x88065ef8
	if (ctx.cr6.eq) goto loc_88065EF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,592(r11)
	ctx.current_instruction = 0x88065EEC;
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r4.u32);
	// stw r10,552(r11)
	ctx.current_instruction = 0x88065EF0;
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88065EF8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,552(r11)
	ctx.current_instruction = 0x88065EFC;
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067668) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067668;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067668) {
			switch (rex_dispatch_address) {
				case 0x8806768C:
				case 0x8806769C:
				case 0x880676AC:
				case 0x880676BC:
				case 0x880676D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067668;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806768C: goto loc_8806768C;
		case 0x8806769C: goto loc_8806769C;
		case 0x880676AC: goto loc_880676AC;
		case 0x880676BC: goto loc_880676BC;
		case 0x880676D0: goto loc_880676D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806766C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067670;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88067674;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8806768C;
	sub_88052D90(ctx, base);
loc_8806768C:
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8806769C;
	sub_88052D90(ctx, base);
loc_8806769C:
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880676AC;
	sub_88052D90(ctx, base);
loc_880676AC:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880676BC;
	sub_88052D90(ctx, base);
loc_880676BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,444(r31)
	ctx.current_instruction = 0x880676C4;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	ctx.current_instruction = 0x880676C8;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// bl 0x880cd500
	ctx.lr = 0x880676D0;
	sub_880CD500(ctx, base);
loc_880676D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880676D4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880676DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88068080) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068080;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068080) {
			switch (rex_dispatch_address) {
				case 0x880680C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068080;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880680C4: goto loc_880680C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88068084;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88068088;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.current_instruction = 0x88068090;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	ctx.current_instruction = 0x880680A0;
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	ctx.current_instruction = 0x880680A4;
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	ctx.current_instruction = 0x880680A8;
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r11,24(r9)
	ctx.current_instruction = 0x880680AC;
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// stw r11,32(r9)
	ctx.current_instruction = 0x880680B0;
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x880680B4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r7,36(r8)
	ctx.current_instruction = 0x880680B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880680C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880680C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880680C8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880692B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880692B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880692B8) {
			switch (rex_dispatch_address) {
				case 0x880692D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880692B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880692D4: goto loc_880692D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880692BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880692C0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880692C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.current_instruction = 0x880692C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880692D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880692D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880692DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880694A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880694A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880694A8;
	ctx.current_instruction = 0x880694A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069640) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88069640;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88069640) {
			switch (rex_dispatch_address) {
				case 0x8806966C:
				case 0x8806968C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069640;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806966C: goto loc_8806966C;
		case 0x8806968C: goto loc_8806968C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88069644;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88069648;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806964C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88069650;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88069660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806966C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806966C:
	// lwz r9,228(r31)
	ctx.current_instruction = 0x8806966C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88069674;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r7,228(r31)
	ctx.current_instruction = 0x8806967C;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.current_instruction = 0x88069680;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806968C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806968C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88069690;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88069698;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806969C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C7D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C7D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C7D8;
	ctx.current_instruction = 0x8806C7D8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8806C7D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8806c928
	if (!ctx.cr6.eq) goto loc_8806C928;
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// lwz r10,30408(r3)
	ctx.current_instruction = 0x8806C7EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// lis r8,-30713
	ctx.r8.s64 = -2012807168;
	// addi r7,r11,-15728
	ctx.r7.s64 = ctx.r11.s64 + -15728;
	// addi r6,r8,-15728
	ctx.r6.s64 = ctx.r8.s64 + -15728;
	// stw r7,7064(r3)
	ctx.current_instruction = 0x8806C7FC;
	REX_STORE_U32(ctx.r3.u32 + 7064, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,7068(r3)
	ctx.current_instruction = 0x8806C804;
	REX_STORE_U32(ctx.r3.u32 + 7068, ctx.r6.u32);
	// beq cr6,0x8806c818
	if (ctx.cr6.eq) goto loc_8806C818;
	// lis r11,-30712
	ctx.r11.s64 = -2012741632;
	// addi r10,r11,11864
	ctx.r10.s64 = ctx.r11.s64 + 11864;
	// b 0x8806c820
	goto loc_8806C820;
loc_8806C818:
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// addi r10,r11,8632
	ctx.r10.s64 = ctx.r11.s64 + 8632;
loc_8806C820:
	// lwz r8,7064(r3)
	ctx.current_instruction = 0x8806C820;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7064);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,7060(r3)
	ctx.current_instruction = 0x8806C828;
	REX_STORE_U32(ctx.r3.u32 + 7060, ctx.r10.u32);
	// lwz r10,8104(r3)
	ctx.current_instruction = 0x8806C82C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C830;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C834;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C83C;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r8,7056(r3)
	ctx.current_instruction = 0x8806C840;
	REX_STORE_U32(ctx.r3.u32 + 7056, ctx.r8.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C844;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C848;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// bne cr6,0x8806c868
	if (!ctx.cr6.eq) goto loc_8806C868;
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C850;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r9,21096(r3)
	ctx.current_instruction = 0x8806C854;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r9.u32);
	// stw r9,2336(r3)
	ctx.current_instruction = 0x8806C858;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r9.u32);
	// stw r9,30220(r3)
	ctx.current_instruction = 0x8806C85C;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r9.u32);
	// stw r9,1608(r3)
	ctx.current_instruction = 0x8806C860;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r9.u32);
	// b 0x8806c928
	goto loc_8806C928;
loc_8806C868:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8806c888
	if (!ctx.cr6.eq) goto loc_8806C888;
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C870;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r9,21096(r3)
	ctx.current_instruction = 0x8806C874;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r9.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C878;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C87C;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C880;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x8806c928
	goto loc_8806C928;
loc_8806C888:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8806c8a8
	if (!ctx.cr6.eq) goto loc_8806C8A8;
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C890;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C894;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C898;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C89C;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C8A0;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x8806c928
	goto loc_8806C928;
loc_8806C8A8:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8806c8c8
	if (!ctx.cr6.eq) goto loc_8806C8C8;
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C8B0;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C8B4;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C8B8;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C8BC;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C8C0;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x8806c928
	goto loc_8806C928;
loc_8806C8C8:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8806c8d8
	if (ctx.cr6.eq) goto loc_8806C8D8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8806c928
	if (!ctx.cr6.eq) goto loc_8806C928;
loc_8806C8D8:
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806C8DC;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C8E0;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C8E4;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C8E8;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C8EC;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// lwz r10,18412(r10)
	ctx.current_instruction = 0x8806C8F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 18412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806c928
	if (!ctx.cr6.eq) goto loc_8806C928;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lwz r10,18416(r10)
	ctx.current_instruction = 0x8806C900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 18416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806c928
	if (!ctx.cr6.eq) goto loc_8806C928;
	// lbz r10,31536(r3)
	ctx.current_instruction = 0x8806C90C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 31536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8806c928
	if (!ctx.cr6.eq) goto loc_8806C928;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,31536(r3)
	ctx.current_instruction = 0x8806C91C;
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r11.u8);
	// stw r11,30992(r3)
	ctx.current_instruction = 0x8806C920;
	REX_STORE_U32(ctx.r3.u32 + 30992, ctx.r11.u32);
	// stw r10,30996(r3)
	ctx.current_instruction = 0x8806C924;
	REX_STORE_U32(ctx.r3.u32 + 30996, ctx.r10.u32);
loc_8806C928:
	// lbz r11,31536(r3)
	ctx.current_instruction = 0x8806C928;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 31536);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stb r9,31536(r3)
	ctx.current_instruction = 0x8806C934;
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r9.u8);
	// stb r9,31537(r3)
	ctx.current_instruction = 0x8806C938;
	REX_STORE_U8(ctx.r3.u32 + 31537, ctx.r9.u8);
	// stw r9,31532(r3)
	ctx.current_instruction = 0x8806C93C;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88070638) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88070638);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88070638;
	ctx.current_instruction = 0x88070638;
	// lis r11,-30679
	ctx.r11.s64 = -2010578944;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// addi r9,r11,16384
	ctx.r9.s64 = ctx.r11.s64 + 16384;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x88070648;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880709E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880709E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880709E8) {
			switch (rex_dispatch_address) {
				case 0x880709F0:
				case 0x880709F8:
				case 0x88070A70:
				case 0x88070FC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880709E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880709F0: goto loc_880709F0;
		case 0x880709F8: goto loc_880709F8;
		case 0x88070A70: goto loc_88070A70;
		case 0x88070FC0: goto loc_88070FC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880709F0;
	__savegprlr_23(ctx, base);
loc_880709F0:
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef288
	ctx.lr = 0x880709F8;
	__savefpr_28(ctx, base);
loc_880709F8:
	// ld r12,-4096(r1)
	ctx.current_instruction = 0x880709F8;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.current_instruction = 0x880709FC;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.current_instruction = 0x88070A00;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.current_instruction = 0x88070A04;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16656(r1)
	ctx.current_instruction = 0x88070A08;
	ea = -16656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r10,2608(r3)
	ctx.current_instruction = 0x88070A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2608);
	// lwz r11,2604(r3)
	ctx.current_instruction = 0x88070A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2604);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,2588(r3)
	ctx.current_instruction = 0x88070A1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lfd f31,1488(r8)
	ctx.current_instruction = 0x88070A2C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// li r27,256
	ctx.r27.s64 = 256;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// blt cr6,0x88070a54
	if (ctx.cr6.lt) goto loc_88070A54;
	// li r27,384
	ctx.r27.s64 = 384;
	// bge cr6,0x88070a5c
	if (!ctx.cr6.lt) goto loc_88070A5C;
loc_88070A54:
	// li r29,128
	ctx.r29.s64 = 128;
	// b 0x88070a60
	goto loc_88070A60;
loc_88070A5C:
	// li r29,256
	ctx.r29.s64 = 256;
loc_88070A60:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x88052d90
	ctx.lr = 0x88070A70;
	sub_88052D90(ctx, base);
loc_88070A70:
	// stfd f31,0(r28)
	ctx.current_instruction = 0x88070A70;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f31.u64);
	// stfd f31,8(r28)
	ctx.current_instruction = 0x88070A74;
	REX_STORE_U64(ctx.r28.u32 + 8, ctx.f31.u64);
	// stw r26,56(r28)
	ctx.current_instruction = 0x88070A78;
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r26.u32);
	// stfd f31,16(r28)
	ctx.current_instruction = 0x88070A7C;
	REX_STORE_U64(ctx.r28.u32 + 16, ctx.f31.u64);
	// stw r26,60(r28)
	ctx.current_instruction = 0x88070A80;
	REX_STORE_U32(ctx.r28.u32 + 60, ctx.r26.u32);
	// stfd f31,24(r28)
	ctx.current_instruction = 0x88070A84;
	REX_STORE_U64(ctx.r28.u32 + 24, ctx.f31.u64);
	// stw r26,64(r28)
	ctx.current_instruction = 0x88070A88;
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r26.u32);
	// stfd f31,48(r28)
	ctx.current_instruction = 0x88070A8C;
	REX_STORE_U64(ctx.r28.u32 + 48, ctx.f31.u64);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88070A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x88070d40
	if (ctx.cr6.lt) goto loc_88070D40;
	// lwz r6,2544(r31)
	ctx.current_instruction = 0x88070AA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r4,r3,-3
	ctx.r4.s64 = ctx.r3.s64 + -3;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_88070AB0:
	// lhzx r11,r7,r6
	ctx.current_instruction = 0x88070AB0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x88070ad8
	if (!ctx.cr6.eq) goto loc_88070AD8;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88070AC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,160(r1)
	ctx.current_instruction = 0x88070AD0;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x88070b50
	goto loc_88070B50;
loc_88070AD8:
	// srawi r24,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 31;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88070ADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// xor r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// lhzx r9,r9,r7
	ctx.current_instruction = 0x88070AEC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r11,136(r1)
	ctx.current_instruction = 0x88070AF8;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.current_instruction = 0x88070AFC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// fadd f31,f13,f31
	ctx.f31.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fmadd f30,f13,f13,f30
	ctx.f30.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f30.f64);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,144(r1)
	ctx.current_instruction = 0x88070B1C;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f12,144(r1)
	ctx.current_instruction = 0x88070B20;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fmadd f28,f11,f11,f28
	ctx.f28.f64 = std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f28.f64);
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x88070B38;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88070B3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88070B44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	ctx.current_instruction = 0x88070B4C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_88070B50:
	// lhz r11,2(r8)
	ctx.current_instruction = 0x88070B50;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x88070b74
	if (!ctx.cr6.eq) goto loc_88070B74;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88070B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,160(r1)
	ctx.current_instruction = 0x88070B6C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x88070bf0
	goto loc_88070BF0;
loc_88070B74:
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88070B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lhz r10,2(r9)
	ctx.current_instruction = 0x88070B8C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// std r9,120(r1)
	ctx.current_instruction = 0x88070B94;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// std r10,112(r1)
	ctx.current_instruction = 0x88070BAC;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.current_instruction = 0x88070BB0;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,120(r1)
	ctx.current_instruction = 0x88070BB8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmadd f28,f11,f11,f28
	ctx.f28.f64 = std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f28.f64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f31,f13,f31
	ctx.f31.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fmadd f30,f13,f13,f30
	ctx.f30.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f30.f64);
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x88070BD8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88070BDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x88070BE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	ctx.current_instruction = 0x88070BEC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_88070BF0:
	// addi r8,r7,6
	ctx.r8.s64 = ctx.r7.s64 + 6;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// lhzx r11,r6,r9
	ctx.current_instruction = 0x88070BF8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x88070c1c
	if (!ctx.cr6.eq) goto loc_88070C1C;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88070C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,160(r1)
	ctx.current_instruction = 0x88070C14;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x88070c94
	goto loc_88070C94;
loc_88070C1C:
	// srawi r23,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 31;
	// lwz r24,2548(r31)
	ctx.current_instruction = 0x88070C20;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// xor r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r23.u64;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lhzx r9,r24,r9
	ctx.current_instruction = 0x88070C30;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r9.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r11,128(r1)
	ctx.current_instruction = 0x88070C3C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.current_instruction = 0x88070C40;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// fadd f31,f13,f31
	ctx.f31.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fmadd f30,f13,f13,f30
	ctx.f30.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f30.f64);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	ctx.current_instruction = 0x88070C60;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x88070C64;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fmadd f28,f11,f11,f28
	ctx.f28.f64 = std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f28.f64);
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x88070C7C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88070C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88070C88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	ctx.current_instruction = 0x88070C90;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_88070C94:
	// lhzx r11,r6,r8
	ctx.current_instruction = 0x88070C94;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x88070cb8
	if (!ctx.cr6.eq) goto loc_88070CB8;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88070CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,160(r1)
	ctx.current_instruction = 0x88070CB0;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x88070d30
	goto loc_88070D30;
loc_88070CB8:
	// srawi r24,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 31;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88070CBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// xor r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r24.u64;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r24.u64;
	// lhzx r9,r9,r8
	ctx.current_instruction = 0x88070CCC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// std r8,104(r1)
	ctx.current_instruction = 0x88070CD8;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	ctx.current_instruction = 0x88070CEC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x88070CF0;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,104(r1)
	ctx.current_instruction = 0x88070CF8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmadd f28,f11,f11,f28
	ctx.f28.f64 = std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f28.f64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f31,f13,f31
	ctx.f31.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fmadd f30,f13,f13,f30
	ctx.f30.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f30.f64);
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x88070D18;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88070D1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x88070D24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	ctx.current_instruction = 0x88070D2C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_88070D30:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88070ab0
	if (ctx.cr6.lt) goto loc_88070AB0;
loc_88070D40:
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x88070dfc
	if (!ctx.cr6.lt) goto loc_88070DFC;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x88070D4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88070D58:
	// lhzx r11,r7,r8
	ctx.current_instruction = 0x88070D58;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x88070d7c
	if (!ctx.cr6.eq) goto loc_88070D7C;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88070D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,160(r1)
	ctx.current_instruction = 0x88070D74;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x88070df4
	goto loc_88070DF4;
loc_88070D7C:
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88070D7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lhzx r10,r9,r8
	ctx.current_instruction = 0x88070D90;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r9,88(r1)
	ctx.current_instruction = 0x88070D9C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	ctx.current_instruction = 0x88070DB0;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x88070DB4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,104(r1)
	ctx.current_instruction = 0x88070DBC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f31,f13,f31
	ctx.f31.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fmadd f30,f13,f13,f30
	ctx.f30.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f30.f64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fmadd f28,f11,f11,f28
	ctx.f28.f64 = std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f28.f64);
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	ctx.current_instruction = 0x88070DDC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r6,100(r1)
	ctx.current_instruction = 0x88070DE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x88070DE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stwx r5,r10,r11
	ctx.current_instruction = 0x88070DF0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
loc_88070DF4:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x88070d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88070D58;
loc_88070DFC:
	// subf. r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88070e64
	if (ctx.cr0.eq) goto loc_88070E64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,88(r1)
	ctx.current_instruction = 0x88070E0C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x88070E10;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,8624(r10)
	ctx.current_instruction = 0x88070E18;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// stfd f11,0(r28)
	ctx.current_instruction = 0x88070E24;
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f11.u64);
	// fmul f10,f12,f29
	ctx.f10.f64 = ctx.f12.f64 * ctx.f29.f64;
	// stfd f10,8(r28)
	ctx.current_instruction = 0x88070E2C;
	REX_STORE_U64(ctx.r28.u32 + 8, ctx.f10.u64);
	// fmul f9,f11,f11
	ctx.f9.f64 = ctx.f11.f64 * ctx.f11.f64;
	// fmul f8,f10,f10
	ctx.f8.f64 = ctx.f10.f64 * ctx.f10.f64;
	// fmsub f7,f12,f30,f9
	ctx.f7.f64 = std::fma(ctx.f12.f64, ctx.f30.f64, -ctx.f9.f64);
	// stfd f7,16(r28)
	ctx.current_instruction = 0x88070E3C;
	REX_STORE_U64(ctx.r28.u32 + 16, ctx.f7.u64);
	// fmsub f6,f12,f28,f8
	ctx.f6.f64 = std::fma(ctx.f12.f64, ctx.f28.f64, -ctx.f8.f64);
	// stfd f6,24(r28)
	ctx.current_instruction = 0x88070E44;
	REX_STORE_U64(ctx.r28.u32 + 24, ctx.f6.u64);
	// lwz r9,728(r31)
	ctx.current_instruction = 0x88070E48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,88(r1)
	ctx.current_instruction = 0x88070E50;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f5,88(r1)
	ctx.current_instruction = 0x88070E54;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fdiv f3,f13,f4
	ctx.f3.f64 = ctx.f13.f64 / ctx.f4.f64;
	// stfd f3,48(r28)
	ctx.current_instruction = 0x88070E60;
	REX_STORE_U64(ctx.r28.u32 + 48, ctx.f3.u64);
loc_88070E64:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x88070ed4
	if (!ctx.cr6.gt) goto loc_88070ED4;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x88070eb4
	if (ctx.cr6.lt) goto loc_88070EB4;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
loc_88070E98:
	// lwz r6,4(r10)
	ctx.current_instruction = 0x88070E98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r7,8(r10)
	ctx.current_instruction = 0x88070EA0;
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88070e98
	if (ctx.cr6.lt) goto loc_88070E98;
loc_88070EB4:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88070ecc
	if (!ctx.cr6.lt) goto loc_88070ECC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r31,r10,r7
	ctx.current_instruction = 0x88070EC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_88070ECC:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_88070ED4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88070f40
	if (!ctx.cr6.lt) goto loc_88070F40;
	// subf r10,r11,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x88070f20
	if (ctx.cr6.lt) goto loc_88070F20;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_88070F04:
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88070F04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r9,8(r10)
	ctx.current_instruction = 0x88070F0C;
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88070f04
	if (ctx.cr6.lt) goto loc_88070F04;
loc_88070F20:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88070f38
	if (!ctx.cr6.lt) goto loc_88070F38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r10,r9
	ctx.current_instruction = 0x88070F34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_88070F38:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_88070F40:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88070fa8
	if (!ctx.cr6.lt) goto loc_88070FA8;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x88070f8c
	if (ctx.cr6.lt) goto loc_88070F8C;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r25,-1
	ctx.r5.s64 = ctx.r25.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_88070F70:
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88070F70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r9,8(r10)
	ctx.current_instruction = 0x88070F78;
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88070f70
	if (ctx.cr6.lt) goto loc_88070F70;
loc_88070F8C:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88070fa0
	if (!ctx.cr6.lt) goto loc_88070FA0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r11,r10
	ctx.current_instruction = 0x88070F9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_88070FA0:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_88070FA8:
	// stw r31,56(r28)
	ctx.current_instruction = 0x88070FA8;
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r31.u32);
	// stw r3,60(r28)
	ctx.current_instruction = 0x88070FAC;
	REX_STORE_U32(ctx.r28.u32 + 60, ctx.r3.u32);
	// stw r4,64(r28)
	ctx.current_instruction = 0x88070FB0;
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r4.u32);
	// addi r1,r1,16656
	ctx.r1.s64 = ctx.r1.s64 + 16656;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef2d4
	ctx.lr = 0x88070FC0;
	__restfpr_28(ctx, base);
loc_88070FC0:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880856C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880856C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880856C8) {
			switch (rex_dispatch_address) {
				case 0x880856D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880856C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880856D0: goto loc_880856D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880856D0;
	__savegprlr_19(ctx, base);
loc_880856D0:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880856E4:
	// lbz r7,29(r11)
	ctx.current_instruction = 0x880856E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r9,31(r11)
	ctx.current_instruction = 0x880856E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbz r10,30(r11)
	ctx.current_instruction = 0x880856F0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r26,27(r11)
	ctx.current_instruction = 0x880856F4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r25,26(r11)
	ctx.current_instruction = 0x880856F8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// mullw r29,r10,r10
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// lbz r24,25(r11)
	ctx.current_instruction = 0x88085700;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r22,23(r11)
	ctx.current_instruction = 0x88085704;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r21,22(r11)
	ctx.current_instruction = 0x88085708;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r19,20(r11)
	ctx.current_instruction = 0x8808570C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r7,17(r11)
	ctx.current_instruction = 0x88085710;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r27,28(r11)
	ctx.current_instruction = 0x88085714;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r23,24(r11)
	ctx.current_instruction = 0x88085718;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r20,21(r11)
	ctx.current_instruction = 0x8808571C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r4,19(r11)
	ctx.current_instruction = 0x88085720;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r5,18(r11)
	ctx.current_instruction = 0x88085724;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// mullw r3,r7,r7
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lbzu r6,16(r11)
	ctx.current_instruction = 0x8808572C;
	ea = 16 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r28,r6,r6
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r3,r5,r5
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mullw r3,r4,r4
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r3,r19,r19
	ctx.r3.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r19.s32);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r3,r20,r20
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r20.s32);
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r3,r21,r21
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r5,r22,r22
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r22.s32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r28,r6,r22
	ctx.r28.u64 = ctx.r6.u64 + ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mullw r5,r23,r23
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r23.s32);
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r4,r24
	ctx.r3.u64 = ctx.r4.u64 + ctx.r24.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// mullw r4,r24,r24
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r24.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r4,r25,r25
	ctx.r4.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mullw r4,r26,r26
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r26.s32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r6,r3,r27
	ctx.r6.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r7,r7,r7
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r7,r9,r9
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bdnz 0x880856e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880856E4;
	// mullw r11,r31,r31
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// subf r3,r10,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r10.u64;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880941F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880941F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880941F8) {
			switch (rex_dispatch_address) {
				case 0x88094200:
				case 0x880942E4:
				case 0x8809432C:
				case 0x8809435C:
				case 0x880943A0:
				case 0x880943E8:
				case 0x88094418:
				case 0x88094444:
				case 0x88094574:
				case 0x8809466C:
				case 0x8809471C:
				case 0x8809475C:
				case 0x880947A4:
				case 0x880947C0:
				case 0x880947E8:
				case 0x88094830:
				case 0x8809484C:
				case 0x88094878:
				case 0x880949A8:
				case 0x88094A5C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880941F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88094200: goto loc_88094200;
		case 0x880942E4: goto loc_880942E4;
		case 0x8809432C: goto loc_8809432C;
		case 0x8809435C: goto loc_8809435C;
		case 0x880943A0: goto loc_880943A0;
		case 0x880943E8: goto loc_880943E8;
		case 0x88094418: goto loc_88094418;
		case 0x88094444: goto loc_88094444;
		case 0x88094574: goto loc_88094574;
		case 0x8809466C: goto loc_8809466C;
		case 0x8809471C: goto loc_8809471C;
		case 0x8809475C: goto loc_8809475C;
		case 0x880947A4: goto loc_880947A4;
		case 0x880947C0: goto loc_880947C0;
		case 0x880947E8: goto loc_880947E8;
		case 0x88094830: goto loc_88094830;
		case 0x8809484C: goto loc_8809484C;
		case 0x88094878: goto loc_88094878;
		case 0x880949A8: goto loc_880949A8;
		case 0x88094A5C: goto loc_88094A5C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88094200;
	__savegprlr_14(ctx, base);
loc_88094200:
	// stwu r1,-464(r1)
	ctx.current_instruction = 0x88094200;
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,532(r1)
	ctx.current_instruction = 0x88094204;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r9.u32);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r9,564(r1)
	ctx.current_instruction = 0x8809420C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lis r26,4095
	ctx.r26.s64 = 268369920;
	// addi r19,r11,6848
	ctx.r19.s64 = ctx.r11.s64 + 6848;
	// stw r10,540(r1)
	ctx.current_instruction = 0x88094218;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lwz r10,588(r1)
	ctx.current_instruction = 0x8809421C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// li r15,0
	ctx.r15.s64 = 0;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// lwz r24,628(r1)
	ctx.current_instruction = 0x88094228;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r14,556(r1)
	ctx.current_instruction = 0x8809422C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r23,8(r9)
	ctx.current_instruction = 0x88094234;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r22,12(r9)
	ctx.current_instruction = 0x8809423C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r9,572(r1)
	ctx.current_instruction = 0x88094244;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// stw r4,492(r1)
	ctx.current_instruction = 0x8809424C;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r5,500(r1)
	ctx.current_instruction = 0x88094254;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,524(r1)
	ctx.current_instruction = 0x8809425C;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// stw r15,256(r1)
	ctx.current_instruction = 0x88094264;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
	// addi r30,r7,256
	ctx.r30.s64 = ctx.r7.s64 + 256;
	// lwz r21,8(r9)
	ctx.current_instruction = 0x8809426C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r20,12(r9)
	ctx.current_instruction = 0x88094274;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,636(r1)
	ctx.current_instruction = 0x88094278;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// stw r15,244(r1)
	ctx.current_instruction = 0x8809427C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// stw r15,248(r1)
	ctx.current_instruction = 0x88094280;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r15.u32);
	// stw r15,252(r1)
	ctx.current_instruction = 0x88094284;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r15.u32);
	// stw r26,240(r1)
	ctx.current_instruction = 0x88094288;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// lwz r11,8(r9)
	ctx.current_instruction = 0x8809428C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,260(r1)
	ctx.current_instruction = 0x88094290;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// ble cr6,0x880945ec
	if (!ctx.cr6.gt) goto loc_880945EC;
	// lwz r29,604(r1)
	ctx.current_instruction = 0x88094298;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r16,596(r1)
	ctx.current_instruction = 0x880942A0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// stw r10,256(r1)
	ctx.current_instruction = 0x880942A4;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// stw r29,240(r1)
	ctx.current_instruction = 0x880942A8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
loc_880942AC:
	// lhz r11,0(r29)
	ctx.current_instruction = 0x880942AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lhz r10,2(r29)
	ctx.current_instruction = 0x880942B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,540(r1)
	ctx.current_instruction = 0x880942C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r6,532(r1)
	ctx.current_instruction = 0x880942C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,224(r1)
	ctx.current_instruction = 0x880942D4;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,228(r1)
	ctx.current_instruction = 0x880942DC;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880942E4;
	sub_8810A970(ctx, base);
loc_880942E4:
	// lwz r8,228(r1)
	ctx.current_instruction = 0x880942E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880942E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,224(r1)
	ctx.current_instruction = 0x880942F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x88094330
	if (!ctx.cr6.eq) goto loc_88094330;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88094304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8809430C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x88094314;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809432C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809432C:
	// b 0x8809435c
	goto loc_8809435C;
loc_88094330:
	// stw r27,84(r1)
	ctx.current_instruction = 0x88094330;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x88094338;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809435C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809435C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880945c4
	if (!ctx.cr6.gt) goto loc_880945C4;
	// lwz r18,612(r1)
	ctx.current_instruction = 0x88094364;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
loc_88094368:
	// lhz r11,0(r18)
	ctx.current_instruction = 0x88094368;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// lhz r10,2(r18)
	ctx.current_instruction = 0x88094370;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 2);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,540(r1)
	ctx.current_instruction = 0x8809437C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r6,532(r1)
	ctx.current_instruction = 0x88094384;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,232(r1)
	ctx.current_instruction = 0x88094390;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,236(r1)
	ctx.current_instruction = 0x88094398;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880943A0;
	sub_8810A970(ctx, base);
loc_880943A0:
	// lwz r8,236(r1)
	ctx.current_instruction = 0x880943A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880943A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,232(r1)
	ctx.current_instruction = 0x880943AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880943ec
	if (!ctx.cr6.eq) goto loc_880943EC;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880943C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880943C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x880943D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880943E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880943E8:
	// b 0x88094418
	goto loc_88094418;
loc_880943EC:
	// stw r27,84(r1)
	ctx.current_instruction = 0x880943EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880943F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88094418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094418:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88094418;
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
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x88094444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094444:
	// lwz r7,2604(r31)
	ctx.current_instruction = 0x88094444;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.current_instruction = 0x88094448;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r11,224(r1)
	ctx.current_instruction = 0x8809444C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// subf r10,r23,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r23.u64;
	// lwz r9,228(r1)
	ctx.current_instruction = 0x88094454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// subf r8,r22,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r22.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,2612(r31)
	ctx.current_instruction = 0x88094460;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,2616(r31)
	ctx.current_instruction = 0x88094468;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r29,r7,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r21,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subf r8,r20,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r20.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// srawi r14,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r3.s32 >> 31;
	// lwz r11,232(r1)
	ctx.current_instruction = 0x8809448C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r9,236(r1)
	ctx.current_instruction = 0x88094490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r28.u64;
	// xor r4,r3,r14
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r14.u64;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r10,r14,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r14.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880944f4
	if (ctx.cr6.gt) goto loc_880944F4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880944f4
	if (ctx.cr6.gt) goto loc_880944F4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r19
	ctx.current_instruction = 0x880944D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r6,r10,r19
	ctx.current_instruction = 0x880944D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r24
	ctx.current_instruction = 0x880944E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r10,r4,r24
	ctx.current_instruction = 0x880944E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880944fc
	goto loc_880944FC;
loc_880944F4:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x880944F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880944FC:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809454c
	if (ctx.cr6.gt) goto loc_8809454C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8809454c
	if (ctx.cr6.gt) goto loc_8809454C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.current_instruction = 0x8809452C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.current_instruction = 0x88094530;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.current_instruction = 0x8809453C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.current_instruction = 0x88094540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094554
	goto loc_88094554;
loc_8809454C:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x8809454C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094554:
	// lwz r11,260(r1)
	ctx.current_instruction = 0x88094554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,580(r1)
	ctx.current_instruction = 0x88094560;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,492(r1)
	ctx.current_instruction = 0x88094568;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88094574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094574:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880945a4
	if (!ctx.cr6.lt) goto loc_880945A4;
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88094584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r9,232(r1)
	ctx.current_instruction = 0x8809458C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r8,236(r1)
	ctx.current_instruction = 0x88094590;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r15,224(r1)
	ctx.current_instruction = 0x88094594;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r10,244(r1)
	ctx.current_instruction = 0x88094598;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,248(r1)
	ctx.current_instruction = 0x8809459C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stw r8,252(r1)
	ctx.current_instruction = 0x880945A0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
loc_880945A4:
	// lwz r14,556(r1)
	ctx.current_instruction = 0x880945A4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// bne 0x88094368
	if (!ctx.cr0.eq) goto loc_88094368;
	// lwz r18,500(r1)
	ctx.current_instruction = 0x880945B4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r28,256(r1)
	ctx.current_instruction = 0x880945B8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r16,596(r1)
	ctx.current_instruction = 0x880945BC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r29,240(r1)
	ctx.current_instruction = 0x880945C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_880945C4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,256(r1)
	ctx.current_instruction = 0x880945CC;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r29,240(r1)
	ctx.current_instruction = 0x880945D0;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// bne 0x880942ac
	if (!ctx.cr0.eq) goto loc_880942AC;
	// lwz r16,492(r1)
	ctx.current_instruction = 0x880945D8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r9,636(r1)
	ctx.current_instruction = 0x880945DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r29,524(r1)
	ctx.current_instruction = 0x880945E0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r26,240(r1)
	ctx.current_instruction = 0x880945E4;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// stw r15,256(r1)
	ctx.current_instruction = 0x880945E8;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
loc_880945EC:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880945EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// stw r9,164(r1)
	ctx.current_instruction = 0x880945F8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stw r6,204(r1)
	ctx.current_instruction = 0x88094600;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stw r5,196(r1)
	ctx.current_instruction = 0x88094608;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r4,188(r1)
	ctx.current_instruction = 0x8809460C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// stw r3,180(r1)
	ctx.current_instruction = 0x88094614;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r7,r19,-1424
	ctx.r7.s64 = ctx.r19.s64 + -1424;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r10,248(r1)
	ctx.current_instruction = 0x88094620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x88094628;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r29,212(r1)
	ctx.current_instruction = 0x88094630;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r24,156(r1)
	ctx.current_instruction = 0x88094638;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,172(r1)
	ctx.current_instruction = 0x88094640;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r14,148(r1)
	ctx.current_instruction = 0x88094644;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r30,140(r1)
	ctx.current_instruction = 0x88094648;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x8809464C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r20,124(r1)
	ctx.current_instruction = 0x88094650;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r21,116(r1)
	ctx.current_instruction = 0x88094654;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x88094658;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r23,100(r1)
	ctx.current_instruction = 0x8809465C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r26,92(r1)
	ctx.current_instruction = 0x88094660;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88094664;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880892d0
	ctx.lr = 0x8809466C;
	sub_880892D0(ctx, base);
loc_8809466C:
	// lwz r26,548(r1)
	ctx.current_instruction = 0x8809466C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x88094728
	if (!ctx.cr6.eq) goto loc_88094728;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809467C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x88094684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r9,264(r1)
	ctx.current_instruction = 0x88094688;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,268(r1)
	ctx.current_instruction = 0x88094690;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// addi r28,r1,240
	ctx.r28.s64 = ctx.r1.s64 + 240;
	// stw r7,272(r1)
	ctx.current_instruction = 0x88094698;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// addi r15,r1,252
	ctx.r15.s64 = ctx.r1.s64 + 252;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880946A0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r14,r1,248
	ctx.r14.s64 = ctx.r1.s64 + 248;
	// stw r28,204(r1)
	ctx.current_instruction = 0x880946A8;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// addi r7,r19,-1360
	ctx.r7.s64 = ctx.r19.s64 + -1360;
	// stw r10,84(r1)
	ctx.current_instruction = 0x880946B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r11,636(r1)
	ctx.current_instruction = 0x880946B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,248(r1)
	ctx.current_instruction = 0x880946C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880946CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,256(r1)
	ctx.current_instruction = 0x880946D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r25,132(r1)
	ctx.current_instruction = 0x880946D4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r11,164(r1)
	ctx.current_instruction = 0x880946D8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r21,116(r1)
	ctx.current_instruction = 0x880946DC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x880946E0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r23,100(r1)
	ctx.current_instruction = 0x880946E4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r20,124(r1)
	ctx.current_instruction = 0x880946E8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r29,212(r1)
	ctx.current_instruction = 0x880946EC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r15,196(r1)
	ctx.current_instruction = 0x880946F0;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// stw r14,188(r1)
	ctx.current_instruction = 0x880946F4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// stw r24,156(r1)
	ctx.current_instruction = 0x880946F8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// lwz r28,264(r1)
	ctx.current_instruction = 0x880946FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r30,140(r1)
	ctx.current_instruction = 0x88094700;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x88094704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r28,180(r1)
	ctx.current_instruction = 0x88094708;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lwz r28,268(r1)
	ctx.current_instruction = 0x8809470C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stw r11,148(r1)
	ctx.current_instruction = 0x88094710;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r28,172(r1)
	ctx.current_instruction = 0x88094714;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// bl 0x880892d0
	ctx.lr = 0x8809471C;
	sub_880892D0(ctx, base);
loc_8809471C:
	// lwz r16,492(r1)
	ctx.current_instruction = 0x8809471C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r18,500(r1)
	ctx.current_instruction = 0x88094720;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r14,556(r1)
	ctx.current_instruction = 0x88094724;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
loc_88094728:
	// lwz r29,620(r1)
	ctx.current_instruction = 0x88094728;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lwz r15,540(r1)
	ctx.current_instruction = 0x88094730;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r28,532(r1)
	ctx.current_instruction = 0x88094738;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88094748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.current_instruction = 0x8809474C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,224(r1)
	ctx.current_instruction = 0x88094750;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r10,228(r1)
	ctx.current_instruction = 0x88094754;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x8809475C;
	sub_8810A970(ctx, base);
loc_8809475C:
	// lwz r8,228(r1)
	ctx.current_instruction = 0x8809475C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,224(r1)
	ctx.current_instruction = 0x88094760;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88094768;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880947a8
	if (!ctx.cr6.eq) goto loc_880947A8;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x8809478C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	ctx.current_instruction = 0x88094794;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880947A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880947A4:
	// b 0x880947c0
	goto loc_880947C0;
loc_880947A8:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880947A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880947B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880947C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880947C0:
	// lwz r11,8(r29)
	ctx.current_instruction = 0x880947C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r10,12(r29)
	ctx.current_instruction = 0x880947C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,232(r1)
	ctx.current_instruction = 0x880947DC;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r10,236(r1)
	ctx.current_instruction = 0x880947E0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x880947E8;
	sub_8810A970(ctx, base);
loc_880947E8:
	// lwz r8,236(r1)
	ctx.current_instruction = 0x880947E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880947EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,232(r1)
	ctx.current_instruction = 0x880947F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880947FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x88094834
	if (!ctx.cr6.eq) goto loc_88094834;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88094818;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	ctx.current_instruction = 0x88094820;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88094830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094830:
	// b 0x8809484c
	goto loc_8809484C;
loc_88094834:
	// stw r27,84(r1)
	ctx.current_instruction = 0x88094834;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x8809483C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8809484C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809484C:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x8809484C;
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
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x88094878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094878:
	// lwz r7,2604(r31)
	ctx.current_instruction = 0x88094878;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.current_instruction = 0x8809487C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r8,224(r1)
	ctx.current_instruction = 0x88094880;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// subf r9,r23,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r23.u64;
	// lwz r5,2612(r31)
	ctx.current_instruction = 0x88094888;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// subf r11,r22,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r22.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88094894;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,2616(r31)
	ctx.current_instruction = 0x88094898;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r9,r21,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subf r11,r20,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r20.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lwz r8,232(r1)
	ctx.current_instruction = 0x880948BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,236(r1)
	ctx.current_instruction = 0x880948C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// xor r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// xor r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88094928
	if (ctx.cr6.gt) goto loc_88094928;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88094928
	if (ctx.cr6.gt) goto loc_88094928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r19
	ctx.current_instruction = 0x88094908;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r6,r10,r19
	ctx.current_instruction = 0x8809490C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r24
	ctx.current_instruction = 0x88094918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r11,r4,r24
	ctx.current_instruction = 0x8809491C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094930
	goto loc_88094930;
loc_88094928:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x88094928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094930:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88094980
	if (ctx.cr6.gt) goto loc_88094980;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88094980
	if (ctx.cr6.gt) goto loc_88094980;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.current_instruction = 0x88094960;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.current_instruction = 0x88094964;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.current_instruction = 0x88094970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.current_instruction = 0x88094974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094988
	goto loc_88094988;
loc_88094980:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x88094980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094988:
	// lwz r11,260(r1)
	ctx.current_instruction = 0x88094988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,580(r1)
	ctx.current_instruction = 0x88094994;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880949A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880949A8:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,240(r1)
	ctx.current_instruction = 0x880949AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880949d4
	if (!ctx.cr6.lt) goto loc_880949D4;
	// lwz r30,224(r1)
	ctx.current_instruction = 0x880949BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r29,228(r1)
	ctx.current_instruction = 0x880949C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,232(r1)
	ctx.current_instruction = 0x880949C4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r27,236(r1)
	ctx.current_instruction = 0x880949C8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,240(r1)
	ctx.current_instruction = 0x880949CC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x880949e4
	goto loc_880949E4;
loc_880949D4:
	// lwz r30,256(r1)
	ctx.current_instruction = 0x880949D4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r29,244(r1)
	ctx.current_instruction = 0x880949D8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,248(r1)
	ctx.current_instruction = 0x880949DC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r27,252(r1)
	ctx.current_instruction = 0x880949E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880949E4:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880949E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88094a5c
	if (ctx.cr6.eq) goto loc_88094A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,564(r1)
	ctx.current_instruction = 0x880949F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r31,636(r1)
	ctx.current_instruction = 0x880949F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r23,r1,288
	ctx.r23.s64 = ctx.r1.s64 + 288;
	// stw r30,288(r1)
	ctx.current_instruction = 0x88094A04;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stw r9,148(r1)
	ctx.current_instruction = 0x88094A08;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r14,92(r1)
	ctx.current_instruction = 0x88094A10;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r8,100(r1)
	ctx.current_instruction = 0x88094A18;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r27,300(r1)
	ctx.current_instruction = 0x88094A20;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r24,124(r1)
	ctx.current_instruction = 0x88094A28;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x88094A2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r31,132(r1)
	ctx.current_instruction = 0x88094A30;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r29,292(r1)
	ctx.current_instruction = 0x88094A34;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r23,140(r1)
	ctx.current_instruction = 0x88094A38;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r28,296(r1)
	ctx.current_instruction = 0x88094A3C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x88094A40;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,572(r1)
	ctx.current_instruction = 0x88094A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r9,532(r1)
	ctx.current_instruction = 0x88094A48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r8,524(r1)
	ctx.current_instruction = 0x88094A4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r10,108(r1)
	ctx.current_instruction = 0x88094A50;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,540(r1)
	ctx.current_instruction = 0x88094A54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x88093bc8
	ctx.lr = 0x88094A5C;
	sub_88093BC8(ctx, base);
loc_88094A5C:
	// lwz r11,676(r1)
	ctx.current_instruction = 0x88094A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r10,240(r1)
	ctx.current_instruction = 0x88094A60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,644(r1)
	ctx.current_instruction = 0x88094A64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r8,652(r1)
	ctx.current_instruction = 0x88094A68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r7,660(r1)
	ctx.current_instruction = 0x88094A6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r6,668(r1)
	ctx.current_instruction = 0x88094A70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88094A74;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,0(r9)
	ctx.current_instruction = 0x88094A78;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r29,0(r8)
	ctx.current_instruction = 0x88094A7C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stw r28,0(r7)
	ctx.current_instruction = 0x88094A80;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r27,0(r6)
	ctx.current_instruction = 0x88094A84;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BEF28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BEF28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BEF28) {
			switch (rex_dispatch_address) {
				case 0x880BEF30:
				case 0x880BEFA0:
				case 0x880BEFC4:
				case 0x880BEFE4:
				case 0x880BEFF4:
				case 0x880BF06C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BEF28;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BEF30: goto loc_880BEF30;
		case 0x880BEFA0: goto loc_880BEFA0;
		case 0x880BEFC4: goto loc_880BEFC4;
		case 0x880BEFE4: goto loc_880BEFE4;
		case 0x880BEFF4: goto loc_880BEFF4;
		case 0x880BF06C: goto loc_880BF06C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880BEF30;
	__savegprlr_24(ctx, base);
loc_880BEF30:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880BEF30;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.current_instruction = 0x880BEF34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r10,1416(r11)
	ctx.current_instruction = 0x880BEF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1416);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x880bf264
	if (ctx.cr6.lt) goto loc_880BF264;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bge cr6,0x880bf264
	if (!ctx.cr6.lt) goto loc_880BF264;
	// lwz r3,60(r3)
	ctx.current_instruction = 0x880BEF60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880befac
	if (!ctx.cr6.eq) goto loc_880BEFAC;
	// lwz r10,720(r11)
	ctx.current_instruction = 0x880BEF6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,64(r31)
	ctx.current_instruction = 0x880BEF78;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,31544(r11)
	ctx.current_instruction = 0x880BEF7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 31544);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,724(r11)
	ctx.current_instruction = 0x880BEF84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// beq cr6,0x880bef90
	if (ctx.cr6.eq) goto loc_880BEF90;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880BEF90:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880BEFA0;
	sub_88050340(ctx, base);
loc_880BEFA0:
	// stw r3,60(r31)
	ctx.current_instruction = 0x880BEFA0;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf264
	if (ctx.cr6.eq) goto loc_880BF264;
loc_880BEFAC:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BEFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x880BEFB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,724(r11)
	ctx.current_instruction = 0x880BEFB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x88052d90
	ctx.lr = 0x880BEFC4;
	sub_88052D90(ctx, base);
loc_880BEFC4:
	// lwz r7,68(r31)
	ctx.current_instruction = 0x880BEFC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,14
	ctx.r8.s64 = 14;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r8,72(r31)
	ctx.current_instruction = 0x880BEFD0;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880bf02c
	if (ctx.cr6.eq) goto loc_880BF02C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880bcf50
	ctx.lr = 0x880BEFE4;
	sub_880BCF50(ctx, base);
loc_880BEFE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf02c
	if (ctx.cr6.eq) goto loc_880BF02C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x880bd030
	ctx.lr = 0x880BEFF4;
	sub_880BD030(ctx, base);
loc_880BEFF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880bf02c
	if (ctx.cr6.eq) goto loc_880BF02C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880BEFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x880bf024
	if (!ctx.cr6.gt) goto loc_880BF024;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// ble cr6,0x880bf01c
	if (!ctx.cr6.gt) goto loc_880BF01C;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x880bf028
	goto loc_880BF028;
loc_880BF01C:
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x880bf028
	if (ctx.cr6.gt) goto loc_880BF028;
loc_880BF024:
	// li r11,14
	ctx.r11.s64 = 14;
loc_880BF028:
	// stw r11,72(r31)
	ctx.current_instruction = 0x880BF028;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880BF02C:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF02C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,724(r11)
	ctx.current_instruction = 0x880BF038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880bf0e8
	if (!ctx.cr6.gt) goto loc_880BF0E8;
loc_880BF044:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF044;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,720(r11)
	ctx.current_instruction = 0x880BF04C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880bf0d4
	if (!ctx.cr6.gt) goto loc_880BF0D4;
loc_880BF058:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880be5b0
	ctx.lr = 0x880BF06C;
	sub_880BE5B0(ctx, base);
loc_880BF06C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf0c0
	if (ctx.cr6.eq) goto loc_880BF0C0;
	// lwz r11,64(r31)
	ctx.current_instruction = 0x880BF074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// lwz r9,60(r31)
	ctx.current_instruction = 0x880BF07C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stbx r27,r8,r9
	ctx.current_instruction = 0x880BF09C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r27.u8);
	// bne cr6,0x880bf0c0
	if (!ctx.cr6.eq) goto loc_880BF0C0;
	// lwz r11,64(r31)
	ctx.current_instruction = 0x880BF0A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.current_instruction = 0x880BF0A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r9,r11,r10
	ctx.current_instruction = 0x880BF0B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 128;
	// stbx r8,r11,r10
	ctx.current_instruction = 0x880BF0BC;
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_880BF0C0:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,720(r11)
	ctx.current_instruction = 0x880BF0C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880bf058
	if (ctx.cr6.lt) goto loc_880BF058;
loc_880BF0D4:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,724(r11)
	ctx.current_instruction = 0x880BF0DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880bf044
	if (ctx.cr6.lt) goto loc_880BF044;
loc_880BF0E8:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,724(r11)
	ctx.current_instruction = 0x880BF0F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x880bf1b8
	if (!ctx.cr6.gt) goto loc_880BF1B8;
loc_880BF100:
	// lwz r10,56(r31)
	ctx.current_instruction = 0x880BF100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r10,720(r10)
	ctx.current_instruction = 0x880BF108;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 720);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x880bf1a0
	if (!ctx.cr6.gt) goto loc_880BF1A0;
loc_880BF118:
	// lwz r10,64(r31)
	ctx.current_instruction = 0x880BF118;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,60(r31)
	ctx.current_instruction = 0x880BF11C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,0(r8)
	ctx.current_instruction = 0x880BF12C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880bf188
	if (ctx.cr6.eq) goto loc_880BF188;
	// lbz r6,-1(r8)
	ctx.current_instruction = 0x880BF138;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880bf188
	if (!ctx.cr6.eq) goto loc_880BF188;
	// lbz r6,1(r8)
	ctx.current_instruction = 0x880BF144;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880bf188
	if (!ctx.cr6.eq) goto loc_880BF188;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbzx r4,r5,r11
	ctx.current_instruction = 0x880BF15C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880bf188
	if (!ctx.cr6.eq) goto loc_880BF188;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r4,r5,r11
	ctx.current_instruction = 0x880BF174;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880bf188
	if (!ctx.cr6.eq) goto loc_880BF188;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stb r25,0(r8)
	ctx.current_instruction = 0x880BF184;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r25.u8);
loc_880BF188:
	// lwz r10,56(r31)
	ctx.current_instruction = 0x880BF188;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,720(r10)
	ctx.current_instruction = 0x880BF190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 720);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880bf118
	if (ctx.cr6.lt) goto loc_880BF118;
loc_880BF1A0:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF1A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,724(r11)
	ctx.current_instruction = 0x880BF1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880bf100
	if (ctx.cr6.lt) goto loc_880BF100;
loc_880BF1B8:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF1B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mulli r9,r28,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(100));
	// lwz r8,720(r11)
	ctx.current_instruction = 0x880BF1C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// lwz r10,724(r11)
	ctx.current_instruction = 0x880BF1C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x880bf264
	if (ctx.cr6.lt) goto loc_880BF264;
	// mulli r8,r10,90
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(90));
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880bf264
	if (ctx.cr6.gt) goto loc_880BF264;
	// lwz r9,72(r31)
	ctx.current_instruction = 0x880BF1E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// ble cr6,0x880bf210
	if (!ctx.cr6.gt) goto loc_880BF210;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// cmplwi cr6,r9,20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20, ctx.xer);
	// lwz r9,1416(r11)
	ctx.current_instruction = 0x880BF1FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1416);
	// addi r11,r10,13360
	ctx.r11.s64 = ctx.r10.s64 + 13360;
	// ble cr6,0x880bf230
	if (!ctx.cr6.gt) goto loc_880BF230;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// b 0x880bf23c
	goto loc_880BF23C;
loc_880BF210:
	// subf r9,r26,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r26.u64;
	// mulli r8,r10,30
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(30));
	// mulli r7,r9,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// lwz r9,1416(r11)
	ctx.current_instruction = 0x880BF21C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1416);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// ble cr6,0x880bf238
	if (!ctx.cr6.gt) goto loc_880BF238;
	// addi r11,r10,13360
	ctx.r11.s64 = ctx.r10.s64 + 13360;
loc_880BF230:
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// b 0x880bf23c
	goto loc_880BF23C;
loc_880BF238:
	// addi r8,r10,13360
	ctx.r8.s64 = ctx.r10.s64 + 13360;
loc_880BF23C:
	// lbzx r7,r9,r8
	ctx.current_instruction = 0x880BF23C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r24)
	ctx.current_instruction = 0x880BF248;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880BF24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,1416(r11)
	ctx.current_instruction = 0x880BF250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1416);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r24)
	ctx.current_instruction = 0x880BF258;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880BF264:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4918) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C4918;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C4918) {
			switch (rex_dispatch_address) {
				case 0x880C4920:
				case 0x880C4A60:
				case 0x880C4B1C:
				case 0x880C4B44:
				case 0x880C4C74:
				case 0x880C4DD4:
				case 0x880C4DE8:
				case 0x880C4E00:
				case 0x880C4F68:
				case 0x880C4FF8:
				case 0x880C5044:
				case 0x880C5338:
				case 0x880C534C:
				case 0x880C5380:
				case 0x880C53C8:
				case 0x880C541C:
				case 0x880C5494:
				case 0x880C54D0:
				case 0x880C5530:
				case 0x880C559C:
				case 0x880C55CC:
				case 0x880C5628:
				case 0x880C5690:
				case 0x880C56FC:
				case 0x880C5714:
				case 0x880C5748:
				case 0x880C5764:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C4918;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C4920: goto loc_880C4920;
		case 0x880C4A60: goto loc_880C4A60;
		case 0x880C4B1C: goto loc_880C4B1C;
		case 0x880C4B44: goto loc_880C4B44;
		case 0x880C4C74: goto loc_880C4C74;
		case 0x880C4DD4: goto loc_880C4DD4;
		case 0x880C4DE8: goto loc_880C4DE8;
		case 0x880C4E00: goto loc_880C4E00;
		case 0x880C4F68: goto loc_880C4F68;
		case 0x880C4FF8: goto loc_880C4FF8;
		case 0x880C5044: goto loc_880C5044;
		case 0x880C5338: goto loc_880C5338;
		case 0x880C534C: goto loc_880C534C;
		case 0x880C5380: goto loc_880C5380;
		case 0x880C53C8: goto loc_880C53C8;
		case 0x880C541C: goto loc_880C541C;
		case 0x880C5494: goto loc_880C5494;
		case 0x880C54D0: goto loc_880C54D0;
		case 0x880C5530: goto loc_880C5530;
		case 0x880C559C: goto loc_880C559C;
		case 0x880C55CC: goto loc_880C55CC;
		case 0x880C5628: goto loc_880C5628;
		case 0x880C5690: goto loc_880C5690;
		case 0x880C56FC: goto loc_880C56FC;
		case 0x880C5714: goto loc_880C5714;
		case 0x880C5748: goto loc_880C5748;
		case 0x880C5764: goto loc_880C5764;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C4920;
	__savegprlr_14(ctx, base);
loc_880C4920:
	// stwu r1,-1248(r1)
	ctx.current_instruction = 0x880C4920;
	ea = -1248 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880C4924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,1372(r1)
	ctx.current_instruction = 0x880C492C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1372);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r6,1292(r1)
	ctx.current_instruction = 0x880C4938;
	REX_STORE_U32(ctx.r1.u32 + 1292, ctx.r6.u32);
	// stw r10,1324(r1)
	ctx.current_instruction = 0x880C493C;
	REX_STORE_U32(ctx.r1.u32 + 1324, ctx.r10.u32);
	// lwz r8,7764(r3)
	ctx.current_instruction = 0x880C4940;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lwz r10,796(r3)
	ctx.current_instruction = 0x880C4944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r6,744(r3)
	ctx.current_instruction = 0x880C4948;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 744);
	// lwz r15,6844(r3)
	ctx.current_instruction = 0x880C494C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// lwz r14,6848(r3)
	ctx.current_instruction = 0x880C4950;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 6848);
	// lwz r3,6852(r3)
	ctx.current_instruction = 0x880C4954;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 6852);
	// stw r4,1276(r1)
	ctx.current_instruction = 0x880C4958;
	REX_STORE_U32(ctx.r1.u32 + 1276, ctx.r4.u32);
	// lwz r4,31108(r31)
	ctx.current_instruction = 0x880C495C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31108);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,1284(r1)
	ctx.current_instruction = 0x880C4964;
	REX_STORE_U32(ctx.r1.u32 + 1284, ctx.r5.u32);
	// mulli r9,r9,276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// stw r15,168(r1)
	ctx.current_instruction = 0x880C496C;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// stw r14,160(r1)
	ctx.current_instruction = 0x880C4970;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// stw r3,152(r1)
	ctx.current_instruction = 0x880C4974;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r10,148(r1)
	ctx.current_instruction = 0x880C4978;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r30,144(r1)
	ctx.current_instruction = 0x880C4994;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r8,176(r1)
	ctx.current_instruction = 0x880C499C;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880c4f6c
	if (ctx.cr6.eq) goto loc_880C4F6C;
	// lwz r11,20268(r31)
	ctx.current_instruction = 0x880C49AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c4f6c
	if (!ctx.cr6.eq) goto loc_880C4F6C;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r30,136(r1)
	ctx.current_instruction = 0x880C49BC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,140(r1)
	ctx.current_instruction = 0x880C49C4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
loc_880C49C8:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880C49C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4a44
	if (ctx.cr6.eq) goto loc_880C4A44;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880C49D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4a44
	if (ctx.cr6.eq) goto loc_880C4A44;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x880C49E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,148(r1)
	ctx.current_instruction = 0x880C49E8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4a44
	if (ctx.cr6.eq) goto loc_880C4A44;
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x880C49F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r8,1384(r31)
	ctx.current_instruction = 0x880C49FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r15,r10,r15
	ctx.r15.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r7,1348(r1)
	ctx.current_instruction = 0x880C4A04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,1356(r1)
	ctx.current_instruction = 0x880C4A0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// lwz r4,1364(r1)
	ctx.current_instruction = 0x880C4A14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// add r14,r11,r14
	ctx.r14.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r15,168(r1)
	ctx.current_instruction = 0x880C4A20;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r14,160(r1)
	ctx.current_instruction = 0x880C4A28;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,152(r1)
	ctx.current_instruction = 0x880C4A30;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,1348(r1)
	ctx.current_instruction = 0x880C4A38;
	REX_STORE_U32(ctx.r1.u32 + 1348, ctx.r11.u32);
	// stw r9,1356(r1)
	ctx.current_instruction = 0x880C4A3C;
	REX_STORE_U32(ctx.r1.u32 + 1356, ctx.r9.u32);
	// stw r8,1364(r1)
	ctx.current_instruction = 0x880C4A40;
	REX_STORE_U32(ctx.r1.u32 + 1364, ctx.r8.u32);
loc_880C4A44:
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x880C4A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4a60
	if (ctx.cr6.eq) goto loc_880C4A60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880c4a60
	if (!ctx.cr6.eq) goto loc_880C4A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9748
	ctx.lr = 0x880C4A60;
	sub_880E9748(ctx, base);
loc_880C4A60:
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C4A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// lwz r18,1340(r1)
	ctx.current_instruction = 0x880C4A64;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r17,1332(r1)
	ctx.current_instruction = 0x880C4A6C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c4db0
	if (ctx.cr6.eq) goto loc_880C4DB0;
	// lwz r29,1284(r1)
	ctx.current_instruction = 0x880C4A78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C4A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c4d40
	if (!ctx.cr6.lt) goto loc_880C4D40;
loc_880C4A8C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C4A8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c4d30
	if (!ctx.cr6.gt) goto loc_880C4D30;
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880C4A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r20,r29,1
	ctx.r20.s64 = ctx.r29.s64 + 1;
	// mullw r23,r29,r11
	ctx.r23.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
loc_880C4AA8:
	// stw r22,92(r1)
	ctx.current_instruction = 0x880C4AA8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880C4AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// add r8,r23,r30
	ctx.r8.u64 = ctx.r23.u64 + ctx.r30.u64;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C4AB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// add r7,r10,r23
	ctx.r7.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,152(r1)
	ctx.current_instruction = 0x880C4AC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// subf r3,r29,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r29.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r30,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r30.u64;
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r26,r10,r15
	ctx.r26.u64 = ctx.r10.u64 + ctx.r15.u64;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880C4AF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r27,r11,r14
	ctx.r27.u64 = ctx.r11.u64 + ctx.r14.u64;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880C4B1C;
	sub_880C3EC8(ctx, base);
loc_880C4B1C:
	// lwz r5,7200(r31)
	ctx.current_instruction = 0x880C4B1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880c4b44
	if (ctx.cr6.eq) goto loc_880C4B44;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x880c4b44
	if (!ctx.cr6.eq) goto loc_880C4B44;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880C4B44;
	sub_880EB138(ctx, base);
loc_880C4B44:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,128(r1)
	ctx.current_instruction = 0x880C4B50;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r7,129(r1)
	ctx.current_instruction = 0x880C4B58;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r10,130(r1)
	ctx.current_instruction = 0x880C4B60;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// stb r8,131(r1)
	ctx.current_instruction = 0x880C4B64;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r8.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r11,132(r1)
	ctx.current_instruction = 0x880C4B6C;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bne cr6,0x880c4b8c
	if (!ctx.cr6.eq) goto loc_880C4B8C;
	// li r9,-5
	ctx.r9.s64 = -5;
	// li r7,-5
	ctx.r7.s64 = -5;
	// li r11,-5
	ctx.r11.s64 = -5;
	// stb r9,128(r1)
	ctx.current_instruction = 0x880C4B80;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stb r7,129(r1)
	ctx.current_instruction = 0x880C4B84;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// stb r11,132(r1)
	ctx.current_instruction = 0x880C4B88;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
loc_880C4B8C:
	// lwz r6,724(r31)
	ctx.current_instruction = 0x880C4B8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// cmplw cr6,r20,r6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x880c4bb8
	if (!ctx.cr6.eq) goto loc_880C4BB8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r10,-33
	ctx.r10.s64 = -33;
	// rlwinm r6,r11,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r8,-33
	ctx.r8.s64 = -33;
	// stb r10,130(r1)
	ctx.current_instruction = 0x880C4BA8;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stb r8,131(r1)
	ctx.current_instruction = 0x880C4BB0;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r8.u8);
	// stb r11,132(r1)
	ctx.current_instruction = 0x880C4BB4;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
loc_880C4BB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x880c4be8
	if (!ctx.cr6.eq) goto loc_880C4BE8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// rlwinm r3,r11,0,31,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r5,r9,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r4,r6,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r5,128(r1)
	ctx.current_instruction = 0x880C4BDC;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r5.u8);
	// stb r4,130(r1)
	ctx.current_instruction = 0x880C4BE0;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r4.u8);
	// stb r11,132(r1)
	ctx.current_instruction = 0x880C4BE4;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
loc_880C4BE8:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880C4BE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c4c20
	if (!ctx.cr6.eq) goto loc_880C4C20;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r6,r11,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r8,r10,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r7,r9,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stb r8,129(r1)
	ctx.current_instruction = 0x880C4C14;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r7,131(r1)
	ctx.current_instruction = 0x880C4C18;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r7.u8);
	// stb r11,132(r1)
	ctx.current_instruction = 0x880C4C1C;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
loc_880C4C20:
	// lwz r10,7072(r31)
	ctx.current_instruction = 0x880C4C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7072);
	// stb r11,133(r1)
	ctx.current_instruction = 0x880C4C24;
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880c4c40
	if (!ctx.cr6.lt) goto loc_880C4C40;
	// lwz r11,7076(r31)
	ctx.current_instruction = 0x880C4C30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7076);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x880c4c44
	if (ctx.cr6.lt) goto loc_880C4C44;
loc_880C4C40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880C4C44:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880C4C48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x880C4C50;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880C4C58;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881035f8
	ctx.lr = 0x880C4C74;
	sub_881035F8(ctx, base);
loc_880C4C74:
	// li r11,1
	ctx.r11.s64 = 1;
	// add r21,r3,r21
	ctx.r21.u64 = ctx.r3.u64 + ctx.r21.u64;
	// stw r11,124(r25)
	ctx.current_instruction = 0x880C4C7C;
	REX_STORE_U32(ctx.r25.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c4d1c
	if (!ctx.cr6.eq) goto loc_880C4D1C;
	// stw r22,124(r25)
	ctx.current_instruction = 0x880C4C88;
	REX_STORE_U32(ctx.r25.u32 + 124, ctx.r22.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2552(r31)
	ctx.current_instruction = 0x880C4C90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880C4C94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r6,r9
	ctx.current_instruction = 0x880C4CA8;
	REX_STORE_U16(ctx.r6.u32 + ctx.r9.u32, ctx.r22.u16);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x880C4CAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880C4CB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r22,2(r3)
	ctx.current_instruction = 0x880C4CC4;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C4CC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C4CCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r22,r7,r10
	ctx.current_instruction = 0x880C4CDC;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C4CE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x880C4CE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r22,2(r3)
	ctx.current_instruction = 0x880C4CFC;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C4D00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C4D04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r22,r6,r10
	ctx.current_instruction = 0x880C4D18;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r22.u16);
loc_880C4D1C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C4D1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r25,r25,276
	ctx.r25.s64 = ctx.r25.s64 + 276;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c4aa8
	if (ctx.cr6.lt) goto loc_880C4AA8;
loc_880C4D30:
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C4D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c4a8c
	if (ctx.cr6.lt) goto loc_880C4A8C;
loc_880C4D40:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880C4D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880c4db0
	if (!ctx.cr6.eq) goto loc_880C4DB0;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880C4D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880c4db0
	if (!ctx.cr6.lt) goto loc_880C4DB0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,19252(r31)
	ctx.current_instruction = 0x880C4D64;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19252);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,17536(r31)
	ctx.current_instruction = 0x880C4D6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,2340(r31)
	ctx.current_instruction = 0x880C4D74;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
	// lfs f0,12184(r11)
	ctx.current_instruction = 0x880C4D78;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x880C4D7C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,128(r1)
	ctx.current_instruction = 0x880C4D88;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// lhz r7,134(r1)
	ctx.current_instruction = 0x880C4D8C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 134);
	// sth r7,0(r9)
	ctx.current_instruction = 0x880C4D90;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// lfs f9,19256(r31)
	ctx.current_instruction = 0x880C4D94;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19256);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,17540(r31)
	ctx.current_instruction = 0x880C4D98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,128(r1)
	ctx.current_instruction = 0x880C4DA4;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// lhz r5,134(r1)
	ctx.current_instruction = 0x880C4DA8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 134);
	// sth r5,0(r6)
	ctx.current_instruction = 0x880C4DAC;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
loc_880C4DB0:
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C4DB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c4de8
	if (!ctx.cr6.eq) goto loc_880C4DE8;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880C4DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2544(r31)
	ctx.current_instruction = 0x880C4DC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88052d90
	ctx.lr = 0x880C4DD4;
	sub_88052D90(ctx, base);
loc_880C4DD4:
	// lwz r10,728(r31)
	ctx.current_instruction = 0x880C4DD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2552(r31)
	ctx.current_instruction = 0x880C4DDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x880C4DE8;
	sub_88052D90(ctx, base);
loc_880C4DE8:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r10,r1,255
	ctx.r10.s64 = ctx.r1.s64 + 255;
	// addi r4,r31,17552
	ctx.r4.s64 = ctx.r31.s64 + 17552;
	// rlwinm r17,r10,0,0,25
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwz r3,25768(r11)
	ctx.current_instruction = 0x880C4DF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25768);
	// bl 0x88110d00
	ctx.lr = 0x880C4E00;
	sub_88110D00(ctx, base);
loc_880C4E00:
	// lwz r29,1284(r1)
	ctx.current_instruction = 0x880C4E00;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// lwz r9,1292(r1)
	ctx.current_instruction = 0x880C4E04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x880c570c
	if (!ctx.cr6.lt) goto loc_880C570C;
	// lwz r16,1412(r1)
	ctx.current_instruction = 0x880C4E10;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1412);
	// lwz r21,1404(r1)
	ctx.current_instruction = 0x880C4E14;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1404);
loc_880C4E18:
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C4E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// lwz r10,2272(r31)
	ctx.current_instruction = 0x880C4E1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r20,1348(r1)
	ctx.current_instruction = 0x880C4E24;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// lwz r23,1356(r1)
	ctx.current_instruction = 0x880C4E28;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,164(r1)
	ctx.current_instruction = 0x880C4E3C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// beq cr6,0x880c4e90
	if (ctx.cr6.eq) goto loc_880C4E90;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880C4E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c4e74
	if (!ctx.cr6.lt) goto loc_880C4E74;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r10,2264(r31)
	ctx.current_instruction = 0x880C4E58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x880C4E60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880c4e74
	if (ctx.cr6.eq) goto loc_880C4E74;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r1)
	ctx.current_instruction = 0x880C4E70;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_880C4E74:
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880C4E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x880C4E7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880c4e90
	if (ctx.cr6.eq) goto loc_880C4E90;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,144(r1)
	ctx.current_instruction = 0x880C4E8C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_880C4E90:
	// lwz r11,1284(r1)
	ctx.current_instruction = 0x880C4E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880C4E98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r25,180(r1)
	ctx.current_instruction = 0x880C4EA4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,172(r1)
	ctx.current_instruction = 0x880C4EB8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// ble cr6,0x880c5460
	if (!ctx.cr6.gt) goto loc_880C5460;
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880C4EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,168(r1)
	ctx.current_instruction = 0x880C4EC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mullw r8,r29,r11
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// lwz r7,152(r1)
	ctx.current_instruction = 0x880C4ECC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,1356(r1)
	ctx.current_instruction = 0x880C4ED0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// lwz r5,1364(r1)
	ctx.current_instruction = 0x880C4ED4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,160(r1)
	ctx.current_instruction = 0x880C4EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// subf r18,r6,r5
	ctx.r18.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r19,r10,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_880C4EF4:
	// lwz r11,19468(r31)
	ctx.current_instruction = 0x880C4EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c4f10
	if (!ctx.cr6.eq) goto loc_880C4F10;
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C4F00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c4f74
	if (ctx.cr6.eq) goto loc_880C4F74;
loc_880C4F10:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880C4F10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// add r9,r19,r26
	ctx.r9.u64 = ctx.r19.u64 + ctx.r26.u64;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C4F18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r28,1340(r1)
	ctx.current_instruction = 0x880C4F24;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r27,1332(r1)
	ctx.current_instruction = 0x880C4F2C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lwz r4,1324(r1)
	ctx.current_instruction = 0x880C4F34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x880C4F3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r6,r3,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880C4F50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880C4F68;
	sub_880C3EC8(ctx, base);
loc_880C4F68:
	// b 0x880c4f7c
	goto loc_880C4F7C;
loc_880C4F6C:
	// stw r22,136(r1)
	ctx.current_instruction = 0x880C4F6C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// b 0x880c49c8
	goto loc_880C49C8;
loc_880C4F74:
	// lwz r27,1332(r1)
	ctx.current_instruction = 0x880C4F74;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// lwz r28,1340(r1)
	ctx.current_instruction = 0x880C4F78;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
loc_880C4F7C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r25)
	ctx.current_instruction = 0x880C4F80;
	REX_STORE_U32(ctx.r25.u32 + 84, ctx.r11.u32);
	// lwz r9,1416(r31)
	ctx.current_instruction = 0x880C4F84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,1424(r31)
	ctx.current_instruction = 0x880C4F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,96(r25)
	ctx.current_instruction = 0x880C4F98;
	REX_STORE_U32(ctx.r25.u32 + 96, ctx.r8.u32);
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x880C4F9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// stw r7,100(r25)
	ctx.current_instruction = 0x880C4FA0;
	REX_STORE_U32(ctx.r25.u32 + 100, ctx.r7.u32);
	// lwz r6,1420(r31)
	ctx.current_instruction = 0x880C4FA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1420);
	// stw r6,104(r25)
	ctx.current_instruction = 0x880C4FA8;
	REX_STORE_U32(ctx.r25.u32 + 104, ctx.r6.u32);
	// lwz r5,2572(r31)
	ctx.current_instruction = 0x880C4FAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x880c5048
	if (!ctx.cr6.eq) goto loc_880C5048;
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C4FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c5048
	if (!ctx.cr6.eq) goto loc_880C5048;
	// lwz r11,19468(r31)
	ctx.current_instruction = 0x880C4FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4ff8
	if (ctx.cr6.eq) goto loc_880C4FF8;
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x880C4FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c4ff8
	if (ctx.cr6.eq) goto loc_880C4FF8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x880c4ff8
	if (!ctx.cr6.eq) goto loc_880C4FF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,1324(r1)
	ctx.current_instruction = 0x880C4FE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880C4FF8;
	sub_880EB138(ctx, base);
loc_880C4FF8:
	// lwz r8,1380(r1)
	ctx.current_instruction = 0x880C4FF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1380);
	// add r10,r18,r23
	ctx.r10.u64 = ctx.r18.u64 + ctx.r23.u64;
	// lwz r11,1396(r1)
	ctx.current_instruction = 0x880C5000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1396);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r5,1388(r1)
	ctx.current_instruction = 0x880C5008;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1388);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r16,116(r1)
	ctx.current_instruction = 0x880C5014;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r21,108(r1)
	ctx.current_instruction = 0x880C501C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r8,156(r1)
	ctx.current_instruction = 0x880C5020;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880C5028;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r1)
	ctx.current_instruction = 0x880C5030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r5,92(r1)
	ctx.current_instruction = 0x880C5034;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r5,1324(r1)
	ctx.current_instruction = 0x880C5038;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C503C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c1cb8
	ctx.lr = 0x880C5044;
	sub_880C1CB8(ctx, base);
loc_880C5044:
	// b 0x880c541c
	goto loc_880C541C;
loc_880C5048:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880C504C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// stb r10,128(r1)
	ctx.current_instruction = 0x880C5050;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r10,129(r1)
	ctx.current_instruction = 0x880C5058;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r10.u8);
	// stb r10,133(r1)
	ctx.current_instruction = 0x880C505C;
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// stb r10,130(r1)
	ctx.current_instruction = 0x880C5060;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// stb r10,131(r1)
	ctx.current_instruction = 0x880C5064;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r10.u8);
	// stb r10,132(r1)
	ctx.current_instruction = 0x880C5068;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
	// ble cr6,0x880c514c
	if (!ctx.cr6.gt) goto loc_880C514C;
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C5070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880c514c
	if (ctx.cr6.eq) goto loc_880C514C;
	// lwz r11,1284(r1)
	ctx.current_instruction = 0x880C5080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c509c
	if (ctx.cr6.eq) goto loc_880C509C;
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C508C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x880c514c
	if (!ctx.cr6.eq) goto loc_880C514C;
loc_880C509C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880c514c
	if (ctx.cr6.eq) goto loc_880C514C;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880C50A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c514c
	if (ctx.cr6.eq) goto loc_880C514C;
	// stw r22,124(r25)
	ctx.current_instruction = 0x880C50B4;
	REX_STORE_U32(ctx.r25.u32 + 124, ctx.r22.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880C50C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2552(r31)
	ctx.current_instruction = 0x880C50C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r6,r9
	ctx.current_instruction = 0x880C50D4;
	REX_STORE_U16(ctx.r6.u32 + ctx.r9.u32, ctx.r22.u16);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x880C50D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880C50E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r22,2(r3)
	ctx.current_instruction = 0x880C50F0;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C50F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C50F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r22,r7,r10
	ctx.current_instruction = 0x880C5108;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C510C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r6,720(r31)
	ctx.current_instruction = 0x880C5110;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r22,2(r3)
	ctx.current_instruction = 0x880C5128;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r22.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880C512C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C5130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r22,r7,r10
	ctx.current_instruction = 0x880C5144;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r22.u16);
	// lbz r10,132(r1)
	ctx.current_instruction = 0x880C5148;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 132);
loc_880C514C:
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880C514C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r8,2552(r31)
	ctx.current_instruction = 0x880C5150;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r9,r11,r8
	ctx.current_instruction = 0x880C5164;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// beq cr6,0x880c518c
	if (ctx.cr6.eq) goto loc_880C518C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,127
	ctx.r11.s64 = ctx.r1.s64 + 127;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880C5180:
	// stbu r9,1(r11)
	ctx.current_instruction = 0x880C5180;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c5180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C5180;
	// lbz r10,132(r1)
	ctx.current_instruction = 0x880C5188;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 132);
loc_880C518C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880c51b0
	if (ctx.cr6.eq) goto loc_880C51B0;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r8
	ctx.current_instruction = 0x880C51A4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x880c51e0
	if (ctx.cr6.eq) goto loc_880C51E0;
loc_880C51B0:
	// lbz r11,128(r1)
	ctx.current_instruction = 0x880C51B0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r9,129(r1)
	ctx.current_instruction = 0x880C51B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r3,r5,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r4,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r3,128(r1)
	ctx.current_instruction = 0x880C51D4;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// stb r11,129(r1)
	ctx.current_instruction = 0x880C51D8;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// stb r10,132(r1)
	ctx.current_instruction = 0x880C51DC;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
loc_880C51E0:
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880C51E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c5208
	if (ctx.cr6.eq) goto loc_880C5208;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r8
	ctx.current_instruction = 0x880C51FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// beq cr6,0x880c5238
	if (ctx.cr6.eq) goto loc_880C5238;
loc_880C5208:
	// lbz r11,130(r1)
	ctx.current_instruction = 0x880C5208;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 130);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r9,131(r1)
	ctx.current_instruction = 0x880C5210;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 131);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r11,r10,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r4,r8,0,27,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r3,r5,0,27,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r4,130(r1)
	ctx.current_instruction = 0x880C522C;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r4.u8);
	// stb r3,131(r1)
	ctx.current_instruction = 0x880C5230;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r3.u8);
	// stb r10,132(r1)
	ctx.current_instruction = 0x880C5234;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
loc_880C5238:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880c524c
	if (ctx.cr6.eq) goto loc_880C524C;
	// lhz r11,-2(r6)
	ctx.current_instruction = 0x880C5240;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x880c527c
	if (ctx.cr6.eq) goto loc_880C527C;
loc_880C524C:
	// lbz r11,128(r1)
	ctx.current_instruction = 0x880C524C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r9,130(r1)
	ctx.current_instruction = 0x880C5254;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 130);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r11,r10,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r4,r8,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r3,r5,0,31,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r4,128(r1)
	ctx.current_instruction = 0x880C5270;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r4.u8);
	// stb r3,130(r1)
	ctx.current_instruction = 0x880C5274;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r3.u8);
	// stb r10,132(r1)
	ctx.current_instruction = 0x880C5278;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
loc_880C527C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880c5294
	if (ctx.cr6.eq) goto loc_880C5294;
	// lhz r11,2(r6)
	ctx.current_instruction = 0x880C5288;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x880c52c4
	if (ctx.cr6.eq) goto loc_880C52C4;
loc_880C5294:
	// lbz r11,129(r1)
	ctx.current_instruction = 0x880C5294;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r9,131(r1)
	ctx.current_instruction = 0x880C529C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 131);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r4,r10,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r6,r8,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r5,r7,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// stb r6,129(r1)
	ctx.current_instruction = 0x880C52B8;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// stb r5,131(r1)
	ctx.current_instruction = 0x880C52BC;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r5.u8);
	// stb r10,132(r1)
	ctx.current_instruction = 0x880C52C0;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
loc_880C52C4:
	// lwz r11,7072(r31)
	ctx.current_instruction = 0x880C52C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7072);
	// stb r10,133(r1)
	ctx.current_instruction = 0x880C52C8;
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880c52e4
	if (!ctx.cr6.lt) goto loc_880C52E4;
	// lwz r11,7076(r31)
	ctx.current_instruction = 0x880C52D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7076);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x880c52e8
	if (ctx.cr6.lt) goto loc_880C52E8;
loc_880C52E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880C52E8:
	// add r10,r19,r26
	ctx.r10.u64 = ctx.r19.u64 + ctx.r26.u64;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880C52EC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r28,r17,640
	ctx.r28.s64 = ctx.r17.s64 + 640;
	// stw r17,100(r1)
	ctx.current_instruction = 0x880C52F4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r10,156(r1)
	ctx.current_instruction = 0x880C52F8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r27,r17,512
	ctx.r27.s64 = ctx.r17.s64 + 512;
	// stw r26,84(r1)
	ctx.current_instruction = 0x880C5300;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r28,116(r1)
	ctx.current_instruction = 0x880C5308;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r27,108(r1)
	ctx.current_instruction = 0x880C5310;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,1340(r1)
	ctx.current_instruction = 0x880C531C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1332(r1)
	ctx.current_instruction = 0x880C5324;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// lwz r7,1324(r1)
	ctx.current_instruction = 0x880C5328;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// lwz r11,156(r1)
	ctx.current_instruction = 0x880C532C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C5330;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x88101728
	ctx.lr = 0x880C5338;
	sub_88101728(ctx, base);
loc_880C5338:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x880C534C;
	sub_880EB9E0(ctx, base);
loc_880C534C:
	// lwz r11,19468(r31)
	ctx.current_instruction = 0x880C534C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5380
	if (ctx.cr6.eq) goto loc_880C5380;
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x880C5358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5380
	if (ctx.cr6.eq) goto loc_880C5380;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x880c5380
	if (!ctx.cr6.eq) goto loc_880C5380;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb1e0
	ctx.lr = 0x880C5380;
	sub_880EB1E0(ctx, base);
loc_880C5380:
	// lwz r11,1388(r1)
	ctx.current_instruction = 0x880C5380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1388);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880C5388;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r7,96(r25)
	ctx.current_instruction = 0x880C5390;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,27940(r31)
	ctx.current_instruction = 0x880C5398;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 27940);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r16,100(r1)
	ctx.current_instruction = 0x880C53A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C53A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mulli r11,r7,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lwz r7,172(r1)
	ctx.current_instruction = 0x880C53B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880C53C0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x881025f8
	ctx.lr = 0x880C53C8;
	sub_881025F8(ctx, base);
loc_880C53C8:
	// lwz r10,6740(r31)
	ctx.current_instruction = 0x880C53C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6740);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c53e8
	if (ctx.cr6.eq) goto loc_880C53E8;
	// lwz r11,6748(r31)
	ctx.current_instruction = 0x880C53D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x880C53DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x880c541c
	if (ctx.cr6.gt) goto loc_880C541C;
loc_880C53E8:
	// lwz r11,1380(r1)
	ctx.current_instruction = 0x880C53E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1380);
	// add r10,r18,r23
	ctx.r10.u64 = ctx.r18.u64 + ctx.r23.u64;
	// stw r17,84(r1)
	ctx.current_instruction = 0x880C53F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r4,1276(r1)
	ctx.current_instruction = 0x880C53FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880C5404;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880C540C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88100d48
	ctx.lr = 0x880C541C;
	sub_88100D48(ctx, base);
loc_880C541C:
	// lwz r11,1396(r1)
	ctx.current_instruction = 0x880C541C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1396);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,1388(r1)
	ctx.current_instruction = 0x880C5424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1388);
	// addi r20,r20,16
	ctx.r20.s64 = ctx.r20.s64 + 16;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C542C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// addi r7,r10,1536
	ctx.r7.s64 = ctx.r10.s64 + 1536;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r8,1396(r1)
	ctx.current_instruction = 0x880C543C;
	REX_STORE_U32(ctx.r1.u32 + 1396, ctx.r8.u32);
	// addi r25,r25,276
	ctx.r25.s64 = ctx.r25.s64 + 276;
	// stw r7,1388(r1)
	ctx.current_instruction = 0x880C5444;
	REX_STORE_U32(ctx.r1.u32 + 1388, ctx.r7.u32);
	// addi r21,r21,1536
	ctx.r21.s64 = ctx.r21.s64 + 1536;
	// addi r16,r16,12
	ctx.r16.s64 = ctx.r16.s64 + 12;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880c4ef4
	if (ctx.cr6.lt) goto loc_880C4EF4;
loc_880C5460:
	// lwz r11,136(r1)
	ctx.current_instruction = 0x880C5460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c54e0
	if (ctx.cr6.eq) goto loc_880C54E0;
	// lwz r11,31136(r31)
	ctx.current_instruction = 0x880C546C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31136);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,140(r1)
	ctx.current_instruction = 0x880C5474;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r27,r11,r29
	ctx.current_instruction = 0x880C547C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u8);
	// beq cr6,0x880c5498
	if (ctx.cr6.eq) goto loc_880C5498;
	// lwz r11,31128(r31)
	ctx.current_instruction = 0x880C5484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31128);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x880C548C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C5494;
	sub_881ECE40(ctx, base);
loc_880C5494:
	// b 0x880c54e0
	goto loc_880C54E0;
loc_880C5498:
	// lwz r11,31136(r31)
	ctx.current_instruction = 0x880C5498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31136);
	// lwz r10,1284(r1)
	ctx.current_instruction = 0x880C549C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x880C54A4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880c54e0
	if (ctx.cr6.eq) goto loc_880C54E0;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x880c54dc
	if (ctx.cr6.gt) goto loc_880C54DC;
	// subf r11,r10,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r10.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_880C54C4:
	// lwz r11,31128(r31)
	ctx.current_instruction = 0x880C54C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31128);
	// lwzx r3,r28,r11
	ctx.current_instruction = 0x880C54C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C54D0;
	sub_881ECE40(ctx, base);
loc_880C54D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880c54c4
	if (!ctx.cr0.eq) goto loc_880C54C4;
loc_880C54DC:
	// stw r27,140(r1)
	ctx.current_instruction = 0x880C54DC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
loc_880C54E0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880C54E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880c5648
	if (!ctx.cr6.eq) goto loc_880C5648;
	// lwz r11,6740(r31)
	ctx.current_instruction = 0x880C54EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5648
	if (ctx.cr6.eq) goto loc_880C5648;
	// lwz r11,6748(r31)
	ctx.current_instruction = 0x880C54F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880C5500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880c5648
	if (!ctx.cr6.gt) goto loc_880C5648;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C550C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,176(r1)
	ctx.current_instruction = 0x880C5514;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x880547a0
	ctx.lr = 0x880C5530;
	sub_880547A0(ctx, base);
loc_880C5530:
	// lwz r10,6748(r31)
	ctx.current_instruction = 0x880C5530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880C5534;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r30,r30,r10
	ctx.current_instruction = 0x880C5540;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// ble cr6,0x880c55b0
	if (!ctx.cr6.gt) goto loc_880C55B0;
	// lwz r27,180(r1)
	ctx.current_instruction = 0x880C5548;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_880C554C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880c55b0
	if (!ctx.cr6.gt) goto loc_880C55B0;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C5554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// subf r9,r28,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// divwu r5,r30,r9
	ctx.r5.u64 = uint32_t(ctx.r9.u32 ? ctx.r30.u32 / ctx.r9.u32 : 0);
	// divwu r10,r30,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r30.u32 / ctx.r9.u32 : 0);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// subf r3,r4,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r4.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880ff048
	ctx.lr = 0x880C559C;
	sub_880FF048(ctx, base);
loc_880C559C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880C559C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880c554c
	if (ctx.cr6.lt) goto loc_880C554C;
loc_880C55B0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C55B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,176(r1)
	ctx.current_instruction = 0x880C55B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x880547a0
	ctx.lr = 0x880C55CC;
	sub_880547A0(ctx, base);
loc_880C55CC:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880C55CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r28,1356(r1)
	ctx.current_instruction = 0x880C55D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r27,1348(r1)
	ctx.current_instruction = 0x880C55D8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,180(r1)
	ctx.current_instruction = 0x880C55E0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// ble cr6,0x880c5648
	if (!ctx.cr6.gt) goto loc_880C5648;
	// lwz r11,1364(r1)
	ctx.current_instruction = 0x880C55E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// lwz r24,1380(r1)
	ctx.current_instruction = 0x880C55EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1380);
	// lwz r23,1276(r1)
	ctx.current_instruction = 0x880C55F0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// subf r26,r28,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_880C55F8:
	// stw r24,100(r1)
	ctx.current_instruction = 0x880C55F8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880C5604;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r17,84(r1)
	ctx.current_instruction = 0x880C560C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88100d48
	ctx.lr = 0x880C5628;
	sub_88100D48(ctx, base);
loc_880C5628:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C5628;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r25,r25,276
	ctx.r25.s64 = ctx.r25.s64 + 276;
	// addi r21,r21,1536
	ctx.r21.s64 = ctx.r21.s64 + 1536;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c55f8
	if (ctx.cr6.lt) goto loc_880C55F8;
loc_880C5648:
	// lwz r11,6748(r31)
	ctx.current_instruction = 0x880C5648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r11
	ctx.current_instruction = 0x880C5650;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
	// lwz r9,2340(r31)
	ctx.current_instruction = 0x880C5654;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880c5690
	if (ctx.cr6.eq) goto loc_880C5690;
	// lwz r11,1276(r1)
	ctx.current_instruction = 0x880C5664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,172(r1)
	ctx.current_instruction = 0x880C5670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,144(r1)
	ctx.current_instruction = 0x880C5678;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,1364(r1)
	ctx.current_instruction = 0x880C567C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// lwz r6,1356(r1)
	ctx.current_instruction = 0x880C5680;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// lwz r5,1348(r1)
	ctx.current_instruction = 0x880C5684;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C5688;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C5690;
	sub_8810C9E8(ctx, base);
loc_880C5690:
	// lwz r10,1356(r1)
	ctx.current_instruction = 0x880C5690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x880C5694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r9,1348(r1)
	ctx.current_instruction = 0x880C5698;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,1364(r1)
	ctx.current_instruction = 0x880C56A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// lwz r10,1404(r31)
	ctx.current_instruction = 0x880C56A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// lwz r4,164(r1)
	ctx.current_instruction = 0x880C56A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r22,144(r1)
	ctx.current_instruction = 0x880C56B4;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r6,1356(r1)
	ctx.current_instruction = 0x880C56BC;
	REX_STORE_U32(ctx.r1.u32 + 1356, ctx.r6.u32);
	// stw r5,1348(r1)
	ctx.current_instruction = 0x880C56C0;
	REX_STORE_U32(ctx.r1.u32 + 1348, ctx.r5.u32);
	// stw r7,1364(r1)
	ctx.current_instruction = 0x880C56C4;
	REX_STORE_U32(ctx.r1.u32 + 1364, ctx.r7.u32);
	// beq cr6,0x880c56fc
	if (ctx.cr6.eq) goto loc_880C56FC;
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880C56CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c56fc
	if (ctx.cr6.eq) goto loc_880C56FC;
	// lwz r11,1276(r1)
	ctx.current_instruction = 0x880C56DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C56F4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C56FC;
	sub_8810C9E8(ctx, base);
loc_880C56FC:
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C56FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c4e18
	if (ctx.cr6.lt) goto loc_880C4E18;
loc_880C570C:
	// addi r3,r31,17552
	ctx.r3.s64 = ctx.r31.s64 + 17552;
	// bl 0x88111038
	ctx.lr = 0x880C5714;
	sub_88111038(ctx, base);
loc_880C5714:
	// lwz r11,136(r1)
	ctx.current_instruction = 0x880C5714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5770
	if (ctx.cr6.eq) goto loc_880C5770;
	// lwz r11,140(r1)
	ctx.current_instruction = 0x880C5720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c5770
	if (!ctx.cr6.eq) goto loc_880C5770;
	// lwz r30,1284(r1)
	ctx.current_instruction = 0x880C572C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,31128(r31)
	ctx.current_instruction = 0x880C5734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31128);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.current_instruction = 0x880C5740;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x881ecd98
	ctx.lr = 0x880C5748;
	sub_881ECD98(ctx, base);
loc_880C5748:
	// lwz r11,1292(r1)
	ctx.current_instruction = 0x880C5748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880c5770
	if (!ctx.cr6.lt) goto loc_880C5770;
	// subf r30,r30,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880C5758:
	// lwz r11,31128(r31)
	ctx.current_instruction = 0x880C5758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31128);
	// lwzx r3,r29,r11
	ctx.current_instruction = 0x880C575C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C5764;
	sub_881ECE40(ctx, base);
loc_880C5764:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x880c5758
	if (!ctx.cr0.eq) goto loc_880C5758;
loc_880C5770:
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2B38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E2B38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2B38;
	ctx.current_instruction = 0x880E2B38;
	// lwz r11,6876(r3)
	ctx.current_instruction = 0x880E2B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6876);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e2bf8
	if (ctx.cr6.eq) goto loc_880E2BF8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// bge cr6,0x880e2ba8
	if (!ctx.cr6.lt) goto loc_880E2BA8;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880E2B60;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x880E2B64;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2B68;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880E2B6C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f13,8624(r8)
	ctx.current_instruction = 0x880E2B74;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfd f0,12480(r9)
	ctx.current_instruction = 0x880E2B7C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12480);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f12,14736(r7)
	ctx.current_instruction = 0x880E2B84;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 14736);
	// lfd f11,14728(r6)
	ctx.current_instruction = 0x880E2B88;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r6.u32 + 14728);
	// fdiv f8,f10,f9
	ctx.f8.f64 = ctx.f10.f64 / ctx.f9.f64;
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmadd f6,f7,f0,f13
	ctx.f6.f64 = std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f13.f64);
	// fmul f5,f6,f7
	ctx.f5.f64 = ctx.f6.f64 * ctx.f7.f64;
	// fmadd f4,f5,f12,f11
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f11.f64);
	// fmul f1,f4,f1
	ctx.f1.f64 = ctx.f4.f64 * ctx.f1.f64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E2BA8:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880E2BB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f12,14720(r7)
	ctx.current_instruction = 0x880E2BB8;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 14720);
	// lfd f11,14728(r6)
	ctx.current_instruction = 0x880E2BBC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r6.u32 + 14728);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x880E2BC0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2BC4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfd f0,12480(r9)
	ctx.current_instruction = 0x880E2BCC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12480);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880E2BD0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f13,8624(r8)
	ctx.current_instruction = 0x880E2BD8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// fdiv f8,f10,f9
	ctx.f8.f64 = ctx.f10.f64 / ctx.f9.f64;
	// fmadd f7,f8,f0,f13
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64);
	// fmul f6,f7,f8
	ctx.f6.f64 = ctx.f7.f64 * ctx.f8.f64;
	// fmadd f5,f6,f12,f11
	ctx.f5.f64 = std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f11.f64);
	// fmul f4,f5,f1
	ctx.f4.f64 = ctx.f5.f64 * ctx.f1.f64;
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E2BF8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// bge cr6,0x880e2c40
	if (!ctx.cr6.lt) goto loc_880E2C40;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880E2C0C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x880E2C10;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2C14;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880E2C1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,12248(r9)
	ctx.current_instruction = 0x880E2C24;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12248);
	// lfd f13,14728(r8)
	ctx.current_instruction = 0x880E2C28;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 14728);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmadd f8,f9,f0,f13
	ctx.f8.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64);
	// fmul f1,f8,f1
	ctx.f1.f64 = ctx.f8.f64 * ctx.f1.f64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E2C40:
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2C40;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f13,14728(r8)
	ctx.current_instruction = 0x880E2C4C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 14728);
	// std r11,-8(r1)
	ctx.current_instruction = 0x880E2C50;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.current_instruction = 0x880E2C54;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x880E2C5C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,14696(r9)
	ctx.current_instruction = 0x880E2C64;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 14696);
	// fdiv f9,f12,f10
	ctx.f9.f64 = ctx.f12.f64 / ctx.f10.f64;
	// fmadd f8,f9,f0,f13
	ctx.f8.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64);
	// fmul f7,f8,f1
	ctx.f7.f64 = ctx.f8.f64 * ctx.f1.f64;
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E4B68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E4B68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E4B68;
	ctx.current_instruction = 0x880E4B68;
	// std r31,-8(r1)
	ctx.current_instruction = 0x880E4B68;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,30752(r3)
	ctx.current_instruction = 0x880E4B6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e4bc8
	if (ctx.cr6.eq) goto loc_880E4BC8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880e4bc8
	if (!ctx.cr6.gt) goto loc_880E4BC8;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880E4B98:
	// lbzx r7,r11,r4
	ctx.current_instruction = 0x880E4B98;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwz r9,-25280(r10)
	ctx.current_instruction = 0x880E4B9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -25280);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbzx r9,r7,r9
	ctx.current_instruction = 0x880E4BB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r9,r11,r4
	ctx.current_instruction = 0x880E4BBC;
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e4b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4B98;
loc_880E4BC8:
	// lwz r11,30724(r3)
	ctx.current_instruction = 0x880E4BC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e4c6c
	if (ctx.cr6.eq) goto loc_880E4C6C;
	// lwz r9,30756(r3)
	ctx.current_instruction = 0x880E4BD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// ble cr6,0x880e4c24
	if (!ctx.cr6.gt) goto loc_880E4C24;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880E4BF4:
	// lbzx r7,r11,r5
	ctx.current_instruction = 0x880E4BF4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwz r9,-25280(r10)
	ctx.current_instruction = 0x880E4BF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -25280);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbzx r9,r7,r9
	ctx.current_instruction = 0x880E4C14;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r9,r11,r5
	ctx.current_instruction = 0x880E4C18;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e4bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4BF4;
loc_880E4C24:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880e4c6c
	if (!ctx.cr6.gt) goto loc_880E4C6C;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880E4C38:
	// lbzx r8,r11,r6
	ctx.current_instruction = 0x880E4C38;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,-25280(r10)
	ctx.current_instruction = 0x880E4C3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -25280);
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbzx r5,r3,r9
	ctx.current_instruction = 0x880E4C5C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stbx r5,r11,r6
	ctx.current_instruction = 0x880E4C60;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e4c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4C38;
loc_880E4C6C:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880E4C6C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E7108) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E7108;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E7108) {
			switch (rex_dispatch_address) {
				case 0x880E7110:
				case 0x880E7208:
				case 0x880E726C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E7108;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E7110: goto loc_880E7110;
		case 0x880E7208: goto loc_880E7208;
		case 0x880E726C: goto loc_880E726C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880E7110;
	__savegprlr_14(ctx, base);
loc_880E7110:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x880E7110;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// lwz r11,1700(r3)
	ctx.current_instruction = 0x880E7118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1700);
	// lwz r9,16(r3)
	ctx.current_instruction = 0x880E711C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,17352
	ctx.r10.s64 = ctx.r10.s64 + 17352;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// mulli r9,r11,88
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// lwzx r18,r7,r10
	ctx.current_instruction = 0x880E714C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r20,r7,r6
	ctx.current_instruction = 0x880E7150;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mulli r5,r8,88
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(88));
	// lwzx r23,r5,r31
	ctx.current_instruction = 0x880E715C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r26,1704(r11)
	ctx.current_instruction = 0x880E7174;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1704);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r24,1712(r11)
	ctx.current_instruction = 0x880E717C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwz r14,1764(r11)
	ctx.current_instruction = 0x880E7184;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 1764);
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x880e719c
	if (!ctx.cr6.eq) goto loc_880E719C;
	// addi r11,r26,31
	ctx.r11.s64 = ctx.r26.s64 + 31;
	// rlwinm r26,r11,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_880E719C:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// bne cr6,0x880e71ac
	if (!ctx.cr6.eq) goto loc_880E71AC;
	// addi r11,r24,31
	ctx.r11.s64 = ctx.r24.s64 + 31;
	// rlwinm r24,r11,0,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_880E71AC:
	// srawi r19,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r26.s32 >> 1;
	// srawi r16,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r24.s32 >> 1;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x880e722c
	if (!ctx.cr6.eq) goto loc_880E722C;
	// lwz r9,2072(r31)
	ctx.current_instruction = 0x880E71BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2072);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,2332(r31)
	ctx.current_instruction = 0x880E71C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r14,108(r1)
	ctx.current_instruction = 0x880E71D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r23,100(r1)
	ctx.current_instruction = 0x880E71D8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r16,92(r1)
	ctx.current_instruction = 0x880E71E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r9,128(r1)
	ctx.current_instruction = 0x880E71E4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,116(r1)
	ctx.current_instruction = 0x880E71EC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880E71F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880E71FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880E7208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E7208:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// bne cr6,0x880e726c
	if (!ctx.cr6.eq) goto loc_880E726C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// b 0x880e7234
	goto loc_880E7234;
loc_880E722C:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// bne cr6,0x880e726c
	if (!ctx.cr6.eq) goto loc_880E726C;
loc_880E7234:
	// stw r19,84(r1)
	ctx.current_instruction = 0x880E7234;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,2332(r31)
	ctx.current_instruction = 0x880E723C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r30,2076(r31)
	ctx.current_instruction = 0x880E7244;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2076);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r14,108(r1)
	ctx.current_instruction = 0x880E7250;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r23,100(r1)
	ctx.current_instruction = 0x880E7258;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r16,92(r1)
	ctx.current_instruction = 0x880E725C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880E7260;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880E726C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E726C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880e72bc
	if (!ctx.cr6.gt) goto loc_880E72BC;
	// mullw r7,r18,r23
	ctx.r7.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r23.s32);
loc_880E7280:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880e72a4
	if (!ctx.cr6.gt) goto loc_880E72A4;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
loc_880E7290:
	// lbzx r6,r11,r10
	ctx.current_instruction = 0x880E7290;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stbu r6,1(r9)
	ctx.current_instruction = 0x880E729C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x880e7290
	if (ctx.cr6.lt) goto loc_880E7290;
loc_880E72A4:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880E72A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x880e7280
	if (ctx.cr6.lt) goto loc_880E7280;
loc_880E72BC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880e7310
	if (!ctx.cr6.gt) goto loc_880E7310;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r14.s32);
loc_880E72D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x880e72f8
	if (!ctx.cr6.gt) goto loc_880E72F8;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_880E72E4:
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880E72E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// stbu r5,1(r9)
	ctx.current_instruction = 0x880E72F0;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x880e72e4
	if (ctx.cr6.lt) goto loc_880E72E4;
loc_880E72F8:
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880E72F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x880e72d4
	if (ctx.cr6.lt) goto loc_880E72D4;
loc_880E7310:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880e7364
	if (!ctx.cr6.gt) goto loc_880E7364;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r14.s32);
loc_880E7328:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x880e734c
	if (!ctx.cr6.gt) goto loc_880E734C;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_880E7338:
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880E7338;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// stbu r5,1(r9)
	ctx.current_instruction = 0x880E7344;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x880e7338
	if (ctx.cr6.lt) goto loc_880E7338;
loc_880E734C:
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880E734C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x880e7328
	if (ctx.cr6.lt) goto loc_880E7328;
loc_880E7364:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED0E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ED0E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ED0E8) {
			switch (rex_dispatch_address) {
				case 0x880ED0F0:
				case 0x880ED1B8:
				case 0x880ED1F4:
				case 0x880ED3EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ED0E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ED0F0: goto loc_880ED0F0;
		case 0x880ED1B8: goto loc_880ED1B8;
		case 0x880ED1F4: goto loc_880ED1F4;
		case 0x880ED3EC: goto loc_880ED3EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880ED0F0;
	__savegprlr_14(ctx, base);
loc_880ED0F0:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x880ED0F0;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x880ED0F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r4,332(r1)
	ctx.current_instruction = 0x880ED0FC;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// stw r8,364(r1)
	ctx.current_instruction = 0x880ED108;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stw r9,372(r1)
	ctx.current_instruction = 0x880ED10C;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// lwz r10,27940(r19)
	ctx.current_instruction = 0x880ED110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 27940);
	// lwz r4,31532(r19)
	ctx.current_instruction = 0x880ED114;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 31532);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r26,132(r1)
	ctx.current_instruction = 0x880ED128;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r26,128(r1)
	ctx.current_instruction = 0x880ED130;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lwz r29,28(r11)
	ctx.current_instruction = 0x880ED134;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r28,36(r11)
	ctx.current_instruction = 0x880ED13C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// lwz r18,16(r11)
	ctx.current_instruction = 0x880ED144;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r15,20(r11)
	ctx.current_instruction = 0x880ED14C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r23,24(r11)
	ctx.current_instruction = 0x880ED154;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r22,32(r11)
	ctx.current_instruction = 0x880ED15C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r17,0(r11)
	ctx.current_instruction = 0x880ED164;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r29,140(r1)
	ctx.current_instruction = 0x880ED170;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r28,144(r1)
	ctx.current_instruction = 0x880ED174;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// beq cr6,0x880ed208
	if (ctx.cr6.eq) goto loc_880ED208;
	// lwz r30,412(r1)
	ctx.current_instruction = 0x880ED17C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880ed208
	if (ctx.cr6.lt) goto loc_880ED208;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bgt cr6,0x880ed208
	if (ctx.cr6.gt) goto loc_880ED208;
	// lwz r29,404(r1)
	ctx.current_instruction = 0x880ED190;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lwz r28,396(r1)
	ctx.current_instruction = 0x880ED198;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x880ED1A4;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x880ED1AC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x880ecb80
	ctx.lr = 0x880ED1B8;
	sub_880ECB80(ctx, base);
loc_880ED1B8:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r4,31532(r19)
	ctx.current_instruction = 0x880ED1C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 31532);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r8,372(r1)
	ctx.current_instruction = 0x880ED1C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r16,108(r1)
	ctx.current_instruction = 0x880ED1D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,116(r1)
	ctx.current_instruction = 0x880ED1D8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// std r26,96(r1)
	ctx.current_instruction = 0x880ED1E0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// std r26,88(r1)
	ctx.current_instruction = 0x880ED1E8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ED1EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880ecc18
	ctx.lr = 0x880ED1F4;
	sub_880ECC18(ctx, base);
loc_880ED1F4:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x880ED1F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,332(r1)
	ctx.current_instruction = 0x880ED1F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r29,140(r1)
	ctx.current_instruction = 0x880ED1FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r28,144(r1)
	ctx.current_instruction = 0x880ED200;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,372(r1)
	ctx.current_instruction = 0x880ED204;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_880ED208:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// sth r26,0(r20)
	ctx.current_instruction = 0x880ED20C;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r26.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r26,128(r1)
	ctx.current_instruction = 0x880ED214;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// ble cr6,0x880ed2ac
	if (!ctx.cr6.gt) goto loc_880ED2AC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880ED224:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880ed23c
	if (ctx.cr6.eq) goto loc_880ED23C;
	// lhz r11,0(r9)
	ctx.current_instruction = 0x880ED22C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mullw r27,r10,r15
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_880ED23C:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x880ED23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r5,r25,r22
	ctx.r5.u64 = ctx.r25.u64 + ctx.r22.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r14
	ctx.current_instruction = 0x880ED248;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r14.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880ed278
	if (!ctx.cr6.lt) goto loc_880ED278;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// b 0x880ed29c
	goto loc_880ED29C;
loc_880ED278:
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ED278;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r5,r3
	ctx.current_instruction = 0x880ED288;
	REX_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r31.u16);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ED290;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,0(r20)
	ctx.current_instruction = 0x880ED298;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_880ED29C:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x880ed224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ED224;
	// stw r6,128(r1)
	ctx.current_instruction = 0x880ED2A8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_880ED2AC:
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ED2AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880ed3c4
	if (!ctx.cr6.gt) goto loc_880ED3C4;
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r7,r10,-27328
	ctx.r7.s64 = ctx.r10.s64 + -27328;
loc_880ED2D0:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880ED2D0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r16
	ctx.current_instruction = 0x880ED2E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r14
	ctx.current_instruction = 0x880ED2E8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r14.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x880ed31c
	if (ctx.cr6.gt) goto loc_880ED31C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880ed310
	if (ctx.cr6.lt) goto loc_880ED310;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// sth r4,0(r11)
	ctx.current_instruction = 0x880ED308;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x880ed390
	goto loc_880ED390;
loc_880ED310:
	// neg r9,r17
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r17.u64);
	// sth r5,0(r11)
	ctx.current_instruction = 0x880ED314;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x880ed390
	goto loc_880ED390;
loc_880ED31C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r18,0
	if (ctx.r18.s32 == 0 || ctx.r18.u32 < 0u) ppc_trap(ctx, base, 0);
	// blt cr6,0x880ed358
	if (ctx.cr6.lt) goto loc_880ED358;
	// add r9,r10,r15
	ctx.r9.u64 = ctx.r10.u64 + ctx.r15.u64;
	// divw r31,r9,r18
	ctx.r31.u64 = uint32_t((ctx.r18.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r9.s32 / ctx.r18.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r18,r9
	ctx.r9.u64 = ctx.r18.u64 & ~ctx.r9.u64;
	// lhzx r31,r31,r7
	ctx.current_instruction = 0x880ED340;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// sth r31,0(r11)
	ctx.current_instruction = 0x880ED350;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// b 0x880ed390
	goto loc_880ED390;
loc_880ED358:
	// subf r9,r10,r15
	ctx.r9.u64 = ctx.r15.u64 - ctx.r10.u64;
	// divw r31,r9,r18
	ctx.r31.u64 = uint32_t((ctx.r18.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r9.s32 / ctx.r18.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r18,r9
	ctx.r9.u64 = ctx.r18.u64 & ~ctx.r9.u64;
	// lhzx r31,r31,r7
	ctx.current_instruction = 0x880ED370;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// sth r9,0(r11)
	ctx.current_instruction = 0x880ED388;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
loc_880ED390:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r31,0(r20)
	ctx.current_instruction = 0x880ED394;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r21,r8,1
	ctx.r21.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880ed2d0
	if (ctx.cr6.lt) goto loc_880ED2D0;
	// lwz r7,372(r1)
	ctx.current_instruction = 0x880ED3BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r6,128(r1)
	ctx.current_instruction = 0x880ED3C0;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_880ED3C4:
	// stw r7,84(r1)
	ctx.current_instruction = 0x880ED3C4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x880ED3D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwz r9,388(r1)
	ctx.current_instruction = 0x880ED3D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x880ebf30
	ctx.lr = 0x880ED3EC;
	sub_880EBF30(ctx, base);
loc_880ED3EC:
	// lwz r9,364(r1)
	ctx.current_instruction = 0x880ED3EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880ED3F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,0(r9)
	ctx.current_instruction = 0x880ED3F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r9)
	ctx.current_instruction = 0x880ED3FC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r20)
	ctx.current_instruction = 0x880ED400;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5B50) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F5B50);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5B50;
	ctx.current_instruction = 0x880F5B50;
	// lwz r10,1352(r3)
	ctx.current_instruction = 0x880F5B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// lwz r9,1360(r3)
	ctx.current_instruction = 0x880F5B54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// lwz r8,800(r3)
	ctx.current_instruction = 0x880F5B58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// stw r10,28232(r3)
	ctx.current_instruction = 0x880F5B60;
	REX_STORE_U32(ctx.r3.u32 + 28232, ctx.r10.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// lwz r6,1364(r3)
	ctx.current_instruction = 0x880F5B68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1364);
	// stw r6,28236(r3)
	ctx.current_instruction = 0x880F5B6C;
	REX_STORE_U32(ctx.r3.u32 + 28236, ctx.r6.u32);
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r5,1360(r3)
	ctx.current_instruction = 0x880F5B74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r5,28240(r3)
	ctx.current_instruction = 0x880F5B7C;
	REX_STORE_U32(ctx.r3.u32 + 28240, ctx.r5.u32);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// lwz r4,1372(r3)
	ctx.current_instruction = 0x880F5B84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// stw r4,28244(r3)
	ctx.current_instruction = 0x880F5B8C;
	REX_STORE_U32(ctx.r3.u32 + 28244, ctx.r4.u32);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// lwz r5,796(r3)
	ctx.current_instruction = 0x880F5B94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// stw r5,28248(r3)
	ctx.current_instruction = 0x880F5B9C;
	REX_STORE_U32(ctx.r3.u32 + 28248, ctx.r5.u32);
	// lwz r4,800(r3)
	ctx.current_instruction = 0x880F5BA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// stw r4,28252(r3)
	ctx.current_instruction = 0x880F5BA4;
	REX_STORE_U32(ctx.r3.u32 + 28252, ctx.r4.u32);
	// lwz r5,1356(r3)
	ctx.current_instruction = 0x880F5BA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1356);
	// stw r5,28256(r3)
	ctx.current_instruction = 0x880F5BAC;
	REX_STORE_U32(ctx.r3.u32 + 28256, ctx.r5.u32);
	// lwz r4,1368(r3)
	ctx.current_instruction = 0x880F5BB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// stw r4,28260(r3)
	ctx.current_instruction = 0x880F5BB4;
	REX_STORE_U32(ctx.r3.u32 + 28260, ctx.r4.u32);
	// lwz r4,1360(r3)
	ctx.current_instruction = 0x880F5BB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// lwz r5,1352(r3)
	ctx.current_instruction = 0x880F5BBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r5,28264(r3)
	ctx.current_instruction = 0x880F5BC4;
	REX_STORE_U32(ctx.r3.u32 + 28264, ctx.r5.u32);
	// lwz r4,832(r3)
	ctx.current_instruction = 0x880F5BC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 832);
	// stw r4,28268(r3)
	ctx.current_instruction = 0x880F5BCC;
	REX_STORE_U32(ctx.r3.u32 + 28268, ctx.r4.u32);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880F5BD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// stw r5,28272(r3)
	ctx.current_instruction = 0x880F5BD4;
	REX_STORE_U32(ctx.r3.u32 + 28272, ctx.r5.u32);
	// lwz r4,724(r3)
	ctx.current_instruction = 0x880F5BD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// stw r4,28276(r3)
	ctx.current_instruction = 0x880F5BDC;
	REX_STORE_U32(ctx.r3.u32 + 28276, ctx.r4.u32);
	// lwz r5,728(r3)
	ctx.current_instruction = 0x880F5BE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// stw r5,28280(r3)
	ctx.current_instruction = 0x880F5BE4;
	REX_STORE_U32(ctx.r3.u32 + 28280, ctx.r5.u32);
	// lwz r4,732(r3)
	ctx.current_instruction = 0x880F5BE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 732);
	// stw r4,28284(r3)
	ctx.current_instruction = 0x880F5BEC;
	REX_STORE_U32(ctx.r3.u32 + 28284, ctx.r4.u32);
	// lwz r5,1380(r3)
	ctx.current_instruction = 0x880F5BF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// stw r5,28288(r3)
	ctx.current_instruction = 0x880F5BF4;
	REX_STORE_U32(ctx.r3.u32 + 28288, ctx.r5.u32);
	// lwz r4,1384(r3)
	ctx.current_instruction = 0x880F5BF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// stw r4,28292(r3)
	ctx.current_instruction = 0x880F5BFC;
	REX_STORE_U32(ctx.r3.u32 + 28292, ctx.r4.u32);
	// lwz r5,1388(r3)
	ctx.current_instruction = 0x880F5C00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1388);
	// stw r5,28296(r3)
	ctx.current_instruction = 0x880F5C04;
	REX_STORE_U32(ctx.r3.u32 + 28296, ctx.r5.u32);
	// lwz r4,1392(r3)
	ctx.current_instruction = 0x880F5C08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1392);
	// stw r4,28300(r3)
	ctx.current_instruction = 0x880F5C0C;
	REX_STORE_U32(ctx.r3.u32 + 28300, ctx.r4.u32);
	// lwz r5,1396(r3)
	ctx.current_instruction = 0x880F5C10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// stw r5,28304(r3)
	ctx.current_instruction = 0x880F5C14;
	REX_STORE_U32(ctx.r3.u32 + 28304, ctx.r5.u32);
	// lwz r4,1400(r3)
	ctx.current_instruction = 0x880F5C18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// stw r4,28308(r3)
	ctx.current_instruction = 0x880F5C1C;
	REX_STORE_U32(ctx.r3.u32 + 28308, ctx.r4.u32);
	// lwz r5,1404(r3)
	ctx.current_instruction = 0x880F5C20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// stw r5,28312(r3)
	ctx.current_instruction = 0x880F5C24;
	REX_STORE_U32(ctx.r3.u32 + 28312, ctx.r5.u32);
	// lwz r4,1408(r3)
	ctx.current_instruction = 0x880F5C28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r4,28316(r3)
	ctx.current_instruction = 0x880F5C2C;
	REX_STORE_U32(ctx.r3.u32 + 28316, ctx.r4.u32);
	// lwz r5,1352(r3)
	ctx.current_instruction = 0x880F5C30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// stw r5,28320(r3)
	ctx.current_instruction = 0x880F5C34;
	REX_STORE_U32(ctx.r3.u32 + 28320, ctx.r5.u32);
	// lwz r4,1364(r3)
	ctx.current_instruction = 0x880F5C38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1364);
	// stw r4,28324(r3)
	ctx.current_instruction = 0x880F5C3C;
	REX_STORE_U32(ctx.r3.u32 + 28324, ctx.r4.u32);
	// stw r11,28328(r3)
	ctx.current_instruction = 0x880F5C40;
	REX_STORE_U32(ctx.r3.u32 + 28328, ctx.r11.u32);
	// stw r10,28332(r3)
	ctx.current_instruction = 0x880F5C44;
	REX_STORE_U32(ctx.r3.u32 + 28332, ctx.r10.u32);
	// lwz r10,796(r3)
	ctx.current_instruction = 0x880F5C48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// stw r10,28336(r3)
	ctx.current_instruction = 0x880F5C4C;
	REX_STORE_U32(ctx.r3.u32 + 28336, ctx.r10.u32);
	// stw r9,28340(r3)
	ctx.current_instruction = 0x880F5C50;
	REX_STORE_U32(ctx.r3.u32 + 28340, ctx.r9.u32);
	// lwz r5,1356(r3)
	ctx.current_instruction = 0x880F5C54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1356);
	// stw r5,28344(r3)
	ctx.current_instruction = 0x880F5C58;
	REX_STORE_U32(ctx.r3.u32 + 28344, ctx.r5.u32);
	// lwz r4,1368(r3)
	ctx.current_instruction = 0x880F5C5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// stw r4,28348(r3)
	ctx.current_instruction = 0x880F5C60;
	REX_STORE_U32(ctx.r3.u32 + 28348, ctx.r4.u32);
	// lwz r10,1352(r3)
	ctx.current_instruction = 0x880F5C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r5,28352(r3)
	ctx.current_instruction = 0x880F5C6C;
	REX_STORE_U32(ctx.r3.u32 + 28352, ctx.r5.u32);
	// lwz r4,1352(r3)
	ctx.current_instruction = 0x880F5C70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// lwz r10,796(r3)
	ctx.current_instruction = 0x880F5C74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880f5c8c
	if (!ctx.cr6.eq) goto loc_880F5C8C;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x880f5c90
	if (ctx.cr6.eq) goto loc_880F5C90;
loc_880F5C8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880F5C90:
	// stw r11,28356(r3)
	ctx.current_instruction = 0x880F5C90;
	REX_STORE_U32(ctx.r3.u32 + 28356, ctx.r11.u32);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880F5C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// stw r11,28360(r3)
	ctx.current_instruction = 0x880F5C98;
	REX_STORE_U32(ctx.r3.u32 + 28360, ctx.r11.u32);
	// stw r8,28364(r3)
	ctx.current_instruction = 0x880F5C9C;
	REX_STORE_U32(ctx.r3.u32 + 28364, ctx.r8.u32);
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880F5CA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r9,r8,r10
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r9,28368(r3)
	ctx.current_instruction = 0x880F5CA8;
	REX_STORE_U32(ctx.r3.u32 + 28368, ctx.r9.u32);
	// lwz r8,732(r3)
	ctx.current_instruction = 0x880F5CAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 732);
	// stw r8,28372(r3)
	ctx.current_instruction = 0x880F5CB0;
	REX_STORE_U32(ctx.r3.u32 + 28372, ctx.r8.u32);
	// lwz r5,1380(r3)
	ctx.current_instruction = 0x880F5CB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,28376(r3)
	ctx.current_instruction = 0x880F5CBC;
	REX_STORE_U32(ctx.r3.u32 + 28376, ctx.r4.u32);
	// lwz r11,1384(r3)
	ctx.current_instruction = 0x880F5CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,28388(r3)
	ctx.current_instruction = 0x880F5CC8;
	REX_STORE_U32(ctx.r3.u32 + 28388, ctx.r6.u32);
	// stw r10,28380(r3)
	ctx.current_instruction = 0x880F5CCC;
	REX_STORE_U32(ctx.r3.u32 + 28380, ctx.r10.u32);
	// stw r7,28384(r3)
	ctx.current_instruction = 0x880F5CD0;
	REX_STORE_U32(ctx.r3.u32 + 28384, ctx.r7.u32);
	// lwz r9,1396(r3)
	ctx.current_instruction = 0x880F5CD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// stw r9,28392(r3)
	ctx.current_instruction = 0x880F5CD8;
	REX_STORE_U32(ctx.r3.u32 + 28392, ctx.r9.u32);
	// lwz r8,1400(r3)
	ctx.current_instruction = 0x880F5CDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// stw r8,28396(r3)
	ctx.current_instruction = 0x880F5CE0;
	REX_STORE_U32(ctx.r3.u32 + 28396, ctx.r8.u32);
	// lwz r7,1404(r3)
	ctx.current_instruction = 0x880F5CE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,28400(r3)
	ctx.current_instruction = 0x880F5CEC;
	REX_STORE_U32(ctx.r3.u32 + 28400, ctx.r6.u32);
	// lwz r5,1408(r3)
	ctx.current_instruction = 0x880F5CF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,28404(r3)
	ctx.current_instruction = 0x880F5CF8;
	REX_STORE_U32(ctx.r3.u32 + 28404, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F9B78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9B78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9B78) {
			switch (rex_dispatch_address) {
				case 0x880F9B80:
				case 0x880F9BFC:
				case 0x880F9C48:
				case 0x880F9C60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9B78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9B80: goto loc_880F9B80;
		case 0x880F9BFC: goto loc_880F9BFC;
		case 0x880F9C48: goto loc_880F9C48;
		case 0x880F9C60: goto loc_880F9C60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F9B80;
	__savegprlr_26(ctx, base);
loc_880F9B80:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F9B80;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// stw r10,12(r3)
	ctx.current_instruction = 0x880F9B90;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	ctx.current_instruction = 0x880F9B98;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
loc_880F9BA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r28,4(r10)
	ctx.current_instruction = 0x880F9BAC;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
	// lwz r9,12(r31)
	ctx.current_instruction = 0x880F9BB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880f9ba8
	if (ctx.cr6.lt) goto loc_880F9BA8;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r28,84(r31)
	ctx.current_instruction = 0x880F9BC0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r28,4(r31)
	ctx.current_instruction = 0x880F9BC8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// blt cr6,0x880f9c20
	if (ctx.cr6.lt) goto loc_880F9C20;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,4(r31)
	ctx.current_instruction = 0x880F9BD8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r28,88(r31)
	ctx.current_instruction = 0x880F9BDC;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x880f9bf4
	if (!ctx.cr6.gt) goto loc_880F9BF4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_880F9BF4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x88050340
	ctx.lr = 0x880F9BFC;
	sub_88050340(ctx, base);
loc_880F9BFC:
	// stw r3,84(r31)
	ctx.current_instruction = 0x880F9BFC;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,88(r31)
	ctx.current_instruction = 0x880F9C04;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bne cr6,0x880f9c20
	if (!ctx.cr6.eq) goto loc_880F9C20;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x880F9C14;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880F9C20:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880F9C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f9c8c
	if (!ctx.cr6.eq) goto loc_880F9C8C;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880F9C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880f9c8c
	if (!ctx.cr6.gt) goto loc_880F9C8C;
loc_880F9C3C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x88050340
	ctx.lr = 0x880F9C48;
	sub_88050340(ctx, base);
loc_880F9C48:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9c64
	if (ctx.cr6.eq) goto loc_880F9C64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880f9918
	ctx.lr = 0x880F9C60;
	sub_880F9918(ctx, base);
loc_880F9C60:
	// b 0x880f9c68
	goto loc_880F9C68;
loc_880F9C64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_880F9C68:
	// stw r3,0(r29)
	ctx.current_instruction = 0x880F9C68;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880F9C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f9c8c
	if (!ctx.cr6.eq) goto loc_880F9C8C;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880F9C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880f9c3c
	if (ctx.cr6.lt) goto loc_880F9C3C;
loc_880F9C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FDA90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FDA90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FDA90) {
			switch (rex_dispatch_address) {
				case 0x880FDA98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FDA90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FDA98: goto loc_880FDA98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880FDA98;
	__savegprlr_14(ctx, base);
loc_880FDA98:
	// lwz r7,27988(r3)
	ctx.current_instruction = 0x880FDA98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// lwz r5,7764(r3)
	ctx.current_instruction = 0x880FDA9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// stw r4,28(r1)
	ctx.current_instruction = 0x880FDAA0;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880fdabc
	if (ctx.cr6.eq) goto loc_880FDABC;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880FDAAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// li r6,4
	ctx.r6.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fdac0
	if (!ctx.cr6.eq) goto loc_880FDAC0;
loc_880FDABC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880FDAC0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r9,728(r3)
	ctx.current_instruction = 0x880FDAC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r31,r11,2780
	ctx.r31.s64 = ctx.r11.s64 + 2780;
	// stw r15,-168(r1)
	ctx.current_instruction = 0x880FDAD0;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r15.u32);
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// lwz r8,2780(r11)
	ctx.current_instruction = 0x880FDAD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2780);
	// add r23,r9,r8
	ctx.r23.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x880FDAE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.current_instruction = 0x880FDAE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FDAE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// addi r19,r8,1
	ctx.r19.s64 = ctx.r8.s64 + 1;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880FDAF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.current_instruction = 0x880FDAF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x880FDB00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r23,-172(r1)
	ctx.current_instruction = 0x880FDB0C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r23.u32);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// stw r10,-160(r1)
	ctx.current_instruction = 0x880FDB14;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r8,-156(r1)
	ctx.current_instruction = 0x880FDB18;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r8.u32);
	// bgt cr6,0x880fdd98
	if (ctx.cr6.gt) goto loc_880FDD98;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880fdb7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FDB7C;
	// bdzf 4*cr6+eq,0x880fdbe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FDBE8;
	// bdzf 4*cr6+eq,0x880fdcd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FDCD4;
	// bdzf 4*cr6+eq,0x880fdd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FDD20;
	// bne cr6,0x880fdd5c
	if (!ctx.cr6.eq) goto loc_880FDD5C;
	// lwz r10,7044(r3)
	ctx.current_instruction = 0x880FDB3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7044);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-276
	ctx.r9.s64 = ctx.r5.s64 + -276;
loc_880FDB54:
	// lwzu r7,276(r9)
	ctx.current_instruction = 0x880FDB54;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stbx r7,r8,r10
	ctx.current_instruction = 0x880FDB5C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,728(r3)
	ctx.current_instruction = 0x880FDB68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880fdb54
	if (ctx.cr6.lt) goto loc_880FDB54;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDB7C:
	// lwz r10,6792(r3)
	ctx.current_instruction = 0x880FDB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6792);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r7,r5,88
	ctx.r7.s64 = ctx.r5.s64 + 88;
loc_880FDB94:
	// lbz r9,0(r7)
	ctx.current_instruction = 0x880FDB94;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x880fdbb8
	if (ctx.cr6.eq) goto loc_880FDBB8;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x880fdbb8
	if (ctx.cr6.eq) goto loc_880FDBB8;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// bne cr6,0x880fdbbc
	if (!ctx.cr6.eq) goto loc_880FDBBC;
loc_880FDBB8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_880FDBBC:
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,276
	ctx.r7.s64 = ctx.r7.s64 + 276;
	// subfe r9,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r9,r8,r10
	ctx.current_instruction = 0x880FDBC8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r5,728(r3)
	ctx.current_instruction = 0x880FDBD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880fdb94
	if (ctx.cr6.lt) goto loc_880FDB94;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDBE8:
	// lwz r10,21136(r3)
	ctx.current_instruction = 0x880FDBE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21136);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880fdc90
	if (ctx.cr6.eq) goto loc_880FDC90;
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x880FDBF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fdc4c
	if (ctx.cr6.eq) goto loc_880FDC4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880fdc4c
	if (ctx.cr6.eq) goto loc_880FDC4C;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-188
	ctx.r9.s64 = ctx.r5.s64 + -188;
loc_880FDC1C:
	// lbzu r7,276(r9)
	ctx.current_instruction = 0x880FDC1C;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stbx r5,r8,r10
	ctx.current_instruction = 0x880FDC2C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r4,728(r3)
	ctx.current_instruction = 0x880FDC38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880fdc1c
	if (ctx.cr6.lt) goto loc_880FDC1C;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDC4C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-187
	ctx.r9.s64 = ctx.r5.s64 + -187;
loc_880FDC60:
	// lbzu r7,276(r9)
	ctx.current_instruction = 0x880FDC60;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stbx r5,r8,r10
	ctx.current_instruction = 0x880FDC70;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r4,728(r3)
	ctx.current_instruction = 0x880FDC7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880fdc60
	if (ctx.cr6.lt) goto loc_880FDC60;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDC90:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-188
	ctx.r9.s64 = ctx.r5.s64 + -188;
loc_880FDCA4:
	// lbzu r7,276(r9)
	ctx.current_instruction = 0x880FDCA4;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stbx r5,r8,r10
	ctx.current_instruction = 0x880FDCB4;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r4,728(r3)
	ctx.current_instruction = 0x880FDCC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880fdca4
	if (ctx.cr6.lt) goto loc_880FDCA4;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDCD4:
	// lwz r10,7836(r3)
	ctx.current_instruction = 0x880FDCD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7836);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-184
	ctx.r9.s64 = ctx.r5.s64 + -184;
loc_880FDCEC:
	// lwzu r7,276(r9)
	ctx.current_instruction = 0x880FDCEC;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// srawi r7,r7,28
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 28;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stbx r7,r8,r10
	ctx.current_instruction = 0x880FDD00;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r5,728(r3)
	ctx.current_instruction = 0x880FDD0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880fdcec
	if (ctx.cr6.lt) goto loc_880FDCEC;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDD20:
	// lwz r10,28416(r3)
	ctx.current_instruction = 0x880FDD20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28416);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-248
	ctx.r9.s64 = ctx.r5.s64 + -248;
loc_880FDD38:
	// lwzu r7,276(r9)
	ctx.current_instruction = 0x880FDD38;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stbx r7,r8,r10
	ctx.current_instruction = 0x880FDD40;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,728(r3)
	ctx.current_instruction = 0x880FDD48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880fdd38
	if (ctx.cr6.lt) goto loc_880FDD38;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDD5C:
	// lwz r10,28424(r3)
	ctx.current_instruction = 0x880FDD5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28424);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdda0
	if (!ctx.cr6.gt) goto loc_880FDDA0;
	// addi r9,r5,-152
	ctx.r9.s64 = ctx.r5.s64 + -152;
loc_880FDD74:
	// lwzu r7,276(r9)
	ctx.current_instruction = 0x880FDD74;
	ea = 276 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stbx r7,r8,r10
	ctx.current_instruction = 0x880FDD7C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,728(r3)
	ctx.current_instruction = 0x880FDD88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880fdd74
	if (ctx.cr6.lt) goto loc_880FDD74;
	// b 0x880fdda0
	goto loc_880FDDA0;
loc_880FDD98:
	// lwz r10,-156(r1)
	ctx.current_instruction = 0x880FDD98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r11,-156(r1)
	ctx.current_instruction = 0x880FDD9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
loc_880FDDA0:
	// lwz r9,728(r3)
	ctx.current_instruction = 0x880FDDA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,724(r3)
	ctx.current_instruction = 0x880FDDA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// subfc r6,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// eqv r5,r11,r9
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// stw r4,-164(r1)
	ctx.current_instruction = 0x880FDDCC;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// ble cr6,0x880fde7c
	if (!ctx.cr6.gt) goto loc_880FDE7C;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_880FDDD8:
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880FDDD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fde6c
	if (!ctx.cr6.gt) goto loc_880FDE6C;
loc_880FDDE8:
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880fde3c
	if (ctx.cr0.eq) goto loc_880FDE3C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880fde04
	if (!ctx.cr6.eq) goto loc_880FDE04;
	// lbz r11,-1(r10)
	ctx.current_instruction = 0x880FDDF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x880fde40
	goto loc_880FDE40;
loc_880FDE04:
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880FDE04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880fde20
	if (!ctx.cr6.eq) goto loc_880FDE20;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r5,0(r6)
	ctx.current_instruction = 0x880FDE14;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// b 0x880fde40
	goto loc_880FDE40;
loc_880FDE20:
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r6,-1(r10)
	ctx.current_instruction = 0x880FDE24;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lbz r6,0(r5)
	ctx.current_instruction = 0x880FDE2C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x880fde40
	if (ctx.cr6.eq) goto loc_880FDE40;
loc_880FDE3C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_880FDE40:
	// lbz r6,0(r10)
	ctx.current_instruction = 0x880FDE40;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbu r11,1(r8)
	ctx.current_instruction = 0x880FDE5C;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880FDE60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880fdde8
	if (ctx.cr6.lt) goto loc_880FDDE8;
loc_880FDE6C:
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FDE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fddd8
	if (ctx.cr6.lt) goto loc_880FDDD8;
loc_880FDE7C:
	// lwz r9,728(r3)
	ctx.current_instruction = 0x880FDE7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fdebc
	if (!ctx.cr6.gt) goto loc_880FDEBC;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_880FDE94:
	// lbzx r7,r11,r8
	ctx.current_instruction = 0x880FDE94;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// xor r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbx r6,r11,r8
	ctx.current_instruction = 0x880FDEA8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,728(r3)
	ctx.current_instruction = 0x880FDEB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880fde94
	if (ctx.cr6.lt) goto loc_880FDE94;
loc_880FDEBC:
	// lwz r9,728(r3)
	ctx.current_instruction = 0x880FDEBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fded4
	if (ctx.cr6.eq) goto loc_880FDED4;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,2
	ctx.r25.s64 = 2;
loc_880FDED4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880fdf48
	if (!ctx.cr6.lt) goto loc_880FDF48;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lwz r29,728(r3)
	ctx.current_instruction = 0x880FDEE0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// addi r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r26,r10,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r7,r7,23344
	ctx.r7.s64 = ctx.r7.s64 + 23344;
loc_880FDEF8:
	// lbzx r6,r28,r11
	ctx.current_instruction = 0x880FDEF8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r31,r9,r26
	ctx.current_instruction = 0x880FDEFC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// lbzx r30,r27,r11
	ctx.current_instruction = 0x880FDF00;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbz r22,0(r9)
	ctx.current_instruction = 0x880FDF08;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r6,r31
	ctx.r6.s64 = ctx.r31.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// extsb r31,r22
	ctx.r31.s64 = ctx.r22.s8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lwzx r6,r5,r7
	ctx.current_instruction = 0x880FDF34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r5,r31,r7
	ctx.current_instruction = 0x880FDF38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r25,r6,r25
	ctx.r25.u64 = ctx.r6.u64 + ctx.r25.u64;
	// add r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 + ctx.r24.u64;
	// blt cr6,0x880fdef8
	if (ctx.cr6.lt) goto loc_880FDEF8;
loc_880FDF48:
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880fdf60
	if (!ctx.cr6.lt) goto loc_880FDF60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,-172(r1)
	ctx.current_instruction = 0x880FDF54;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r25.u32);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stw r11,-168(r1)
	ctx.current_instruction = 0x880FDF5C;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
loc_880FDF60:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880fdf74
	if (!ctx.cr6.lt) goto loc_880FDF74;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,-172(r1)
	ctx.current_instruction = 0x880FDF6C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r24.u32);
	// stw r11,-168(r1)
	ctx.current_instruction = 0x880FDF70;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
loc_880FDF74:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r14,724(r3)
	ctx.current_instruction = 0x880FDF78;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// mulhwu r9,r14,r11
	ctx.r9.u64 = (uint64_t(ctx.r14.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf. r6,r7,r14
	ctx.r6.u64 = ctx.r14.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x880fe0c8
	if (!ctx.cr0.eq) goto loc_880FE0C8;
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880FDF98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mulhwu r9,r5,r11
	ctx.r9.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf. r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x880fe0c8
	if (ctx.cr0.eq) goto loc_880FE0C8;
	// clrlwi r16,r5,31
	ctx.r16.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880fe204
	if (!ctx.cr6.gt) goto loc_880FE204;
	// rotlwi r9,r14,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r6,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// add r21,r5,r11
	ctx.r21.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r24,r11,13320
	ctx.r24.s64 = ctx.r11.s64 + 13320;
loc_880FDFEC:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// cmpw cr6,r16,r5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880fe0bc
	if (!ctx.cr6.lt) goto loc_880FE0BC;
	// lwz r23,720(r3)
	ctx.current_instruction = 0x880FDFF8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_880FE004:
	// add r11,r22,r9
	ctx.r11.u64 = ctx.r22.u64 + ctx.r9.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// lbzx r31,r7,r11
	ctx.current_instruction = 0x880FE010;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r28,r11,r8
	ctx.current_instruction = 0x880FE014;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r30,r6,r11
	ctx.current_instruction = 0x880FE018;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// lbzx r29,r11,r10
	ctx.current_instruction = 0x880FE020;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbzx r28,r11,r8
	ctx.current_instruction = 0x880FE038;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r27,r6,r11
	ctx.current_instruction = 0x880FE040;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r25,r11,r10
	ctx.current_instruction = 0x880FE044;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r29,r7,r11
	ctx.current_instruction = 0x880FE04C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// extsb r28,r27
	ctx.r28.s64 = ctx.r27.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// extsb r27,r25
	ctx.r27.s64 = ctx.r25.s8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r25,r28,r27
	ctx.r25.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r26,r7,r11
	ctx.current_instruction = 0x880FE068;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r20,r11,r8
	ctx.current_instruction = 0x880FE06C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbzx r28,r6,r11
	ctx.current_instruction = 0x880FE074;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r29,r26
	ctx.r29.s64 = ctx.r26.s8;
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x880FE07C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r26,r20
	ctx.r26.s64 = ctx.r20.s8;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r30,r28,r27
	ctx.r30.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r24
	ctx.current_instruction = 0x880FE0A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r11,r11,r24
	ctx.current_instruction = 0x880FE0AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// add r19,r31,r19
	ctx.r19.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
	// blt cr6,0x880fe004
	if (ctx.cr6.lt) goto loc_880FE004;
loc_880FE0BC:
	// add r22,r21,r22
	ctx.r22.u64 = ctx.r21.u64 + ctx.r22.u64;
	// bdnz 0x880fdfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880FDFEC;
	// b 0x880fe204
	goto loc_880FE204;
loc_880FE0C8:
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880FE0C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// clrlwi r15,r14,31
	ctx.r15.u64 = ctx.r14.u32 & 0x1;
	// mulhwu r11,r5,r11
	ctx.r11.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r15,r14
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r14.s32, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r16,r9,r5
	ctx.r16.u64 = ctx.r5.u64 - ctx.r9.u64;
	// bge cr6,0x880fe204
	if (!ctx.cr6.lt) goto loc_880FE204;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FE0EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mullw r20,r5,r15
	ctx.r20.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r15.s32);
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r15.u64;
	// rlwinm r17,r5,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r22,r11,13320
	ctx.r22.s64 = ctx.r11.s64 + 13320;
loc_880FE114:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// cmpw cr6,r16,r5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880fe1fc
	if (!ctx.cr6.lt) goto loc_880FE1FC;
	// lwz r21,720(r3)
	ctx.current_instruction = 0x880FE120;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
loc_880FE134:
	// add r11,r20,r9
	ctx.r11.u64 = ctx.r20.u64 + ctx.r9.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// lbzx r4,r7,r11
	ctx.current_instruction = 0x880FE140;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r28,r6,r11
	ctx.current_instruction = 0x880FE144;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r29,r4
	ctx.r29.s64 = ctx.r4.s8;
	// lbzx r27,r11,r8
	ctx.current_instruction = 0x880FE14C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r4,r31,r11
	ctx.current_instruction = 0x880FE150;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r25,r28
	ctx.r25.s64 = ctx.r28.s8;
	// lbzx r26,r30,r11
	ctx.current_instruction = 0x880FE158;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r28,r27
	ctx.r28.s64 = ctx.r27.s8;
	// lbzx r23,r11,r10
	ctx.current_instruction = 0x880FE160;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// extsb r27,r4
	ctx.r27.s64 = ctx.r4.s8;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// lbzx r4,r7,r11
	ctx.current_instruction = 0x880FE178;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// lbzx r28,r6,r11
	ctx.current_instruction = 0x880FE180;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r24,r27,r26
	ctx.r24.u64 = ctx.r27.u64 + ctx.r26.u64;
	// extsb r27,r4
	ctx.r27.s64 = ctx.r4.s8;
	// lbzx r25,r31,r11
	ctx.current_instruction = 0x880FE18C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r28,r11,r8
	ctx.current_instruction = 0x880FE194;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r4,r30,r11
	ctx.current_instruction = 0x880FE198;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x880FE19C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// stb r28,-176(r1)
	ctx.current_instruction = 0x880FE1A4;
	REX_STORE_U8(ctx.r1.u32 + -176, ctx.r28.u8);
	// extsb r28,r25
	ctx.r28.s64 = ctx.r25.s8;
	// stb r11,-175(r1)
	ctx.current_instruction = 0x880FE1AC;
	REX_STORE_U8(ctx.r1.u32 + -175, ctx.r11.u8);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// lbz r4,-176(r1)
	ctx.current_instruction = 0x880FE1B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -176);
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// lbz r4,-175(r1)
	ctx.current_instruction = 0x880FE1BC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -175);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// extsb r26,r4
	ctx.r26.s64 = ctx.r4.s8;
	// add r11,r24,r23
	ctx.r11.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r4,r22
	ctx.current_instruction = 0x880FE1E4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// lwzx r11,r11,r22
	ctx.current_instruction = 0x880FE1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// add r19,r29,r19
	ctx.r19.u64 = ctx.r29.u64 + ctx.r19.u64;
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
	// blt cr6,0x880fe134
	if (ctx.cr6.lt) goto loc_880FE134;
	// lwz r4,-164(r1)
	ctx.current_instruction = 0x880FE1F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
loc_880FE1FC:
	// add r20,r17,r20
	ctx.r20.u64 = ctx.r17.u64 + ctx.r20.u64;
	// bdnz 0x880fe114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880FE114;
loc_880FE204:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880fe294
	if (!ctx.cr6.gt) goto loc_880FE294;
loc_880FE210:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880fe248
	if (!ctx.cr6.gt) goto loc_880FE248;
loc_880FE21C:
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r6,r9,r8
	ctx.current_instruction = 0x880FE224;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880fe244
	if (!ctx.cr6.eq) goto loc_880FE244;
	// lwz r9,724(r3)
	ctx.current_instruction = 0x880FE230;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fe21c
	if (ctx.cr6.lt) goto loc_880FE21C;
	// b 0x880fe248
	goto loc_880FE248;
loc_880FE244:
	// add r19,r14,r19
	ctx.r19.u64 = ctx.r14.u64 + ctx.r19.u64;
loc_880FE248:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880fe280
	if (!ctx.cr6.gt) goto loc_880FE280;
loc_880FE254:
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r6,r9,r7
	ctx.current_instruction = 0x880FE25C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880fe27c
	if (!ctx.cr6.eq) goto loc_880FE27C;
	// lwz r9,724(r3)
	ctx.current_instruction = 0x880FE268;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fe254
	if (ctx.cr6.lt) goto loc_880FE254;
	// b 0x880fe280
	goto loc_880FE280;
loc_880FE27C:
	// add r18,r14,r18
	ctx.r18.u64 = ctx.r14.u64 + ctx.r18.u64;
loc_880FE280:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r7,r16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x880fe210
	if (ctx.cr6.lt) goto loc_880FE210;
loc_880FE294:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x880fe304
	if (ctx.cr6.eq) goto loc_880FE304;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpw cr6,r16,r5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880fe2d0
	if (!ctx.cr6.lt) goto loc_880FE2D0;
loc_880FE2A8:
	// lbzx r9,r11,r8
	ctx.current_instruction = 0x880FE2A8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880fe2c8
	if (!ctx.cr6.eq) goto loc_880FE2C8;
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880FE2B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fe2a8
	if (ctx.cr6.lt) goto loc_880FE2A8;
	// b 0x880fe2d0
	goto loc_880FE2D0;
loc_880FE2C8:
	// subf r11,r16,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r16.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_880FE2D0:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpw cr6,r16,r5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880fe304
	if (!ctx.cr6.lt) goto loc_880FE304;
loc_880FE2DC:
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880FE2DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880fe2fc
	if (!ctx.cr6.eq) goto loc_880FE2FC;
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880FE2E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fe2dc
	if (ctx.cr6.lt) goto loc_880FE2DC;
	// b 0x880fe304
	goto loc_880FE304;
loc_880FE2FC:
	// subf r11,r16,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r16.u64;
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_880FE304:
	// lwz r30,-172(r1)
	ctx.current_instruction = 0x880FE304;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880fe31c
	if (!ctx.cr6.lt) goto loc_880FE31C;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x880fe320
	goto loc_880FE320;
loc_880FE31C:
	// lwz r31,-168(r1)
	ctx.current_instruction = 0x880FE31C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
loc_880FE320:
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880fe330
	if (!ctx.cr6.lt) goto loc_880FE330;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// li r31,4
	ctx.r31.s64 = 4;
loc_880FE330:
	// lwz r11,-160(r1)
	ctx.current_instruction = 0x880FE330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r7,r14,r11
	ctx.r7.u64 = ctx.r14.u64 + ctx.r11.u64;
	// ble cr6,0x880fe38c
	if (!ctx.cr6.gt) goto loc_880FE38C;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FE340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880FE34C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880fe384
	if (!ctx.cr6.gt) goto loc_880FE384;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_880FE35C:
	// lbzx r10,r10,r8
	ctx.current_instruction = 0x880FE35C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fe380
	if (!ctx.cr6.eq) goto loc_880FE380;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880FE368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x880fe35c
	if (ctx.cr6.lt) goto loc_880FE35C;
	// b 0x880fe384
	goto loc_880FE384;
loc_880FE380:
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
loc_880FE384:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bdnz 0x880fe34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880FE34C;
loc_880FE38C:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880fe39c
	if (!ctx.cr6.lt) goto loc_880FE39C;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r31,5
	ctx.r31.s64 = 5;
loc_880FE39C:
	// lwz r11,-156(r1)
	ctx.current_instruction = 0x880FE39C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// ble cr6,0x880fe3f8
	if (!ctx.cr6.gt) goto loc_880FE3F8;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880FE3B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
loc_880FE3B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880fe3ec
	if (!ctx.cr6.gt) goto loc_880FE3EC;
loc_880FE3C0:
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r10,r8
	ctx.current_instruction = 0x880FE3C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fe3e8
	if (!ctx.cr6.eq) goto loc_880FE3E8;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880FE3D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880fe3c0
	if (ctx.cr6.lt) goto loc_880FE3C0;
	// b 0x880fe3ec
	goto loc_880FE3EC;
loc_880FE3E8:
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
loc_880FE3EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880fe3b4
	if (ctx.cr6.lt) goto loc_880FE3B4;
loc_880FE3F8:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880fe404
	if (!ctx.cr6.lt) goto loc_880FE404;
	// li r31,6
	ctx.r31.s64 = 6;
loc_880FE404:
	// lwz r11,2260(r3)
	ctx.current_instruction = 0x880FE404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fe428
	if (!ctx.cr6.eq) goto loc_880FE428;
	// lwz r11,2272(r3)
	ctx.current_instruction = 0x880FE410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fe428
	if (!ctx.cr6.eq) goto loc_880FE428;
	// lwz r11,2824(r3)
	ctx.current_instruction = 0x880FE41C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fe430
	if (ctx.cr6.eq) goto loc_880FE430;
loc_880FE428:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x880fe440
	goto loc_880FE440;
loc_880FE430:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x880fe440
	if (ctx.cr6.eq) goto loc_880FE440;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// or r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_880FE440:
	// lwz r11,28(r1)
	ctx.current_instruction = 0x880FE440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880fe494
	if (ctx.cr6.gt) goto loc_880FE494;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880fe470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FE470;
	// bdzf 4*cr6+eq,0x880fe478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FE478;
	// bdzf 4*cr6+eq,0x880fe480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FE480;
	// bdzf 4*cr6+eq,0x880fe488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FE488;
	// bne cr6,0x880fe490
	if (!ctx.cr6.eq) goto loc_880FE490;
	// stw r31,2244(r3)
	ctx.current_instruction = 0x880FE468;
	REX_STORE_U32(ctx.r3.u32 + 2244, ctx.r31.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FE470:
	// stw r31,2248(r3)
	ctx.current_instruction = 0x880FE470;
	REX_STORE_U32(ctx.r3.u32 + 2248, ctx.r31.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FE478:
	// stw r31,28412(r3)
	ctx.current_instruction = 0x880FE478;
	REX_STORE_U32(ctx.r3.u32 + 28412, ctx.r31.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FE480:
	// stw r31,2256(r3)
	ctx.current_instruction = 0x880FE480;
	REX_STORE_U32(ctx.r3.u32 + 2256, ctx.r31.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FE488:
	// stw r31,28408(r3)
	ctx.current_instruction = 0x880FE488;
	REX_STORE_U32(ctx.r3.u32 + 28408, ctx.r31.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FE490:
	// stw r31,28420(r3)
	ctx.current_instruction = 0x880FE490;
	REX_STORE_U32(ctx.r3.u32 + 28420, ctx.r31.u32);
loc_880FE494:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881182B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881182B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881182B0) {
			switch (rex_dispatch_address) {
				case 0x881182DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881182B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881182DC: goto loc_881182DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881182B4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881182B8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881182BC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881182C0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881182D0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,0(r31)
	ctx.current_instruction = 0x881182D4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x880cb730
	ctx.lr = 0x881182DC;
	sub_880CB730(ctx, base);
loc_881182DC:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881182f4
	if (!ctx.cr6.eq) goto loc_881182F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88118338
	goto loc_88118338;
loc_881182F4:
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881182F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,74(r7)
	ctx.current_instruction = 0x881182F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118338
	if (ctx.cr6.eq) goto loc_88118338;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88118308:
	// lwz r10,80(r7)
	ctx.current_instruction = 0x88118308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mulli r8,r11,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88118310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r10,16(r10)
	ctx.current_instruction = 0x88118320;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r31)
	ctx.current_instruction = 0x88118328;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lhz r5,74(r7)
	ctx.current_instruction = 0x8811832C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 74);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x88118308
	if (ctx.cr6.lt) goto loc_88118308;
loc_88118338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8811833C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88118344;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88118348;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88118C00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88118C00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88118C00) {
			switch (rex_dispatch_address) {
				case 0x88118C08:
				case 0x88118C34:
				case 0x88118C58:
				case 0x88118C68:
				case 0x88118CA8:
				case 0x88118D54:
				case 0x88118D68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88118C00;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88118C08: goto loc_88118C08;
		case 0x88118C34: goto loc_88118C34;
		case 0x88118C58: goto loc_88118C58;
		case 0x88118C68: goto loc_88118C68;
		case 0x88118CA8: goto loc_88118CA8;
		case 0x88118D54: goto loc_88118D54;
		case 0x88118D68: goto loc_88118D68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88118C08;
	__savegprlr_28(ctx, base);
loc_88118C08:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88118C08;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,28(r3)
	ctx.current_instruction = 0x88118C10;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x88118C18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r31,80(r1)
	ctx.current_instruction = 0x88118C1C;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88118C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x88118C28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88118C34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88118C34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88118d78
	if (ctx.cr6.lt) goto loc_88118D78;
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r3,48(r30)
	ctx.current_instruction = 0x88118C40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,8(r30)
	ctx.current_instruction = 0x88118C48;
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r29.u64);
	// std r29,32(r30)
	ctx.current_instruction = 0x88118C4C;
	REX_STORE_U64(ctx.r30.u32 + 32, ctx.r29.u64);
	// std r29,40(r30)
	ctx.current_instruction = 0x88118C50;
	REX_STORE_U64(ctx.r30.u32 + 40, ctx.r29.u64);
	// bl 0x88052d90
	ctx.lr = 0x88118C58;
	sub_88052D90(ctx, base);
loc_88118C58:
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r3,52(r30)
	ctx.current_instruction = 0x88118C5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88118C68;
	sub_88052D90(ctx, base);
loc_88118C68:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,56(r30)
	ctx.current_instruction = 0x88118C6C;
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,60(r30)
	ctx.current_instruction = 0x88118C74;
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// sth r31,64(r30)
	ctx.current_instruction = 0x88118C7C;
	REX_STORE_U16(ctx.r30.u32 + 64, ctx.r31.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r30)
	ctx.current_instruction = 0x88118C84;
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r31,84(r30)
	ctx.current_instruction = 0x88118C88;
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	ctx.current_instruction = 0x88118C8C;
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r31,92(r30)
	ctx.current_instruction = 0x88118C90;
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stw r31,96(r30)
	ctx.current_instruction = 0x88118C94;
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// std r31,104(r30)
	ctx.current_instruction = 0x88118C98;
	REX_STORE_U64(ctx.r30.u32 + 104, ctx.r31.u64);
	// stw r31,84(r1)
	ctx.current_instruction = 0x88118C9C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r3,148(r30)
	ctx.current_instruction = 0x88118CA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x880cb758
	ctx.lr = 0x88118CA8;
	sub_880CB758(ctx, base);
loc_88118CA8:
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r29,r10,22
	ctx.r29.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x88118d5c
	if (ctx.cr6.eq) goto loc_88118D5C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88118d78
	if (ctx.cr6.lt) goto loc_88118D78;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88118CC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88118d78
	if (ctx.cr6.lt) goto loc_88118D78;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88118CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118d40
	if (ctx.cr6.eq) goto loc_88118D40;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118CD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x88118cec
	if (!ctx.cr6.eq) goto loc_88118CEC;
	// stw r28,4(r11)
	ctx.current_instruction = 0x88118CE4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x88118cf8
	goto loc_88118CF8;
loc_88118CEC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88118cfc
	if (!ctx.cr6.eq) goto loc_88118CFC;
	// stw r31,4(r11)
	ctx.current_instruction = 0x88118CF4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_88118CF8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88118CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88118CFC:
	// stw r31,28(r11)
	ctx.current_instruction = 0x88118CFC;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88118D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r11)
	ctx.current_instruction = 0x88118D04;
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r31.u8);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88118D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r10)
	ctx.current_instruction = 0x88118D0C;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88118D10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r9)
	ctx.current_instruction = 0x88118D14;
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88118D18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r8)
	ctx.current_instruction = 0x88118D1C;
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88118D20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r7)
	ctx.current_instruction = 0x88118D24;
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r31.u32);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x88118D28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r6)
	ctx.current_instruction = 0x88118D2C;
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x88118D30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r5)
	ctx.current_instruction = 0x88118D34;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88118D38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r4)
	ctx.current_instruction = 0x88118D3C;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
loc_88118D40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.current_instruction = 0x88118D44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88118D4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x88118D54;
	sub_880CB7C0(ctx, base);
loc_88118D54:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x88118cc4
	if (!ctx.cr6.eq) goto loc_88118CC4;
loc_88118D5C:
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88118D5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r30)
	ctx.current_instruction = 0x88118D60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x88118D68;
	sub_880CB828(ctx, base);
loc_88118D68:
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r29.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_88118D78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811CEC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811CEC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811CEC0) {
			switch (rex_dispatch_address) {
				case 0x8811CEC8:
				case 0x8811CEFC:
				case 0x8811CF3C:
				case 0x8811CFB8:
				case 0x8811D00C:
				case 0x8811D08C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811CEC0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811CEC8: goto loc_8811CEC8;
		case 0x8811CEFC: goto loc_8811CEFC;
		case 0x8811CF3C: goto loc_8811CF3C;
		case 0x8811CFB8: goto loc_8811CFB8;
		case 0x8811D00C: goto loc_8811D00C;
		case 0x8811D08C: goto loc_8811D08C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8811CEC8;
	__savegprlr_25(ctx, base);
loc_8811CEC8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8811CEC8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,28(r3)
	ctx.current_instruction = 0x8811CED0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	ctx.current_instruction = 0x8811CED8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	ctx.current_instruction = 0x8811CEE0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stb r26,80(r1)
	ctx.current_instruction = 0x8811CEE4;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8811CEE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811CEF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811CEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811CEFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811d260
	if (ctx.cr6.lt) goto loc_8811D260;
	// lwz r31,48(r27)
	ctx.current_instruction = 0x8811CF04;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8811CF10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r26,68(r31)
	ctx.current_instruction = 0x8811CF14;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// stw r26,72(r31)
	ctx.current_instruction = 0x8811CF18;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// blt cr6,0x8811d0d8
	if (ctx.cr6.lt) goto loc_8811D0D8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x88119100
	ctx.lr = 0x8811CF3C;
	sub_88119100(ctx, base);
loc_8811CF3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811d260
	if (ctx.cr6.lt) goto loc_8811D260;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8811CF44;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r26,0(r31)
	ctx.current_instruction = 0x8811CF48;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// rlwinm r9,r10,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// stw r26,12(r31)
	ctx.current_instruction = 0x8811CF50;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r26,16(r31)
	ctx.current_instruction = 0x8811CF58;
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r26.u8);
	// stw r9,4(r31)
	ctx.current_instruction = 0x8811CF5C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811d018
	if (ctx.cr6.eq) goto loc_8811D018;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811cf84
	if (ctx.cr6.eq) goto loc_8811CF84;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r31)
	ctx.current_instruction = 0x8811CF78;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811CF84:
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// stb r30,16(r31)
	ctx.current_instruction = 0x8811CF94;
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8811CFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811CFAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811CFB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811CFB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811d260
	if (ctx.cr6.lt) goto loc_8811D260;
	// ld r10,8(r27)
	ctx.current_instruction = 0x8811CFC0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8811CFCC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,8(r27)
	ctx.current_instruction = 0x8811CFD8;
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// lbz r10,16(r31)
	ctx.current_instruction = 0x8811CFDC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stw r9,12(r31)
	ctx.current_instruction = 0x8811CFE8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x8811d0d8
	if (ctx.cr6.gt) goto loc_8811D0D8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x88119100
	ctx.lr = 0x8811D00C;
	sub_88119100(ctx, base);
loc_8811D00C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811d260
	if (ctx.cr6.lt) goto loc_8811D260;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8811D014;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8811D018:
	// lwz r9,12(r31)
	ctx.current_instruction = 0x8811D018;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r10,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,17(r31)
	ctx.current_instruction = 0x8811D028;
	REX_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// stw r9,20(r31)
	ctx.current_instruction = 0x8811D02C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x8811d03c
	if (ctx.cr6.eq) goto loc_8811D03C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
loc_8811D03C:
	// rlwinm r11,r10,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stb r11,18(r31)
	ctx.current_instruction = 0x8811D044;
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// beq cr6,0x8811d0d8
	if (ctx.cr6.eq) goto loc_8811D0D8;
	// rlwinm r11,r10,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8811D050;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r11,19(r31)
	ctx.current_instruction = 0x8811D05C;
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r11.u8);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// stw r10,8(r31)
	ctx.current_instruction = 0x8811D064;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	ctx.current_instruction = 0x8811D068;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8811d0d8
	if (ctx.cr6.gt) goto loc_8811D0D8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88119100
	ctx.lr = 0x8811D08C;
	sub_88119100(ctx, base);
loc_8811D08C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811d260
	if (ctx.cr6.lt) goto loc_8811D260;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8811D094;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r9,24(r31)
	ctx.current_instruction = 0x8811D0A0;
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r9.u8);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// stb r8,25(r31)
	ctx.current_instruction = 0x8811D0A8;
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r8.u8);
	// beq cr6,0x8811d100
	if (ctx.cr6.eq) goto loc_8811D100;
	// rlwinm r11,r10,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
	// rlwinm r11,r10,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stb r11,25(r31)
	ctx.current_instruction = 0x8811D0CC;
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8811d0e8
	if (!ctx.cr6.eq) goto loc_8811D0E8;
loc_8811D0D8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811D0E8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8811d0f4
	if (!ctx.cr6.lt) goto loc_8811D0F4;
	// stb r11,24(r31)
	ctx.current_instruction = 0x8811D0F0;
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_8811D0F4:
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
loc_8811D100:
	// lwz r10,12(r31)
	ctx.current_instruction = 0x8811D100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,72(r31)
	ctx.current_instruction = 0x8811D104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lbz r11,17(r31)
	ctx.current_instruction = 0x8811D108;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stw r10,12(r31)
	ctx.current_instruction = 0x8811D114;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,28(r31)
	ctx.current_instruction = 0x8811D11C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,72(r31)
	ctx.current_instruction = 0x8811D120;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// beq cr6,0x8811d150
	if (ctx.cr6.eq) goto loc_8811D150;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8811d144
	if (ctx.cr6.eq) goto loc_8811D144;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8811d15c
	if (!ctx.cr6.eq) goto loc_8811D15C;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8811d158
	goto loc_8811D158;
loc_8811D144:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8811d158
	goto loc_8811D158;
loc_8811D150:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8811D158:
	// stw r11,68(r31)
	ctx.current_instruction = 0x8811D158;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8811D15C:
	// lbz r11,19(r31)
	ctx.current_instruction = 0x8811D15C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// stw r10,36(r31)
	ctx.current_instruction = 0x8811D160;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8811d194
	if (ctx.cr6.eq) goto loc_8811D194;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8811d188
	if (ctx.cr6.eq) goto loc_8811D188;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8811d1a0
	if (!ctx.cr6.eq) goto loc_8811D1A0;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D17C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8811d19c
	goto loc_8811D19C;
loc_8811D188:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8811d19c
	goto loc_8811D19C;
loc_8811D194:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8811D19C:
	// stw r11,68(r31)
	ctx.current_instruction = 0x8811D19C;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8811D1A0:
	// lbz r11,18(r31)
	ctx.current_instruction = 0x8811D1A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// stw r10,44(r31)
	ctx.current_instruction = 0x8811D1A4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8811d1d8
	if (ctx.cr6.eq) goto loc_8811D1D8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8811d1cc
	if (ctx.cr6.eq) goto loc_8811D1CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8811d1e4
	if (!ctx.cr6.eq) goto loc_8811D1E4;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D1C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8811d1e0
	goto loc_8811D1E0;
loc_8811D1CC:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D1CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8811d1e0
	goto loc_8811D1E0;
loc_8811D1D8:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D1D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8811D1E0:
	// stw r11,68(r31)
	ctx.current_instruction = 0x8811D1E0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8811D1E4:
	// lbz r11,25(r31)
	ctx.current_instruction = 0x8811D1E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8811d210
	if (ctx.cr6.eq) goto loc_8811D210;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8811d208
	if (ctx.cr6.eq) goto loc_8811D208;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8811d218
	if (!ctx.cr6.eq) goto loc_8811D218;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x8811d214
	goto loc_8811D214;
loc_8811D208:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// b 0x8811d214
	goto loc_8811D214;
loc_8811D210:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_8811D214:
	// stw r11,72(r31)
	ctx.current_instruction = 0x8811D214;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8811D218:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8811D218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x8811D21C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,68(r31)
	ctx.current_instruction = 0x8811D228;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x8811d23c
	if (ctx.cr6.eq) goto loc_8811D23C;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8811D230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8811d0d8
	if (!ctx.cr6.eq) goto loc_8811D0D8;
loc_8811D23C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8811D23C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,56(r31)
	ctx.current_instruction = 0x8811D240;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stb r26,26(r31)
	ctx.current_instruction = 0x8811D244;
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r26.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r26,27(r31)
	ctx.current_instruction = 0x8811D24C;
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r26.u8);
	// stw r25,60(r31)
	ctx.current_instruction = 0x8811D250;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// beq cr6,0x8811d260
	if (ctx.cr6.eq) goto loc_8811D260;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	ctx.current_instruction = 0x8811D25C;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8811D260:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8811d28c
	if (!ctx.cr6.eq) goto loc_8811D28C;
	// lwz r11,4(r27)
	ctx.current_instruction = 0x8811D270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// ld r10,24(r27)
	ctx.current_instruction = 0x8811D278;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 24);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8811D27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r27)
	ctx.current_instruction = 0x8811D280;
	REX_STORE_U32(ctx.r27.u32 + 80, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,32(r27)
	ctx.current_instruction = 0x8811D288;
	REX_STORE_U64(ctx.r27.u32 + 32, ctx.r8.u64);
loc_8811D28C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881243D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881243D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881243D8) {
			switch (rex_dispatch_address) {
				case 0x881243E0:
				case 0x8812447C:
				case 0x881244D4:
				case 0x881244F0:
				case 0x88124528:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881243D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881243E0: goto loc_881243E0;
		case 0x8812447C: goto loc_8812447C;
		case 0x881244D4: goto loc_881244D4;
		case 0x881244F0: goto loc_881244F0;
		case 0x88124528: goto loc_88124528;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881243E0;
	__savegprlr_26(ctx, base);
loc_881243E0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881243E0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,44(r3)
	ctx.current_instruction = 0x881243E4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881243F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// ld r10,40(r27)
	ctx.current_instruction = 0x88124400;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 40);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x8812441c
	if (!ctx.cr6.gt) goto loc_8812441C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8812441C:
	// lwz r9,16(r27)
	ctx.current_instruction = 0x8812441C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r9)
	ctx.current_instruction = 0x88124428;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88124440
	if (ctx.cr6.eq) goto loc_88124440;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88124434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x88124438;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8812443C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_88124440:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x88124468
	if (!ctx.cr6.lt) goto loc_88124468;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88124468:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.current_instruction = 0x8812446C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb2c0
	ctx.lr = 0x8812447C;
	sub_880CB2C0(ctx, base);
loc_8812447C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812448C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8812449C:
	// stdu r9,8(r11)
	ctx.current_instruction = 0x8812449C;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8812449c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812449C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881244A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r30,0(r11)
	ctx.current_instruction = 0x881244AC;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881244B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r10)
	ctx.current_instruction = 0x881244B4;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881244B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.current_instruction = 0x881244BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r11)
	ctx.current_instruction = 0x881244C0;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881244C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r11)
	ctx.current_instruction = 0x881244C8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881244CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x881238b8
	ctx.lr = 0x881244D4;
	sub_881238B8(ctx, base);
loc_881244D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88123fc8
	ctx.lr = 0x881244F0;
	sub_88123FC8(ctx, base);
loc_881244F0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881244FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	ctx.current_instruction = 0x88124500;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8812450C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812450C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124528
	if (ctx.cr6.eq) goto loc_88124528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.current_instruction = 0x8812451C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88124528;
	sub_880CB318(ctx, base);
loc_88124528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88126F68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88126F68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88126F68) {
			switch (rex_dispatch_address) {
				case 0x88126F70:
				case 0x88126F98:
				case 0x88127000:
				case 0x88127030:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88126F68;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88126F70: goto loc_88126F70;
		case 0x88126F98: goto loc_88126F98;
		case 0x88127000: goto loc_88127000;
		case 0x88127030: goto loc_88127030;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88126F70;
	__savegprlr_19(ctx, base);
loc_88126F70:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88126F70;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.current_instruction = 0x88126F74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r22,32767
	ctx.r22.s64 = 32767;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88126f98
	if (!ctx.cr6.eq) goto loc_88126F98;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8812dd90
	ctx.lr = 0x88126F98;
	sub_8812DD90(ctx, base);
loc_88126F98:
	// lhz r11,34(r27)
	ctx.current_instruction = 0x88126F98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88127178
	if (ctx.cr6.eq) goto loc_88127178;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_88126FB0:
	// lwz r10,356(r27)
	ctx.current_instruction = 0x88126FB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 356);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r11,320(r27)
	ctx.current_instruction = 0x88126FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// add r29,r24,r11
	ctx.r29.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwzx r9,r25,r10
	ctx.current_instruction = 0x88126FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x881270c4
	if (ctx.cr6.eq) goto loc_881270C4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_88126FD4:
	// lwz r11,424(r29)
	ctx.current_instruction = 0x88126FD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88126FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r19,0(r11)
	ctx.current_instruction = 0x88126FF0;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,-2(r11)
	ctx.current_instruction = 0x88126FF4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x8812d818
	ctx.lr = 0x88127000;
	sub_8812D818(ctx, base);
loc_88127000:
	// lwz r10,424(r29)
	ctx.current_instruction = 0x88127000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// extsh r28,r19
	ctx.r28.s64 = ctx.r19.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88127014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88127028;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// bl 0x8812d8e8
	ctx.lr = 0x88127030;
	sub_8812D8E8(ctx, base);
loc_88127030:
	// lwz r5,60(r27)
	ctx.current_instruction = 0x88127030;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x8812705c
	if (ctx.cr6.gt) goto loc_8812705C;
	// lhz r9,82(r1)
	ctx.current_instruction = 0x88127040;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.current_instruction = 0x88127044;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x88127084
	goto loc_88127084;
loc_8812705C:
	// lwz r11,424(r29)
	ctx.current_instruction = 0x8812705C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88127060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r8,-2(r9)
	ctx.current_instruction = 0x88127068;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
loc_88127084:
	// lwz r11,256(r27)
	ctx.current_instruction = 0x88127084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 256);
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88126fd4
	if (ctx.cr6.lt) goto loc_88126FD4;
	// lwz r11,360(r27)
	ctx.current_instruction = 0x88127098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.current_instruction = 0x8812709C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812714c
	if (!ctx.cr6.gt) goto loc_8812714C;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881270b8
	if (!ctx.cr6.lt) goto loc_881270B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881270B8:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8812714c
	goto loc_8812714C;
loc_881270C4:
	// lwz r11,176(r27)
	ctx.current_instruction = 0x881270C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88127100
	if (!ctx.cr6.eq) goto loc_88127100;
	// lhz r11,112(r29)
	ctx.current_instruction = 0x881270D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x88127100
	if (ctx.cr6.eq) goto loc_88127100;
	// lwz r11,60(r27)
	ctx.current_instruction = 0x881270DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x881271cc
	if (ctx.cr6.gt) goto loc_881271CC;
	// lhz r11,132(r29)
	ctx.current_instruction = 0x881270EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 132);
	// lhz r9,128(r29)
	ctx.current_instruction = 0x881270F0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 128);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
loc_88127100:
	// lwz r11,360(r27)
	ctx.current_instruction = 0x88127100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.current_instruction = 0x88127104;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88127140
	if (!ctx.cr6.gt) goto loc_88127140;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x88127124
	if (ctx.cr6.lt) goto loc_88127124;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88127124:
	// lwz r11,360(r27)
	ctx.current_instruction = 0x88127124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r7,r25,r11
	ctx.current_instruction = 0x88127134;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r25,r11
	ctx.current_instruction = 0x8812713C;
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r6.u32);
loc_88127140:
	// lwz r11,356(r27)
	ctx.current_instruction = 0x88127140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 356);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stwx r10,r25,r11
	ctx.current_instruction = 0x88127148;
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8812714C:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88127160
	if (!ctx.cr6.lt) goto loc_88127160;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_88127160:
	// lhz r11,34(r27)
	ctx.current_instruction = 0x88127160;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,1776
	ctx.r24.s64 = ctx.r24.s64 + 1776;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88126fb0
	if (ctx.cr6.lt) goto loc_88126FB0;
loc_88127178:
	// lwz r11,176(r27)
	ctx.current_instruction = 0x88127178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88127200
	if (ctx.cr6.eq) goto loc_88127200;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88127194
	if (ctx.cr6.eq) goto loc_88127194;
	// lwz r11,256(r27)
	ctx.current_instruction = 0x8812718C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 256);
	// clrlwi r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
loc_88127194:
	// lwz r11,384(r27)
	ctx.current_instruction = 0x88127194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881271a8
	if (!ctx.cr6.lt) goto loc_881271A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881271A8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x881271f4
	if (!ctx.cr6.eq) goto loc_881271F4;
	// lhz r10,210(r27)
	ctx.current_instruction = 0x881271B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 210);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sth r8,0(r20)
	ctx.current_instruction = 0x881271C0;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r8.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_881271CC:
	// lhz r11,124(r29)
	ctx.current_instruction = 0x881271CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 124);
	// lhz r9,122(r29)
	ctx.current_instruction = 0x881271D0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 122);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x88127100
	goto loc_88127100;
loc_881271F4:
	// sth r11,0(r20)
	ctx.current_instruction = 0x881271F4;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88127200:
	// sth r22,0(r20)
	ctx.current_instruction = 0x88127200;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r22.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132628) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88132628;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88132628) {
			switch (rex_dispatch_address) {
				case 0x88132630:
				case 0x881326F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88132628;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88132630: goto loc_88132630;
		case 0x881326F8: goto loc_881326F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88132630;
	__savegprlr_26(ctx, base);
loc_88132630:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88132630;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,584(r3)
	ctx.current_instruction = 0x88132634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,424(r5)
	ctx.current_instruction = 0x8813263C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,56(r5)
	ctx.current_instruction = 0x88132644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,72(r4)
	ctx.current_instruction = 0x8813264C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lhz r6,0(r10)
	ctx.current_instruction = 0x88132650;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,12(r7)
	ctx.current_instruction = 0x88132658;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r8,320(r31)
	ctx.current_instruction = 0x88132660;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lhz r7,0(r5)
	ctx.current_instruction = 0x88132668;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,118(r6)
	ctx.current_instruction = 0x88132678;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// beq cr6,0x88132698
	if (ctx.cr6.eq) goto loc_88132698;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x881326a0
	if (ctx.cr6.eq) goto loc_881326A0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88132698:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,72(r28)
	ctx.current_instruction = 0x8813269C;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
loc_881326A0:
	// lbz r11,200(r31)
	ctx.current_instruction = 0x881326A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.current_instruction = 0x881326A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881326c4
	if (ctx.cr6.lt) goto loc_881326C4;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881326C4:
	// lhz r11,202(r31)
	ctx.current_instruction = 0x881326C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88132768
	if (!ctx.cr6.lt) goto loc_88132768;
	// addi r26,r28,224
	ctx.r26.s64 = ctx.r28.s64 + 224;
	// li r27,1
	ctx.r27.s64 = 1;
loc_881326DC:
	// lbz r11,200(r31)
	ctx.current_instruction = 0x881326DC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,110(r31)
	ctx.current_instruction = 0x881326E4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bl 0x8812c528
	ctx.lr = 0x881326F8;
	sub_8812C528(ctx, base);
loc_881326F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132770
	if (ctx.cr6.lt) goto loc_88132770;
	// lbz r11,200(r31)
	ctx.current_instruction = 0x88132700;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.current_instruction = 0x88132704;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813270C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// slw r10,r27,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88132734
	if (ctx.cr6.eq) goto loc_88132734;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88132730;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88132734:
	// lhz r10,202(r31)
	ctx.current_instruction = 0x88132734;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r29
	ctx.current_instruction = 0x88132740;
	REX_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u32);
	// lhz r7,202(r31)
	ctx.current_instruction = 0x88132744;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r31)
	ctx.current_instruction = 0x88132758;
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r5.u16);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x881326dc
	if (ctx.cr6.lt) goto loc_881326DC;
loc_88132768:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,72(r28)
	ctx.current_instruction = 0x8813276C;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
loc_88132770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881363C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881363C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881363C0;
	ctx.current_instruction = 0x881363C0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x881363C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.current_instruction = 0x881363C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8813643c
	if (!ctx.cr6.eq) goto loc_8813643C;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813640c
	if (!ctx.cr6.eq) goto loc_8813640C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-24776
	ctx.r8.s64 = ctx.r11.s64 + -24776;
	// addi r7,r10,-11832
	ctx.r7.s64 = ctx.r10.s64 + -11832;
	// addi r6,r9,-10960
	ctx.r6.s64 = ctx.r9.s64 + -10960;
	// stw r8,24(r4)
	ctx.current_instruction = 0x881363F4;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	ctx.current_instruction = 0x881363FC;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x88136400;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x88136404;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813640C:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-32216
	ctx.r8.s64 = ctx.r11.s64 + -32216;
	// addi r7,r10,-13736
	ctx.r7.s64 = ctx.r10.s64 + -13736;
	// addi r6,r9,-12784
	ctx.r6.s64 = ctx.r9.s64 + -12784;
	// stw r8,24(r4)
	ctx.current_instruction = 0x88136424;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r7,28(r4)
	ctx.current_instruction = 0x8813642C;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x88136430;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x88136434;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813643C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881364b0
	if (!ctx.cr6.eq) goto loc_881364B0;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88136480
	if (!ctx.cr6.eq) goto loc_88136480;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-16584
	ctx.r8.s64 = ctx.r11.s64 + -16584;
	// addi r7,r10,2200
	ctx.r7.s64 = ctx.r10.s64 + 2200;
	// addi r6,r9,3312
	ctx.r6.s64 = ctx.r9.s64 + 3312;
	// stw r8,24(r4)
	ctx.current_instruction = 0x88136468;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	ctx.current_instruction = 0x88136470;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x88136474;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x88136478;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88136480:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-19072
	ctx.r8.s64 = ctx.r11.s64 + -19072;
	// addi r7,r10,-456
	ctx.r7.s64 = ctx.r10.s64 + -456;
	// addi r6,r9,872
	ctx.r6.s64 = ctx.r9.s64 + 872;
	// stw r8,24(r4)
	ctx.current_instruction = 0x88136498;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r7,28(r4)
	ctx.current_instruction = 0x881364A0;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x881364A4;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x881364A8;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881364B0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881364f4
	if (!ctx.cr6.eq) goto loc_881364F4;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-23080
	ctx.r8.s64 = ctx.r11.s64 + -23080;
	// addi r7,r10,-4744
	ctx.r7.s64 = ctx.r10.s64 + -4744;
	// addi r6,r9,-2600
	ctx.r6.s64 = ctx.r9.s64 + -2600;
	// stw r8,24(r4)
	ctx.current_instruction = 0x881364DC;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,180
	ctx.r5.s64 = 180;
	// stw r7,28(r4)
	ctx.current_instruction = 0x881364E4;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x881364E8;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x881364EC;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881364F4:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-30472
	ctx.r8.s64 = ctx.r11.s64 + -30472;
	// addi r7,r10,-10088
	ctx.r7.s64 = ctx.r10.s64 + -10088;
	// addi r6,r9,-7416
	ctx.r6.s64 = ctx.r9.s64 + -7416;
	// stw r8,24(r4)
	ctx.current_instruction = 0x8813650C;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,340
	ctx.r5.s64 = 340;
	// stw r7,28(r4)
	ctx.current_instruction = 0x88136514;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	ctx.current_instruction = 0x88136518;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	ctx.current_instruction = 0x8813651C;
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88139190) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88139190;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88139190) {
			switch (rex_dispatch_address) {
				case 0x88139198:
				case 0x88139268:
				case 0x881392A8:
				case 0x881392E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139190;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88139198: goto loc_88139198;
		case 0x88139268: goto loc_88139268;
		case 0x881392A8: goto loc_881392A8;
		case 0x881392E4: goto loc_881392E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88139198;
	__savegprlr_24(ctx, base);
loc_88139198:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88139198;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,32(r3)
	ctx.current_instruction = 0x881391A0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,48(r30)
	ctx.current_instruction = 0x881391B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r28,40(r30)
	ctx.current_instruction = 0x881391B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r26,36(r30)
	ctx.current_instruction = 0x881391BC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r29,28(r30)
	ctx.current_instruction = 0x881391C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881392e4
	if (!ctx.cr6.gt) goto loc_881392E4;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,84(r30)
	ctx.current_instruction = 0x881391D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88139248
	if (!ctx.cr6.eq) goto loc_88139248;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x88139214
	if (ctx.cr6.gt) goto loc_88139214;
loc_881391EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88139214
	if (ctx.cr6.eq) goto loc_88139214;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x881391F4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x881391ec
	if (!ctx.cr6.gt) goto loc_881391EC;
loc_88139214:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881392bc
	if (ctx.cr6.eq) goto loc_881392BC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8813922C:
	// lbz r11,0(r29)
	ctx.current_instruction = 0x8813922C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bdnz 0x8813922c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813922C;
	// b 0x881392bc
	goto loc_881392BC;
loc_88139248:
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x88139284
	if (ctx.cr6.gt) goto loc_88139284;
loc_88139250:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88139284
	if (ctx.cr6.eq) goto loc_88139284;
	// lwz r11,84(r30)
	ctx.current_instruction = 0x88139258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.current_instruction = 0x8813925C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88139268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88139268:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// rlwimi r3,r26,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x88139250
	if (!ctx.cr6.gt) goto loc_88139250;
loc_88139284:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881392bc
	if (ctx.cr6.eq) goto loc_881392BC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_88139298:
	// lwz r11,84(r30)
	ctx.current_instruction = 0x88139298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.current_instruction = 0x8813929C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881392A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881392A8:
	// rlwimi r3,r27,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bne 0x88139298
	if (!ctx.cr0.eq) goto loc_88139298;
loc_881392BC:
	// stw r26,36(r30)
	ctx.current_instruction = 0x881392BC;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,40(r30)
	ctx.current_instruction = 0x881392C4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,32(r30)
	ctx.current_instruction = 0x881392CC;
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r30)
	ctx.current_instruction = 0x881392D4;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r25,48(r30)
	ctx.current_instruction = 0x881392D8;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// stw r27,44(r30)
	ctx.current_instruction = 0x881392DC;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// bl 0x8812c398
	ctx.lr = 0x881392E4;
	sub_8812C398(ctx, base);
loc_881392E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D780) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813D780;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813D780) {
			switch (rex_dispatch_address) {
				case 0x8813D788:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813D780;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813D788: goto loc_8813D788;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8813D788;
	__savegprlr_27(ctx, base);
loc_8813D788:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x7)));
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,-88(r1)
	ctx.current_instruction = 0x8813D7AC;
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r4.u32);
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-84(r1)
	ctx.current_instruction = 0x8813D7B4;
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r9.u32);
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,-96(r1)
	ctx.current_instruction = 0x8813D7BC;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-80(r1)
	ctx.current_instruction = 0x8813D7C4;
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// li r27,32
	ctx.r27.s64 = 32;
	// vslb v13,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vaddubm v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vrlh v7,v10,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, result);
	}
	// li r31,16
	ctx.r31.s64 = 16;
	// stw r30,-92(r1)
	ctx.current_instruction = 0x8813D7E4;
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r30.u32);
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stw r28,-76(r1)
	ctx.current_instruction = 0x8813D7EC;
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r28.u32);
	// stw r7,-72(r1)
	ctx.current_instruction = 0x8813D7F0;
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,-68(r1)
	ctx.current_instruction = 0x8813D7F8;
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r29.u32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,-49(r1)
	ctx.current_instruction = 0x8813D800;
	REX_STORE_U8(ctx.r1.u32 + -49, ctx.r27.u8);
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
loc_8813D80C:
	// lwzx r11,r10,r4
	ctx.current_instruction = 0x8813D80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r7,r10,r5
	ctx.current_instruction = 0x8813D810;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvx128 v63,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// vperm128 v4,v62,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsububm v3,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v2,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v31,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// vperm128 v30,v60,v61,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsububm v29,v31,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubsbs v11,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v28,v30,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrab v10,v11,v12
	ctx.v10.s8[0] = ctx.v11.s8[0] >> (ctx.v12.u8[0] & 0x7);
	ctx.v10.s8[1] = ctx.v11.s8[1] >> (ctx.v12.u8[1] & 0x7);
	ctx.v10.s8[2] = ctx.v11.s8[2] >> (ctx.v12.u8[2] & 0x7);
	ctx.v10.s8[3] = ctx.v11.s8[3] >> (ctx.v12.u8[3] & 0x7);
	ctx.v10.s8[4] = ctx.v11.s8[4] >> (ctx.v12.u8[4] & 0x7);
	ctx.v10.s8[5] = ctx.v11.s8[5] >> (ctx.v12.u8[5] & 0x7);
	ctx.v10.s8[6] = ctx.v11.s8[6] >> (ctx.v12.u8[6] & 0x7);
	ctx.v10.s8[7] = ctx.v11.s8[7] >> (ctx.v12.u8[7] & 0x7);
	ctx.v10.s8[8] = ctx.v11.s8[8] >> (ctx.v12.u8[8] & 0x7);
	ctx.v10.s8[9] = ctx.v11.s8[9] >> (ctx.v12.u8[9] & 0x7);
	ctx.v10.s8[10] = ctx.v11.s8[10] >> (ctx.v12.u8[10] & 0x7);
	ctx.v10.s8[11] = ctx.v11.s8[11] >> (ctx.v12.u8[11] & 0x7);
	ctx.v10.s8[12] = ctx.v11.s8[12] >> (ctx.v12.u8[12] & 0x7);
	ctx.v10.s8[13] = ctx.v11.s8[13] >> (ctx.v12.u8[13] & 0x7);
	ctx.v10.s8[14] = ctx.v11.s8[14] >> (ctx.v12.u8[14] & 0x7);
	ctx.v10.s8[15] = ctx.v11.s8[15] >> (ctx.v12.u8[15] & 0x7);
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vperm128 v4,v58,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsububm v3,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubsbs v2,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.s8), simde_mm_load_si128((simde__m128i*)ctx.v28.s8)));
	// lvx128 v1,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v31,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vsububm v30,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsububm v29,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v57,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsbs v11,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsubsbs v5,v3,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.s8), simde_mm_load_si128((simde__m128i*)ctx.v29.s8)));
	// vperm128 v4,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v3,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vsububm v31,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrab v10,v11,v12
	ctx.v10.s8[0] = ctx.v11.s8[0] >> (ctx.v12.u8[0] & 0x7);
	ctx.v10.s8[1] = ctx.v11.s8[1] >> (ctx.v12.u8[1] & 0x7);
	ctx.v10.s8[2] = ctx.v11.s8[2] >> (ctx.v12.u8[2] & 0x7);
	ctx.v10.s8[3] = ctx.v11.s8[3] >> (ctx.v12.u8[3] & 0x7);
	ctx.v10.s8[4] = ctx.v11.s8[4] >> (ctx.v12.u8[4] & 0x7);
	ctx.v10.s8[5] = ctx.v11.s8[5] >> (ctx.v12.u8[5] & 0x7);
	ctx.v10.s8[6] = ctx.v11.s8[6] >> (ctx.v12.u8[6] & 0x7);
	ctx.v10.s8[7] = ctx.v11.s8[7] >> (ctx.v12.u8[7] & 0x7);
	ctx.v10.s8[8] = ctx.v11.s8[8] >> (ctx.v12.u8[8] & 0x7);
	ctx.v10.s8[9] = ctx.v11.s8[9] >> (ctx.v12.u8[9] & 0x7);
	ctx.v10.s8[10] = ctx.v11.s8[10] >> (ctx.v12.u8[10] & 0x7);
	ctx.v10.s8[11] = ctx.v11.s8[11] >> (ctx.v12.u8[11] & 0x7);
	ctx.v10.s8[12] = ctx.v11.s8[12] >> (ctx.v12.u8[12] & 0x7);
	ctx.v10.s8[13] = ctx.v11.s8[13] >> (ctx.v12.u8[13] & 0x7);
	ctx.v10.s8[14] = ctx.v11.s8[14] >> (ctx.v12.u8[14] & 0x7);
	ctx.v10.s8[15] = ctx.v11.s8[15] >> (ctx.v12.u8[15] & 0x7);
	// vsubsbs v30,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.s8), simde_mm_load_si128((simde__m128i*)ctx.v31.s8)));
	// vadduhm v29,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vxor v28,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vadduhm v9,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubsbs v11,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// vmrglb v27,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v26,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsrab v10,v11,v12
	ctx.v10.s8[0] = ctx.v11.s8[0] >> (ctx.v12.u8[0] & 0x7);
	ctx.v10.s8[1] = ctx.v11.s8[1] >> (ctx.v12.u8[1] & 0x7);
	ctx.v10.s8[2] = ctx.v11.s8[2] >> (ctx.v12.u8[2] & 0x7);
	ctx.v10.s8[3] = ctx.v11.s8[3] >> (ctx.v12.u8[3] & 0x7);
	ctx.v10.s8[4] = ctx.v11.s8[4] >> (ctx.v12.u8[4] & 0x7);
	ctx.v10.s8[5] = ctx.v11.s8[5] >> (ctx.v12.u8[5] & 0x7);
	ctx.v10.s8[6] = ctx.v11.s8[6] >> (ctx.v12.u8[6] & 0x7);
	ctx.v10.s8[7] = ctx.v11.s8[7] >> (ctx.v12.u8[7] & 0x7);
	ctx.v10.s8[8] = ctx.v11.s8[8] >> (ctx.v12.u8[8] & 0x7);
	ctx.v10.s8[9] = ctx.v11.s8[9] >> (ctx.v12.u8[9] & 0x7);
	ctx.v10.s8[10] = ctx.v11.s8[10] >> (ctx.v12.u8[10] & 0x7);
	ctx.v10.s8[11] = ctx.v11.s8[11] >> (ctx.v12.u8[11] & 0x7);
	ctx.v10.s8[12] = ctx.v11.s8[12] >> (ctx.v12.u8[12] & 0x7);
	ctx.v10.s8[13] = ctx.v11.s8[13] >> (ctx.v12.u8[13] & 0x7);
	ctx.v10.s8[14] = ctx.v11.s8[14] >> (ctx.v12.u8[14] & 0x7);
	ctx.v10.s8[15] = ctx.v11.s8[15] >> (ctx.v12.u8[15] & 0x7);
	// vadduhm v25,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vxor v24,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vadduhm v9,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubsbs v11,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// vmrglb v23,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v22,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsrab v10,v11,v12
	ctx.v10.s8[0] = ctx.v11.s8[0] >> (ctx.v12.u8[0] & 0x7);
	ctx.v10.s8[1] = ctx.v11.s8[1] >> (ctx.v12.u8[1] & 0x7);
	ctx.v10.s8[2] = ctx.v11.s8[2] >> (ctx.v12.u8[2] & 0x7);
	ctx.v10.s8[3] = ctx.v11.s8[3] >> (ctx.v12.u8[3] & 0x7);
	ctx.v10.s8[4] = ctx.v11.s8[4] >> (ctx.v12.u8[4] & 0x7);
	ctx.v10.s8[5] = ctx.v11.s8[5] >> (ctx.v12.u8[5] & 0x7);
	ctx.v10.s8[6] = ctx.v11.s8[6] >> (ctx.v12.u8[6] & 0x7);
	ctx.v10.s8[7] = ctx.v11.s8[7] >> (ctx.v12.u8[7] & 0x7);
	ctx.v10.s8[8] = ctx.v11.s8[8] >> (ctx.v12.u8[8] & 0x7);
	ctx.v10.s8[9] = ctx.v11.s8[9] >> (ctx.v12.u8[9] & 0x7);
	ctx.v10.s8[10] = ctx.v11.s8[10] >> (ctx.v12.u8[10] & 0x7);
	ctx.v10.s8[11] = ctx.v11.s8[11] >> (ctx.v12.u8[11] & 0x7);
	ctx.v10.s8[12] = ctx.v11.s8[12] >> (ctx.v12.u8[12] & 0x7);
	ctx.v10.s8[13] = ctx.v11.s8[13] >> (ctx.v12.u8[13] & 0x7);
	ctx.v10.s8[14] = ctx.v11.s8[14] >> (ctx.v12.u8[14] & 0x7);
	ctx.v10.s8[15] = ctx.v11.s8[15] >> (ctx.v12.u8[15] & 0x7);
	// vadduhm v21,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vxor v20,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vadduhm v9,v9,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubsbs v11,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_subs_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// vmrglb v19,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v18,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v9,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// bdnz 0x8813d80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813D80C;
	// vslo v0,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// vadduhm v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-28372(r10)
	ctx.current_instruction = 0x8813D954;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r9)
	ctx.current_instruction = 0x8813D958;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// vslo128 v13,v0,v55
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-28372(r10)
	ctx.current_instruction = 0x8813D964;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -28372, temp.u32);
	// vadduhm v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslo v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r3,-80(r1)
	ctx.current_instruction = 0x8813D97C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -80);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881482D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881482D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881482D0) {
			switch (rex_dispatch_address) {
				case 0x881482FC:
				case 0x88148310:
				case 0x88148324:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881482D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881482FC: goto loc_881482FC;
		case 0x88148310: goto loc_88148310;
		case 0x88148324: goto loc_88148324;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881482D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881482D8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881482DC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881482E0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.current_instruction = 0x881482E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88148300
	if (ctx.cr6.eq) goto loc_88148300;
	// bl 0x88125e70
	ctx.lr = 0x881482FC;
	sub_88125E70(ctx, base);
loc_881482FC:
	// stw r30,0(r31)
	ctx.current_instruction = 0x881482FC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_88148300:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88148300;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88148314
	if (ctx.cr6.eq) goto loc_88148314;
	// bl 0x88125e70
	ctx.lr = 0x88148310;
	sub_88125E70(ctx, base);
loc_88148310:
	// stw r30,12(r31)
	ctx.current_instruction = 0x88148310;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_88148314:
	// lwz r3,20(r31)
	ctx.current_instruction = 0x88148314;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88148328
	if (ctx.cr6.eq) goto loc_88148328;
	// bl 0x88125e70
	ctx.lr = 0x88148324;
	sub_88125E70(ctx, base);
loc_88148324:
	// stw r30,20(r31)
	ctx.current_instruction = 0x88148324;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_88148328:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88148338:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88148338;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88148338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148338;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88148344;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8814834C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88148350;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88149730) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88149730);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88149730;
	ctx.current_instruction = 0x88149730;
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88149730;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x88149734;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// sth r9,-34(r1)
	ctx.current_instruction = 0x88149738;
	REX_STORE_U16(ctx.r1.u32 + -34, ctx.r9.u16);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// sth r8,-18(r1)
	ctx.current_instruction = 0x88149744;
	REX_STORE_U16(ctx.r1.u32 + -18, ctx.r8.u16);
	// vspltish v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x5)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lvx128 v63,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v60,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v59,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v56,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v58,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v62,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v10,v63,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vperm128 v3,v61,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vmrghb v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v2,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsplth v31,v2,7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_set1_epi16(short(0x100))));
	// vsplth v28,v29,7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_set1_epi16(short(0x100))));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubuhm v27,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v25,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v29,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
loc_88149804:
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v28,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vperm128 v2,v54,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v27,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vperm128 v25,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrglb v24,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v23,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v21,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v22,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v19,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vor v1,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vor v4,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v25,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor v3,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vadduhm v24,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v21,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v22,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v20,v14,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v15,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v26,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v21,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vslh v14,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v20,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v24,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
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
	// vslh v27,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v16,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v14,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v28,v3,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vadduhm v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubshs v24,v1,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v25,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vadduhm v23,v18,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v22,v16,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v21,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v18,v15,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v17,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v16,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v15,v18,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsrah v14,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v16,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v15,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bdnz 0x88149804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149804;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88149940;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88149944;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88150998) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88150998;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88150998) {
			switch (rex_dispatch_address) {
				case 0x881509A0:
				case 0x88150A50:
				case 0x88150A84:
				case 0x88150AB4:
				case 0x88150AD0:
				case 0x88150ADC:
				case 0x88150AE8:
				case 0x88150B10:
				case 0x88150B24:
				case 0x88150B4C:
				case 0x88150B74:
				case 0x88150EB8:
				case 0x88150F24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88150998;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881509A0: goto loc_881509A0;
		case 0x88150A50: goto loc_88150A50;
		case 0x88150A84: goto loc_88150A84;
		case 0x88150AB4: goto loc_88150AB4;
		case 0x88150AD0: goto loc_88150AD0;
		case 0x88150ADC: goto loc_88150ADC;
		case 0x88150AE8: goto loc_88150AE8;
		case 0x88150B10: goto loc_88150B10;
		case 0x88150B24: goto loc_88150B24;
		case 0x88150B4C: goto loc_88150B4C;
		case 0x88150B74: goto loc_88150B74;
		case 0x88150EB8: goto loc_88150EB8;
		case 0x88150F24: goto loc_88150F24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881509A0;
	__savegprlr_24(ctx, base);
loc_881509A0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881509A0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3980(r3)
	ctx.current_instruction = 0x881509A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,15620(r3)
	ctx.current_instruction = 0x881509AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r11,20528(r3)
	ctx.current_instruction = 0x881509B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20528);
	// rlwinm r8,r10,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi. r11,r8,28
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20528(r3)
	ctx.current_instruction = 0x881509D0;
	REX_STORE_U32(ctx.r3.u32 + 20528, ctx.r9.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// blt 0x881509e8
	if (ctx.cr0.lt) goto loc_881509E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x881509f0
	if (!ctx.cr6.gt) goto loc_881509F0;
loc_881509E8:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x88150aa4
	if (!ctx.cr6.eq) goto loc_88150AA4;
loc_881509F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x88150a00
	if (!ctx.cr6.lt) goto loc_88150A00;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x88150a0c
	goto loc_88150A0C;
loc_88150A00:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88150a0c
	if (!ctx.cr6.gt) goto loc_88150A0C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_88150A0C:
	// lwz r10,15612(r31)
	ctx.current_instruction = 0x88150A0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88150a3c
	if (ctx.cr6.eq) goto loc_88150A3C;
	// bge cr6,0x88150a38
	if (!ctx.cr6.lt) goto loc_88150A38;
	// lwz r10,20536(r31)
	ctx.current_instruction = 0x88150A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// mulli r9,r10,218
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(218));
	// mulli r8,r10,243
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(243));
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r7,20540(r31)
	ctx.current_instruction = 0x88150A30;
	REX_STORE_U32(ctx.r31.u32 + 20540, ctx.r7.u32);
	// stw r6,20536(r31)
	ctx.current_instruction = 0x88150A34;
	REX_STORE_U32(ctx.r31.u32 + 20536, ctx.r6.u32);
loc_88150A38:
	// stw r11,15612(r31)
	ctx.current_instruction = 0x88150A38;
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r11.u32);
loc_88150A3C:
	// lwz r11,20472(r31)
	ctx.current_instruction = 0x88150A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88150a64
	if (ctx.cr6.eq) goto loc_88150A64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x88150A50;
	sub_881EC8B0(ctx, base);
loc_88150A50:
	// ld r10,20448(r31)
	ctx.current_instruction = 0x88150A50;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r11,80(r1)
	ctx.current_instruction = 0x88150A54;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r24,20472(r31)
	ctx.current_instruction = 0x88150A58;
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,20448(r31)
	ctx.current_instruction = 0x88150A60;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r11.u64);
loc_88150A64:
	// lwz r11,20472(r31)
	ctx.current_instruction = 0x88150A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20472);
	// std r24,20456(r31)
	ctx.current_instruction = 0x88150A68;
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r24,20448(r31)
	ctx.current_instruction = 0x88150A70;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// stw r24,3460(r31)
	ctx.current_instruction = 0x88150A74;
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
	// bne cr6,0x88150f24
	if (!ctx.cr6.eq) goto loc_88150F24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x88150A84;
	sub_881EC8B0(ctx, base);
loc_88150A84:
	// ld r10,20448(r31)
	ctx.current_instruction = 0x88150A84;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r9,80(r1)
	ctx.current_instruction = 0x88150A88;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20472(r31)
	ctx.current_instruction = 0x88150A94;
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// std r8,20448(r31)
	ctx.current_instruction = 0x88150A98;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r8.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88150AA4:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bge cr6,0x88150ae4
	if (!ctx.cr6.lt) goto loc_88150AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88150AB4;
	sub_8814CD10(ctx, base);
loc_88150AB4:
	// lwz r11,20528(r31)
	ctx.current_instruction = 0x88150AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20528);
	// std r24,20448(r31)
	ctx.current_instruction = 0x88150AB8;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// std r24,20456(r31)
	ctx.current_instruction = 0x88150ABC;
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r24,3460(r31)
	ctx.current_instruction = 0x88150AC4;
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
	// bgt cr6,0x88150f1c
	if (ctx.cr6.gt) goto loc_88150F1C;
	// bl 0x881ed218
	ctx.lr = 0x88150AD0;
	sub_881ED218(ctx, base);
loc_88150AD0:
	// stw r3,20636(r31)
	ctx.current_instruction = 0x88150AD0;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ccb0
	ctx.lr = 0x88150ADC;
	sub_8814CCB0(ctx, base);
loc_88150ADC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88150AE4:
	// bl 0x881ed218
	ctx.lr = 0x88150AE8;
	sub_881ED218(ctx, base);
loc_88150AE8:
	// lwz r11,20640(r31)
	ctx.current_instruction = 0x88150AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20640);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88150b60
	if (!ctx.cr6.gt) goto loc_88150B60;
	// stw r3,20640(r31)
	ctx.current_instruction = 0x88150AFC;
	REX_STORE_U32(ctx.r31.u32 + 20640, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8817d628
	ctx.lr = 0x88150B10;
	sub_8817D628(ctx, base);
loc_88150B10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8817d628
	ctx.lr = 0x88150B24;
	sub_8817D628(ctx, base);
loc_88150B24:
	// stw r3,20436(r31)
	ctx.current_instruction = 0x88150B24;
	REX_STORE_U32(ctx.r31.u32 + 20436, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88150b60
	if (ctx.cr6.lt) goto loc_88150B60;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x88150b60
	if (ctx.cr6.gt) goto loc_88150B60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,15612(r31)
	ctx.current_instruction = 0x88150B3C;
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,15608(r31)
	ctx.current_instruction = 0x88150B44;
	REX_STORE_U32(ctx.r31.u32 + 15608, ctx.r11.u32);
	// bl 0x8817d3e0
	ctx.lr = 0x88150B4C;
	sub_8817D3E0(ctx, base);
loc_88150B4C:
	// lwz r11,20436(r31)
	ctx.current_instruction = 0x88150B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20436);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,20428(r31)
	ctx.current_instruction = 0x88150B5C;
	REX_STORE_U32(ctx.r31.u32 + 20428, ctx.r8.u32);
loc_88150B60:
	// lwz r11,20428(r31)
	ctx.current_instruction = 0x88150B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88150f24
	if (ctx.cr6.eq) goto loc_88150F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88150B74;
	sub_8814CD10(ctx, base);
loc_88150B74:
	// lwz r11,20432(r31)
	ctx.current_instruction = 0x88150B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bgt cr6,0x88150b88
	if (ctx.cr6.gt) goto loc_88150B88;
	// lwz r28,15612(r31)
	ctx.current_instruction = 0x88150B84;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
loc_88150B88:
	// lwz r11,20516(r31)
	ctx.current_instruction = 0x88150B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r10,20512(r31)
	ctx.current_instruction = 0x88150B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20512);
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// ld r8,20448(r31)
	ctx.current_instruction = 0x88150B94;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwzx r7,r11,r31
	ctx.current_instruction = 0x88150BA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,20512(r31)
	ctx.current_instruction = 0x88150BAC;
	REX_STORE_U32(ctx.r31.u32 + 20512, ctx.r6.u32);
	// stwx r5,r11,r31
	ctx.current_instruction = 0x88150BB0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r9,20512(r31)
	ctx.current_instruction = 0x88150BB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20512);
	// ld r3,20456(r31)
	ctx.current_instruction = 0x88150BB8;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r31.u32 + 20456);
	// lwz r11,20516(r31)
	ctx.current_instruction = 0x88150BBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// lwz r11,3460(r31)
	ctx.current_instruction = 0x88150BC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3460);
	// extsw r30,r3
	ctx.r30.s64 = ctx.r3.s32;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// stw r10,20516(r31)
	ctx.current_instruction = 0x88150BD4;
	REX_STORE_U32(ctx.r31.u32 + 20516, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88150bf4
	if (ctx.cr6.gt) goto loc_88150BF4;
	// lwz r10,15620(r31)
	ctx.current_instruction = 0x88150BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15620);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// rlwinm r8,r10,16,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000000;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88150c6c
	if (ctx.cr6.lt) goto loc_88150C6C;
loc_88150BF4:
	// lwz r10,20532(r31)
	ctx.current_instruction = 0x88150BF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20532);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20532(r31)
	ctx.current_instruction = 0x88150C00;
	REX_STORE_U32(ctx.r31.u32 + 20532, ctx.r11.u32);
	// ble cr6,0x88150c34
	if (!ctx.cr6.gt) goto loc_88150C34;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x88150c14
	if (!ctx.cr0.gt) goto loc_88150C14;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150C14:
	// lwz r11,20536(r31)
	ctx.current_instruction = 0x88150C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// mulli r10,r11,230
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// mulli r9,r11,230
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// stw r11,20536(r31)
	ctx.current_instruction = 0x88150C24;
	REX_STORE_U32(ctx.r31.u32 + 20536, ctx.r11.u32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stw r8,20540(r31)
	ctx.current_instruction = 0x88150C2C;
	REX_STORE_U32(ctx.r31.u32 + 20540, ctx.r8.u32);
	// b 0x88150c3c
	goto loc_88150C3C;
loc_88150C34:
	// stw r26,20636(r31)
	ctx.current_instruction = 0x88150C34;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
	// stw r24,20628(r31)
	ctx.current_instruction = 0x88150C38;
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r24.u32);
loc_88150C3C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150c68
	if (!ctx.cr6.gt) goto loc_88150C68;
	// addi r11,r28,5137
	ctx.r11.s64 = ctx.r28.s64 + 5137;
	// addi r10,r28,5136
	ctx.r10.s64 = ctx.r28.s64 + 5136;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88150C54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.current_instruction = 0x88150C58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88150c68
	if (!ctx.cr6.eq) goto loc_88150C68;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150C68:
	// stw r24,3460(r31)
	ctx.current_instruction = 0x88150C68;
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
loc_88150C6C:
	// lwz r7,15620(r31)
	ctx.current_instruction = 0x88150C6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15620);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// srawi r6,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x88150cac
	if (!ctx.cr6.eq) goto loc_88150CAC;
	// lwz r11,20524(r31)
	ctx.current_instruction = 0x88150C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88150cac
	if (!ctx.cr6.gt) goto loc_88150CAC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150ca8
	if (!ctx.cr6.gt) goto loc_88150CA8;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150CA8:
	// stw r26,20636(r31)
	ctx.current_instruction = 0x88150CA8;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
loc_88150CAC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// addi r11,r28,5136
	ctx.r11.s64 = ctx.r28.s64 + 5136;
	// lwz r8,20536(r31)
	ctx.current_instruction = 0x88150CB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_88150CC4:
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88150CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// lwz r29,20520(r31)
	ctx.current_instruction = 0x88150CD4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20520);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// ble cr6,0x88150cf8
	if (!ctx.cr6.gt) goto loc_88150CF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88150cf8
	if (!ctx.cr6.gt) goto loc_88150CF8;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x88150d20
	goto loc_88150D20;
loc_88150CF8:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// lwz r11,20432(r31)
	ctx.current_instruction = 0x88150D04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// bgt cr6,0x88150d20
	if (ctx.cr6.gt) goto loc_88150D20;
	// lwz r25,15612(r31)
	ctx.current_instruction = 0x88150D1C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
loc_88150D20:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x88150cc4
	if (ctx.cr6.gt) goto loc_88150CC4;
loc_88150D28:
	// lwz r8,15612(r31)
	ctx.current_instruction = 0x88150D28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r29,r11,18116
	ctx.r29.s64 = ctx.r11.s64 + 18116;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88150e00
	if (!ctx.cr6.eq) goto loc_88150E00;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x88150d6c
	if (!ctx.cr6.gt) goto loc_88150D6C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x88150e00
	if (!ctx.cr6.eq) goto loc_88150E00;
	// lwz r11,20524(r31)
	ctx.current_instruction = 0x88150D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x88150e00
	if (!ctx.cr6.gt) goto loc_88150E00;
loc_88150D6C:
	// lwz r11,20636(r31)
	ctx.current_instruction = 0x88150D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20636);
	// lwz r6,20628(r31)
	ctx.current_instruction = 0x88150D70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20628);
	// subf r7,r11,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150d88
	if (!ctx.cr6.lt) goto loc_88150D88;
	// lwz r10,20536(r31)
	ctx.current_instruction = 0x88150D80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// b 0x88150d8c
	goto loc_88150D8C;
loc_88150D88:
	// lwz r10,20540(r31)
	ctx.current_instruction = 0x88150D88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20540);
loc_88150D8C:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// addi r11,r9,5136
	ctx.r11.s64 = ctx.r9.s64 + 5136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x88150D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88150df0
	if (!ctx.cr6.lt) goto loc_88150DF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88150df0
	if (!ctx.cr6.lt) goto loc_88150DF0;
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.current_instruction = 0x88150DBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x88150dd0
	if (ctx.cr6.gt) goto loc_88150DD0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
loc_88150DD0:
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x88150DDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88150df0
	if (!ctx.cr6.gt) goto loc_88150DF0;
	// addi r11,r26,-500
	ctx.r11.s64 = ctx.r26.s64 + -500;
	// stw r11,20636(r31)
	ctx.current_instruction = 0x88150DEC;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r11.u32);
loc_88150DF0:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r11,20628(r31)
	ctx.current_instruction = 0x88150DFC;
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r11.u32);
loc_88150E00:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x88150e48
	if (!ctx.cr6.gt) goto loc_88150E48;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88150e48
	if (!ctx.cr6.gt) goto loc_88150E48;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x88150e48
	if (ctx.cr6.gt) goto loc_88150E48;
	// addi r11,r8,2571
	ctx.r11.s64 = ctx.r8.s64 + 2571;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r31
	ctx.current_instruction = 0x88150E24;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stdx r10,r11,r31
	ctx.current_instruction = 0x88150E2C;
	REX_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x88150E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// addi r9,r11,5152
	ctx.r9.s64 = ctx.r11.s64 + 5152;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x88150E3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r31
	ctx.current_instruction = 0x88150E44;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_88150E48:
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x88150E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88150e70
	if (!ctx.cr6.eq) goto loc_88150E70;
	// lwz r10,20432(r31)
	ctx.current_instruction = 0x88150E54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88150e70
	if (ctx.cr6.gt) goto loc_88150E70;
	// lwz r11,20520(r31)
	ctx.current_instruction = 0x88150E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20520(r31)
	ctx.current_instruction = 0x88150E68;
	REX_STORE_U32(ctx.r31.u32 + 20520, ctx.r11.u32);
	// b 0x88150f14
	goto loc_88150F14;
loc_88150E70:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwzx r9,r30,r29
	ctx.current_instruction = 0x88150E7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,15572(r31)
	ctx.current_instruction = 0x88150E84;
	REX_STORE_U32(ctx.r31.u32 + 15572, ctx.r8.u32);
	// lwzx r7,r30,r29
	ctx.current_instruction = 0x88150E88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// stw r6,15576(r31)
	ctx.current_instruction = 0x88150E90;
	REX_STORE_U32(ctx.r31.u32 + 15576, ctx.r6.u32);
	// lwzx r11,r30,r29
	ctx.current_instruction = 0x88150E94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r5,r10,r29
	ctx.current_instruction = 0x88150E98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88150eb8
	if (ctx.cr6.eq) goto loc_88150EB8;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r4,3980(r31)
	ctx.current_instruction = 0x88150EB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// bl 0x8818be18
	ctx.lr = 0x88150EB8;
	sub_8818BE18(ctx, base);
loc_88150EB8:
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x88150EB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88150f04
	if (!ctx.cr6.lt) goto loc_88150F04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,20636(r31)
	ctx.current_instruction = 0x88150EC8;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
	// ble cr6,0x88150ef0
	if (!ctx.cr6.gt) goto loc_88150EF0;
	// addi r10,r29,-20
	ctx.r10.s64 = ctx.r29.s64 + -20;
	// addi r9,r29,-20
	ctx.r9.s64 = ctx.r29.s64 + -20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r9
	ctx.current_instruction = 0x88150EDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r6,r8,r10
	ctx.current_instruction = 0x88150EE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r5,20636(r31)
	ctx.current_instruction = 0x88150EEC;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r5.u32);
loc_88150EF0:
	// lwz r10,20628(r31)
	ctx.current_instruction = 0x88150EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20628);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88150f04
	if (!ctx.cr6.lt) goto loc_88150F04;
	// stw r11,20628(r31)
	ctx.current_instruction = 0x88150F00;
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r11.u32);
loc_88150F04:
	// stw r28,15612(r31)
	ctx.current_instruction = 0x88150F04;
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r28.u32);
	// stw r28,3700(r31)
	ctx.current_instruction = 0x88150F08;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r28.u32);
	// stw r25,20432(r31)
	ctx.current_instruction = 0x88150F0C;
	REX_STORE_U32(ctx.r31.u32 + 20432, ctx.r25.u32);
	// stw r24,20520(r31)
	ctx.current_instruction = 0x88150F10;
	REX_STORE_U32(ctx.r31.u32 + 20520, ctx.r24.u32);
loc_88150F14:
	// std r24,20448(r31)
	ctx.current_instruction = 0x88150F14;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// std r24,20456(r31)
	ctx.current_instruction = 0x88150F18;
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
loc_88150F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ccb0
	ctx.lr = 0x88150F24;
	sub_8814CCB0(ctx, base);
loc_88150F24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88166698) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88166698);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88166698;
	ctx.current_instruction = 0x88166698;
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x88166698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x881666b0
	if (!ctx.cr6.eq) goto loc_881666B0;
	// lwz r11,3980(r3)
	ctx.current_instruction = 0x881666A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// b 0x881666c8
	goto loc_881666C8;
loc_881666B0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881666d4
	if (!ctx.cr6.eq) goto loc_881666D4;
	// lwz r11,20680(r3)
	ctx.current_instruction = 0x881666B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881666d0
	if (!ctx.cr6.eq) goto loc_881666D0;
	// lwz r11,20684(r3)
	ctx.current_instruction = 0x881666C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
loc_881666C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881666d4
	if (ctx.cr6.eq) goto loc_881666D4;
loc_881666D0:
	// li r10,3
	ctx.r10.s64 = 3;
loc_881666D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r4)
	ctx.current_instruction = 0x881666D8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x881666DC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88168AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88168AB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88168AB8) {
			switch (rex_dispatch_address) {
				case 0x88168AC0:
				case 0x88168AEC:
				case 0x88168AF8:
				case 0x88168B24:
				case 0x88168BC8:
				case 0x88168C10:
				case 0x88168C78:
				case 0x88168CC0:
				case 0x88168D18:
				case 0x88168D5C:
				case 0x88168DC0:
				case 0x88168E40:
				case 0x88168E88:
				case 0x88168EE0:
				case 0x88168F14:
				case 0x88168F30:
				case 0x88168F78:
				case 0x88168F88:
				case 0x8816900C:
				case 0x88169040:
				case 0x881690D0:
				case 0x88169118:
				case 0x88169180:
				case 0x881691C8:
				case 0x88169220:
				case 0x88169264:
				case 0x881692C8:
				case 0x88169348:
				case 0x88169390:
				case 0x881693E8:
				case 0x8816941C:
				case 0x88169438:
				case 0x881694A8:
				case 0x881694F0:
				case 0x88169548:
				case 0x8816957C:
				case 0x881695F4:
				case 0x8816963C:
				case 0x88169694:
				case 0x881696C8:
				case 0x88169740:
				case 0x88169788:
				case 0x881697E0:
				case 0x88169814:
				case 0x88169884:
				case 0x881698CC:
				case 0x88169938:
				case 0x88169980:
				case 0x881699A8:
				case 0x88169A1C:
				case 0x88169A64:
				case 0x88169ABC:
				case 0x88169AF0:
				case 0x88169B68:
				case 0x88169BB0:
				case 0x88169C08:
				case 0x88169C3C:
				case 0x88169CC4:
				case 0x88169D0C:
				case 0x88169D64:
				case 0x88169D98:
				case 0x88169EB8:
				case 0x88169F00:
				case 0x88169F58:
				case 0x88169F8C:
				case 0x88169FB8:
				case 0x88169FCC:
				case 0x8816A098:
				case 0x8816A0E0:
				case 0x8816A154:
				case 0x8816A19C:
				case 0x8816A1C4:
				case 0x8816A1D8:
				case 0x8816A390:
				case 0x8816A3D8:
				case 0x8816A448:
				case 0x8816A490:
				case 0x8816A500:
				case 0x8816A548:
				case 0x8816A564:
				case 0x8816A5B4:
				case 0x8816A620:
				case 0x8816A668:
				case 0x8816A6D8:
				case 0x8816A720:
				case 0x8816A7A4:
				case 0x8816A7EC:
				case 0x8816A84C:
				case 0x8816A890:
				case 0x8816A8A0:
				case 0x8816A924:
				case 0x8816A96C:
				case 0x8816A9DC:
				case 0x8816AA24:
				case 0x8816AA98:
				case 0x8816AAE0:
				case 0x8816AB50:
				case 0x8816AB98:
				case 0x8816AC10:
				case 0x8816AC58:
				case 0x8816ACB8:
				case 0x8816ACEC:
				case 0x8816AD04:
				case 0x8816AD0C:
				case 0x8816AD38:
				case 0x8816AD48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88168AB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88168AC0: goto loc_88168AC0;
		case 0x88168AEC: goto loc_88168AEC;
		case 0x88168AF8: goto loc_88168AF8;
		case 0x88168B24: goto loc_88168B24;
		case 0x88168BC8: goto loc_88168BC8;
		case 0x88168C10: goto loc_88168C10;
		case 0x88168C78: goto loc_88168C78;
		case 0x88168CC0: goto loc_88168CC0;
		case 0x88168D18: goto loc_88168D18;
		case 0x88168D5C: goto loc_88168D5C;
		case 0x88168DC0: goto loc_88168DC0;
		case 0x88168E40: goto loc_88168E40;
		case 0x88168E88: goto loc_88168E88;
		case 0x88168EE0: goto loc_88168EE0;
		case 0x88168F14: goto loc_88168F14;
		case 0x88168F30: goto loc_88168F30;
		case 0x88168F78: goto loc_88168F78;
		case 0x88168F88: goto loc_88168F88;
		case 0x8816900C: goto loc_8816900C;
		case 0x88169040: goto loc_88169040;
		case 0x881690D0: goto loc_881690D0;
		case 0x88169118: goto loc_88169118;
		case 0x88169180: goto loc_88169180;
		case 0x881691C8: goto loc_881691C8;
		case 0x88169220: goto loc_88169220;
		case 0x88169264: goto loc_88169264;
		case 0x881692C8: goto loc_881692C8;
		case 0x88169348: goto loc_88169348;
		case 0x88169390: goto loc_88169390;
		case 0x881693E8: goto loc_881693E8;
		case 0x8816941C: goto loc_8816941C;
		case 0x88169438: goto loc_88169438;
		case 0x881694A8: goto loc_881694A8;
		case 0x881694F0: goto loc_881694F0;
		case 0x88169548: goto loc_88169548;
		case 0x8816957C: goto loc_8816957C;
		case 0x881695F4: goto loc_881695F4;
		case 0x8816963C: goto loc_8816963C;
		case 0x88169694: goto loc_88169694;
		case 0x881696C8: goto loc_881696C8;
		case 0x88169740: goto loc_88169740;
		case 0x88169788: goto loc_88169788;
		case 0x881697E0: goto loc_881697E0;
		case 0x88169814: goto loc_88169814;
		case 0x88169884: goto loc_88169884;
		case 0x881698CC: goto loc_881698CC;
		case 0x88169938: goto loc_88169938;
		case 0x88169980: goto loc_88169980;
		case 0x881699A8: goto loc_881699A8;
		case 0x88169A1C: goto loc_88169A1C;
		case 0x88169A64: goto loc_88169A64;
		case 0x88169ABC: goto loc_88169ABC;
		case 0x88169AF0: goto loc_88169AF0;
		case 0x88169B68: goto loc_88169B68;
		case 0x88169BB0: goto loc_88169BB0;
		case 0x88169C08: goto loc_88169C08;
		case 0x88169C3C: goto loc_88169C3C;
		case 0x88169CC4: goto loc_88169CC4;
		case 0x88169D0C: goto loc_88169D0C;
		case 0x88169D64: goto loc_88169D64;
		case 0x88169D98: goto loc_88169D98;
		case 0x88169EB8: goto loc_88169EB8;
		case 0x88169F00: goto loc_88169F00;
		case 0x88169F58: goto loc_88169F58;
		case 0x88169F8C: goto loc_88169F8C;
		case 0x88169FB8: goto loc_88169FB8;
		case 0x88169FCC: goto loc_88169FCC;
		case 0x8816A098: goto loc_8816A098;
		case 0x8816A0E0: goto loc_8816A0E0;
		case 0x8816A154: goto loc_8816A154;
		case 0x8816A19C: goto loc_8816A19C;
		case 0x8816A1C4: goto loc_8816A1C4;
		case 0x8816A1D8: goto loc_8816A1D8;
		case 0x8816A390: goto loc_8816A390;
		case 0x8816A3D8: goto loc_8816A3D8;
		case 0x8816A448: goto loc_8816A448;
		case 0x8816A490: goto loc_8816A490;
		case 0x8816A500: goto loc_8816A500;
		case 0x8816A548: goto loc_8816A548;
		case 0x8816A564: goto loc_8816A564;
		case 0x8816A5B4: goto loc_8816A5B4;
		case 0x8816A620: goto loc_8816A620;
		case 0x8816A668: goto loc_8816A668;
		case 0x8816A6D8: goto loc_8816A6D8;
		case 0x8816A720: goto loc_8816A720;
		case 0x8816A7A4: goto loc_8816A7A4;
		case 0x8816A7EC: goto loc_8816A7EC;
		case 0x8816A84C: goto loc_8816A84C;
		case 0x8816A890: goto loc_8816A890;
		case 0x8816A8A0: goto loc_8816A8A0;
		case 0x8816A924: goto loc_8816A924;
		case 0x8816A96C: goto loc_8816A96C;
		case 0x8816A9DC: goto loc_8816A9DC;
		case 0x8816AA24: goto loc_8816AA24;
		case 0x8816AA98: goto loc_8816AA98;
		case 0x8816AAE0: goto loc_8816AAE0;
		case 0x8816AB50: goto loc_8816AB50;
		case 0x8816AB98: goto loc_8816AB98;
		case 0x8816AC10: goto loc_8816AC10;
		case 0x8816AC58: goto loc_8816AC58;
		case 0x8816ACB8: goto loc_8816ACB8;
		case 0x8816ACEC: goto loc_8816ACEC;
		case 0x8816AD04: goto loc_8816AD04;
		case 0x8816AD0C: goto loc_8816AD0C;
		case 0x8816AD38: goto loc_8816AD38;
		case 0x8816AD48: goto loc_8816AD48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88168AC0;
	__savegprlr_22(ctx, base);
loc_88168AC0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x88168AC0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88168AD0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// beq cr6,0x88168af4
	if (ctx.cr6.eq) goto loc_88168AF4;
	// bl 0x881656f8
	ctx.lr = 0x88168AEC;
	sub_881656F8(ctx, base);
loc_88168AEC:
	// stw r3,288(r26)
	ctx.current_instruction = 0x88168AEC;
	REX_STORE_U32(ctx.r26.u32 + 288, ctx.r3.u32);
	// b 0x88168af8
	goto loc_88168AF8;
loc_88168AF4:
	// bl 0x881656f8
	ctx.lr = 0x88168AF8;
	sub_881656F8(ctx, base);
loc_88168AF8:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x88168AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88168b2c
	if (!ctx.cr6.eq) goto loc_88168B2C;
	// lwz r11,22288(r26)
	ctx.current_instruction = 0x88168B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88168b2c
	if (ctx.cr6.eq) goto loc_88168B2C;
	// lwz r11,22412(r26)
	ctx.current_instruction = 0x88168B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88168b2c
	if (!ctx.cr6.eq) goto loc_88168B2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4648
	ctx.lr = 0x88168B24;
	sub_881C4648(ctx, base);
loc_88168B24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
loc_88168B2C:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x88168B2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88168f98
	if (!ctx.cr6.eq) goto loc_88168F98;
	// lwz r11,21536(r26)
	ctx.current_instruction = 0x88168B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88168f14
	if (ctx.cr6.eq) goto loc_88168F14;
	// lwz r11,21864(r26)
	ctx.current_instruction = 0x88168B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88168dd4
	if (ctx.cr6.eq) goto loc_88168DD4;
	// lwz r11,22252(r26)
	ctx.current_instruction = 0x88168B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88168dd4
	if (!ctx.cr6.eq) goto loc_88168DD4;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88168B5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168B6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88168cc8
	if (ctx.cr6.eq) goto loc_88168CC8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88168bd8
	if (!ctx.cr6.lt) goto loc_88168BD8;
loc_88168B80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168bd8
	if (ctx.cr6.eq) goto loc_88168BD8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168B8C;
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
	ctx.current_instruction = 0x88168BB0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168BB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168bc8
	if (!ctx.cr0.lt) goto loc_88168BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168BC8;
	sub_88156678(ctx, base);
loc_88168BC8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168b80
	if (ctx.cr6.gt) goto loc_88168B80;
loc_88168BD8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88168BDC;
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
	ctx.current_instruction = 0x88168BF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88168C00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88168c10
	if (!ctx.cr0.lt) goto loc_88168C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168C10;
	sub_88156678(ctx, base);
loc_88168C10:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88168C10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,21540(r26)
	ctx.current_instruction = 0x88168C18;
	REX_STORE_U32(ctx.r26.u32 + 21540, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88168c88
	if (!ctx.cr6.lt) goto loc_88168C88;
loc_88168C30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168c88
	if (ctx.cr6.eq) goto loc_88168C88;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168C3C;
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
	ctx.current_instruction = 0x88168C60;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168C68;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168c78
	if (!ctx.cr0.lt) goto loc_88168C78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168C78;
	sub_88156678(ctx, base);
loc_88168C78:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168C78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168c30
	if (ctx.cr6.gt) goto loc_88168C30;
loc_88168C88:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88168C8C;
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
	ctx.current_instruction = 0x88168CA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88168CB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88168cc0
	if (!ctx.cr0.lt) goto loc_88168CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168CC0;
	sub_88156678(ctx, base);
loc_88168CC0:
	// stw r30,21544(r26)
	ctx.current_instruction = 0x88168CC0;
	REX_STORE_U32(ctx.r26.u32 + 21544, ctx.r30.u32);
	// b 0x88168f14
	goto loc_88168F14;
loc_88168CC8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88168d28
	if (!ctx.cr6.lt) goto loc_88168D28;
loc_88168CD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168d28
	if (ctx.cr6.eq) goto loc_88168D28;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168CDC;
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
	ctx.current_instruction = 0x88168D00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168D08;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168d18
	if (!ctx.cr0.lt) goto loc_88168D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168D18;
	sub_88156678(ctx, base);
loc_88168D18:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168D18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168cd0
	if (ctx.cr6.gt) goto loc_88168CD0;
loc_88168D28:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88168D2C;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x88168D44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x88168D4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88168d5c
	if (!ctx.cr0.lt) goto loc_88168D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168D5C;
	sub_88156678(ctx, base);
loc_88168D5C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88168D5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168D68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88168ef0
	if (!ctx.cr6.lt) goto loc_88168EF0;
loc_88168D78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168ef0
	if (ctx.cr6.eq) goto loc_88168EF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168D84;
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
	ctx.current_instruction = 0x88168DA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168DB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168dc0
	if (!ctx.cr0.lt) goto loc_88168DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168DC0;
	sub_88156678(ctx, base);
loc_88168DC0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168DC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168d78
	if (ctx.cr6.gt) goto loc_88168D78;
	// b 0x88168ef0
	goto loc_88168EF0;
loc_88168DD4:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88168DD4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168DE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88168e90
	if (ctx.cr6.eq) goto loc_88168E90;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88168e50
	if (!ctx.cr6.lt) goto loc_88168E50;
loc_88168DF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168e50
	if (ctx.cr6.eq) goto loc_88168E50;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168E04;
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
	ctx.current_instruction = 0x88168E28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168E30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168e40
	if (!ctx.cr0.lt) goto loc_88168E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168E40;
	sub_88156678(ctx, base);
loc_88168E40:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168E40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168df8
	if (ctx.cr6.gt) goto loc_88168DF8;
loc_88168E50:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88168E54;
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
	ctx.current_instruction = 0x88168E6C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88168E78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88168e88
	if (!ctx.cr0.lt) goto loc_88168E88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168E88;
	sub_88156678(ctx, base);
loc_88168E88:
	// stw r30,21868(r26)
	ctx.current_instruction = 0x88168E88;
	REX_STORE_U32(ctx.r26.u32 + 21868, ctx.r30.u32);
	// b 0x88168f14
	goto loc_88168F14;
loc_88168E90:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88168ef0
	if (!ctx.cr6.lt) goto loc_88168EF0;
loc_88168E98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88168ef0
	if (ctx.cr6.eq) goto loc_88168EF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88168EA4;
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
	ctx.current_instruction = 0x88168EC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88168ED0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88168ee0
	if (!ctx.cr0.lt) goto loc_88168EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168EE0;
	sub_88156678(ctx, base);
loc_88168EE0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168EE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168e98
	if (ctx.cr6.gt) goto loc_88168E98;
loc_88168EF0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88168EF0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x88168F00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	ctx.current_instruction = 0x88168F04;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge 0x88168f14
	if (!ctx.cr0.lt) goto loc_88168F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88168F14;
	sub_88156678(ctx, base);
loc_88168F14:
	// lwz r11,22076(r26)
	ctx.current_instruction = 0x88168F14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88168f34
	if (ctx.cr6.eq) goto loc_88168F34;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88165170
	ctx.lr = 0x88168F30;
	sub_88165170(ctx, base);
loc_88168F30:
	// lwz r22,80(r1)
	ctx.current_instruction = 0x88168F30;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88168F34:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88168f40
	if (ctx.cr6.eq) goto loc_88168F40;
	// stw r29,22232(r26)
	ctx.current_instruction = 0x88168F3C;
	REX_STORE_U32(ctx.r26.u32 + 22232, ctx.r29.u32);
loc_88168F40:
	// lwz r11,14836(r26)
	ctx.current_instruction = 0x88168F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88168f5c
	if (!ctx.cr6.gt) goto loc_88168F5C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816ad54
	if (ctx.cr6.eq) goto loc_8816AD54;
	// lwz r11,21684(r26)
	ctx.current_instruction = 0x88168F54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21684);
	// stw r11,21676(r26)
	ctx.current_instruction = 0x88168F58;
	REX_STORE_U32(ctx.r26.u32 + 21676, ctx.r11.u32);
loc_88168F5C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816ad54
	if (ctx.cr6.eq) goto loc_8816AD54;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,24688(r26)
	ctx.current_instruction = 0x88168F68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24688);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x88151290
	ctx.lr = 0x88168F78;
	sub_88151290(ctx, base);
loc_88168F78:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881515a8
	ctx.lr = 0x88168F88;
	sub_881515A8(ctx, base);
loc_88168F88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8816ad50
	if (ctx.cr6.eq) goto loc_8816AD50;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_88168F98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88168fb8
	if (ctx.cr6.eq) goto loc_88168FB8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88168fb8
	if (ctx.cr6.eq) goto loc_88168FB8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88168fb8
	if (ctx.cr6.eq) goto loc_88168FB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8816ad60
	if (!ctx.cr6.eq) goto loc_8816AD60;
loc_88168FB8:
	// lwz r11,21552(r26)
	ctx.current_instruction = 0x88168FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169040
	if (ctx.cr6.eq) goto loc_88169040;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88168FC4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88168FCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8816901c
	if (!ctx.cr6.lt) goto loc_8816901C;
loc_88168FDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816901c
	if (ctx.cr6.eq) goto loc_8816901C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88168FE4;
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
	ctx.current_instruction = 0x88168FF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88168FFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816900c
	if (!ctx.cr0.lt) goto loc_8816900C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816900C;
	sub_88156678(ctx, base);
loc_8816900C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816900C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88168fdc
	if (ctx.cr6.gt) goto loc_88168FDC;
loc_8816901C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816901C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816902C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169030;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169040
	if (!ctx.cr0.lt) goto loc_88169040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169040;
	sub_88156678(ctx, base);
loc_88169040:
	// lwz r11,21536(r26)
	ctx.current_instruction = 0x88169040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816941c
	if (ctx.cr6.eq) goto loc_8816941C;
	// lwz r11,21864(r26)
	ctx.current_instruction = 0x8816904C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881692dc
	if (ctx.cr6.eq) goto loc_881692DC;
	// lwz r11,22252(r26)
	ctx.current_instruction = 0x88169058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881692dc
	if (!ctx.cr6.eq) goto loc_881692DC;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169064;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881691d0
	if (ctx.cr6.eq) goto loc_881691D0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881690e0
	if (!ctx.cr6.lt) goto loc_881690E0;
loc_88169088:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881690e0
	if (ctx.cr6.eq) goto loc_881690E0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169094;
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
	ctx.current_instruction = 0x881690B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881690C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881690d0
	if (!ctx.cr0.lt) goto loc_881690D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881690D0;
	sub_88156678(ctx, base);
loc_881690D0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881690D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169088
	if (ctx.cr6.gt) goto loc_88169088;
loc_881690E0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881690E4;
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
	ctx.current_instruction = 0x881690FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169108;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169118
	if (!ctx.cr0.lt) goto loc_88169118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169118;
	sub_88156678(ctx, base);
loc_88169118:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169118;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,21540(r26)
	ctx.current_instruction = 0x88169120;
	REX_STORE_U32(ctx.r26.u32 + 21540, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169190
	if (!ctx.cr6.lt) goto loc_88169190;
loc_88169138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169190
	if (ctx.cr6.eq) goto loc_88169190;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169144;
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
	ctx.current_instruction = 0x88169168;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169170;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169180
	if (!ctx.cr0.lt) goto loc_88169180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169180;
	sub_88156678(ctx, base);
loc_88169180:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169180;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169138
	if (ctx.cr6.gt) goto loc_88169138;
loc_88169190:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169194;
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
	ctx.current_instruction = 0x881691AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881691B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881691c8
	if (!ctx.cr0.lt) goto loc_881691C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881691C8;
	sub_88156678(ctx, base);
loc_881691C8:
	// stw r30,21544(r26)
	ctx.current_instruction = 0x881691C8;
	REX_STORE_U32(ctx.r26.u32 + 21544, ctx.r30.u32);
	// b 0x8816941c
	goto loc_8816941C;
loc_881691D0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169230
	if (!ctx.cr6.lt) goto loc_88169230;
loc_881691D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169230
	if (ctx.cr6.eq) goto loc_88169230;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881691E4;
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
	ctx.current_instruction = 0x88169208;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169210;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169220
	if (!ctx.cr0.lt) goto loc_88169220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169220;
	sub_88156678(ctx, base);
loc_88169220:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881691d8
	if (ctx.cr6.gt) goto loc_881691D8;
loc_88169230:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169234;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x8816924C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x88169254;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169264
	if (!ctx.cr0.lt) goto loc_88169264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169264;
	sub_88156678(ctx, base);
loc_88169264:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169264;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881693f8
	if (!ctx.cr6.lt) goto loc_881693F8;
loc_88169280:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881693f8
	if (ctx.cr6.eq) goto loc_881693F8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816928C;
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
	ctx.current_instruction = 0x881692B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881692B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881692c8
	if (!ctx.cr0.lt) goto loc_881692C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881692C8;
	sub_88156678(ctx, base);
loc_881692C8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881692C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169280
	if (ctx.cr6.gt) goto loc_88169280;
	// b 0x881693f8
	goto loc_881693F8;
loc_881692DC:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881692DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881692EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169398
	if (ctx.cr6.eq) goto loc_88169398;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88169358
	if (!ctx.cr6.lt) goto loc_88169358;
loc_88169300:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169358
	if (ctx.cr6.eq) goto loc_88169358;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816930C;
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
	ctx.current_instruction = 0x88169330;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169338;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169348
	if (!ctx.cr0.lt) goto loc_88169348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169348;
	sub_88156678(ctx, base);
loc_88169348:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169348;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169300
	if (ctx.cr6.gt) goto loc_88169300;
loc_88169358:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816935C;
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
	ctx.current_instruction = 0x88169374;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169380;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169390
	if (!ctx.cr0.lt) goto loc_88169390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169390;
	sub_88156678(ctx, base);
loc_88169390:
	// stw r30,21868(r26)
	ctx.current_instruction = 0x88169390;
	REX_STORE_U32(ctx.r26.u32 + 21868, ctx.r30.u32);
	// b 0x8816941c
	goto loc_8816941C;
loc_88169398:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881693f8
	if (!ctx.cr6.lt) goto loc_881693F8;
loc_881693A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881693f8
	if (ctx.cr6.eq) goto loc_881693F8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881693AC;
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
	ctx.current_instruction = 0x881693D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881693D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881693e8
	if (!ctx.cr0.lt) goto loc_881693E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881693E8;
	sub_88156678(ctx, base);
loc_881693E8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881693E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881693a0
	if (ctx.cr6.gt) goto loc_881693A0;
loc_881693F8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881693F8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169408;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	ctx.current_instruction = 0x8816940C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge 0x8816941c
	if (!ctx.cr0.lt) goto loc_8816941C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816941C;
	sub_88156678(ctx, base);
loc_8816941C:
	// lwz r11,22076(r26)
	ctx.current_instruction = 0x8816941C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816943c
	if (ctx.cr6.eq) goto loc_8816943C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88165170
	ctx.lr = 0x88169438;
	sub_88165170(ctx, base);
loc_88169438:
	// lwz r22,80(r1)
	ctx.current_instruction = 0x88169438;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8816943C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816943C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816944C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881694f8
	if (ctx.cr6.eq) goto loc_881694F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881694b8
	if (!ctx.cr6.lt) goto loc_881694B8;
loc_88169460:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881694b8
	if (ctx.cr6.eq) goto loc_881694B8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816946C;
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
	ctx.current_instruction = 0x88169490;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169498;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881694a8
	if (!ctx.cr0.lt) goto loc_881694A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881694A8;
	sub_88156678(ctx, base);
loc_881694A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881694A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169460
	if (ctx.cr6.gt) goto loc_88169460;
loc_881694B8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881694BC;
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
	ctx.current_instruction = 0x881694D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881694E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881694f0
	if (!ctx.cr0.lt) goto loc_881694F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881694F0;
	sub_88156678(ctx, base);
loc_881694F0:
	// stw r30,3960(r26)
	ctx.current_instruction = 0x881694F0;
	REX_STORE_U32(ctx.r26.u32 + 3960, ctx.r30.u32);
	// b 0x8816957c
	goto loc_8816957C;
loc_881694F8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169558
	if (!ctx.cr6.lt) goto loc_88169558;
loc_88169500:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169558
	if (ctx.cr6.eq) goto loc_88169558;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816950C;
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
	ctx.current_instruction = 0x88169530;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169538;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169548
	if (!ctx.cr0.lt) goto loc_88169548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169548;
	sub_88156678(ctx, base);
loc_88169548:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169500
	if (ctx.cr6.gt) goto loc_88169500;
loc_88169558:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88169558;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169568;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816956C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816957c
	if (!ctx.cr0.lt) goto loc_8816957C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816957C;
	sub_88156678(ctx, base);
loc_8816957C:
	// lwz r11,21864(r26)
	ctx.current_instruction = 0x8816957C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881696c8
	if (ctx.cr6.eq) goto loc_881696C8;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169588;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169644
	if (ctx.cr6.eq) goto loc_88169644;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169604
	if (!ctx.cr6.lt) goto loc_88169604;
loc_881695AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169604
	if (ctx.cr6.eq) goto loc_88169604;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881695B8;
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
	ctx.current_instruction = 0x881695DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881695E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881695f4
	if (!ctx.cr0.lt) goto loc_881695F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881695F4;
	sub_88156678(ctx, base);
loc_881695F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881695F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881695ac
	if (ctx.cr6.gt) goto loc_881695AC;
loc_88169604:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169608;
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
	ctx.current_instruction = 0x88169620;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816962C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816963c
	if (!ctx.cr0.lt) goto loc_8816963C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816963C;
	sub_88156678(ctx, base);
loc_8816963C:
	// stw r30,21676(r26)
	ctx.current_instruction = 0x8816963C;
	REX_STORE_U32(ctx.r26.u32 + 21676, ctx.r30.u32);
	// b 0x881696c8
	goto loc_881696C8;
loc_88169644:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881696a4
	if (!ctx.cr6.lt) goto loc_881696A4;
loc_8816964C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881696a4
	if (ctx.cr6.eq) goto loc_881696A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169658;
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
	ctx.current_instruction = 0x8816967C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169684;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169694
	if (!ctx.cr0.lt) goto loc_88169694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169694;
	sub_88156678(ctx, base);
loc_88169694:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816964c
	if (ctx.cr6.gt) goto loc_8816964C;
loc_881696A4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881696A4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881696B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881696B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881696c8
	if (!ctx.cr0.lt) goto loc_881696C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881696C8;
	sub_88156678(ctx, base);
loc_881696C8:
	// lwz r11,3484(r26)
	ctx.current_instruction = 0x881696C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169814
	if (ctx.cr6.eq) goto loc_88169814;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881696D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881696E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169790
	if (ctx.cr6.eq) goto loc_88169790;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169750
	if (!ctx.cr6.lt) goto loc_88169750;
loc_881696F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169750
	if (ctx.cr6.eq) goto loc_88169750;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169704;
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
	ctx.current_instruction = 0x88169728;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169730;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169740
	if (!ctx.cr0.lt) goto loc_88169740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169740;
	sub_88156678(ctx, base);
loc_88169740:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169740;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881696f8
	if (ctx.cr6.gt) goto loc_881696F8;
loc_88169750:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169754;
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
	ctx.current_instruction = 0x8816976C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169778;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169788
	if (!ctx.cr0.lt) goto loc_88169788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169788;
	sub_88156678(ctx, base);
loc_88169788:
	// stw r30,3488(r26)
	ctx.current_instruction = 0x88169788;
	REX_STORE_U32(ctx.r26.u32 + 3488, ctx.r30.u32);
	// b 0x88169814
	goto loc_88169814;
loc_88169790:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881697f0
	if (!ctx.cr6.lt) goto loc_881697F0;
loc_88169798:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881697f0
	if (ctx.cr6.eq) goto loc_881697F0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881697A4;
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
	ctx.current_instruction = 0x881697C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881697D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881697e0
	if (!ctx.cr0.lt) goto loc_881697E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881697E0;
	sub_88156678(ctx, base);
loc_881697E0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881697E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169798
	if (ctx.cr6.gt) goto loc_88169798;
loc_881697F0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881697F0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169800;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169804;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169814
	if (!ctx.cr0.lt) goto loc_88169814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169814;
	sub_88156678(ctx, base);
loc_88169814:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x88169814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881699b0
	if (!ctx.cr6.eq) goto loc_881699B0;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169820;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816982C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88169894
	if (!ctx.cr6.lt) goto loc_88169894;
loc_8816983C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169894
	if (ctx.cr6.eq) goto loc_88169894;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169848;
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
	ctx.current_instruction = 0x8816986C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169874;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169884
	if (!ctx.cr0.lt) goto loc_88169884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169884;
	sub_88156678(ctx, base);
loc_88169884:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816983c
	if (ctx.cr6.gt) goto loc_8816983C;
loc_88169894:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169898;
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
	ctx.current_instruction = 0x881698B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881698BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881698cc
	if (!ctx.cr0.lt) goto loc_881698CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881698CC;
	sub_88156678(ctx, base);
loc_881698CC:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x88169994
	if (!ctx.cr6.eq) goto loc_88169994;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881698D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881698E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x88169948
	if (!ctx.cr6.lt) goto loc_88169948;
loc_881698F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169948
	if (ctx.cr6.eq) goto loc_88169948;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881698FC;
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
	ctx.current_instruction = 0x88169920;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169928;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169938
	if (!ctx.cr0.lt) goto loc_88169938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169938;
	sub_88156678(ctx, base);
loc_88169938:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169938;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881698f0
	if (ctx.cr6.gt) goto loc_881698F0;
loc_88169948:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816994C;
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
	ctx.current_instruction = 0x88169964;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169970;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169980
	if (!ctx.cr0.lt) goto loc_88169980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169980;
	sub_88156678(ctx, base);
loc_88169980:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bge cr6,0x8816ad60
	if (!ctx.cr6.lt) goto loc_8816AD60;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// b 0x8816999c
	goto loc_8816999C;
loc_88169994:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8816999C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88166358
	ctx.lr = 0x881699A8;
	sub_88166358(ctx, base);
loc_881699A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
loc_881699B0:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881699B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881699C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169a6c
	if (ctx.cr6.eq) goto loc_88169A6C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x88169a2c
	if (!ctx.cr6.lt) goto loc_88169A2C;
loc_881699D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169a2c
	if (ctx.cr6.eq) goto loc_88169A2C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881699E0;
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
	ctx.current_instruction = 0x88169A04;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169A0C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169a1c
	if (!ctx.cr0.lt) goto loc_88169A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169A1C;
	sub_88156678(ctx, base);
loc_88169A1C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881699d4
	if (ctx.cr6.gt) goto loc_881699D4;
loc_88169A2C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169A30;
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
	ctx.current_instruction = 0x88169A48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169A54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169a64
	if (!ctx.cr0.lt) goto loc_88169A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169A64;
	sub_88156678(ctx, base);
loc_88169A64:
	// stw r30,4008(r26)
	ctx.current_instruction = 0x88169A64;
	REX_STORE_U32(ctx.r26.u32 + 4008, ctx.r30.u32);
	// b 0x88169af0
	goto loc_88169AF0;
loc_88169A6C:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x88169acc
	if (!ctx.cr6.lt) goto loc_88169ACC;
loc_88169A74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169acc
	if (ctx.cr6.eq) goto loc_88169ACC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169A80;
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
	ctx.current_instruction = 0x88169AA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169AAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169abc
	if (!ctx.cr0.lt) goto loc_88169ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169ABC;
	sub_88156678(ctx, base);
loc_88169ABC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169a74
	if (ctx.cr6.gt) goto loc_88169A74;
loc_88169ACC:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88169ACC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169ADC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169AE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169af0
	if (!ctx.cr0.lt) goto loc_88169AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169AF0;
	sub_88156678(ctx, base);
loc_88169AF0:
	// lwz r11,4008(r26)
	ctx.current_instruction = 0x88169AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x88169c40
	if (ctx.cr6.gt) goto loc_88169C40;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169AFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169B0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169bb8
	if (ctx.cr6.eq) goto loc_88169BB8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169b78
	if (!ctx.cr6.lt) goto loc_88169B78;
loc_88169B20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169b78
	if (ctx.cr6.eq) goto loc_88169B78;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169B2C;
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
	ctx.current_instruction = 0x88169B50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169B58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169b68
	if (!ctx.cr0.lt) goto loc_88169B68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169B68;
	sub_88156678(ctx, base);
loc_88169B68:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169B68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169b20
	if (ctx.cr6.gt) goto loc_88169B20;
loc_88169B78:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169B7C;
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
	ctx.current_instruction = 0x88169B94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169BA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169bb0
	if (!ctx.cr0.lt) goto loc_88169BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169BB0;
	sub_88156678(ctx, base);
loc_88169BB0:
	// stw r30,252(r26)
	ctx.current_instruction = 0x88169BB0;
	REX_STORE_U32(ctx.r26.u32 + 252, ctx.r30.u32);
	// b 0x88169c4c
	goto loc_88169C4C;
loc_88169BB8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169c18
	if (!ctx.cr6.lt) goto loc_88169C18;
loc_88169BC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169c18
	if (ctx.cr6.eq) goto loc_88169C18;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169BCC;
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
	ctx.current_instruction = 0x88169BF0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169BF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169c08
	if (!ctx.cr0.lt) goto loc_88169C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169C08;
	sub_88156678(ctx, base);
loc_88169C08:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169C08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169bc0
	if (ctx.cr6.gt) goto loc_88169BC0;
loc_88169C18:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88169C18;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169C28;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169C2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169c4c
	if (!ctx.cr0.lt) goto loc_88169C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169C3C;
	sub_88156678(ctx, base);
loc_88169C3C:
	// b 0x88169c4c
	goto loc_88169C4C;
loc_88169C40:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88169c4c
	if (ctx.cr6.eq) goto loc_88169C4C;
	// stw r29,252(r26)
	ctx.current_instruction = 0x88169C48;
	REX_STORE_U32(ctx.r26.u32 + 252, ctx.r29.u32);
loc_88169C4C:
	// lwz r11,3480(r26)
	ctx.current_instruction = 0x88169C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169d98
	if (ctx.cr6.eq) goto loc_88169D98;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169C58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169C68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169d14
	if (ctx.cr6.eq) goto loc_88169D14;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169cd4
	if (!ctx.cr6.lt) goto loc_88169CD4;
loc_88169C7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169cd4
	if (ctx.cr6.eq) goto loc_88169CD4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169C88;
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
	ctx.current_instruction = 0x88169CAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169CB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169cc4
	if (!ctx.cr0.lt) goto loc_88169CC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169CC4;
	sub_88156678(ctx, base);
loc_88169CC4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169c7c
	if (ctx.cr6.gt) goto loc_88169C7C;
loc_88169CD4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169CD8;
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
	ctx.current_instruction = 0x88169CF0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169CFC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169d0c
	if (!ctx.cr0.lt) goto loc_88169D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169D0C;
	sub_88156678(ctx, base);
loc_88169D0C:
	// stw r30,3468(r26)
	ctx.current_instruction = 0x88169D0C;
	REX_STORE_U32(ctx.r26.u32 + 3468, ctx.r30.u32);
	// b 0x88169d98
	goto loc_88169D98;
loc_88169D14:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88169d74
	if (!ctx.cr6.lt) goto loc_88169D74;
loc_88169D1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169d74
	if (ctx.cr6.eq) goto loc_88169D74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169D28;
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
	ctx.current_instruction = 0x88169D4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169D54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169d64
	if (!ctx.cr0.lt) goto loc_88169D64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169D64;
	sub_88156678(ctx, base);
loc_88169D64:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169d1c
	if (ctx.cr6.gt) goto loc_88169D1C;
loc_88169D74:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88169D74;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169D84;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169D88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169d98
	if (!ctx.cr0.lt) goto loc_88169D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169D98;
	sub_88156678(ctx, base);
loc_88169D98:
	// lwz r11,3472(r26)
	ctx.current_instruction = 0x88169D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88169dec
	if (!ctx.cr6.eq) goto loc_88169DEC;
	// lwz r11,4008(r26)
	ctx.current_instruction = 0x88169DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x88169dc8
	if (ctx.cr6.gt) goto loc_88169DC8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88169dc0
	if (ctx.cr6.eq) goto loc_88169DC0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3468(r26)
	ctx.current_instruction = 0x88169DBC;
	REX_STORE_U32(ctx.r26.u32 + 3468, ctx.r10.u32);
loc_88169DC0:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x88169df0
	goto loc_88169DF0;
loc_88169DC8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88169dd4
	if (ctx.cr6.eq) goto loc_88169DD4;
	// stw r29,3468(r26)
	ctx.current_instruction = 0x88169DD0;
	REX_STORE_U32(ctx.r26.u32 + 3468, ctx.r29.u32);
loc_88169DD4:
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,19448
	ctx.r11.s64 = ctx.r9.s64 + 19448;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r27,-4(r8)
	ctx.current_instruction = 0x88169DE4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x88169df0
	goto loc_88169DF0;
loc_88169DEC:
	// lwz r27,4008(r26)
	ctx.current_instruction = 0x88169DEC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 4008);
loc_88169DF0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88169dfc
	if (ctx.cr6.eq) goto loc_88169DFC;
	// stw r27,248(r26)
	ctx.current_instruction = 0x88169DF8;
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r27.u32);
loc_88169DFC:
	// lwz r11,3008(r26)
	ctx.current_instruction = 0x88169DFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3008);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169e40
	if (ctx.cr6.eq) goto loc_88169E40;
	// lwz r11,288(r26)
	ctx.current_instruction = 0x88169E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88169e40
	if (ctx.cr6.eq) goto loc_88169E40;
	// lwz r10,248(r26)
	ctx.current_instruction = 0x88169E18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 248);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x88169e2c
	if (ctx.cr6.lt) goto loc_88169E2C;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x88169e40
	goto loc_88169E40;
loc_88169E2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169e3c
	if (ctx.cr6.eq) goto loc_88169E3C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88169e40
	if (!ctx.cr6.eq) goto loc_88169E40;
loc_88169E3C:
	// li r25,7
	ctx.r25.s64 = 7;
loc_88169E40:
	// lwz r11,21572(r26)
	ctx.current_instruction = 0x88169E40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169f8c
	if (ctx.cr6.eq) goto loc_88169F8C;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88169E4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88169f08
	if (ctx.cr6.eq) goto loc_88169F08;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88169ec8
	if (!ctx.cr6.lt) goto loc_88169EC8;
loc_88169E70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169ec8
	if (ctx.cr6.eq) goto loc_88169EC8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169E7C;
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
	ctx.current_instruction = 0x88169EA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169EA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169eb8
	if (!ctx.cr0.lt) goto loc_88169EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169EB8;
	sub_88156678(ctx, base);
loc_88169EB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169EB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169e70
	if (ctx.cr6.gt) goto loc_88169E70;
loc_88169EC8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88169ECC;
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
	ctx.current_instruction = 0x88169EE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88169EF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88169f00
	if (!ctx.cr0.lt) goto loc_88169F00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169F00;
	sub_88156678(ctx, base);
loc_88169F00:
	// stw r30,21576(r26)
	ctx.current_instruction = 0x88169F00;
	REX_STORE_U32(ctx.r26.u32 + 21576, ctx.r30.u32);
	// b 0x88169f8c
	goto loc_88169F8C;
loc_88169F08:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88169f68
	if (!ctx.cr6.lt) goto loc_88169F68;
loc_88169F10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88169f68
	if (ctx.cr6.eq) goto loc_88169F68;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88169F1C;
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
	ctx.current_instruction = 0x88169F40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88169F48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88169f58
	if (!ctx.cr0.lt) goto loc_88169F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169F58;
	sub_88156678(ctx, base);
loc_88169F58:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88169F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88169f10
	if (ctx.cr6.gt) goto loc_88169F10;
loc_88169F68:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88169F68;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88169F78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88169F7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88169f8c
	if (!ctx.cr0.lt) goto loc_88169F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88169F8C;
	sub_88156678(ctx, base);
loc_88169F8C:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x88169F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169fa0
	if (ctx.cr6.eq) goto loc_88169FA0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8816a23c
	if (!ctx.cr6.eq) goto loc_8816A23C;
loc_88169FA0:
	// lwz r11,22288(r26)
	ctx.current_instruction = 0x88169FA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22288);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88169fc8
	if (ctx.cr6.eq) goto loc_88169FC8;
	// bl 0x881875a0
	ctx.lr = 0x88169FB8;
	sub_881875A0(ctx, base);
loc_88169FB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88169fd4
	if (ctx.cr6.eq) goto loc_88169FD4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_88169FC8:
	// bl 0x88160580
	ctx.lr = 0x88169FCC;
	sub_88160580(ctx, base);
loc_88169FCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
loc_88169FD4:
	// lwz r11,20708(r26)
	ctx.current_instruction = 0x88169FD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a028
	if (ctx.cr6.eq) goto loc_8816A028;
	// lwz r11,144(r26)
	ctx.current_instruction = 0x88169FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 144);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816a028
	if (!ctx.cr6.gt) goto loc_8816A028;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88169FF4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a014
	if (ctx.cr6.eq) goto loc_8816A014;
	// lwz r10,272(r26)
	ctx.current_instruction = 0x88169FFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8816A000;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,4,28,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stwx r6,r10,r11
	ctx.current_instruction = 0x8816A010;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8816A014:
	// lwz r10,144(r26)
	ctx.current_instruction = 0x8816A014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88169ff4
	if (ctx.cr6.lt) goto loc_88169FF4;
loc_8816A028:
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a230
	if (ctx.cr6.eq) goto loc_8816A230;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A034;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a0a8
	if (!ctx.cr6.lt) goto loc_8816A0A8;
loc_8816A050:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a0a8
	if (ctx.cr6.eq) goto loc_8816A0A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A05C;
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
	ctx.current_instruction = 0x8816A080;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A088;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a098
	if (!ctx.cr0.lt) goto loc_8816A098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A098;
	sub_88156678(ctx, base);
loc_8816A098:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A098;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a050
	if (ctx.cr6.gt) goto loc_8816A050;
loc_8816A0A8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A0AC;
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
	ctx.current_instruction = 0x8816A0C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A0D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a0e0
	if (!ctx.cr0.lt) goto loc_8816A0E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A0E0;
	sub_88156678(ctx, base);
loc_8816A0E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816a0f0
	if (!ctx.cr6.eq) goto loc_8816A0F0;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x8816a230
	goto loc_8816A230;
loc_8816A0F0:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A0F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A0FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a164
	if (!ctx.cr6.lt) goto loc_8816A164;
loc_8816A10C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a164
	if (ctx.cr6.eq) goto loc_8816A164;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A118;
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
	ctx.current_instruction = 0x8816A13C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A144;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a154
	if (!ctx.cr0.lt) goto loc_8816A154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A154;
	sub_88156678(ctx, base);
loc_8816A154:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a10c
	if (ctx.cr6.gt) goto loc_8816A10C;
loc_8816A164:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A168;
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
	ctx.current_instruction = 0x8816A180;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A18C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a19c
	if (!ctx.cr0.lt) goto loc_8816A19C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A19C;
	sub_88156678(ctx, base);
loc_8816A19C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816a1ac
	if (!ctx.cr6.eq) goto loc_8816A1AC;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8816a230
	goto loc_8816A230;
loc_8816A1AC:
	// lwz r11,22288(r26)
	ctx.current_instruction = 0x8816A1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22288);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a1d4
	if (ctx.cr6.eq) goto loc_8816A1D4;
	// bl 0x881875a0
	ctx.lr = 0x8816A1C4;
	sub_881875A0(ctx, base);
loc_8816A1C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8816a1e0
	if (ctx.cr6.eq) goto loc_8816A1E0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8816A1D4:
	// bl 0x88160580
	ctx.lr = 0x8816A1D8;
	sub_88160580(ctx, base);
loc_8816A1D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
loc_8816A1E0:
	// lwz r11,21644(r26)
	ctx.current_instruction = 0x8816A1E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a230
	if (ctx.cr6.eq) goto loc_8816A230;
	// lwz r11,144(r26)
	ctx.current_instruction = 0x8816A1EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 144);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816a230
	if (!ctx.cr6.gt) goto loc_8816A230;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8816A200:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a21c
	if (ctx.cr6.eq) goto loc_8816A21C;
	// lwz r10,272(r26)
	ctx.current_instruction = 0x8816A208;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8816A20C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,12,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8816A218;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8816A21C:
	// lwz r10,144(r26)
	ctx.current_instruction = 0x8816A21C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8816a200
	if (ctx.cr6.lt) goto loc_8816A200;
loc_8816A230:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a23c
	if (ctx.cr6.eq) goto loc_8816A23C;
	// stw r29,22232(r26)
	ctx.current_instruction = 0x8816A238;
	REX_STORE_U32(ctx.r26.u32 + 22232, ctx.r29.u32);
loc_8816A23C:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a274
	if (ctx.cr6.eq) goto loc_8816A274;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a584
	if (ctx.cr6.eq) goto loc_8816A584;
	// lwz r11,1904(r26)
	ctx.current_instruction = 0x8816A250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 1904);
	// sth r29,0(r11)
	ctx.current_instruction = 0x8816A254;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// lwz r11,1904(r26)
	ctx.current_instruction = 0x8816A258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 1904);
	// sth r29,16(r11)
	ctx.current_instruction = 0x8816A25C;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r29.u16);
	// lwz r10,1908(r26)
	ctx.current_instruction = 0x8816A260;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1908);
	// sth r29,0(r10)
	ctx.current_instruction = 0x8816A264;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// lwz r11,1908(r26)
	ctx.current_instruction = 0x8816A268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 1908);
	// sth r29,16(r11)
	ctx.current_instruction = 0x8816A26C;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r29.u16);
	// b 0x8816a2a0
	goto loc_8816A2A0;
loc_8816A274:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a584
	if (ctx.cr6.eq) goto loc_8816A584;
	// lwz r10,1904(r26)
	ctx.current_instruction = 0x8816A27C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1904);
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,0(r10)
	ctx.current_instruction = 0x8816A284;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r10,1904(r26)
	ctx.current_instruction = 0x8816A288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1904);
	// sth r11,16(r10)
	ctx.current_instruction = 0x8816A28C;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r9,1908(r26)
	ctx.current_instruction = 0x8816A290;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1908);
	// sth r11,0(r9)
	ctx.current_instruction = 0x8816A294;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lwz r10,1908(r26)
	ctx.current_instruction = 0x8816A298;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1908);
	// sth r11,16(r10)
	ctx.current_instruction = 0x8816A29C;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
loc_8816A2A0:
	// lwz r10,3468(r26)
	ctx.current_instruction = 0x8816A2A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 3468);
	// addi r11,r26,4048
	ctx.r11.s64 = ctx.r26.s64 + 4048;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816a2b4
	if (!ctx.cr6.eq) goto loc_8816A2B4;
	// addi r11,r26,5328
	ctx.r11.s64 = ctx.r26.s64 + 5328;
loc_8816A2B4:
	// stw r11,6608(r26)
	ctx.current_instruction = 0x8816A2B4;
	REX_STORE_U32(ctx.r26.u32 + 6608, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r26,6624
	ctx.r11.s64 = ctx.r26.s64 + 6624;
	// bne cr6,0x8816a2c8
	if (!ctx.cr6.eq) goto loc_8816A2C8;
	// addi r11,r26,10720
	ctx.r11.s64 = ctx.r26.s64 + 10720;
loc_8816A2C8:
	// stw r11,14816(r26)
	ctx.current_instruction = 0x8816A2C8;
	REX_STORE_U32(ctx.r26.u32 + 14816, ctx.r11.u32);
loc_8816A2CC:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x8816A2CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x8816A2D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816ad60
	if (!ctx.cr6.eq) goto loc_8816AD60;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8816ad60
	if (!ctx.cr6.gt) goto loc_8816AD60;
	// cmpwi cr6,r27,31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 31, ctx.xer);
	// bgt cr6,0x8816ad60
	if (ctx.cr6.gt) goto loc_8816AD60;
	// lwz r11,4008(r26)
	ctx.current_instruction = 0x8816A2EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8816a310
	if (ctx.cr6.gt) goto loc_8816A310;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a310
	if (ctx.cr6.eq) goto loc_8816A310;
	// addi r11,r26,2872
	ctx.r11.s64 = ctx.r26.s64 + 2872;
	// addi r10,r26,2828
	ctx.r10.s64 = ctx.r26.s64 + 2828;
	// stw r11,2940(r26)
	ctx.current_instruction = 0x8816A308;
	REX_STORE_U32(ctx.r26.u32 + 2940, ctx.r11.u32);
	// stw r10,2952(r26)
	ctx.current_instruction = 0x8816A30C;
	REX_STORE_U32(ctx.r26.u32 + 2952, ctx.r10.u32);
loc_8816A310:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x8816A310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a894
	if (ctx.cr6.eq) goto loc_8816A894;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8816a59c
	if (ctx.cr6.eq) goto loc_8816A59C;
	// lwz r11,21568(r26)
	ctx.current_instruction = 0x8816A324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a54c
	if (ctx.cr6.eq) goto loc_8816A54C;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816A330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a3a0
	if (!ctx.cr6.lt) goto loc_8816A3A0;
loc_8816A348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a3a0
	if (ctx.cr6.eq) goto loc_8816A3A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x8816A354;
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
	ctx.current_instruction = 0x8816A378;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8816A380;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8816a390
	if (!ctx.cr0.lt) goto loc_8816A390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A390;
	sub_88156678(ctx, base);
loc_8816A390:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816A390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a348
	if (ctx.cr6.gt) goto loc_8816A348;
loc_8816A3A0:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8816A3A4;
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
	ctx.current_instruction = 0x8816A3BC;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8816A3C8;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8816a3d8
	if (!ctx.cr0.lt) goto loc_8816A3D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A3D8;
	sub_88156678(ctx, base);
loc_8816A3D8:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8816a494
	if (ctx.cr6.eq) goto loc_8816A494;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A3E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A3F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a458
	if (!ctx.cr6.lt) goto loc_8816A458;
loc_8816A400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a458
	if (ctx.cr6.eq) goto loc_8816A458;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A40C;
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
	ctx.current_instruction = 0x8816A430;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A438;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a448
	if (!ctx.cr0.lt) goto loc_8816A448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A448;
	sub_88156678(ctx, base);
loc_8816A448:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a400
	if (ctx.cr6.gt) goto loc_8816A400;
loc_8816A458:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A45C;
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
	ctx.current_instruction = 0x8816A474;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A480;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a490
	if (!ctx.cr0.lt) goto loc_8816A490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A490;
	sub_88156678(ctx, base);
loc_8816A490:
	// add r24,r30,r27
	ctx.r24.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8816A494:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x8816a54c
	if (!ctx.cr6.eq) goto loc_8816A54C;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A49C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A4A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a510
	if (!ctx.cr6.lt) goto loc_8816A510;
loc_8816A4B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a510
	if (ctx.cr6.eq) goto loc_8816A510;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A4C4;
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
	ctx.current_instruction = 0x8816A4E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A4F0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a500
	if (!ctx.cr0.lt) goto loc_8816A500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A500;
	sub_88156678(ctx, base);
loc_8816A500:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a4b8
	if (ctx.cr6.gt) goto loc_8816A4B8;
loc_8816A510:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A514;
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
	ctx.current_instruction = 0x8816A52C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A538;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a548
	if (!ctx.cr0.lt) goto loc_8816A548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A548;
	sub_88156678(ctx, base);
loc_8816A548:
	// addi r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 2;
loc_8816A54C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a558
	if (ctx.cr6.eq) goto loc_8816A558;
	// stw r24,408(r26)
	ctx.current_instruction = 0x8816A554;
	REX_STORE_U32(ctx.r26.u32 + 408, ctx.r24.u32);
loc_8816A558:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815b250
	ctx.lr = 0x8816A564;
	sub_8815B250(ctx, base);
loc_8816A564:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x8816A564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8816a58c
	if (!ctx.cr6.eq) goto loc_8816A58C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a59c
	if (ctx.cr6.eq) goto loc_8816A59C;
	// lwz r10,408(r26)
	ctx.current_instruction = 0x8816A578;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 408);
	// stw r10,22232(r26)
	ctx.current_instruction = 0x8816A57C;
	REX_STORE_U32(ctx.r26.u32 + 22232, ctx.r10.u32);
	// b 0x8816a59c
	goto loc_8816A59C;
loc_8816A584:
	// lwz r11,3468(r26)
	ctx.current_instruction = 0x8816A584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3468);
	// b 0x8816a2cc
	goto loc_8816A2CC;
loc_8816A58C:
	// lwz r10,408(r26)
	ctx.current_instruction = 0x8816A58C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 408);
	// lwz r9,22232(r26)
	ctx.current_instruction = 0x8816A590;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 22232);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8816ad60
	if (ctx.cr6.lt) goto loc_8816AD60;
loc_8816A59C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816a894
	if (ctx.cr6.eq) goto loc_8816A894;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8816a894
	if (ctx.cr6.eq) goto loc_8816A894;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88167c30
	ctx.lr = 0x8816A5B4;
	sub_88167C30(ctx, base);
loc_8816A5B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A5BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A5C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a630
	if (!ctx.cr6.lt) goto loc_8816A630;
loc_8816A5D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a630
	if (ctx.cr6.eq) goto loc_8816A630;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A5E4;
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
	ctx.current_instruction = 0x8816A608;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A610;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a620
	if (!ctx.cr0.lt) goto loc_8816A620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A620;
	sub_88156678(ctx, base);
loc_8816A620:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a5d8
	if (ctx.cr6.gt) goto loc_8816A5D8;
loc_8816A630:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A634;
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
	ctx.current_instruction = 0x8816A64C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A658;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a668
	if (!ctx.cr0.lt) goto loc_8816A668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A668;
	sub_88156678(ctx, base);
loc_8816A668:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8816a724
	if (ctx.cr6.eq) goto loc_8816A724;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A674;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a6e8
	if (!ctx.cr6.lt) goto loc_8816A6E8;
loc_8816A690:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a6e8
	if (ctx.cr6.eq) goto loc_8816A6E8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A69C;
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
	ctx.current_instruction = 0x8816A6C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A6C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a6d8
	if (!ctx.cr0.lt) goto loc_8816A6D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A6D8;
	sub_88156678(ctx, base);
loc_8816A6D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A6D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a690
	if (ctx.cr6.gt) goto loc_8816A690;
loc_8816A6E8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A6EC;
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
	ctx.current_instruction = 0x8816A704;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A710;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a720
	if (!ctx.cr0.lt) goto loc_8816A720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A720;
	sub_88156678(ctx, base);
loc_8816A720:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8816A724:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A724;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq cr6,0x8816a7f4
	if (ctx.cr6.eq) goto loc_8816A7F4;
	// stw r11,2964(r26)
	ctx.current_instruction = 0x8816A734;
	REX_STORE_U32(ctx.r26.u32 + 2964, ctx.r11.u32);
	// stw r11,2968(r26)
	ctx.current_instruction = 0x8816A738;
	REX_STORE_U32(ctx.r26.u32 + 2968, ctx.r11.u32);
	// stw r11,2976(r26)
	ctx.current_instruction = 0x8816A73C;
	REX_STORE_U32(ctx.r26.u32 + 2976, ctx.r11.u32);
	// stw r11,2984(r26)
	ctx.current_instruction = 0x8816A740;
	REX_STORE_U32(ctx.r26.u32 + 2984, ctx.r11.u32);
	// stw r11,2972(r26)
	ctx.current_instruction = 0x8816A744;
	REX_STORE_U32(ctx.r26.u32 + 2972, ctx.r11.u32);
	// stw r11,2980(r26)
	ctx.current_instruction = 0x8816A748;
	REX_STORE_U32(ctx.r26.u32 + 2980, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A74C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a7b4
	if (!ctx.cr6.lt) goto loc_8816A7B4;
loc_8816A75C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a7b4
	if (ctx.cr6.eq) goto loc_8816A7B4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A768;
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
	ctx.current_instruction = 0x8816A78C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A794;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a7a4
	if (!ctx.cr0.lt) goto loc_8816A7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A7A4;
	sub_88156678(ctx, base);
loc_8816A7A4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A7A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a75c
	if (ctx.cr6.gt) goto loc_8816A75C;
loc_8816A7B4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A7B8;
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
	ctx.current_instruction = 0x8816A7D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A7DC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a7ec
	if (!ctx.cr0.lt) goto loc_8816A7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A7EC;
	sub_88156678(ctx, base);
loc_8816A7EC:
	// stw r30,2092(r26)
	ctx.current_instruction = 0x8816A7EC;
	REX_STORE_U32(ctx.r26.u32 + 2092, ctx.r30.u32);
	// b 0x8816ad0c
	goto loc_8816AD0C;
loc_8816A7F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A7F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a85c
	if (!ctx.cr6.lt) goto loc_8816A85C;
loc_8816A804:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a85c
	if (ctx.cr6.eq) goto loc_8816A85C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A810;
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
	ctx.current_instruction = 0x8816A834;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A83C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a84c
	if (!ctx.cr0.lt) goto loc_8816A84C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A84C;
	sub_88156678(ctx, base);
loc_8816A84C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A84C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a804
	if (ctx.cr6.gt) goto loc_8816A804;
loc_8816A85C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A860;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x8816A878;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A880;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816ad0c
	if (!ctx.cr0.lt) goto loc_8816AD0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A890;
	sub_88156678(ctx, base);
loc_8816A890:
	// b 0x8816ad0c
	goto loc_8816AD0C;
loc_8816A894:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,15528(r26)
	ctx.current_instruction = 0x8816A898;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 15528);
	// bl 0x88167a68
	ctx.lr = 0x8816A8A0;
	sub_88167A68(ctx, base);
loc_8816A8A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A8A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8816A8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816ad60
	if (!ctx.cr6.eq) goto loc_8816AD60;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816a8c4
	if (ctx.cr6.eq) goto loc_8816A8C4;
	// stw r29,404(r26)
	ctx.current_instruction = 0x8816A8C0;
	REX_STORE_U32(ctx.r26.u32 + 404, ctx.r29.u32);
loc_8816A8C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A8C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a934
	if (!ctx.cr6.lt) goto loc_8816A934;
loc_8816A8DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a934
	if (ctx.cr6.eq) goto loc_8816A934;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A8E8;
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
	ctx.current_instruction = 0x8816A90C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A914;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a924
	if (!ctx.cr0.lt) goto loc_8816A924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A924;
	sub_88156678(ctx, base);
loc_8816A924:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A924;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a8dc
	if (ctx.cr6.gt) goto loc_8816A8DC;
loc_8816A934:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A938;
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
	ctx.current_instruction = 0x8816A950;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816A95C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816a96c
	if (!ctx.cr0.lt) goto loc_8816A96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A96C;
	sub_88156678(ctx, base);
loc_8816A96C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8816aa28
	if (ctx.cr6.eq) goto loc_8816AA28;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816A978;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A984;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816a9ec
	if (!ctx.cr6.lt) goto loc_8816A9EC;
loc_8816A994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816a9ec
	if (ctx.cr6.eq) goto loc_8816A9EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816A9A0;
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
	ctx.current_instruction = 0x8816A9C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816A9CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816a9dc
	if (!ctx.cr0.lt) goto loc_8816A9DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816A9DC;
	sub_88156678(ctx, base);
loc_8816A9DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816A9DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816a994
	if (ctx.cr6.gt) goto loc_8816A994;
loc_8816A9EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816A9F0;
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
	ctx.current_instruction = 0x8816AA08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816AA14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816aa24
	if (!ctx.cr0.lt) goto loc_8816AA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AA24;
	sub_88156678(ctx, base);
loc_8816AA24:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8816AA28:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816aa34
	if (ctx.cr6.eq) goto loc_8816AA34;
	// stw r11,2964(r26)
	ctx.current_instruction = 0x8816AA30;
	REX_STORE_U32(ctx.r26.u32 + 2964, ctx.r11.u32);
loc_8816AA34:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816AA34;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AA40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816aaa8
	if (!ctx.cr6.lt) goto loc_8816AAA8;
loc_8816AA50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816aaa8
	if (ctx.cr6.eq) goto loc_8816AAA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816AA5C;
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
	ctx.current_instruction = 0x8816AA80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816AA88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816aa98
	if (!ctx.cr0.lt) goto loc_8816AA98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AA98;
	sub_88156678(ctx, base);
loc_8816AA98:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AA98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816aa50
	if (ctx.cr6.gt) goto loc_8816AA50;
loc_8816AAA8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816AAAC;
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
	ctx.current_instruction = 0x8816AAC4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816AAD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816aae0
	if (!ctx.cr0.lt) goto loc_8816AAE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AAE0;
	sub_88156678(ctx, base);
loc_8816AAE0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8816ab9c
	if (ctx.cr6.eq) goto loc_8816AB9C;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816AAEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AAF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ab60
	if (!ctx.cr6.lt) goto loc_8816AB60;
loc_8816AB08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ab60
	if (ctx.cr6.eq) goto loc_8816AB60;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816AB14;
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
	ctx.current_instruction = 0x8816AB38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816AB40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816ab50
	if (!ctx.cr0.lt) goto loc_8816AB50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AB50;
	sub_88156678(ctx, base);
loc_8816AB50:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AB50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816ab08
	if (ctx.cr6.gt) goto loc_8816AB08;
loc_8816AB60:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816AB64;
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
	ctx.current_instruction = 0x8816AB7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816AB88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816ab98
	if (!ctx.cr0.lt) goto loc_8816AB98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AB98;
	sub_88156678(ctx, base);
loc_8816AB98:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8816AB9C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816AB9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq cr6,0x8816ac60
	if (ctx.cr6.eq) goto loc_8816AC60;
	// stw r11,2976(r26)
	ctx.current_instruction = 0x8816ABAC;
	REX_STORE_U32(ctx.r26.u32 + 2976, ctx.r11.u32);
	// stw r11,2984(r26)
	ctx.current_instruction = 0x8816ABB0;
	REX_STORE_U32(ctx.r26.u32 + 2984, ctx.r11.u32);
	// stw r11,2980(r26)
	ctx.current_instruction = 0x8816ABB4;
	REX_STORE_U32(ctx.r26.u32 + 2980, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816ABB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ac20
	if (!ctx.cr6.lt) goto loc_8816AC20;
loc_8816ABC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ac20
	if (ctx.cr6.eq) goto loc_8816AC20;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816ABD4;
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
	ctx.current_instruction = 0x8816ABF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816AC00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816ac10
	if (!ctx.cr0.lt) goto loc_8816AC10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AC10;
	sub_88156678(ctx, base);
loc_8816AC10:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AC10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816abc8
	if (ctx.cr6.gt) goto loc_8816ABC8;
loc_8816AC20:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816AC24;
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
	ctx.current_instruction = 0x8816AC3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816AC48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816ac58
	if (!ctx.cr0.lt) goto loc_8816AC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816AC58;
	sub_88156678(ctx, base);
loc_8816AC58:
	// stw r30,2092(r26)
	ctx.current_instruction = 0x8816AC58;
	REX_STORE_U32(ctx.r26.u32 + 2092, ctx.r30.u32);
	// b 0x8816acec
	goto loc_8816ACEC;
loc_8816AC60:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816AC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816acc8
	if (!ctx.cr6.lt) goto loc_8816ACC8;
loc_8816AC70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816acc8
	if (ctx.cr6.eq) goto loc_8816ACC8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816AC7C;
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
	ctx.current_instruction = 0x8816ACA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816ACA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816acb8
	if (!ctx.cr0.lt) goto loc_8816ACB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816ACB8;
	sub_88156678(ctx, base);
loc_8816ACB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816ACB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816ac70
	if (ctx.cr6.gt) goto loc_8816AC70;
loc_8816ACC8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816ACC8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816ACD8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816ACDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816acec
	if (!ctx.cr0.lt) goto loc_8816ACEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816ACEC;
	sub_88156678(ctx, base);
loc_8816ACEC:
	// lwz r11,4040(r26)
	ctx.current_instruction = 0x8816ACEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4040);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816ad08
	if (ctx.cr6.eq) goto loc_8816AD08;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88161130
	ctx.lr = 0x8816AD04;
	sub_88161130(ctx, base);
loc_8816AD04:
	// b 0x8816ad0c
	goto loc_8816AD0C;
loc_8816AD08:
	// bl 0x881a5c10
	ctx.lr = 0x8816AD0C;
	sub_881A5C10(ctx, base);
loc_8816AD0C:
	// lwz r11,84(r26)
	ctx.current_instruction = 0x8816AD0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816AD10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816ad60
	if (!ctx.cr6.eq) goto loc_8816AD60;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8816ad54
	if (ctx.cr6.eq) goto loc_8816AD54;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,24688(r26)
	ctx.current_instruction = 0x8816AD28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24688);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x88151290
	ctx.lr = 0x8816AD38;
	sub_88151290(ctx, base);
loc_8816AD38:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881515a8
	ctx.lr = 0x8816AD48;
	sub_881515A8(ctx, base);
loc_8816AD48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816ad64
	if (!ctx.cr6.eq) goto loc_8816AD64;
loc_8816AD50:
	// stw r25,3004(r26)
	ctx.current_instruction = 0x8816AD50;
	REX_STORE_U32(ctx.r26.u32 + 3004, ctx.r25.u32);
loc_8816AD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8816AD60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8816AD64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C4C38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C4C38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4C38;
	ctx.current_instruction = 0x881C4C38;
	PPCRegister temp{};
	// lwz r9,3392(r3)
	ctx.current_instruction = 0x881C4C38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// lwz r11,212(r3)
	ctx.current_instruction = 0x881C4C3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x881c4c50
	if (!ctx.cr6.eq) goto loc_881C4C50;
	// stw r11,15288(r3)
	ctx.current_instruction = 0x881C4C48;
	REX_STORE_U32(ctx.r3.u32 + 15288, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C4C50:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bne cr6,0x881c4c7c
	if (!ctx.cr6.eq) goto loc_881C4C7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,15292(r3)
	ctx.current_instruction = 0x881C4C64;
	REX_STORE_U32(ctx.r3.u32 + 15292, ctx.r11.u32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,15288(r3)
	ctx.current_instruction = 0x881C4C74;
	REX_STORE_U32(ctx.r3.u32 + 15288, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C4C7C:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15296(r3)
	ctx.current_instruction = 0x881C4C90;
	REX_STORE_U32(ctx.r3.u32 + 15296, ctx.r11.u32);
	// stw r11,15292(r3)
	ctx.current_instruction = 0x881C4C94;
	REX_STORE_U32(ctx.r3.u32 + 15292, ctx.r11.u32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,15288(r3)
	ctx.current_instruction = 0x881C4C9C;
	REX_STORE_U32(ctx.r3.u32 + 15288, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881c4cd4
	if (ctx.cr6.eq) goto loc_881C4CD4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x881c4cc8
	if (ctx.cr6.eq) goto loc_881C4CC8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x881c4cdc
	if (!ctx.cr6.eq) goto loc_881C4CDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15292(r3)
	ctx.current_instruction = 0x881C4CBC;
	REX_STORE_U32(ctx.r3.u32 + 15292, ctx.r11.u32);
	// stw r11,15296(r3)
	ctx.current_instruction = 0x881C4CC0;
	REX_STORE_U32(ctx.r3.u32 + 15296, ctx.r11.u32);
	// b 0x881c4cd8
	goto loc_881C4CD8;
loc_881C4CC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15292(r3)
	ctx.current_instruction = 0x881C4CCC;
	REX_STORE_U32(ctx.r3.u32 + 15292, ctx.r11.u32);
	// b 0x881c4cd8
	goto loc_881C4CD8;
loc_881C4CD4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_881C4CD8:
	// stw r11,15288(r3)
	ctx.current_instruction = 0x881C4CD8;
	REX_STORE_U32(ctx.r3.u32 + 15288, ctx.r11.u32);
loc_881C4CDC:
	// lwz r11,15288(r3)
	ctx.current_instruction = 0x881C4CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15288);
	// lwz r10,15292(r3)
	ctx.current_instruction = 0x881C4CE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15292);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,15296(r3)
	ctx.current_instruction = 0x881C4CE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15296);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15288(r3)
	ctx.current_instruction = 0x881C4CF0;
	REX_STORE_U32(ctx.r3.u32 + 15288, ctx.r11.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,15292(r3)
	ctx.current_instruction = 0x881C4D00;
	REX_STORE_U32(ctx.r3.u32 + 15292, ctx.r11.u32);
	// stw r7,15296(r3)
	ctx.current_instruction = 0x881C4D04;
	REX_STORE_U32(ctx.r3.u32 + 15296, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CA0D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CA0D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CA0D8) {
			switch (rex_dispatch_address) {
				case 0x881CA0E0:
				case 0x881CA0E8:
				case 0x881CA1C8:
				case 0x881CA208:
				case 0x881CA218:
				case 0x881CA2AC:
				case 0x881CA2CC:
				case 0x881CA2E0:
				case 0x881CA300:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CA0D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CA0E0: goto loc_881CA0E0;
		case 0x881CA0E8: goto loc_881CA0E8;
		case 0x881CA1C8: goto loc_881CA1C8;
		case 0x881CA208: goto loc_881CA208;
		case 0x881CA218: goto loc_881CA218;
		case 0x881CA2AC: goto loc_881CA2AC;
		case 0x881CA2CC: goto loc_881CA2CC;
		case 0x881CA2E0: goto loc_881CA2E0;
		case 0x881CA300: goto loc_881CA300;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881CA0E0;
	__savegprlr_14(ctx, base);
loc_881CA0E0:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef27c
	ctx.lr = 0x881CA0E8;
	__savefpr_25(ctx, base);
loc_881CA0E8:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x881CA0E8;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.current_instruction = 0x881CA0EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// stw r10,380(r1)
	ctx.current_instruction = 0x881CA0F4;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r10,412(r1)
	ctx.current_instruction = 0x881CA0FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x881CA10C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881CA110;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// std r7,80(r1)
	ctx.current_instruction = 0x881CA118;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x881CA11C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// fcfid f25,f0
	ctx.f25.f64 = double(ctx.f0.s64);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881ca2f4
	if (!ctx.cr6.gt) goto loc_881CA2F4;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x881CA140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-30717
	ctx.r10.s64 = -2013069312;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r24,404(r1)
	ctx.current_instruction = 0x881CA14C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r23,396(r1)
	ctx.current_instruction = 0x881CA154;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r18,r11,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r21,80(r1)
	ctx.current_instruction = 0x881CA15C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r22,80(r1)
	ctx.current_instruction = 0x881CA164;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f28,-26264(r10)
	ctx.current_instruction = 0x881CA168;
	ctx.f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -26264);
	// fneg f26,f30
	ctx.f26.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfd f29,12088(r9)
	ctx.current_instruction = 0x881CA170;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r15,r8,r5
	ctx.r15.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lfd f27,1488(r11)
	ctx.current_instruction = 0x881CA17C;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
loc_881CA180:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x881CA184;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881CA188;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f25,f13
	ctx.f31.f64 = ctx.f25.f64 - ctx.f13.f64;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x881ca1ac
	if (!ctx.cr6.lt) goto loc_881CA1AC;
loc_881CA19C:
	// add r11,r18,r15
	ctx.r11.u64 = ctx.r18.u64 + ctx.r15.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x881ca1bc
	goto loc_881CA1BC;
loc_881CA1AC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x881ca210
	if (!ctx.cr6.gt) goto loc_881CA210;
loc_881CA1B4:
	// li r30,2
	ctx.r30.s64 = 2;
	// add r4,r18,r27
	ctx.r4.u64 = ctx.r18.u64 + ctx.r27.u64;
loc_881CA1BC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CA1C8;
	sub_880547A0(ctx, base);
loc_881CA1C8:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881ca2e0
	if (!ctx.cr6.eq) goto loc_881CA2E0;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// mullw r31,r11,r29
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// bne cr6,0x881ca294
	if (!ctx.cr6.eq) goto loc_881CA294;
	// add. r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x881ca28c
	if (ctx.cr0.lt) goto loc_881CA28C;
	// srawi r11,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 1;
loc_881CA1F0:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r30,r20
	ctx.r4.u64 = ctx.r30.u64 + ctx.r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CA208;
	sub_880547A0(ctx, base);
loc_881CA208:
	// add r4,r30,r19
	ctx.r4.u64 = ctx.r30.u64 + ctx.r19.u64;
	// b 0x881ca2d4
	goto loc_881CA2D4;
loc_881CA210:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CA218;
	sub_881F0340(ctx, base);
loc_881CA218:
	// fsub f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64 - ctx.f1.f64;
	// fmsub f13,f1,f30,f31
	ctx.f13.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f31.f64);
	// fmsub f12,f0,f30,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, -ctx.f31.f64);
	// fadd f11,f13,f29
	ctx.f11.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fadd f10,f12,f29
	ctx.f10.f64 = ctx.f12.f64 + ctx.f29.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,88(r1)
	ctx.current_instruction = 0x881CA230;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x881CA234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r21,r11
	ctx.r21.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	ctx.current_instruction = 0x881CA240;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881CA244;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r22,r10
	ctx.r22.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add. r9,r22,r26
	ctx.r9.u64 = ctx.r22.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x881ca268
	if (ctx.cr0.lt) goto loc_881CA268;
	// mullw r11,r22,r28
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// b 0x881ca1bc
	goto loc_881CA1BC;
loc_881CA268:
	// add. r11,r21,r26
	ctx.r11.u64 = ctx.r21.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x881ca1b4
	if (ctx.cr0.lt) goto loc_881CA1B4;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// ble cr6,0x881ca19c
	if (!ctx.cr6.gt) goto loc_881CA19C;
	// mullw r11,r21,r28
	ctx.r11.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// b 0x881ca1bc
	goto loc_881CA1BC;
loc_881CA28C:
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// b 0x881ca1f0
	goto loc_881CA1F0;
loc_881CA294:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881ca2b4
	if (!ctx.cr6.eq) goto loc_881CA2B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r31,r20
	ctx.r4.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CA2AC;
	sub_880547A0(ctx, base);
loc_881CA2AC:
	// add r4,r31,r19
	ctx.r4.u64 = ctx.r31.u64 + ctx.r19.u64;
	// b 0x881ca2d4
	goto loc_881CA2D4;
loc_881CA2B4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x881ca2e0
	if (!ctx.cr6.eq) goto loc_881CA2E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r31,r14
	ctx.r4.u64 = ctx.r31.u64 + ctx.r14.u64;
	// add r3,r31,r23
	ctx.r3.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CA2CC;
	sub_880547A0(ctx, base);
loc_881CA2CC:
	// lwz r11,380(r1)
	ctx.current_instruction = 0x881CA2CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_881CA2D4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CA2E0;
	sub_880547A0(ctx, base);
loc_881CA2E0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r25,r25,r28
	ctx.r25.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x881ca180
	if (ctx.cr6.lt) goto loc_881CA180;
loc_881CA2F4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c8
	ctx.lr = 0x881CA300;
	__restfpr_25(ctx, base);
loc_881CA300:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE978) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE978);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE978;
	ctx.current_instruction = 0x881CE978;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x881ce688
	sub_881CE688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE9B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CE9B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CE9B8) {
			switch (rex_dispatch_address) {
				case 0x881CE9E4:
				case 0x881CE9F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE9B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CE9E4: goto loc_881CE9E4;
		case 0x881CE9F8: goto loc_881CE9F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881CE9BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881CE9C0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881CE9C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881CE9C8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.current_instruction = 0x881CE9D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881ce9e8
	if (ctx.cr6.eq) goto loc_881CE9E8;
	// bl 0x8815ba70
	ctx.lr = 0x881CE9E4;
	sub_8815BA70(ctx, base);
loc_881CE9E4:
	// stw r30,128(r31)
	ctx.current_instruction = 0x881CE9E4;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_881CE9E8:
	// lwz r3,124(r31)
	ctx.current_instruction = 0x881CE9E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881ce9fc
	if (ctx.cr6.eq) goto loc_881CE9FC;
	// bl 0x8815ba70
	ctx.lr = 0x881CE9F8;
	sub_8815BA70(ctx, base);
loc_881CE9F8:
	// stw r30,124(r31)
	ctx.current_instruction = 0x881CE9F8;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_881CE9FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	ctx.current_instruction = 0x881CEA00;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881CEA08;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881CEA10;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881CEA14;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CF360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CF360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CF360) {
			switch (rex_dispatch_address) {
				case 0x881CF368:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CF360;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CF368: goto loc_881CF368;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881CF368;
	__savegprlr_19(ctx, base);
loc_881CF368:
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881CF368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r7,36(r3)
	ctx.current_instruction = 0x881CF370;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r6,32(r3)
	ctx.current_instruction = 0x881CF374;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,56(r3)
	ctx.current_instruction = 0x881CF378;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r25,8(r11)
	ctx.current_instruction = 0x881CF380;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addi r28,r25,-1
	ctx.r28.s64 = ctx.r25.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r25,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mullw r30,r28,r7
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r26,r10,r7
	ctx.r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r9,r26,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// srawi r29,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addze r22,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r22.s64 = temp.s64;
	// andc r24,r7,r11
	ctx.r24.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// divw r29,r30,r25
	ctx.r29.u64 = uint32_t((ctx.r25.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r30.s32 / ctx.r25.s32 : 0);
	// andc r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 & ~ctx.r10.u64;
	// andc r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 & ~ctx.r9.u64;
	// srawi r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 1;
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// twlgei r24,-1
	if (ctx.r24.s32 == -1 || ctx.r24.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r21,r31,r7
	ctx.r21.u64 = uint32_t((ctx.r7.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r31.s32 / ctx.r7.s32 : 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r20,r26,r25
	ctx.r20.u64 = uint32_t((ctx.r25.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r26.s32 / ctx.r25.s32 : 0);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r24,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r24.s64 = temp.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881cf408
	if (!ctx.cr6.gt) goto loc_881CF408;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_881CF408:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x881cf8e4
	if (ctx.cr6.lt) goto loc_881CF8E4;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x881CF410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881cf42c
	if (ctx.cr6.eq) goto loc_881CF42C;
	// addi r11,r21,-256
	ctx.r11.s64 = ctx.r21.s64 + -256;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x881cf430
	goto loc_881CF430;
loc_881CF42C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881CF430:
	// mullw r26,r21,r4
	ctx.r26.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// add. r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x881cf4ac
	if (!ctx.cr0.lt) goto loc_881CF4AC;
	// subf r10,r30,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r30.u64;
	// twllei r21,0
	if (ctx.r21.s32 == 0 || ctx.r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r27,r10,r21
	ctx.r27.u64 = uint32_t((ctx.r21.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r10.s32 / ctx.r21.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// andc r7,r21,r9
	ctx.r7.u64 = ctx.r21.u64 & ~ctx.r9.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x881cf4a4
	if (!ctx.cr6.lt) goto loc_881CF4A4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.current_instruction = 0x881CF468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881CF470:
	// lwz r9,64(r3)
	ctx.current_instruction = 0x881CF470;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881cf4a0
	if (!ctx.cr6.gt) goto loc_881CF4A0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_881CF484:
	// lbzu r10,1(r9)
	ctx.current_instruction = 0x881CF484;
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r8)
	ctx.current_instruction = 0x881CF48C;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,32(r3)
	ctx.current_instruction = 0x881CF494;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881cf484
	if (ctx.cr6.lt) goto loc_881CF484;
loc_881CF4A0:
	// bdnz 0x881cf470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF470;
loc_881CF4A4:
	// mullw r11,r27,r21
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r21.s32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_881CF4AC:
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881cf524
	if (!ctx.cr6.lt) goto loc_881CF524;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lwz r10,32(r3)
	ctx.current_instruction = 0x881CF4BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881CF4C4:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// lwz r6,64(r3)
	ctx.current_instruction = 0x881CF4C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfic r31,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ble cr6,0x881cf51c
	if (!ctx.cr6.gt) goto loc_881CF51C;
loc_881CF4E8:
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x881CF4E8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r11)
	ctx.current_instruction = 0x881CF4F0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// stb r6,0(r8)
	ctx.current_instruction = 0x881CF508;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,32(r3)
	ctx.current_instruction = 0x881CF510;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881cf4e8
	if (ctx.cr6.lt) goto loc_881CF4E8;
loc_881CF51C:
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// bdnz 0x881cf4c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF4C4;
loc_881CF524:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881cf5cc
	if (!ctx.cr6.lt) goto loc_881CF5CC;
	// subf r10,r29,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r29.u64;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881CF530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881CF53C:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// lwz r7,64(r3)
	ctx.current_instruction = 0x881CF540;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// subfic r31,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// srawi r8,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 8;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bge cr6,0x881cf5a0
	if (!ctx.cr6.lt) goto loc_881CF5A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881cf5c4
	if (!ctx.cr6.gt) goto loc_881CF5C4;
loc_881CF568:
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x881CF568;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r7,0(r10)
	ctx.current_instruction = 0x881CF570;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// stb r7,1(r9)
	ctx.current_instruction = 0x881CF588;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881CF590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881cf568
	if (ctx.cr6.lt) goto loc_881CF568;
	// b 0x881cf5c4
	goto loc_881CF5C4;
loc_881CF5A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881cf5c4
	if (!ctx.cr6.gt) goto loc_881CF5C4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881CF5AC:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881CF5AC;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881CF5B4;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881CF5B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881cf5ac
	if (ctx.cr6.lt) goto loc_881CF5AC;
loc_881CF5C4:
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// bdnz 0x881cf53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF53C;
loc_881CF5CC:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r23.s64 = temp.s64;
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x881cf5e0
	if (!ctx.cr6.gt) goto loc_881CF5E0;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
loc_881CF5E0:
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,32(r3)
	ctx.current_instruction = 0x881CF5E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.current_instruction = 0x881CF5E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// lwz r10,56(r3)
	ctx.current_instruction = 0x881CF5F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,40(r3)
	ctx.current_instruction = 0x881CF5F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,64(r3)
	ctx.current_instruction = 0x881CF5FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r11,r28,r24
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r24.s32);
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881cf634
	if (ctx.cr6.eq) goto loc_881CF634;
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x881cf638
	goto loc_881CF638;
loc_881CF634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881CF638:
	// srawi r9,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 1;
	// addze r26,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r26.s64 = temp.s64;
	// add. r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x881cf6a8
	if (!ctx.cr0.lt) goto loc_881CF6A8;
	// subf r9,r31,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r31.u64;
	// twllei r21,0
	if (ctx.r21.s32 == 0 || ctx.r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r27,r9,r21
	ctx.r27.u64 = uint32_t((ctx.r21.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r9.s32 / ctx.r21.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// andc r7,r21,r8
	ctx.r7.u64 = ctx.r21.u64 & ~ctx.r8.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x881cf6a0
	if (!ctx.cr6.lt) goto loc_881CF6A0;
	// subf r9,r28,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_881CF674:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881cf698
	if (!ctx.cr6.gt) goto loc_881CF698;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_881CF684:
	// lbzx r8,r11,r29
	ctx.current_instruction = 0x881CF684;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	ctx.current_instruction = 0x881CF68C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cf684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF684;
loc_881CF698:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x881cf674
	if (!ctx.cr0.eq) goto loc_881CF674;
loc_881CF6A0:
	// mullw r11,r27,r21
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r21.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_881CF6A8:
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x881cf71c
	if (!ctx.cr6.lt) goto loc_881CF71C;
	// subf r30,r27,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r27.u64;
loc_881CF6B8:
	// clrlwi r6,r31,25
	ctx.r6.u64 = ctx.r31.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// srawi r9,r31,7
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 7;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// ble cr6,0x881cf710
	if (!ctx.cr6.gt) goto loc_881CF710;
	// add r9,r5,r24
	ctx.r9.u64 = ctx.r5.u64 + ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_881CF6E4:
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881CF6E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r19,1(r9)
	ctx.current_instruction = 0x881CF6EC;
	ea = 1 + ctx.r9.u32;
	ctx.r19.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r19,r6
	ctx.r7.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r10)
	ctx.current_instruction = 0x881CF704;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cf6e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF6E4;
loc_881CF710:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// bne 0x881cf6b8
	if (!ctx.cr0.eq) goto loc_881CF6B8;
loc_881CF71C:
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881cf764
	if (!ctx.cr6.lt) goto loc_881CF764;
	// subf r8,r20,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r20.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_881CF72C:
	// srawi r10,r31,7
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881cf758
	if (!ctx.cr6.gt) goto loc_881CF758;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_881CF748:
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x881CF748;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x881CF750;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881cf748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF748;
loc_881CF758:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// bne 0x881cf72c
	if (!ctx.cr0.eq) goto loc_881CF72C;
loc_881CF764:
	// lwz r9,32(r3)
	ctx.current_instruction = 0x881CF764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r6,r28,r22
	ctx.r6.u64 = ctx.r28.u64 + ctx.r22.u64;
	// lwz r5,36(r3)
	ctx.current_instruction = 0x881CF76C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mullw r11,r9,r25
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// lwz r7,64(r3)
	ctx.current_instruction = 0x881CF774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,56(r3)
	ctx.current_instruction = 0x881CF778;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,40(r3)
	ctx.current_instruction = 0x881CF77C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r6,r24
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// mullw r6,r9,r5
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881cf7c0
	if (ctx.cr6.eq) goto loc_881CF7C0;
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x881cf7c4
	goto loc_881CF7C4;
loc_881CF7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881CF7C4:
	// add. r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881cf82c
	if (!ctx.cr0.lt) goto loc_881CF82C;
	// subf r9,r3,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r3.u64;
	// twllei r21,0
	if (ctx.r21.s32 == 0 || ctx.r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r21
	ctx.r9.u64 = uint32_t((ctx.r21.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r9.s32 / ctx.r21.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r27,r28,r9
	ctx.r27.u64 = ctx.r28.u64 + ctx.r9.u64;
	// andc r7,r21,r8
	ctx.r7.u64 = ctx.r21.u64 & ~ctx.r8.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x881cf824
	if (!ctx.cr6.lt) goto loc_881CF824;
	// subf r8,r28,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r28.u64;
loc_881CF7F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881cf81c
	if (!ctx.cr6.gt) goto loc_881CF81C;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_881CF808:
	// lbzx r7,r11,r30
	ctx.current_instruction = 0x881CF808;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	ctx.current_instruction = 0x881CF810;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cf808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF808;
loc_881CF81C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x881cf7f8
	if (!ctx.cr0.eq) goto loc_881CF7F8;
loc_881CF824:
	// mullw r11,r9,r21
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881CF82C:
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x881cf89c
	if (!ctx.cr6.lt) goto loc_881CF89C;
	// subf r31,r27,r20
	ctx.r31.u64 = ctx.r20.u64 - ctx.r27.u64;
loc_881CF838:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// srawi r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// ble cr6,0x881cf890
	if (!ctx.cr6.gt) goto loc_881CF890;
	// add r9,r5,r24
	ctx.r9.u64 = ctx.r5.u64 + ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_881CF864:
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881CF864;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r29,1(r9)
	ctx.current_instruction = 0x881CF86C;
	ea = 1 + ctx.r9.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r29,r6
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r10)
	ctx.current_instruction = 0x881CF884;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cf864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF864;
loc_881CF890:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// bne 0x881cf838
	if (!ctx.cr0.eq) goto loc_881CF838;
loc_881CF89C:
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881cf8e4
	if (!ctx.cr6.lt) goto loc_881CF8E4;
	// subf r8,r20,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r20.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_881CF8AC:
	// srawi r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881cf8d8
	if (!ctx.cr6.gt) goto loc_881CF8D8;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_881CF8C8:
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x881CF8C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x881CF8D0;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881cf8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF8C8;
loc_881CF8D8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// bne 0x881cf8ac
	if (!ctx.cr0.eq) goto loc_881CF8AC;
loc_881CF8E4:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0378) {
			switch (rex_dispatch_address) {
				case 0x881E0380:
				case 0x881E03D0:
				case 0x881E0400:
				case 0x881E0430:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0378;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E0380: goto loc_881E0380;
		case 0x881E03D0: goto loc_881E03D0;
		case 0x881E0400: goto loc_881E0400;
		case 0x881E0430: goto loc_881E0430;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881E0380;
	__savegprlr_18(ctx, base);
loc_881E0380:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881E0380;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,308(r1)
	ctx.current_instruction = 0x881E0384;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r31,332(r1)
	ctx.current_instruction = 0x881E038C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// srawi r25,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r18.s32 >> 1;
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// srawi. r23,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble 0x881e03e0
	if (!ctx.cr0.gt) goto loc_881E03E0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_881E03C0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x881E03D0;
	sub_881ECE80(ctx, base);
loc_881E03D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x881e03c0
	if (!ctx.cr0.eq) goto loc_881E03C0;
loc_881E03E0:
	// lwz r30,340(r1)
	ctx.current_instruction = 0x881E03E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881e0410
	if (!ctx.cr6.gt) goto loc_881E0410;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_881E03F0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ece80
	ctx.lr = 0x881E0400;
	sub_881ECE80(ctx, base);
loc_881E0400:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bne 0x881e03f0
	if (!ctx.cr0.eq) goto loc_881E03F0;
loc_881E0410:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881e0440
	if (!ctx.cr6.gt) goto loc_881E0440;
loc_881E0420:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x881E0430;
	sub_881ECE80(ctx, base);
loc_881E0430:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// bne 0x881e0420
	if (!ctx.cr0.eq) goto loc_881E0420;
loc_881E0440:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E10D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E10D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E10D8) {
			switch (rex_dispatch_address) {
				case 0x881E10E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E10D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E10E0: goto loc_881E10E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E10E0;
	__savegprlr_14(ctx, base);
loc_881E10E0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E10E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E10EC;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,68(r1)
	ctx.current_instruction = 0x881E10F4;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r6,44(r1)
	ctx.current_instruction = 0x881E10FC;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r4,28(r1)
	ctx.current_instruction = 0x881E1104;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subf r9,r3,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E110C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r4,r3,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r3.u64;
	// divw r28,r9,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// rotlwi r7,r4,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// srawi r3,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 4;
	// stw r28,-172(r1)
	ctx.current_instruction = 0x881E1128;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r28.u32);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
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
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// subf r24,r8,r7
	ctx.r24.u64 = ctx.r7.u64 - ctx.r8.u64;
	// divw r19,r4,r30
	ctx.r19.u64 = uint32_t((ctx.r30.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r4.s32 / ctx.r30.s32 : 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r24,-168(r1)
	ctx.current_instruction = 0x881E1168;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r24.u32);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881e12dc
	if (!ctx.cr6.eq) goto loc_881E12DC;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881e144c
	if (!ctx.cr6.gt) goto loc_881E144C;
	// lwz r18,108(r1)
	ctx.current_instruction = 0x881E118C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r19,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r18,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r31.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E11A0:
	// addi r9,r17,16
	ctx.r9.s64 = ctx.r17.s64 + 16;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x881e11b4
	if (!ctx.cr6.gt) goto loc_881E11B4;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
loc_881E11B4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e12c4
	if (!ctx.cr6.gt) goto loc_881E12C4;
	// subf r15,r17,r16
	ctx.r15.u64 = ctx.r16.u64 - ctx.r17.u64;
	// mullw r10,r15,r18
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// subfic r7,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E11D0:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// add r20,r8,r28
	ctx.r20.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r3,r26
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// srawi r3,r20,16
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r20.s32 >> 16;
	// add r30,r8,r27
	ctx.r30.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mullw r8,r3,r26
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// add r29,r8,r27
	ctx.r29.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmpw cr6,r17,r16
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x881e12ac
	if (!ctx.cr6.lt) goto loc_881E12AC;
	// lwz r3,76(r1)
	ctx.current_instruction = 0x881E11FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r31,r15,-1
	ctx.r31.s64 = ctx.r15.s64 + -1;
	// lwz r28,44(r1)
	ctx.current_instruction = 0x881E1204;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r23,r18,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r25,r7,r3
	ctx.r25.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r24,r25,r28
	ctx.r24.u64 = ctx.r25.u64 + ctx.r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r22,r19,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r18,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E1228:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r31,r8,r19
	ctx.r31.u64 = ctx.r8.u64 + ctx.r19.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 + ctx.r8.u64;
	// add r26,r25,r3
	ctx.r26.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lbzx r28,r7,r29
	ctx.current_instruction = 0x881E123C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// lbzx r27,r7,r30
	ctx.current_instruction = 0x881E1240;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// srawi r7,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r24,r3
	ctx.current_instruction = 0x881E1248;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r3.u32);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// lbzx r31,r26,r5
	ctx.current_instruction = 0x881E1250;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// rotlwi r3,r3,24
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 24);
	// lbzx r26,r7,r29
	ctx.current_instruction = 0x881E1258;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r31,r31,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 8);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stw r26,-164(r1)
	ctx.current_instruction = 0x881E1268;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r26.u32);
	// lbzx r26,r7,r30
	ctx.current_instruction = 0x881E126C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lwz r7,-164(r1)
	ctx.current_instruction = 0x881E1270;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r26,r31
	ctx.r3.u64 = ctx.r26.u64 + ctx.r31.u64;
	// or r31,r28,r27
	ctx.r31.u64 = ctx.r28.u64 | ctx.r27.u64;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r31,0(r11)
	ctx.current_instruction = 0x881E1288;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stwx r7,r11,r23
	ctx.current_instruction = 0x881E128C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r7.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bdnz 0x881e1228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1228;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E1298;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,68(r1)
	ctx.current_instruction = 0x881E129C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r27,28(r1)
	ctx.current_instruction = 0x881E12A0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r28,-172(r1)
	ctx.current_instruction = 0x881E12A4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r24,-168(r1)
	ctx.current_instruction = 0x881E12A8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
loc_881E12AC:
	// add r8,r20,r28
	ctx.r8.u64 = ctx.r20.u64 + ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x881e11d0
	if (ctx.cr6.lt) goto loc_881E11D0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
loc_881E12C4:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r14,r14,r6
	ctx.r14.u64 = ctx.r14.u64 + ctx.r6.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e11a0
	if (ctx.cr6.lt) goto loc_881E11A0;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E12DC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881e144c
	if (!ctx.cr6.gt) goto loc_881E144C;
	// lwz r17,108(r1)
	ctx.current_instruction = 0x881E12EC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r4,r19,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r17,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r31.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-164(r1)
	ctx.current_instruction = 0x881E1300;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r6.u32);
loc_881E1304:
	// addi r6,r16,16
	ctx.r6.s64 = ctx.r16.s64 + 16;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r25
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x881e1318
	if (!ctx.cr6.gt) goto loc_881E1318;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_881E1318:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e1434
	if (!ctx.cr6.gt) goto loc_881E1434;
	// subf r15,r16,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r16.u64;
	// mullw r9,r15,r17
	ctx.r9.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r17.s32);
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r9.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1334:
	// srawi r3,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 17;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r18,r8,r28
	ctx.r18.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r7,r26
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// srawi r7,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 16;
	// add r30,r8,r27
	ctx.r30.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mullw r8,r7,r26
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// add r29,r8,r27
	ctx.r29.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r16,r14
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x881e141c
	if (!ctx.cr6.lt) goto loc_881E141C;
	// addi r8,r15,-1
	ctx.r8.s64 = ctx.r15.s64 + -1;
	// lwz r31,76(r1)
	ctx.current_instruction = 0x881E1364;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// lwz r28,44(r1)
	ctx.current_instruction = 0x881E1368;
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
loc_881E1390:
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
	// lbzx r26,r8,r30
	ctx.current_instruction = 0x881E13A4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r27,r8,r29
	ctx.current_instruction = 0x881E13A8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r23,r3
	ctx.current_instruction = 0x881E13B0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// lbzx r31,r28,r5
	ctx.current_instruction = 0x881E13B4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// lbzx r28,r8,r30
	ctx.current_instruction = 0x881E13B8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r8,r8,r29
	ctx.current_instruction = 0x881E13BC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stb r31,-176(r1)
	ctx.current_instruction = 0x881E13C0;
	REX_STORE_U8(ctx.r1.u32 + -176, ctx.r31.u8);
	// rotlwi r31,r3,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r3,-176(r1)
	ctx.current_instruction = 0x881E13C8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -176);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r28,r27,16
	ctx.r28.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r3,0(r11)
	ctx.current_instruction = 0x881E13EC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r28,2(r11)
	ctx.current_instruction = 0x881E13F4;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// sthx r31,r11,r24
	ctx.current_instruction = 0x881E13F8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r31.u16);
	// sthx r8,r22,r11
	ctx.current_instruction = 0x881E13FC;
	REX_STORE_U16(ctx.r22.u32 + ctx.r11.u32, ctx.r8.u16);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bdnz 0x881e1390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1390;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E1408;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,68(r1)
	ctx.current_instruction = 0x881E140C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r27,28(r1)
	ctx.current_instruction = 0x881E1410;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r28,-172(r1)
	ctx.current_instruction = 0x881E1414;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r24,-168(r1)
	ctx.current_instruction = 0x881E1418;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
loc_881E141C:
	// add r8,r18,r28
	ctx.r8.u64 = ctx.r18.u64 + ctx.r28.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x881e1334
	if (ctx.cr6.lt) goto loc_881E1334;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
loc_881E1434:
	// lwz r9,-164(r1)
	ctx.current_instruction = 0x881E1434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r6,r25
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e1304
	if (ctx.cr6.lt) goto loc_881E1304;
loc_881E144C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EB08C) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EB08C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EB08C;
	ctx.current_instruction = 0x881EB08C;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EB0A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EB0A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EB0A0) {
			switch (rex_dispatch_address) {
				case 0x881EB0A8:
				case 0x881EB0E4:
				case 0x881EB108:
				case 0x881EB148:
				case 0x881EB3F0:
				case 0x881EB798:
				case 0x881EB7EC:
				case 0x881EB80C:
				case 0x881EB84C:
				case 0x881EB864:
				case 0x881EB904:
				case 0x881EB914:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EB0A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EB0A8: goto loc_881EB0A8;
		case 0x881EB0E4: goto loc_881EB0E4;
		case 0x881EB108: goto loc_881EB108;
		case 0x881EB148: goto loc_881EB148;
		case 0x881EB3F0: goto loc_881EB3F0;
		case 0x881EB798: goto loc_881EB798;
		case 0x881EB7EC: goto loc_881EB7EC;
		case 0x881EB80C: goto loc_881EB80C;
		case 0x881EB84C: goto loc_881EB84C;
		case 0x881EB864: goto loc_881EB864;
		case 0x881EB904: goto loc_881EB904;
		case 0x881EB914: goto loc_881EB914;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881EB0A8;
	__savegprlr_22(ctx, base);
loc_881EB0A8:
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x881EB0AC;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x881EB0BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,100(r31)
	ctx.current_instruction = 0x881EB0CC;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,124(r31)
	ctx.current_instruction = 0x881EB0D4;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stw r24,104(r31)
	ctx.current_instruction = 0x881EB0D8;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// beq 0x881eb108
	if (ctx.cr0.eq) goto loc_881EB108;
	// bl 0x88243740
	ctx.lr = 0x881EB0E4;
	__imp__KeGetCurrentProcessType(ctx, base);
loc_881EB0E4:
	// lbz r11,379(r28)
	ctx.current_instruction = 0x881EB0E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881eb108
	if (ctx.cr6.eq) goto loc_881EB108;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1514
	ctx.r6.s64 = 1514;
	// lwz r5,312(r31)
	ctx.current_instruction = 0x881EB0F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x88243730
	ctx.lr = 0x881EB108;
	__imp__KeBugCheckEx(ctx, base);
loc_881EB108:
	// lwz r11,24(r30)
	ctx.current_instruction = 0x881EB108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x881eb124
	if (!ctx.cr6.eq) goto loc_881EB124;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_881EB124:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	ctx.current_instruction = 0x881EB12C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881eb154
	if (!ctx.cr0.eq) goto loc_881EB154;
	// lwz r3,1408(r30)
	ctx.current_instruction = 0x881EB140;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x88243680
	ctx.lr = 0x881EB148;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881EB148:
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r27,104(r31)
	ctx.current_instruction = 0x881EB14C;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x881EB150;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_881EB154:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// bge cr6,0x881eb34c
	if (!ctx.cr6.lt) goto loc_881EB34C;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EB168;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881eb210
	if (ctx.cr6.eq) goto loc_881EB210;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881EB174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	ctx.current_instruction = 0x881EB17C;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lbz r6,5(r11)
	ctx.current_instruction = 0x881EB184;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,80(r31)
	ctx.current_instruction = 0x881EB188;
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x881EB18C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x881EB190;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.current_instruction = 0x881EB194;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.current_instruction = 0x881EB198;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881eb1e0
	if (!ctx.cr6.eq) goto loc_881EB1E0;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881eb1e0
	if (!ctx.cr6.eq) goto loc_881EB1E0;
	// stw r9,0(r10)
	ctx.current_instruction = 0x881EB1AC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	ctx.current_instruction = 0x881EB1B4;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x881eb1e0
	if (!ctx.cr6.eq) goto loc_881EB1E0;
	// lhz r9,0(r11)
	ctx.current_instruction = 0x881EB1BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.current_instruction = 0x881EB1D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	ctx.current_instruction = 0x881EB1DC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_881EB1E0:
	// lwz r10,48(r30)
	ctx.current_instruction = 0x881EB1E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r29.u64;
	// rlwimi r6,r27,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stw r10,48(r30)
	ctx.current_instruction = 0x881EB1F0;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r11,128(r31)
	ctx.current_instruction = 0x881EB1F4;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r6,5(r11)
	ctx.current_instruction = 0x881EB1F8;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.current_instruction = 0x881EB1FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// stb r10,6(r11)
	ctx.current_instruction = 0x881EB204;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	ctx.current_instruction = 0x881EB208;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r24.u8);
	// b 0x881eb7d4
	goto loc_881EB7D4;
loc_881EB210:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,96(r31)
	ctx.current_instruction = 0x881EB230;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881EB234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r10,108(r31)
	ctx.current_instruction = 0x881EB240;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	ctx.current_instruction = 0x881EB244;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x881eb260
	if (ctx.cr6.lt) goto loc_881EB260;
	// beq cr6,0x881eb280
	if (ctx.cr6.eq) goto loc_881EB280;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x881eb2a0
	if (ctx.cr6.lt) goto loc_881EB2A0;
	// beq cr6,0x881eb2c0
	if (ctx.cr6.eq) goto loc_881EB2C0;
	// b 0x881eb358
	goto loc_881EB358;
loc_881EB260:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881eb270
	if (ctx.cr6.eq) goto loc_881EB270;
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x881eb2cc
	goto loc_881EB2CC;
loc_881EB270:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881EB270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	ctx.current_instruction = 0x881EB278;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	ctx.current_instruction = 0x881EB27C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_881EB280:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881eb290
	if (ctx.cr6.eq) goto loc_881EB290;
	// addi r9,r30,640
	ctx.r9.s64 = ctx.r30.s64 + 640;
	// b 0x881eb2cc
	goto loc_881EB2CC;
loc_881EB290:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881EB290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	ctx.current_instruction = 0x881EB298;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	ctx.current_instruction = 0x881EB29C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_881EB2A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881eb2b0
	if (ctx.cr6.eq) goto loc_881EB2B0;
	// addi r9,r30,896
	ctx.r9.s64 = ctx.r30.s64 + 896;
	// b 0x881eb2cc
	goto loc_881EB2CC;
loc_881EB2B0:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881EB2B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	ctx.current_instruction = 0x881EB2B8;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,96(r31)
	ctx.current_instruction = 0x881EB2BC;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_881EB2C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881eb358
	if (ctx.cr6.eq) goto loc_881EB358;
	// addi r9,r30,1152
	ctx.r9.s64 = ctx.r30.s64 + 1152;
loc_881EB2CC:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881EB2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	ctx.current_instruction = 0x881EB2EC;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881EB2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.current_instruction = 0x881EB2F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881EB2FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881EB300;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881eb42c
	if (!ctx.cr6.eq) goto loc_881EB42C;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881eb42c
	if (!ctx.cr6.eq) goto loc_881EB42C;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881EB314;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881EB31C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881eb42c
	if (!ctx.cr6.eq) goto loc_881EB42C;
	// lhz r10,0(r3)
	ctx.current_instruction = 0x881EB324;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.current_instruction = 0x881EB33C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	ctx.current_instruction = 0x881EB344;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x881eb42c
	goto loc_881EB42C;
loc_881EB34C:
	// lwz r11,28(r30)
	ctx.current_instruction = 0x881EB34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881eb810
	if (ctx.cr6.gt) goto loc_881EB810;
loc_881EB358:
	// lwz r11,388(r30)
	ctx.current_instruction = 0x881EB358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	ctx.current_instruction = 0x881EB364;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x881eb3e8
	if (ctx.cr6.eq) goto loc_881EB3E8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	ctx.current_instruction = 0x881EB370;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x881EB374;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881eb3e8
	if (ctx.cr6.lt) goto loc_881EB3E8;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881EB380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	ctx.current_instruction = 0x881EB384;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_881EB388:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881eb3e8
	if (ctx.cr6.eq) goto loc_881EB3E8;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	ctx.current_instruction = 0x881EB394;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.current_instruction = 0x881EB398;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x881eb3b4
	if (!ctx.cr6.lt) goto loc_881EB3B4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EB3A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	ctx.current_instruction = 0x881EB3A8;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881eb388
	goto loc_881EB388;
loc_881EB3B4:
	// lwz r10,12(r3)
	ctx.current_instruction = 0x881EB3B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881EB3BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x881EB3C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.current_instruction = 0x881EB3C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881eb3e0
	if (!ctx.cr6.eq) goto loc_881EB3E0;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eb3e0
	if (!ctx.cr6.eq) goto loc_881EB3E0;
	// stw r9,0(r10)
	ctx.current_instruction = 0x881EB3D8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	ctx.current_instruction = 0x881EB3DC;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_881EB3E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881eb42c
	goto loc_881EB42C;
loc_881EB3E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881ea528
	ctx.lr = 0x881EB3F0;
	sub_881EA528(ctx, base);
loc_881EB3F0:
	// stw r3,92(r31)
	ctx.current_instruction = 0x881EB3F0;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881eb8d4
	if (ctx.cr0.eq) goto loc_881EB8D4;
	// lwz r10,12(r3)
	ctx.current_instruction = 0x881EB3FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881EB404;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x881EB408;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.current_instruction = 0x881EB40C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881eb428
	if (!ctx.cr6.eq) goto loc_881EB428;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eb428
	if (!ctx.cr6.eq) goto loc_881EB428;
	// stw r9,0(r10)
	ctx.current_instruction = 0x881EB420;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	ctx.current_instruction = 0x881EB424;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_881EB428:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_881EB42C:
	// lbz r10,5(r3)
	ctx.current_instruction = 0x881EB42C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	ctx.current_instruction = 0x881EB438;
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.current_instruction = 0x881EB43C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.current_instruction = 0x881EB440;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,48(r28)
	ctx.current_instruction = 0x881EB448;
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
	// stw r3,128(r31)
	ctx.current_instruction = 0x881EB44C;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stb r27,5(r3)
	ctx.current_instruction = 0x881EB450;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r9,0(r3)
	ctx.current_instruction = 0x881EB454;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r6,r29,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// sth r11,0(r3)
	ctx.current_instruction = 0x881EB45C;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.current_instruction = 0x881EB460;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r25.u64;
	// stb r9,6(r3)
	ctx.current_instruction = 0x881EB468;
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	ctx.current_instruction = 0x881EB46C;
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r24.u8);
	// beq 0x881eb7c0
	if (ctx.cr0.eq) goto loc_881EB7C0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x881eb498
	if (!ctx.cr6.eq) goto loc_881EB498;
	// lhz r11,0(r3)
	ctx.current_instruction = 0x881EB47C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	ctx.current_instruction = 0x881EB484;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.current_instruction = 0x881EB488;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	ctx.current_instruction = 0x881EB490;
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x881eb7c0
	goto loc_881EB7C0;
loc_881EB498:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r10,5(r30)
	ctx.current_instruction = 0x881EB4A8;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	ctx.current_instruction = 0x881EB4AC;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.current_instruction = 0x881EB4B0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	ctx.current_instruction = 0x881EB4B4;
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	ctx.current_instruction = 0x881EB4B8;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// beq 0x881eb558
	if (ctx.cr0.eq) goto loc_881EB558;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x881eb514
	if (!ctx.cr6.lt) goto loc_881EB514;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.current_instruction = 0x881EB4D0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,5(r30)
	ctx.current_instruction = 0x881EB4E0;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EB4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eb5c4
	if (!ctx.cr6.eq) goto loc_881EB5C4;
	// lhz r9,0(r30)
	ctx.current_instruction = 0x881EB4F0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x881EB508;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x881eb5c0
	goto loc_881EB5C0;
loc_881EB514:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EB514;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	ctx.current_instruction = 0x881EB520;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.current_instruction = 0x881EB524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,132(r31)
	ctx.current_instruction = 0x881EB528;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_881EB52C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881eb5c4
	if (ctx.cr6.eq) goto loc_881EB5C4;
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EB534;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	ctx.current_instruction = 0x881EB53C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881eb5c4
	if (!ctx.cr6.gt) goto loc_881EB5C4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EB548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	ctx.current_instruction = 0x881EB54C;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881eb52c
	goto loc_881EB52C;
loc_881EB558:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,5(r11)
	ctx.current_instruction = 0x881EB560;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x881eb628
	if (ctx.cr0.eq) goto loc_881EB628;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	ctx.current_instruction = 0x881EB570;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EB578;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x881eb5e8
	if (!ctx.cr6.lt) goto loc_881EB5E8;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	ctx.current_instruction = 0x881EB58C;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EB594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eb5c4
	if (!ctx.cr6.eq) goto loc_881EB5C4;
	// lhz r9,0(r30)
	ctx.current_instruction = 0x881EB5A0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x881EB5B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_881EB5C0:
	// stwx r9,r10,r28
	ctx.current_instruction = 0x881EB5C0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_881EB5C4:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881EB5C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	ctx.current_instruction = 0x881EB5C8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	ctx.current_instruction = 0x881EB5CC;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	ctx.current_instruction = 0x881EB5D4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881EB5D8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.current_instruction = 0x881EB5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// b 0x881eb784
	goto loc_881EB784;
loc_881EB5E8:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	ctx.current_instruction = 0x881EB5F0;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.current_instruction = 0x881EB5F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881EB5F8;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_881EB5FC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881eb5c4
	if (ctx.cr6.eq) goto loc_881EB5C4;
	// lhz r9,-8(r11)
	ctx.current_instruction = 0x881EB604;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	ctx.current_instruction = 0x881EB60C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x881eb5c4
	if (!ctx.cr6.gt) goto loc_881EB5C4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EB618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881EB61C;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881eb5fc
	goto loc_881EB5FC;
loc_881EB628:
	// stb r10,5(r30)
	ctx.current_instruction = 0x881EB628;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x881EB630;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x881EB634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,4(r9)
	ctx.current_instruction = 0x881EB638;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r10)
	ctx.current_instruction = 0x881EB63C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881eb68c
	if (!ctx.cr6.eq) goto loc_881EB68C;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881eb68c
	if (!ctx.cr6.eq) goto loc_881EB68C;
	// stw r9,0(r10)
	ctx.current_instruction = 0x881EB650;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	ctx.current_instruction = 0x881EB658;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x881eb68c
	if (!ctx.cr6.eq) goto loc_881EB68C;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881EB660;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x881eb68c
	if (!ctx.cr6.lt) goto loc_881EB68C;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.current_instruction = 0x881EB680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	ctx.current_instruction = 0x881EB688;
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_881EB68C:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881EB68C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.current_instruction = 0x881EB690;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,48(r28)
	ctx.current_instruction = 0x881EB698;
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x881EB69C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x881eb78c
	if (ctx.cr6.gt) goto loc_881EB78C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	ctx.current_instruction = 0x881EB6B0;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.current_instruction = 0x881EB6B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881eb6cc
	if (!ctx.cr0.eq) goto loc_881EB6CC;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r11,2(r10)
	ctx.current_instruction = 0x881EB6C8;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_881EB6CC:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EB6D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x881eb724
	if (!ctx.cr6.lt) goto loc_881EB724;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	ctx.current_instruction = 0x881EB6E8;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EB6F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eb764
	if (!ctx.cr6.eq) goto loc_881EB764;
	// lhz r9,0(r30)
	ctx.current_instruction = 0x881EB6FC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x881EB714;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	ctx.current_instruction = 0x881EB71C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x881eb764
	goto loc_881EB764;
loc_881EB724:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	ctx.current_instruction = 0x881EB72C;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.current_instruction = 0x881EB730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,136(r31)
	ctx.current_instruction = 0x881EB734;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_881EB738:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881eb764
	if (ctx.cr6.eq) goto loc_881EB764;
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EB740;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	ctx.current_instruction = 0x881EB748;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881eb764
	if (!ctx.cr6.gt) goto loc_881EB764;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EB754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	ctx.current_instruction = 0x881EB758;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881eb738
	goto loc_881EB738;
loc_881EB764:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881EB764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	ctx.current_instruction = 0x881EB768;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	ctx.current_instruction = 0x881EB76C;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	ctx.current_instruction = 0x881EB774;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881EB778;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.current_instruction = 0x881EB77C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_881EB784:
	// stw r11,48(r28)
	ctx.current_instruction = 0x881EB784;
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x881eb798
	goto loc_881EB798;
loc_881EB78C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EB798;
	sub_881E9B48(ctx, base);
loc_881EB798:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r24,80(r31)
	ctx.current_instruction = 0x881EB79C;
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r24.u8);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EB7A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eb7c0
	if (ctx.cr0.eq) goto loc_881EB7C0;
	// lbz r11,4(r30)
	ctx.current_instruction = 0x881EB7AC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.current_instruction = 0x881EB7B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r30,64(r11)
	ctx.current_instruction = 0x881EB7BC;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_881EB7C0:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eb7d4
	if (ctx.cr0.eq) goto loc_881EB7D4;
	// lbz r11,5(r26)
	ctx.current_instruction = 0x881EB7C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	ctx.current_instruction = 0x881EB7D0;
	REX_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
loc_881EB7D4:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	ctx.current_instruction = 0x881EB7DC;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x881eb7f4
	if (ctx.cr6.eq) goto loc_881EB7F4;
	// lwz r3,1408(r28)
	ctx.current_instruction = 0x881EB7E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EB7EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EB7EC:
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,104(r31)
	ctx.current_instruction = 0x881EB7F0;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
loc_881EB7F4:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eb908
	if (ctx.cr0.eq) goto loc_881EB908;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x881EB80C;
	sub_88052D90(ctx, base);
loc_881EB80C:
	// b 0x881eb908
	goto loc_881EB908;
loc_881EB810:
	// lwz r11,20(r30)
	ctx.current_instruction = 0x881EB810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eb8d8
	if (ctx.cr0.eq) goto loc_881EB8D8;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stw r24,84(r31)
	ctx.current_instruction = 0x881EB820;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// not r10,r23
	ctx.r10.u64 = ~ctx.r23.u64;
	// stw r11,88(r31)
	ctx.current_instruction = 0x881EB828;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r11,r10,20,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x800000;
	// lwz r7,1424(r30)
	ctx.current_instruction = 0x881EB834;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x88243720
	ctx.lr = 0x881EB84C;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881EB84C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881eb8d4
	if (ctx.cr0.lt) goto loc_881EB8D4;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881EB858;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881EB864;
	sub_88052D90(ctx, base);
loc_881EB864:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.current_instruction = 0x881EB86C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.current_instruction = 0x881EB870;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r25.u64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	ctx.current_instruction = 0x881EB880;
	REX_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.current_instruction = 0x881EB884;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stb r10,37(r9)
	ctx.current_instruction = 0x881EB888;
	REX_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.current_instruction = 0x881EB88C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.current_instruction = 0x881EB890;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,24(r10)
	ctx.current_instruction = 0x881EB894;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.current_instruction = 0x881EB898;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.current_instruction = 0x881EB89C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	ctx.current_instruction = 0x881EB8A0;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.current_instruction = 0x881EB8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.current_instruction = 0x881EB8A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881EB8AC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881EB8B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,4(r11)
	ctx.current_instruction = 0x881EB8B4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881EB8B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r9)
	ctx.current_instruction = 0x881EB8BC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881EB8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	ctx.current_instruction = 0x881EB8C8;
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	ctx.current_instruction = 0x881EB8CC;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x881eb908
	goto loc_881EB908;
loc_881EB8D4:
	// lwz r4,88(r31)
	ctx.current_instruction = 0x881EB8D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_881EB8D8:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eb904
	if (ctx.cr0.eq) goto loc_881EB904;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	ctx.current_instruction = 0x881EB8EC;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	ctx.current_instruction = 0x881EB8F0;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r27,160(r31)
	ctx.current_instruction = 0x881EB8F4;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r24,148(r31)
	ctx.current_instruction = 0x881EB8F8;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r4,164(r31)
	ctx.current_instruction = 0x881EB8FC;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// bl 0x88243780
	ctx.lr = 0x881EB904;
	__imp__RtlRaiseException(ctx, base);
loc_881EB904:
	// stw r24,100(r31)
	ctx.current_instruction = 0x881EB904;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
loc_881EB908:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x881eb948
	ctx.lr = 0x881EB914;
	sub_881EB948(ctx, base);
loc_881EB914:
	// lwz r3,100(r31)
	ctx.current_instruction = 0x881EB914;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_125) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF5C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF5C;
	ctx.current_instruction = 0x881EEF5C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_24) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFC8;
	ctx.current_instruction = 0x881EEFC8;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_85) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0B4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0B4;
	ctx.current_instruction = 0x881EF0B4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_108) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF16C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF16C;
	ctx.current_instruction = 0x881EF16C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881EF6E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF6E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF6E0;
	ctx.current_instruction = 0x881EF6E0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881ef718
	if (ctx.cr6.lt) goto loc_881EF718;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881ef718
	if (ctx.cr6.gt) goto loc_881EF718;
	// lwz r10,12(r3)
	ctx.current_instruction = 0x881EF6FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	ctx.current_instruction = 0x881EF70C;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x88051f98
	sub_88051F98(ctx, base);
	return;
loc_881EF718:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x88243660
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F0AA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0AA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0AA0) {
			switch (rex_dispatch_address) {
				case 0x881F0AA8:
				case 0x881F0AC4:
				case 0x881F0AD0:
				case 0x881F0B00:
				case 0x881F0B0C:
				case 0x881F0B18:
				case 0x881F0B54:
				case 0x881F0B74:
				case 0x881F0B80:
				case 0x881F0B9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0AA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0AA8: goto loc_881F0AA8;
		case 0x881F0AC4: goto loc_881F0AC4;
		case 0x881F0AD0: goto loc_881F0AD0;
		case 0x881F0B00: goto loc_881F0B00;
		case 0x881F0B0C: goto loc_881F0B0C;
		case 0x881F0B18: goto loc_881F0B18;
		case 0x881F0B54: goto loc_881F0B54;
		case 0x881F0B74: goto loc_881F0B74;
		case 0x881F0B80: goto loc_881F0B80;
		case 0x881F0B9C: goto loc_881F0B9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881F0AA8;
	__savegprlr_27(ctx, base);
loc_881F0AA8:
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881F0AAC;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	ctx.current_instruction = 0x881F0AB4;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f0ae4
	if (!ctx.cr6.eq) goto loc_881F0AE4;
	// bl 0x88052a00
	ctx.lr = 0x881F0AC4;
	sub_88052A00(ctx, base);
loc_881F0AC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F0AC8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F0AD0;
	sub_880529C8(ctx, base);
loc_881F0AD0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881F0ADC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f0ba0
	goto loc_881F0BA0;
loc_881F0AE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f0afc
	if (ctx.cr6.lt) goto loc_881F0AFC;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.current_instruction = 0x881F0AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f0b20
	if (ctx.cr6.lt) goto loc_881F0B20;
loc_881F0AFC:
	// bl 0x88052a00
	ctx.lr = 0x881F0B00;
	sub_88052A00(ctx, base);
loc_881F0B00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F0B04;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F0B0C;
	sub_880529C8(ctx, base);
loc_881F0B0C:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F0B10;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F0B18;
	sub_880523E8(ctx, base);
loc_881F0B18:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f0ba0
	goto loc_881F0BA0;
loc_881F0B20:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,24064
	ctx.r28.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x881F0B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F0B40;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0afc
	if (ctx.cr0.eq) goto loc_881F0AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F0B54;
	sub_881F1B20(ctx, base);
loc_881F0B54:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x881F0B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F0B60;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0b7c
	if (ctx.cr0.eq) goto loc_881F0B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f09b8
	ctx.lr = 0x881F0B74;
	sub_881F09B8(ctx, base);
loc_881F0B74:
	// stw r3,80(r31)
	ctx.current_instruction = 0x881F0B74;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x881f0b90
	goto loc_881F0B90;
loc_881F0B7C:
	// bl 0x880529c8
	ctx.lr = 0x881F0B80;
	sub_880529C8(ctx, base);
loc_881F0B80:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F0B88;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	ctx.current_instruction = 0x881F0B8C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F0B90:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x881f0bc8
	ctx.lr = 0x881F0B9C;
	sub_881F0BC8(ctx, base);
loc_881F0B9C:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881F0B9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F0BA0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881FBA70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FBA70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FBA70) {
			switch (rex_dispatch_address) {
				case 0x881FBA78:
				case 0x881FBC00:
				case 0x881FBCF0:
				case 0x881FBD04:
				case 0x881FBD44:
				case 0x881FBD4C:
				case 0x881FBDA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FBA70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FBA78: goto loc_881FBA78;
		case 0x881FBC00: goto loc_881FBC00;
		case 0x881FBCF0: goto loc_881FBCF0;
		case 0x881FBD04: goto loc_881FBD04;
		case 0x881FBD44: goto loc_881FBD44;
		case 0x881FBD4C: goto loc_881FBD4C;
		case 0x881FBDA8: goto loc_881FBDA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881FBA78;
	__savegprlr_14(ctx, base);
loc_881FBA78:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x881FBA78;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,136(r3)
	ctx.current_instruction = 0x881FBA80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r10,220(r3)
	ctx.current_instruction = 0x881FBA88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,3776(r3)
	ctx.current_instruction = 0x881FBA90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r26,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 1;
	// stw r4,96(r1)
	ctx.current_instruction = 0x881FBA9C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lhz r3,50(r31)
	ctx.current_instruction = 0x881FBAA0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r23)
	ctx.current_instruction = 0x881FBAA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 224);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,3780(r23)
	ctx.current_instruction = 0x881FBAB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 3780);
	// rlwinm r28,r3,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,3784(r23)
	ctx.current_instruction = 0x881FBAB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 3784);
	// lwz r3,272(r23)
	ctx.current_instruction = 0x881FBABC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 272);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r29,33(r31)
	ctx.current_instruction = 0x881FBAC4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 33);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	ctx.current_instruction = 0x881FBACC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r28,104(r1)
	ctx.current_instruction = 0x881FBAD0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bne cr6,0x881fbae4
	if (!ctx.cr6.eq) goto loc_881FBAE4;
	// lwz r11,22268(r23)
	ctx.current_instruction = 0x881FBAD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 22268);
	// stw r11,28(r27)
	ctx.current_instruction = 0x881FBADC;
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// b 0x881fbaf4
	goto loc_881FBAF4;
loc_881FBAE4:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1480(r11)
	ctx.current_instruction = 0x881FBAEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r27)
	ctx.current_instruction = 0x881FBAF0;
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r10.u32);
loc_881FBAF4:
	// mullw r11,r28,r7
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// lhz r9,74(r31)
	ctx.current_instruction = 0x881FBAF8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r6,76(r31)
	ctx.current_instruction = 0x881FBAFC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r18,r9,r4
	ctx.r18.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r20,r11,r5
	ctx.r20.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r18,84(r1)
	ctx.current_instruction = 0x881FBB28;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// add r26,r10,r3
	ctx.r26.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r20,80(r1)
	ctx.current_instruction = 0x881FBB30;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r30,88(r1)
	ctx.current_instruction = 0x881FBB34;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881fbdd8
	if (!ctx.cr6.lt) goto loc_881FBDD8;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x881FBB48;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r10,112(r1)
	ctx.current_instruction = 0x881FBB50;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r24,-30678
	ctx.r24.s64 = -2010513408;
	// li r19,1
	ctx.r19.s64 = 1;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// b 0x881fbb70
	goto loc_881FBB70;
loc_881FBB64:
	// lwz r30,88(r1)
	ctx.current_instruction = 0x881FBB64;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r20,80(r1)
	ctx.current_instruction = 0x881FBB68;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	ctx.current_instruction = 0x881FBB6C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881FBB70:
	// lwz r17,20696(r23)
	ctx.current_instruction = 0x881FBB70;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r23.u32 + 20696);
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// lwz r16,20700(r23)
	ctx.current_instruction = 0x881FBB78;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r23.u32 + 20700);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r15,20704(r23)
	ctx.current_instruction = 0x881FBB80;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r23.u32 + 20704);
	// ble cr6,0x881fbd7c
	if (!ctx.cr6.gt) goto loc_881FBD7C;
	// subf r11,r20,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r20.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x881FBB90;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_881FBB94:
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_881FBBA4:
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// lwz r9,28(r27)
	ctx.current_instruction = 0x881FBBA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// lwzu r10,4(r28)
	ctx.current_instruction = 0x881FBBAC;
	ea = 4 + ctx.r28.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r27
	ctx.current_instruction = 0x881FBBC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// dcbt r8,r3
	// stw r3,28(r27)
	ctx.current_instruction = 0x881FBBCC;
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// addi r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 45;
	// lwz r8,392(r31)
	ctx.current_instruction = 0x881FBBD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x881FBBD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24356(r25)
	ctx.current_instruction = 0x881FBBE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 24356);
	// lwz r6,25780(r24)
	ctx.current_instruction = 0x881FBBE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 25780);
	// lbz r10,4(r26)
	ctx.current_instruction = 0x881FBBE8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 4);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r8,r4,r31
	ctx.current_instruction = 0x881FBBF4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r31.u32);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x881cc7f8
	ctx.lr = 0x881FBC00;
	sub_881CC7F8(ctx, base);
loc_881FBC00:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,768
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 768, ctx.xer);
	// blt cr6,0x881fbba4
	if (ctx.cr6.lt) goto loc_881FBBA4;
	// lwz r11,108(r1)
	ctx.current_instruction = 0x881FBC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fbd14
	if (ctx.cr6.eq) goto loc_881FBD14;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x881FBC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,352(r31)
	ctx.current_instruction = 0x881FBC30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// beq cr6,0x881fbc80
	if (ctx.cr6.eq) goto loc_881FBC80;
	// stwx r19,r9,r22
	ctx.current_instruction = 0x881FBC38;
	REX_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r19.u32);
	// lwz r8,348(r31)
	ctx.current_instruction = 0x881FBC3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881FBC40;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r6,r8
	ctx.current_instruction = 0x881FBC50;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r19.u32);
	// lwz r5,348(r31)
	ctx.current_instruction = 0x881FBC54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881FBC58;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r3,r5
	ctx.current_instruction = 0x881FBC64;
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r19.u32);
	// lwz r11,348(r31)
	ctx.current_instruction = 0x881FBC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,4(r11)
	ctx.current_instruction = 0x881FBC70;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// lwz r9,348(r31)
	ctx.current_instruction = 0x881FBC74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r19,r10,r9
	ctx.current_instruction = 0x881FBC78;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r19.u32);
	// b 0x881fbcc4
	goto loc_881FBCC4;
loc_881FBC80:
	// stwx r21,r9,r22
	ctx.current_instruction = 0x881FBC80;
	REX_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r21.u32);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881FBC84;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// lwz r8,348(r31)
	ctx.current_instruction = 0x881FBC88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r6,r8
	ctx.current_instruction = 0x881FBC98;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r21.u32);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881FBC9C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// lwz r4,348(r31)
	ctx.current_instruction = 0x881FBCA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r3,r4
	ctx.current_instruction = 0x881FBCAC;
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r21.u32);
	// lwz r11,348(r31)
	ctx.current_instruction = 0x881FBCB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,4(r11)
	ctx.current_instruction = 0x881FBCB8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r9,348(r31)
	ctx.current_instruction = 0x881FBCBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r21,r10,r9
	ctx.current_instruction = 0x881FBCC0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r21.u32);
loc_881FBCC4:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x881FBCC4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r8,92(r1)
	ctx.current_instruction = 0x881FBCCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r3,1384(r31)
	ctx.current_instruction = 0x881FBCD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r7,96(r1)
	ctx.current_instruction = 0x881FBCDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881fbd00
	if (!ctx.cr6.eq) goto loc_881FBD00;
	// bl 0x881fb930
	ctx.lr = 0x881FBCF0;
	sub_881FB930(ctx, base);
loc_881FBCF0:
	// addi r17,r17,32
	ctx.r17.s64 = ctx.r17.s64 + 32;
	// addi r16,r16,16
	ctx.r16.s64 = ctx.r16.s64 + 16;
	// addi r15,r15,16
	ctx.r15.s64 = ctx.r15.s64 + 16;
	// b 0x881fbd4c
	goto loc_881FBD4C;
loc_881FBD00:
	// bl 0x881fb980
	ctx.lr = 0x881FBD04;
	sub_881FB980(ctx, base);
loc_881FBD04:
	// addi r17,r17,32
	ctx.r17.s64 = ctx.r17.s64 + 32;
	// addi r16,r16,16
	ctx.r16.s64 = ctx.r16.s64 + 16;
	// addi r15,r15,16
	ctx.r15.s64 = ctx.r15.s64 + 16;
	// b 0x881fbd4c
	goto loc_881FBD4C;
loc_881FBD14:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x881FBD14;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lhz r8,76(r31)
	ctx.current_instruction = 0x881FBD1C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x881FBD28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r7,74(r31)
	ctx.current_instruction = 0x881FBD2C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r3,1384(r31)
	ctx.current_instruction = 0x881FBD30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r6,r11,r20
	ctx.r6.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bne cr6,0x881fbd48
	if (!ctx.cr6.eq) goto loc_881FBD48;
	// bl 0x881fb9d0
	ctx.lr = 0x881FBD44;
	sub_881FB9D0(ctx, base);
loc_881FBD44:
	// b 0x881fbd4c
	goto loc_881FBD4C;
loc_881FBD48:
	// bl 0x881fba20
	ctx.lr = 0x881FBD4C;
	sub_881FBA20(ctx, base);
loc_881FBD4C:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x881FBD4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881fbb94
	if (ctx.cr6.lt) goto loc_881FBB94;
	// lwz r30,88(r1)
	ctx.current_instruction = 0x881FBD6C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r20,80(r1)
	ctx.current_instruction = 0x881FBD74;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	ctx.current_instruction = 0x881FBD78;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881FBD7C:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x881FBD7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fbda8
	if (ctx.cr6.eq) goto loc_881FBDA8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,20704(r23)
	ctx.current_instruction = 0x881FBD8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 20704);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r8,20700(r23)
	ctx.current_instruction = 0x881FBD94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 20700);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r7,20696(r23)
	ctx.current_instruction = 0x881FBD9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 20696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881fd1b0
	ctx.lr = 0x881FBDA8;
	sub_881FD1B0(ctx, base);
loc_881FBDA8:
	// lwz r11,232(r23)
	ctx.current_instruction = 0x881FBDA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 232);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881FBDAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,228(r23)
	ctx.current_instruction = 0x881FBDB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 228);
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r7,r18,r10
	ctx.r7.u64 = ctx.r18.u64 + ctx.r10.u64;
	// stw r8,80(r1)
	ctx.current_instruction = 0x881FBDC0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,112(r1)
	ctx.current_instruction = 0x881FBDC8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x881FBDCC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	ctx.current_instruction = 0x881FBDD0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne 0x881fbb64
	if (!ctx.cr0.eq) goto loc_881FBB64;
loc_881FBDD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88219210) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88219210);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88219210;
	ctx.current_instruction = 0x88219210;
	uint32_t ea{};
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x882192c8
	if (!ctx.cr6.eq) goto loc_882192C8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x882193b0
	if (!ctx.cr6.gt) goto loc_882193B0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_88219258:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v3,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vadduhm v26,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
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
	// vadduhm v18,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v16,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v16,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x88219258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88219258;
	// b 0x882193b0
	goto loc_882193B0;
loc_882192C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x882193b0
	if (!ctx.cr6.gt) goto loc_882193B0;
	// li r8,-16
	ctx.r8.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_882192E4:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vsldoi128 v9,v13,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsubshs v29,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v3,v13,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsubshs v28,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v27,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vslh v25,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v18,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vadduhm v15,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v10,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v27,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v26,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsubshs v24,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v22,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v24,v29
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// bdnz 0x882192e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882192E4;
loc_882193B0:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
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

DEFINE_REX_FUNC(sub_8821C1A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821C1A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821C1A0) {
			switch (rex_dispatch_address) {
				case 0x8821C1A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821C1A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821C1A8: goto loc_8821C1A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8821C1A8;
	__savegprlr_26(ctx, base);
loc_8821C1A8:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v4,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,48
	ctx.r28.s64 = 48;
	// lvsl v4,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r27,96
	ctx.r27.s64 = 96;
	// lvx128 v57,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v2,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v55,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v52,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r26,144
	ctx.r26.s64 = 144;
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,192
	ctx.r9.s64 = 192;
	// vperm128 v1,v58,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v57,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,240
	ctx.r31.s64 = 240;
	// lvx128 v50,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsubshs v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r8,288
	ctx.r8.s64 = 288;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v50,v47,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v26,v49,v46,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v31,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm128 v30,v51,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v27,v29,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v12,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r7,336
	ctx.r7.s64 = 336;
	// vmrghb v5,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v23,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v19,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v21,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v20,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v18,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v0,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v13,v25,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v1,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v16,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v15,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v14,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v27,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v28,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v19,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v18,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v15,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v19,r29,r7
	ea = (ctx.r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v18,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v17,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v16,r29,r27
	ea = (ctx.r29.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r29,r26
	ea = (ctx.r29.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r29,r31
	ea = (ctx.r29.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r29,r8
	ea = (ctx.r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882214E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882214E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882214E8) {
			switch (rex_dispatch_address) {
				case 0x882214F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882214E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882214F0: goto loc_882214F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x882214F0;
	__savegprlr_28(ctx, base);
loc_882214F0:
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
	ctx.current_instruction = 0x88221504;
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
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	ctx.r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	ctx.r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x882216a4
	if (!ctx.cr6.eq) goto loc_882216A4;
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
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88221880
	if (!ctx.cr6.gt) goto loc_88221880;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_882215BC:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v27,v29,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x882215bc
	if (ctx.cr6.lt) goto loc_882215BC;
	// b 0x88221880
	goto loc_88221880;
loc_882216A4:
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
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88221880
	if (!ctx.cr6.gt) goto loc_88221880;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_88221728:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vor128 v4,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v16,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88221728
	if (ctx.cr6.lt) goto loc_88221728;
loc_88221880:
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
	// bne cr6,0x88221908
	if (!ctx.cr6.eq) goto loc_88221908;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882219a4
	if (!ctx.cr6.gt) goto loc_882219A4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_882218B4:
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
	ctx.current_instruction = 0x882218F4;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ctx.current_instruction = 0x882218F8;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x882218b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882218B4;
	// b 0x882219a4
	goto loc_882219A4;
loc_88221908:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882219a4
	if (!ctx.cr6.gt) goto loc_882219A4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_88221920:
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
	// bdnz 0x88221920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221920;
loc_882219A4:
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

DEFINE_REX_FUNC(sub_88244148) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88244148;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88244148) {
			switch (rex_dispatch_address) {
				case 0x88244150:
				case 0x88244214:
				case 0x88244264:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88244148;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88244150: goto loc_88244150;
		case 0x88244214: goto loc_88244214;
		case 0x88244264: goto loc_88244264;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88244150;
	__savegprlr_27(ctx, base);
loc_88244150:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88244150;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,512
	ctx.r9.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,9124
	ctx.r10.s64 = ctx.r3.s64 + 9124;
	// addi r11,r3,936
	ctx.r11.s64 = ctx.r3.s64 + 936;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88244168:
	// stwu r11,4(r10)
	ctx.current_instruction = 0x88244168;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x88244168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88244168;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,511
	ctx.r8.s64 = 511;
	// addi r10,r31,17576
	ctx.r10.s64 = ctx.r31.s64 + 17576;
	// stw r8,11432(r31)
	ctx.current_instruction = 0x88244180;
	REX_STORE_U32(ctx.r31.u32 + 11432, ctx.r8.u32);
	// addi r11,r31,11436
	ctx.r11.s64 = ctx.r31.s64 + 11436;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8824418C:
	// stwu r11,4(r10)
	ctx.current_instruction = 0x8824418C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8824418c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8824418C;
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r8,19884(r31)
	ctx.current_instruction = 0x8824419C;
	REX_STORE_U32(ctx.r31.u32 + 19884, ctx.r8.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,3
	ctx.r29.s64 = 3;
	// stb r27,80(r1)
	ctx.current_instruction = 0x882441A8;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r27,81(r1)
	ctx.current_instruction = 0x882441B0;
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// stb r28,82(r1)
	ctx.current_instruction = 0x882441B4;
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// addi r11,r31,38
	ctx.r11.s64 = ctx.r31.s64 + 38;
	// stb r28,83(r1)
	ctx.current_instruction = 0x882441BC;
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// addi r10,r31,19954
	ctx.r10.s64 = ctx.r31.s64 + 19954;
	// stb r29,84(r1)
	ctx.current_instruction = 0x882441C4;
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r29,85(r1)
	ctx.current_instruction = 0x882441CC;
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r29,86(r1)
	ctx.current_instruction = 0x882441D4;
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r29.u8);
	// addi r3,r31,19892
	ctx.r3.s64 = ctx.r31.s64 + 19892;
	// stb r29,87(r1)
	ctx.current_instruction = 0x882441DC;
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,88(r1)
	ctx.current_instruction = 0x882441E4;
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,89(r1)
	ctx.current_instruction = 0x882441EC;
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// stb r30,90(r1)
	ctx.current_instruction = 0x882441F0;
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// stb r30,91(r1)
	ctx.current_instruction = 0x882441F4;
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r30.u8);
	// stb r27,92(r1)
	ctx.current_instruction = 0x882441F8;
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r27.u8);
	// stb r27,93(r1)
	ctx.current_instruction = 0x882441FC;
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r27.u8);
	// stb r28,94(r1)
	ctx.current_instruction = 0x88244200;
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r28.u8);
	// stb r28,95(r1)
	ctx.current_instruction = 0x88244204;
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stw r9,360(r31)
	ctx.current_instruction = 0x88244208;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r8,29684(r31)
	ctx.current_instruction = 0x8824420C;
	REX_STORE_U32(ctx.r31.u32 + 29684, ctx.r8.u32);
	// bl 0x880547a0
	ctx.lr = 0x88244214;
	sub_880547A0(ctx, base);
loc_88244214:
	// stb r28,80(r1)
	ctx.current_instruction = 0x88244214;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r28,81(r1)
	ctx.current_instruction = 0x88244218;
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// addi r3,r31,19908
	ctx.r3.s64 = ctx.r31.s64 + 19908;
	// stb r27,82(r1)
	ctx.current_instruction = 0x88244220;
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,83(r1)
	ctx.current_instruction = 0x88244228;
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,84(r1)
	ctx.current_instruction = 0x88244230;
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// stb r30,85(r1)
	ctx.current_instruction = 0x88244234;
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// stb r30,86(r1)
	ctx.current_instruction = 0x88244238;
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// stb r30,87(r1)
	ctx.current_instruction = 0x8824423C;
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// stb r29,88(r1)
	ctx.current_instruction = 0x88244240;
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stb r29,89(r1)
	ctx.current_instruction = 0x88244244;
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// stb r29,90(r1)
	ctx.current_instruction = 0x88244248;
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// stb r29,91(r1)
	ctx.current_instruction = 0x8824424C;
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r29.u8);
	// stb r28,92(r1)
	ctx.current_instruction = 0x88244250;
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// stb r28,93(r1)
	ctx.current_instruction = 0x88244254;
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r28.u8);
	// stb r27,94(r1)
	ctx.current_instruction = 0x88244258;
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r27.u8);
	// stb r27,95(r1)
	ctx.current_instruction = 0x8824425C;
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// bl 0x880547a0
	ctx.lr = 0x88244264;
	sub_880547A0(ctx, base);
loc_88244264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

