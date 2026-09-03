#include "forzahorizon2_funcs.2.h"

DEFINE_REX_FUNC(sub_88050028) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050028);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050028;
	ctx.current_instruction = 0x88050028;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88050030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880506A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880506A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880506A8) {
			switch (rex_dispatch_address) {
				case 0x880506B0:
				case 0x88050718:
				case 0x88050740:
				case 0x88050768:
				case 0x88050778:
				case 0x88050798:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880506A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880506B0: goto loc_880506B0;
		case 0x88050718: goto loc_88050718;
		case 0x88050740: goto loc_88050740;
		case 0x88050768: goto loc_88050768;
		case 0x88050778: goto loc_88050778;
		case 0x88050798: goto loc_88050798;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880506B0;
	__savegprlr_27(ctx, base);
loc_880506B0:
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880506B4;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r31)
	ctx.current_instruction = 0x880506CC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x880506ec
	if (!ctx.cr6.eq) goto loc_880506EC;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,17888(r11)
	ctx.current_instruction = 0x880506D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880506ec
	if (!ctx.cr6.eq) goto loc_880506EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880507c8
	goto loc_880507C8;
loc_880506EC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x88050708
	if (ctx.cr6.eq) goto loc_88050708;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x88050730
	if (!ctx.cr6.eq) goto loc_88050730;
loc_88050708:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050508
	ctx.lr = 0x88050718;
	sub_88050508(ctx, base);
loc_88050718:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	ctx.current_instruction = 0x8805071C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne 0x88050730
	if (!ctx.cr0.eq) goto loc_88050730;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x880507c8
	goto loc_880507C8;
loc_88050730:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88057c48
	ctx.lr = 0x88050740;
	sub_88057C48(ctx, base);
loc_88050740:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r3,80(r31)
	ctx.current_instruction = 0x88050748;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bne cr6,0x88050778
	if (!ctx.cr6.eq) goto loc_88050778;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88050778
	if (!ctx.cr6.eq) goto loc_88050778;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88057c48
	ctx.lr = 0x88050768;
	sub_88057C48(ctx, base);
loc_88050768:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050508
	ctx.lr = 0x88050778;
	sub_88050508(ctx, base);
loc_88050778:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88050788
	if (ctx.cr6.eq) goto loc_88050788;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x880507a8
	if (!ctx.cr6.eq) goto loc_880507A8;
loc_88050788:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050508
	ctx.lr = 0x88050798;
	sub_88050508(ctx, base);
loc_88050798:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r29,80(r31)
	ctx.current_instruction = 0x880507A4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_880507A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x880507c4
	goto loc_880507C4;
loc_880507C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_880507C8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88056E10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88056E10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88056E10) {
			switch (rex_dispatch_address) {
				case 0x88056E48:
				case 0x88056E54:
				case 0x88056E74:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88056E10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88056E48: goto loc_88056E48;
		case 0x88056E54: goto loc_88056E54;
		case 0x88056E74: goto loc_88056E74;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88056E14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88056E18;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88056E1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88056E20;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,22358
	ctx.r11.s64 = 1465253888;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r30,r11,17201
	ctx.r30.u64 = ctx.r11.u64 | 17201;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88056e74
	if (!ctx.cr6.eq) goto loc_88056E74;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,1128
	ctx.r3.s64 = 1128;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x88056E48;
	sub_88050340(ctx, base);
loc_88056E48:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88056e60
	if (ctx.cr6.eq) goto loc_88056E60;
	// bl 0x8805d858
	ctx.lr = 0x88056E54;
	sub_8805D858(ctx, base);
loc_88056E54:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056e68
	if (!ctx.cr6.eq) goto loc_88056E68;
loc_88056E60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88056e78
	goto loc_88056E78;
loc_88056E68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805d938
	ctx.lr = 0x88056E74;
	sub_8805D938(ctx, base);
loc_88056E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88056E78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88056E7C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88056E84;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88056E88;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88058250) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88058250);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058250;
	ctx.current_instruction = 0x88058250;
	uint32_t ea{};
	// addi r11,r4,640
	ctx.r11.s64 = ctx.r4.s64 + 640;
loc_88058254:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88058254
	if (!ctx.cr0.eq) goto loc_88058254;
	// lwz r11,48(r4)
	ctx.current_instruction = 0x88058270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r3,52(r4)
	ctx.current_instruction = 0x8805827C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88059110) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059110);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059110;
	ctx.current_instruction = 0x88059110;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059380) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059380;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059380) {
			switch (rex_dispatch_address) {
				case 0x880593BC:
				case 0x880593F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059380;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880593BC: goto loc_880593BC;
		case 0x880593F4: goto loc_880593F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88059384;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88059388;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805938C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88059394;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	ctx.current_instruction = 0x8805939C;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// lwz r11,520(r30)
	ctx.current_instruction = 0x880593A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880593d8
	if (ctx.cr6.eq) goto loc_880593D8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x88063748
	ctx.lr = 0x880593BC;
	sub_88063748(ctx, base);
loc_880593BC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x880593d0
	goto loc_880593D0;
loc_880593D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r30)
	ctx.current_instruction = 0x880593D4;
	REX_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
loc_880593D8:
	// lwz r3,52(r30)
	ctx.current_instruction = 0x880593D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880593fc
	if (ctx.cr6.eq) goto loc_880593FC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880593E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880593E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880593F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880593F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r30)
	ctx.current_instruction = 0x880593F8;
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
loc_880593FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059404;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805940C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88059410;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805B128) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805B128);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B128;
	ctx.current_instruction = 0x8805B128;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.current_instruction = 0x8805B12C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8805B738) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805B738);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B738;
	ctx.current_instruction = 0x8805B738;
	PPCRegister temp{};
	// stfs f1,340(r3)
	ctx.current_instruction = 0x8805B738;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BAE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BAE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BAE8) {
			switch (rex_dispatch_address) {
				case 0x8805BAF0:
				case 0x8805BB10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BAE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BAF0: goto loc_8805BAF0;
		case 0x8805BB10: goto loc_8805BB10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805BAF0;
	__savegprlr_29(ctx, base);
loc_8805BAF0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805BAF0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805BAF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,116(r11)
	ctx.current_instruction = 0x8805BB04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BB10:
	// ld r9,296(r31)
	ctx.current_instruction = 0x8805BB10;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x8805bb24
	if (!ctx.cr6.eq) goto loc_8805BB24;
	// std r3,296(r31)
	ctx.current_instruction = 0x8805BB20;
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r3.u64);
loc_8805BB24:
	// ld r10,296(r31)
	ctx.current_instruction = 0x8805BB24;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f0,288(r31)
	ctx.current_instruction = 0x8805BB28;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,340(r31)
	ctx.current_instruction = 0x8805BB30;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x8805BB3C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x8805BB40;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmadds f7,f9,f12,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,288(r31)
	ctx.current_instruction = 0x8805BB5C;
	REX_STORE_U64(ctx.r31.u32 + 288, ctx.f6.u64);
	// std r11,296(r31)
	ctx.current_instruction = 0x8805BB60;
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// ld r7,288(r31)
	ctx.current_instruction = 0x8805BB64;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r5,0(r29)
	ctx.current_instruction = 0x8805BB70;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r5,312(r31)
	ctx.current_instruction = 0x8805BB74;
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C460) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805C460);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C460;
	ctx.current_instruction = 0x8805C460;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805CD38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805CD38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805CD38;
	ctx.current_instruction = 0x8805CD38;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8805cd6c
	if (ctx.cr6.eq) goto loc_8805CD6C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8805cd6c
	if (!ctx.cr6.eq) goto loc_8805CD6C;
	// ld r10,64(r3)
	ctx.current_instruction = 0x8805CD4C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,56(r3)
	ctx.current_instruction = 0x8805CD54;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// stw r8,48(r3)
	ctx.current_instruction = 0x8805CD58;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r7,88(r3)
	ctx.current_instruction = 0x8805CD60;
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805CD6C:
	// ld r10,56(r11)
	ctx.current_instruction = 0x8805CD6C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,48(r11)
	ctx.current_instruction = 0x8805CD78;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// std r10,88(r11)
	ctx.current_instruction = 0x8805CD7C;
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805DFF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805DFF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805DFF0) {
			switch (rex_dispatch_address) {
				case 0x8805E024:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DFF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805E024: goto loc_8805E024;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805DFF4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805DFF8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805DFFC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,560(r3)
	ctx.current_instruction = 0x8805E000;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x8805E008;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e02c
	if (ctx.cr6.eq) goto loc_8805E02C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8805e02c
	if (ctx.cr6.gt) goto loc_8805E02C;
	// bl 0x8807c288
	ctx.lr = 0x8805E024;
	sub_8807C288(ctx, base);
loc_8805E024:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805e034
	if (!ctx.cr6.eq) goto loc_8805E034;
loc_8805E02C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x8805E030;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8805E034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805E038;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805E040;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88061D18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88061D18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88061D18) {
			switch (rex_dispatch_address) {
				case 0x88061D20:
				case 0x88061D7C:
				case 0x88061DA8:
				case 0x88061DC8:
				case 0x88061E10:
				case 0x88061E4C:
				case 0x88061E60:
				case 0x88061F38:
				case 0x88061F44:
				case 0x88061F58:
				case 0x88061F6C:
				case 0x88061F80:
				case 0x88061F88:
				case 0x88061F9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88061D18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88061D20: goto loc_88061D20;
		case 0x88061D7C: goto loc_88061D7C;
		case 0x88061DA8: goto loc_88061DA8;
		case 0x88061DC8: goto loc_88061DC8;
		case 0x88061E10: goto loc_88061E10;
		case 0x88061E4C: goto loc_88061E4C;
		case 0x88061E60: goto loc_88061E60;
		case 0x88061F38: goto loc_88061F38;
		case 0x88061F44: goto loc_88061F44;
		case 0x88061F58: goto loc_88061F58;
		case 0x88061F6C: goto loc_88061F6C;
		case 0x88061F80: goto loc_88061F80;
		case 0x88061F88: goto loc_88061F88;
		case 0x88061F9C: goto loc_88061F9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88061D20;
	__savegprlr_25(ctx, base);
loc_88061D20:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88061D20;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,192(r1)
	ctx.current_instruction = 0x88061D24;
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r8,200(r1)
	ctx.current_instruction = 0x88061D30;
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88061fac
	if (ctx.cr6.eq) goto loc_88061FAC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88061fa4
	if (ctx.cr6.eq) goto loc_88061FA4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88061fa4
	if (ctx.cr6.eq) goto loc_88061FA4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88061fa4
	if (ctx.cr6.eq) goto loc_88061FA4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r29,0(r6)
	ctx.current_instruction = 0x88061D68;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050340
	ctx.lr = 0x88061D7C;
	sub_88050340(ctx, base);
loc_88061D7C:
	// stw r3,0(r31)
	ctx.current_instruction = 0x88061D7C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88061d98
	if (!ctx.cr6.eq) goto loc_88061D98;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88061D8C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88061D98:
	// stw r29,4(r31)
	ctx.current_instruction = 0x88061D98;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x88050340
	ctx.lr = 0x88061DA8;
	sub_88050340(ctx, base);
loc_88061DA8:
	// stw r3,4(r31)
	ctx.current_instruction = 0x88061DA8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88061dd4
	if (!ctx.cr6.eq) goto loc_88061DD4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88061DBC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.current_instruction = 0x88061DC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88050358
	ctx.lr = 0x88061DC8;
	sub_88050358(ctx, base);
loc_88061DC8:
	// stw r29,0(r31)
	ctx.current_instruction = 0x88061DC8;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88061DD4:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x88061DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r5,40
	ctx.r5.s64 = 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88061df8
	if (!ctx.cr6.eq) goto loc_88061DF8;
	// lhz r10,14(r27)
	ctx.current_instruction = 0x88061DE4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x88061df8
	if (!ctx.cr6.eq) goto loc_88061DF8;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x88061e04
	goto loc_88061E04;
loc_88061DF8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88061e04
	if (!ctx.cr6.eq) goto loc_88061E04;
	// li r5,52
	ctx.r5.s64 = 52;
loc_88061E04:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x88061E08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x880547a0
	ctx.lr = 0x88061E10;
	sub_880547A0(ctx, base);
loc_88061E10:
	// lwz r11,16(r28)
	ctx.current_instruction = 0x88061E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// li r5,40
	ctx.r5.s64 = 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88061e34
	if (!ctx.cr6.eq) goto loc_88061E34;
	// lhz r10,14(r28)
	ctx.current_instruction = 0x88061E20;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x88061e34
	if (!ctx.cr6.eq) goto loc_88061E34;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x88061e40
	goto loc_88061E40;
loc_88061E34:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88061e40
	if (!ctx.cr6.eq) goto loc_88061E40;
	// li r5,52
	ctx.r5.s64 = 52;
loc_88061E40:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.current_instruction = 0x88061E44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880547a0
	ctx.lr = 0x88061E4C;
	sub_880547A0(ctx, base);
loc_88061E4C:
	// stw r29,14548(r31)
	ctx.current_instruction = 0x88061E4C;
	REX_STORE_U32(ctx.r31.u32 + 14548, ctx.r29.u32);
	// addi r30,r31,14596
	ctx.r30.s64 = ctx.r31.s64 + 14596;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cad40
	ctx.lr = 0x88061E60;
	sub_880CAD40(ctx, base);
loc_88061E60:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// stw r29,14464(r31)
	ctx.current_instruction = 0x88061E64;
	REX_STORE_U32(ctx.r31.u32 + 14464, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x88061e74
	if (ctx.cr6.eq) goto loc_88061E74;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_88061E74:
	// stw r11,14652(r31)
	ctx.current_instruction = 0x88061E74;
	REX_STORE_U32(ctx.r31.u32 + 14652, ctx.r11.u32);
	// stw r29,14668(r31)
	ctx.current_instruction = 0x88061E78;
	REX_STORE_U32(ctx.r31.u32 + 14668, ctx.r29.u32);
	// stw r29,14672(r31)
	ctx.current_instruction = 0x88061E7C;
	REX_STORE_U32(ctx.r31.u32 + 14672, ctx.r29.u32);
	// stw r29,0(r25)
	ctx.current_instruction = 0x88061E80;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88061E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88061ed0
	if (!ctx.cr6.eq) goto loc_88061ED0;
	// lwz r11,14600(r31)
	ctx.current_instruction = 0x88061E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88061ed0
	if (!ctx.cr6.eq) goto loc_88061ED0;
	// lwz r11,14604(r31)
	ctx.current_instruction = 0x88061E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88061ed0
	if (!ctx.cr6.eq) goto loc_88061ED0;
	// lwz r11,14608(r31)
	ctx.current_instruction = 0x88061EA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88061ed0
	if (!ctx.cr6.eq) goto loc_88061ED0;
	// lwz r11,4(r27)
	ctx.current_instruction = 0x88061EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,14604(r31)
	ctx.current_instruction = 0x88061EB8;
	REX_STORE_U32(ctx.r31.u32 + 14604, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.current_instruction = 0x88061EBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,14608(r31)
	ctx.current_instruction = 0x88061ECC;
	REX_STORE_U32(ctx.r31.u32 + 14608, ctx.r7.u32);
loc_88061ED0:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88061ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88061ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r27)
	ctx.current_instruction = 0x88061ED8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88061f14
	if (!ctx.cr6.eq) goto loc_88061F14;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x88061EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x88061EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// lwz r8,4(r30)
	ctx.current_instruction = 0x88061EF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x88061f14
	if (!ctx.cr6.eq) goto loc_88061F14;
	// stw r29,14612(r31)
	ctx.current_instruction = 0x88061F0C;
	REX_STORE_U32(ctx.r31.u32 + 14612, ctx.r29.u32);
	// b 0x88061f1c
	goto loc_88061F1C;
loc_88061F14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,14612(r31)
	ctx.current_instruction = 0x88061F18;
	REX_STORE_U32(ctx.r31.u32 + 14612, ctx.r11.u32);
loc_88061F1C:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x88061F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88061f30
	if (ctx.cr6.eq) goto loc_88061F30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88061f50
	if (!ctx.cr6.eq) goto loc_88061F50;
loc_88061F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c8e68
	ctx.lr = 0x88061F38;
	sub_880C8E68(ctx, base);
loc_88061F38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x88061F3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x880c94e0
	ctx.lr = 0x88061F44;
	sub_880C94E0(ctx, base);
loc_88061F44:
	// stw r3,0(r25)
	ctx.current_instruction = 0x88061F44;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88061fac
	if (!ctx.cr6.eq) goto loc_88061FAC;
loc_88061F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880603b8
	ctx.lr = 0x88061F58;
	sub_880603B8(ctx, base);
loc_88061F58:
	// stw r3,0(r25)
	ctx.current_instruction = 0x88061F58;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88061fac
	if (!ctx.cr6.eq) goto loc_88061FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c9600
	ctx.lr = 0x88061F6C;
	sub_880C9600(ctx, base);
loc_88061F6C:
	// stw r3,0(r25)
	ctx.current_instruction = 0x88061F6C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88061fac
	if (!ctx.cr6.eq) goto loc_88061FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca778
	ctx.lr = 0x88061F80;
	sub_880CA778(ctx, base);
loc_88061F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88061468
	ctx.lr = 0x88061F88;
	sub_88061468(ctx, base);
loc_88061F88:
	// stw r3,0(r25)
	ctx.current_instruction = 0x88061F88;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88061fac
	if (!ctx.cr6.eq) goto loc_88061FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca078
	ctx.lr = 0x88061F9C;
	sub_880CA078(ctx, base);
loc_88061F9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88061FA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88061FA8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_88061FAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067E20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067E20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067E20) {
			switch (rex_dispatch_address) {
				case 0x88067E28:
				case 0x88067E64:
				case 0x88067E80:
				case 0x88067E94:
				case 0x88067EA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067E20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067E28: goto loc_88067E28;
		case 0x88067E64: goto loc_88067E64;
		case 0x88067E80: goto loc_88067E80;
		case 0x88067E94: goto loc_88067E94;
		case 0x88067EA8: goto loc_88067EA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88067E28;
	__savegprlr_28(ctx, base);
loc_88067E28:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88067E28;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067e8c
	if (ctx.cr6.eq) goto loc_88067E8C;
	// lwz r10,-4(r3)
	ctx.current_instruction = 0x88067E40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x88067e6c
	if (ctx.cr0.lt) goto loc_88067E6C;
loc_88067E58:
	// addi r30,r30,-60
	ctx.r30.s64 = ctx.r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c390
	ctx.lr = 0x88067E64;
	sub_8805C390(ctx, base);
loc_88067E64:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x88067e58
	if (!ctx.cr0.lt) goto loc_88067E58;
loc_88067E6C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067e80
	if (ctx.cr6.eq) goto loc_88067E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8805c0d0
	ctx.lr = 0x88067E80;
	sub_8805C0D0(ctx, base);
loc_88067E80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88067E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c390
	ctx.lr = 0x88067E94;
	sub_8805C390(ctx, base);
loc_88067E94:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067ea8
	if (ctx.cr6.eq) goto loc_88067EA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c0d0
	ctx.lr = 0x88067EA8;
	sub_8805C0D0(ctx, base);
loc_88067EA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880693D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880693D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880693D0;
	ctx.current_instruction = 0x880693D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069448) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069448);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069448;
	ctx.current_instruction = 0x88069448;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880694C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880694C8;
	ctx.current_instruction = 0x880694C8;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x882436e0
	__imp__KeResetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880696A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880696A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880696A8) {
			switch (rex_dispatch_address) {
				case 0x880696D4:
				case 0x880696F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880696A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880696D4: goto loc_880696D4;
		case 0x880696F4: goto loc_880696F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880696AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880696B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880696B4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880696B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880696BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880696C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880696D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880696D4:
	// lwz r9,220(r31)
	ctx.current_instruction = 0x880696D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x880696DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// andc r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r30.u64;
	// stw r7,220(r31)
	ctx.current_instruction = 0x880696E4;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.current_instruction = 0x880696E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880696F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880696F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880696F8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88069700;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88069704;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C948) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C948);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C948;
	ctx.current_instruction = 0x8806C948;
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// lwz r10,8108(r3)
	ctx.current_instruction = 0x8806C94C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8108);
	// addi r9,r11,8632
	ctx.r9.s64 = ctx.r11.s64 + 8632;
	// lwz r11,8104(r3)
	ctx.current_instruction = 0x8806C954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,7056(r3)
	ctx.current_instruction = 0x8806C95C;
	REX_STORE_U32(ctx.r3.u32 + 7056, ctx.r9.u32);
	// bne cr6,0x8806c9b8
	if (!ctx.cr6.eq) goto loc_8806C9B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c9d4
	if (ctx.cr6.eq) goto loc_8806C9D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806c988
	if (!ctx.cr6.eq) goto loc_8806C988;
loc_8806C974:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7976(r3)
	ctx.current_instruction = 0x8806C978;
	REX_STORE_U32(ctx.r3.u32 + 7976, ctx.r11.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C97C;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C980;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C988:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8806c9a8
	if (ctx.cr6.eq) goto loc_8806C9A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8806c974
	if (ctx.cr6.eq) goto loc_8806C974;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8806c9a8
	if (ctx.cr6.eq) goto loc_8806C9A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8806C9A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806C9AC;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C9B0;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C9B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806c9cc
	if (!ctx.cr6.eq) goto loc_8806C9CC;
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C9C0;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806C9C4;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C9CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806c9e8
	if (!ctx.cr6.eq) goto loc_8806C9E8;
loc_8806C9D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,21096(r3)
	ctx.current_instruction = 0x8806C9DC;
	REX_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r10,2336(r3)
	ctx.current_instruction = 0x8806C9E0;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C9E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806c9fc
	if (!ctx.cr6.eq) goto loc_8806C9FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806C9F4;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C9FC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8806c9a8
	if (ctx.cr6.eq) goto loc_8806C9A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8806ca14
	if (ctx.cr6.eq) goto loc_8806CA14;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8806CA14:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28016(r3)
	ctx.current_instruction = 0x8806CA1C;
	REX_STORE_U32(ctx.r3.u32 + 28016, ctx.r11.u32);
	// stw r10,28104(r3)
	ctx.current_instruction = 0x8806CA20;
	REX_STORE_U32(ctx.r3.u32 + 28104, ctx.r10.u32);
	// stw r10,28108(r3)
	ctx.current_instruction = 0x8806CA24;
	REX_STORE_U32(ctx.r3.u32 + 28108, ctx.r10.u32);
	// stw r11,30220(r3)
	ctx.current_instruction = 0x8806CA28;
	REX_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806CA2C;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806F828) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806F828);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F828;
	ctx.current_instruction = 0x8806F828;
	// lwz r10,2184(r3)
	ctx.current_instruction = 0x8806F828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8806f88c
	if (ctx.cr6.gt) goto loc_8806F88C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8806f878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806F878;
	// bdzf 4*cr6+eq,0x8806f888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806F888;
	// bne cr6,0x8806f878
	if (!ctx.cr6.eq) goto loc_8806F878;
	// stw r11,1584(r3)
	ctx.current_instruction = 0x8806F850;
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stw r11,1580(r3)
	ctx.current_instruction = 0x8806F854;
	REX_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806F858;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,2424(r3)
	ctx.current_instruction = 0x8806F85C;
	REX_STORE_U32(ctx.r3.u32 + 2424, ctx.r11.u32);
	// stw r11,2428(r3)
	ctx.current_instruction = 0x8806F860;
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r11.u32);
	// stw r11,1612(r3)
	ctx.current_instruction = 0x8806F864;
	REX_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// stw r9,1576(r3)
	ctx.current_instruction = 0x8806F868;
	REX_STORE_U32(ctx.r3.u32 + 1576, ctx.r9.u32);
	// stw r11,2564(r3)
	ctx.current_instruction = 0x8806F86C;
	REX_STORE_U32(ctx.r3.u32 + 2564, ctx.r11.u32);
	// stw r9,788(r3)
	ctx.current_instruction = 0x8806F870;
	REX_STORE_U32(ctx.r3.u32 + 788, ctx.r9.u32);
	// b 0x8806f88c
	goto loc_8806F88C;
loc_8806F878:
	// stw r9,1576(r3)
	ctx.current_instruction = 0x8806F878;
	REX_STORE_U32(ctx.r3.u32 + 1576, ctx.r9.u32);
	// stw r11,1584(r3)
	ctx.current_instruction = 0x8806F87C;
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stw r11,1580(r3)
	ctx.current_instruction = 0x8806F880;
	REX_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// b 0x8806f88c
	goto loc_8806F88C;
loc_8806F888:
	// stw r11,1576(r3)
	ctx.current_instruction = 0x8806F888;
	REX_STORE_U32(ctx.r3.u32 + 1576, ctx.r11.u32);
loc_8806F88C:
	// lwz r10,2824(r3)
	ctx.current_instruction = 0x8806F88C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r11,1608(r3)
	ctx.current_instruction = 0x8806F898;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// stw r11,1612(r3)
	ctx.current_instruction = 0x8806F89C;
	REX_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// stw r11,1584(r3)
	ctx.current_instruction = 0x8806F8A0;
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stw r11,1580(r3)
	ctx.current_instruction = 0x8806F8A4;
	REX_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1604(r3)
	ctx.current_instruction = 0x8806F8A8;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,2424(r3)
	ctx.current_instruction = 0x8806F8AC;
	REX_STORE_U32(ctx.r3.u32 + 2424, ctx.r11.u32);
	// stw r11,2428(r3)
	ctx.current_instruction = 0x8806F8B0;
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r11.u32);
	// stw r9,1576(r3)
	ctx.current_instruction = 0x8806F8B4;
	REX_STORE_U32(ctx.r3.u32 + 1576, ctx.r9.u32);
	// stw r11,2564(r3)
	ctx.current_instruction = 0x8806F8B8;
	REX_STORE_U32(ctx.r3.u32 + 2564, ctx.r11.u32);
	// stw r11,2336(r3)
	ctx.current_instruction = 0x8806F8BC;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880713E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880713E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880713E0;
	ctx.current_instruction = 0x880713E0;
	// lwz r7,728(r3)
	ctx.current_instruction = 0x880713E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// lfd f0,30280(r3)
	ctx.current_instruction = 0x880713E4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 30280);
	// lwz r9,30292(r3)
	ctx.current_instruction = 0x880713E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30292);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,30288(r3)
	ctx.current_instruction = 0x880713F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30288);
	// lwz r11,30296(r3)
	ctx.current_instruction = 0x880713F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30296);
	// std r6,-16(r1)
	ctx.current_instruction = 0x880713FC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x88071400;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f13,12248(r8)
	ctx.current_instruction = 0x88071414;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 12248);
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,2588(r3)
	ctx.current_instruction = 0x8807141C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2588);
	// std r5,-16(r1)
	ctx.current_instruction = 0x88071420;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.current_instruction = 0x88071424;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x88071430;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x88071434;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// std r8,-16(r1)
	ctx.current_instruction = 0x88071438;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f7,-16(r1)
	ctx.current_instruction = 0x8807143C;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmul f5,f6,f13
	ctx.f5.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x88071474
	if (!ctx.cr6.gt) goto loc_88071474;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// std r8,-16(r1)
	ctx.current_instruction = 0x88071458;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.current_instruction = 0x8807145C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x88071474
	if (!ctx.cr6.gt) goto loc_88071474;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x880714b8
	goto loc_880714B8;
loc_88071474:
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// std r7,-16(r1)
	ctx.current_instruction = 0x8807147C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x88071480;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f12,12240(r8)
	ctx.current_instruction = 0x88071488;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 12240);
	// fmul f10,f0,f12
	ctx.f10.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x880714b8
	if (ctx.cr6.gt) goto loc_880714B8;
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880714A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880714A4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x880714b8
	if (ctx.cr6.gt) goto loc_880714B8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_880714B8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x880714cc
	if (!ctx.cr6.gt) goto loc_880714CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2588(r3)
	ctx.current_instruction = 0x880714C4;
	REX_STORE_U32(ctx.r3.u32 + 2588, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880714CC:
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,2588(r3)
	ctx.current_instruction = 0x880714D8;
	REX_STORE_U32(ctx.r3.u32 + 2588, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88078110) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88078110);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88078110;
	ctx.current_instruction = 0x88078110;
	// lwz r10,30784(r3)
	ctx.current_instruction = 0x88078110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30784);
	// lwz r11,30792(r3)
	ctx.current_instruction = 0x88078114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30792);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88078138
	if (!ctx.cr6.eq) goto loc_88078138;
	// lwz r11,30796(r3)
	ctx.current_instruction = 0x88078120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30796);
	// lwz r9,30788(r3)
	ctx.current_instruction = 0x88078124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30788);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88078138
	if (!ctx.cr6.eq) goto loc_88078138;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88078140
	goto loc_88078140;
loc_88078138:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30744(r3)
	ctx.current_instruction = 0x8807813C;
	REX_STORE_U32(ctx.r3.u32 + 30744, ctx.r11.u32);
loc_88078140:
	// stw r11,30740(r3)
	ctx.current_instruction = 0x88078140;
	REX_STORE_U32(ctx.r3.u32 + 30740, ctx.r11.u32);
	// lwz r11,30752(r3)
	ctx.current_instruction = 0x88078144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// lwz r9,30756(r3)
	ctx.current_instruction = 0x88078148;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// lwz r8,30788(r3)
	ctx.current_instruction = 0x8807814C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30788);
	// stw r10,30792(r3)
	ctx.current_instruction = 0x88078150;
	REX_STORE_U32(ctx.r3.u32 + 30792, ctx.r10.u32);
	// stw r11,30760(r3)
	ctx.current_instruction = 0x88078154;
	REX_STORE_U32(ctx.r3.u32 + 30760, ctx.r11.u32);
	// stw r9,30764(r3)
	ctx.current_instruction = 0x88078158;
	REX_STORE_U32(ctx.r3.u32 + 30764, ctx.r9.u32);
	// stw r8,30796(r3)
	ctx.current_instruction = 0x8807815C;
	REX_STORE_U32(ctx.r3.u32 + 30796, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880794A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880794A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880794A0) {
			switch (rex_dispatch_address) {
				case 0x880794A8:
				case 0x88079560:
				case 0x88079578:
				case 0x88079584:
				case 0x880795E0:
				case 0x880795F8:
				case 0x88079600:
				case 0x880796A4:
				case 0x880796AC:
				case 0x880796F4:
				case 0x88079794:
				case 0x8807979C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880794A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880794A8: goto loc_880794A8;
		case 0x88079560: goto loc_88079560;
		case 0x88079578: goto loc_88079578;
		case 0x88079584: goto loc_88079584;
		case 0x880795E0: goto loc_880795E0;
		case 0x880795F8: goto loc_880795F8;
		case 0x88079600: goto loc_88079600;
		case 0x880796A4: goto loc_880796A4;
		case 0x880796AC: goto loc_880796AC;
		case 0x880796F4: goto loc_880796F4;
		case 0x88079794: goto loc_88079794;
		case 0x8807979C: goto loc_8807979C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880794A8;
	__savegprlr_20(ctx, base);
loc_880794A8:
	// stfd f30,-120(r1)
	ctx.current_instruction = 0x880794A8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	ctx.current_instruction = 0x880794AC;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880794B0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880794B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r4,2800(r3)
	ctx.current_instruction = 0x880794C0;
	REX_STORE_U32(ctx.r3.u32 + 2800, ctx.r4.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r5,672(r3)
	ctx.current_instruction = 0x880794C8;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r5.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r9,2272(r3)
	ctx.current_instruction = 0x880794D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r5,676(r3)
	ctx.current_instruction = 0x880794D8;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1560(r3)
	ctx.current_instruction = 0x880794E0;
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r6,1424(r3)
	ctx.current_instruction = 0x880794E8;
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r6.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,8056(r3)
	ctx.current_instruction = 0x880794F0;
	REX_STORE_U32(ctx.r3.u32 + 8056, ctx.r8.u32);
	// beq cr6,0x8807953c
	if (ctx.cr6.eq) goto loc_8807953C;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880794F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079534
	if (ctx.cr6.eq) goto loc_88079534;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x88079504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079534
	if (ctx.cr6.eq) goto loc_88079534;
	// lwz r11,28136(r3)
	ctx.current_instruction = 0x88079510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88079534
	if (!ctx.cr6.eq) goto loc_88079534;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x8807951C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r11,2268(r3)
	ctx.current_instruction = 0x88079520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2268);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2264(r3)
	ctx.current_instruction = 0x8807952C;
	REX_STORE_U32(ctx.r3.u32 + 2264, ctx.r9.u32);
	// b 0x8807953c
	goto loc_8807953C;
loc_88079534:
	// lwz r11,2268(r31)
	ctx.current_instruction = 0x88079534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// stw r11,2264(r31)
	ctx.current_instruction = 0x88079538;
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r11.u32);
loc_8807953C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8807957c
	if (ctx.cr6.eq) goto loc_8807957C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8807957c
	if (ctx.cr6.eq) goto loc_8807957C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x88079564
	if (!ctx.cr6.eq) goto loc_88079564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88077a88
	ctx.lr = 0x88079560;
	sub_88077A88(ctx, base);
loc_88079560:
	// b 0x88079584
	goto loc_88079584;
loc_88079564:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x88079584
	if (!ctx.cr6.eq) goto loc_88079584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88077da0
	ctx.lr = 0x88079578;
	sub_88077DA0(ctx, base);
loc_88079578:
	// b 0x88079584
	goto loc_88079584;
loc_8807957C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079088
	ctx.lr = 0x88079584;
	sub_88079088(ctx, base);
loc_88079584:
	// lwz r11,7140(r31)
	ctx.current_instruction = 0x88079584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// stw r11,0(r29)
	ctx.current_instruction = 0x88079588;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807958C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880796ac
	if (ctx.cr6.eq) goto loc_880796AC;
	// lwz r10,7140(r31)
	ctx.current_instruction = 0x88079598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,7144(r31)
	ctx.current_instruction = 0x880795A0;
	REX_STORE_U32(ctx.r31.u32 + 7144, ctx.r10.u32);
	// beq cr6,0x880796ac
	if (ctx.cr6.eq) goto loc_880796AC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880796ac
	if (ctx.cr6.eq) goto loc_880796AC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,31544(r31)
	ctx.current_instruction = 0x880795B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// li r9,4
	ctx.r9.s64 = 4;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r5,2800(r31)
	ctx.current_instruction = 0x880795CC;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r5.u32);
	// beq cr6,0x880795e4
	if (ctx.cr6.eq) goto loc_880795E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9370
	ctx.lr = 0x880795E0;
	sub_880E9370(ctx, base);
loc_880795E0:
	// b 0x880795f8
	goto loc_880795F8;
loc_880795E4:
	// lwz r11,2208(r31)
	ctx.current_instruction = 0x880795E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880795f8
	if (ctx.cr6.eq) goto loc_880795F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9310
	ctx.lr = 0x880795F8;
	sub_880E9310(ctx, base);
loc_880795F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880780a0
	ctx.lr = 0x88079600;
	sub_880780A0(ctx, base);
loc_88079600:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x88079600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079634
	if (ctx.cr6.eq) goto loc_88079634;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807960C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079634
	if (ctx.cr6.eq) goto loc_88079634;
	// lwz r11,28136(r31)
	ctx.current_instruction = 0x88079618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88079634
	if (!ctx.cr6.eq) goto loc_88079634;
	// lwz r11,2296(r31)
	ctx.current_instruction = 0x88079624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2296);
	// lwz r10,2300(r31)
	ctx.current_instruction = 0x88079628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2300);
	// stw r11,2288(r31)
	ctx.current_instruction = 0x8807962C;
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r11.u32);
	// stw r10,2280(r31)
	ctx.current_instruction = 0x88079630;
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r10.u32);
loc_88079634:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x88079634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880796a4
	if (!ctx.cr6.eq) goto loc_880796A4;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88079640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880796a4
	if (!ctx.cr6.eq) goto loc_880796A4;
	// lwz r11,20256(r31)
	ctx.current_instruction = 0x8807964C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// lfd f0,8040(r31)
	ctx.current_instruction = 0x88079650;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 8040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079684
	if (ctx.cr6.eq) goto loc_88079684;
	// lfd f13,688(r31)
	ctx.current_instruction = 0x8807965C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x880796a4
	if (!ctx.cr6.lt) goto loc_880796A4;
	// lwz r11,8028(r31)
	ctx.current_instruction = 0x88079668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8028);
	// stfd f0,688(r31)
	ctx.current_instruction = 0x8807966C;
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f0.u64);
	// lwz r10,8032(r31)
	ctx.current_instruction = 0x88079670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8032);
	// stw r11,672(r31)
	ctx.current_instruction = 0x88079674;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r11,676(r31)
	ctx.current_instruction = 0x88079678;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r10,1424(r31)
	ctx.current_instruction = 0x8807967C;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// b 0x880796a4
	goto loc_880796A4;
loc_88079684:
	// lwz r11,8028(r31)
	ctx.current_instruction = 0x88079684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8028);
	// stfd f0,688(r31)
	ctx.current_instruction = 0x88079688;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f0.u64);
	// lwz r10,8032(r31)
	ctx.current_instruction = 0x8807968C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8032);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,672(r31)
	ctx.current_instruction = 0x88079694;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r11,676(r31)
	ctx.current_instruction = 0x88079698;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r10,1424(r31)
	ctx.current_instruction = 0x8807969C;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// bl 0x880e2ce8
	ctx.lr = 0x880796A4;
	sub_880E2CE8(ctx, base);
loc_880796A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079088
	ctx.lr = 0x880796AC;
	sub_88079088(ctx, base);
loc_880796AC:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880796AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// stw r11,0(r28)
	ctx.current_instruction = 0x880796B0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x880796B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880796B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x880796BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.u64 = static_cast<uint64_t>(39) - ctx.r9.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r27)
	ctx.current_instruction = 0x880796CC;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// lwz r6,28568(r31)
	ctx.current_instruction = 0x880796D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8807993c
	if (ctx.cr6.eq) goto loc_8807993C;
	// lis r30,-30680
	ctx.r30.s64 = -2010644480;
	// lwz r11,18436(r30)
	ctx.current_instruction = 0x880796E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880796fc
	if (!ctx.cr6.eq) goto loc_880796FC;
	// stw r11,18436(r30)
	ctx.current_instruction = 0x880796EC;
	REX_STORE_U32(ctx.r30.u32 + 18436, ctx.r11.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x880796F4;
	sub_881EF4A8(ctx, base);
loc_880796F4:
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18436(r30)
	ctx.current_instruction = 0x880796F8;
	REX_STORE_U32(ctx.r30.u32 + 18436, ctx.r11.u32);
loc_880796FC:
	// lwz r10,30160(r31)
	ctx.current_instruction = 0x880796FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30160);
	// lwz r9,30156(r31)
	ctx.current_instruction = 0x88079700;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30156);
	// lwz r7,30168(r31)
	ctx.current_instruction = 0x88079704;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30168);
	// lwz r6,30164(r31)
	ctx.current_instruction = 0x88079708;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30164);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,30152(r31)
	ctx.current_instruction = 0x88079710;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30152);
	// lwz r5,30176(r31)
	ctx.current_instruction = 0x88079714;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 30176);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x8807971C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// lwz r10,30172(r31)
	ctx.current_instruction = 0x88079720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30172);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,30160(r31)
	ctx.current_instruction = 0x88079728;
	REX_STORE_U32(ctx.r31.u32 + 30160, ctx.r9.u32);
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r7,30168(r31)
	ctx.current_instruction = 0x88079730;
	REX_STORE_U32(ctx.r31.u32 + 30168, ctx.r7.u32);
	// stw r8,30152(r31)
	ctx.current_instruction = 0x88079734;
	REX_STORE_U32(ctx.r31.u32 + 30152, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,30176(r31)
	ctx.current_instruction = 0x8807973C;
	REX_STORE_U32(ctx.r31.u32 + 30176, ctx.r6.u32);
	// beq cr6,0x880797a8
	if (ctx.cr6.eq) goto loc_880797A8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r30,r31,28676
	ctx.r30.s64 = ctx.r31.s64 + 28676;
	// li r29,73
	ctx.r29.s64 = 73;
	// lfd f30,12296(r11)
	ctx.current_instruction = 0x88079754;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 12296);
	// lfd f31,1488(r10)
	ctx.current_instruction = 0x88079758;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
loc_8807975C:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8807975C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,30148(r31)
	ctx.current_instruction = 0x88079760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,88(r1)
	ctx.current_instruction = 0x8807976C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r8,80(r1)
	ctx.current_instruction = 0x88079770;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88079774;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x8807977C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8807979c
	if (ctx.cr6.eq) goto loc_8807979C;
	// bl 0x881ef2e8
	ctx.lr = 0x88079794;
	sub_881EF2E8(ctx, base);
loc_88079794:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x8807979C;
	sub_881EF2E8(ctx, base);
loc_8807979C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8807975c
	if (!ctx.cr0.eq) goto loc_8807975C;
loc_880797A8:
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r31,29408
	ctx.r11.s64 = ctx.r31.s64 + 29408;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880797B4:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880797B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-732(r11)
	ctx.current_instruction = 0x880797B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -732);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x880797BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,-728(r11)
	ctx.current_instruction = 0x880797C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -728);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,12(r11)
	ctx.current_instruction = 0x880797C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,-724(r11)
	ctx.current_instruction = 0x880797CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -724);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r4,16(r11)
	ctx.current_instruction = 0x880797D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,-720(r11)
	ctx.current_instruction = 0x880797D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -720);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,20(r11)
	ctx.current_instruction = 0x880797E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,-716(r11)
	ctx.current_instruction = 0x880797E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -716);
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r10,4(r11)
	ctx.current_instruction = 0x880797EC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// add r10,r6,r30
	ctx.r10.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stw r9,8(r11)
	ctx.current_instruction = 0x880797F4;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	ctx.current_instruction = 0x880797F8;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,16(r11)
	ctx.current_instruction = 0x880797FC;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stwu r10,20(r11)
	ctx.current_instruction = 0x88079800;
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880797b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880797B4;
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x88079808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807980C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88079810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x88079824
	if (!ctx.cr6.eq) goto loc_88079824;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x88079834
	goto loc_88079834;
loc_88079824:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_88079834:
	// lwz r7,28624(r31)
	ctx.current_instruction = 0x88079834;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r8,28620(r31)
	ctx.current_instruction = 0x88079838;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r9,28628(r31)
	ctx.current_instruction = 0x8807983C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r6,30196(r31)
	ctx.current_instruction = 0x88079844;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30196);
	// lwz r10,28636(r31)
	ctx.current_instruction = 0x88079848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// lwz r25,28656(r31)
	ctx.current_instruction = 0x8807984C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 28656);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r24,r6,r5
	ctx.r24.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r6,28652(r31)
	ctx.current_instruction = 0x88079858;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28652);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r26,28588(r31)
	ctx.current_instruction = 0x88079860;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 28588);
	// add r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 + ctx.r25.u64;
	// lwz r8,28672(r31)
	ctx.current_instruction = 0x88079868;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28672);
	// add r22,r11,r6
	ctx.r22.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,28664(r31)
	ctx.current_instruction = 0x88079870;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28664);
	// add r23,r10,r8
	ctx.r23.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,28572(r31)
	ctx.current_instruction = 0x88079878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28572);
	// add r21,r9,r6
	ctx.r21.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r27,28592(r31)
	ctx.current_instruction = 0x88079880;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28592);
	// lwz r6,28576(r31)
	ctx.current_instruction = 0x88079884;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28576);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r28,28596(r31)
	ctx.current_instruction = 0x8807988C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 28596);
	// lwz r29,28600(r31)
	ctx.current_instruction = 0x88079890;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28600);
	// add r27,r6,r27
	ctx.r27.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lwz r8,28580(r31)
	ctx.current_instruction = 0x88079898;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r10,28584(r31)
	ctx.current_instruction = 0x8807989C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28584);
	// lwz r5,28660(r31)
	ctx.current_instruction = 0x880798A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28660);
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lwz r30,28644(r31)
	ctx.current_instruction = 0x880798A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28644);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r6,28608(r31)
	ctx.current_instruction = 0x880798B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28608);
	// add r20,r7,r5
	ctx.r20.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r3,28648(r31)
	ctx.current_instruction = 0x880798B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28648);
	// lwz r4,28640(r31)
	ctx.current_instruction = 0x880798BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28640);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwz r8,28612(r31)
	ctx.current_instruction = 0x880798C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28612);
	// lwz r10,28604(r31)
	ctx.current_instruction = 0x880798C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lwz r5,28668(r31)
	ctx.current_instruction = 0x880798CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28668);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r6,28632(r31)
	ctx.current_instruction = 0x880798D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r7,30184(r31)
	ctx.current_instruction = 0x880798DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30184);
	// lwz r9,30192(r31)
	ctx.current_instruction = 0x880798E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30192);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r8,30180(r31)
	ctx.current_instruction = 0x880798E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30180);
	// lwz r10,30188(r31)
	ctx.current_instruction = 0x880798EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30188);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r24,30196(r31)
	ctx.current_instruction = 0x880798F4;
	REX_STORE_U32(ctx.r31.u32 + 30196, ctx.r24.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,28616(r31)
	ctx.current_instruction = 0x880798FC;
	REX_STORE_U32(ctx.r31.u32 + 28616, ctx.r11.u32);
	// stw r26,28588(r31)
	ctx.current_instruction = 0x88079900;
	REX_STORE_U32(ctx.r31.u32 + 28588, ctx.r26.u32);
	// stw r27,28592(r31)
	ctx.current_instruction = 0x88079904;
	REX_STORE_U32(ctx.r31.u32 + 28592, ctx.r27.u32);
	// stw r28,28596(r31)
	ctx.current_instruction = 0x88079908;
	REX_STORE_U32(ctx.r31.u32 + 28596, ctx.r28.u32);
	// stw r29,28600(r31)
	ctx.current_instruction = 0x8807990C;
	REX_STORE_U32(ctx.r31.u32 + 28600, ctx.r29.u32);
	// stw r30,28644(r31)
	ctx.current_instruction = 0x88079910;
	REX_STORE_U32(ctx.r31.u32 + 28644, ctx.r30.u32);
	// stw r3,28648(r31)
	ctx.current_instruction = 0x88079914;
	REX_STORE_U32(ctx.r31.u32 + 28648, ctx.r3.u32);
	// stw r4,28640(r31)
	ctx.current_instruction = 0x88079918;
	REX_STORE_U32(ctx.r31.u32 + 28640, ctx.r4.u32);
	// stw r22,28652(r31)
	ctx.current_instruction = 0x8807991C;
	REX_STORE_U32(ctx.r31.u32 + 28652, ctx.r22.u32);
	// stw r25,28656(r31)
	ctx.current_instruction = 0x88079920;
	REX_STORE_U32(ctx.r31.u32 + 28656, ctx.r25.u32);
	// stw r20,28660(r31)
	ctx.current_instruction = 0x88079924;
	REX_STORE_U32(ctx.r31.u32 + 28660, ctx.r20.u32);
	// stw r21,28664(r31)
	ctx.current_instruction = 0x88079928;
	REX_STORE_U32(ctx.r31.u32 + 28664, ctx.r21.u32);
	// stw r23,28672(r31)
	ctx.current_instruction = 0x8807992C;
	REX_STORE_U32(ctx.r31.u32 + 28672, ctx.r23.u32);
	// stw r6,28668(r31)
	ctx.current_instruction = 0x88079930;
	REX_STORE_U32(ctx.r31.u32 + 28668, ctx.r6.u32);
	// stw r5,30184(r31)
	ctx.current_instruction = 0x88079934;
	REX_STORE_U32(ctx.r31.u32 + 30184, ctx.r5.u32);
	// stw r10,30192(r31)
	ctx.current_instruction = 0x88079938;
	REX_STORE_U32(ctx.r31.u32 + 30192, ctx.r10.u32);
loc_8807993C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88079940;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88079944;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88091928) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88091928;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88091928) {
			switch (rex_dispatch_address) {
				case 0x88091930:
				case 0x88091B24:
				case 0x88091B3C:
				case 0x88091BD4:
				case 0x88091BEC:
				case 0x88091C8C:
				case 0x88091CA4:
				case 0x88091D84:
				case 0x88091D9C:
				case 0x88091E34:
				case 0x88091E4C:
				case 0x88091EE8:
				case 0x88091F00:
				case 0x88091FE0:
				case 0x88091FF8:
				case 0x880920B4:
				case 0x880920CC:
				case 0x880921A0:
				case 0x880921B8:
				case 0x88092270:
				case 0x88092288:
				case 0x88092370:
				case 0x88092388:
				case 0x88092420:
				case 0x88092438:
				case 0x880924D8:
				case 0x880924F0:
				case 0x8809259C:
				case 0x880925B4:
				case 0x8809264C:
				case 0x88092664:
				case 0x88092718:
				case 0x88092730:
				case 0x880927DC:
				case 0x880927F4:
				case 0x880928A4:
				case 0x880928BC:
				case 0x880929A4:
				case 0x880929BC:
				case 0x88092A54:
				case 0x88092A6C:
				case 0x88092B10:
				case 0x88092B28:
				case 0x88092BD4:
				case 0x88092BEC:
				case 0x88092C84:
				case 0x88092C9C:
				case 0x88092D58:
				case 0x88092D70:
				case 0x88092E1C:
				case 0x88092E34:
				case 0x88092EE4:
				case 0x88092EFC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88091928;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88091930: goto loc_88091930;
		case 0x88091B24: goto loc_88091B24;
		case 0x88091B3C: goto loc_88091B3C;
		case 0x88091BD4: goto loc_88091BD4;
		case 0x88091BEC: goto loc_88091BEC;
		case 0x88091C8C: goto loc_88091C8C;
		case 0x88091CA4: goto loc_88091CA4;
		case 0x88091D84: goto loc_88091D84;
		case 0x88091D9C: goto loc_88091D9C;
		case 0x88091E34: goto loc_88091E34;
		case 0x88091E4C: goto loc_88091E4C;
		case 0x88091EE8: goto loc_88091EE8;
		case 0x88091F00: goto loc_88091F00;
		case 0x88091FE0: goto loc_88091FE0;
		case 0x88091FF8: goto loc_88091FF8;
		case 0x880920B4: goto loc_880920B4;
		case 0x880920CC: goto loc_880920CC;
		case 0x880921A0: goto loc_880921A0;
		case 0x880921B8: goto loc_880921B8;
		case 0x88092270: goto loc_88092270;
		case 0x88092288: goto loc_88092288;
		case 0x88092370: goto loc_88092370;
		case 0x88092388: goto loc_88092388;
		case 0x88092420: goto loc_88092420;
		case 0x88092438: goto loc_88092438;
		case 0x880924D8: goto loc_880924D8;
		case 0x880924F0: goto loc_880924F0;
		case 0x8809259C: goto loc_8809259C;
		case 0x880925B4: goto loc_880925B4;
		case 0x8809264C: goto loc_8809264C;
		case 0x88092664: goto loc_88092664;
		case 0x88092718: goto loc_88092718;
		case 0x88092730: goto loc_88092730;
		case 0x880927DC: goto loc_880927DC;
		case 0x880927F4: goto loc_880927F4;
		case 0x880928A4: goto loc_880928A4;
		case 0x880928BC: goto loc_880928BC;
		case 0x880929A4: goto loc_880929A4;
		case 0x880929BC: goto loc_880929BC;
		case 0x88092A54: goto loc_88092A54;
		case 0x88092A6C: goto loc_88092A6C;
		case 0x88092B10: goto loc_88092B10;
		case 0x88092B28: goto loc_88092B28;
		case 0x88092BD4: goto loc_88092BD4;
		case 0x88092BEC: goto loc_88092BEC;
		case 0x88092C84: goto loc_88092C84;
		case 0x88092C9C: goto loc_88092C9C;
		case 0x88092D58: goto loc_88092D58;
		case 0x88092D70: goto loc_88092D70;
		case 0x88092E1C: goto loc_88092E1C;
		case 0x88092E34: goto loc_88092E34;
		case 0x88092EE4: goto loc_88092EE4;
		case 0x88092EFC: goto loc_88092EFC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88091930;
	__savegprlr_14(ctx, base);
loc_88091930:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88091930;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r8,396(r1)
	ctx.current_instruction = 0x88091938;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r24,324(r1)
	ctx.current_instruction = 0x8809193C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,340(r1)
	ctx.current_instruction = 0x88091948;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r28,332(r1)
	ctx.current_instruction = 0x8809194C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r16,0(r8)
	ctx.current_instruction = 0x88091958;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,0
	ctx.r14.s64 = 0;
	// neg r3,r24
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880919cc
	if (ctx.cr6.eq) goto loc_880919CC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880919cc
	if (ctx.cr6.gt) goto loc_880919CC;
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
loc_880919A4:
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r27
	ctx.current_instruction = 0x880919AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880919c4
	if (!ctx.cr6.lt) goto loc_880919C4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_880919C4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x880919a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880919A4;
loc_880919CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88091a00
	if (ctx.cr6.eq) goto loc_88091A00;
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
	ctx.current_instruction = 0x880919E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88091a00
	if (!ctx.cr6.lt) goto loc_88091A00;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88091A00:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88091a34
	if (ctx.cr6.eq) goto loc_88091A34;
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
	ctx.current_instruction = 0x88091A1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88091a34
	if (!ctx.cr6.lt) goto loc_88091A34;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88091A34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88091a8c
	if (ctx.cr6.eq) goto loc_88091A8C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x88091a8c
	if (ctx.cr6.gt) goto loc_88091A8C;
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
loc_88091A64:
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88091A6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88091a84
	if (!ctx.cr6.lt) goto loc_88091A84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_88091A84:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x88091a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88091A64;
loc_88091A8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88092934
	if (ctx.cr6.eq) goto loc_88092934;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88092300
	if (ctx.cr6.eq) goto loc_88092300;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x88091f74
	if (!ctx.cr6.eq) goto loc_88091F74;
	// lwz r26,388(r1)
	ctx.current_instruction = 0x88091AA4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x88091d18
	if (!ctx.cr6.eq) goto loc_88091D18;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88091AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r25,-2
	ctx.r25.s64 = -2;
	// lwz r21,372(r1)
	ctx.current_instruction = 0x88091AB8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r11,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r11.u64;
	// lwz r20,380(r1)
	ctx.current_instruction = 0x88091AC0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r10,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 31;
	// lwz r27,348(r1)
	ctx.current_instruction = 0x88091AC8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// xor r9,r21,r10
	ctx.r9.u64 = ctx.r21.u64 ^ ctx.r10.u64;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// subf r22,r10,r9
	ctx.r22.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
loc_88091AE4:
	// add r11,r25,r20
	ctx.r11.u64 = ctx.r25.u64 + ctx.r20.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r29,r25,30
	ctx.r29.u64 = ctx.r25.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88091AFC:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091B08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091B10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091B24:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091B3C:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091b84
	if (ctx.cr6.gt) goto loc_88091B84;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88091b84
	if (ctx.cr6.gt) goto loc_88091B84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091B64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091B68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091B74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88091B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091b8c
	goto loc_88091B8C;
loc_88091B84:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091B8C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091ba4
	if (!ctx.cr6.lt) goto loc_88091BA4;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_88091BA4:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88091afc
	if (ctx.cr0.lt) goto loc_88091AFC;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091BB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091BC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091BD4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091BEC:
	// cmpwi cr6,r22,158
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 158, ctx.xer);
	// bgt cr6,0x88091c24
	if (ctx.cr6.gt) goto loc_88091C24;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88091c24
	if (ctx.cr6.gt) goto loc_88091C24;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091C04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091C08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88091C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88091C18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091c2c
	goto loc_88091C2C;
loc_88091C24:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091C2C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091c44
	if (!ctx.cr6.lt) goto loc_88091C44;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_88091C44:
	// addic. r25,r25,1
	ctx.xer.ca = ctx.r25.u32 > 4294967294;
	ctx.r25.s64 = ctx.r25.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x88091ae4
	if (ctx.cr0.lt) goto loc_88091AE4;
	// srawi r10,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 31;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88091C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// xor r9,r20,r10
	ctx.r9.u64 = ctx.r20.u64 ^ ctx.r10.u64;
	// add r29,r23,r11
	ctx.r29.u64 = ctx.r23.u64 + ctx.r11.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88091C64:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091C70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091C78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091C8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091C8C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091CA4:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091cec
	if (ctx.cr6.gt) goto loc_88091CEC;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88091cec
	if (ctx.cr6.gt) goto loc_88091CEC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091CCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091CD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091CDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88091CE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091cf4
	goto loc_88091CF4;
loc_88091CEC:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091CF4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091d0c
	if (!ctx.cr6.lt) goto loc_88091D0C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88091D0C:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88091c64
	if (ctx.cr0.lt) goto loc_88091C64;
	// b 0x88092f70
	goto loc_88092F70;
loc_88091D18:
	// lwz r22,372(r1)
	ctx.current_instruction = 0x88091D18;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r21,r20,-1
	ctx.r21.s64 = ctx.r20.s64 + -1;
	// lwz r19,380(r1)
	ctx.current_instruction = 0x88091D20;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r25,1
	ctx.r25.s64 = 1;
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// lwz r28,348(r1)
	ctx.current_instruction = 0x88091D2C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r20,r21,1
	ctx.r20.s64 = ctx.r21.s64 + 1;
	// xor r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r23,r11,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
loc_88091D44:
	// add r11,r25,r19
	ctx.r11.u64 = ctx.r25.u64 + ctx.r19.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r29,r25,30
	ctx.r29.u64 = ctx.r25.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r27,r10,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88091D5C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091D68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091D70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091D84:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091D9C:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091de4
	if (ctx.cr6.gt) goto loc_88091DE4;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88091de4
	if (ctx.cr6.gt) goto loc_88091DE4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091DC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091DC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091DD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88091DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091dec
	goto loc_88091DEC;
loc_88091DE4:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091DEC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091e04
	if (!ctx.cr6.lt) goto loc_88091E04;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_88091E04:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88091d5c
	if (ctx.cr0.lt) goto loc_88091D5C;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091E18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091E20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091E34:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091E4C:
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x88091e84
	if (ctx.cr6.gt) goto loc_88091E84;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88091e84
	if (ctx.cr6.gt) goto loc_88091E84;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091E64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091E68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88091E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88091E78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091e8c
	goto loc_88091E8C;
loc_88091E84:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091E8C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091ea4
	if (!ctx.cr6.lt) goto loc_88091EA4;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_88091EA4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x88091d44
	if (!ctx.cr6.gt) goto loc_88091D44;
	// srawi r11,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 31;
	// li r30,-2
	ctx.r30.s64 = -2;
	// xor r10,r19,r11
	ctx.r10.u64 = ctx.r19.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88091EC0:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091ECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091ED4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091EE8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091F00:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091f48
	if (ctx.cr6.gt) goto loc_88091F48;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88091f48
	if (ctx.cr6.gt) goto loc_88091F48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88091F28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88091F2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091F38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88091F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091f50
	goto loc_88091F50;
loc_88091F48:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091F50:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091f68
	if (!ctx.cr6.lt) goto loc_88091F68;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88091F68:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88091ec0
	if (ctx.cr0.lt) goto loc_88091EC0;
	// b 0x88092f70
	goto loc_88092F70;
loc_88091F74:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x88092144
	if (!ctx.cr6.eq) goto loc_88092144;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88091F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r28,-2
	ctx.r28.s64 = -2;
	// lwz r24,388(r1)
	ctx.current_instruction = 0x88091F84;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// subf r25,r11,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r11.u64;
	// lwz r21,380(r1)
	ctx.current_instruction = 0x88091F8C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r22,372(r1)
	ctx.current_instruction = 0x88091F94;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r27,348(r1)
	ctx.current_instruction = 0x88091F98;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r23,r11,6848
	ctx.r23.s64 = ctx.r11.s64 + 6848;
loc_88091FA0:
	// add r11,r28,r21
	ctx.r11.u64 = ctx.r28.u64 + ctx.r21.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r29,r28,30
	ctx.r29.u64 = ctx.r28.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r26,r10,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88091FB8:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091FC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091FCC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091FE0:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88091FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091FF8:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092040
	if (ctx.cr6.gt) goto loc_88092040;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88092040
	if (ctx.cr6.gt) goto loc_88092040;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r23
	ctx.current_instruction = 0x88092020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwzx r8,r10,r23
	ctx.current_instruction = 0x88092024;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.current_instruction = 0x88092030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.current_instruction = 0x88092034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092048
	goto loc_88092048;
loc_88092040:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x88092040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092048:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092060
	if (!ctx.cr6.lt) goto loc_88092060;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_88092060:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88091fb8
	if (!ctx.cr6.gt) goto loc_88091FB8;
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x88091fa0
	if (ctx.cr0.lt) goto loc_88091FA0;
	// srawi r10,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 31;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88092078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r9,r21,r10
	ctx.r9.u64 = ctx.r21.u64 ^ ctx.r10.u64;
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8809208C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809208C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092098;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880920A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880920B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880920B4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880920CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880920CC:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092114
	if (ctx.cr6.gt) goto loc_88092114;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88092114
	if (ctx.cr6.gt) goto loc_88092114;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r23
	ctx.current_instruction = 0x880920F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwzx r8,r10,r23
	ctx.current_instruction = 0x880920F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.current_instruction = 0x88092104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.current_instruction = 0x88092108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809211c
	goto loc_8809211C;
loc_88092114:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x88092114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809211C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092134
	if (!ctx.cr6.lt) goto loc_88092134;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88092134:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8809208c
	if (!ctx.cr6.gt) goto loc_8809208C;
	// b 0x88092f70
	goto loc_88092F70;
loc_88092144:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r25,388(r1)
	ctx.current_instruction = 0x88092148;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r22,380(r1)
	ctx.current_instruction = 0x8809214C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r23,372(r1)
	ctx.current_instruction = 0x88092154;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
	// lwz r28,348(r1)
	ctx.current_instruction = 0x8809215C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_88092160:
	// add r11,r26,r22
	ctx.r11.u64 = ctx.r26.u64 + ctx.r22.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r29,r26,30
	ctx.r29.u64 = ctx.r26.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r27,r10,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88092178:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092184;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809218C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880921A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880921A0:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880921B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880921B8:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092200
	if (ctx.cr6.gt) goto loc_88092200;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88092200
	if (ctx.cr6.gt) goto loc_88092200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x880921E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x880921E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r25
	ctx.current_instruction = 0x880921F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r11,r6,r25
	ctx.current_instruction = 0x880921F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092208
	goto loc_88092208;
loc_88092200:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x88092200;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092208:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092220
	if (!ctx.cr6.lt) goto loc_88092220;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
loc_88092220:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88092178
	if (!ctx.cr6.gt) goto loc_88092178;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// ble cr6,0x88092160
	if (!ctx.cr6.gt) goto loc_88092160;
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88092248:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092254;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809225C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092270:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092288:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880922d0
	if (ctx.cr6.gt) goto loc_880922D0;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880922d0
	if (ctx.cr6.gt) goto loc_880922D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x880922B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x880922B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r25
	ctx.current_instruction = 0x880922C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r11,r6,r25
	ctx.current_instruction = 0x880922C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880922d8
	goto loc_880922D8;
loc_880922D0:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x880922D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880922D8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880922f0
	if (!ctx.cr6.lt) goto loc_880922F0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_880922F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88092248
	if (!ctx.cr6.gt) goto loc_88092248;
	// b 0x88092f70
	goto loc_88092F70;
loc_88092300:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r26,388(r1)
	ctx.current_instruction = 0x88092304;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r23,380(r1)
	ctx.current_instruction = 0x88092308;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lwz r24,372(r1)
	ctx.current_instruction = 0x88092310;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
	// lwz r27,348(r1)
	ctx.current_instruction = 0x88092318;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bne cr6,0x880926cc
	if (!ctx.cr6.eq) goto loc_880926CC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8809249c
	if (ctx.cr6.eq) goto loc_8809249C;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x8809232C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subf r11,r9,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r9.u64;
	// xor r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// subf r28,r8,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_88092348:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,3
	ctx.r8.s64 = 3;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092354;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809235C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092370:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092388:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880923d0
	if (ctx.cr6.gt) goto loc_880923D0;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x880923d0
	if (ctx.cr6.gt) goto loc_880923D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880923B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880923B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x880923C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x880923C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880923d8
	goto loc_880923D8;
loc_880923D0:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x880923D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880923D8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880923f0
	if (!ctx.cr6.lt) goto loc_880923F0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,-1
	ctx.r14.s64 = -1;
loc_880923F0:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88092348
	if (ctx.cr0.lt) goto loc_88092348;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880923F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092404;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809240C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092420:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092438:
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// xor r9,r24,r10
	ctx.r9.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809247c
	if (ctx.cr6.gt) goto loc_8809247C;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8809247c
	if (ctx.cr6.gt) goto loc_8809247C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x8809245C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88092460;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x8809246C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88092470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092484
	goto loc_88092484;
loc_8809247C:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809247C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092484:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8809249c
	if (!ctx.cr6.lt) goto loc_8809249C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,-1
	ctx.r14.s64 = -1;
loc_8809249C:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// addi r28,r20,-1
	ctx.r28.s64 = ctx.r20.s64 + -1;
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880924B0:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880924B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880924BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880924C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880924D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880924D8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880924F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880924F0:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092538
	if (ctx.cr6.gt) goto loc_88092538;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88092538
	if (ctx.cr6.gt) goto loc_88092538;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092518;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8809251C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88092528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809252C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092540
	goto loc_88092540;
loc_88092538:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092540:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092558
	if (!ctx.cr6.lt) goto loc_88092558;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88092558:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x880924b0
	if (ctx.cr0.lt) goto loc_880924B0;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88092574:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092588;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809259C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809259C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880925B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880925B4:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880925fc
	if (ctx.cr6.gt) goto loc_880925FC;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880925fc
	if (ctx.cr6.gt) goto loc_880925FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880925DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880925E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x880925EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x880925F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092604
	goto loc_88092604;
loc_880925FC:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x880925FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092604:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8809261c
	if (!ctx.cr6.lt) goto loc_8809261C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,1
	ctx.r14.s64 = 1;
loc_8809261C:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88092574
	if (ctx.cr0.lt) goto loc_88092574;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092630;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092638;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809264C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809264C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092664:
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// xor r9,r24,r10
	ctx.r9.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880926a8
	if (ctx.cr6.gt) goto loc_880926A8;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880926a8
	if (ctx.cr6.gt) goto loc_880926A8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092688;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8809268C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88092698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809269C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880926b0
	goto loc_880926B0;
loc_880926A8:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x880926A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880926B0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092f70
	if (!ctx.cr6.lt) goto loc_88092F70;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,1
	ctx.r14.s64 = 1;
	// b 0x88092f70
	goto loc_88092F70;
loc_880926CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880927a4
	if (ctx.cr6.eq) goto loc_880927A4;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x880926D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subf r29,r10,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r10.u64;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_880926F0:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880926F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,3
	ctx.r8.s64 = 3;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880926FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092704;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092718:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092730:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092778
	if (ctx.cr6.gt) goto loc_88092778;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88092778
	if (ctx.cr6.gt) goto loc_88092778;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8809275C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88092768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809276C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092780
	goto loc_88092780;
loc_88092778:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092780:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092798
	if (!ctx.cr6.lt) goto loc_88092798;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,-1
	ctx.r14.s64 = -1;
loc_88092798:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x880926f0
	if (!ctx.cr6.gt) goto loc_880926F0;
loc_880927A4:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880927B4:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880927B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880927C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880927C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880927DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880927DC:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880927F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880927F4:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809283c
	if (ctx.cr6.gt) goto loc_8809283C;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8809283c
	if (ctx.cr6.gt) goto loc_8809283C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x8809281C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88092820;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x8809282C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88092830;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092844
	goto loc_88092844;
loc_8809283C:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809283C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092844:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8809285c
	if (!ctx.cr6.lt) goto loc_8809285C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_8809285C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x880927b4
	if (!ctx.cr6.gt) goto loc_880927B4;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8809287C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809287C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092888;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092890;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880928A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880928A4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880928BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880928BC:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092904
	if (ctx.cr6.gt) goto loc_88092904;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88092904
	if (ctx.cr6.gt) goto loc_88092904;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880928E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880928E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x880928F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x880928F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809290c
	goto loc_8809290C;
loc_88092904:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809290C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092924
	if (!ctx.cr6.lt) goto loc_88092924;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,1
	ctx.r14.s64 = 1;
loc_88092924:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8809287c
	if (!ctx.cr6.gt) goto loc_8809287C;
	// b 0x88092f70
	goto loc_88092F70;
loc_88092934:
	// lwz r26,388(r1)
	ctx.current_instruction = 0x88092934;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r27,348(r1)
	ctx.current_instruction = 0x8809293C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x88092d04
	if (!ctx.cr6.eq) goto loc_88092D04;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r25,380(r1)
	ctx.current_instruction = 0x8809294C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r23,372(r1)
	ctx.current_instruction = 0x88092950;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
	// beq cr6,0x88092ad0
	if (ctx.cr6.eq) goto loc_88092AD0;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x88092960;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subf r11,r9,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r9.u64;
	// xor r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// subf r29,r8,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_8809297C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809297C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092988;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092990;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880929A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880929A4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880929BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880929BC:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092a04
	if (ctx.cr6.gt) goto loc_88092A04;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092a04
	if (ctx.cr6.gt) goto loc_88092A04;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x880929E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x880929E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x880929F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x880929F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092a0c
	goto loc_88092A0C;
loc_88092A04:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092A0C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092a24
	if (!ctx.cr6.lt) goto loc_88092A24;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092A24:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8809297c
	if (ctx.cr0.lt) goto loc_8809297C;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092A34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092A40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r4,r28
	ctx.r3.u64 = ctx.r4.u64 + ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092A54:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092A6C:
	// srawi r10,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// xor r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// bgt cr6,0x88092ab0
	if (ctx.cr6.gt) goto loc_88092AB0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092ab0
	if (ctx.cr6.gt) goto loc_88092AB0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88092A90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88092A94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092AA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092AA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092ab8
	goto loc_88092AB8;
loc_88092AB0:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092AB8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092ad0
	if (!ctx.cr6.lt) goto loc_88092AD0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88092AD0:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x88092AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// xor r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r28,r10,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r10.u64;
	// subf r29,r11,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_88092AE8:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092AF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092AFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092B10:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092B28:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092b70
	if (ctx.cr6.gt) goto loc_88092B70;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092b70
	if (ctx.cr6.gt) goto loc_88092B70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88092B50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88092B54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092B64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092b78
	goto loc_88092B78;
loc_88092B70:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092B78:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092b90
	if (!ctx.cr6.lt) goto loc_88092B90;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092B90:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88092ae8
	if (ctx.cr0.lt) goto loc_88092AE8;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88092BAC:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092BB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092BC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092BD4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092BEC:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092c34
	if (ctx.cr6.gt) goto loc_88092C34;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092c34
	if (ctx.cr6.gt) goto loc_88092C34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88092C14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88092C18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092C28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092c3c
	goto loc_88092C3C;
loc_88092C34:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092C3C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092c54
	if (!ctx.cr6.lt) goto loc_88092C54;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092C54:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88092bac
	if (ctx.cr0.lt) goto loc_88092BAC;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092C64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092C70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r4,r28
	ctx.r3.u64 = ctx.r4.u64 + ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092C84:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092C9C:
	// srawi r10,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// xor r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// bgt cr6,0x88092ce0
	if (ctx.cr6.gt) goto loc_88092CE0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092ce0
	if (ctx.cr6.gt) goto loc_88092CE0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88092CC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88092CC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092CD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092ce8
	goto loc_88092CE8;
loc_88092CE0:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092CE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092CE8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092f70
	if (!ctx.cr6.lt) goto loc_88092F70;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r14,0
	ctx.r14.s64 = 0;
	// b 0x88092f70
	goto loc_88092F70;
loc_88092D04:
	// lwz r23,380(r1)
	ctx.current_instruction = 0x88092D04;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r22,372(r1)
	ctx.current_instruction = 0x88092D0C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
	// beq cr6,0x88092de4
	if (ctx.cr6.eq) goto loc_88092DE4;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// addi r28,r20,-1
	ctx.r28.s64 = ctx.r20.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// li r30,0
	ctx.r30.s64 = 0;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88092D30:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092D3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092D44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092D58:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092D70:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092db8
	if (ctx.cr6.gt) goto loc_88092DB8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092db8
	if (ctx.cr6.gt) goto loc_88092DB8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092D98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88092D9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092DAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092dc0
	goto loc_88092DC0;
loc_88092DB8:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092DC0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092dd8
	if (!ctx.cr6.lt) goto loc_88092DD8;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092DD8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88092d30
	if (!ctx.cr6.gt) goto loc_88092D30;
loc_88092DE4:
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88092DF4:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092E00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092E08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092E1C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092E34:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092e7c
	if (ctx.cr6.gt) goto loc_88092E7C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092e7c
	if (ctx.cr6.gt) goto loc_88092E7C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092E5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88092E60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092e84
	goto loc_88092E84;
loc_88092E7C:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092E84:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092e9c
	if (!ctx.cr6.lt) goto loc_88092E9C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092E9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88092df4
	if (!ctx.cr6.gt) goto loc_88092DF4;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88092EBC:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88092EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88092EC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88092ED0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88092EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092EE4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88092EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88092EFC:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88092f44
	if (ctx.cr6.gt) goto loc_88092F44;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88092f44
	if (ctx.cr6.gt) goto loc_88092F44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88092F24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88092F28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88092F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88092F38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88092f4c
	goto loc_88092F4C;
loc_88092F44:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88092F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88092F4C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88092f64
	if (!ctx.cr6.lt) goto loc_88092F64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
loc_88092F64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88092ebc
	if (!ctx.cr6.gt) goto loc_88092EBC;
loc_88092F70:
	// lwz r11,404(r1)
	ctx.current_instruction = 0x88092F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x88092F74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r9,420(r1)
	ctx.current_instruction = 0x88092F78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// stw r15,0(r11)
	ctx.current_instruction = 0x88092F7C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r14,0(r10)
	ctx.current_instruction = 0x88092F80;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// stw r18,0(r9)
	ctx.current_instruction = 0x88092F84;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D35F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D35F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D35F0) {
			switch (rex_dispatch_address) {
				case 0x880D35F8:
				case 0x880D3600:
				case 0x880D3868:
				case 0x880D38B0:
				case 0x880D3A48:
				case 0x880D3AA4:
				case 0x880D3C3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D35F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D35F8: goto loc_880D35F8;
		case 0x880D3600: goto loc_880D3600;
		case 0x880D3868: goto loc_880D3868;
		case 0x880D38B0: goto loc_880D38B0;
		case 0x880D3A48: goto loc_880D3A48;
		case 0x880D3AA4: goto loc_880D3AA4;
		case 0x880D3C3C: goto loc_880D3C3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880D35F8;
	__savegprlr_19(ctx, base);
loc_880D35F8:
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef284
	ctx.lr = 0x880D3600;
	__savefpr_27(ctx, base);
loc_880D3600:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880D3600;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880D3604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,352(r3)
	ctx.current_instruction = 0x880D360C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r19,360(r3)
	ctx.current_instruction = 0x880D3614;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,384(r3)
	ctx.current_instruction = 0x880D361C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r20,34(r11)
	ctx.current_instruction = 0x880D3624;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// beq cr6,0x880d3c2c
	if (ctx.cr6.eq) goto loc_880D3C2C;
	// lwz r11,424(r3)
	ctx.current_instruction = 0x880D362C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d363c
	if (ctx.cr6.eq) goto loc_880D363C;
	// li r19,6
	ctx.r19.s64 = 6;
loc_880D363C:
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 6, ctx.xer);
	// bne cr6,0x880d386c
	if (!ctx.cr6.eq) goto loc_880D386C;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x880d386c
	if (!ctx.cr6.eq) goto loc_880D386C;
	// lwz r10,372(r30)
	ctx.current_instruction = 0x880D364C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880D3658;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.current_instruction = 0x880D365C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.current_instruction = 0x880D3660;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	ctx.current_instruction = 0x880D3664;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	ctx.current_instruction = 0x880D3668;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	ctx.current_instruction = 0x880D366C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	ctx.current_instruction = 0x880D3670;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	ctx.current_instruction = 0x880D3674;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	ctx.current_instruction = 0x880D3678;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	ctx.current_instruction = 0x880D367C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	ctx.current_instruction = 0x880D3680;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	ctx.current_instruction = 0x880D3684;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r8)
	ctx.current_instruction = 0x880D3688;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r8)
	ctx.current_instruction = 0x880D368C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x880d37ec
	if (ctx.cr6.lt) goto loc_880D37EC;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_880D3698:
	// lfs f2,16(r29)
	ctx.current_instruction = 0x880D3698;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,20(r29)
	ctx.current_instruction = 0x880D36A0;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f30,12(r29)
	ctx.current_instruction = 0x880D36A8;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	ctx.current_instruction = 0x880D36AC;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r29)
	ctx.current_instruction = 0x880D36B0;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	ctx.current_instruction = 0x880D36B4;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f31,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f31,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f1,f30,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f30,f5,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f30.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f29,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f29.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f29,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f28,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f28,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f27,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,0(r27)
	ctx.current_instruction = 0x880D36DC;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmadds f2,f27,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,4(r27)
	ctx.current_instruction = 0x880D36E4;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f1,44(r29)
	ctx.current_instruction = 0x880D36E8;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,36(r29)
	ctx.current_instruction = 0x880D36EC;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r29)
	ctx.current_instruction = 0x880D36F0;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r29)
	ctx.current_instruction = 0x880D36F4;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,24(r29)
	ctx.current_instruction = 0x880D3700;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,28(r29)
	ctx.current_instruction = 0x880D3708;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,8(r27)
	ctx.current_instruction = 0x880D372C;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,12(r27)
	ctx.current_instruction = 0x880D3734;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f1,68(r29)
	ctx.current_instruction = 0x880D3738;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r29)
	ctx.current_instruction = 0x880D373C;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,56(r29)
	ctx.current_instruction = 0x880D3740;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,64(r29)
	ctx.current_instruction = 0x880D3744;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,48(r29)
	ctx.current_instruction = 0x880D3750;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,52(r29)
	ctx.current_instruction = 0x880D3758;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,16(r27)
	ctx.current_instruction = 0x880D377C;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,20(r27)
	ctx.current_instruction = 0x880D3784;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lfs f1,92(r29)
	ctx.current_instruction = 0x880D3788;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r29)
	ctx.current_instruction = 0x880D378C;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r29)
	ctx.current_instruction = 0x880D3790;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r29)
	ctx.current_instruction = 0x880D3794;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,72(r29)
	ctx.current_instruction = 0x880D37A0;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,76(r29)
	ctx.current_instruction = 0x880D37A8;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,24(r27)
	ctx.current_instruction = 0x880D37D0;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,28(r27)
	ctx.current_instruction = 0x880D37D8;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d3698
	if (ctx.cr6.lt) goto loc_880D3698;
loc_880D37EC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880d3c2c
	if (!ctx.cr6.lt) goto loc_880D3C2C;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D3804:
	// lfs f2,20(r11)
	ctx.current_instruction = 0x880D3804;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,4(r11)
	ctx.current_instruction = 0x880D380C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f2,f4
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f29,8(r11)
	ctx.current_instruction = 0x880D3814;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	ctx.current_instruction = 0x880D3818;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,16(r11)
	ctx.current_instruction = 0x880D381C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfsu f2,24(r11)
	ctx.current_instruction = 0x880D3820;
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f2,f3,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f27,f5,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f28,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f28,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f29,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f29.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f31,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,4(r10)
	ctx.current_instruction = 0x880D3848;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfsu f2,8(r10)
	ctx.current_instruction = 0x880D3850;
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880d3804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D3804;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef2d0
	ctx.lr = 0x880D3868;
	__restfpr_27(ctx, base);
loc_880D3868:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D386C:
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x880d3a4c
	if (ctx.cr6.lt) goto loc_880D3A4C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880d3c2c
	if (!ctx.cr6.gt) goto loc_880D3C2C;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r6,r31
	ctx.r26.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subfic r28,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r28.u64 = static_cast<uint64_t>(-8) - ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_880D38A0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D38B0;
	sub_88052D90(ctx, base);
loc_880D38B0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x880d39b0
	if (!ctx.cr6.gt) goto loc_880D39B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_880D38C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x880d396c
	if (ctx.cr6.lt) goto loc_880D396C;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
loc_880D38DC:
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D38DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.current_instruction = 0x880D38E4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	ctx.current_instruction = 0x880D38EC;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.current_instruction = 0x880D38F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	ctx.current_instruction = 0x880D38F8;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	ctx.current_instruction = 0x880D3900;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3904;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	ctx.current_instruction = 0x880D3908;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwzx r6,r6,r11
	ctx.current_instruction = 0x880D3910;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	ctx.current_instruction = 0x880D3918;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	ctx.current_instruction = 0x880D3920;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3924;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f6,0(r10)
	ctx.current_instruction = 0x880D3928;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lwzx r7,r6,r11
	ctx.current_instruction = 0x880D3930;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	ctx.current_instruction = 0x880D3934;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	ctx.current_instruction = 0x880D393C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3940;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	ctx.current_instruction = 0x880D394C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.current_instruction = 0x880D3950;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f0,r7,r4
	ctx.current_instruction = 0x880D395C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	ctx.current_instruction = 0x880D3964;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// blt cr6,0x880d38dc
	if (ctx.cr6.lt) goto loc_880D38DC;
loc_880D396C:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880d39a4
	if (!ctx.cr6.lt) goto loc_880D39A4;
	// subf r9,r8,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D3980:
	// lwz r9,372(r30)
	ctx.current_instruction = 0x880D3980;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r29
	ctx.current_instruction = 0x880D3984;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	ctx.current_instruction = 0x880D3988;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x880D398C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	ctx.current_instruction = 0x880D3990;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	ctx.current_instruction = 0x880D399C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x880d3980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D3980;
loc_880D39A4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x880d38c0
	if (!ctx.cr0.eq) goto loc_880D38C0;
loc_880D39B0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x880d39f8
	if (ctx.cr6.lt) goto loc_880D39F8;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_880D39C8:
	// lfs f0,4(r10)
	ctx.current_instruction = 0x880D39C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	ctx.current_instruction = 0x880D39D0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r26,r11
	ctx.current_instruction = 0x880D39D4;
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	ctx.current_instruction = 0x880D39DC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	ctx.current_instruction = 0x880D39E0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	ctx.current_instruction = 0x880D39E4;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ctx.current_instruction = 0x880D39E8;
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	ctx.current_instruction = 0x880D39EC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x880d39c8
	if (ctx.cr6.lt) goto loc_880D39C8;
loc_880D39F8:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880d3a20
	if (!ctx.cr6.lt) goto loc_880D3A20;
	// subf r10,r9,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D3A10:
	// lfsx f0,r26,r11
	ctx.current_instruction = 0x880D3A10;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	ctx.current_instruction = 0x880D3A14;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d3a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D3A10;
loc_880D3A20:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r29,r23,r29
	ctx.r29.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// bne 0x880d38a0
	if (!ctx.cr0.eq) goto loc_880D38A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef2d0
	ctx.lr = 0x880D3A48;
	__restfpr_27(ctx, base);
loc_880D3A48:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D3A4C:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r6
	ctx.r26.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880d3c2c
	if (ctx.cr6.lt) goto loc_880D3C2C;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r26,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r26.u64;
	// subfic r29,r28,-8
	ctx.xer.ca = ctx.r28.u32 <= 4294967288;
	ctx.r29.u64 = static_cast<uint64_t>(-8) - ctx.r28.u64;
loc_880D3A94:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D3AA4;
	sub_88052D90(ctx, base);
loc_880D3AA4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x880d3ba4
	if (!ctx.cr6.gt) goto loc_880D3BA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_880D3AB4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x880d3b60
	if (ctx.cr6.lt) goto loc_880D3B60;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
loc_880D3AD0:
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3AD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.current_instruction = 0x880D3AD8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	ctx.current_instruction = 0x880D3AE0;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.current_instruction = 0x880D3AE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	ctx.current_instruction = 0x880D3AEC;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	ctx.current_instruction = 0x880D3AF4;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3AFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	ctx.current_instruction = 0x880D3B00;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r6,r6,r11
	ctx.current_instruction = 0x880D3B04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	ctx.current_instruction = 0x880D3B0C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	ctx.current_instruction = 0x880D3B14;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3B18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,0(r10)
	ctx.current_instruction = 0x880D3B20;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.current_instruction = 0x880D3B24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	ctx.current_instruction = 0x880D3B28;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	ctx.current_instruction = 0x880D3B30;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.current_instruction = 0x880D3B34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4(r10)
	ctx.current_instruction = 0x880D3B40;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.current_instruction = 0x880D3B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfsx f0,r7,r10
	ctx.current_instruction = 0x880D3B4C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	ctx.current_instruction = 0x880D3B54;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x880d3ad0
	if (ctx.cr6.lt) goto loc_880D3AD0;
loc_880D3B60:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880d3b98
	if (!ctx.cr6.lt) goto loc_880D3B98;
	// subf r9,r8,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D3B74:
	// lwz r9,372(r30)
	ctx.current_instruction = 0x880D3B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r28
	ctx.current_instruction = 0x880D3B78;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	ctx.current_instruction = 0x880D3B7C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x880D3B80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	ctx.current_instruction = 0x880D3B84;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	ctx.current_instruction = 0x880D3B90;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x880d3b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D3B74;
loc_880D3B98:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x880d3ab4
	if (!ctx.cr0.eq) goto loc_880D3AB4;
loc_880D3BA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x880d3bec
	if (ctx.cr6.lt) goto loc_880D3BEC;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_880D3BBC:
	// lfs f0,4(r10)
	ctx.current_instruction = 0x880D3BBC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	ctx.current_instruction = 0x880D3BC4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	ctx.current_instruction = 0x880D3BC8;
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	ctx.current_instruction = 0x880D3BD0;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	ctx.current_instruction = 0x880D3BD4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	ctx.current_instruction = 0x880D3BD8;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ctx.current_instruction = 0x880D3BDC;
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	ctx.current_instruction = 0x880D3BE0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x880d3bbc
	if (ctx.cr6.lt) goto loc_880D3BBC;
loc_880D3BEC:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880d3c14
	if (!ctx.cr6.lt) goto loc_880D3C14;
	// subf r10,r9,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D3C04:
	// lfsx f0,r27,r11
	ctx.current_instruction = 0x880D3C04;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	ctx.current_instruction = 0x880D3C08;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d3c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D3C04;
loc_880D3C14:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// subf r28,r23,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r29,r21,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r21.u64;
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r27,r22,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r22.u64;
	// bge 0x880d3a94
	if (!ctx.cr0.lt) goto loc_880D3A94;
loc_880D3C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef2d0
	ctx.lr = 0x880D3C3C;
	__restfpr_27(ctx, base);
loc_880D3C3C:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E4530) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E4530;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E4530) {
			switch (rex_dispatch_address) {
				case 0x880E4554:
				case 0x880E45D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E4530;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E4554: goto loc_880E4554;
		case 0x880E45D8: goto loc_880E45D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880E4534;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880E4538;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30872(r3)
	ctx.current_instruction = 0x880E453C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e4564
	if (ctx.cr6.eq) goto loc_880E4564;
	// lwz r11,30928(r3)
	ctx.current_instruction = 0x880E4548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30928);
	// stw r11,7572(r3)
	ctx.current_instruction = 0x880E454C;
	REX_STORE_U32(ctx.r3.u32 + 7572, ctx.r11.u32);
	// bl 0x880e43b8
	ctx.lr = 0x880E4554;
	sub_880E43B8(ctx, base);
loc_880E4554:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E4558;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4564:
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E4564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x880E4574;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E4578;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,14752(r10)
	ctx.current_instruction = 0x880E4580;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14752);
	// lfd f13,14864(r9)
	ctx.current_instruction = 0x880E4584;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 14864);
	// fnmsub f0,f12,f0,f13
	ctx.f0.f64 = -std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880E4590;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880E4594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r11,7572(r3)
	ctx.current_instruction = 0x880E459C;
	REX_STORE_U32(ctx.r3.u32 + 7572, ctx.r11.u32);
	// bgt cr6,0x880e45cc
	if (ctx.cr6.gt) goto loc_880E45CC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,80(r1)
	ctx.current_instruction = 0x880E45AC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x880E45B0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsub f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 - ctx.f11.f64;
	// lfd f13,12088(r10)
	ctx.current_instruction = 0x880E45C0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x880e45d0
	if (ctx.cr6.gt) goto loc_880E45D0;
loc_880E45CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880E45D0:
	// stw r11,1424(r3)
	ctx.current_instruction = 0x880E45D0;
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// bl 0x880e43b8
	ctx.lr = 0x880E45D8;
	sub_880E43B8(ctx, base);
loc_880E45D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E45DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E5D90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E5D90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E5D90) {
			switch (rex_dispatch_address) {
				case 0x880E5D98:
				case 0x880E5E88:
				case 0x880E5EA8:
				case 0x880E5EC4:
				case 0x880E5ED0:
				case 0x880E5EE8:
				case 0x880E5F00:
				case 0x880E5F0C:
				case 0x880E6198:
				case 0x880E61A4:
				case 0x880E61B0:
				case 0x880E61BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E5D90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E5D98: goto loc_880E5D98;
		case 0x880E5E88: goto loc_880E5E88;
		case 0x880E5EA8: goto loc_880E5EA8;
		case 0x880E5EC4: goto loc_880E5EC4;
		case 0x880E5ED0: goto loc_880E5ED0;
		case 0x880E5EE8: goto loc_880E5EE8;
		case 0x880E5F00: goto loc_880E5F00;
		case 0x880E5F0C: goto loc_880E5F0C;
		case 0x880E6198: goto loc_880E6198;
		case 0x880E61A4: goto loc_880E61A4;
		case 0x880E61B0: goto loc_880E61B0;
		case 0x880E61BC: goto loc_880E61BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880E5D98;
	__savegprlr_14(ctx, base);
loc_880E5D98:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x880E5D98;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30304(r3)
	ctx.current_instruction = 0x880E5D9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30304);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e5dec
	if (ctx.cr6.eq) goto loc_880E5DEC;
	// lwz r11,30224(r3)
	ctx.current_instruction = 0x880E5DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880e5dec
	if (!ctx.cr6.gt) goto loc_880E5DEC;
	// li r29,3
	ctx.r29.s64 = 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e5ddc
	if (!ctx.cr6.eq) goto loc_880E5DDC;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x880e5e6c
	goto loc_880E5E6C;
loc_880E5DDC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880e5e6c
	if (!ctx.cr6.eq) goto loc_880E5E6C;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x880e5e6c
	goto loc_880E5E6C;
loc_880E5DEC:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lwz r9,16(r3)
	ctx.current_instruction = 0x880E5DF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x880E5DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5E04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880e5e6c
	if (!ctx.cr6.gt) goto loc_880E5E6C;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
	// li r29,3
	ctx.r29.s64 = 3;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5E18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5e2c
	if (!ctx.cr6.lt) goto loc_880E5E2C;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x880e5e6c
	goto loc_880E5E6C;
loc_880E5E2C:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5E30;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5e44
	if (!ctx.cr6.lt) goto loc_880E5E44;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x880e5e6c
	goto loc_880E5E6C;
loc_880E5E44:
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5E48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5e5c
	if (!ctx.cr6.lt) goto loc_880E5E5C;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x880e5e6c
	goto loc_880E5E6C;
loc_880E5E5C:
	// lwzx r11,r9,r11
	ctx.current_instruction = 0x880E5E5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880e5e6c
	if (!ctx.cr6.lt) goto loc_880E5E6C;
	// li r28,5
	ctx.r28.s64 = 5;
loc_880E5E6C:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// mullw r24,r26,r30
	ctx.r24.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r30.s32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x880E5E74;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// ori r20,r11,32768
	ctx.r20.u64 = ctx.r11.u64 | 32768;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050340
	ctx.lr = 0x880E5E88;
	sub_88050340(ctx, base);
loc_880E5E88:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880e61bc
	if (ctx.cr6.eq) goto loc_880E61BC;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E5EA8;
	sub_880547A0(ctx, base);
loc_880E5EA8:
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mullw r11,r30,r26
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// stw r30,88(r1)
	ctx.current_instruction = 0x880E5EB4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E5EC4;
	sub_880547A0(ctx, base);
loc_880E5EC4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x88050340
	ctx.lr = 0x880E5ED0;
	sub_88050340(ctx, base);
loc_880E5ED0:
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq cr6,0x880e61b4
	if (ctx.cr6.eq) goto loc_880E61B4;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x88050340
	ctx.lr = 0x880E5EE8;
	sub_88050340(ctx, base);
loc_880E5EE8:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880e5f14
	if (!ctx.cr6.eq) goto loc_880E5F14;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88050358
	ctx.lr = 0x880E5F00;
	sub_88050358(ctx, base);
loc_880E5F00:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x88050358
	ctx.lr = 0x880E5F0C;
	sub_88050358(ctx, base);
loc_880E5F0C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880E5F14:
	// li r10,49
	ctx.r10.s64 = 49;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// mulli r9,r29,49
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(49));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r19,-4
	ctx.r10.s64 = ctx.r19.s64 + -4;
	// addi r29,r8,14888
	ctx.r29.s64 = ctx.r8.s64 + 14888;
loc_880E5F30:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r29,400
	ctx.r7.s64 = ctx.r29.s64 + 400;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r6,r7
	ctx.current_instruction = 0x880E5F40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stwu r5,4(r10)
	ctx.current_instruction = 0x880E5F44;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880e5f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E5F30;
	// addi r10,r29,1576
	ctx.r10.s64 = ctx.r29.s64 + 1576;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r25,r9,r10
	ctx.current_instruction = 0x880E5F58;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addic. r10,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r10.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x880e5f90
	if (ctx.cr0.lt) goto loc_880E5F90;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r28,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880E5F74:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r29,1600
	ctx.r7.s64 = ctx.r29.s64 + 1600;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r6,r7
	ctx.current_instruction = 0x880E5F84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stwu r5,4(r10)
	ctx.current_instruction = 0x880E5F88;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880e5f74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E5F74;
loc_880E5F90:
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// bge cr6,0x880e5fc0
	if (!ctx.cr6.lt) goto loc_880E5FC0;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880e5fc0
	if (ctx.cr6.eq) goto loc_880E5FC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880E5FB8:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880E5FB8;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880e5fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E5FB8;
loc_880E5FC0:
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x880e6188
	if (!ctx.cr6.gt) goto loc_880E6188;
	// add r11,r31,r17
	ctx.r11.u64 = ctx.r31.u64 + ctx.r17.u64;
	// addi r18,r26,-3
	ctx.r18.s64 = ctx.r26.s64 + -3;
	// add r21,r31,r27
	ctx.r21.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// subf r16,r17,r27
	ctx.r16.u64 = ctx.r27.u64 - ctx.r17.u64;
loc_880E5FE0:
	// lbz r9,0(r21)
	ctx.current_instruction = 0x880E5FE0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// addi r10,r22,-1
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpw cr6,r18,r26
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r26.s32, ctx.xer);
	// stb r9,-1(r22)
	ctx.current_instruction = 0x880E5FF0;
	REX_STORE_U8(ctx.r22.u32 + -1, ctx.r9.u8);
	// lbzx r8,r16,r22
	ctx.current_instruction = 0x880E5FF4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r22.u32);
	// stb r8,0(r22)
	ctx.current_instruction = 0x880E5FF8;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
	// lbz r7,2(r21)
	ctx.current_instruction = 0x880E5FFC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + 2);
	// stb r7,1(r22)
	ctx.current_instruction = 0x880E6000;
	REX_STORE_U8(ctx.r22.u32 + 1, ctx.r7.u8);
	// bge cr6,0x880e6020
	if (!ctx.cr6.lt) goto loc_880E6020;
	// subf r9,r18,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r18.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880E6010:
	// lbzx r9,r21,r11
	ctx.current_instruction = 0x880E6010;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	ctx.current_instruction = 0x880E6014;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e6010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E6010;
loc_880E6020:
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// ble cr6,0x880e616c
	if (!ctx.cr6.gt) goto loc_880E616C;
	// addi r20,r19,4
	ctx.r20.s64 = ctx.r19.s64 + 4;
loc_880E6030:
	// add r24,r4,r31
	ctx.r24.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x880E6034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,0(r23)
	ctx.current_instruction = 0x880E6038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lbzx r7,r24,r27
	ctx.current_instruction = 0x880E6048;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_880E6054:
	// cmpwi cr6,r9,192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 192, ctx.xer);
	// bge cr6,0x880e6108
	if (!ctx.cr6.lt) goto loc_880E6108;
	// lwzx r30,r20,r9
	ctx.current_instruction = 0x880E605C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880e6108
	if (!ctx.cr6.gt) goto loc_880E6108;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r29,200
	ctx.r11.s64 = ctx.r29.s64 + 200;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x880E6074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r15,r10,r28
	ctx.r15.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r11,r9,r8
	ctx.current_instruction = 0x880E607C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r8,r15,r26
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r26.s32);
	// srawi r15,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r11.s32 >> 31;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r14,r11,r15
	ctx.r14.u64 = ctx.r11.u64 ^ ctx.r15.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880E609C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x880E60A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r10,r15,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r15.u64;
	// lwz r15,84(r1)
	ctx.current_instruction = 0x880E60A8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r11,r8,r27
	ctx.current_instruction = 0x880E60AC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880E60B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r8,r8,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r8.u64;
	// subf r15,r11,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r14,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r15.s32 >> 31;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r10,r15,r14
	ctx.r10.u64 = ctx.r15.u64 ^ ctx.r14.u64;
	// subf r10,r14,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r14.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880e60f8
	if (!ctx.cr6.lt) goto loc_880E60F8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r10,r23
	ctx.current_instruction = 0x880E60E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// b 0x880e60fc
	goto loc_880E60FC;
loc_880E60F8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_880E60FC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880e6054
	if (ctx.cr6.lt) goto loc_880E6054;
loc_880E6108:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880e614c
	if (!ctx.cr6.gt) goto loc_880E614C;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw. r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge 0x880e6138
	if (!ctx.cr0.lt) goto loc_880E6138;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x880e6150
	goto loc_880E6150;
loc_880E6138:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880e6144
	if (!ctx.cr6.gt) goto loc_880E6144;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880E6144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x880e6150
	goto loc_880E6150;
loc_880E614C:
	// lbzx r11,r24,r27
	ctx.current_instruction = 0x880E614C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
loc_880E6150:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbx r11,r24,r17
	ctx.current_instruction = 0x880E6154;
	REX_STORE_U8(ctx.r24.u32 + ctx.r17.u32, ctx.r11.u8);
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x880e6030
	if (ctx.cr6.lt) goto loc_880E6030;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r30,88(r1)
	ctx.current_instruction = 0x880E6164;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r20,r11,32768
	ctx.r20.u64 = ctx.r11.u64 | 32768;
loc_880E616C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r22,r22,r26
	ctx.r22.u64 = ctx.r22.u64 + ctx.r26.u64;
	// add r21,r21,r26
	ctx.r21.u64 = ctx.r21.u64 + ctx.r26.u64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x880e5fe0
	if (ctx.cr6.lt) goto loc_880E5FE0;
	// lwz r24,92(r1)
	ctx.current_instruction = 0x880E6184;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_880E6188:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6198;
	sub_880547A0(ctx, base);
loc_880E6198:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x88050358
	ctx.lr = 0x880E61A4;
	sub_88050358(ctx, base);
loc_880E61A4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88050358
	ctx.lr = 0x880E61B0;
	sub_88050358(ctx, base);
loc_880E61B0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_880E61B4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88050358
	ctx.lr = 0x880E61BC;
	sub_88050358(ctx, base);
loc_880E61BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F04E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F04E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F04E0) {
			switch (rex_dispatch_address) {
				case 0x880F04E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F04E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F04E8: goto loc_880F04E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F04E8;
	__savegprlr_14(ctx, base);
loc_880F04E8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880F04EC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r4,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r22,r3
	ctx.r9.u64 = ctx.r22.u64 + ctx.r3.u64;
	// addi r30,r1,-416
	ctx.r30.s64 = ctx.r1.s64 + -416;
	// addi r5,r5,256
	ctx.r5.s64 = ctx.r5.s64 + 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,-424(r1)
	ctx.current_instruction = 0x880F051C;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r5.u32);
	// add r21,r4,r8
	ctx.r21.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r20,r4,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r19,r4,r7
	ctx.r19.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r18,r6,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r4.u64;
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// addi r24,r9,-2
	ctx.r24.s64 = ctx.r9.s64 + -2;
	// subf r16,r30,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r30.u64;
loc_880F0540:
	// add r7,r22,r10
	ctx.r7.u64 = ctx.r22.u64 + ctx.r10.u64;
	// lhzx r8,r16,r11
	ctx.current_instruction = 0x880F0544;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r11.u32);
	// add r6,r19,r10
	ctx.r6.u64 = ctx.r19.u64 + ctx.r10.u64;
	// lhzu r30,2(r24)
	ctx.current_instruction = 0x880F054C;
	ea = 2 + ctx.r24.u32;
	ctx.r30.u64 = REX_LOAD_U16(ea);
	ctx.r24.u32 = ea;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r17,r10
	ctx.r9.u64 = ctx.r17.u64 + ctx.r10.u64;
	// add r5,r21,r10
	ctx.r5.u64 = ctx.r21.u64 + ctx.r10.u64;
	// add r4,r20,r10
	ctx.r4.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r7,r3
	ctx.current_instruction = 0x880F0568;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r18,r10
	ctx.r31.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lhzx r28,r6,r3
	ctx.current_instruction = 0x880F0578;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r3
	ctx.current_instruction = 0x880F0584;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// lhzx r5,r5,r3
	ctx.current_instruction = 0x880F0588;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r29,r4,r3
	ctx.current_instruction = 0x880F0590;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// lhzx r31,r31,r3
	ctx.current_instruction = 0x880F05A0;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r25,r6,r9
	ctx.r25.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// add r26,r30,r31
	ctx.r26.u64 = ctx.r30.u64 + ctx.r31.u64;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// add r23,r26,r27
	ctx.r23.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r31.u64;
	// rlwinm r23,r9,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r25,r30
	ctx.r15.u64 = ctx.r25.u64 + ctx.r30.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r5,r9,r23
	ctx.r5.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r15
	ctx.r9.s64 = ctx.r15.s16;
	// subf r31,r25,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r25.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r30,r29,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r29.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// subf r25,r26,r27
	ctx.r25.u64 = ctx.r27.u64 - ctx.r26.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// extsh r23,r5
	ctx.r23.s64 = ctx.r5.s16;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r6,r28
	ctx.r29.u64 = ctx.r6.u64 + ctx.r28.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r29,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r8,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r8.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// addi r28,r6,1
	ctx.r28.s64 = ctx.r6.s64 + 1;
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r26,r9,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r25,r30,-3
	ctx.r25.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(-3));
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r29,r6,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r6.u64;
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subf r6,r31,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r8,r28,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r28.u64;
	// srawi r31,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r27.s32 >> 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// srawi r30,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// sth r30,0(r11)
	ctx.current_instruction = 0x880F073C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// sth r23,16(r11)
	ctx.current_instruction = 0x880F0744;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r23.u16);
	// sth r8,32(r11)
	ctx.current_instruction = 0x880F0748;
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r8.u16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// sth r4,48(r11)
	ctx.current_instruction = 0x880F0754;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r4.u16);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// sth r5,64(r11)
	ctx.current_instruction = 0x880F075C;
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r5.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// sth r4,80(r11)
	ctx.current_instruction = 0x880F0768;
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r4.u16);
	// sth r9,96(r11)
	ctx.current_instruction = 0x880F076C;
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r8,112(r11)
	ctx.current_instruction = 0x880F0774;
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0540;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-290
	ctx.r10.s64 = ctx.r1.s64 + -290;
	// addi r11,r1,-386
	ctx.r11.s64 = ctx.r1.s64 + -386;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0790:
	// lhz r8,-14(r11)
	ctx.current_instruction = 0x880F0790;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// lhz r7,-30(r11)
	ctx.current_instruction = 0x880F0794;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// lhz r6,18(r11)
	ctx.current_instruction = 0x880F0798;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x880F079C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,-12(r11)
	ctx.current_instruction = 0x880F07A0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -12);
	// lhz r3,-28(r11)
	ctx.current_instruction = 0x880F07A4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -28);
	// lhz r31,20(r11)
	ctx.current_instruction = 0x880F07A8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhzu r9,4(r11)
	ctx.current_instruction = 0x880F07AC;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r8,2(r10)
	ctx.current_instruction = 0x880F07B0;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// sth r7,4(r10)
	ctx.current_instruction = 0x880F07B4;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r6,6(r10)
	ctx.current_instruction = 0x880F07B8;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// sth r5,8(r10)
	ctx.current_instruction = 0x880F07BC;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// sth r4,10(r10)
	ctx.current_instruction = 0x880F07C0;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// sth r3,12(r10)
	ctx.current_instruction = 0x880F07C4;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r31,14(r10)
	ctx.current_instruction = 0x880F07C8;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r31.u16);
	// sthu r9,16(r10)
	ctx.current_instruction = 0x880F07CC;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880f0790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0790;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// addi r9,r1,-400
	ctx.r9.s64 = ctx.r1.s64 + -400;
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r1,-416
	ctx.r7.s64 = ctx.r1.s64 + -416;
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// addi r5,r1,-368
	ctx.r5.s64 = ctx.r1.s64 + -368;
loc_880F07F8:
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// lhzx r3,r11,r10
	ctx.current_instruction = 0x880F07FC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r31,r11,r8
	ctx.current_instruction = 0x880F0800;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r1,-384
	ctx.r30.s64 = ctx.r1.s64 + -384;
	// lhzx r29,r11,r6
	ctx.current_instruction = 0x880F0808;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r4,r11,r4
	ctx.current_instruction = 0x880F080C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sthx r3,r11,r9
	ctx.current_instruction = 0x880F0810;
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r31,r11,r7
	ctx.current_instruction = 0x880F0814;
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u16);
	// sthx r29,r11,r5
	ctx.current_instruction = 0x880F0818;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u16);
	// sthx r4,r11,r30
	ctx.current_instruction = 0x880F081C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f07f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F07F8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-290
	ctx.r10.s64 = ctx.r1.s64 + -290;
	// addi r11,r1,-354
	ctx.r11.s64 = ctx.r1.s64 + -354;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0838:
	// lhz r8,50(r11)
	ctx.current_instruction = 0x880F0838;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// lhz r7,34(r11)
	ctx.current_instruction = 0x880F083C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// lhz r6,18(r11)
	ctx.current_instruction = 0x880F0840;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x880F0844;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,52(r11)
	ctx.current_instruction = 0x880F0848;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r3,36(r11)
	ctx.current_instruction = 0x880F084C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lhz r31,20(r11)
	ctx.current_instruction = 0x880F0850;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhzu r9,4(r11)
	ctx.current_instruction = 0x880F0854;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r8,2(r10)
	ctx.current_instruction = 0x880F0858;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// sth r7,4(r10)
	ctx.current_instruction = 0x880F085C;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r6,6(r10)
	ctx.current_instruction = 0x880F0860;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// sth r5,8(r10)
	ctx.current_instruction = 0x880F0864;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// sth r4,10(r10)
	ctx.current_instruction = 0x880F0868;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// sth r3,12(r10)
	ctx.current_instruction = 0x880F086C;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r31,14(r10)
	ctx.current_instruction = 0x880F0870;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r31.u16);
	// sthu r9,16(r10)
	ctx.current_instruction = 0x880F0874;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880f0838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0838;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r1,-320
	ctx.r7.s64 = ctx.r1.s64 + -320;
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// addi r5,r1,-336
	ctx.r5.s64 = ctx.r1.s64 + -336;
loc_880F08A0:
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// lhzx r3,r11,r10
	ctx.current_instruction = 0x880F08A4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r31,r11,r8
	ctx.current_instruction = 0x880F08A8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r1,-352
	ctx.r30.s64 = ctx.r1.s64 + -352;
	// lhzx r29,r11,r6
	ctx.current_instruction = 0x880F08B0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r4,r11,r4
	ctx.current_instruction = 0x880F08B4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sthx r3,r11,r9
	ctx.current_instruction = 0x880F08B8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r31,r11,r7
	ctx.current_instruction = 0x880F08BC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u16);
	// sthx r29,r11,r5
	ctx.current_instruction = 0x880F08C0;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u16);
	// sthx r4,r11,r30
	ctx.current_instruction = 0x880F08C4;
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f08a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F08A0;
	// lhz r9,-366(r1)
	ctx.current_instruction = 0x880F08D0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -366);
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r7,-358(r1)
	ctx.current_instruction = 0x880F08D8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -358);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,-364(r1)
	ctx.current_instruction = 0x880F08E0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -364);
	// addi r6,r1,-400
	ctx.r6.s64 = ctx.r1.s64 + -400;
	// lhz r3,-356(r1)
	ctx.current_instruction = 0x880F08E8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -356);
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// lhz r10,-360(r1)
	ctx.current_instruction = 0x880F08F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -360);
	// addi r31,r1,-392
	ctx.r31.s64 = ctx.r1.s64 + -392;
	// sth r9,-460(r1)
	ctx.current_instruction = 0x880F08F8;
	REX_STORE_U16(ctx.r1.u32 + -460, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r7,-464(r1)
	ctx.current_instruction = 0x880F0900;
	REX_STORE_U16(ctx.r1.u32 + -464, ctx.r7.u16);
	// sth r5,-462(r1)
	ctx.current_instruction = 0x880F0904;
	REX_STORE_U16(ctx.r1.u32 + -462, ctx.r5.u16);
	// sth r3,-458(r1)
	ctx.current_instruction = 0x880F0908;
	REX_STORE_U16(ctx.r1.u32 + -458, ctx.r3.u16);
	// sth r10,-454(r1)
	ctx.current_instruction = 0x880F090C;
	REX_STORE_U16(ctx.r1.u32 + -454, ctx.r10.u16);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// lhz r16,-352(r1)
	ctx.current_instruction = 0x880F0914;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -352);
	// lhz r17,-370(r1)
	ctx.current_instruction = 0x880F0918;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -370);
	// lhz r18,-378(r1)
	ctx.current_instruction = 0x880F091C;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -378);
	// lhz r19,-372(r1)
	ctx.current_instruction = 0x880F0920;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -372);
	// lhz r9,-368(r1)
	ctx.current_instruction = 0x880F0924;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -368);
	// lhz r7,-362(r1)
	ctx.current_instruction = 0x880F0928;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -362);
	// lhz r5,-354(r1)
	ctx.current_instruction = 0x880F092C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -354);
	// lhz r3,-336(r1)
	ctx.current_instruction = 0x880F0930;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -336);
	// lhz r11,-328(r1)
	ctx.current_instruction = 0x880F0934;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -328);
	// lhz r30,-334(r1)
	ctx.current_instruction = 0x880F0938;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + -334);
	// lhz r29,-326(r1)
	ctx.current_instruction = 0x880F093C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -326);
	// lhz r28,-332(r1)
	ctx.current_instruction = 0x880F0940;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -332);
	// lhz r27,-324(r1)
	ctx.current_instruction = 0x880F0944;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + -324);
	// lhz r26,-330(r1)
	ctx.current_instruction = 0x880F0948;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + -330);
	// lhz r25,-322(r1)
	ctx.current_instruction = 0x880F094C;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + -322);
	// lhz r14,-460(r1)
	ctx.current_instruction = 0x880F0950;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + -460);
	// sth r16,-460(r1)
	ctx.current_instruction = 0x880F0954;
	REX_STORE_U16(ctx.r1.u32 + -460, ctx.r16.u16);
	// lhz r16,-464(r1)
	ctx.current_instruction = 0x880F0958;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -464);
	// sth r17,-464(r1)
	ctx.current_instruction = 0x880F095C;
	REX_STORE_U16(ctx.r1.u32 + -464, ctx.r17.u16);
	// lhz r17,-462(r1)
	ctx.current_instruction = 0x880F0960;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -462);
	// sth r18,-462(r1)
	ctx.current_instruction = 0x880F0964;
	REX_STORE_U16(ctx.r1.u32 + -462, ctx.r18.u16);
	// lhz r18,-458(r1)
	ctx.current_instruction = 0x880F0968;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -458);
	// sth r19,-458(r1)
	ctx.current_instruction = 0x880F096C;
	REX_STORE_U16(ctx.r1.u32 + -458, ctx.r19.u16);
	// lhz r19,-344(r1)
	ctx.current_instruction = 0x880F0970;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -344);
	// lhz r15,-454(r1)
	ctx.current_instruction = 0x880F0974;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r1.u32 + -454);
	// lhz r24,-384(r1)
	ctx.current_instruction = 0x880F0978;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + -384);
	// lhz r23,-376(r1)
	ctx.current_instruction = 0x880F097C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -376);
	// lhz r22,-382(r1)
	ctx.current_instruction = 0x880F0980;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -382);
	// sth r19,-454(r1)
	ctx.current_instruction = 0x880F0984;
	REX_STORE_U16(ctx.r1.u32 + -454, ctx.r19.u16);
	// lhz r19,-350(r1)
	ctx.current_instruction = 0x880F0988;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -350);
	// lhz r21,-374(r1)
	ctx.current_instruction = 0x880F098C;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r1.u32 + -374);
	// lhz r20,-380(r1)
	ctx.current_instruction = 0x880F0990;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + -380);
	// stw r8,-432(r1)
	ctx.current_instruction = 0x880F0994;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r8.u32);
	// stw r6,-156(r1)
	ctx.current_instruction = 0x880F0998;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r6.u32);
	// sth r19,-428(r1)
	ctx.current_instruction = 0x880F099C;
	REX_STORE_U16(ctx.r1.u32 + -428, ctx.r19.u16);
	// lhz r19,-342(r1)
	ctx.current_instruction = 0x880F09A0;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -342);
	// stw r4,-160(r1)
	ctx.current_instruction = 0x880F09A4;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r4.u32);
	// stw r31,-448(r1)
	ctx.current_instruction = 0x880F09A8;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r31.u32);
	// stw r10,-440(r1)
	ctx.current_instruction = 0x880F09AC;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r10.u32);
	// sth r9,-224(r1)
	ctx.current_instruction = 0x880F09B0;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// sth r19,-436(r1)
	ctx.current_instruction = 0x880F09B4;
	REX_STORE_U16(ctx.r1.u32 + -436, ctx.r19.u16);
	// lhz r19,-348(r1)
	ctx.current_instruction = 0x880F09B8;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -348);
	// sth r15,-208(r1)
	ctx.current_instruction = 0x880F09BC;
	REX_STORE_U16(ctx.r1.u32 + -208, ctx.r15.u16);
	// sth r14,-222(r1)
	ctx.current_instruction = 0x880F09C0;
	REX_STORE_U16(ctx.r1.u32 + -222, ctx.r14.u16);
	// sth r16,-206(r1)
	ctx.current_instruction = 0x880F09C4;
	REX_STORE_U16(ctx.r1.u32 + -206, ctx.r16.u16);
	// sth r17,-220(r1)
	ctx.current_instruction = 0x880F09C8;
	REX_STORE_U16(ctx.r1.u32 + -220, ctx.r17.u16);
	// sth r19,-444(r1)
	ctx.current_instruction = 0x880F09CC;
	REX_STORE_U16(ctx.r1.u32 + -444, ctx.r19.u16);
	// lhz r19,-340(r1)
	ctx.current_instruction = 0x880F09D0;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -340);
	// sth r18,-204(r1)
	ctx.current_instruction = 0x880F09D4;
	REX_STORE_U16(ctx.r1.u32 + -204, ctx.r18.u16);
	// sth r7,-218(r1)
	ctx.current_instruction = 0x880F09D8;
	REX_STORE_U16(ctx.r1.u32 + -218, ctx.r7.u16);
	// sth r5,-202(r1)
	ctx.current_instruction = 0x880F09DC;
	REX_STORE_U16(ctx.r1.u32 + -202, ctx.r5.u16);
	// sth r3,-216(r1)
	ctx.current_instruction = 0x880F09E0;
	REX_STORE_U16(ctx.r1.u32 + -216, ctx.r3.u16);
	// sth r19,-452(r1)
	ctx.current_instruction = 0x880F09E4;
	REX_STORE_U16(ctx.r1.u32 + -452, ctx.r19.u16);
	// lhz r19,-346(r1)
	ctx.current_instruction = 0x880F09E8;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -346);
	// sth r11,-200(r1)
	ctx.current_instruction = 0x880F09EC;
	REX_STORE_U16(ctx.r1.u32 + -200, ctx.r11.u16);
	// sth r30,-214(r1)
	ctx.current_instruction = 0x880F09F0;
	REX_STORE_U16(ctx.r1.u32 + -214, ctx.r30.u16);
	// sth r29,-198(r1)
	ctx.current_instruction = 0x880F09F4;
	REX_STORE_U16(ctx.r1.u32 + -198, ctx.r29.u16);
	// sth r28,-212(r1)
	ctx.current_instruction = 0x880F09F8;
	REX_STORE_U16(ctx.r1.u32 + -212, ctx.r28.u16);
	// sth r19,-456(r1)
	ctx.current_instruction = 0x880F09FC;
	REX_STORE_U16(ctx.r1.u32 + -456, ctx.r19.u16);
	// lhz r19,-338(r1)
	ctx.current_instruction = 0x880F0A00;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -338);
	// sth r27,-196(r1)
	ctx.current_instruction = 0x880F0A04;
	REX_STORE_U16(ctx.r1.u32 + -196, ctx.r27.u16);
	// sth r26,-210(r1)
	ctx.current_instruction = 0x880F0A08;
	REX_STORE_U16(ctx.r1.u32 + -210, ctx.r26.u16);
	// sth r25,-194(r1)
	ctx.current_instruction = 0x880F0A0C;
	REX_STORE_U16(ctx.r1.u32 + -194, ctx.r25.u16);
	// sth r24,-192(r1)
	ctx.current_instruction = 0x880F0A10;
	REX_STORE_U16(ctx.r1.u32 + -192, ctx.r24.u16);
	// lhz r10,-458(r1)
	ctx.current_instruction = 0x880F0A14;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -458);
	// lhz r9,-462(r1)
	ctx.current_instruction = 0x880F0A18;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -462);
	// lhz r8,-464(r1)
	ctx.current_instruction = 0x880F0A1C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -464);
	// lhz r7,-460(r1)
	ctx.current_instruction = 0x880F0A20;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -460);
	// lhz r11,-452(r1)
	ctx.current_instruction = 0x880F0A24;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -452);
	// sth r10,-172(r1)
	ctx.current_instruction = 0x880F0A28;
	REX_STORE_U16(ctx.r1.u32 + -172, ctx.r10.u16);
	// lhz r10,-456(r1)
	ctx.current_instruction = 0x880F0A2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -456);
	// lhz r6,-454(r1)
	ctx.current_instruction = 0x880F0A30;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + -454);
	// lhz r5,-428(r1)
	ctx.current_instruction = 0x880F0A34;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -428);
	// lhz r4,-436(r1)
	ctx.current_instruction = 0x880F0A38;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -436);
	// lhz r3,-444(r1)
	ctx.current_instruction = 0x880F0A3C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -444);
	// sth r9,-186(r1)
	ctx.current_instruction = 0x880F0A40;
	REX_STORE_U16(ctx.r1.u32 + -186, ctx.r9.u16);
	// sth r8,-170(r1)
	ctx.current_instruction = 0x880F0A44;
	REX_STORE_U16(ctx.r1.u32 + -170, ctx.r8.u16);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// sth r7,-184(r1)
	ctx.current_instruction = 0x880F0A4C;
	REX_STORE_U16(ctx.r1.u32 + -184, ctx.r7.u16);
	// sth r11,-164(r1)
	ctx.current_instruction = 0x880F0A50;
	REX_STORE_U16(ctx.r1.u32 + -164, ctx.r11.u16);
	// sth r10,-178(r1)
	ctx.current_instruction = 0x880F0A54;
	REX_STORE_U16(ctx.r1.u32 + -178, ctx.r10.u16);
	// lwz r10,-156(r1)
	ctx.current_instruction = 0x880F0A58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x880F0A5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r7,-440(r1)
	ctx.current_instruction = 0x880F0A60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// lwz r11,-432(r1)
	ctx.current_instruction = 0x880F0A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// sth r23,-176(r1)
	ctx.current_instruction = 0x880F0A68;
	REX_STORE_U16(ctx.r1.u32 + -176, ctx.r23.u16);
	// sth r22,-190(r1)
	ctx.current_instruction = 0x880F0A6C;
	REX_STORE_U16(ctx.r1.u32 + -190, ctx.r22.u16);
	// sth r21,-174(r1)
	ctx.current_instruction = 0x880F0A70;
	REX_STORE_U16(ctx.r1.u32 + -174, ctx.r21.u16);
	// sth r20,-188(r1)
	ctx.current_instruction = 0x880F0A74;
	REX_STORE_U16(ctx.r1.u32 + -188, ctx.r20.u16);
	// sth r6,-168(r1)
	ctx.current_instruction = 0x880F0A78;
	REX_STORE_U16(ctx.r1.u32 + -168, ctx.r6.u16);
	// sth r5,-182(r1)
	ctx.current_instruction = 0x880F0A7C;
	REX_STORE_U16(ctx.r1.u32 + -182, ctx.r5.u16);
	// sth r4,-166(r1)
	ctx.current_instruction = 0x880F0A80;
	REX_STORE_U16(ctx.r1.u32 + -166, ctx.r4.u16);
	// sth r3,-180(r1)
	ctx.current_instruction = 0x880F0A84;
	REX_STORE_U16(ctx.r1.u32 + -180, ctx.r3.u16);
	// sth r19,-162(r1)
	ctx.current_instruction = 0x880F0A88;
	REX_STORE_U16(ctx.r1.u32 + -162, ctx.r19.u16);
loc_880F0A8C:
	// lhzx r6,r11,r10
	ctx.current_instruction = 0x880F0A8C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r5,r11,r8
	ctx.current_instruction = 0x880F0A90;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// sthx r6,r11,r9
	ctx.current_instruction = 0x880F0A94;
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u16);
	// sthx r5,r11,r7
	ctx.current_instruction = 0x880F0A98;
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0A8C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lhz r20,-304(r1)
	ctx.current_instruction = 0x880F0AA8;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + -304);
	// lhz r19,-296(r1)
	ctx.current_instruction = 0x880F0AAC;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -296);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r18,-302(r1)
	ctx.current_instruction = 0x880F0AB4;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -302);
	// addi r22,r1,-272
	ctx.r22.s64 = ctx.r1.s64 + -272;
	// lhz r17,-294(r1)
	ctx.current_instruction = 0x880F0ABC;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -294);
	// addi r21,r1,-400
	ctx.r21.s64 = ctx.r1.s64 + -400;
	// lhz r16,-300(r1)
	ctx.current_instruction = 0x880F0AC4;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lhz r15,-292(r1)
	ctx.current_instruction = 0x880F0ACC;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r1.u32 + -292);
	// lhz r10,-298(r1)
	ctx.current_instruction = 0x880F0AD0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -298);
	// lhz r14,-290(r1)
	ctx.current_instruction = 0x880F0AD4;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + -290);
	// lhz r9,-416(r1)
	ctx.current_instruction = 0x880F0AD8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -416);
	// lhz r8,-408(r1)
	ctx.current_instruction = 0x880F0ADC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -408);
	// lhz r7,-414(r1)
	ctx.current_instruction = 0x880F0AE0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -414);
	// lhz r6,-406(r1)
	ctx.current_instruction = 0x880F0AE4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + -406);
	// lhz r5,-412(r1)
	ctx.current_instruction = 0x880F0AE8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -412);
	// lhz r4,-404(r1)
	ctx.current_instruction = 0x880F0AEC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -404);
	// lhz r3,-410(r1)
	ctx.current_instruction = 0x880F0AF0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -410);
	// lhz r31,-402(r1)
	ctx.current_instruction = 0x880F0AF4;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + -402);
	// lhz r30,-320(r1)
	ctx.current_instruction = 0x880F0AF8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + -320);
	// lhz r29,-312(r1)
	ctx.current_instruction = 0x880F0AFC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -312);
	// lhz r28,-318(r1)
	ctx.current_instruction = 0x880F0B00;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -318);
	// lhz r27,-310(r1)
	ctx.current_instruction = 0x880F0B04;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + -310);
	// lhz r26,-316(r1)
	ctx.current_instruction = 0x880F0B08;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + -316);
	// lhz r25,-308(r1)
	ctx.current_instruction = 0x880F0B0C;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + -308);
	// lhz r24,-314(r1)
	ctx.current_instruction = 0x880F0B10;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + -314);
	// lhz r23,-306(r1)
	ctx.current_instruction = 0x880F0B14;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -306);
	// sth r9,-256(r1)
	ctx.current_instruction = 0x880F0B18;
	REX_STORE_U16(ctx.r1.u32 + -256, ctx.r9.u16);
	// sth r8,-240(r1)
	ctx.current_instruction = 0x880F0B1C;
	REX_STORE_U16(ctx.r1.u32 + -240, ctx.r8.u16);
	// sth r7,-254(r1)
	ctx.current_instruction = 0x880F0B20;
	REX_STORE_U16(ctx.r1.u32 + -254, ctx.r7.u16);
	// sth r6,-238(r1)
	ctx.current_instruction = 0x880F0B24;
	REX_STORE_U16(ctx.r1.u32 + -238, ctx.r6.u16);
	// sth r5,-252(r1)
	ctx.current_instruction = 0x880F0B28;
	REX_STORE_U16(ctx.r1.u32 + -252, ctx.r5.u16);
	// sth r4,-236(r1)
	ctx.current_instruction = 0x880F0B2C;
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r4.u16);
	// sth r3,-250(r1)
	ctx.current_instruction = 0x880F0B30;
	REX_STORE_U16(ctx.r1.u32 + -250, ctx.r3.u16);
	// sth r31,-234(r1)
	ctx.current_instruction = 0x880F0B34;
	REX_STORE_U16(ctx.r1.u32 + -234, ctx.r31.u16);
	// sth r30,-248(r1)
	ctx.current_instruction = 0x880F0B38;
	REX_STORE_U16(ctx.r1.u32 + -248, ctx.r30.u16);
	// sth r29,-232(r1)
	ctx.current_instruction = 0x880F0B3C;
	REX_STORE_U16(ctx.r1.u32 + -232, ctx.r29.u16);
	// sth r28,-246(r1)
	ctx.current_instruction = 0x880F0B40;
	REX_STORE_U16(ctx.r1.u32 + -246, ctx.r28.u16);
	// sth r27,-230(r1)
	ctx.current_instruction = 0x880F0B44;
	REX_STORE_U16(ctx.r1.u32 + -230, ctx.r27.u16);
	// sth r26,-244(r1)
	ctx.current_instruction = 0x880F0B48;
	REX_STORE_U16(ctx.r1.u32 + -244, ctx.r26.u16);
	// sth r25,-228(r1)
	ctx.current_instruction = 0x880F0B4C;
	REX_STORE_U16(ctx.r1.u32 + -228, ctx.r25.u16);
	// sth r24,-242(r1)
	ctx.current_instruction = 0x880F0B50;
	REX_STORE_U16(ctx.r1.u32 + -242, ctx.r24.u16);
	// sth r23,-226(r1)
	ctx.current_instruction = 0x880F0B54;
	REX_STORE_U16(ctx.r1.u32 + -226, ctx.r23.u16);
	// sth r20,-280(r1)
	ctx.current_instruction = 0x880F0B58;
	REX_STORE_U16(ctx.r1.u32 + -280, ctx.r20.u16);
	// sth r19,-264(r1)
	ctx.current_instruction = 0x880F0B5C;
	REX_STORE_U16(ctx.r1.u32 + -264, ctx.r19.u16);
	// sth r18,-278(r1)
	ctx.current_instruction = 0x880F0B60;
	REX_STORE_U16(ctx.r1.u32 + -278, ctx.r18.u16);
	// sth r17,-262(r1)
	ctx.current_instruction = 0x880F0B64;
	REX_STORE_U16(ctx.r1.u32 + -262, ctx.r17.u16);
	// sth r16,-276(r1)
	ctx.current_instruction = 0x880F0B68;
	REX_STORE_U16(ctx.r1.u32 + -276, ctx.r16.u16);
	// sth r15,-260(r1)
	ctx.current_instruction = 0x880F0B6C;
	REX_STORE_U16(ctx.r1.u32 + -260, ctx.r15.u16);
	// sth r10,-274(r1)
	ctx.current_instruction = 0x880F0B70;
	REX_STORE_U16(ctx.r1.u32 + -274, ctx.r10.u16);
	// sth r14,-258(r1)
	ctx.current_instruction = 0x880F0B74;
	REX_STORE_U16(ctx.r1.u32 + -258, ctx.r14.u16);
loc_880F0B78:
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// lhzx r20,r11,r22
	ctx.current_instruction = 0x880F0B7C;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r19,r11,r10
	ctx.current_instruction = 0x880F0B80;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r1,-416
	ctx.r10.s64 = ctx.r1.s64 + -416;
	// sthx r20,r11,r21
	ctx.current_instruction = 0x880F0B88;
	REX_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r20.u16);
	// sthx r19,r11,r10
	ctx.current_instruction = 0x880F0B8C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0B78;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// sth r31,-362(r1)
	ctx.current_instruction = 0x880F0B9C;
	REX_STORE_U16(ctx.r1.u32 + -362, ctx.r31.u16);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r30,-376(r1)
	ctx.current_instruction = 0x880F0BA4;
	REX_STORE_U16(ctx.r1.u32 + -376, ctx.r30.u16);
	// addi r10,r10,17680
	ctx.r10.s64 = ctx.r10.s64 + 17680;
	// sth r9,-384(r1)
	ctx.current_instruction = 0x880F0BAC;
	REX_STORE_U16(ctx.r1.u32 + -384, ctx.r9.u16);
	// sth r8,-368(r1)
	ctx.current_instruction = 0x880F0BB0;
	REX_STORE_U16(ctx.r1.u32 + -368, ctx.r8.u16);
	// addi r22,r1,-416
	ctx.r22.s64 = ctx.r1.s64 + -416;
	// lwz r8,-424(r1)
	ctx.current_instruction = 0x880F0BB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r31,r10,80
	ctx.r31.s64 = ctx.r10.s64 + 80;
	// sth r3,-378(r1)
	ctx.current_instruction = 0x880F0BC4;
	REX_STORE_U16(ctx.r1.u32 + -378, ctx.r3.u16);
	// addi r30,r10,64
	ctx.r30.s64 = ctx.r10.s64 + 64;
	// sth r6,-366(r1)
	ctx.current_instruction = 0x880F0BCC;
	REX_STORE_U16(ctx.r1.u32 + -366, ctx.r6.u16);
	// sth r7,-382(r1)
	ctx.current_instruction = 0x880F0BD0;
	REX_STORE_U16(ctx.r1.u32 + -382, ctx.r7.u16);
	// subf r17,r8,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r20,r1,-400
	ctx.r20.s64 = ctx.r1.s64 + -400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// sth r4,-364(r1)
	ctx.current_instruction = 0x880F0BE4;
	REX_STORE_U16(ctx.r1.u32 + -364, ctx.r4.u16);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// sth r5,-380(r1)
	ctx.current_instruction = 0x880F0BEC;
	REX_STORE_U16(ctx.r1.u32 + -380, ctx.r5.u16);
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r29,-360(r1)
	ctx.current_instruction = 0x880F0BF4;
	REX_STORE_U16(ctx.r1.u32 + -360, ctx.r29.u16);
	// subf r31,r8,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r8.u64;
	// sth r27,-358(r1)
	ctx.current_instruction = 0x880F0BFC;
	REX_STORE_U16(ctx.r1.u32 + -358, ctx.r27.u16);
	// subf r30,r8,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r8.u64;
	// sth r28,-374(r1)
	ctx.current_instruction = 0x880F0C04;
	REX_STORE_U16(ctx.r1.u32 + -374, ctx.r28.u16);
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// sth r25,-356(r1)
	ctx.current_instruction = 0x880F0C0C;
	REX_STORE_U16(ctx.r1.u32 + -356, ctx.r25.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r26,-372(r1)
	ctx.current_instruction = 0x880F0C14;
	REX_STORE_U16(ctx.r1.u32 + -372, ctx.r26.u16);
	// subf r21,r8,r22
	ctx.r21.u64 = ctx.r22.u64 - ctx.r8.u64;
	// sth r23,-354(r1)
	ctx.current_instruction = 0x880F0C1C;
	REX_STORE_U16(ctx.r1.u32 + -354, ctx.r23.u16);
	// subf r20,r8,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r8.u64;
	// sth r24,-370(r1)
	ctx.current_instruction = 0x880F0C24;
	REX_STORE_U16(ctx.r1.u32 + -370, ctx.r24.u16);
	// subf r19,r8,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stw r3,-448(r1)
	ctx.current_instruction = 0x880F0C2C;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r3.u32);
	// subf r18,r8,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r31,-440(r1)
	ctx.current_instruction = 0x880F0C34;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r31.u32);
	// stw r30,-432(r1)
	ctx.current_instruction = 0x880F0C38;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r30.u32);
	// stw r17,-424(r1)
	ctx.current_instruction = 0x880F0C3C;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r17.u32);
	// b 0x880f0c54
	goto loc_880F0C54;
loc_880F0C44:
	// lwz r17,-424(r1)
	ctx.current_instruction = 0x880F0C44;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// lwz r30,-432(r1)
	ctx.current_instruction = 0x880F0C48;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// lwz r31,-440(r1)
	ctx.current_instruction = 0x880F0C4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// lwz r3,-448(r1)
	ctx.current_instruction = 0x880F0C50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
loc_880F0C54:
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// lhzx r16,r3,r11
	ctx.current_instruction = 0x880F0C58;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r7,r1,-400
	ctx.r7.s64 = ctx.r1.s64 + -400;
	// lhzx r6,r20,r11
	ctx.current_instruction = 0x880F0C60;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// lhzx r5,r21,r11
	ctx.current_instruction = 0x880F0C64;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r15,r31,r11
	ctx.current_instruction = 0x880F0C6C;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r14,r30,r11
	ctx.current_instruction = 0x880F0C74;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r4,r9,r8
	ctx.current_instruction = 0x880F0C78;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// lhzx r3,r9,r7
	ctx.current_instruction = 0x880F0C80;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhzx r30,r19,r11
	ctx.current_instruction = 0x880F0C88;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// lhzx r29,r18,r11
	ctx.current_instruction = 0x880F0C90;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhzx r17,r17,r11
	ctx.current_instruction = 0x880F0C98;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r11.u32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r26,r30
	ctx.r26.s64 = ctx.r30.s16;
	// lhz r30,0(r8)
	ctx.current_instruction = 0x880F0CB0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r25,16(r8)
	ctx.current_instruction = 0x880F0CB4;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// subf r24,r31,r3
	ctx.r24.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lhz r28,-16(r8)
	ctx.current_instruction = 0x880F0CBC;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r8.u32 + -16);
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lhz r8,32(r8)
	ctx.current_instruction = 0x880F0CC4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 32);
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r23,r3,r8
	ctx.r23.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r31,r26,r27
	ctx.r31.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// extsh r29,r23
	ctx.r29.s64 = ctx.r23.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// add r30,r24,r25
	ctx.r30.u64 = ctx.r24.u64 + ctx.r25.u64;
	// srawi r4,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 3;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// srawi r3,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 3;
	// subf r29,r28,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r28.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r23,r27,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r22,r25,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r5,r4,r23
	ctx.r5.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r4,r3,r22
	ctx.r4.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// add r31,r26,r8
	ctx.r31.u64 = ctx.r26.u64 + ctx.r8.u64;
	// lhzx r26,r9,r10
	ctx.current_instruction = 0x880F0D74;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r24,r7
	ctx.r29.u64 = ctx.r24.u64 + ctx.r7.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 3;
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// sth r6,-456(r1)
	ctx.current_instruction = 0x880F0D9C;
	REX_STORE_U16(ctx.r1.u32 + -456, ctx.r6.u16);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r25,r16
	ctx.r25.s64 = ctx.r16.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r16,r26
	ctx.r16.s64 = ctx.r26.s16;
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r28,r25,r3
	ctx.r28.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// extsh r5,r15
	ctx.r5.s64 = ctx.r15.s16;
	// add r29,r7,r27
	ctx.r29.u64 = ctx.r7.u64 + ctx.r27.u64;
	// mullw r24,r16,r31
	ctx.r24.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r31.s32);
	// extsh r4,r14
	ctx.r4.s64 = ctx.r14.s16;
	// mullw r15,r25,r30
	ctx.r15.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r27,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 16;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// srawi r25,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 16;
	// srawi r24,r15,16
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r15.s32 >> 16;
	// srawi r15,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r8.s32 >> 2;
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// addi r14,r10,16
	ctx.r14.s64 = ctx.r10.s64 + 16;
	// extsh r8,r22
	ctx.r8.s64 = ctx.r22.s16;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r22,r9,r14
	ctx.current_instruction = 0x880F0E28;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r14.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// extsh r28,r22
	ctx.r28.s64 = ctx.r22.s16;
	// lhz r22,-456(r1)
	ctx.current_instruction = 0x880F0E40;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -456);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// srawi r26,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 2;
	// mullw r29,r28,r6
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 16;
	// subf r7,r15,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r15.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r7,r27,r3
	ctx.r7.u64 = ctx.r27.u64 + ctx.r3.u64;
	// sth r6,-16(r11)
	ctx.current_instruction = 0x880F0E70;
	REX_STORE_U16(ctx.r11.u32 + -16, ctx.r6.u16);
	// add r3,r25,r31
	ctx.r3.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// sth r7,0(r11)
	ctx.current_instruction = 0x880F0E7C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// add r31,r24,r30
	ctx.r31.u64 = ctx.r24.u64 + ctx.r30.u64;
	// sth r3,32(r11)
	ctx.current_instruction = 0x880F0E84;
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// extsh r30,r17
	ctx.r30.s64 = ctx.r17.s16;
	// sth r31,64(r11)
	ctx.current_instruction = 0x880F0E90;
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r31.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r4,r30,r8
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// extsh r5,r22
	ctx.r5.s64 = ctx.r22.s16;
	// mullw r3,r28,r7
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r31,r30,r6
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// mullw r30,r16,r5
	ctx.r30.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r5.s32);
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r4,16(r11)
	ctx.current_instruction = 0x880F0EE0;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r4.u16);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r11)
	ctx.current_instruction = 0x880F0EE8;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r3.u16);
	// sth r8,80(r11)
	ctx.current_instruction = 0x880F0EEC;
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sth r7,-32(r11)
	ctx.current_instruction = 0x880F0EF4;
	REX_STORE_U16(ctx.r11.u32 + -32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0C44;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r20,36(r1)
	ctx.current_instruction = 0x880F0F04;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r23,r20,32
	ctx.r23.s64 = ctx.r20.s64 + 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0F14:
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r19,r7,96
	ctx.r19.s64 = ctx.r7.s64 + 96;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// addi r29,r10,128
	ctx.r29.s64 = ctx.r10.s64 + 128;
	// addi r28,r8,64
	ctx.r28.s64 = ctx.r8.s64 + 64;
	// lhz r7,-32(r9)
	ctx.current_instruction = 0x880F0F30;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -32);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r5,80(r9)
	ctx.current_instruction = 0x880F0F38;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 80);
	// addi r21,r10,128
	ctx.r21.s64 = ctx.r10.s64 + 128;
	// lhz r3,48(r9)
	ctx.current_instruction = 0x880F0F40;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 48);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r31,16(r9)
	ctx.current_instruction = 0x880F0F48;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhz r27,64(r9)
	ctx.current_instruction = 0x880F0F50;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r4,0(r9)
	ctx.current_instruction = 0x880F0F58;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// lhz r30,-16(r9)
	ctx.current_instruction = 0x880F0F60;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + -16);
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// lhz r9,32(r9)
	ctx.current_instruction = 0x880F0F68;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhzx r18,r11,r29
	ctx.current_instruction = 0x880F0F74;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r22,r11,r28
	ctx.current_instruction = 0x880F0F7C;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r26,r3,r9
	ctx.r26.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r25,r4,r5
	ctx.r25.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// extsh r26,r24
	ctx.r26.s64 = ctx.r24.s16;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r24,r26,r27
	ctx.r24.u64 = ctx.r26.u64 + ctx.r27.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// add r17,r24,r25
	ctx.r17.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r25,r24,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r24.u64;
	// extsh r24,r17
	ctx.r24.s64 = ctx.r17.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r18,r18
	ctx.r18.s64 = ctx.r18.s16;
	// add r22,r22,r24
	ctx.r22.u64 = ctx.r22.u64 + ctx.r24.u64;
	// subf r30,r30,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r17,r18,r25
	ctx.r17.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// mullw r4,r22,r18
	ctx.r4.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r18.s32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// srawi r31,r17,16
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r17.s32 >> 16;
	// srawi r30,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 16;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r4,r22
	ctx.r4.s64 = ctx.r22.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subf r6,r3,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r3,r29,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r29.u64;
	// subf r9,r26,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r26.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r27,r4,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// sth r4,32(r8)
	ctx.current_instruction = 0x880F1018;
	REX_STORE_U16(ctx.r8.u32 + 32, ctx.r4.u16);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// sthx r31,r11,r20
	ctx.current_instruction = 0x880F1024;
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r31.u16);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r26,r9,112
	ctx.r26.s64 = ctx.r9.s64 + 112;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r24,r21,32
	ctx.r24.s64 = ctx.r21.s64 + 32;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r6,128
	ctx.r22.s64 = ctx.r6.s64 + 128;
	// addi r21,r5,160
	ctx.r21.s64 = ctx.r5.s64 + 160;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r17,r5,192
	ctx.r17.s64 = ctx.r5.s64 + 192;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// addi r18,r6,176
	ctx.r18.s64 = ctx.r6.s64 + 176;
	// addi r16,r5,144
	ctx.r16.s64 = ctx.r5.s64 + 144;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// lhzx r31,r11,r26
	ctx.current_instruction = 0x880F1074;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lhzx r30,r11,r19
	ctx.current_instruction = 0x880F107C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r30,r25,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r25.u64;
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// lhzx r27,r11,r24
	ctx.current_instruction = 0x880F10A4;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r7,r7,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r7.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r30,r31,r9
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r31,r7
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// srawi r31,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 16;
	// srawi r30,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 16;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// sth r9,64(r8)
	ctx.current_instruction = 0x880F10D4;
	REX_STORE_U16(ctx.r8.u32 + 64, ctx.r9.u16);
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r7,r11,r23
	ctx.current_instruction = 0x880F10DC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r7.u16);
	// addi r28,r10,128
	ctx.r28.s64 = ctx.r10.s64 + 128;
	// lhzx r7,r11,r22
	ctx.current_instruction = 0x880F10E4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// addi r31,r10,128
	ctx.r31.s64 = ctx.r10.s64 + 128;
	// addi r29,r28,208
	ctx.r29.s64 = ctx.r28.s64 + 208;
	// lhzx r28,r11,r21
	ctx.current_instruction = 0x880F10F0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// lhzx r27,r11,r18
	ctx.current_instruction = 0x880F10F4;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// addi r30,r10,128
	ctx.r30.s64 = ctx.r10.s64 + 128;
	// lhzx r26,r11,r17
	ctx.current_instruction = 0x880F10FC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r17.u32);
	// lhzx r9,r11,r16
	ctx.current_instruction = 0x880F1100;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r16.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r25,r9,r6
	ctx.r25.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lhzx r24,r11,r29
	ctx.current_instruction = 0x880F110C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// srawi r7,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 2;
	// add r29,r9,r5
	ctx.r29.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// add r28,r9,r5
	ctx.r28.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// subf r6,r29,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r27,r9,r3
	ctx.r27.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// srawi r5,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 2;
	// subf r29,r3,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r7,r5,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r5.u64;
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r3,r3,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lhzx r31,r11,r7
	ctx.current_instruction = 0x880F1190;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// lhzx r30,r11,r6
	ctx.current_instruction = 0x880F1198;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// addi r28,r9,240
	ctx.r28.s64 = ctx.r9.s64 + 240;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// mullw r31,r31,r5
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// sth r5,80(r8)
	ctx.current_instruction = 0x880F11C8;
	REX_STORE_U16(ctx.r8.u32 + 80, ctx.r5.u16);
	// add r9,r29,r4
	ctx.r9.u64 = ctx.r29.u64 + ctx.r4.u64;
	// sth r3,-16(r8)
	ctx.current_instruction = 0x880F11D0;
	REX_STORE_U16(ctx.r8.u32 + -16, ctx.r3.u16);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// lhzx r3,r11,r28
	ctx.current_instruction = 0x880F11D8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r4,r11,r7
	ctx.current_instruction = 0x880F11E0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r7,r5,224
	ctx.r7.s64 = ctx.r5.s64 + 224;
	// lhzx r5,r11,r6
	ctx.current_instruction = 0x880F11E8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r31,r5
	ctx.r31.s64 = ctx.r5.s16;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lhzx r7,r11,r7
	ctx.current_instruction = 0x880F11F8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// add r5,r25,r9
	ctx.r5.u64 = ctx.r25.u64 + ctx.r9.u64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r6,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r6,r3,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r5,r31,r9
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// srawi r5,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 16;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r7,48(r8)
	ctx.current_instruction = 0x880F125C;
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r7.u16);
	// sth r6,16(r8)
	ctx.current_instruction = 0x880F1260;
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r6.u16);
	// bdnz 0x880f0f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0F14;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881108A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881108A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881108A8) {
			switch (rex_dispatch_address) {
				case 0x881108B0:
				case 0x88110C60:
				case 0x88110C70:
				case 0x88110C84:
				case 0x88110C98:
				case 0x88110CAC:
				case 0x88110CC0:
				case 0x88110CD4:
				case 0x88110CE4:
				case 0x88110CF4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881108A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881108B0: goto loc_881108B0;
		case 0x88110C60: goto loc_88110C60;
		case 0x88110C70: goto loc_88110C70;
		case 0x88110C84: goto loc_88110C84;
		case 0x88110C98: goto loc_88110C98;
		case 0x88110CAC: goto loc_88110CAC;
		case 0x88110CC0: goto loc_88110CC0;
		case 0x88110CD4: goto loc_88110CD4;
		case 0x88110CE4: goto loc_88110CE4;
		case 0x88110CF4: goto loc_88110CF4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881108B0;
	__savegprlr_14(ctx, base);
loc_881108B0:
	// stwu r1,-416(r1)
	ctx.current_instruction = 0x881108B0;
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,208(r1)
	ctx.current_instruction = 0x881108C0;
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r10.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r10,210(r1)
	ctx.current_instruction = 0x881108C8;
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r10.u8);
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r9,209(r1)
	ctx.current_instruction = 0x881108D0;
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r9.u8);
	// li r24,2
	ctx.r24.s64 = 2;
	// stb r10,212(r1)
	ctx.current_instruction = 0x881108D8;
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// li r25,6
	ctx.r25.s64 = 6;
	// stb r6,213(r1)
	ctx.current_instruction = 0x881108E0;
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r6.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r24,211(r1)
	ctx.current_instruction = 0x881108E8;
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r24.u8);
	// li r26,10
	ctx.r26.s64 = 10;
	// stb r10,214(r1)
	ctx.current_instruction = 0x881108F0;
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// li r27,14
	ctx.r27.s64 = 14;
	// stb r25,215(r1)
	ctx.current_instruction = 0x881108F8;
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,216(r1)
	ctx.current_instruction = 0x88110900;
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r10.u8);
	// li r28,17
	ctx.r28.s64 = 17;
	// stb r7,217(r1)
	ctx.current_instruction = 0x88110908;
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r7.u8);
	// li r29,9
	ctx.r29.s64 = 9;
	// stb r10,218(r1)
	ctx.current_instruction = 0x88110910;
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r10.u8);
	// li r30,13
	ctx.r30.s64 = 13;
	// stb r26,219(r1)
	ctx.current_instruction = 0x88110918;
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r26.u8);
	// li r23,3
	ctx.r23.s64 = 3;
	// stb r10,220(r1)
	ctx.current_instruction = 0x88110920;
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r10.u8);
	// li r20,7
	ctx.r20.s64 = 7;
	// stb r8,221(r1)
	ctx.current_instruction = 0x88110928;
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r8.u8);
	// li r31,20
	ctx.r31.s64 = 20;
	// stb r10,222(r1)
	ctx.current_instruction = 0x88110930;
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r10.u8);
	// li r19,21
	ctx.r19.s64 = 21;
	// stb r27,223(r1)
	ctx.current_instruction = 0x88110938;
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r27.u8);
	// li r4,24
	ctx.r4.s64 = 24;
	// stb r9,96(r1)
	ctx.current_instruction = 0x88110940;
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r3,97(r1)
	ctx.current_instruction = 0x88110948;
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r3.u8);
	// li r18,25
	ctx.r18.s64 = 25;
	// stb r10,98(r1)
	ctx.current_instruction = 0x88110950;
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// li r21,11
	ctx.r21.s64 = 11;
	// stb r28,99(r1)
	ctx.current_instruction = 0x88110958;
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r28.u8);
	// li r22,15
	ctx.r22.s64 = 15;
	// stb r6,100(r1)
	ctx.current_instruction = 0x88110960;
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// li r17,29
	ctx.r17.s64 = 29;
	// stb r11,101(r1)
	ctx.current_instruction = 0x88110968;
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r31,102(r1)
	ctx.current_instruction = 0x8811096C;
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r31.u8);
	// stb r19,103(r1)
	ctx.current_instruction = 0x88110970;
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r19.u8);
	// stb r7,104(r1)
	ctx.current_instruction = 0x88110974;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stb r29,105(r1)
	ctx.current_instruction = 0x88110978;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r29.u8);
	// stb r4,106(r1)
	ctx.current_instruction = 0x8811097C;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r4.u8);
	// stb r18,107(r1)
	ctx.current_instruction = 0x88110980;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r18.u8);
	// stb r8,108(r1)
	ctx.current_instruction = 0x88110984;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stb r30,109(r1)
	ctx.current_instruction = 0x88110988;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r30.u8);
	// stb r5,110(r1)
	ctx.current_instruction = 0x8811098C;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r17,111(r1)
	ctx.current_instruction = 0x88110990;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r17.u8);
	// stb r24,112(r1)
	ctx.current_instruction = 0x88110994;
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// stb r23,113(r1)
	ctx.current_instruction = 0x88110998;
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r23.u8);
	// stb r6,114(r1)
	ctx.current_instruction = 0x8811099C;
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r11,115(r1)
	ctx.current_instruction = 0x881109A0;
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r25,116(r1)
	ctx.current_instruction = 0x881109A4;
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r25.u8);
	// stb r20,117(r1)
	ctx.current_instruction = 0x881109A8;
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r20.u8);
	// stb r7,118(r1)
	ctx.current_instruction = 0x881109AC;
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r29,119(r1)
	ctx.current_instruction = 0x881109B0;
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// stb r26,120(r1)
	ctx.current_instruction = 0x881109B4;
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// stb r21,121(r1)
	ctx.current_instruction = 0x881109B8;
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r21.u8);
	// stb r8,122(r1)
	ctx.current_instruction = 0x881109BC;
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r30,123(r1)
	ctx.current_instruction = 0x881109C0;
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r30.u8);
	// stb r27,124(r1)
	ctx.current_instruction = 0x881109C4;
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r27.u8);
	// stb r22,125(r1)
	ctx.current_instruction = 0x881109C8;
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r22.u8);
	// stb r10,126(r1)
	ctx.current_instruction = 0x881109CC;
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r10.u8);
	// stb r28,127(r1)
	ctx.current_instruction = 0x881109D0;
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r28.u8);
	// stb r9,176(r1)
	ctx.current_instruction = 0x881109D4;
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// stb r3,177(r1)
	ctx.current_instruction = 0x881109D8;
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r3.u8);
	// stb r24,178(r1)
	ctx.current_instruction = 0x881109DC;
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r24.u8);
	// stb r23,179(r1)
	ctx.current_instruction = 0x881109E0;
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r23.u8);
	// stb r6,180(r1)
	ctx.current_instruction = 0x881109E4;
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r6.u8);
	// stb r11,181(r1)
	ctx.current_instruction = 0x881109E8;
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r11.u8);
	// stb r25,182(r1)
	ctx.current_instruction = 0x881109EC;
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r25.u8);
	// stb r20,183(r1)
	ctx.current_instruction = 0x881109F0;
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r20.u8);
	// stb r10,184(r1)
	ctx.current_instruction = 0x881109F4;
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r10.u8);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// stb r3,129(r1)
	ctx.current_instruction = 0x881109FC;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r3.u8);
	// stb r11,131(r1)
	ctx.current_instruction = 0x88110A00;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// lis r18,-30678
	ctx.r18.s64 = -2010513408;
	// addi r3,r23,-19928
	ctx.r3.s64 = ctx.r23.s64 + -19928;
	// stb r24,160(r1)
	ctx.current_instruction = 0x88110A0C;
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// li r24,18
	ctx.r24.s64 = 18;
	// stb r19,189(r1)
	ctx.current_instruction = 0x88110A14;
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r19.u8);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// stb r25,162(r1)
	ctx.current_instruction = 0x88110A1C;
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r25.u8);
	// lis r17,-30678
	ctx.r17.s64 = -2010513408;
	// stb r24,80(r1)
	ctx.current_instruction = 0x88110A24;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,185(r1)
	ctx.current_instruction = 0x88110A2C;
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r28.u8);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stb r28,137(r1)
	ctx.current_instruction = 0x88110A34;
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r28.u8);
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
	// stb r31,188(r1)
	ctx.current_instruction = 0x88110A3C;
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// lis r16,-30678
	ctx.r16.s64 = -2010513408;
	// stb r9,128(r1)
	ctx.current_instruction = 0x88110A44;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r6,130(r1)
	ctx.current_instruction = 0x88110A4C;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r7,132(r1)
	ctx.current_instruction = 0x88110A54;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r7.u8);
	// stw r20,25772(r18)
	ctx.current_instruction = 0x88110A58;
	REX_STORE_U32(ctx.r18.u32 + 25772, ctx.r20.u32);
	// lis r19,-30678
	ctx.r19.s64 = -2010513408;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r3,25768(r11)
	ctx.current_instruction = 0x88110A64;
	REX_STORE_U32(ctx.r11.u32 + 25768, ctx.r3.u32);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stw r19,256(r1)
	ctx.current_instruction = 0x88110A6C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
	// stw r20,25792(r17)
	ctx.current_instruction = 0x88110A70;
	REX_STORE_U32(ctx.r17.u32 + 25792, ctx.r20.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r29,133(r1)
	ctx.current_instruction = 0x88110A7C;
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r29.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r11,186(r1)
	ctx.current_instruction = 0x88110A84;
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stw r20,25784(r16)
	ctx.current_instruction = 0x88110A88;
	REX_STORE_U32(ctx.r16.u32 + 25784, ctx.r20.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r8,134(r1)
	ctx.current_instruction = 0x88110A94;
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r8.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r11,187(r1)
	ctx.current_instruction = 0x88110A9C;
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r11.u8);
	// lis r15,-30678
	ctx.r15.s64 = -2010513408;
	// stb r30,135(r1)
	ctx.current_instruction = 0x88110AA4;
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r10,136(r1)
	ctx.current_instruction = 0x88110AAC;
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// li r25,23
	ctx.r25.s64 = 23;
	// stw r15,244(r1)
	ctx.current_instruction = 0x88110AB4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// stw r11,25776(r19)
	ctx.current_instruction = 0x88110AB8;
	REX_STORE_U32(ctx.r19.u32 + 25776, ctx.r11.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// stb r25,191(r1)
	ctx.current_instruction = 0x88110AC0;
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r25.u8);
	// li r25,7
	ctx.r25.s64 = 7;
	// stb r11,139(r1)
	ctx.current_instruction = 0x88110AC8;
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// li r28,22
	ctx.r28.s64 = 22;
	// stw r20,25760(r15)
	ctx.current_instruction = 0x88110AD0;
	REX_STORE_U32(ctx.r15.u32 + 25760, ctx.r20.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r15,80(r1)
	ctx.current_instruction = 0x88110AD8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r20,29
	ctx.r20.s64 = 29;
	// stb r25,163(r1)
	ctx.current_instruction = 0x88110AE0;
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r25.u8);
	// li r25,22
	ctx.r25.s64 = 22;
	// stb r28,190(r1)
	ctx.current_instruction = 0x88110AE8;
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r28.u8);
	// li r28,25
	ctx.r28.s64 = 25;
	// stb r11,161(r1)
	ctx.current_instruction = 0x88110AF0;
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r11.u8);
	// li r11,19
	ctx.r11.s64 = 19;
	// stb r25,80(r1)
	ctx.current_instruction = 0x88110AF8;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// lis r14,-30678
	ctx.r14.s64 = -2010513408;
	// stb r31,138(r1)
	ctx.current_instruction = 0x88110B00;
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r4,140(r1)
	ctx.current_instruction = 0x88110B08;
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r4.u8);
	// li r19,23
	ctx.r19.s64 = 23;
	// stb r5,142(r1)
	ctx.current_instruction = 0x88110B10;
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r5.u8);
	// li r24,30
	ctx.r24.s64 = 30;
	// stb r26,164(r1)
	ctx.current_instruction = 0x88110B18;
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r26.u8);
	// li r25,31
	ctx.r25.s64 = 31;
	// stb r28,141(r1)
	ctx.current_instruction = 0x88110B20;
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r28.u8);
	// stb r20,143(r1)
	ctx.current_instruction = 0x88110B24;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r20.u8);
	// stb r21,165(r1)
	ctx.current_instruction = 0x88110B28;
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r21.u8);
	// stb r27,166(r1)
	ctx.current_instruction = 0x88110B2C;
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r27.u8);
	// stb r22,167(r1)
	ctx.current_instruction = 0x88110B30;
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r22.u8);
	// stb r15,168(r1)
	ctx.current_instruction = 0x88110B34;
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r15.u8);
	// stb r11,169(r1)
	ctx.current_instruction = 0x88110B38;
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r11.u8);
	// lbz r15,80(r1)
	ctx.current_instruction = 0x88110B3C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r10,228(r1)
	ctx.current_instruction = 0x88110B44;
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r10.u8);
	// stb r10,236(r1)
	ctx.current_instruction = 0x88110B48;
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r10.u8);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// stw r23,25764(r14)
	ctx.current_instruction = 0x88110B50;
	REX_STORE_U32(ctx.r14.u32 + 25764, ctx.r23.u32);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// stb r19,171(r1)
	ctx.current_instruction = 0x88110B58;
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r19.u8);
	// lis r19,-30678
	ctx.r19.s64 = -2010513408;
	// stb r9,224(r1)
	ctx.current_instruction = 0x88110B60;
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r9.u8);
	// stb r9,232(r1)
	ctx.current_instruction = 0x88110B64;
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r9.u8);
	// stb r9,144(r1)
	ctx.current_instruction = 0x88110B68;
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// stb r9,145(r1)
	ctx.current_instruction = 0x88110B6C;
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r9.u8);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stb r15,170(r1)
	ctx.current_instruction = 0x88110B74;
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r15.u8);
	// li r15,26
	ctx.r15.s64 = 26;
	// stw r14,248(r1)
	ctx.current_instruction = 0x88110B7C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r14.u32);
	// li r14,27
	ctx.r14.s64 = 27;
	// stw r16,240(r1)
	ctx.current_instruction = 0x88110B84;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r16.u32);
	// li r16,26
	ctx.r16.s64 = 26;
	// stw r17,252(r1)
	ctx.current_instruction = 0x88110B8C;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r17.u32);
	// li r17,27
	ctx.r17.s64 = 27;
	// stb r4,200(r1)
	ctx.current_instruction = 0x88110B94;
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r4.u8);
	// stb r5,204(r1)
	ctx.current_instruction = 0x88110B98;
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r4,230(r1)
	ctx.current_instruction = 0x88110B9C;
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r4.u8);
	// stb r5,231(r1)
	ctx.current_instruction = 0x88110BA0;
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r5.u8);
	// stb r4,238(r1)
	ctx.current_instruction = 0x88110BA4;
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r4.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r5,239(r1)
	ctx.current_instruction = 0x88110BAC;
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r5.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r15,172(r1)
	ctx.current_instruction = 0x88110BB4;
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r15.u8);
	// stb r14,173(r1)
	ctx.current_instruction = 0x88110BB8;
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r14.u8);
	// stb r24,174(r1)
	ctx.current_instruction = 0x88110BBC;
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r24.u8);
	// stb r25,175(r1)
	ctx.current_instruction = 0x88110BC0;
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// stb r7,192(r1)
	ctx.current_instruction = 0x88110BC4;
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r7.u8);
	// stb r29,193(r1)
	ctx.current_instruction = 0x88110BC8;
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r29.u8);
	// stb r26,194(r1)
	ctx.current_instruction = 0x88110BCC;
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r26.u8);
	// stb r21,195(r1)
	ctx.current_instruction = 0x88110BD0;
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r21.u8);
	// stb r8,196(r1)
	ctx.current_instruction = 0x88110BD4;
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r8.u8);
	// stb r30,197(r1)
	ctx.current_instruction = 0x88110BD8;
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r30.u8);
	// stb r27,198(r1)
	ctx.current_instruction = 0x88110BDC;
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r27.u8);
	// stb r22,199(r1)
	ctx.current_instruction = 0x88110BE0;
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r22.u8);
	// stb r28,201(r1)
	ctx.current_instruction = 0x88110BE4;
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r28.u8);
	// stb r16,202(r1)
	ctx.current_instruction = 0x88110BE8;
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r16.u8);
	// stb r17,203(r1)
	ctx.current_instruction = 0x88110BEC;
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r17.u8);
	// stb r20,205(r1)
	ctx.current_instruction = 0x88110BF0;
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r20.u8);
	// stb r24,206(r1)
	ctx.current_instruction = 0x88110BF4;
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r24.u8);
	// stb r25,207(r1)
	ctx.current_instruction = 0x88110BF8;
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r25.u8);
	// stb r6,225(r1)
	ctx.current_instruction = 0x88110BFC;
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r6.u8);
	// stb r7,226(r1)
	ctx.current_instruction = 0x88110C00;
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r7.u8);
	// stb r8,227(r1)
	ctx.current_instruction = 0x88110C04;
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r8.u8);
	// stb r31,229(r1)
	ctx.current_instruction = 0x88110C08;
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r31.u8);
	// stb r6,233(r1)
	ctx.current_instruction = 0x88110C0C;
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r6.u8);
	// stb r7,234(r1)
	ctx.current_instruction = 0x88110C10;
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r7.u8);
	// stb r8,235(r1)
	ctx.current_instruction = 0x88110C14;
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r8.u8);
	// stb r31,237(r1)
	ctx.current_instruction = 0x88110C18;
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r31.u8);
	// stb r11,146(r1)
	ctx.current_instruction = 0x88110C1C;
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	ctx.current_instruction = 0x88110C20;
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// stb r11,148(r1)
	ctx.current_instruction = 0x88110C24;
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stb r11,149(r1)
	ctx.current_instruction = 0x88110C28;
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// stb r11,150(r1)
	ctx.current_instruction = 0x88110C2C;
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
	// stb r11,151(r1)
	ctx.current_instruction = 0x88110C30;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r11,152(r1)
	ctx.current_instruction = 0x88110C34;
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	ctx.current_instruction = 0x88110C38;
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	ctx.current_instruction = 0x88110C3C;
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r11,155(r1)
	ctx.current_instruction = 0x88110C40;
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// stb r11,156(r1)
	ctx.current_instruction = 0x88110C44;
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stb r11,157(r1)
	ctx.current_instruction = 0x88110C48;
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// stb r11,158(r1)
	ctx.current_instruction = 0x88110C4C;
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// stb r11,159(r1)
	ctx.current_instruction = 0x88110C50;
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// stw r10,25788(r19)
	ctx.current_instruction = 0x88110C54;
	REX_STORE_U32(ctx.r19.u32 + 25788, ctx.r10.u32);
	// stw r9,25780(r23)
	ctx.current_instruction = 0x88110C58;
	REX_STORE_U32(ctx.r23.u32 + 25780, ctx.r9.u32);
	// bl 0x880547a0
	ctx.lr = 0x88110C60;
	sub_880547A0(ctx, base);
loc_88110C60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,25772(r18)
	ctx.current_instruction = 0x88110C64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25772);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x88110C70;
	sub_880547A0(ctx, base);
loc_88110C70:
	// lwz r18,252(r1)
	ctx.current_instruction = 0x88110C70;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25792(r18)
	ctx.current_instruction = 0x88110C7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25792);
	// bl 0x880547a0
	ctx.lr = 0x88110C84;
	sub_880547A0(ctx, base);
loc_88110C84:
	// lwz r18,240(r1)
	ctx.current_instruction = 0x88110C84;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25784(r18)
	ctx.current_instruction = 0x88110C90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25784);
	// bl 0x880547a0
	ctx.lr = 0x88110C98;
	sub_880547A0(ctx, base);
loc_88110C98:
	// lwz r18,244(r1)
	ctx.current_instruction = 0x88110C98;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25760(r18)
	ctx.current_instruction = 0x88110CA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25760);
	// bl 0x880547a0
	ctx.lr = 0x88110CAC;
	sub_880547A0(ctx, base);
loc_88110CAC:
	// lwz r18,256(r1)
	ctx.current_instruction = 0x88110CAC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25776(r18)
	ctx.current_instruction = 0x88110CB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25776);
	// bl 0x880547a0
	ctx.lr = 0x88110CC0;
	sub_880547A0(ctx, base);
loc_88110CC0:
	// lwz r18,248(r1)
	ctx.current_instruction = 0x88110CC0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25764(r18)
	ctx.current_instruction = 0x88110CCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25764);
	// bl 0x880547a0
	ctx.lr = 0x88110CD4;
	sub_880547A0(ctx, base);
loc_88110CD4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,25788(r19)
	ctx.current_instruction = 0x88110CD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 25788);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x88110CE4;
	sub_880547A0(ctx, base);
loc_88110CE4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25780(r23)
	ctx.current_instruction = 0x88110CEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 25780);
	// bl 0x880547a0
	ctx.lr = 0x88110CF4;
	sub_880547A0(ctx, base);
loc_88110CF4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E4E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811E4E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811E4E8) {
			switch (rex_dispatch_address) {
				case 0x8811E4F0:
				case 0x8811E538:
				case 0x8811E578:
				case 0x8811E59C:
				case 0x8811E614:
				case 0x8811E634:
				case 0x8811E684:
				case 0x8811E6AC:
				case 0x8811E6E8:
				case 0x8811E710:
				case 0x8811E728:
				case 0x8811E748:
				case 0x8811E7A8:
				case 0x8811E7DC:
				case 0x8811E834:
				case 0x8811E8D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811E4E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811E4F0: goto loc_8811E4F0;
		case 0x8811E538: goto loc_8811E538;
		case 0x8811E578: goto loc_8811E578;
		case 0x8811E59C: goto loc_8811E59C;
		case 0x8811E614: goto loc_8811E614;
		case 0x8811E634: goto loc_8811E634;
		case 0x8811E684: goto loc_8811E684;
		case 0x8811E6AC: goto loc_8811E6AC;
		case 0x8811E6E8: goto loc_8811E6E8;
		case 0x8811E710: goto loc_8811E710;
		case 0x8811E728: goto loc_8811E728;
		case 0x8811E748: goto loc_8811E748;
		case 0x8811E7A8: goto loc_8811E7A8;
		case 0x8811E7DC: goto loc_8811E7DC;
		case 0x8811E834: goto loc_8811E834;
		case 0x8811E8D0: goto loc_8811E8D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x8811E4F0;
	__savegprlr_16(ctx, base);
loc_8811E4F0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8811E4F0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r22,28(r3)
	ctx.current_instruction = 0x8811E4F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r16,r4,-24
	ctx.r16.s64 = ctx.r4.s64 + -24;
	// stw r19,100(r1)
	ctx.current_instruction = 0x8811E500;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r19,92(r1)
	ctx.current_instruction = 0x8811E508;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r19,88(r1)
	ctx.current_instruction = 0x8811E510;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x8811E514;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r19,104(r1)
	ctx.current_instruction = 0x8811E518;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8811E51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811E524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r16,96(r1)
	ctx.current_instruction = 0x8811E52C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// sth r19,80(r1)
	ctx.current_instruction = 0x8811E530;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// bctrl 
	ctx.lr = 0x8811E538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811E538:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// bge cr6,0x8811e560
	if (!ctx.cr6.lt) goto loc_8811E560;
loc_8811E54C:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_8811E560:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E578;
	sub_88119210(ctx, base);
loc_8811E578:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r22)
	ctx.current_instruction = 0x8811E588;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r26,2
	ctx.r26.s64 = 2;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E59C;
	sub_880CB2C0(ctx, base);
loc_8811E59C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811E5A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.current_instruction = 0x8811E5AC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r19,0(r11)
	ctx.current_instruction = 0x8811E5B8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// stw r19,4(r11)
	ctx.current_instruction = 0x8811E5BC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// lwz r8,4(r22)
	ctx.current_instruction = 0x8811E5C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x8811E5C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r7,72(r8)
	ctx.current_instruction = 0x8811E5C8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 72);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r8
	ctx.current_instruction = 0x8811E5D8;
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,4(r22)
	ctx.current_instruction = 0x8811E5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lhz r9,72(r11)
	ctx.current_instruction = 0x8811E5E0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,72(r11)
	ctx.current_instruction = 0x8811E5E8;
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r3.u16);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x8811E5EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r10,0(r8)
	ctx.current_instruction = 0x8811E5F0;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8811e8a8
	if (ctx.cr6.eq) goto loc_8811E8A8;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811E5F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r22)
	ctx.current_instruction = 0x8811E604;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E614;
	sub_880CB2C0(ctx, base);
loc_8811E614:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811E620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x8811E62C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88052d90
	ctx.lr = 0x8811E634;
	sub_88052D90(ctx, base);
loc_8811E634:
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8811E634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r17,4(r10)
	ctx.current_instruction = 0x8811E640;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8811e8a8
	if (ctx.cr6.eq) goto loc_8811E8A8;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r21,r10,22
	ctx.r21.u64 = ctx.r10.u64 | 22;
loc_8811E654:
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x8811e54c
	if (ctx.cr6.gt) goto loc_8811E54C;
	// rlwinm r10,r11,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r30,r10,r17
	ctx.r30.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x88119210
	ctx.lr = 0x8811E684;
	sub_88119210(ctx, base);
loc_8811E684:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E6AC;
	sub_88119210(ctx, base);
loc_8811E6AC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r27)
	ctx.current_instruction = 0x8811E6B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e898
	if (ctx.cr6.eq) goto loc_8811E898;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r22)
	ctx.current_instruction = 0x8811E6CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E6E8;
	sub_880CB2C0(ctx, base);
loc_8811E6E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r27)
	ctx.current_instruction = 0x8811E6F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8811E6FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x8811E710;
	sub_88052D90(ctx, base);
loc_8811E710:
	// lhz r10,0(r30)
	ctx.current_instruction = 0x8811E710;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.current_instruction = 0x8811E718;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 148);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r25,0(r29)
	ctx.current_instruction = 0x8811E720;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x880cb730
	ctx.lr = 0x8811E728;
	sub_880CB730(ctx, base);
loc_8811E728:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8811e760
	if (!ctx.cr6.eq) goto loc_8811E760;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8811E734;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.current_instruction = 0x8811E73C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 148);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x880cb648
	ctx.lr = 0x8811E748;
	sub_880CB648(ctx, base);
loc_8811E748:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8811E754;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811E758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,0(r10)
	ctx.current_instruction = 0x8811E75C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8811E760:
	// lhz r10,0(r27)
	ctx.current_instruction = 0x8811E760;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811e898
	if (ctx.cr6.eq) goto loc_8811E898;
	// addi r28,r26,18
	ctx.r28.s64 = ctx.r26.s64 + 18;
loc_8811E774:
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x8811e54c
	if (ctx.cr6.gt) goto loc_8811E54C;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E7A8;
	sub_88119210(ctx, base);
loc_8811E7A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811E7B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8811E7B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8811e81c
	if (!ctx.cr6.eq) goto loc_8811E81C;
	// lwz r11,4(r22)
	ctx.current_instruction = 0x8811E7C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x8811E7CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x8811E7D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x8811E7DC;
	sub_880CB730(ctx, base);
loc_8811E7DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e81c
	if (ctx.cr6.lt) goto loc_8811E81C;
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8811E7E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811E7E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x8811E7EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,48(r10)
	ctx.current_instruction = 0x8811E7F0;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r8,104(r1)
	ctx.current_instruction = 0x8811E7F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8811E7F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,24(r8)
	ctx.current_instruction = 0x8811E7FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r6,64(r7)
	ctx.current_instruction = 0x8811E800;
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r6.u32);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x8811E804;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.current_instruction = 0x8811E808;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ld r3,16(r5)
	ctx.current_instruction = 0x8811E80C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r3,56(r4)
	ctx.current_instruction = 0x8811E810;
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811E814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,68(r11)
	ctx.current_instruction = 0x8811E818;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r24.u32);
loc_8811E81C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811E834;
	sub_881196F8(ctx, base);
loc_8811E834:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811E840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,18
	ctx.r26.s64 = ctx.r26.s64 + 18;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r28,r28,18
	ctx.r28.s64 = ctx.r28.s64 + 18;
	// stw r24,80(r10)
	ctx.current_instruction = 0x8811E854;
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r24.u32);
	// lhz r8,0(r30)
	ctx.current_instruction = 0x8811E858;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811E85C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addi r6,r10,21
	ctx.r6.s64 = ctx.r10.s64 + 21;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x8811E87C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r7,r24,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r3.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r9
	ctx.current_instruction = 0x8811E888;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lhz r5,0(r27)
	ctx.current_instruction = 0x8811E88C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8811e774
	if (ctx.cr6.lt) goto loc_8811E774;
loc_8811E898:
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8811e654
	if (ctx.cr6.lt) goto loc_8811E654;
loc_8811E8A8:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811E8A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r11,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r11.u64;
	// subf. r30,r26,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811e8ec
	if (ctx.cr0.eq) goto loc_8811E8EC;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8811E8B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811E8C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811E8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811E8D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// ld r10,8(r22)
	ctx.current_instruction = 0x8811E8DC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r22.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r22)
	ctx.current_instruction = 0x8811E8E8;
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r11.u64);
loc_8811E8EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881259E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881259E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881259E0;
	ctx.current_instruction = 0x881259E0;
	// b 0x88125920
	sub_88125920(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125B28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125B28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125B28) {
			switch (rex_dispatch_address) {
				case 0x88125B30:
				case 0x88125B6C:
				case 0x88125B9C:
				case 0x88125C1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125B28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125B30: goto loc_88125B30;
		case 0x88125B6C: goto loc_88125B6C;
		case 0x88125B9C: goto loc_88125B9C;
		case 0x88125C1C: goto loc_88125C1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88125B30;
	__savegprlr_28(ctx, base);
loc_88125B30:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88125B30;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88125B34;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88125B40;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88125B48;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,40(r31)
	ctx.current_instruction = 0x88125B4C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// stw r4,68(r31)
	ctx.current_instruction = 0x88125B50;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x88125B54;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_88125B58:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,72(r31)
	ctx.current_instruction = 0x88125B5C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88125578
	ctx.lr = 0x88125B6C;
	sub_88125578(ctx, base);
loc_88125B6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125c40
	if (ctx.cr6.lt) goto loc_88125C40;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88125B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88125c08
	if (ctx.cr6.eq) goto loc_88125C08;
	// lwz r30,84(r1)
	ctx.current_instruction = 0x88125B80;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88125B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,8(r11)
	ctx.current_instruction = 0x88125B88;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x88125ba4
	if (!ctx.cr6.eq) goto loc_88125BA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88125100
	ctx.lr = 0x88125B9C;
	sub_88125100(ctx, base);
loc_88125B9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125c40
	if (ctx.cr6.lt) goto loc_88125C40;
loc_88125BA4:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88125BA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,72(r31)
	ctx.current_instruction = 0x88125BA8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r8,68(r31)
	ctx.current_instruction = 0x88125BAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r10,4(r9)
	ctx.current_instruction = 0x88125BB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.current_instruction = 0x88125BB8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x88125bd4
	if (ctx.cr6.lt) goto loc_88125BD4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x88125be4
	goto loc_88125BE4;
loc_88125BD4:
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88125BE4:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,68(r31)
	ctx.current_instruction = 0x88125BF0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x88125BF4;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// beq 0x88125c08
	if (ctx.cr0.eq) goto loc_88125C08;
	// ld r10,32(r31)
	ctx.current_instruction = 0x88125BFC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x88125b58
	if (!ctx.cr6.gt) goto loc_88125B58;
loc_88125C08:
	// lwz r4,68(r31)
	ctx.current_instruction = 0x88125C08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88125c30
	if (ctx.cr6.eq) goto loc_88125C30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88125920
	ctx.lr = 0x88125C1C;
	sub_88125920(ctx, base);
loc_88125C1C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_88125C30:
	// ld r11,40(r31)
	ctx.current_instruction = 0x88125C30;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r31)
	ctx.current_instruction = 0x88125C3C;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_88125C40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88129D98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88129D98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88129D98) {
			switch (rex_dispatch_address) {
				case 0x88129DA0:
				case 0x88129DA8:
				case 0x88129FC0:
				case 0x8812A054:
				case 0x8812A0D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88129D98;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88129DA0: goto loc_88129DA0;
		case 0x88129DA8: goto loc_88129DA8;
		case 0x88129FC0: goto loc_88129FC0;
		case 0x8812A054: goto loc_8812A054;
		case 0x8812A0D0: goto loc_8812A0D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88129DA0;
	__savegprlr_24(ctx, base);
loc_88129DA0:
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x881ef260
	ctx.lr = 0x88129DA8;
	__savefpr_18(ctx, base);
loc_88129DA8:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x88129DA8;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.current_instruction = 0x88129DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8812a0c0
	if (ctx.cr6.lt) goto loc_8812A0C0;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88129DBC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8812a0c0
	if (ctx.cr6.lt) goto loc_8812A0C0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfs f24,14504(r11)
	ctx.current_instruction = 0x88129DE4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14504);
	ctx.f24.f64 = double(temp.f32);
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfs f25,8892(r10)
	ctx.current_instruction = 0x88129DEC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8892);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfs f31,19216(r9)
	ctx.current_instruction = 0x88129DF4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19216);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfs f26,6728(r8)
	ctx.current_instruction = 0x88129DFC;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6728);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfs f22,6708(r7)
	ctx.current_instruction = 0x88129E04;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6708);
	ctx.f22.f64 = double(temp.f32);
	// lfd f21,12296(r6)
	ctx.current_instruction = 0x88129E08;
	ctx.f21.u64 = REX_LOAD_U64(ctx.r6.u32 + 12296);
	// lfs f18,12180(r5)
	ctx.current_instruction = 0x88129E0C;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12180);
	ctx.f18.f64 = double(temp.f32);
	// addi r25,r11,7688
	ctx.r25.s64 = ctx.r11.s64 + 7688;
	// lfs f19,12500(r4)
	ctx.current_instruction = 0x88129E14;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12500);
	ctx.f19.f64 = double(temp.f32);
	// lfd f20,8624(r3)
	ctx.current_instruction = 0x88129E18;
	ctx.f20.u64 = REX_LOAD_U64(ctx.r3.u32 + 8624);
loc_88129E1C:
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bgt cr6,0x88129fac
	if (ctx.cr6.gt) goto loc_88129FAC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8812a0b0
	if (ctx.cr6.eq) goto loc_8812A0B0;
	// bdz 0x88129e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88129E48;
	// bdz 0x88129e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88129E58;
	// bdz 0x88129e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88129E7C;
	// bdz 0x88129eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88129EB0;
	// bdz 0x88129ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88129EF4;
	// b 0x88129f48
	goto loc_88129F48;
loc_88129E48:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88129E4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,0(r10)
	ctx.current_instruction = 0x88129E50;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129E58:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// addi r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 + 12;
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88129E64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r8)
	ctx.current_instruction = 0x88129E68;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,548(r26)
	ctx.current_instruction = 0x88129E6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r6,8(r7)
	ctx.current_instruction = 0x88129E70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,4(r6)
	ctx.current_instruction = 0x88129E74;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129E7C:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// addi r10,r25,20
	ctx.r10.s64 = ctx.r25.s64 + 20;
	// addi r9,r25,32
	ctx.r9.s64 = ctx.r25.s64 + 32;
	// addi r8,r25,44
	ctx.r8.s64 = ctx.r25.s64 + 44;
	// lwz r7,12(r11)
	ctx.current_instruction = 0x88129E8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r7)
	ctx.current_instruction = 0x88129E90;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r6,548(r26)
	ctx.current_instruction = 0x88129E94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r5,12(r6)
	ctx.current_instruction = 0x88129E98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,4(r5)
	ctx.current_instruction = 0x88129E9C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r4,548(r26)
	ctx.current_instruction = 0x88129EA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r3,12(r4)
	ctx.current_instruction = 0x88129EA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,8(r3)
	ctx.current_instruction = 0x88129EA8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129EB0:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129EB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// addi r10,r25,56
	ctx.r10.s64 = ctx.r25.s64 + 56;
	// addi r9,r25,72
	ctx.r9.s64 = ctx.r25.s64 + 72;
	// addi r8,r25,88
	ctx.r8.s64 = ctx.r25.s64 + 88;
	// addi r7,r25,104
	ctx.r7.s64 = ctx.r25.s64 + 104;
	// lwz r6,16(r11)
	ctx.current_instruction = 0x88129EC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r6)
	ctx.current_instruction = 0x88129EC8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r5,548(r26)
	ctx.current_instruction = 0x88129ECC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r4,16(r5)
	ctx.current_instruction = 0x88129ED0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r9,4(r4)
	ctx.current_instruction = 0x88129ED4;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r3,548(r26)
	ctx.current_instruction = 0x88129ED8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r11,16(r3)
	ctx.current_instruction = 0x88129EDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,8(r11)
	ctx.current_instruction = 0x88129EE0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,548(r26)
	ctx.current_instruction = 0x88129EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x88129EE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,12(r9)
	ctx.current_instruction = 0x88129EEC;
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129EF4:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// addi r10,r25,120
	ctx.r10.s64 = ctx.r25.s64 + 120;
	// addi r9,r25,140
	ctx.r9.s64 = ctx.r25.s64 + 140;
	// addi r8,r25,160
	ctx.r8.s64 = ctx.r25.s64 + 160;
	// addi r7,r25,180
	ctx.r7.s64 = ctx.r25.s64 + 180;
	// addi r6,r25,200
	ctx.r6.s64 = ctx.r25.s64 + 200;
	// lwz r5,20(r11)
	ctx.current_instruction = 0x88129F0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r5)
	ctx.current_instruction = 0x88129F10;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r4,548(r26)
	ctx.current_instruction = 0x88129F14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r3,20(r4)
	ctx.current_instruction = 0x88129F18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,4(r3)
	ctx.current_instruction = 0x88129F1C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88129F24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,8(r10)
	ctx.current_instruction = 0x88129F28;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r9,548(r26)
	ctx.current_instruction = 0x88129F2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88129F30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,12(r8)
	ctx.current_instruction = 0x88129F34;
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r7,548(r26)
	ctx.current_instruction = 0x88129F38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r5,20(r7)
	ctx.current_instruction = 0x88129F3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r6,16(r5)
	ctx.current_instruction = 0x88129F40;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129F48:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// addi r10,r25,220
	ctx.r10.s64 = ctx.r25.s64 + 220;
	// addi r9,r25,244
	ctx.r9.s64 = ctx.r25.s64 + 244;
	// addi r8,r25,268
	ctx.r8.s64 = ctx.r25.s64 + 268;
	// addi r7,r25,292
	ctx.r7.s64 = ctx.r25.s64 + 292;
	// addi r6,r25,316
	ctx.r6.s64 = ctx.r25.s64 + 316;
	// lwz r5,24(r11)
	ctx.current_instruction = 0x88129F60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r25,340
	ctx.r4.s64 = ctx.r25.s64 + 340;
	// stw r10,0(r5)
	ctx.current_instruction = 0x88129F68;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r3,548(r26)
	ctx.current_instruction = 0x88129F6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.current_instruction = 0x88129F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,4(r11)
	ctx.current_instruction = 0x88129F74;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,548(r26)
	ctx.current_instruction = 0x88129F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.current_instruction = 0x88129F7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,8(r9)
	ctx.current_instruction = 0x88129F80;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,548(r26)
	ctx.current_instruction = 0x88129F84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r5,24(r8)
	ctx.current_instruction = 0x88129F88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r7,12(r5)
	ctx.current_instruction = 0x88129F8C;
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r3,548(r26)
	ctx.current_instruction = 0x88129F90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.current_instruction = 0x88129F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,16(r11)
	ctx.current_instruction = 0x88129F98;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r10,548(r26)
	ctx.current_instruction = 0x88129F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.current_instruction = 0x88129FA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,20(r9)
	ctx.current_instruction = 0x88129FA4;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// b 0x8812a0b0
	goto loc_8812A0B0;
loc_88129FAC:
	// lwz r11,548(r26)
	ctx.current_instruction = 0x88129FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 548);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f20.f64;
	// lwzx r24,r11,r10
	ctx.current_instruction = 0x88129FB8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x881f0060
	ctx.lr = 0x88129FC0;
	sub_881F0060(ctx, base);
loc_88129FC0:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// fmuls f27,f0,f19
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// ble cr6,0x8812a0b0
	if (!ctx.cr6.gt) goto loc_8812A0B0;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x88129FD8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88129FDC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f18,f28
	ctx.f12.f64 = double(float(ctx.f18.f64 / ctx.f28.f64));
	// fsqrts f23,f12
	ctx.f23.f64 = double(float(sqrt(ctx.f12.f64)));
loc_88129FF0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8812a004
	if (!ctx.cr6.eq) goto loc_8812A004;
	// fsqrts f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f21.f64)));
	// fdivs f0,f22,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 / ctx.f0.f64));
	// b 0x8812a008
	goto loc_8812A008;
loc_8812A004:
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f22.f64;
loc_8812A008:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// fmuls f30,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,88(r1)
	ctx.current_instruction = 0x8812A014;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x8812A018;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
loc_8812A02C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,96(r1)
	ctx.current_instruction = 0x8812A030;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.current_instruction = 0x8812A034;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fdivs f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f28.f64));
	// bl 0x881eff80
	ctx.lr = 0x8812A054;
	sub_881EFF80(ctx, base);
loc_8812A054:
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwzu r11,4(r30)
	ctx.current_instruction = 0x8812A058;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsel f4,f7,f5,f6
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// fmuls f3,f4,f25
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f25.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	ctx.current_instruction = 0x8812A07C;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8812A080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	ctx.current_instruction = 0x8812A088;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f1,112(r1)
	ctx.current_instruction = 0x8812A08C;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f24
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// stfsx f12,r11,r29
	ctx.current_instruction = 0x8812A09C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// blt cr6,0x8812a02c
	if (ctx.cr6.lt) goto loc_8812A02C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x88129ff0
	if (ctx.cr6.lt) goto loc_88129FF0;
loc_8812A0B0:
	// lhz r11,34(r26)
	ctx.current_instruction = 0x8812A0B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 34);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88129e1c
	if (!ctx.cr6.gt) goto loc_88129E1C;
loc_8812A0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x881ef2ac
	ctx.lr = 0x8812A0D0;
	__restfpr_18(ctx, base);
loc_8812A0D0:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88137370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88137370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88137370) {
			switch (rex_dispatch_address) {
				case 0x88137378:
				case 0x881373D4:
				case 0x88137490:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88137370;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88137378: goto loc_88137378;
		case 0x881373D4: goto loc_881373D4;
		case 0x88137490: goto loc_88137490;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88137378;
	__savegprlr_22(ctx, base);
loc_88137378:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88137378;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.current_instruction = 0x8813737C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,116(r3)
	ctx.current_instruction = 0x88137384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x8813738C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// lhz r10,34(r30)
	ctx.current_instruction = 0x88137394;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881373b0
	if (ctx.cr6.lt) goto loc_881373B0;
loc_881373A0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881373B0:
	// lwz r10,120(r29)
	ctx.current_instruction = 0x881373B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// stwx r28,r11,r10
	ctx.current_instruction = 0x881373B8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lhz r9,34(r30)
	ctx.current_instruction = 0x881373BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r3,4(r31)
	ctx.current_instruction = 0x881373CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88052d90
	ctx.lr = 0x881373D4;
	sub_88052D90(ctx, base);
loc_881373D4:
	// lwz r8,92(r29)
	ctx.current_instruction = 0x881373D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x88137444
	if (ctx.cr6.gt) goto loc_88137444;
	// lhz r11,34(r30)
	ctx.current_instruction = 0x881373E0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88137438
	if (ctx.cr6.eq) goto loc_88137438;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_881373FC:
	// lwz r9,8(r29)
	ctx.current_instruction = 0x881373FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,4(r31)
	ctx.current_instruction = 0x88137404;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x88137410;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r6,r10
	ctx.current_instruction = 0x88137420;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r25,0(r9)
	ctx.current_instruction = 0x88137428;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// lhz r3,34(r30)
	ctx.current_instruction = 0x8813742C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x881373fc
	if (ctx.cr6.lt) goto loc_881373FC;
loc_88137438:
	// lwz r11,92(r29)
	ctx.current_instruction = 0x88137438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// stw r11,0(r31)
	ctx.current_instruction = 0x8813743C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x881374dc
	goto loc_881374DC;
loc_88137444:
	// lhz r11,580(r30)
	ctx.current_instruction = 0x88137444;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 580);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881374dc
	if (!ctx.cr6.gt) goto loc_881374DC;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_88137460:
	// lwz r11,584(r30)
	ctx.current_instruction = 0x88137460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r26,8(r29)
	ctx.current_instruction = 0x88137464;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lhzx r10,r24,r11
	ctx.current_instruction = 0x88137468;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r27,r26
	ctx.current_instruction = 0x88137474;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881374c4
	if (!ctx.cr6.eq) goto loc_881374C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88137490;
	sub_8812C528(ctx, base);
loc_88137490:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881374e8
	if (ctx.cr6.lt) goto loc_881374E8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813749C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881374c4
	if (!ctx.cr6.eq) goto loc_881374C4;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881374A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	ctx.current_instruction = 0x881374B0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
	// stwx r25,r27,r26
	ctx.current_instruction = 0x881374B4;
	REX_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r25.u32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881374B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	ctx.current_instruction = 0x881374C0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_881374C4:
	// lhz r11,580(r30)
	ctx.current_instruction = 0x881374C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 580);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88137460
	if (ctx.cr6.lt) goto loc_88137460;
loc_881374DC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881374DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x881373a0
	if (ctx.cr6.lt) goto loc_881373A0;
loc_881374E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813A8A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813A8A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813A8A0;
	ctx.current_instruction = 0x8813A8A0;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r9,r11,-24856
	ctx.r9.s64 = ctx.r11.s64 + -24856;
	// addi r8,r10,-25128
	ctx.r8.s64 = ctx.r10.s64 + -25128;
	// stw r9,7088(r3)
	ctx.current_instruction = 0x8813A8B0;
	REX_STORE_U32(ctx.r3.u32 + 7088, ctx.r9.u32);
	// stw r8,7084(r3)
	ctx.current_instruction = 0x8813A8B4;
	REX_STORE_U32(ctx.r3.u32 + 7084, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8813AFA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813AFA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813AFA0) {
			switch (rex_dispatch_address) {
				case 0x8813AFA8:
				case 0x8813B490:
				case 0x8813B864:
				case 0x8813B888:
				case 0x8813B988:
				case 0x8813BA24:
				case 0x8813BB74:
				case 0x8813BB7C:
				case 0x8813BBD8:
				case 0x8813BC34:
				case 0x8813BF84:
				case 0x8813BFC8:
				case 0x8813BFE4:
				case 0x8813C094:
				case 0x8813C0E4:
				case 0x8813C178:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813AFA0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813AFA8: goto loc_8813AFA8;
		case 0x8813B490: goto loc_8813B490;
		case 0x8813B864: goto loc_8813B864;
		case 0x8813B888: goto loc_8813B888;
		case 0x8813B988: goto loc_8813B988;
		case 0x8813BA24: goto loc_8813BA24;
		case 0x8813BB74: goto loc_8813BB74;
		case 0x8813BB7C: goto loc_8813BB7C;
		case 0x8813BBD8: goto loc_8813BBD8;
		case 0x8813BC34: goto loc_8813BC34;
		case 0x8813BF84: goto loc_8813BF84;
		case 0x8813BFC8: goto loc_8813BFC8;
		case 0x8813BFE4: goto loc_8813BFE4;
		case 0x8813C094: goto loc_8813C094;
		case 0x8813C0E4: goto loc_8813C0E4;
		case 0x8813C178: goto loc_8813C178;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8813AFA8;
	__savegprlr_14(ctx, base);
loc_8813AFA8:
	// stwu r1,-448(r1)
	ctx.current_instruction = 0x8813AFA8;
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,524(r1)
	ctx.current_instruction = 0x8813AFAC;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,740(r1)
	ctx.current_instruction = 0x8813AFB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// stw r8,508(r1)
	ctx.current_instruction = 0x8813AFB8;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r8.u32);
	// stw r9,516(r1)
	ctx.current_instruction = 0x8813AFBC;
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r9.u32);
	// lwz r9,564(r1)
	ctx.current_instruction = 0x8813AFC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// stw r7,500(r1)
	ctx.current_instruction = 0x8813AFC4;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r7.u32);
	// stw r30,0(r10)
	ctx.current_instruction = 0x8813AFC8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// mulli r11,r9,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// lwz r8,30228(r3)
	ctx.current_instruction = 0x8813AFD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30228);
	// lwz r10,7764(r3)
	ctx.current_instruction = 0x8813AFD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// stw r3,468(r1)
	ctx.current_instruction = 0x8813AFD8;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r4,476(r1)
	ctx.current_instruction = 0x8813AFDC;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// stw r5,484(r1)
	ctx.current_instruction = 0x8813AFE0;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r5.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,220(r1)
	ctx.current_instruction = 0x8813AFE8;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8813b088
	if (ctx.cr6.eq) goto loc_8813B088;
	// lwz r11,1576(r3)
	ctx.current_instruction = 0x8813AFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813b00c
	if (ctx.cr6.eq) goto loc_8813B00C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,23416(r11)
	ctx.current_instruction = 0x8813B004;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23416);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8813b014
	goto loc_8813B014;
loc_8813B00C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,6708(r11)
	ctx.current_instruction = 0x8813B010;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
loc_8813B014:
	// lwz r11,1420(r3)
	ctx.current_instruction = 0x8813B014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1420);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,1416(r3)
	ctx.current_instruction = 0x8813B01C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// subfic r7,r11,135
	ctx.xer.ca = ctx.r11.u32 <= 135;
	ctx.r7.u64 = static_cast<uint64_t>(135) - ctx.r11.u64;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r6,288(r1)
	ctx.current_instruction = 0x8813B030;
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r6.u64);
	// lfd f11,288(r1)
	ctx.current_instruction = 0x8813B034;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// std r11,288(r1)
	ctx.current_instruction = 0x8813B038;
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lfd f0,23408(r10)
	ctx.current_instruction = 0x8813B044;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 23408);
	// lfd f10,288(r1)
	ctx.current_instruction = 0x8813B048;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// std r9,288(r1)
	ctx.current_instruction = 0x8813B04C;
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// lfd f9,288(r1)
	ctx.current_instruction = 0x8813B050;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// lfd f13,12088(r8)
	ctx.current_instruction = 0x8813B05C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// li r8,6884
	ctx.r8.s64 = 6884;
	// fcfid f6,f10
	ctx.f6.f64 = double(ctx.f10.s64);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmul f4,f7,f6
	ctx.f4.f64 = ctx.f7.f64 * ctx.f6.f64;
	// fmul f2,f4,f12
	ctx.f2.f64 = ctx.f4.f64 * ctx.f12.f64;
	// fmul f1,f2,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f0.f64;
	// fdiv f0,f1,f3
	ctx.f0.f64 = ctx.f1.f64 / ctx.f3.f64;
	// fadd f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r3,r8
	ctx.current_instruction = 0x8813B084;
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.f12.u32);
loc_8813B088:
	// lwz r11,2204(r3)
	ctx.current_instruction = 0x8813B088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2204);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8813b09c
	if (!ctx.cr6.eq) goto loc_8813B09C;
	// stw r30,252(r1)
	ctx.current_instruction = 0x8813B094;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// b 0x8813b0a4
	goto loc_8813B0A4;
loc_8813B09C:
	// lwz r11,2308(r3)
	ctx.current_instruction = 0x8813B09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2308);
	// stw r11,252(r1)
	ctx.current_instruction = 0x8813B0A0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
loc_8813B0A4:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,200(r1)
	ctx.current_instruction = 0x8813B0A8;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8813c29c
	if (!ctx.cr6.lt) goto loc_8813C29C;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r11,r11,25784
	ctx.r11.s64 = ctx.r11.s64 + 25784;
	// stw r11,268(r1)
	ctx.current_instruction = 0x8813B0C0;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// b 0x8813b0d8
	goto loc_8813B0D8;
loc_8813B0C8:
	// lwz r3,468(r1)
	ctx.current_instruction = 0x8813B0C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,476(r1)
	ctx.current_instruction = 0x8813B0D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r6,200(r1)
	ctx.current_instruction = 0x8813B0D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
loc_8813B0D8:
	// lwz r10,1384(r3)
	ctx.current_instruction = 0x8813B0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// addi r9,r6,2
	ctx.r9.s64 = ctx.r6.s64 + 2;
	// addi r11,r3,1384
	ctx.r11.s64 = ctx.r3.s64 + 1384;
	// lwz r5,1380(r3)
	ctx.current_instruction = 0x8813B0E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// addi r11,r3,1380
	ctx.r11.s64 = ctx.r3.s64 + 1380;
	// lwz r8,24(r3)
	ctx.current_instruction = 0x8813B0EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r10,524(r1)
	ctx.current_instruction = 0x8813B0F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r9,532(r1)
	ctx.current_instruction = 0x8813B0F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r29,720(r3)
	ctx.current_instruction = 0x8813B0FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r7,28(r3)
	ctx.current_instruction = 0x8813B100;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r28,540(r1)
	ctx.current_instruction = 0x8813B104;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// stw r10,208(r1)
	ctx.current_instruction = 0x8813B108;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,192(r1)
	ctx.current_instruction = 0x8813B10C;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r30,204(r1)
	ctx.current_instruction = 0x8813B110;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r28,196(r1)
	ctx.current_instruction = 0x8813B114;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
	// addi r10,r3,720
	ctx.r10.s64 = ctx.r3.s64 + 720;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// addi r10,r3,784
	ctx.r10.s64 = ctx.r3.s64 + 784;
	// lwz r10,784(r3)
	ctx.current_instruction = 0x8813B130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r4,224(r1)
	ctx.current_instruction = 0x8813B150;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r3,244(r1)
	ctx.current_instruction = 0x8813B158;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// mullw r9,r29,r6
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// stw r11,248(r1)
	ctx.current_instruction = 0x8813B160;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r10,288(r1)
	ctx.current_instruction = 0x8813B164;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stw r9,228(r1)
	ctx.current_instruction = 0x8813B168;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8813c24c
	if (ctx.cr6.eq) goto loc_8813C24C;
loc_8813B174:
	// lwz r18,468(r1)
	ctx.current_instruction = 0x8813B174;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// li r14,0
	ctx.r14.s64 = 0;
	// lwz r29,200(r1)
	ctx.current_instruction = 0x8813B17C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r5,r18,6852
	ctx.r5.s64 = ctx.r18.s64 + 6852;
	// lwz r28,204(r1)
	ctx.current_instruction = 0x8813B184;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r5,r18,6848
	ctx.r5.s64 = ctx.r18.s64 + 6848;
	// stw r14,240(r1)
	ctx.current_instruction = 0x8813B18C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r14.u32);
	// addi r11,r18,796
	ctx.r11.s64 = ctx.r18.s64 + 796;
	// stw r14,264(r1)
	ctx.current_instruction = 0x8813B194;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// addi r10,r18,1352
	ctx.r10.s64 = ctx.r18.s64 + 1352;
	// lwz r11,796(r18)
	ctx.current_instruction = 0x8813B19C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 796);
	// addi r5,r18,6844
	ctx.r5.s64 = ctx.r18.s64 + 6844;
	// lwz r8,6792(r18)
	ctx.current_instruction = 0x8813B1A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 6792);
	// lwz r5,228(r1)
	ctx.current_instruction = 0x8813B1A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r10,r18,800
	ctx.r10.s64 = ctx.r18.s64 + 800;
	// addi r10,r18,1360
	ctx.r10.s64 = ctx.r18.s64 + 1360;
	// lwz r7,1352(r18)
	ctx.current_instruction = 0x8813B1B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 1352);
	// addi r10,r18,720
	ctx.r10.s64 = ctx.r18.s64 + 720;
	// lwz r10,720(r18)
	ctx.current_instruction = 0x8813B1BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r27,800(r18)
	ctx.current_instruction = 0x8813B1C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r18.u32 + 800);
	// addi r9,r18,6792
	ctx.r9.s64 = ctx.r18.s64 + 6792;
	// lwz r26,1360(r18)
	ctx.current_instruction = 0x8813B1CC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r18.u32 + 1360);
	// addi r9,r18,724
	ctx.r9.s64 = ctx.r18.s64 + 724;
	// lbzx r24,r8,r5
	ctx.current_instruction = 0x8813B1D4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r25,r10,r29
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r9,724(r18)
	ctx.current_instruction = 0x8813B1DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 724);
	// lwz r30,6844(r18)
	ctx.current_instruction = 0x8813B1E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r18.u32 + 6844);
	// lwz r4,6852(r18)
	ctx.current_instruction = 0x8813B1E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 6852);
	// lwz r3,6848(r18)
	ctx.current_instruction = 0x8813B1E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 6848);
	// lwz r17,832(r18)
	ctx.current_instruction = 0x8813B1EC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r18.u32 + 832);
	// srawi r23,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r6.s32 >> 1;
	// subf r8,r7,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
	// subf r7,r26,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r26.u64;
	// mullw r6,r11,r29
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r5,r18,832
	ctx.r5.s64 = ctx.r18.s64 + 832;
	// mullw r5,r23,r29
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// add r8,r6,r28
	ctx.r8.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r10,r29,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r29.u64;
	// addi r23,r7,16
	ctx.r23.s64 = ctx.r7.s64 + 16;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r28,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r28.u64;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,280(r1)
	ctx.current_instruction = 0x8813B238;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r28,r24
	ctx.r28.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// stw r8,276(r1)
	ctx.current_instruction = 0x8813B244;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r10,272(r1)
	ctx.current_instruction = 0x8813B254;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// addi r26,r23,1
	ctx.r26.s64 = ctx.r23.s64 + 1;
	// rlwinm r6,r28,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// srawi r22,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 1;
	// stw r6,256(r1)
	ctx.current_instruction = 0x8813B268;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// srawi r21,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r26.s32 >> 1;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// rlwinm r19,r29,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// rlwinm r20,r5,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r28,r4,r8
	ctx.r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r29,r3,r8
	ctx.r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r30,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 1;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8813b5e8
	if (!ctx.cr6.eq) goto loc_8813B5E8;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8813b2a0
	if (ctx.cr6.eq) goto loc_8813B2A0;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bne cr6,0x8813b2b0
	if (!ctx.cr6.eq) goto loc_8813B2B0;
loc_8813B2A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8813b5e8
	if (ctx.cr6.eq) goto loc_8813B5E8;
	// cmpwi cr6,r23,16
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16, ctx.xer);
	// beq cr6,0x8813b5e8
	if (ctx.cr6.eq) goto loc_8813B5E8;
loc_8813B2B0:
	// lwz r16,500(r1)
	ctx.current_instruction = 0x8813B2B0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8813b400
	if (ctx.cr6.eq) goto loc_8813B400;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bne cr6,0x8813b2d4
	if (!ctx.cr6.eq) goto loc_8813B2D4;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// li r21,8
	ctx.r21.s64 = 8;
loc_8813B2D4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8813b34c
	if (!ctx.cr6.gt) goto loc_8813B34C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8813B2E0:
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8813b30c
	if (!ctx.cr6.gt) goto loc_8813B30C;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r6,r5,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_8813B2FC:
	// lbzx r27,r6,r8
	ctx.current_instruction = 0x8813B2FC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r27,0(r8)
	ctx.current_instruction = 0x8813B300;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r27.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8813b2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B2FC;
loc_8813B30C:
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// lbz r6,-1(r8)
	ctx.current_instruction = 0x8813B314;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// bge cr6,0x8813b33c
	if (!ctx.cr6.lt) goto loc_8813B33C;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subfic r7,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r7.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8813b33c
	if (ctx.cr6.eq) goto loc_8813B33C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8813B334:
	// stbu r6,1(r8)
	ctx.current_instruction = 0x8813B334;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8813b334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B334;
loc_8813B33C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne 0x8813b2e0
	if (!ctx.cr0.eq) goto loc_8813B2E0;
loc_8813B34C:
	// lwz r17,508(r1)
	ctx.current_instruction = 0x8813B34C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r15,516(r1)
	ctx.current_instruction = 0x8813B354;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// ble cr6,0x8813b408
	if (!ctx.cr6.gt) goto loc_8813B408;
	// subf r26,r29,r28
	ctx.r26.u64 = ctx.r28.u64 - ctx.r29.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// subf r25,r17,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r17.u64;
loc_8813B370:
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8813b3ac
	if (!ctx.cr6.gt) goto loc_8813B3AC;
	// subf r8,r7,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r7.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r6,r7,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_8813B394:
	// lbzx r3,r9,r6
	ctx.current_instruction = 0x8813B394;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r3,0(r9)
	ctx.current_instruction = 0x8813B398;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbzx r3,r5,r9
	ctx.current_instruction = 0x8813B39C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stbx r3,r25,r9
	ctx.current_instruction = 0x8813B3A0;
	REX_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8813b394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B394;
loc_8813B3AC:
	// add r9,r26,r8
	ctx.r9.u64 = ctx.r26.u64 + ctx.r8.u64;
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// lbz r3,-1(r6)
	ctx.current_instruction = 0x8813B3BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// lbz r27,-1(r5)
	ctx.current_instruction = 0x8813B3C0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + -1);
	// bge cr6,0x8813b3ec
	if (!ctx.cr6.lt) goto loc_8813B3EC;
	// subfic r5,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r5.u64 = static_cast<uint64_t>(8) - ctx.r8.u64;
	// add r6,r25,r7
	ctx.r6.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8813B3DC:
	// stbx r3,r8,r9
	ctx.current_instruction = 0x8813B3DC;
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u8);
	// stb r27,0(r9)
	ctx.current_instruction = 0x8813B3E0;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8813b3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B3DC;
loc_8813B3EC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bne 0x8813b370
	if (!ctx.cr0.eq) goto loc_8813B370;
	// b 0x8813b408
	goto loc_8813B408;
loc_8813B400:
	// lwz r15,516(r1)
	ctx.current_instruction = 0x8813B400;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r17,508(r1)
	ctx.current_instruction = 0x8813B404;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
loc_8813B408:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8813b808
	if (ctx.cr6.eq) goto loc_8813B808;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8813b42c
	if (ctx.cr6.eq) goto loc_8813B42C;
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r27,r11,r16
	ctx.r27.u64 = ctx.r11.u64 + ctx.r16.u64;
	// b 0x8813b470
	goto loc_8813B470;
loc_8813B42C:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8813b470
	if (!ctx.cr6.gt) goto loc_8813B470;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8813B440:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// subf r7,r27,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_8813B450:
	// lbzx r8,r7,r9
	ctx.current_instruction = 0x8813B450;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r8,0(r9)
	ctx.current_instruction = 0x8813B454;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8813b450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B450;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x8813b440
	if (!ctx.cr0.eq) goto loc_8813B440;
loc_8813B470:
	// addi r25,r27,-16
	ctx.r25.s64 = ctx.r27.s64 + -16;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bge cr6,0x8813b49c
	if (!ctx.cr6.lt) goto loc_8813B49C;
	// subfic r26,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r26.u64 = static_cast<uint64_t>(16) - ctx.r5.u64;
loc_8813B480:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8813B490;
	sub_880547A0(ctx, base);
loc_8813B490:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x8813b480
	if (!ctx.cr0.eq) goto loc_8813B480;
loc_8813B49C:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8813b4c0
	if (ctx.cr6.eq) goto loc_8813B4C0;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r8,r11,r17
	ctx.r8.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// b 0x8813b580
	goto loc_8813B580;
loc_8813B4C0:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8813b580
	if (!ctx.cr6.gt) goto loc_8813B580;
	// subf r6,r15,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r15.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// addi r9,r29,3
	ctx.r9.s64 = ctx.r29.s64 + 3;
	// addi r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 2;
	// subf r5,r28,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_8813B4E8:
	// lbz r3,-3(r9)
	ctx.current_instruction = 0x8813B4E8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// stb r3,0(r8)
	ctx.current_instruction = 0x8813B4EC;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
	// lbz r3,-2(r10)
	ctx.current_instruction = 0x8813B4F0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// stb r3,0(r11)
	ctx.current_instruction = 0x8813B4F4;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lbz r3,-2(r9)
	ctx.current_instruction = 0x8813B4F8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// stb r3,1(r7)
	ctx.current_instruction = 0x8813B4FC;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r7,-1(r10)
	ctx.current_instruction = 0x8813B500;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// stb r7,1(r11)
	ctx.current_instruction = 0x8813B504;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbzx r3,r10,r5
	ctx.current_instruction = 0x8813B508;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stb r3,2(r8)
	ctx.current_instruction = 0x8813B50C;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8813B510;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r7,2(r11)
	ctx.current_instruction = 0x8813B514;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r3,0(r9)
	ctx.current_instruction = 0x8813B518;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r3,3(r8)
	ctx.current_instruction = 0x8813B51C;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r3.u8);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x8813B520;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,3(r11)
	ctx.current_instruction = 0x8813B524;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r3,1(r9)
	ctx.current_instruction = 0x8813B528;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stb r3,4(r8)
	ctx.current_instruction = 0x8813B52C;
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r3.u8);
	// lbz r7,2(r10)
	ctx.current_instruction = 0x8813B530;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,4(r11)
	ctx.current_instruction = 0x8813B534;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r3,2(r9)
	ctx.current_instruction = 0x8813B538;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r3,5(r8)
	ctx.current_instruction = 0x8813B53C;
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r3.u8);
	// lbz r7,3(r10)
	ctx.current_instruction = 0x8813B540;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,5(r11)
	ctx.current_instruction = 0x8813B544;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r3,3(r9)
	ctx.current_instruction = 0x8813B548;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// stb r3,6(r8)
	ctx.current_instruction = 0x8813B54C;
	REX_STORE_U8(ctx.r8.u32 + 6, ctx.r3.u8);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x8813B550;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stb r7,6(r11)
	ctx.current_instruction = 0x8813B554;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r3,4(r9)
	ctx.current_instruction = 0x8813B558;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stb r3,7(r8)
	ctx.current_instruction = 0x8813B560;
	REX_STORE_U8(ctx.r8.u32 + 7, ctx.r3.u8);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lbz r7,5(r10)
	ctx.current_instruction = 0x8813B568;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r7,7(r11)
	ctx.current_instruction = 0x8813B570;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x8813b4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B4E8;
loc_8813B580:
	// addi r6,r8,-8
	ctx.r6.s64 = ctx.r8.s64 + -8;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x8813b808
	if (!ctx.cr6.lt) goto loc_8813B808;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// subfic r4,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r4.u64 = static_cast<uint64_t>(8) - ctx.r4.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
loc_8813B59C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8813B5B0:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x8813B5B0;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x8813B5B4;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8813b5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B5B0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8813B5D0:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x8813B5D0;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x8813B5D4;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8813b5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813B5D0;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8813b59c
	if (!ctx.cr0.eq) goto loc_8813B59C;
	// b 0x8813b808
	goto loc_8813B808;
loc_8813B5E8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,500(r1)
	ctx.current_instruction = 0x8813B5EC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lvx128 v63,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r16,32
	ctx.r6.s64 = ctx.r16.s64 + 32;
	// lvsl v0,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r16,64
	ctx.r8.s64 = ctx.r16.s64 + 64;
	// lvsl v7,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// li r25,32
	ctx.r25.s64 = 32;
	// lvx128 v60,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvx128 v62,r0,r16
	ea = (ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r30,r29
	ctx.r27.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stvx128 v63,r16,r31
	ea = (ctx.r16.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r6,r31
	ea = (ctx.r6.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lvx128 v58,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v58,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stvx128 v59,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stvx128 v57,r8,r25
	ea = (ctx.r8.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lvx128 v55,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r6,r30
	ctx.r26.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lvx128 v52,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stvx128 v54,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stvx128 v53,r8,r25
	ea = (ctx.r8.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r8,64
	ctx.r9.s64 = ctx.r8.s64 + 64;
	// stvx128 v52,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,268(r1)
	ctx.current_instruction = 0x8813B6B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r9,r25
	ea = (ctx.r9.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8813B6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lvx128 v40,r29,r31
	ea = (ctx.r29.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r6,r31
	ea = (ctx.r6.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r26,r31
	ea = (ctx.r26.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r30
	ea = (ctx.r6.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r27,r31
	ea = (ctx.r27.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vperm128 v63,v39,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// vperm128 v61,v44,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v42,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v38,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vperm128 v37,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v36,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v41,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v35,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lvx128 v34,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v36,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v32,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v62,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v60,v32,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r17,508(r1)
	ctx.current_instruction = 0x8813B744;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// vperm128 v59,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r15,516(r1)
	ctx.current_instruction = 0x8813B758;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// vperm128 v58,v60,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v37,r0,r17
	ea = (ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r17,r25
	ea = (ctx.r17.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r17,r31
	ea = (ctx.r17.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r17,r4
	ea = (ctx.r17.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8813B774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lvx128 v53,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v55,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lvx128 v51,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r28,r31
	ea = (ctx.r28.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v60,v51,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v53,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v46,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v49,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r30,r28
	ea = (ctx.r30.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v57,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v50,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v56,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v45,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v58,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v38,v60,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v42,v45,v7
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v38,r15,r31
	ea = (ctx.r15.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v39,v40,v44,v7
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v43,v61,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v37,v59,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v39,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v43,r0,r15
	ea = (ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r15,r25
	ea = (ctx.r15.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r15,r4
	ea = (ctx.r15.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8813B808:
	// lwz r10,7072(r18)
	ctx.current_instruction = 0x8813B808;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 7072);
	// addi r11,r18,7072
	ctx.r11.s64 = ctx.r18.s64 + 7072;
	// lwz r9,204(r1)
	ctx.current_instruction = 0x8813B810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8813b830
	if (!ctx.cr6.lt) goto loc_8813B830;
	// lwz r11,7076(r18)
	ctx.current_instruction = 0x8813B81C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 7076);
	// li r14,0
	ctx.r14.s64 = 0;
	// lwz r10,200(r1)
	ctx.current_instruction = 0x8813B824;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8813b834
	if (ctx.cr6.lt) goto loc_8813B834;
loc_8813B830:
	// li r14,1
	ctx.r14.s64 = 1;
loc_8813B834:
	// lwz r10,7200(r18)
	ctx.current_instruction = 0x8813B834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 7200);
	// addi r11,r18,7200
	ctx.r11.s64 = ctx.r18.s64 + 7200;
	// lwz r27,200(r1)
	ctx.current_instruction = 0x8813B83C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813b864
	if (ctx.cr6.eq) goto loc_8813B864;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8813b864
	if (!ctx.cr6.eq) goto loc_8813B864;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880eb138
	ctx.lr = 0x8813B864;
	sub_880EB138(ctx, base);
loc_8813B864:
	// lwz r29,220(r1)
	ctx.current_instruction = 0x8813B864;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,204(r1)
	ctx.current_instruction = 0x8813B86C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r15,r29,74
	ctx.r15.s64 = ctx.r29.s64 + 74;
loc_8813B874:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880ff460
	ctx.lr = 0x8813B888;
	sub_880FF460(ctx, base);
loc_8813B888:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stbx r11,r15,r30
	ctx.current_instruction = 0x8813B88C;
	REX_STORE_U8(ctx.r15.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8813b874
	if (ctx.cr6.lt) goto loc_8813B874;
	// lwz r10,272(r1)
	ctx.current_instruction = 0x8813B89C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r11,r18,2544
	ctx.r11.s64 = ctx.r18.s64 + 2544;
	// lwz r9,2544(r18)
	ctx.current_instruction = 0x8813B8A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 2544);
	// addi r11,r18,2548
	ctx.r11.s64 = ctx.r18.s64 + 2548;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2548(r18)
	ctx.current_instruction = 0x8813B8B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 2548);
	// stw r10,284(r1)
	ctx.current_instruction = 0x8813B8B4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// lhzx r7,r10,r9
	ctx.current_instruction = 0x8813B8B8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// stw r11,232(r1)
	ctx.current_instruction = 0x8813B8C0;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lhzx r6,r10,r8
	ctx.current_instruction = 0x8813B8C8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,236(r1)
	ctx.current_instruction = 0x8813B8D0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// bne cr6,0x8813b970
	if (!ctx.cr6.eq) goto loc_8813B970;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,208(r1)
	ctx.current_instruction = 0x8813B8DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r18,1380
	ctx.r11.s64 = ctx.r18.s64 + 1380;
	// lwz r11,1380(r18)
	ctx.current_instruction = 0x8813B8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// vspltisb v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x7)));
	// stw r10,240(r1)
	ctx.current_instruction = 0x8813B8EC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8813ba24
	goto loc_8813BA24;
loc_8813B970:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8810aa38
	ctx.lr = 0x8813B988;
	sub_8810AA38(ctx, base);
loc_8813B988:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x8813B988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x8813B98C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r30,224(r1)
	ctx.current_instruction = 0x8813B994;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,208(r1)
	ctx.current_instruction = 0x8813B998;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,232(r1)
	ctx.current_instruction = 0x8813B99C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bne cr6,0x8813b9d8
	if (!ctx.cr6.eq) goto loc_8813B9D8;
	// lwz r10,236(r1)
	ctx.current_instruction = 0x8813B9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r7,r18,1380
	ctx.r7.s64 = ctx.r18.s64 + 1380;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r3,r9,666
	ctx.r3.s64 = ctx.r9.s64 + 666;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,256(r1)
	ctx.current_instruction = 0x8813B9D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x8813ba08
	goto loc_8813BA08;
loc_8813B9D8:
	// lwz r9,236(r1)
	ctx.current_instruction = 0x8813B9D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r7,r11,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r10,r18,1380
	ctx.r10.s64 = ctx.r18.s64 + 1380;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r3,r9,682
	ctx.r3.s64 = ctx.r9.s64 + 682;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8813BA08:
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// lwzx r11,r26,r18
	ctx.current_instruction = 0x8813BA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x8813BA14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813BA24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813BA24:
	// lwz r9,228(r1)
	ctx.current_instruction = 0x8813BA24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r18,2552
	ctx.r11.s64 = ctx.r18.s64 + 2552;
	// lwz r10,2552(r18)
	ctx.current_instruction = 0x8813BA2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 2552);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r10
	ctx.current_instruction = 0x8813BA34;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// bne cr6,0x8813bb34
	if (!ctx.cr6.eq) goto loc_8813BB34;
	// vspltisb v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x7)));
	// lwz r7,192(r1)
	ctx.current_instruction = 0x8813BA44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,1384(r18)
	ctx.current_instruction = 0x8813BA4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 1384);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r6,264(r1)
	ctx.current_instruction = 0x8813BA64;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// vor128 v35,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stvewx128 v35,r0,r7
	ctx.current_instruction = 0x8813BA84;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r18,1384
	ctx.r6.s64 = ctx.r18.s64 + 1384;
	// stvewx128 v35,r7,r10
	ctx.current_instruction = 0x8813BA8C;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stvewx128 v35,r7,r11
	ctx.current_instruction = 0x8813BA94;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r7,r9
	ctx.current_instruction = 0x8813BA98;
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r8,r7
	ctx.current_instruction = 0x8813BA9C;
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r24
	ctx.current_instruction = 0x8813BAA0;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r11
	ctx.current_instruction = 0x8813BAA4;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r9
	ctx.current_instruction = 0x8813BAA8;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stvewx128 v35,r0,r10
	ctx.current_instruction = 0x8813BAB0;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r24
	ctx.current_instruction = 0x8813BAB4;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r11
	ctx.current_instruction = 0x8813BAB8;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r9
	ctx.current_instruction = 0x8813BABC;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stvewx128 v35,r0,r10
	ctx.current_instruction = 0x8813BAC4;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r24
	ctx.current_instruction = 0x8813BAC8;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r11
	ctx.current_instruction = 0x8813BACC;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r10,r9
	ctx.current_instruction = 0x8813BAD0;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,1384(r18)
	ctx.current_instruction = 0x8813BAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 1384);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,196(r1)
	ctx.current_instruction = 0x8813BAE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stvewx v0,r0,r7
	ctx.current_instruction = 0x8813BAE8;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r7,r24
	ctx.current_instruction = 0x8813BAEC;
	ea = (ctx.r7.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r7,r11
	ctx.current_instruction = 0x8813BAF0;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r7,r9
	ctx.current_instruction = 0x8813BAF4;
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r8,r7
	ctx.current_instruction = 0x8813BAF8;
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r24
	ctx.current_instruction = 0x8813BAFC;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r11
	ctx.current_instruction = 0x8813BB00;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r9
	ctx.current_instruction = 0x8813BB04;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stvewx v0,r0,r10
	ctx.current_instruction = 0x8813BB0C;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r24
	ctx.current_instruction = 0x8813BB10;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r11
	ctx.current_instruction = 0x8813BB14;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r9
	ctx.current_instruction = 0x8813BB18;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stvewx v0,r0,r10
	ctx.current_instruction = 0x8813BB20;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r24
	ctx.current_instruction = 0x8813BB24;
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r11
	ctx.current_instruction = 0x8813BB28;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r10,r9
	ctx.current_instruction = 0x8813BB2C;
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8813bc34
	goto loc_8813BC34;
loc_8813BB34:
	// lhzx r10,r11,r10
	ctx.current_instruction = 0x8813BB34;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,2556(r18)
	ctx.current_instruction = 0x8813BB3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 2556);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r18)
	ctx.current_instruction = 0x8813BB48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// stw r8,212(r1)
	ctx.current_instruction = 0x8813BB4C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// lhzx r6,r9,r11
	ctx.current_instruction = 0x8813BB58;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// stw r5,216(r1)
	ctx.current_instruction = 0x8813BB64;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x8813bb78
	if (ctx.cr6.eq) goto loc_8813BB78;
	// bl 0x8810b598
	ctx.lr = 0x8813BB74;
	sub_8810B598(ctx, base);
loc_8813BB74:
	// b 0x8813bb7c
	goto loc_8813BB7C;
loc_8813BB78:
	// bl 0x8810b688
	ctx.lr = 0x8813BB7C;
	sub_8810B688(ctx, base);
loc_8813BB7C:
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8813BB7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r30,r18,1384
	ctx.r30.s64 = ctx.r18.s64 + 1384;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x8813BB84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r7,r11,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwz r4,1384(r18)
	ctx.current_instruction = 0x8813BB8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1384);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// lwz r26,244(r1)
	ctx.current_instruction = 0x8813BB94;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x8813BB9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,192(r1)
	ctx.current_instruction = 0x8813BBA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r3,r9,682
	ctx.r3.s64 = ctx.r9.s64 + 682;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r25,r3,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r25,r18
	ctx.current_instruction = 0x8813BBC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r18.u32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813BBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813BBD8:
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8813BBD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,216(r1)
	ctx.current_instruction = 0x8813BBE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r6,r11,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwz r26,248(r1)
	ctx.current_instruction = 0x8813BBE8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// clrlwi r8,r7,30
	ctx.r8.u64 = ctx.r7.u32 & 0x3;
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x8813BBF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// lwz r5,196(r1)
	ctx.current_instruction = 0x8813BBF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// addi r3,r7,682
	ctx.r3.s64 = ctx.r7.s64 + 682;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r18
	ctx.current_instruction = 0x8813BC0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r18.u32);
	// lwz r25,1384(r18)
	ctx.current_instruction = 0x8813BC10;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r18.u32 + 1384);
	// mullw r7,r4,r25
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8813BC34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813BC34:
	// lwz r8,0(r29)
	ctx.current_instruction = 0x8813BC34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,240(r1)
	ctx.current_instruction = 0x8813BC3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r10,r18,6792
	ctx.r10.s64 = ctx.r18.s64 + 6792;
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r11,84(r29)
	ctx.current_instruction = 0x8813BC48;
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// addi r11,r18,720
	ctx.r11.s64 = ctx.r18.s64 + 720;
	// stw r7,0(r29)
	ctx.current_instruction = 0x8813BC50;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r9,116(r29)
	ctx.current_instruction = 0x8813BC54;
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r9.u32);
	// lwz r6,720(r18)
	ctx.current_instruction = 0x8813BC58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// mullw r11,r27,r6
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// lwz r10,6792(r18)
	ctx.current_instruction = 0x8813BC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 6792);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r4,r5,r28
	ctx.current_instruction = 0x8813BC68;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// addi r11,r18,2340
	ctx.r11.s64 = ctx.r18.s64 + 2340;
	// stb r4,88(r29)
	ctx.current_instruction = 0x8813BC70;
	REX_STORE_U8(ctx.r29.u32 + 88, ctx.r4.u8);
	// lwz r3,2340(r18)
	ctx.current_instruction = 0x8813BC74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 2340);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813bc98
	if (ctx.cr6.eq) goto loc_8813BC98;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x8813BC84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813bc98
	if (ctx.cr6.eq) goto loc_8813BC98;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8813bedc
	if (!ctx.cr6.eq) goto loc_8813BEDC;
loc_8813BC98:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r8,468(r1)
	ctx.current_instruction = 0x8813BC9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r28,628(r1)
	ctx.current_instruction = 0x8813BCA0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// lwz r27,508(r1)
	ctx.current_instruction = 0x8813BCA8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r10,r8,1384
	ctx.r10.s64 = ctx.r8.s64 + 1384;
	// lwz r5,516(r1)
	ctx.current_instruction = 0x8813BCB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r10,r8,1380
	ctx.r10.s64 = ctx.r8.s64 + 1380;
	// lwz r4,620(r1)
	ctx.current_instruction = 0x8813BCB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,1384(r8)
	ctx.current_instruction = 0x8813BCC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 1384);
	// lwz r29,1380(r8)
	ctx.current_instruction = 0x8813BCC8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 1380);
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lwz r11,612(r1)
	ctx.current_instruction = 0x8813BCD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// lwz r6,500(r1)
	ctx.current_instruction = 0x8813BCD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,196(r1)
	ctx.current_instruction = 0x8813BCE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// rlwinm r19,r29,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,192(r1)
	ctx.current_instruction = 0x8813BCE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r24,r3,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,208(r1)
	ctx.current_instruction = 0x8813BCF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// subf r23,r27,r5
	ctx.r23.u64 = ctx.r5.u64 - ctx.r27.u64;
	// subf r18,r4,r28
	ctx.r18.u64 = ctx.r28.u64 - ctx.r4.u64;
	// li r17,-32
	ctx.r17.s64 = -32;
	// li r16,-16
	ctx.r16.s64 = -16;
loc_8813BD0C:
	// add r28,r26,r7
	ctx.r28.u64 = ctx.r26.u64 + ctx.r7.u64;
	// lvx128 v13,r6,r17
	ea = (ctx.r6.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,-32
	ctx.r27.s64 = -32;
	// vmrghb v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r7,r29
	ea = (ctx.r7.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r6,r31
	ea = (ctx.r6.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r6,r16
	ea = (ctx.r6.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r28,r29
	ea = (ctx.r28.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v8,r26,r7
	ea = (ctx.r26.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v24,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrghb v31,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// std r29,256(r1)
	ctx.current_instruction = 0x8813BD50;
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r29.u64);
	// vmrglb v30,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r28,-16
	ctx.r28.s64 = -16;
	// vmrglb v29,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r22,32
	ctx.r22.s64 = 32;
	// vmrghb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r21,48
	ctx.r21.s64 = 48;
	// vmrghb v27,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r20,64
	ctx.r20.s64 = 64;
	// vmrglb v26,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,80
	ctx.r29.s64 = 80;
	// vmrglb v25,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v24,r11,r27
	ea = (ctx.r11.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v21,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v20,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vmrglb v19,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmrglb v17,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v16,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v15,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// li r27,-8
	ctx.r27.s64 = -8;
	// vsubshs v14,v21,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvx128 v22,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r27,272(r1)
	ctx.current_instruction = 0x8813BDB4;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stvx128 v20,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v13,v17,v19
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvx128 v16,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r5,24
	ctx.r28.s64 = ctx.r5.s64 + 24;
	// stvx128 v14,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r22,r8,r3
	ctx.r22.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stvx128 v18,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r10,-8
	ctx.r27.s64 = ctx.r10.s64 + -8;
	// stvx128 v13,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r21,r9,r3
	ctx.r21.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r20,r10,r23
	ctx.r20.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r21
	temp.u32 = ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v58,r25,r8
	ea = (ctx.r25.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,272(r1)
	ctx.current_instruction = 0x8813BE08;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lvx128 v32,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r28,r29
	ea = (ctx.r28.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r25,r9
	ea = (ctx.r25.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v59,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v32,v34,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v29,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v28,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v26,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v25,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r27,8
	ctx.r27.s64 = 8;
	// lvx128 v55,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r10,r23
	ea = (ctx.r10.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v21,v57,v55,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v52,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v20,v54,v33,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsubshs v23,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v51,r10,r27
	ea = (ctx.r10.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vperm128 v6,v53,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// ld r29,256(r1)
	ctx.current_instruction = 0x8813BE84;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// vperm128 v5,v56,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// add r7,r19,r7
	ctx.r7.u64 = ctx.r19.u64 + ctx.r7.u64;
	// vmrghb v4,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 + ctx.r9.u64;
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r24,r8
	ctx.r8.u64 = ctx.r24.u64 + ctx.r8.u64;
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// vmrghb v1,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsubshs v31,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v30,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r4,r18
	ea = (ctx.r4.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r4,r31
	ea = (ctx.r4.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bdnz 0x8813bd0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813BD0C;
loc_8813BEDC:
	// lwz r29,468(r1)
	ctx.current_instruction = 0x8813BEDC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r11,r29,2340
	ctx.r11.s64 = ctx.r29.s64 + 2340;
	// lwz r10,2340(r29)
	ctx.current_instruction = 0x8813BEE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2340);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8813bf88
	if (ctx.cr6.eq) goto loc_8813BF88;
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8813BEF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813bf0c
	if (!ctx.cr6.eq) goto loc_8813BF0C;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x8813BF00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813bf88
	if (ctx.cr6.eq) goto loc_8813BF88;
loc_8813BF0C:
	// addi r11,r29,6848
	ctx.r11.s64 = ctx.r29.s64 + 6848;
	// lwz r11,6848(r29)
	ctx.current_instruction = 0x8813BF10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 6848);
	// lwz r7,276(r1)
	ctx.current_instruction = 0x8813BF14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r10,r29,6852
	ctx.r10.s64 = ctx.r29.s64 + 6852;
	// lwz r25,628(r1)
	ctx.current_instruction = 0x8813BF1C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r23,620(r1)
	ctx.current_instruction = 0x8813BF24;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r14,124(r1)
	ctx.current_instruction = 0x8813BF2C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// addi r11,r29,6844
	ctx.r11.s64 = ctx.r29.s64 + 6844;
	// stw r30,84(r1)
	ctx.current_instruction = 0x8813BF34;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,6852(r29)
	ctx.current_instruction = 0x8813BF3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 6852);
	// stw r25,116(r1)
	ctx.current_instruction = 0x8813BF40;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x8813BF44;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r26,612(r1)
	ctx.current_instruction = 0x8813BF4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r9,280(r1)
	ctx.current_instruction = 0x8813BF50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,6844(r29)
	ctx.current_instruction = 0x8813BF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 6844);
	// lwz r27,200(r1)
	ctx.current_instruction = 0x8813BF58;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r16,204(r1)
	ctx.current_instruction = 0x8813BF5C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,516(r1)
	ctx.current_instruction = 0x8813BF68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r8,508(r1)
	ctx.current_instruction = 0x8813BF70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r7,500(r1)
	ctx.current_instruction = 0x8813BF74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r26,100(r1)
	ctx.current_instruction = 0x8813BF78;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x8813BF7C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x88101728
	ctx.lr = 0x8813BF84;
	sub_88101728(ctx, base);
loc_8813BF84:
	// b 0x8813bf9c
	goto loc_8813BF9C;
loc_8813BF88:
	// lwz r25,628(r1)
	ctx.current_instruction = 0x8813BF88;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r23,620(r1)
	ctx.current_instruction = 0x8813BF8C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r26,612(r1)
	ctx.current_instruction = 0x8813BF90;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r27,200(r1)
	ctx.current_instruction = 0x8813BF94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r16,204(r1)
	ctx.current_instruction = 0x8813BF98;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
loc_8813BF9C:
	// lwz r10,7200(r29)
	ctx.current_instruction = 0x8813BF9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 7200);
	// addi r11,r29,7200
	ctx.r11.s64 = ctx.r29.s64 + 7200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813bfc8
	if (ctx.cr6.eq) goto loc_8813BFC8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8813bfc8
	if (!ctx.cr6.eq) goto loc_8813BFC8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880eb1e0
	ctx.lr = 0x8813BFC8;
	sub_880EB1E0(ctx, base);
loc_8813BFC8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880e4dd8
	ctx.lr = 0x8813BFE4;
	sub_880E4DD8(ctx, base);
loc_8813BFE4:
	// addi r11,r29,7996
	ctx.r11.s64 = ctx.r29.s64 + 7996;
	// lwz r11,7996(r29)
	ctx.current_instruction = 0x8813BFE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 7996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c0cc
	if (ctx.cr6.eq) goto loc_8813C0CC;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813c018
	if (ctx.cr6.eq) goto loc_8813C018;
	// addi r10,r29,720
	ctx.r10.s64 = ctx.r29.s64 + 720;
	// lwz r10,720(r29)
	ctx.current_instruction = 0x8813C004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8813c01c
	if (ctx.cr6.eq) goto loc_8813C01C;
loc_8813C018:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8813C01C:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c040
	if (ctx.cr6.eq) goto loc_8813C040;
	// addi r11,r29,724
	ctx.r11.s64 = ctx.r29.s64 + 724;
	// lwz r11,724(r29)
	ctx.current_instruction = 0x8813C02C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 724);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8813c044
	if (ctx.cr6.eq) goto loc_8813C044;
loc_8813C040:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8813C044:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8813c054
	if (!ctx.cr6.eq) goto loc_8813C054;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c0cc
	if (ctx.cr6.eq) goto loc_8813C0CC;
loc_8813C054:
	// lwz r17,220(r1)
	ctx.current_instruction = 0x8813C054;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lbz r10,88(r17)
	ctx.current_instruction = 0x8813C058;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + 88);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8813c07c
	if (ctx.cr6.eq) goto loc_8813C07C;
	// lwz r9,2544(r29)
	ctx.current_instruction = 0x8813C064;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2544);
	// addi r10,r29,2544
	ctx.r10.s64 = ctx.r29.s64 + 2544;
	// lwz r8,284(r1)
	ctx.current_instruction = 0x8813C06C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lhzx r7,r8,r9
	ctx.current_instruction = 0x8813C070;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,16384
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16384, ctx.xer);
	// beq cr6,0x8813c0d0
	if (ctx.cr6.eq) goto loc_8813C0D0;
loc_8813C07C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c094
	if (ctx.cr6.eq) goto loc_8813C094;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,256
	ctx.r3.s64 = ctx.r26.s64 + 256;
	// bl 0x88052d90
	ctx.lr = 0x8813C094;
	sub_88052D90(ctx, base);
loc_8813C094:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8813c0d0
	if (ctx.cr6.eq) goto loc_8813C0D0;
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8813C0A4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8813C0B4:
	// sthu r9,2(r11)
	ctx.current_instruction = 0x8813C0B4;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8813c0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813C0B4;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bne 0x8813c0a4
	if (!ctx.cr0.eq) goto loc_8813C0A4;
	// b 0x8813c0d0
	goto loc_8813C0D0;
loc_8813C0CC:
	// lwz r17,220(r1)
	ctx.current_instruction = 0x8813C0CC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
loc_8813C0D0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x8813C0E4;
	sub_880EB9E0(ctx, base);
loc_8813C0E4:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,580(r1)
	ctx.current_instruction = 0x8813C0EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r7,748(r1)
	ctx.current_instruction = 0x8813C0F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r24,684(r1)
	ctx.current_instruction = 0x8813C0FC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r28,652(r1)
	ctx.current_instruction = 0x8813C100;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r27,660(r1)
	ctx.current_instruction = 0x8813C108;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r30,644(r1)
	ctx.current_instruction = 0x8813C110;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r23,692(r1)
	ctx.current_instruction = 0x8813C118;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r19,724(r1)
	ctx.current_instruction = 0x8813C11C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r20,716(r1)
	ctx.current_instruction = 0x8813C120;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r21,708(r1)
	ctx.current_instruction = 0x8813C124;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r26,668(r1)
	ctx.current_instruction = 0x8813C128;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r18,732(r1)
	ctx.current_instruction = 0x8813C12C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r25,676(r1)
	ctx.current_instruction = 0x8813C130;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// stw r7,188(r1)
	ctx.current_instruction = 0x8813C134;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// stw r24,132(r1)
	ctx.current_instruction = 0x8813C138;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r28,100(r1)
	ctx.current_instruction = 0x8813C13C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8813C140;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x8813C144;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r30,92(r1)
	ctx.current_instruction = 0x8813C148;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r23,140(r1)
	ctx.current_instruction = 0x8813C14C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r19,172(r1)
	ctx.current_instruction = 0x8813C150;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r20,164(r1)
	ctx.current_instruction = 0x8813C154;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r21,156(r1)
	ctx.current_instruction = 0x8813C158;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x8813C15C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r18,180(r1)
	ctx.current_instruction = 0x8813C160;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x8813C164;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lwz r22,700(r1)
	ctx.current_instruction = 0x8813C168;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r7,288(r1)
	ctx.current_instruction = 0x8813C16C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// stw r22,148(r1)
	ctx.current_instruction = 0x8813C170;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// bl 0x88103740
	ctx.lr = 0x8813C178;
	sub_88103740(ctx, base);
loc_8813C178:
	// addi r3,r17,276
	ctx.r3.s64 = ctx.r17.s64 + 276;
	// addi r9,r30,1536
	ctx.r9.s64 = ctx.r30.s64 + 1536;
	// lwz r6,208(r1)
	ctx.current_instruction = 0x8813C180;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r28,12
	ctx.r8.s64 = ctx.r28.s64 + 12;
	// stw r3,220(r1)
	ctx.current_instruction = 0x8813C188;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r7,r27,768
	ctx.r7.s64 = ctx.r27.s64 + 768;
	// stw r9,644(r1)
	ctx.current_instruction = 0x8813C190;
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r9.u32);
	// stw r8,652(r1)
	ctx.current_instruction = 0x8813C194;
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r8.u32);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// stw r7,660(r1)
	ctx.current_instruction = 0x8813C19C;
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r7.u32);
	// addi r9,r25,768
	ctx.r9.s64 = ctx.r25.s64 + 768;
	// addi r8,r24,12
	ctx.r8.s64 = ctx.r24.s64 + 12;
	// stw r3,668(r1)
	ctx.current_instruction = 0x8813C1A8;
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r3.u32);
	// addi r7,r23,768
	ctx.r7.s64 = ctx.r23.s64 + 768;
	// stw r9,676(r1)
	ctx.current_instruction = 0x8813C1B0;
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r9.u32);
	// stw r8,684(r1)
	ctx.current_instruction = 0x8813C1B4;
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r8.u32);
	// addi r3,r22,12
	ctx.r3.s64 = ctx.r22.s64 + 12;
	// stw r7,692(r1)
	ctx.current_instruction = 0x8813C1BC;
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// addi r9,r21,768
	ctx.r9.s64 = ctx.r21.s64 + 768;
	// addi r8,r20,12
	ctx.r8.s64 = ctx.r20.s64 + 12;
	// lwz r5,192(r1)
	ctx.current_instruction = 0x8813C1C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r7,r19,1536
	ctx.r7.s64 = ctx.r19.s64 + 1536;
	// lwz r4,196(r1)
	ctx.current_instruction = 0x8813C1D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r3,700(r1)
	ctx.current_instruction = 0x8813C1D4;
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r3.u32);
	// addi r11,r16,1
	ctx.r11.s64 = ctx.r16.s64 + 1;
	// stw r9,708(r1)
	ctx.current_instruction = 0x8813C1DC;
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r9.u32);
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
	// stw r8,716(r1)
	ctx.current_instruction = 0x8813C1E4;
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r8.u32);
	// addi r3,r18,48
	ctx.r3.s64 = ctx.r18.s64 + 48;
	// stw r7,724(r1)
	ctx.current_instruction = 0x8813C1EC;
	REX_STORE_U32(ctx.r1.u32 + 724, ctx.r7.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// lwz r10,224(r1)
	ctx.current_instruction = 0x8813C1F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// stw r11,204(r1)
	ctx.current_instruction = 0x8813C1FC;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r3,732(r1)
	ctx.current_instruction = 0x8813C200;
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r3.u32);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// stw r9,208(r1)
	ctx.current_instruction = 0x8813C208;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,192(r1)
	ctx.current_instruction = 0x8813C20C;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,196(r1)
	ctx.current_instruction = 0x8813C210;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// lwz r5,244(r1)
	ctx.current_instruction = 0x8813C214;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r10,r29,720
	ctx.r10.s64 = ctx.r29.s64 + 720;
	// lwz r4,248(r1)
	ctx.current_instruction = 0x8813C21C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,228(r1)
	ctx.current_instruction = 0x8813C220;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// lwz r8,720(r29)
	ctx.current_instruction = 0x8813C228;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stw r6,224(r1)
	ctx.current_instruction = 0x8813C234;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x8813C238;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r7,248(r1)
	ctx.current_instruction = 0x8813C240;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// stw r5,228(r1)
	ctx.current_instruction = 0x8813C244;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// blt cr6,0x8813b174
	if (ctx.cr6.lt) goto loc_8813B174;
loc_8813C24C:
	// lwz r10,468(r1)
	ctx.current_instruction = 0x8813C24C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,532(r1)
	ctx.current_instruction = 0x8813C250;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// addi r11,r10,1408
	ctx.r11.s64 = ctx.r10.s64 + 1408;
	// lwz r6,540(r1)
	ctx.current_instruction = 0x8813C258;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r9,200(r1)
	ctx.current_instruction = 0x8813C25C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r7,524(r1)
	ctx.current_instruction = 0x8813C260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r11,1408(r10)
	ctx.current_instruction = 0x8813C264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1408);
	// addi r10,r10,1404
	ctx.r10.s64 = ctx.r10.s64 + 1404;
	// lwz r5,484(r1)
	ctx.current_instruction = 0x8813C26C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r9,200(r1)
	ctx.current_instruction = 0x8813C27C;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r4,532(r1)
	ctx.current_instruction = 0x8813C280;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r4.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.current_instruction = 0x8813C288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,540(r1)
	ctx.current_instruction = 0x8813C28C;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,524(r1)
	ctx.current_instruction = 0x8813C294;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
	// blt cr6,0x8813b0c8
	if (ctx.cr6.lt) goto loc_8813B0C8;
loc_8813C29C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817D3E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D3E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D3E0;
	ctx.current_instruction = 0x8817D3E0;
	// lwz r10,15612(r3)
	ctx.current_instruction = 0x8817D3E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15612);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// bne cr6,0x8817d414
	if (!ctx.cr6.eq) goto loc_8817D414;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3980(r3)
	ctx.current_instruction = 0x8817D400;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15572(r11)
	ctx.current_instruction = 0x8817D408;
	REX_STORE_U32(ctx.r11.u32 + 15572, ctx.r10.u32);
	// stw r10,15576(r11)
	ctx.current_instruction = 0x8817D40C;
	REX_STORE_U32(ctx.r11.u32 + 15576, ctx.r10.u32);
	// b 0x8818be18
	sub_8818BE18(ctx, base);
	return;
loc_8817D414:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8817d434
	if (!ctx.cr6.eq) goto loc_8817D434;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3980(r11)
	ctx.current_instruction = 0x8817D420;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3980);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,15572(r11)
	ctx.current_instruction = 0x8817D428;
	REX_STORE_U32(ctx.r11.u32 + 15572, ctx.r10.u32);
	// stw r10,15576(r11)
	ctx.current_instruction = 0x8817D42C;
	REX_STORE_U32(ctx.r11.u32 + 15576, ctx.r10.u32);
	// b 0x8818be18
	sub_8818BE18(ctx, base);
	return;
loc_8817D434:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8817d458
	if (!ctx.cr6.eq) goto loc_8817D458;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3980(r11)
	ctx.current_instruction = 0x8817D440;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3980);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,15572(r11)
	ctx.current_instruction = 0x8817D448;
	REX_STORE_U32(ctx.r11.u32 + 15572, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15576(r11)
	ctx.current_instruction = 0x8817D450;
	REX_STORE_U32(ctx.r11.u32 + 15576, ctx.r9.u32);
	// b 0x8818be18
	sub_8818BE18(ctx, base);
	return;
loc_8817D458:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8817d478
	if (!ctx.cr6.eq) goto loc_8817D478;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,3980(r11)
	ctx.current_instruction = 0x8817D464;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3980);
	// stw r10,15572(r11)
	ctx.current_instruction = 0x8817D468;
	REX_STORE_U32(ctx.r11.u32 + 15572, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,15576(r11)
	ctx.current_instruction = 0x8817D470;
	REX_STORE_U32(ctx.r11.u32 + 15576, ctx.r9.u32);
	// b 0x8818be18
	sub_8818BE18(ctx, base);
	return;
loc_8817D478:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,15572(r11)
	ctx.current_instruction = 0x8817D47C;
	REX_STORE_U32(ctx.r11.u32 + 15572, ctx.r10.u32);
	// stw r10,15576(r11)
	ctx.current_instruction = 0x8817D480;
	REX_STORE_U32(ctx.r11.u32 + 15576, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817DC40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817DC40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817DC40) {
			switch (rex_dispatch_address) {
				case 0x8817DC48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817DC40;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8817DC48: goto loc_8817DC48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8817DC48;
	__savegprlr_29(ctx, base);
loc_8817DC48:
	// lhz r30,50(r3)
	ctx.current_instruction = 0x8817DC48;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 16;
	// lhz r29,52(r3)
	ctx.current_instruction = 0x8817DC50;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8817dc70
	if (!ctx.cr6.eq) goto loc_8817DC70;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8817dc78
	goto loc_8817DC78;
loc_8817DC70:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8817dc7c
	if (!ctx.cr6.eq) goto loc_8817DC7C;
loc_8817DC78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8817DC7C:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lhz r9,18(r7)
	ctx.current_instruction = 0x8817DC80;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// lhz r8,16(r7)
	ctx.current_instruction = 0x8817DC84;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r7,r6,31
	ctx.r7.u64 = ctx.r6.u32 & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// subfic r10,r11,-15
	ctx.xer.ca = ctx.r11.u32 <= 4294967281;
	ctx.r10.u64 = static_cast<uint64_t>(-15) - ctx.r11.u64;
	// beq cr6,0x8817dcb8
	if (ctx.cr6.eq) goto loc_8817DCB8;
	// subfic r10,r11,-7
	ctx.xer.ca = ctx.r11.u32 <= 4294967289;
	ctx.r10.u64 = static_cast<uint64_t>(-7) - ctx.r11.u64;
loc_8817DCB8:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8817dd08
	if (!ctx.cr6.lt) goto loc_8817DD08;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// b 0x8817dd14
	goto loc_8817DD14;
loc_8817DD08:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8817dd18
	if (!ctx.cr6.gt) goto loc_8817DD18;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8817DD14:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8817DD18:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8817dd28
	if (!ctx.cr6.lt) goto loc_8817DD28;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// b 0x8817dd34
	goto loc_8817DD34;
loc_8817DD28:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8817dd38
	if (!ctx.cr6.gt) goto loc_8817DD38;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8817DD34:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8817DD38:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8817dd48
	if (!ctx.cr6.eq) goto loc_8817DD48;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
loc_8817DD48:
	// rlwimi r3,r31,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881833C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881833C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881833C0) {
			switch (rex_dispatch_address) {
				case 0x881833C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881833C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881833C8: goto loc_881833C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881833C8;
	__savegprlr_23(ctx, base);
loc_881833C8:
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r5,-16
	ctx.r10.s64 = ctx.r5.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881833E4:
	// lhz r7,22(r10)
	ctx.current_instruction = 0x881833E4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r6,26(r10)
	ctx.current_instruction = 0x881833E8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r9,18(r10)
	ctx.current_instruction = 0x881833EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r8,30(r10)
	ctx.current_instruction = 0x881833F4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,20(r10)
	ctx.current_instruction = 0x88183400;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,24(r10)
	ctx.current_instruction = 0x88183408;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r27,28(r10)
	ctx.current_instruction = 0x88183410;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzu r4,16(r10)
	ctx.current_instruction = 0x88183418;
	ea = 16 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r31,r3,2408
	ctx.r31.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r5,r5,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(565));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// mulli r9,r9,2276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// subf r3,r6,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r30,r8,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r31,r7,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r5,r31,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r31.u64;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// add r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r24,r5,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// mulli r4,r29,1108
	ctx.r4.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1108));
	// mulli r7,r7,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1568));
	// rlwinm r5,r5,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// mulli r23,r6,3784
	ctx.r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3784));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r28,r27,181
	ctx.r28.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(181));
	// subf r29,r5,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mulli r27,r24,181
	ctx.r27.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(181));
	// subf r8,r23,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r23.u64;
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// subf r28,r6,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 + ctx.r8.u64;
	// subf r3,r8,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r8.u64;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 8;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 8;
	// subf r8,r8,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r8.u64;
	// sth r3,6(r11)
	ctx.current_instruction = 0x881834E8;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// sth r8,8(r11)
	ctx.current_instruction = 0x881834F8;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sth r4,10(r11)
	ctx.current_instruction = 0x88183504;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// sth r31,0(r11)
	ctx.current_instruction = 0x88183510;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// sth r30,2(r11)
	ctx.current_instruction = 0x88183518;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// sth r29,4(r11)
	ctx.current_instruction = 0x8818351C;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r29.u16);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r6,12(r11)
	ctx.current_instruction = 0x8818352C;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r4,14(r11)
	ctx.current_instruction = 0x88183530;
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bdnz 0x881833e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881833E4;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r5,r11,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r11.u64;
	// add r8,r26,r10
	ctx.r8.u64 = ctx.r26.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_88183564:
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88183564;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r7,r4,r11
	ctx.current_instruction = 0x88183568;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// lhzx r6,r3,r11
	ctx.current_instruction = 0x8818356C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lhzx r9,r5,r11
	ctx.current_instruction = 0x88183574;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r6,r31,1892
	ctx.r6.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r7,r30,784
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(784));
	// subf r28,r8,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r30,r30,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1892));
	// mulli r31,r31,784
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(784));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r8,r29,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r28,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1448));
	// subf r7,r30,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// sthx r6,r5,r11
	ctx.current_instruction = 0x881835D4;
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u16);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	ctx.current_instruction = 0x881835EC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthx r7,r4,r11
	ctx.current_instruction = 0x881835F0;
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r6,r3,r11
	ctx.current_instruction = 0x881835F4;
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x88183564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183564;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88187F40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88187F40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88187F40) {
			switch (rex_dispatch_address) {
				case 0x88187F7C:
				case 0x88187F84:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88187F40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88187F7C: goto loc_88187F7C;
		case 0x88187F84: goto loc_88187F84;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88187F44;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88187F48;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88187F4C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88187f74
	if (!ctx.cr6.eq) goto loc_88187F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88187F64;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88187F6C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88187F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88187b98
	ctx.lr = 0x88187F7C;
	sub_88187B98(ctx, base);
loc_88187F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815ba70
	ctx.lr = 0x88187F84;
	sub_8815BA70(ctx, base);
loc_88187F84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88187F8C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88187F94;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881886A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881886A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881886A0) {
			switch (rex_dispatch_address) {
				case 0x881886A8:
				case 0x88188770:
				case 0x8818879C:
				case 0x881887B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881886A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881886A8: goto loc_881886A8;
		case 0x88188770: goto loc_88188770;
		case 0x8818879C: goto loc_8818879C;
		case 0x881887B0: goto loc_881887B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881886A8;
	__savegprlr_29(ctx, base);
loc_881886A8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881886A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881886AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,296(r3)
	ctx.current_instruction = 0x881886B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,300(r3)
	ctx.current_instruction = 0x881886C0;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8818872c
	if (!ctx.cr6.eq) goto loc_8818872C;
	// lwz r10,12(r3)
	ctx.current_instruction = 0x881886CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,36(r3)
	ctx.current_instruction = 0x881886D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x881886ec
	if (!ctx.cr6.eq) goto loc_881886EC;
	// lwz r10,16(r3)
	ctx.current_instruction = 0x881886DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,40(r3)
	ctx.current_instruction = 0x881886E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x881886f4
	if (ctx.cr6.eq) goto loc_881886F4;
loc_881886EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,300(r31)
	ctx.current_instruction = 0x881886F0;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_881886F4:
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881886F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.current_instruction = 0x881886F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88188710
	if (!ctx.cr6.eq) goto loc_88188710;
	// lwz r10,48(r31)
	ctx.current_instruction = 0x88188704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818871c
	if (ctx.cr6.eq) goto loc_8818871C;
loc_88188710:
	// lwz r11,300(r31)
	ctx.current_instruction = 0x88188710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,300(r31)
	ctx.current_instruction = 0x88188718;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_8818871C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8818871C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88188720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r11)
	ctx.current_instruction = 0x88188724;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x88188750
	goto loc_88188750;
loc_8818872C:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8818872C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88188734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r31)
	ctx.current_instruction = 0x8818873C;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 1;
	// stw r7,8(r9)
	ctx.current_instruction = 0x88188748;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
loc_88188750:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88188750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.current_instruction = 0x88188758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	ctx.current_instruction = 0x8818875C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r29,0(r31)
	ctx.current_instruction = 0x88188760;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,8(r29)
	ctx.current_instruction = 0x88188764;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x88188768;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x88188600
	ctx.lr = 0x88188770;
	sub_88188600(ctx, base);
loc_88188770:
	// stw r3,20(r29)
	ctx.current_instruction = 0x88188770;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88188778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,292(r31)
	ctx.current_instruction = 0x8818877C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x88188784;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,12(r31)
	ctx.current_instruction = 0x88188788;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r11)
	ctx.current_instruction = 0x8818878C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x881887a8
	if (ctx.cr6.eq) goto loc_881887A8;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x881cea20
	ctx.lr = 0x8818879C;
	sub_881CEA20(ctx, base);
loc_8818879C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881887A8:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x881cebb0
	ctx.lr = 0x881887B0;
	sub_881CEBB0(ctx, base);
loc_881887B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818D418) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8818D418);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818D418;
	ctx.current_instruction = 0x8818D418;
	// lhz r11,0(r3)
	ctx.current_instruction = 0x8818D418;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,16(r5)
	ctx.current_instruction = 0x8818D420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x8818D428;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.current_instruction = 0x8818D42C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r6,0(r3)
	ctx.current_instruction = 0x8818D434;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8818D448:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x8818D448;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818d478
	if (ctx.cr6.eq) goto loc_8818D478;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// ble cr6,0x8818d470
	if (!ctx.cr6.gt) goto loc_8818D470;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// sth r7,0(r11)
	ctx.current_instruction = 0x8818D468;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x8818d478
	goto loc_8818D478;
loc_8818D470:
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r7,0(r11)
	ctx.current_instruction = 0x8818D474;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_8818D478:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8818d448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818D448;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88191418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88191418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88191418) {
			switch (rex_dispatch_address) {
				case 0x88191420:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88191418;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88191420: goto loc_88191420;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88191420;
	__savegprlr_21(ctx, base);
loc_88191420:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x88191420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x88191428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r3)
	ctx.current_instruction = 0x88191430;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r8,-188(r1)
	ctx.current_instruction = 0x88191438;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// stw r8,-192(r1)
	ctx.current_instruction = 0x88191440;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lbz r6,0(r10)
	ctx.current_instruction = 0x88191444;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// sth r6,24(r11)
	ctx.current_instruction = 0x8819144C;
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lbz r5,-1(r9)
	ctx.current_instruction = 0x88191450;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// sth r5,0(r11)
	ctx.current_instruction = 0x88191454;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lbz r4,1(r10)
	ctx.current_instruction = 0x88191458;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r4,26(r11)
	ctx.current_instruction = 0x8819145C;
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// lbz r3,-2(r9)
	ctx.current_instruction = 0x88191460;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// sth r3,2(r11)
	ctx.current_instruction = 0x88191464;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lbz r6,2(r10)
	ctx.current_instruction = 0x88191468;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r6,28(r11)
	ctx.current_instruction = 0x8819146C;
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r6.u16);
	// lbz r5,-3(r9)
	ctx.current_instruction = 0x88191470;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// sth r5,4(r11)
	ctx.current_instruction = 0x88191474;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x88191478;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,30(r11)
	ctx.current_instruction = 0x8819147C;
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r4.u16);
	// lbz r3,-4(r9)
	ctx.current_instruction = 0x88191480;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -4);
	// sth r3,6(r11)
	ctx.current_instruction = 0x88191484;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lbz r6,4(r10)
	ctx.current_instruction = 0x88191488;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// sth r6,32(r11)
	ctx.current_instruction = 0x8819148C;
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// lbz r5,-5(r9)
	ctx.current_instruction = 0x88191490;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -5);
	// sth r5,8(r11)
	ctx.current_instruction = 0x88191494;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x88191498;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// sth r4,34(r11)
	ctx.current_instruction = 0x8819149C;
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
	// lbz r3,-6(r9)
	ctx.current_instruction = 0x881914A0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -6);
	// sth r3,10(r11)
	ctx.current_instruction = 0x881914A4;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// lbz r6,6(r10)
	ctx.current_instruction = 0x881914A8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// sth r6,36(r11)
	ctx.current_instruction = 0x881914AC;
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r6.u16);
	// lbz r5,-7(r9)
	ctx.current_instruction = 0x881914B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -7);
	// sth r5,12(r11)
	ctx.current_instruction = 0x881914B4;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// lbz r4,7(r10)
	ctx.current_instruction = 0x881914B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// sth r4,38(r11)
	ctx.current_instruction = 0x881914BC;
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r4.u16);
	// lbz r3,-8(r9)
	ctx.current_instruction = 0x881914C0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -8);
	// sth r3,14(r11)
	ctx.current_instruction = 0x881914C4;
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r3.u16);
	// lbzu r9,8(r10)
	ctx.current_instruction = 0x881914C8;
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// sth r9,40(r11)
	ctx.current_instruction = 0x881914CC;
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// sth r8,16(r11)
	ctx.current_instruction = 0x881914D0;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lbz r6,1(r10)
	ctx.current_instruction = 0x881914D4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r6,42(r11)
	ctx.current_instruction = 0x881914D8;
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r6.u16);
	// sth r8,18(r11)
	ctx.current_instruction = 0x881914DC;
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881914E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r5,44(r11)
	ctx.current_instruction = 0x881914E4;
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r5.u16);
	// sth r8,20(r11)
	ctx.current_instruction = 0x881914E8;
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881914EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,46(r11)
	ctx.current_instruction = 0x881914F0;
	REX_STORE_U16(ctx.r11.u32 + 46, ctx.r4.u16);
	// sth r8,22(r11)
	ctx.current_instruction = 0x881914F4;
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r8.u16);
	// lwz r3,24(r11)
	ctx.current_instruction = 0x881914F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881914FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,28(r11)
	ctx.current_instruction = 0x88191500;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,8(r11)
	ctx.current_instruction = 0x88191504;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,32(r11)
	ctx.current_instruction = 0x88191508;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819150C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-184(r1)
	ctx.current_instruction = 0x88191518;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r29,12(r11)
	ctx.current_instruction = 0x88191520;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,-180(r1)
	ctx.current_instruction = 0x88191528;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r3.u32);
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// stw r10,-176(r1)
	ctx.current_instruction = 0x88191540;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// stw r9,-172(r1)
	ctx.current_instruction = 0x88191548;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzu r6,-4(r10)
	ctx.current_instruction = 0x8819155C;
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r9,-168(r1)
	ctx.current_instruction = 0x88191568;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x88191570;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,-164(r1)
	ctx.current_instruction = 0x88191578;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// srawi r30,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 1;
	// lwz r25,-8(r10)
	ctx.current_instruction = 0x88191580;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r7,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 1;
	// lwz r24,-12(r10)
	ctx.current_instruction = 0x88191588;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r28,44(r11)
	ctx.current_instruction = 0x88191590;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88191598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r23,40(r11)
	ctx.current_instruction = 0x881915A0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r4,r26,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,4(r10)
	ctx.current_instruction = 0x881915A8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// stw r9,-124(r1)
	ctx.current_instruction = 0x881915B0;
	REX_STORE_U32(ctx.r1.u32 + -124, ctx.r9.u32);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// lwz r22,12(r11)
	ctx.current_instruction = 0x881915B8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r25,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,36(r11)
	ctx.current_instruction = 0x881915C0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,0(r11)
	ctx.current_instruction = 0x881915C8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-112(r1)
	ctx.current_instruction = 0x881915D0;
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// stw r29,-120(r1)
	ctx.current_instruction = 0x881915D8;
	REX_STORE_U32(ctx.r1.u32 + -120, ctx.r29.u32);
	// rlwinm r4,r3,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-132(r1)
	ctx.current_instruction = 0x881915E0;
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// stw r7,-128(r1)
	ctx.current_instruction = 0x881915E8;
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r7,44(r31)
	ctx.current_instruction = 0x881915F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r9,40(r31)
	ctx.current_instruction = 0x881915F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r23,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r26,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-136(r1)
	ctx.current_instruction = 0x88191604;
	REX_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// add r8,r5,r28
	ctx.r8.u64 = ctx.r5.u64 + ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r5,r21,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r4,r24,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-116(r1)
	ctx.current_instruction = 0x88191624;
	REX_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// rlwinm r26,r22,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,-144(r1)
	ctx.current_instruction = 0x8819162C;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// rlwinm r31,r25,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-160(r1)
	ctx.current_instruction = 0x88191640;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-156(r1)
	ctx.current_instruction = 0x88191648;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// stw r6,-140(r1)
	ctx.current_instruction = 0x88191650;
	REX_STORE_U32(ctx.r1.u32 + -140, ctx.r6.u32);
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// stw r8,-108(r1)
	ctx.current_instruction = 0x88191658;
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r8.u32);
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// stw r5,-208(r1)
	ctx.current_instruction = 0x88191660;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stw r4,-204(r1)
	ctx.current_instruction = 0x88191668;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r4.u32);
	// li r28,10
	ctx.r28.s64 = 10;
loc_88191670:
	// clrlwi r27,r28,31
	ctx.r27.u64 = ctx.r28.u32 & 0x1;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x88191684
	if (!ctx.cr6.eq) goto loc_88191684;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191684:
	// lhz r29,0(r11)
	ctx.current_instruction = 0x88191684;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r26,r28,-1
	ctx.r26.s64 = ctx.r28.s64 + -1;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x8819168C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88191690;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x88191698;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x881916A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	ctx.current_instruction = 0x881916FC;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// clrlwi r29,r26,31
	ctx.r29.u64 = ctx.r26.u32 & 0x1;
	// stw r8,0(r5)
	ctx.current_instruction = 0x88191704;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// sth r9,2(r6)
	ctx.current_instruction = 0x88191708;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x88191724
	if (!ctx.cr6.eq) goto loc_88191724;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191724:
	// lhz r26,0(r11)
	ctx.current_instruction = 0x88191724;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x8819172C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88191730;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x88191738;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x88191744;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	ctx.current_instruction = 0x8819179C;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	ctx.current_instruction = 0x881917A0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	ctx.current_instruction = 0x881917A8;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x881917bc
	if (!ctx.cr6.eq) goto loc_881917BC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_881917BC:
	// lhz r26,0(r11)
	ctx.current_instruction = 0x881917BC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x881917C4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x881917C8;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x881917D0;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x881917DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	ctx.current_instruction = 0x88191834;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	ctx.current_instruction = 0x88191838;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	ctx.current_instruction = 0x88191840;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x88191854
	if (!ctx.cr6.eq) goto loc_88191854;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191854:
	// lhz r29,0(r11)
	ctx.current_instruction = 0x88191854;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x8819185C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88191860;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x88191868;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x88191874;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	ctx.current_instruction = 0x881918CC;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	ctx.current_instruction = 0x881918D0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	ctx.current_instruction = 0x881918D8;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x881918ec
	if (!ctx.cr6.eq) goto loc_881918EC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_881918EC:
	// lhz r29,0(r11)
	ctx.current_instruction = 0x881918EC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r28,r28,-5
	ctx.r28.s64 = ctx.r28.s64 + -5;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x881918F4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x881918F8;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x88191900;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x8819190C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sth r3,0(r6)
	ctx.current_instruction = 0x88191964;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	ctx.current_instruction = 0x8819196C;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,0(r5)
	ctx.current_instruction = 0x88191974;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// bdnz 0x88191670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191670;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819CB88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819CB88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819CB88) {
			switch (rex_dispatch_address) {
				case 0x8819CB90:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819CB88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819CB90: goto loc_8819CB90;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x8819CB90;
	__savegprlr_18(ctx, base);
loc_8819CB90:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8819cc10
	if (ctx.cr6.eq) goto loc_8819CC10;
	// lwz r31,21968(r11)
	ctx.current_instruction = 0x8819CBB4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r30
	ctx.current_instruction = 0x8819CBBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8819cc10
	if (!ctx.cr6.eq) goto loc_8819CC10;
	// lwz r31,136(r11)
	ctx.current_instruction = 0x8819CBC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
	// lwz r28,1784(r11)
	ctx.current_instruction = 0x8819CBD0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r30,r30,r31
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r28
	ctx.current_instruction = 0x8819CBE0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x8819cc00
	if (ctx.cr6.eq) goto loc_8819CC00;
	// lwz r30,288(r11)
	ctx.current_instruction = 0x8819CBEC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8819cc00
	if (ctx.cr6.eq) goto loc_8819CC00;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8819cc10
	if (!ctx.cr6.eq) goto loc_8819CC10;
loc_8819CC00:
	// rlwinm r6,r31,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r22,1932(r11)
	ctx.current_instruction = 0x8819CC04;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// subf r25,r6,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8819CC10:
	// lis r30,-30719
	ctx.r30.s64 = -2013200384;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,26488
	ctx.r30.s64 = ctx.r30.s64 + 26488;
	// beq cr6,0x8819cdbc
	if (ctx.cr6.eq) goto loc_8819CDBC;
	// lwz r24,136(r11)
	ctx.current_instruction = 0x8819CC24;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r27,1784(r11)
	ctx.current_instruction = 0x8819CC28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r28,r24,r7
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lhz r28,-2(r28)
	ctx.current_instruction = 0x8819CC3C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + -2);
	// cmplwi cr6,r28,16384
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16384, ctx.xer);
	// beq cr6,0x8819cc5c
	if (ctx.cr6.eq) goto loc_8819CC5C;
	// lwz r28,288(r11)
	ctx.current_instruction = 0x8819CC48;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819cc5c
	if (ctx.cr6.eq) goto loc_8819CC5C;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8819cdbc
	if (!ctx.cr6.eq) goto loc_8819CDBC;
loc_8819CC5C:
	// lwz r22,1928(r11)
	ctx.current_instruction = 0x8819CC5C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// addic. r6,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	ctx.r6.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8819d0fc
	if (ctx.cr0.eq) goto loc_8819D0FC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8819cdbc
	if (ctx.cr6.eq) goto loc_8819CDBC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// mullw r7,r7,r24
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// lhz r5,-2(r7)
	ctx.current_instruction = 0x8819CC88;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x8819cca8
	if (ctx.cr6.eq) goto loc_8819CCA8;
	// lwz r7,288(r11)
	ctx.current_instruction = 0x8819CC94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8819cca8
	if (ctx.cr6.eq) goto loc_8819CCA8;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8819ccbc
	if (!ctx.cr6.eq) goto loc_8819CCBC;
loc_8819CCA8:
	// lwz r7,1924(r11)
	ctx.current_instruction = 0x8819CCA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r5,r25
	ctx.current_instruction = 0x8819CCB4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r25.u32);
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
loc_8819CCBC:
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819CCBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lbz r29,4(r4)
	ctx.current_instruction = 0x8819CCC0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,6608(r11)
	ctx.current_instruction = 0x8819CCC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// rotlwi r27,r29,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// lwz r24,1924(r11)
	ctx.current_instruction = 0x8819CCD0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lbz r5,-20(r4)
	ctx.current_instruction = 0x8819CCD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r27,1920(r11)
	ctx.current_instruction = 0x8819CCE0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1920);
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r21,r28,r4
	ctx.r21.u64 = ctx.r4.u64 - ctx.r28.u64;
	// rotlwi r28,r5,2
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r20,r29,r7
	ctx.r20.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r19,r5,r28
	ctx.r19.u64 = ctx.r5.u64 + ctx.r28.u64;
	// rlwinm r18,r27,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r29,-20(r21)
	ctx.current_instruction = 0x8819CD00;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r21.u32 + -20);
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,4(r21)
	ctx.current_instruction = 0x8819CD08;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// rotlwi r28,r29,2
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// lwz r21,16(r20)
	ctx.current_instruction = 0x8819CD10;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// rotlwi r27,r5,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lhzx r28,r24,r25
	ctx.current_instruction = 0x8819CD20;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r25.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r24,r18,r6
	ctx.current_instruction = 0x8819CD28;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r6.u32);
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r5,r7
	ctx.r27.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r21,r21,2,24,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFC;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r27,16(r27)
	ctx.current_instruction = 0x8819CD48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r5,r21,r30
	ctx.current_instruction = 0x8819CD4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r30.u32);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lwz r29,16(r29)
	ctx.current_instruction = 0x8819CD54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mullw r27,r27,r5
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// lwz r7,16(r7)
	ctx.current_instruction = 0x8819CD5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mullw r28,r27,r26
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// mullw r29,r29,r5
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mullw r27,r7,r24
	ctx.r27.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// srawi r7,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// mullw r5,r27,r5
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// subf r29,r29,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// xor r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r5,r28,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r28.u64;
	// srawi r29,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r29.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8819cdbc
	if (!ctx.cr6.lt) goto loc_8819CDBC;
	// lwz r22,1932(r11)
	ctx.current_instruction = 0x8819CDB4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8819CDBC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8819d0fc
	if (ctx.cr6.eq) goto loc_8819D0FC;
	// lwz r7,0(r4)
	ctx.current_instruction = 0x8819CDC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// lwz r5,1928(r11)
	ctx.current_instruction = 0x8819CDCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r7,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// cmpw cr6,r22,r5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r5.s32, ctx.xer);
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// and r24,r5,r23
	ctx.r24.u64 = ctx.r5.u64 & ctx.r23.u64;
	// lbz r5,4(r4)
	ctx.current_instruction = 0x8819CDF0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r23,0(r6)
	ctx.current_instruction = 0x8819CDF4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// rotlwi r26,r5,2
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bne cr6,0x8819cf3c
	if (!ctx.cr6.eq) goto loc_8819CF3C;
	// lbz r29,-20(r4)
	ctx.current_instruction = 0x8819CE04;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// extsh r27,r23
	ctx.r27.s64 = ctx.r23.s16;
	// lwz r28,6608(r11)
	ctx.current_instruction = 0x8819CE0C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// rotlwi r25,r29,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// add r26,r29,r25
	ctx.r26.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r29,16(r29)
	ctx.current_instruction = 0x8819CE2C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r28,16(r28)
	ctx.current_instruction = 0x8819CE30;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r29,r29,2,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFC;
	// lwzx r29,r29,r30
	ctx.current_instruction = 0x8819CE38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mullw r29,r29,r27
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// sth r29,0(r10)
	ctx.current_instruction = 0x8819CE4C;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
loc_8819CE50:
	// lbz r29,4(r4)
	ctx.current_instruction = 0x8819CE50;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r28,2(r6)
	ctx.current_instruction = 0x8819CE54;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// rlwinm r29,r29,2,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFC;
	// lbz r27,-20(r4)
	ctx.current_instruction = 0x8819CE5C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lwzx r29,r29,r30
	ctx.current_instruction = 0x8819CE64;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mullw r29,r29,r27
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// sth r29,-2(r7)
	ctx.current_instruction = 0x8819CE78;
	REX_STORE_U16(ctx.r7.u32 + -2, ctx.r29.u16);
	// lhzx r29,r5,r7
	ctx.current_instruction = 0x8819CE7C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// lbz r28,-20(r4)
	ctx.current_instruction = 0x8819CE80;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	ctx.current_instruction = 0x8819CE84;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFC;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lwzx r27,r27,r30
	ctx.current_instruction = 0x8819CE90;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// mullw r29,r27,r29
	ctx.r29.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// sth r29,0(r7)
	ctx.current_instruction = 0x8819CEA4;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r29.u16);
	// lhz r29,6(r6)
	ctx.current_instruction = 0x8819CEA8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// lbz r28,-20(r4)
	ctx.current_instruction = 0x8819CEAC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	ctx.current_instruction = 0x8819CEB0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	ctx.current_instruction = 0x8819CEB8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r28,r27,r28
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// sth r29,2(r7)
	ctx.current_instruction = 0x8819CED0;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r29.u16);
	// lhz r29,8(r6)
	ctx.current_instruction = 0x8819CED4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lbz r28,-20(r4)
	ctx.current_instruction = 0x8819CED8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	ctx.current_instruction = 0x8819CEDC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	ctx.current_instruction = 0x8819CEE4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r28,r27,r28
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// sth r29,4(r7)
	ctx.current_instruction = 0x8819CEFC;
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r29.u16);
	// lbz r28,-20(r4)
	ctx.current_instruction = 0x8819CF00;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lhzu r29,10(r6)
	ctx.current_instruction = 0x8819CF04;
	ea = 10 + ctx.r6.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// lbz r27,4(r4)
	ctx.current_instruction = 0x8819CF08;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	ctx.current_instruction = 0x8819CF10;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r28,r27,r28
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// sth r29,6(r7)
	ctx.current_instruction = 0x8819CF2C;
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r29.u16);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// bdnz 0x8819ce50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819CE50;
	// b 0x8819d0e8
	goto loc_8819D0E8;
loc_8819CF3C:
	// lwz r28,136(r11)
	ctx.current_instruction = 0x8819CF3C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,6608(r11)
	ctx.current_instruction = 0x8819CF44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// subf r27,r10,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rlwinm r25,r28,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r5,r29
	ctx.r26.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// extsh r25,r23
	ctx.r25.s64 = ctx.r23.s16;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r28,r28,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r26,16(r26)
	ctx.current_instruction = 0x8819CF64;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r26,r26,2,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFC;
	// lbz r5,4(r28)
	ctx.current_instruction = 0x8819CF6C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// rotlwi r28,r5,2
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lwzx r29,r26,r30
	ctx.current_instruction = 0x8819CF80;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// lwz r5,16(r5)
	ctx.current_instruction = 0x8819CF84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r5,r25
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,0(r10)
	ctx.current_instruction = 0x8819CF98;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
loc_8819CF9C:
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819CF9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lbz r28,4(r4)
	ctx.current_instruction = 0x8819CFA0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,2(r6)
	ctx.current_instruction = 0x8819CFA8;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// rlwinm r28,r28,2,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFC;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// extsh r29,r26
	ctx.r29.s64 = ctx.r26.s16;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	ctx.current_instruction = 0x8819CFC0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lbz r5,4(r5)
	ctx.current_instruction = 0x8819CFC4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,-2(r7)
	ctx.current_instruction = 0x8819CFD8;
	REX_STORE_U16(ctx.r7.u32 + -2, ctx.r5.u16);
	// lbz r28,4(r4)
	ctx.current_instruction = 0x8819CFDC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhzx r26,r27,r7
	ctx.current_instruction = 0x8819CFE0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r7.u32);
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819CFE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// rlwinm r29,r28,2,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r29,r29,r30
	ctx.current_instruction = 0x8819D000;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lbz r5,4(r5)
	ctx.current_instruction = 0x8819D004;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,0(r7)
	ctx.current_instruction = 0x8819D018;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
	// lbz r28,4(r4)
	ctx.current_instruction = 0x8819D01C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r26,6(r6)
	ctx.current_instruction = 0x8819D020;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819D024;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// rlwinm r29,r28,2,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r29,r29,r30
	ctx.current_instruction = 0x8819D040;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lbz r5,4(r5)
	ctx.current_instruction = 0x8819D044;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,2(r7)
	ctx.current_instruction = 0x8819D058;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r5.u16);
	// lbz r28,4(r4)
	ctx.current_instruction = 0x8819D05C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r26,8(r6)
	ctx.current_instruction = 0x8819D060;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819D064;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// rlwinm r28,r28,2,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r29,r26
	ctx.r29.s64 = ctx.r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	ctx.current_instruction = 0x8819D080;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lbz r5,4(r5)
	ctx.current_instruction = 0x8819D084;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,4(r7)
	ctx.current_instruction = 0x8819D098;
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r5.u16);
	// lbz r26,4(r4)
	ctx.current_instruction = 0x8819D09C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhzu r29,10(r6)
	ctx.current_instruction = 0x8819D0A0;
	ea = 10 + ctx.r6.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// lwz r5,136(r11)
	ctx.current_instruction = 0x8819D0A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// rlwinm r28,r26,2,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	ctx.current_instruction = 0x8819D0C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lbz r5,4(r5)
	ctx.current_instruction = 0x8819D0C4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r5,6(r7)
	ctx.current_instruction = 0x8819D0DC;
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r5.u16);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// bdnz 0x8819cf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819CF9C;
loc_8819D0E8:
	// lhz r7,0(r10)
	ctx.current_instruction = 0x8819D0E8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// sth r7,16(r10)
	ctx.current_instruction = 0x8819D0F0;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// bne cr6,0x8819d0fc
	if (!ctx.cr6.eq) goto loc_8819D0FC;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_8819D0FC:
	// lwz r11,1932(r11)
	ctx.current_instruction = 0x8819D0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r22.u64;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r9)
	ctx.current_instruction = 0x8819D10C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r22,0(r8)
	ctx.current_instruction = 0x8819D110;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AC398) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AC398;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AC398) {
			switch (rex_dispatch_address) {
				case 0x881AC3A0:
				case 0x881AC3D0:
				case 0x881AC3EC:
				case 0x881AC454:
				case 0x881AC46C:
				case 0x881AC4CC:
				case 0x881AC4E4:
				case 0x881AC544:
				case 0x881AC55C:
				case 0x881AC5BC:
				case 0x881AC5D4:
				case 0x881AC634:
				case 0x881AC64C:
				case 0x881AC6AC:
				case 0x881AC6C4:
				case 0x881AC71C:
				case 0x881AC72C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AC398;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AC3A0: goto loc_881AC3A0;
		case 0x881AC3D0: goto loc_881AC3D0;
		case 0x881AC3EC: goto loc_881AC3EC;
		case 0x881AC454: goto loc_881AC454;
		case 0x881AC46C: goto loc_881AC46C;
		case 0x881AC4CC: goto loc_881AC4CC;
		case 0x881AC4E4: goto loc_881AC4E4;
		case 0x881AC544: goto loc_881AC544;
		case 0x881AC55C: goto loc_881AC55C;
		case 0x881AC5BC: goto loc_881AC5BC;
		case 0x881AC5D4: goto loc_881AC5D4;
		case 0x881AC634: goto loc_881AC634;
		case 0x881AC64C: goto loc_881AC64C;
		case 0x881AC6AC: goto loc_881AC6AC;
		case 0x881AC6C4: goto loc_881AC6C4;
		case 0x881AC71C: goto loc_881AC71C;
		case 0x881AC72C: goto loc_881AC72C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881AC3A0;
	__savegprlr_20(ctx, base);
loc_881AC3A0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881AC3A0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC3D0;
	sub_880547A0(ctx, base);
loc_881AC3D0:
	// lwz r28,284(r1)
	ctx.current_instruction = 0x881AC3D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC3EC;
	sub_880547A0(ctx, base);
loc_881AC3EC:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r21,r30,r31
	ctx.r21.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r20,r29,r28
	ctx.r20.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC404:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC404;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC408;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC404;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r30,276(r1)
	ctx.current_instruction = 0x881AC414;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r29,292(r1)
	ctx.current_instruction = 0x881AC418;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// add r23,r25,r30
	ctx.r23.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r22,r27,r29
	ctx.r22.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r9,r26,-1
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC430:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC430;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC434;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC430;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r25,r24,r30
	ctx.r25.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r24,r26,r29
	ctx.r24.u64 = ctx.r26.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC454;
	sub_880547A0(ctx, base);
loc_881AC454:
	// add r27,r21,r31
	ctx.r27.u64 = ctx.r21.u64 + ctx.r31.u64;
	// add r26,r20,r28
	ctx.r26.u64 = ctx.r20.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC46C;
	sub_880547A0(ctx, base);
loc_881AC46C:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC484:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC484;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC488;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC484;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r22,r22,r29
	ctx.r22.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC4A8:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC4A8;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC4AC;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC4A8;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC4CC;
	sub_880547A0(ctx, base);
loc_881AC4CC:
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC4E4;
	sub_880547A0(ctx, base);
loc_881AC4E4:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC4FC:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC4FC;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC500;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC4FC;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r22,r22,r29
	ctx.r22.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC520:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC520;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC524;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC520;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC544;
	sub_880547A0(ctx, base);
loc_881AC544:
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC55C;
	sub_880547A0(ctx, base);
loc_881AC55C:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC574:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC574;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC578;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC574;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r22,r22,r29
	ctx.r22.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC598:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC598;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC59C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC598;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC5BC;
	sub_880547A0(ctx, base);
loc_881AC5BC:
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC5D4;
	sub_880547A0(ctx, base);
loc_881AC5D4:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC5EC:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC5EC;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC5F0;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC5EC;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r22,r22,r29
	ctx.r22.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC610:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC610;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC614;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC610;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC634;
	sub_880547A0(ctx, base);
loc_881AC634:
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC64C;
	sub_880547A0(ctx, base);
loc_881AC64C:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC664:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC664;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC668;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC664;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r22,r22,r29
	ctx.r22.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC688:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC688;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC68C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC688;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r21,r24,r29
	ctx.r21.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC6AC;
	sub_880547A0(ctx, base);
loc_881AC6AC:
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC6C4;
	sub_880547A0(ctx, base);
loc_881AC6C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC6DC:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC6DC;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC6E0;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC6DC;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r24,r23,r30
	ctx.r24.u64 = ctx.r23.u64 + ctx.r30.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// addi r9,r21,-1
	ctx.r9.s64 = ctx.r21.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC6FC:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x881AC6FC;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x881AC700;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881ac6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC6FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC71C;
	sub_880547A0(ctx, base);
loc_881AC71C:
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r3,r26,r28
	ctx.r3.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x881AC72C;
	sub_880547A0(ctx, base);
loc_881AC72C:
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r22,r29
	ctx.r10.u64 = ctx.r22.u64 + ctx.r29.u64;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881AC740:
	// lbzu r11,1(r9)
	ctx.current_instruction = 0x881AC740;
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ctx.current_instruction = 0x881AC744;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x881ac740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC740;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r21,r29
	ctx.r10.u64 = ctx.r21.u64 + ctx.r29.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881AC760:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x881AC760;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x881AC764;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x881ac760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC760;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B31B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B31B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B31B0) {
			switch (rex_dispatch_address) {
				case 0x881B31B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B31B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B31B8: goto loc_881B31B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881B31B8;
	__savegprlr_26(ctx, base);
loc_881B31B8:
	// lwz r11,156(r3)
	ctx.current_instruction = 0x881B31B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r8,160(r3)
	ctx.current_instruction = 0x881B31BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r9,r8,15
	ctx.r9.s64 = ctx.r8.s64 + 15;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881b31e4
	if (!ctx.cr6.eq) goto loc_881B31E4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq cr6,0x881b31e8
	if (ctx.cr6.eq) goto loc_881B31E8;
loc_881B31E4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_881B31E8:
	// lwz r11,204(r3)
	ctx.current_instruction = 0x881B31E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,208(r3)
	ctx.current_instruction = 0x881B31F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// stw r10,22204(r3)
	ctx.current_instruction = 0x881B31F8;
	REX_STORE_U32(ctx.r3.u32 + 22204, ctx.r10.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,22208(r3)
	ctx.current_instruction = 0x881B3200;
	REX_STORE_U32(ctx.r3.u32 + 22208, ctx.r9.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r3)
	ctx.current_instruction = 0x881B3208;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r11,1972(r3)
	ctx.current_instruction = 0x881B3210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1972);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,15240(r3)
	ctx.current_instruction = 0x881B321C;
	REX_STORE_U32(ctx.r3.u32 + 15240, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,236(r3)
	ctx.current_instruction = 0x881B3224;
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// stw r8,152(r3)
	ctx.current_instruction = 0x881B3228;
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// stw r7,22212(r3)
	ctx.current_instruction = 0x881B3230;
	REX_STORE_U32(ctx.r3.u32 + 22212, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,22216(r3)
	ctx.current_instruction = 0x881B3238;
	REX_STORE_U32(ctx.r3.u32 + 22216, ctx.r5.u32);
	// stw r9,15244(r3)
	ctx.current_instruction = 0x881B323C;
	REX_STORE_U32(ctx.r3.u32 + 15244, ctx.r9.u32);
	// stw r4,0(r11)
	ctx.current_instruction = 0x881B3240;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r6,4(r11)
	ctx.current_instruction = 0x881B3244;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bgt cr6,0x881b3250
	if (ctx.cr6.gt) goto loc_881B3250;
	// li r10,1
	ctx.r10.s64 = 1;
loc_881B3250:
	// stw r10,8(r11)
	ctx.current_instruction = 0x881B3250;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,188(r3)
	ctx.current_instruction = 0x881B3254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r30,136(r3)
	ctx.current_instruction = 0x881B3258;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r28,140(r3)
	ctx.current_instruction = 0x881B325C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r9,200(r3)
	ctx.current_instruction = 0x881B3260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r7,220(r3)
	ctx.current_instruction = 0x881B3264;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r6,224(r3)
	ctx.current_instruction = 0x881B3268;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r11,3392(r3)
	ctx.current_instruction = 0x881B326C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// divwu r29,r30,r11
	ctx.r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r30.u32 / ctx.r11.u32 : 0);
	// stw r7,3892(r3)
	ctx.current_instruction = 0x881B3278;
	REX_STORE_U32(ctx.r3.u32 + 3892, ctx.r7.u32);
	// divwu r9,r9,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r6,3896(r3)
	ctx.current_instruction = 0x881B3280;
	REX_STORE_U32(ctx.r3.u32 + 3896, ctx.r6.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r29,3872(r3)
	ctx.current_instruction = 0x881B3288;
	REX_STORE_U32(ctx.r3.u32 + 3872, ctx.r29.u32);
	// divwu r8,r28,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? ctx.r28.u32 / ctx.r11.u32 : 0);
	// stw r9,3888(r3)
	ctx.current_instruction = 0x881B3290;
	REX_STORE_U32(ctx.r3.u32 + 3888, ctx.r9.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,3880(r3)
	ctx.current_instruction = 0x881B3298;
	REX_STORE_U32(ctx.r3.u32 + 3880, ctx.r10.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,3868(r3)
	ctx.current_instruction = 0x881B32A0;
	REX_STORE_U32(ctx.r3.u32 + 3868, ctx.r8.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// blt cr6,0x881b3328
	if (ctx.cr6.lt) goto loc_881B3328;
	// lwz r4,204(r3)
	ctx.current_instruction = 0x881B32B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,208(r3)
	ctx.current_instruction = 0x881B32B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r10,r4
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// stw r10,3912(r3)
	ctx.current_instruction = 0x881B32C4;
	REX_STORE_U32(ctx.r3.u32 + 3912, ctx.r10.u32);
	// stw r9,3920(r3)
	ctx.current_instruction = 0x881B32C8;
	REX_STORE_U32(ctx.r3.u32 + 3920, ctx.r9.u32);
	// stw r27,3916(r3)
	ctx.current_instruction = 0x881B32CC;
	REX_STORE_U32(ctx.r3.u32 + 3916, ctx.r27.u32);
	// stw r8,3900(r3)
	ctx.current_instruction = 0x881B32D0;
	REX_STORE_U32(ctx.r3.u32 + 3900, ctx.r8.u32);
	// stw r26,3924(r3)
	ctx.current_instruction = 0x881B32D4;
	REX_STORE_U32(ctx.r3.u32 + 3924, ctx.r26.u32);
	// mullw r10,r9,r31
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,3928(r3)
	ctx.current_instruction = 0x881B32E4;
	REX_STORE_U32(ctx.r3.u32 + 3928, ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r7,3932(r3)
	ctx.current_instruction = 0x881B32EC;
	REX_STORE_U32(ctx.r3.u32 + 3932, ctx.r7.u32);
	// bne cr6,0x881b3308
	if (!ctx.cr6.eq) goto loc_881B3308;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,3904(r3)
	ctx.current_instruction = 0x881B32FC;
	REX_STORE_U32(ctx.r3.u32 + 3904, ctx.r11.u32);
	// stw r10,3908(r3)
	ctx.current_instruction = 0x881B3300;
	REX_STORE_U32(ctx.r3.u32 + 3908, ctx.r10.u32);
	// b 0x881b3310
	goto loc_881B3310;
loc_881B3308:
	// stw r28,3904(r3)
	ctx.current_instruction = 0x881B3308;
	REX_STORE_U32(ctx.r3.u32 + 3904, ctx.r28.u32);
	// stw r30,3908(r3)
	ctx.current_instruction = 0x881B330C;
	REX_STORE_U32(ctx.r3.u32 + 3908, ctx.r30.u32);
loc_881B3310:
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,15232(r3)
	ctx.current_instruction = 0x881B3320;
	REX_STORE_U32(ctx.r3.u32 + 15232, ctx.r9.u32);
	// stw r8,15236(r3)
	ctx.current_instruction = 0x881B3324;
	REX_STORE_U32(ctx.r3.u32 + 15236, ctx.r8.u32);
loc_881B3328:
	// lwz r4,272(r3)
	ctx.current_instruction = 0x881B3328;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881b33e4
	if (ctx.cr6.eq) goto loc_881B33E4;
loc_881B333C:
	// lwz r10,136(r3)
	ctx.current_instruction = 0x881B333C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x881b33d4
	if (!ctx.cr6.gt) goto loc_881B33D4;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_881B3368:
	// lwz r7,140(r3)
	ctx.current_instruction = 0x881B3368;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cntlzw r31,r11
	ctx.r31.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,136(r3)
	ctx.current_instruction = 0x881B3370;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r30,24(r10)
	ctx.current_instruction = 0x881B337C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r8,r31,r5
	ctx.r8.u64 = ctx.r31.u64 | ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r31,r30,0,20,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 | ctx.r31.u64;
	// stwu r7,24(r10)
	ctx.current_instruction = 0x881B33C4;
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r8,136(r3)
	ctx.current_instruction = 0x881B33C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x881b3368
	if (ctx.cr6.lt) goto loc_881B3368;
loc_881B33D4:
	// lwz r11,140(r3)
	ctx.current_instruction = 0x881B33D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881b333c
	if (ctx.cr6.lt) goto loc_881B333C;
loc_881B33E4:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B8060) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B8060;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B8060) {
			switch (rex_dispatch_address) {
				case 0x881B8068:
				case 0x881B80E0:
				case 0x881B816C:
				case 0x881B81B4:
				case 0x881B8230:
				case 0x881B8278:
				case 0x881B82A8:
				case 0x881B8314:
				case 0x881B835C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B8060;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B8068: goto loc_881B8068;
		case 0x881B80E0: goto loc_881B80E0;
		case 0x881B816C: goto loc_881B816C;
		case 0x881B81B4: goto loc_881B81B4;
		case 0x881B8230: goto loc_881B8230;
		case 0x881B8278: goto loc_881B8278;
		case 0x881B82A8: goto loc_881B82A8;
		case 0x881B8314: goto loc_881B8314;
		case 0x881B835C: goto loc_881B835C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B8068;
	__savegprlr_28(ctx, base);
loc_881B8068:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881B8068;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.current_instruction = 0x881B806C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x881b8108
	if (ctx.cr6.lt) goto loc_881B8108;
	// lwz r11,288(r3)
	ctx.current_instruction = 0x881B807C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b8090
	if (ctx.cr6.eq) goto loc_881B8090;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881b809c
	if (!ctx.cr6.eq) goto loc_881B809C;
loc_881B8090:
	// lwz r11,20760(r28)
	ctx.current_instruction = 0x881B8090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b80a8
	if (ctx.cr6.eq) goto loc_881B80A8;
loc_881B809C:
	// lwz r11,284(r28)
	ctx.current_instruction = 0x881B809C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b8108
	if (!ctx.cr6.eq) goto loc_881B8108;
loc_881B80A8:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_881B80B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b80f8
	if (!ctx.cr6.eq) goto loc_881B80F8;
	// lwz r3,84(r28)
	ctx.current_instruction = 0x881B80B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B80BC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B80C0;
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
	ctx.current_instruction = 0x881B80D0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B80D4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b80e0
	if (!ctx.cr0.lt) goto loc_881B80E0;
	// bl 0x88156678
	ctx.lr = 0x881B80E0;
	sub_88156678(ctx, base);
loc_881B80E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x881b80b0
	if (ctx.cr6.lt) goto loc_881B80B0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881b8100
	if (ctx.cr6.eq) goto loc_881B8100;
loc_881B80F8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8100:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8108:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881B8108;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881b817c
	if (!ctx.cr6.lt) goto loc_881B817C;
loc_881B8124:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b817c
	if (ctx.cr6.eq) goto loc_881B817C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B8130;
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
	ctx.current_instruction = 0x881B8154;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B815C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b816c
	if (!ctx.cr0.lt) goto loc_881B816C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B816C;
	sub_88156678(ctx, base);
loc_881B816C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B816C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8124
	if (ctx.cr6.gt) goto loc_881B8124;
loc_881B817C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B8180;
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
	ctx.current_instruction = 0x881B8198;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B81A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b81b4
	if (!ctx.cr0.lt) goto loc_881B81B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B81B4;
	sub_88156678(ctx, base);
loc_881B81B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,1952(r28)
	ctx.current_instruction = 0x881B81B8;
	REX_STORE_U32(ctx.r28.u32 + 1952, ctx.r30.u32);
	// bne cr6,0x881b82b0
	if (!ctx.cr6.eq) goto loc_881B82B0;
	// lwz r11,15536(r28)
	ctx.current_instruction = 0x881B81C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x881b8280
	if (ctx.cr6.lt) goto loc_881B8280;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881B81CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B81D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881b8240
	if (!ctx.cr6.lt) goto loc_881B8240;
loc_881B81E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8240
	if (ctx.cr6.eq) goto loc_881B8240;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B81F4;
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
	ctx.current_instruction = 0x881B8218;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B8220;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8230
	if (!ctx.cr0.lt) goto loc_881B8230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8230;
	sub_88156678(ctx, base);
loc_881B8230:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b81e8
	if (ctx.cr6.gt) goto loc_881B81E8;
loc_881B8240:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B8244;
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
	ctx.current_instruction = 0x881B825C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B8268;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b8278
	if (!ctx.cr0.lt) goto loc_881B8278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8278;
	sub_88156678(ctx, base);
loc_881B8278:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8280:
	// lwz r3,84(r28)
	ctx.current_instruction = 0x881B8280;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B8284;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B8288;
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
	ctx.current_instruction = 0x881B8298;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B829C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b82a8
	if (!ctx.cr0.lt) goto loc_881B82A8;
	// bl 0x88156678
	ctx.lr = 0x881B82A8;
	sub_88156678(ctx, base);
loc_881B82A8:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_881B82AC:
	// stw r11,1952(r28)
	ctx.current_instruction = 0x881B82AC;
	REX_STORE_U32(ctx.r28.u32 + 1952, ctx.r11.u32);
loc_881B82B0:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881B82B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B82BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881b8324
	if (!ctx.cr6.lt) goto loc_881B8324;
loc_881B82CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8324
	if (ctx.cr6.eq) goto loc_881B8324;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B82D8;
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
	ctx.current_instruction = 0x881B82FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B8304;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8314
	if (!ctx.cr0.lt) goto loc_881B8314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8314;
	sub_88156678(ctx, base);
loc_881B8314:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b82cc
	if (ctx.cr6.gt) goto loc_881B82CC;
loc_881B8324:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B8328;
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
	ctx.current_instruction = 0x881B8340;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B834C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b835c
	if (!ctx.cr0.lt) goto loc_881B835C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B835C;
	sub_88156678(ctx, base);
loc_881B835C:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// stw r11,1956(r28)
	ctx.current_instruction = 0x881B8360;
	REX_STORE_U32(ctx.r28.u32 + 1956, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C4640) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C4640);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4640;
	ctx.current_instruction = 0x881C4640;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881c45b8
	sub_881C45B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C4648) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C4648;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C4648) {
			switch (rex_dispatch_address) {
				case 0x881C4650:
				case 0x881C4664:
				case 0x881C46D0:
				case 0x881C4718:
				case 0x881C478C:
				case 0x881C47D4:
				case 0x881C4878:
				case 0x881C48C0:
				case 0x881C4940:
				case 0x881C4988:
				case 0x881C49EC:
				case 0x881C4A34:
				case 0x881C4AA8:
				case 0x881C4AF0:
				case 0x881C4B5C:
				case 0x881C4BA4:
				case 0x881C4C2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4648;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C4650: goto loc_881C4650;
		case 0x881C4664: goto loc_881C4664;
		case 0x881C46D0: goto loc_881C46D0;
		case 0x881C4718: goto loc_881C4718;
		case 0x881C478C: goto loc_881C478C;
		case 0x881C47D4: goto loc_881C47D4;
		case 0x881C4878: goto loc_881C4878;
		case 0x881C48C0: goto loc_881C48C0;
		case 0x881C4940: goto loc_881C4940;
		case 0x881C4988: goto loc_881C4988;
		case 0x881C49EC: goto loc_881C49EC;
		case 0x881C4A34: goto loc_881C4A34;
		case 0x881C4AA8: goto loc_881C4AA8;
		case 0x881C4AF0: goto loc_881C4AF0;
		case 0x881C4B5C: goto loc_881C4B5C;
		case 0x881C4BA4: goto loc_881C4BA4;
		case 0x881C4C2C: goto loc_881C4C2C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881C4650;
	__savegprlr_23(ctx, base);
loc_881C4650:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881C4650;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,156(r3)
	ctx.current_instruction = 0x881C4654;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r23,160(r3)
	ctx.current_instruction = 0x881C465C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x8815ad38
	ctx.lr = 0x881C4664;
	sub_8815AD38(ctx, base);
loc_881C4664:
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4674;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c46e0
	if (!ctx.cr6.lt) goto loc_881C46E0;
loc_881C4688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c46e0
	if (ctx.cr6.eq) goto loc_881C46E0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4694;
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
	ctx.current_instruction = 0x881C46B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C46C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c46d0
	if (!ctx.cr0.lt) goto loc_881C46D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C46D0;
	sub_88156678(ctx, base);
loc_881C46D0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C46D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4688
	if (ctx.cr6.gt) goto loc_881C4688;
loc_881C46E0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C46E4;
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
	ctx.current_instruction = 0x881C46FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4708;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4718
	if (!ctx.cr0.lt) goto loc_881C4718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4718;
	sub_88156678(ctx, base);
loc_881C4718:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881c480c
	if (ctx.cr6.eq) goto loc_881C480C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4720;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r25,21920(r27)
	ctx.current_instruction = 0x881C4728;
	REX_STORE_U32(ctx.r27.u32 + 21920, ctx.r25.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r25,21916(r27)
	ctx.current_instruction = 0x881C4730;
	REX_STORE_U32(ctx.r27.u32 + 21916, ctx.r25.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x881c479c
	if (!ctx.cr6.lt) goto loc_881C479C;
loc_881C4744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c479c
	if (ctx.cr6.eq) goto loc_881C479C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4750;
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
	ctx.current_instruction = 0x881C4774;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C477C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c478c
	if (!ctx.cr0.lt) goto loc_881C478C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C478C;
	sub_88156678(ctx, base);
loc_881C478C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C478C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4744
	if (ctx.cr6.gt) goto loc_881C4744;
loc_881C479C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C47A0;
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
	ctx.current_instruction = 0x881C47B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C47C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c47d4
	if (!ctx.cr0.lt) goto loc_881C47D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C47D4;
	sub_88156678(ctx, base);
loc_881C47D4:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x881c47e8
	if (ctx.cr6.gt) goto loc_881C47E8;
	// stw r30,21928(r27)
	ctx.current_instruction = 0x881C47DC;
	REX_STORE_U32(ctx.r27.u32 + 21928, ctx.r30.u32);
	// stw r30,21924(r27)
	ctx.current_instruction = 0x881C47E0;
	REX_STORE_U32(ctx.r27.u32 + 21924, ctx.r30.u32);
	// b 0x881c4814
	goto loc_881C4814;
loc_881C47E8:
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,21924(r27)
	ctx.current_instruction = 0x881C47F0;
	REX_STORE_U32(ctx.r27.u32 + 21924, ctx.r10.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r11,21928(r27)
	ctx.current_instruction = 0x881C47F8;
	REX_STORE_U32(ctx.r27.u32 + 21928, ctx.r11.u32);
	// blt cr6,0x881c4804
	if (ctx.cr6.lt) goto loc_881C4804;
	// li r11,8
	ctx.r11.s64 = 8;
loc_881C4804:
	// stw r11,21928(r27)
	ctx.current_instruction = 0x881C4804;
	REX_STORE_U32(ctx.r27.u32 + 21928, ctx.r11.u32);
	// b 0x881c4814
	goto loc_881C4814;
loc_881C480C:
	// stw r26,21920(r27)
	ctx.current_instruction = 0x881C480C;
	REX_STORE_U32(ctx.r27.u32 + 21920, ctx.r26.u32);
	// stw r26,21916(r27)
	ctx.current_instruction = 0x881C4810;
	REX_STORE_U32(ctx.r27.u32 + 21916, ctx.r26.u32);
loc_881C4814:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4814;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c4888
	if (!ctx.cr6.lt) goto loc_881C4888;
loc_881C4830:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4888
	if (ctx.cr6.eq) goto loc_881C4888;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C483C;
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
	ctx.current_instruction = 0x881C4860;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C4868;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4878
	if (!ctx.cr0.lt) goto loc_881C4878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4878;
	sub_88156678(ctx, base);
loc_881C4878:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4830
	if (ctx.cr6.gt) goto loc_881C4830;
loc_881C4888:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C488C;
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
	ctx.current_instruction = 0x881C48A4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C48B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c48c0
	if (!ctx.cr0.lt) goto loc_881C48C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C48C0;
	sub_88156678(ctx, base);
loc_881C48C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881c48dc
	if (!ctx.cr6.eq) goto loc_881C48DC;
	// lwz r11,22056(r27)
	ctx.current_instruction = 0x881C48C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 22056);
	// lwz r10,22060(r27)
	ctx.current_instruction = 0x881C48CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22060);
	// stw r11,156(r27)
	ctx.current_instruction = 0x881C48D0;
	REX_STORE_U32(ctx.r27.u32 + 156, ctx.r11.u32);
	// stw r10,160(r27)
	ctx.current_instruction = 0x881C48D4;
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r10.u32);
	// b 0x881c4bfc
	goto loc_881C4BFC;
loc_881C48DC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C48DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C48E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c4950
	if (!ctx.cr6.lt) goto loc_881C4950;
loc_881C48F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4950
	if (ctx.cr6.eq) goto loc_881C4950;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4904;
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
	ctx.current_instruction = 0x881C4928;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C4930;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4940
	if (!ctx.cr0.lt) goto loc_881C4940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4940;
	sub_88156678(ctx, base);
loc_881C4940:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c48f8
	if (ctx.cr6.gt) goto loc_881C48F8;
loc_881C4950:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C4954;
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
	ctx.current_instruction = 0x881C496C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4978;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4988
	if (!ctx.cr0.lt) goto loc_881C4988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4988;
	sub_88156678(ctx, base);
loc_881C4988:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4988;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c49fc
	if (!ctx.cr6.lt) goto loc_881C49FC;
loc_881C49A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c49fc
	if (ctx.cr6.eq) goto loc_881C49FC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C49B0;
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
	ctx.current_instruction = 0x881C49D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C49DC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c49ec
	if (!ctx.cr0.lt) goto loc_881C49EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C49EC;
	sub_88156678(ctx, base);
loc_881C49EC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C49EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c49a4
	if (ctx.cr6.gt) goto loc_881C49A4;
loc_881C49FC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C4A00;
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
	ctx.current_instruction = 0x881C4A18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4A24;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4a34
	if (!ctx.cr0.lt) goto loc_881C4A34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4A34;
	sub_88156678(ctx, base);
loc_881C4A34:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x881c4bdc
	if (!ctx.cr6.eq) goto loc_881C4BDC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881c4bdc
	if (!ctx.cr6.eq) goto loc_881C4BDC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4A44;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,12
	ctx.r30.s64 = 12;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x881c4ab8
	if (!ctx.cr6.lt) goto loc_881C4AB8;
loc_881C4A60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4ab8
	if (ctx.cr6.eq) goto loc_881C4AB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4A6C;
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
	ctx.current_instruction = 0x881C4A90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C4A98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4aa8
	if (!ctx.cr0.lt) goto loc_881C4AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4AA8;
	sub_88156678(ctx, base);
loc_881C4AA8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4AA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4a60
	if (ctx.cr6.gt) goto loc_881C4A60;
loc_881C4AB8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C4ABC;
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
	ctx.current_instruction = 0x881C4AD4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4AE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4af0
	if (!ctx.cr0.lt) goto loc_881C4AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4AF0;
	sub_88156678(ctx, base);
loc_881C4AF0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C4AF0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r30,12
	ctx.r30.s64 = 12;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4B04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x881c4b6c
	if (!ctx.cr6.lt) goto loc_881C4B6C;
loc_881C4B14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4b6c
	if (ctx.cr6.eq) goto loc_881C4B6C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4B20;
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
	ctx.current_instruction = 0x881C4B44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C4B4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4b5c
	if (!ctx.cr0.lt) goto loc_881C4B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4B5C;
	sub_88156678(ctx, base);
loc_881C4B5C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4b14
	if (ctx.cr6.gt) goto loc_881C4B14;
loc_881C4B6C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C4B70;
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
	ctx.current_instruction = 0x881C4B88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4B94;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4ba4
	if (!ctx.cr0.lt) goto loc_881C4BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4BA4;
	sub_88156678(ctx, base);
loc_881C4BA4:
	// lwz r10,22056(r27)
	ctx.current_instruction = 0x881C4BA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22056);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881c4bd0
	if (ctx.cr6.gt) goto loc_881C4BD0;
	// lwz r10,22060(r27)
	ctx.current_instruction = 0x881C4BB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22060);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881c4bd0
	if (ctx.cr6.gt) goto loc_881C4BD0;
	// stw r28,156(r27)
	ctx.current_instruction = 0x881C4BC4;
	REX_STORE_U32(ctx.r27.u32 + 156, ctx.r28.u32);
	// stw r11,160(r27)
	ctx.current_instruction = 0x881C4BC8;
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r11.u32);
	// b 0x881c4bfc
	goto loc_881C4BFC;
loc_881C4BD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C4BDC:
	// addi r11,r28,5577
	ctx.r11.s64 = ctx.r28.s64 + 5577;
	// addi r10,r30,5581
	ctx.r10.s64 = ctx.r30.s64 + 5581;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r27
	ctx.current_instruction = 0x881C4BEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r7,156(r27)
	ctx.current_instruction = 0x881C4BF0;
	REX_STORE_U32(ctx.r27.u32 + 156, ctx.r7.u32);
	// lwzx r6,r8,r27
	ctx.current_instruction = 0x881C4BF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stw r6,160(r27)
	ctx.current_instruction = 0x881C4BF8;
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r6.u32);
loc_881C4BFC:
	// lwz r4,156(r27)
	ctx.current_instruction = 0x881C4BFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 156);
	// cmpw cr6,r4,r24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x881c4c1c
	if (!ctx.cr6.eq) goto loc_881C4C1C;
	// lwz r11,160(r27)
	ctx.current_instruction = 0x881C4C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x881c4c1c
	if (!ctx.cr6.eq) goto loc_881C4C1C;
	// stw r26,21888(r27)
	ctx.current_instruction = 0x881C4C14;
	REX_STORE_U32(ctx.r27.u32 + 21888, ctx.r26.u32);
	// b 0x881c4c20
	goto loc_881C4C20;
loc_881C4C1C:
	// stw r25,21888(r27)
	ctx.current_instruction = 0x881C4C1C;
	REX_STORE_U32(ctx.r27.u32 + 21888, ctx.r25.u32);
loc_881C4C20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,160(r27)
	ctx.current_instruction = 0x881C4C24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// bl 0x8815bc60
	ctx.lr = 0x881C4C2C;
	sub_8815BC60(ctx, base);
loc_881C4C2C:
	// stw r26,22064(r27)
	ctx.current_instruction = 0x881C4C2C;
	REX_STORE_U32(ctx.r27.u32 + 22064, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DB900) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DB900;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DB900) {
			switch (rex_dispatch_address) {
				case 0x881DB908:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DB900;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881DB908: goto loc_881DB908;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881DB908;
	__savegprlr_28(ctx, base);
loc_881DB908:
	// lwz r28,0(r3)
	ctx.current_instruction = 0x881DB908;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r28)
	ctx.current_instruction = 0x881DB90C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881db994
	if (!ctx.cr6.gt) goto loc_881DB994;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x881DB918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4(r10)
	ctx.current_instruction = 0x881DB91C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881db994
	if (!ctx.cr6.gt) goto loc_881DB994;
	// lwz r8,16(r28)
	ctx.current_instruction = 0x881DB928;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881db93c
	if (ctx.cr6.eq) goto loc_881DB93C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x881db950
	if (!ctx.cr6.eq) goto loc_881DB950;
loc_881DB93C:
	// lwz r11,16(r10)
	ctx.current_instruction = 0x881DB93C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dbaf4
	if (ctx.cr6.eq) goto loc_881DBAF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dbaf4
	if (ctx.cr6.eq) goto loc_881DBAF4;
loc_881DB950:
	// lwz r11,14580(r3)
	ctx.current_instruction = 0x881DB950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881db99c
	if (ctx.cr6.eq) goto loc_881DB99C;
	// lwz r11,14572(r3)
	ctx.current_instruction = 0x881DB95C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14572);
	// lwz r9,14564(r3)
	ctx.current_instruction = 0x881DB960;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
	// lwz r31,8(r10)
	ctx.current_instruction = 0x881DB970;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,14576(r3)
	ctx.current_instruction = 0x881DB974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14576);
	// srawi r9,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 31;
	// lwz r7,14568(r3)
	ctx.current_instruction = 0x881DB97C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// xor r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x881db9cc
	if (ctx.cr6.eq) goto loc_881DB9CC;
loc_881DB994:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881DB99C:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
	// lwz r11,8(r28)
	ctx.current_instruction = 0x881DB9A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,8(r10)
	ctx.current_instruction = 0x881DB9A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r31,r7
	ctx.r5.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
loc_881DB9CC:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881db9f0
	if (!ctx.cr6.eq) goto loc_881DB9F0;
	// srawi r9,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 2;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x881db994
	if (!ctx.cr0.eq) goto loc_881DB994;
loc_881DB9F0:
	// lwz r10,16(r10)
	ctx.current_instruction = 0x881DB9F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881dba10
	if (!ctx.cr6.eq) goto loc_881DBA10;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r7,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x881db994
	if (!ctx.cr0.eq) goto loc_881DB994;
loc_881DBA10:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r9,22870
	ctx.r9.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r7,21849
	ctx.r7.s64 = 1431896064;
	// lis r6,22101
	ctx.r6.s64 = 1448411136;
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// ori r9,r9,22869
	ctx.r9.u64 = ctx.r9.u64 | 22869;
	// ori r7,r7,22105
	ctx.r7.u64 = ctx.r7.u64 | 22105;
	// ori r6,r6,22857
	ctx.r6.u64 = ctx.r6.u64 | 22857;
	// ori r5,r5,13385
	ctx.r5.u64 = ctx.r5.u64 | 13385;
	// ori r4,r4,13392
	ctx.r4.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881dba70
	if (ctx.cr6.eq) goto loc_881DBA70;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x881dba70
	if (ctx.cr6.eq) goto loc_881DBA70;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x881dba70
	if (ctx.cr6.eq) goto loc_881DBA70;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dba70
	if (ctx.cr6.eq) goto loc_881DBA70;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dba70
	if (ctx.cr6.eq) goto loc_881DBA70;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x881dba7c
	if (!ctx.cr6.eq) goto loc_881DBA7C;
loc_881DBA70:
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
loc_881DBA7C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881dbaac
	if (ctx.cr6.eq) goto loc_881DBAAC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x881dbaac
	if (ctx.cr6.eq) goto loc_881DBAAC;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x881dbaac
	if (ctx.cr6.eq) goto loc_881DBAAC;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dbaac
	if (ctx.cr6.eq) goto loc_881DBAAC;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dbaac
	if (ctx.cr6.eq) goto loc_881DBAAC;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x881dbab8
	if (!ctx.cr6.eq) goto loc_881DBAB8;
loc_881DBAAC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
loc_881DBAB8:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dbac8
	if (ctx.cr6.eq) goto loc_881DBAC8;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881dbad8
	if (!ctx.cr6.eq) goto loc_881DBAD8;
loc_881DBAC8:
	// lwz r11,8(r28)
	ctx.current_instruction = 0x881DBAC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
loc_881DBAD8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dbae8
	if (ctx.cr6.eq) goto loc_881DBAE8;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881dbaf4
	if (!ctx.cr6.eq) goto loc_881DBAF4;
loc_881DBAE8:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881db994
	if (!ctx.cr6.eq) goto loc_881DB994;
loc_881DBAF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DDF08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DDF08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DDF08) {
			switch (rex_dispatch_address) {
				case 0x881DDF10:
				case 0x881DE028:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DDF08;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DDF10: goto loc_881DDF10;
		case 0x881DE028: goto loc_881DE028;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881DDF10;
	__savegprlr_18(ctx, base);
loc_881DDF10:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x881DDF10;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,14264(r11)
	ctx.current_instruction = 0x881DDF18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881de030
	if (ctx.cr6.eq) goto loc_881DE030;
	// lwz r25,14492(r9)
	ctx.current_instruction = 0x881DDF24;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r10,14500(r9)
	ctx.current_instruction = 0x881DDF2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// subf. r23,r7,r8
	ctx.r23.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mullw r31,r25,r7
	ctx.r31.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lwz r27,14644(r9)
	ctx.current_instruction = 0x881DDF38;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// lwz r26,14588(r9)
	ctx.current_instruction = 0x881DDF3C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r30,14544(r9)
	ctx.current_instruction = 0x881DDF40;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14544);
	// lwz r29,14548(r9)
	ctx.current_instruction = 0x881DDF44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14548);
	// lwz r28,14540(r9)
	ctx.current_instruction = 0x881DDF48;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14540);
	// lwz r22,14480(r9)
	ctx.current_instruction = 0x881DDF4C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r24,r10,r3
	ctx.r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r27,r26,r7
	ctx.r27.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// ble 0x881ddfb8
	if (!ctx.cr0.gt) goto loc_881DDFB8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_881DDF88:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881ddfa8
	if (!ctx.cr6.gt) goto loc_881DDFA8;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_881DDF9C:
	// lbzu r4,1(r6)
	ctx.current_instruction = 0x881DDF9C;
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stbu r4,2(r5)
	ctx.current_instruction = 0x881DDFA0;
	ea = 2 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x881ddf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DDF9C;
loc_881DDFA8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x881ddf88
	if (!ctx.cr0.eq) goto loc_881DDF88;
loc_881DDFB8:
	// lwz r11,14484(r9)
	ctx.current_instruction = 0x881DDFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14484);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DDFC0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// srawi r31,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r23.s32 >> 1;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r8,14492(r9)
	ctx.current_instruction = 0x881DDFCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r7,14644(r9)
	ctx.current_instruction = 0x881DDFD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// li r10,3
	ctx.r10.s64 = 3;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addze r4,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r4.s64 = temp.s64;
	// stw r10,148(r1)
	ctx.current_instruction = 0x881DDFE0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,124(r1)
	ctx.current_instruction = 0x881DDFE8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rlwinm r29,r5,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r6,84(r1)
	ctx.current_instruction = 0x881DDFF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r4,92(r1)
	ctx.current_instruction = 0x881DDFF8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,140(r1)
	ctx.current_instruction = 0x881DE000;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,132(r1)
	ctx.current_instruction = 0x881DE008;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r6,r24,3
	ctx.r6.s64 = ctx.r24.s64 + 3;
	// stw r11,116(r1)
	ctx.current_instruction = 0x881DE010;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r24,1
	ctx.r5.s64 = ctx.r24.s64 + 1;
	// stw r31,108(r1)
	ctx.current_instruction = 0x881DE018;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x881DE020;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x881ddc68
	ctx.lr = 0x881DE028;
	sub_881DDC68(ctx, base);
loc_881DE028:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_881DE030:
	// lwz r27,14588(r9)
	ctx.current_instruction = 0x881DE030;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf r26,r7,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r31,14604(r9)
	ctx.current_instruction = 0x881DE038;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lwz r11,14608(r9)
	ctx.current_instruction = 0x881DE040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r8,14492(r9)
	ctx.current_instruction = 0x881DE044;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r25,14516(r9)
	ctx.current_instruction = 0x881DE048;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// lwz r28,14500(r9)
	ctx.current_instruction = 0x881DE04C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 2;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r24,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r31.s32 >> 1;
	// mullw r29,r8,r7
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r8,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r24,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 2;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addze r11,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r31,r25,3
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 3;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addze r8,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r25,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r10,r26,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r26.u64;
	// addze. r20,r25
	temp.s64 = ctx.r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r25.u32;
	ctx.r20.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r25,r7,r4
	ctx.r25.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r23,r11,r6
	ctx.r23.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r28.s64 = temp.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ble 0x881de160
	if (!ctx.cr0.gt) goto loc_881DE160;
	// add r22,r10,r27
	ctx.r22.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r6,r23,-1
	ctx.r6.s64 = ctx.r23.s64 + -1;
	// addi r7,r24,-1
	ctx.r7.s64 = ctx.r24.s64 + -1;
loc_881DE0D4:
	// lwz r10,14492(r9)
	ctx.current_instruction = 0x881DE0D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ble cr6,0x881de144
	if (!ctx.cr6.gt) goto loc_881DE144;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// addi r5,r3,-4
	ctx.r5.s64 = ctx.r3.s64 + -4;
loc_881DE0F8:
	// lbzu r31,1(r6)
	ctx.current_instruction = 0x881DE0F8;
	ea = 1 + ctx.r6.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// lbz r19,1(r11)
	ctx.current_instruction = 0x881DE0FC;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r30,1(r7)
	ctx.current_instruction = 0x881DE100;
	ea = 1 + ctx.r7.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r31,r31,16
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// lbz r18,0(r11)
	ctx.current_instruction = 0x881DE108;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r19,r19,16
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r19.u32, 16);
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r30,r19,r18
	ctx.r30.u64 = ctx.r19.u64 | ctx.r18.u64;
	// rlwinm r19,r31,8,0,23
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r31,r30,r19
	ctx.r31.u64 = ctx.r30.u64 | ctx.r19.u64;
	// stwu r31,4(r5)
	ctx.current_instruction = 0x881DE124;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r5.u32 = ea;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881DE128;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r31,2(r10)
	ctx.current_instruction = 0x881DE12C;
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r31,r31,16
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 | ctx.r19.u64;
	// stwu r31,4(r4)
	ctx.current_instruction = 0x881DE13C;
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x881de0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DE0F8;
loc_881DE144:
	// lwz r10,14496(r9)
	ctx.current_instruction = 0x881DE144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// bne 0x881de0d4
	if (!ctx.cr0.eq) goto loc_881DE0D4;
loc_881DE160:
	// lwz r7,14516(r9)
	ctx.current_instruction = 0x881DE160;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,14588(r9)
	ctx.current_instruction = 0x881DE168;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// add r30,r10,r21
	ctx.r30.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// add r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r31,r8,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r28,r10,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// srawi r8,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 1;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r26.s64 = temp.s64;
	// ble cr6,0x881de24c
	if (!ctx.cr6.gt) goto loc_881DE24C;
	// addi r25,r20,-1
	ctx.r25.s64 = ctx.r20.s64 + -1;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
loc_881DE1B0:
	// lwz r10,14492(r9)
	ctx.current_instruction = 0x881DE1B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ble cr6,0x881de220
	if (!ctx.cr6.gt) goto loc_881DE220;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
loc_881DE1D4:
	// lbzu r6,1(r3)
	ctx.current_instruction = 0x881DE1D4;
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbz r24,1(r11)
	ctx.current_instruction = 0x881DE1D8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r5,1(r4)
	ctx.current_instruction = 0x881DE1DC;
	ea = 1 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbz r23,0(r11)
	ctx.current_instruction = 0x881DE1E4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r24,r24,16
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 16);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r5,r24,r23
	ctx.r5.u64 = ctx.r24.u64 | ctx.r23.u64;
	// rlwinm r24,r6,8,0,23
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | ctx.r24.u64;
	// stwu r6,4(r8)
	ctx.current_instruction = 0x881DE200;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// lbz r5,1(r10)
	ctx.current_instruction = 0x881DE204;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r6,2(r10)
	ctx.current_instruction = 0x881DE208;
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | ctx.r24.u64;
	// stwu r6,4(r7)
	ctx.current_instruction = 0x881DE218;
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x881de1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DE1D4;
loc_881DE220:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x881de23c
	if (!ctx.cr6.lt) goto loc_881DE23C;
	// lwz r10,14496(r9)
	ctx.current_instruction = 0x881DE234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_881DE23C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x881de1b0
	if (ctx.cr6.lt) goto loc_881DE1B0;
loc_881DE24C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E3CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E3CE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E3CE8) {
			switch (rex_dispatch_address) {
				case 0x881E3CF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E3CE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E3CF0: goto loc_881E3CF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881E3CF0;
	__savegprlr_25(ctx, base);
loc_881E3CF0:
	// lwz r26,92(r1)
	ctx.current_instruction = 0x881E3CF0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// rlwinm r10,r8,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,33
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 33, ctx.xer);
	// bgt cr6,0x881e3de4
	if (ctx.cr6.gt) goto loc_881E3DE4;
	// lwz r29,84(r1)
	ctx.current_instruction = 0x881E3D18;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r6,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r25,4
	ctx.r25.s64 = 4;
loc_881E3D24:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881e3d6c
	if (!ctx.cr6.gt) goto loc_881E3D6C;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r9,2(r30)
	ctx.current_instruction = 0x881E3D30;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.current_instruction = 0x881E3D34;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r11,r27,r6
	ctx.r11.u64 = ctx.r27.u64 + ctx.r6.u64;
loc_881E3D4C:
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881E3D4C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881E3D50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x881E3D64;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881e3d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3D4C;
loc_881E3D6C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e3dd8
	if (!ctx.cr6.gt) goto loc_881E3DD8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
loc_881E3D80:
	// lhz r11,2(r31)
	ctx.current_instruction = 0x881E3D80;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.current_instruction = 0x881E3D84;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lwz r4,0(r10)
	ctx.current_instruction = 0x881E3D8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881E3D90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x881e3dbc
	if (!ctx.cr0.lt) goto loc_881E3DBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881e3dc8
	goto loc_881E3DC8;
loc_881E3DBC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881e3dc8
	if (!ctx.cr6.gt) goto loc_881E3DC8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_881E3DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r8,r7
	ctx.current_instruction = 0x881E3DD0;
	ea = ctx.r8.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x881e3d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3D80;
loc_881E3DD8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x881e3d24
	if (!ctx.cr0.eq) goto loc_881E3D24;
loc_881E3DE4:
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9018) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881E9018);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9018;
	ctx.current_instruction = 0x881E9018;
	// b 0x881ed470
	sub_881ED470(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9020) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881E9020);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9020;
	ctx.current_instruction = 0x881E9020;
	// lwz r11,256(r13)
	ctx.current_instruction = 0x881E9020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.current_instruction = 0x881E9024;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E9038) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9038;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9038) {
			switch (rex_dispatch_address) {
				case 0x881E9040:
				case 0x881E9058:
				case 0x881E9088:
				case 0x881E9098:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9038;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9040: goto loc_881E9040;
		case 0x881E9058: goto loc_881E9058;
		case 0x881E9088: goto loc_881E9088;
		case 0x881E9098: goto loc_881E9098;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881E9040;
	__savegprlr_28(ctx, base);
loc_881E9040:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881E9040;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15268
	ctx.r29.s64 = ctx.r11.s64 + 15268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88243680
	ctx.lr = 0x881E9058;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881E9058:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r31,r11,15296
	ctx.r31.s64 = ctx.r11.s64 + 15296;
	// lwz r11,15296(r11)
	ctx.current_instruction = 0x881E9060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15296);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x881e9090
	if (ctx.cr6.eq) goto loc_881E9090;
loc_881E9070:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.current_instruction = 0x881E9074;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x881E907C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881E9088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881E9088:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x881e9070
	if (!ctx.cr6.eq) goto loc_881E9070;
loc_881E9090:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88243660
	ctx.lr = 0x881E9098;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881E9098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9C80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9C80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9C80) {
			switch (rex_dispatch_address) {
				case 0x881E9C88:
				case 0x881E9CA8:
				case 0x881E9CCC:
				case 0x881E9D00:
				case 0x881E9D48:
				case 0x881E9D80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9C80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9C88: goto loc_881E9C88;
		case 0x881E9CA8: goto loc_881E9CA8;
		case 0x881E9CCC: goto loc_881E9CCC;
		case 0x881E9D00: goto loc_881E9D00;
		case 0x881E9D48: goto loc_881E9D48;
		case 0x881E9D80: goto loc_881E9D80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881E9C88;
	__savegprlr_28(ctx, base);
loc_881E9C88:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881E9C88;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e9d88
	if (ctx.cr6.eq) goto loc_881E9D88;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x881E9C98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881e9ccc
	if (ctx.cr0.eq) goto loc_881E9CCC;
	// bl 0x88243740
	ctx.lr = 0x881E9CA8;
	__imp__KeGetCurrentProcessType(ctx, base);
loc_881E9CA8:
	// lbz r11,379(r31)
	ctx.current_instruction = 0x881E9CA8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881e9ccc
	if (ctx.cr6.eq) goto loc_881E9CCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.current_instruction = 0x881E9CB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1312
	ctx.r6.s64 = 1312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x88243730
	ctx.lr = 0x881E9CCC;
	__imp__KeBugCheckEx(ctx, base);
loc_881E9CCC:
	// lwz r30,88(r31)
	ctx.current_instruction = 0x881E9CCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881e9d00
	goto loc_881E9D00;
loc_881E9CDC:
	// stw r30,80(r1)
	ctx.current_instruction = 0x881E9CDC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.current_instruction = 0x881E9CE4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	ctx.current_instruction = 0x881E9CEC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x881E9CF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x88243750
	ctx.lr = 0x881E9D00;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881E9D00:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881e9cdc
	if (!ctx.cr6.eq) goto loc_881E9CDC;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881E9D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881e9d18
	if (!ctx.cr0.eq) goto loc_881E9D18;
	// stw r28,1408(r31)
	ctx.current_instruction = 0x881E9D14;
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
loc_881E9D18:
	// lwz r30,72(r31)
	ctx.current_instruction = 0x881E9D18;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,72(r31)
	ctx.current_instruction = 0x881E9D1C;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x881e9d48
	goto loc_881E9D48;
loc_881E9D24:
	// stw r30,80(r1)
	ctx.current_instruction = 0x881E9D24;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.current_instruction = 0x881E9D2C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	ctx.current_instruction = 0x881E9D34;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x881E9D40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x88243750
	ctx.lr = 0x881E9D48;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881E9D48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881e9d24
	if (!ctx.cr6.eq) goto loc_881E9D24;
	// lwz r29,1424(r31)
	ctx.current_instruction = 0x881E9D50;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r30,64
	ctx.r30.s64 = 64;
loc_881E9D58:
	// addi r11,r30,255
	ctx.r11.s64 = ctx.r30.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.current_instruction = 0x881E9D6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e9d80
	if (ctx.cr6.eq) goto loc_881E9D80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x881e96e8
	ctx.lr = 0x881E9D80;
	sub_881E96E8(ctx, base);
loc_881E9D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881e9d58
	if (!ctx.cr6.eq) goto loc_881E9D58;
loc_881E9D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EBC3C) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EBC3C;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EBC3C) {
			switch (rex_dispatch_address) {
				case 0x881EBC68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EBC3C;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EBC68: goto loc_881EBC68;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881EBC3C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881EBC44;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	ctx.current_instruction = 0x881EBC48;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881EBC50;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EBC54;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x881ebc68
	if (ctx.cr6.eq) goto loc_881EBC68;
	// lwz r3,1408(r30)
	ctx.current_instruction = 0x881EBC60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EBC68;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EBC68:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881EBC68;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881EBC6C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881EBC70;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.current_instruction = 0x881EBC74;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881EBC78;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC608) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC608;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC608) {
			switch (rex_dispatch_address) {
				case 0x881EC61C:
				case 0x881EC628:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC608;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC61C: goto loc_881EC61C;
		case 0x881EC628: goto loc_881EC628;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EC60C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EC610;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x882437d0
	ctx.lr = 0x881EC61C;
	__imp__NtSuspendThread(ctx, base);
loc_881EC61C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881ec630
	if (!ctx.cr0.lt) goto loc_881EC630;
	// bl 0x881ed560
	ctx.lr = 0x881EC628;
	sub_881ED560(ctx, base);
loc_881EC628:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881ec634
	goto loc_881EC634;
loc_881EC630:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x881EC630;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881EC634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EC638;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ECD98) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ECD98);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ECD98;
	ctx.current_instruction = 0x881ECD98;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881ed568
	sub_881ED568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ECDA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ECDA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ECDA0) {
			switch (rex_dispatch_address) {
				case 0x881ECDD4:
				case 0x881ECDF4:
				case 0x881ECE14:
				case 0x881ECE20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ECDA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ECDD4: goto loc_881ECDD4;
		case 0x881ECDF4: goto loc_881ECDF4;
		case 0x881ECE14: goto loc_881ECE14;
		case 0x881ECE20: goto loc_881ECE20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ECDA4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881ECDA8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881ECDAC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881ECDB0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881ecddc
	if (ctx.cr6.eq) goto loc_881ECDDC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x881ed5d0
	ctx.lr = 0x881ECDD4;
	sub_881ED5D0(ctx, base);
loc_881ECDD4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x881ecde0
	goto loc_881ECDE0;
loc_881ECDDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_881ECDE0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88243850
	ctx.lr = 0x881ECDF4;
	__imp__NtCreateEvent(ctx, base);
loc_881ECDF4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ece1c
	if (ctx.cr0.lt) goto loc_881ECE1C;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x881ece10
	if (ctx.cr6.eq) goto loc_881ECE10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECE10:
	// bl 0x881ed470
	ctx.lr = 0x881ECE14;
	sub_881ED470(ctx, base);
loc_881ECE14:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x881ECE14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x881ece24
	goto loc_881ECE24;
loc_881ECE1C:
	// bl 0x881ed488
	ctx.lr = 0x881ECE20;
	sub_881ED488(ctx, base);
loc_881ECE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECE24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ECE28;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881ECE30;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881ECE34;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED5D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED5D0) {
			switch (rex_dispatch_address) {
				case 0x881ED5F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED5D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED5F8: goto loc_881ED5F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ED5D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881ED5D8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881ED5DC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881ED5E0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88243710
	ctx.lr = 0x881ED5F8;
	__imp__RtlInitAnsiString(ctx, base);
loc_881ED5F8:
	// li r11,-4
	ctx.r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	ctx.current_instruction = 0x881ED600;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	ctx.current_instruction = 0x881ED604;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881ED60C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ED614;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881ED61C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881ED620;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EE7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EE7C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EE7C0) {
			switch (rex_dispatch_address) {
				case 0x881EE7C8:
				case 0x881EE7F0:
				case 0x881EE7FC:
				case 0x881EE808:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE7C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EE7C8: goto loc_881EE7C8;
		case 0x881EE7F0: goto loc_881EE7F0;
		case 0x881EE7FC: goto loc_881EE7FC;
		case 0x881EE808: goto loc_881EE808;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881EE7C8;
	__savegprlr_29(ctx, base);
loc_881EE7C8:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881EE7CC;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	ctx.current_instruction = 0x881EE7DC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x881e9038
	ctx.lr = 0x881EE7F0;
	sub_881E9038(ctx, base);
loc_881EE7F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x881EE7FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881EE7FC:
	// stw r3,80(r31)
	ctx.current_instruction = 0x881EE7FC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x881e9038
	ctx.lr = 0x881EE808;
	sub_881E9038(ctx, base);
loc_881EE808:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881EE814;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88243790
	ctx.lr = 0x881EE81C;
	__imp__ExTerminateThread(ctx, base);
}

DEFINE_REX_FUNC(sub_881EE958) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EE958);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE958;
	ctx.current_instruction = 0x881EE958;
	// b 0x88052278
	sub_88052278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EEA70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EEA70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EEA70) {
			switch (rex_dispatch_address) {
				case 0x881EEAA4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEA70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EEAA4: goto loc_881EEAA4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EEA74;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EEA78;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EEA7C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lbz r10,8(r3)
	ctx.current_instruction = 0x881EEA84;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30764
	ctx.r11.s64 = ctx.r11.s64 + -30764;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	ctx.current_instruction = 0x881EEA94;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x881eeaa4
	if (ctx.cr0.eq) goto loc_881EEAA4;
	// lwz r3,4(r3)
	ctx.current_instruction = 0x881EEA9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x88052278
	ctx.lr = 0x881EEAA4;
	sub_88052278(ctx, base);
loc_881EEAA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	ctx.current_instruction = 0x881EEAA8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	ctx.current_instruction = 0x881EEAAC;
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EEAB4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EEABC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_15) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EECE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EECE8;
	ctx.current_instruction = 0x881EECE8;
	uint32_t ea{};
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_75) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDCC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDCC;
	ctx.current_instruction = 0x881EEDCC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_94) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE64);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE64;
	ctx.current_instruction = 0x881EEE64;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFE8;
	ctx.current_instruction = 0x881EEFE8;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_81) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF094);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF094;
	ctx.current_instruction = 0x881EF094;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_112) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF18C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF18C;
	ctx.current_instruction = 0x881EF18C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restfpr_20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2B4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2B4;
	ctx.current_instruction = 0x881EF2B4;
	// lfd f20,-96(r12)
	ctx.current_instruction = 0x881EF2B4;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881F0574) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0574;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0574) {
			switch (rex_dispatch_address) {
				case 0x881F0594:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0574;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0594: goto loc_881F0594;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F0574;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F057C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x881F0584;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0588;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ef6e0
	ctx.lr = 0x881F0594;
	sub_881EF6E0(ctx, base);
loc_881F0594:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0594;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F0598;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F059C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x881F05A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1214) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1214;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1214) {
			switch (rex_dispatch_address) {
				case 0x881F1244:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1214;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1244: goto loc_881F1244;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F1214;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	ctx.current_instruction = 0x881F121C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	ctx.current_instruction = 0x881F1220;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881F1228;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F122C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881F1230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x881F123C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F1244;
	sub_881EF720(ctx, base);
loc_881F1244:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r27,164(r31)
	ctx.current_instruction = 0x881F1248;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F1250;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,24320
	ctx.r29.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F125C;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F1260;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.current_instruction = 0x881F1264;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.current_instruction = 0x881F1268;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881F126C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1E54) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F1E54);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1E54;
	ctx.current_instruction = 0x881F1E54;
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.current_instruction = 0x881F1E58;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.current_instruction = 0x881F1E5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F8850) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F8850;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F8850) {
			switch (rex_dispatch_address) {
				case 0x881F8858:
				case 0x881F8AF8:
				case 0x881F8D30:
				case 0x881F8D58:
				case 0x881F8DB0:
				case 0x881F8DC0:
				case 0x881F8E78:
				case 0x881F8EB4:
				case 0x881F8F6C:
				case 0x881F8F98:
				case 0x881F9104:
				case 0x881F9170:
				case 0x881F919C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F8850;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F8858: goto loc_881F8858;
		case 0x881F8AF8: goto loc_881F8AF8;
		case 0x881F8D30: goto loc_881F8D30;
		case 0x881F8D58: goto loc_881F8D58;
		case 0x881F8DB0: goto loc_881F8DB0;
		case 0x881F8DC0: goto loc_881F8DC0;
		case 0x881F8E78: goto loc_881F8E78;
		case 0x881F8EB4: goto loc_881F8EB4;
		case 0x881F8F6C: goto loc_881F8F6C;
		case 0x881F8F98: goto loc_881F8F98;
		case 0x881F9104: goto loc_881F9104;
		case 0x881F9170: goto loc_881F9170;
		case 0x881F919C: goto loc_881F919C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F8858;
	__savegprlr_14(ctx, base);
loc_881F8858:
	// stwu r1,-1760(r1)
	ctx.current_instruction = 0x881F8858;
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r8,1820(r1)
	ctx.current_instruction = 0x881F8860;
	REX_STORE_U32(ctx.r1.u32 + 1820, ctx.r8.u32);
	// addi r8,r1,828
	ctx.r8.s64 = ctx.r1.s64 + 828;
	// lhz r11,52(r4)
	ctx.current_instruction = 0x881F8868;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.current_instruction = 0x881F886C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r1,255
	ctx.r10.s64 = ctx.r1.s64 + 255;
	// stw r3,1780(r1)
	ctx.current_instruction = 0x881F8878;
	REX_STORE_U32(ctx.r1.u32 + 1780, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r4,r8,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,44(r30)
	ctx.current_instruction = 0x881F888C;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// rlwinm r25,r9,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,40(r30)
	ctx.current_instruction = 0x881F8894;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r5.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	ctx.current_instruction = 0x881F889C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r25,84(r1)
	ctx.current_instruction = 0x881F88A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bne cr6,0x881f88d8
	if (!ctx.cr6.eq) goto loc_881F88D8;
	// lwz r11,1368(r31)
	ctx.current_instruction = 0x881F88AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1368);
	// lwz r9,22264(r3)
	ctx.current_instruction = 0x881F88B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28(r30)
	ctx.current_instruction = 0x881F88D0;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r5.u32);
	// b 0x881f88e8
	goto loc_881F88E8;
loc_881F88D8:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1480(r11)
	ctx.current_instruction = 0x881F88E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r30)
	ctx.current_instruction = 0x881F88E4;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_881F88E8:
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,1368(r31)
	ctx.current_instruction = 0x881F88EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1368);
	// mullw r11,r25,r7
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lwz r9,224(r26)
	ctx.current_instruction = 0x881F88F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 224);
	// lhz r23,74(r31)
	ctx.current_instruction = 0x881F88F8;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r4,3780(r26)
	ctx.current_instruction = 0x881F88FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 3780);
	// lhz r22,76(r31)
	ctx.current_instruction = 0x881F8900;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r3,3784(r26)
	ctx.current_instruction = 0x881F8904;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 3784);
	// lwz r29,220(r26)
	ctx.current_instruction = 0x881F8908;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 220);
	// lwz r6,3776(r26)
	ctx.current_instruction = 0x881F890C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 3776);
	// lwz r28,272(r26)
	ctx.current_instruction = 0x881F8910;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// lbz r21,33(r31)
	ctx.current_instruction = 0x881F8914;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r31.u32 + 33);
	// stw r11,4(r30)
	ctx.current_instruction = 0x881F8918;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mullw r5,r10,r7
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x881F8920;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,0(r30)
	ctx.current_instruction = 0x881F8924;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stb r21,80(r1)
	ctx.current_instruction = 0x881F8928;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// rlwinm r10,r7,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// sth r10,16(r30)
	ctx.current_instruction = 0x881F8934;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r10.u16);
	// mullw r10,r8,r25
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// rlwinm r5,r23,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r20,74(r31)
	ctx.current_instruction = 0x881F8944;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// mullw r5,r5,r24
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r24.s32);
	// lhz r19,76(r31)
	ctx.current_instruction = 0x881F894C;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r17,r10,r8
	ctx.r17.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r18,r22,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r10,r18,r24
	ctx.r10.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r24.s32);
	// add r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r3,r17,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r20,r20,4
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 4);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r6,r29
	ctx.r9.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rotlwi r11,r19,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r19.u32, 3);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r5,r24,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mullw r4,r20,r7
	ctx.r4.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,88(r1)
	ctx.current_instruction = 0x881F89A4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rotlwi r3,r23,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r23.u32, 4);
	// stw r5,104(r1)
	ctx.current_instruction = 0x881F89AC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// rotlwi r29,r22,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r22.u32, 3);
	// stw r4,100(r1)
	ctx.current_instruction = 0x881F89B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r24,r3,r7
	ctx.r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x881F89C0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mullw r23,r29,r7
	ctx.r23.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x881f922c
	if (!ctx.cr6.lt) goto loc_881F922C;
	// b 0x881f89dc
	goto loc_881F89DC;
loc_881F89D4:
	// lwz r23,116(r1)
	ctx.current_instruction = 0x881F89D4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,108(r1)
	ctx.current_instruction = 0x881F89D8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_881F89DC:
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r24,8(r30)
	ctx.current_instruction = 0x881F89E0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// stw r23,12(r30)
	ctx.current_instruction = 0x881F89E4;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// sth r27,18(r30)
	ctx.current_instruction = 0x881F89EC;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r27.u16);
	// ble cr6,0x881f8c44
	if (!ctx.cr6.gt) goto loc_881F8C44;
loc_881F89F4:
	// rlwinm r11,r21,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	// clrlwi r9,r21,24
	ctx.r9.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f8a80
	if (ctx.cr6.eq) goto loc_881F8A80;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881F8A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881F8A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881f8a80
	if (!ctx.cr6.eq) goto loc_881F8A80;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x881F8A18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,352(r31)
	ctx.current_instruction = 0x881F8A20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r7,r9,0,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F8A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stb r7,80(r1)
	ctx.current_instruction = 0x881F8A30;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r8
	ctx.current_instruction = 0x881F8A38;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r5,348(r31)
	ctx.current_instruction = 0x881F8A3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881F8A40;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r3,r5
	ctx.current_instruction = 0x881F8A50;
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r8,348(r31)
	ctx.current_instruction = 0x881F8A54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x881F8A58;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r8
	ctx.current_instruction = 0x881F8A64;
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r11,348(r31)
	ctx.current_instruction = 0x881F8A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,4(r5)
	ctx.current_instruction = 0x881F8A70;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// lwz r4,348(r31)
	ctx.current_instruction = 0x881F8A74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r29,r4,r10
	ctx.current_instruction = 0x881F8A78;
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r29.u32);
	// b 0x881f8a84
	goto loc_881F8A84;
loc_881F8A80:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881F8A84:
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// lwz r10,28(r30)
	ctx.current_instruction = 0x881F8A88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r9,r29,140
	ctx.r9.s64 = ctx.r29.s64 + 140;
	// lwz r8,40(r30)
	ctx.current_instruction = 0x881F8A90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lwzx r11,r6,r31
	ctx.current_instruction = 0x881F8AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r10,r5,r30
	ctx.current_instruction = 0x881F8AAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// stw r3,28(r30)
	ctx.current_instruction = 0x881F8AB0;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r28,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 2;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881F8AC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// addi r8,r28,45
	ctx.r8.s64 = ctx.r28.s64 + 45;
	// lwz r11,392(r31)
	ctx.current_instruction = 0x881F8AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r4,40(r30)
	ctx.current_instruction = 0x881F8AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,4(r10)
	ctx.current_instruction = 0x881F8ADC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r6,25780(r9)
	ctx.current_instruction = 0x881F8AE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 25780);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// lwz r9,1364(r31)
	ctx.current_instruction = 0x881F8AE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// lhzx r8,r5,r31
	ctx.current_instruction = 0x881F8AEC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x881cc1c0
	ctx.lr = 0x881F8AF8;
	sub_881CC1C0(ctx, base);
loc_881F8AF8:
	// lbz r9,33(r31)
	ctx.current_instruction = 0x881F8AF8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 33);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f8bc4
	if (ctx.cr6.eq) goto loc_881F8BC4;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// lwz r9,40(r30)
	ctx.current_instruction = 0x881F8B0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,54(r31)
	ctx.current_instruction = 0x881F8B14;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 54);
	// addi r7,r29,146
	ctx.r7.s64 = ctx.r29.s64 + 146;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r3,0(r9)
	ctx.current_instruction = 0x881F8B28;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// sraw r6,r4,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r6.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r11,r5,r31
	ctx.current_instruction = 0x881F8B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r10,r6,1,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFF0;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,0(r11)
	ctx.current_instruction = 0x881F8B48;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r4,8(r9)
	ctx.current_instruction = 0x881F8B4C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,8(r11)
	ctx.current_instruction = 0x881F8B50;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,16(r9)
	ctx.current_instruction = 0x881F8B54;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// stdux r3,r11,r10
	ctx.current_instruction = 0x881F8B58;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,24(r9)
	ctx.current_instruction = 0x881F8B5C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,8(r11)
	ctx.current_instruction = 0x881F8B60;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,32(r9)
	ctx.current_instruction = 0x881F8B64;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// stdux r7,r11,r10
	ctx.current_instruction = 0x881F8B68;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,40(r9)
	ctx.current_instruction = 0x881F8B6C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// std r6,8(r11)
	ctx.current_instruction = 0x881F8B70;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,48(r9)
	ctx.current_instruction = 0x881F8B74;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 48);
	// stdux r5,r11,r10
	ctx.current_instruction = 0x881F8B78;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,56(r9)
	ctx.current_instruction = 0x881F8B7C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 56);
	// std r4,8(r11)
	ctx.current_instruction = 0x881F8B80;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,64(r9)
	ctx.current_instruction = 0x881F8B84;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 64);
	// stdux r3,r11,r10
	ctx.current_instruction = 0x881F8B88;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,72(r9)
	ctx.current_instruction = 0x881F8B8C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 72);
	// std r8,8(r11)
	ctx.current_instruction = 0x881F8B90;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,80(r9)
	ctx.current_instruction = 0x881F8B94;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 80);
	// stdux r7,r11,r10
	ctx.current_instruction = 0x881F8B98;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,88(r9)
	ctx.current_instruction = 0x881F8B9C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 88);
	// std r6,8(r11)
	ctx.current_instruction = 0x881F8BA0;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,96(r9)
	ctx.current_instruction = 0x881F8BA4;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 96);
	// stdux r5,r11,r10
	ctx.current_instruction = 0x881F8BA8;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,104(r9)
	ctx.current_instruction = 0x881F8BAC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 104);
	// std r4,8(r11)
	ctx.current_instruction = 0x881F8BB0;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,112(r9)
	ctx.current_instruction = 0x881F8BB4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 112);
	// stdux r3,r11,r10
	ctx.current_instruction = 0x881F8BB8;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r10,120(r9)
	ctx.current_instruction = 0x881F8BBC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 120);
	// std r10,8(r11)
	ctx.current_instruction = 0x881F8BC0;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_881F8BC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// blt cr6,0x881f8a84
	if (ctx.cr6.lt) goto loc_881F8A84;
	// lbz r11,80(r1)
	ctx.current_instruction = 0x881F8BD0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f8be8
	if (ctx.cr6.eq) goto loc_881F8BE8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,80(r1)
	ctx.current_instruction = 0x881F8BE4;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_881F8BE8:
	// lhz r10,18(r30)
	ctx.current_instruction = 0x881F8BE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F8BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.current_instruction = 0x881F8BF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lwz r7,88(r1)
	ctx.current_instruction = 0x881F8C00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881F8C04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881F8C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r7,24
	ctx.r5.s64 = ctx.r7.s64 + 24;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r21,80(r1)
	ctx.current_instruction = 0x881F8C18;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,88(r1)
	ctx.current_instruction = 0x881F8C20;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r6,0(r30)
	ctx.current_instruction = 0x881F8C28;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r4,4(r30)
	ctx.current_instruction = 0x881F8C2C;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// sth r3,18(r30)
	ctx.current_instruction = 0x881F8C34;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r3.u16);
	// stw r10,8(r30)
	ctx.current_instruction = 0x881F8C38;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,12(r30)
	ctx.current_instruction = 0x881F8C3C;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// blt cr6,0x881f89f4
	if (ctx.cr6.lt) goto loc_881F89F4;
loc_881F8C44:
	// lhz r11,16(r30)
	ctx.current_instruction = 0x881F8C44;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// clrlwi r9,r21,31
	ctx.r9.u64 = ctx.r21.u32 & 0x1;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881F8C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r8,16(r30)
	ctx.current_instruction = 0x881F8C58;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r8.u16);
	// lhz r11,50(r31)
	ctx.current_instruction = 0x881F8C5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r30)
	ctx.current_instruction = 0x881F8C64;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lhz r19,74(r31)
	ctx.current_instruction = 0x881F8C68;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r15,76(r31)
	ctx.current_instruction = 0x881F8C6C;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rotlwi r11,r15,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r15.u32, 3);
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rotlwi r11,r19,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r19.u32, 4);
	// stw r5,116(r1)
	ctx.current_instruction = 0x881F8C7C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r4,108(r1)
	ctx.current_instruction = 0x881F8C84;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// beq cr6,0x881f9014
	if (ctx.cr6.eq) goto loc_881F9014;
	// lhz r28,50(r31)
	ctx.current_instruction = 0x881F8C8C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x881F8C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r28,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lwz r6,1304(r31)
	ctx.current_instruction = 0x881F8C9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1304);
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r7,348(r31)
	ctx.current_instruction = 0x881F8CA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r9,352(r31)
	ctx.current_instruction = 0x881F8CAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// srawi r16,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r28.s32 >> 1;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r5,r6
	ctx.current_instruction = 0x881F8CC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// or r14,r29,r6
	ctx.r14.u64 = ctx.r29.u64 | ctx.r6.u64;
	// rotlwi r18,r28,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// rotlwi r20,r28,3
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// add r27,r8,r7
	ctx.r27.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r17,r10,r9
	ctx.r17.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x881f8d74
	if (!ctx.cr6.gt) goto loc_881F8D74;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// li r29,16
	ctx.r29.s64 = 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r27,4
	ctx.r25.s64 = ctx.r27.s64 + 4;
	// add r24,r10,r27
	ctx.r24.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
loc_881F8D08:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x881F8D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8d30
	if (!ctx.cr6.eq) goto loc_881F8D30;
	// lwz r11,-4(r25)
	ctx.current_instruction = 0x881F8D14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8d30
	if (!ctx.cr6.eq) goto loc_881F8D30;
	// lwz r11,1328(r31)
	ctx.current_instruction = 0x881F8D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197da8
	ctx.lr = 0x881F8D30;
	sub_88197DA8(ctx, base);
loc_881F8D30:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881F8D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8d58
	if (!ctx.cr6.eq) goto loc_881F8D58;
	// lwz r11,-4(r24)
	ctx.current_instruction = 0x881F8D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8d58
	if (!ctx.cr6.eq) goto loc_881F8D58;
	// lwz r11,1336(r31)
	ctx.current_instruction = 0x881F8D48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1336);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197da8
	ctx.lr = 0x881F8D58;
	sub_88197DA8(ctx, base);
loc_881F8D58:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f8d08
	if (!ctx.cr0.eq) goto loc_881F8D08;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F8D6C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	ctx.current_instruction = 0x881F8D70;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_881F8D74:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x881f8dd8
	if (!ctx.cr6.gt) goto loc_881F8DD8;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r26,r17,4
	ctx.r26.s64 = ctx.r17.s64 + 4;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
loc_881F8D88:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x881F8D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8dc0
	if (!ctx.cr6.eq) goto loc_881F8DC0;
	// lwz r11,-4(r26)
	ctx.current_instruction = 0x881F8D94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f8dc0
	if (!ctx.cr6.eq) goto loc_881F8DC0;
	// lwz r11,1340(r31)
	ctx.current_instruction = 0x881F8DA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1340);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x88197da8
	ctx.lr = 0x881F8DB0;
	sub_88197DA8(ctx, base);
loc_881F8DB0:
	// lwz r11,1348(r31)
	ctx.current_instruction = 0x881F8DB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x88197da8
	ctx.lr = 0x881F8DC0;
	sub_88197DA8(ctx, base);
loc_881F8DC0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f8d88
	if (!ctx.cr0.eq) goto loc_881F8D88;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F8DD0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	ctx.current_instruction = 0x881F8DD4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_881F8DD8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881f8edc
	if (!ctx.cr6.gt) goto loc_881F8EDC;
	// lwz r26,104(r1)
	ctx.current_instruction = 0x881F8DE0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// add r25,r10,r26
	ctx.r25.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r23,r11,r27
	ctx.r23.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r21,r11,r27
	ctx.r21.u64 = ctx.r27.u64 - ctx.r11.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
loc_881F8E04:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x881f8e1c
	if (!ctx.cr6.eq) goto loc_881F8E1C;
	// lwz r11,0(r21)
	ctx.current_instruction = 0x881F8E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x881f8e20
	if (ctx.cr6.eq) goto loc_881F8E20;
loc_881F8E1C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_881F8E20:
	// lwz r10,0(r24)
	ctx.current_instruction = 0x881F8E20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,0(r23)
	ctx.current_instruction = 0x881F8E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r7,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r27,r6,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bne cr6,0x881f8e50
	if (!ctx.cr6.eq) goto loc_881F8E50;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881f8e80
	if (ctx.cr6.eq) goto loc_881F8E80;
loc_881F8E50:
	// lwz r4,1328(r31)
	ctx.current_instruction = 0x881F8E50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1332(r31)
	ctx.current_instruction = 0x881F8E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1332);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F8E78;
	sub_88197FE8(ctx, base);
loc_881F8E78:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x881f8e88
	if (!ctx.cr6.eq) goto loc_881F8E88;
loc_881F8E80:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881f8eb4
	if (ctx.cr6.eq) goto loc_881F8EB4;
loc_881F8E88:
	// lwz r4,1336(r31)
	ctx.current_instruction = 0x881F8E88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1336);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1328(r31)
	ctx.current_instruction = 0x881F8E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F8EB4;
	sub_88197FE8(ctx, base);
loc_881F8EB4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f8e04
	if (!ctx.cr0.eq) goto loc_881F8E04;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F8ED4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	ctx.current_instruction = 0x881F8ED8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_881F8EDC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x881f8fb8
	if (!ctx.cr6.gt) goto loc_881F8FB8;
	// lwz r26,96(r1)
	ctx.current_instruction = 0x881F8EE4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x881F8EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// subf r22,r11,r17
	ctx.r22.u64 = ctx.r17.u64 - ctx.r11.u64;
	// subf r25,r26,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r26.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
loc_881F8F04:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x881f8f1c
	if (!ctx.cr6.eq) goto loc_881F8F1C;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x881F8F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x881f8f20
	if (ctx.cr6.eq) goto loc_881F8F20;
loc_881F8F1C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_881F8F20:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881F8F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x881f8f40
	if (!ctx.cr6.eq) goto loc_881F8F40;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881f8f98
	if (ctx.cr6.eq) goto loc_881F8F98;
loc_881F8F40:
	// lwz r4,1340(r31)
	ctx.current_instruction = 0x881F8F40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1340);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1344(r31)
	ctx.current_instruction = 0x881F8F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1344);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// add r6,r25,r26
	ctx.r6.u64 = ctx.r25.u64 + ctx.r26.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F8F6C;
	sub_88197FE8(ctx, base);
loc_881F8F6C:
	// lwz r4,1348(r31)
	ctx.current_instruction = 0x881F8F6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x881F8F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F8F98;
	sub_88197FE8(ctx, base);
loc_881F8F98:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f8f04
	if (!ctx.cr0.eq) goto loc_881F8F04;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F8FB0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	ctx.current_instruction = 0x881F8FB4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_881F8FB8:
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x881F8FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r10,1344(r31)
	ctx.current_instruction = 0x881F8FBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1344);
	// lwz r7,1332(r31)
	ctx.current_instruction = 0x881F8FC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1332);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1348(r31)
	ctx.current_instruction = 0x881F8FC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,1340(r31)
	ctx.current_instruction = 0x881F8FD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1340);
	// lwz r4,1328(r31)
	ctx.current_instruction = 0x881F8FD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// lwz r3,1336(r31)
	ctx.current_instruction = 0x881F8FD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1336);
	// stw r11,1348(r31)
	ctx.current_instruction = 0x881F8FDC;
	REX_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lbz r21,80(r1)
	ctx.current_instruction = 0x881F8FE4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,1340(r31)
	ctx.current_instruction = 0x881F8FE8;
	REX_STORE_U32(ctx.r31.u32 + 1340, ctx.r10.u32);
	// stw r7,1336(r31)
	ctx.current_instruction = 0x881F8FEC;
	REX_STORE_U32(ctx.r31.u32 + 1336, ctx.r7.u32);
	// stw r4,588(r31)
	ctx.current_instruction = 0x881F8FF0;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r4.u32);
	// stw r3,1332(r31)
	ctx.current_instruction = 0x881F8FF4;
	REX_STORE_U32(ctx.r31.u32 + 1332, ctx.r3.u32);
	// stw r8,1344(r31)
	ctx.current_instruction = 0x881F8FF8;
	REX_STORE_U32(ctx.r31.u32 + 1344, ctx.r8.u32);
	// stw r4,584(r31)
	ctx.current_instruction = 0x881F8FFC;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r4.u32);
	// stw r9,1352(r31)
	ctx.current_instruction = 0x881F9000;
	REX_STORE_U32(ctx.r31.u32 + 1352, ctx.r9.u32);
	// stw r11,596(r31)
	ctx.current_instruction = 0x881F9004;
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r6,600(r31)
	ctx.current_instruction = 0x881F9008;
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r6.u32);
	// stw r11,592(r31)
	ctx.current_instruction = 0x881F900C;
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r5,604(r31)
	ctx.current_instruction = 0x881F9010;
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r5.u32);
loc_881F9014:
	// lwz r9,92(r1)
	ctx.current_instruction = 0x881F9014;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881F9018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lwz r8,1304(r31)
	ctx.current_instruction = 0x881F9020;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1304);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lhz r22,76(r31)
	ctx.current_instruction = 0x881F9028;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,100(r1)
	ctx.current_instruction = 0x881F9030;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r4,96(r1)
	ctx.current_instruction = 0x881F9038;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r11,r22,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r22.u32, 3);
	// lhz r24,74(r31)
	ctx.current_instruction = 0x881F9040;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// lwz r3,104(r1)
	ctx.current_instruction = 0x881F9048;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r18,r11,r6
	ctx.r18.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r8,r7,r8
	ctx.current_instruction = 0x881F9050;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r19,r11,r4
	ctx.r19.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r18,100(r1)
	ctx.current_instruction = 0x881F905C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// rotlwi r10,r24,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r24.u32, 4);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r19,96(r1)
	ctx.current_instruction = 0x881F9068;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// add r28,r10,r3
	ctx.r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r28,104(r1)
	ctx.current_instruction = 0x881F9078;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x881f9214
	if (ctx.cr6.eq) goto loc_881F9214;
	// lhz r11,50(r31)
	ctx.current_instruction = 0x881F9084;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881F9088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// lwz r7,348(r31)
	ctx.current_instruction = 0x881F9090;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lwz r9,352(r31)
	ctx.current_instruction = 0x881F9098;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r21,r11,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r23,r11,3
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r20,r10,r9
	ctx.r20.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881f911c
	if (!ctx.cr6.gt) goto loc_881F911C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r25,r10,r8
	ctx.r25.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_881F90CC:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x881F90CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f9104
	if (!ctx.cr6.eq) goto loc_881F9104;
	// lwz r4,1328(r31)
	ctx.current_instruction = 0x881F90D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1332(r31)
	ctx.current_instruction = 0x881F90E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1332);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F9104;
	sub_88197FE8(ctx, base);
loc_881F9104:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f90cc
	if (!ctx.cr0.eq) goto loc_881F90CC;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F9118;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881F911C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881f91b4
	if (!ctx.cr6.gt) goto loc_881F91B4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// subf r25,r11,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r11.u64;
	// subf r27,r19,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r19.u64;
loc_881F9138:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x881F9138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881f919c
	if (!ctx.cr6.eq) goto loc_881F919C;
	// lwz r4,1340(r31)
	ctx.current_instruction = 0x881F9144;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1340);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1344(r31)
	ctx.current_instruction = 0x881F914C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1344);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// add r6,r28,r27
	ctx.r6.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F9170;
	sub_88197FE8(ctx, base);
loc_881F9170:
	// lwz r4,1348(r31)
	ctx.current_instruction = 0x881F9170;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x881F9174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197fe8
	ctx.lr = 0x881F919C;
	sub_88197FE8(ctx, base);
loc_881F919C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x881f9138
	if (!ctx.cr0.eq) goto loc_881F9138;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881F91B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881F91B4:
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x881F91B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r9,1332(r31)
	ctx.current_instruction = 0x881F91B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1332);
	// lwz r7,1344(r31)
	ctx.current_instruction = 0x881F91BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1344);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1348(r31)
	ctx.current_instruction = 0x881F91C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// lwz r8,1336(r31)
	ctx.current_instruction = 0x881F91C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1336);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,1340(r31)
	ctx.current_instruction = 0x881F91D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1340);
	// lwz r4,1328(r31)
	ctx.current_instruction = 0x881F91D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// stw r9,1336(r31)
	ctx.current_instruction = 0x881F91D8;
	REX_STORE_U32(ctx.r31.u32 + 1336, ctx.r9.u32);
	// stw r11,1348(r31)
	ctx.current_instruction = 0x881F91DC;
	REX_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// lwz r11,1336(r31)
	ctx.current_instruction = 0x881F91E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1336);
	// lwz r26,1780(r1)
	ctx.current_instruction = 0x881F91E4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x881F91E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,1340(r31)
	ctx.current_instruction = 0x881F91EC;
	REX_STORE_U32(ctx.r31.u32 + 1340, ctx.r7.u32);
	// stw r4,588(r31)
	ctx.current_instruction = 0x881F91F0;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r4.u32);
	// stw r8,1332(r31)
	ctx.current_instruction = 0x881F91F4;
	REX_STORE_U32(ctx.r31.u32 + 1332, ctx.r8.u32);
	// stw r5,1344(r31)
	ctx.current_instruction = 0x881F91F8;
	REX_STORE_U32(ctx.r31.u32 + 1344, ctx.r5.u32);
	// stw r4,584(r31)
	ctx.current_instruction = 0x881F91FC;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r4.u32);
	// stw r10,1352(r31)
	ctx.current_instruction = 0x881F9200;
	REX_STORE_U32(ctx.r31.u32 + 1352, ctx.r10.u32);
	// stw r3,600(r31)
	ctx.current_instruction = 0x881F9204;
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r3.u32);
	// stw r6,604(r31)
	ctx.current_instruction = 0x881F9208;
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r6.u32);
	// stw r11,596(r31)
	ctx.current_instruction = 0x881F920C;
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r11,592(r31)
	ctx.current_instruction = 0x881F9210;
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
loc_881F9214:
	// lwz r10,1820(r1)
	ctx.current_instruction = 0x881F9214;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1820);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lbz r21,80(r1)
	ctx.current_instruction = 0x881F921C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881F9220;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881f89d4
	if (ctx.cr6.lt) goto loc_881F89D4;
loc_881F922C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r26)
	ctx.current_instruction = 0x881F9234;
	REX_STORE_U32(ctx.r26.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E9C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821E9C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E9C8;
	ctx.current_instruction = 0x8821E9C8;
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x8821E9C8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r5,1
	ctx.r5.s64 = 1;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r8,16
	ctx.r8.s64 = 16;
	// slw r7,r5,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x8821eb0c
	if (!ctx.cr6.eq) goto loc_8821EB0C;
	// lvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821ebf8
	if (!ctx.cr6.gt) goto loc_8821EBF8;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8821EA58:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v12,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lvx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v8,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v8,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v30,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v29,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v28,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v6,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vadduhm v26,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v25,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v12,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vpkshus128 v55,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsrah v24,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvewx128 v55,r0,r10
	ctx.current_instruction = 0x8821EAE8;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r10,r31
	ctx.current_instruction = 0x8821EAEC;
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r6
	ctx.current_instruction = 0x8821EAF0;
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r5
	ctx.current_instruction = 0x8821EAF4;
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// blt cr6,0x8821ea58
	if (ctx.cr6.lt) goto loc_8821EA58;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8821EB04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8821EB0C:
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
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
	// ble cr6,0x8821ebf8
	if (!ctx.cr6.gt) goto loc_8821EBF8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821EB5C:
	// vadduhm v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v7,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor128 v45,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// vslh v6,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// vadduhm v31,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm128 v6,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vadduhm v30,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vor128 v1,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vadduhm v29,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v25,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v6,v29,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v3,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsrah v23,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvx128 v44,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8821eb5c
	if (ctx.cr6.lt) goto loc_8821EB5C;
loc_8821EBF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8821EBFC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882232F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882232F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882232F8;
	ctx.current_instruction = 0x882232F8;
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
	// b 0x882220c0
	sub_882220C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223580) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88223580;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88223580) {
			switch (rex_dispatch_address) {
				case 0x88223588:
				case 0x88223B08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223580;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88223588: goto loc_88223588;
		case 0x88223B08: goto loc_88223B08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88223588;
	__savegprlr_14(ctx, base);
loc_88223588:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x88223588;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	ctx.current_instruction = 0x88223590;
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	ctx.current_instruction = 0x88223598;
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
	ctx.current_instruction = 0x882235AC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88223a30
	if (ctx.cr6.eq) goto loc_88223A30;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x8822386c
	if (ctx.cr6.eq) goto loc_8822386C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x882237f8
	if (!ctx.cr6.gt) goto loc_882237F8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x882235D4;
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
loc_88223620:
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
	ctx.current_instruction = 0x8822363C;
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
	// bdnz 0x88223620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88223620;
	// lwz r28,1068(r1)
	ctx.current_instruction = 0x882237F0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x882237F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_882237F8:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88223af0
	if (!ctx.cr6.gt) goto loc_88223AF0;
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
loc_8822382C:
	// lbzx r6,r29,r11
	ctx.current_instruction = 0x8822382C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x88223830;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	ctx.current_instruction = 0x88223838;
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
	ctx.current_instruction = 0x88223858;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ctx.current_instruction = 0x88223860;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8822382c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822382C;
	// b 0x88223af0
	goto loc_88223AF0;
loc_8822386C:
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
loc_882239F0:
	// lbzx r6,r10,r5
	ctx.current_instruction = 0x882239F0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ctx.current_instruction = 0x882239F4;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	ctx.current_instruction = 0x882239F8;
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
	ctx.current_instruction = 0x88223A1C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88223A24;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882239f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882239F0;
	// b 0x88223af0
	goto loc_88223AF0;
loc_88223A30:
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
loc_88223AF0:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.current_instruction = 0x88223AF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88222bc8
	ctx.lr = 0x88223B08;
	sub_88222BC8(ctx, base);
loc_88223B08:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

