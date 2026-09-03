#include "forzahorizon2_funcs.41.h"

DEFINE_REX_FUNC(sub_880503C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880503C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880503C0;
	ctx.current_instruction = 0x880503C0;
	// b 0x88055b90
	sub_88055B90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88050450) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050450);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050450;
	ctx.current_instruction = 0x88050450;
	// b 0x880569d8
	sub_880569D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restgprlr_30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880508A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x880508A0;
	ctx.current_instruction = 0x880508A0;
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

DEFINE_REX_FUNC(sub_88050CD0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050CD0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050CD0;
	ctx.current_instruction = 0x88050CD0;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x88052218
	sub_88052218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88051170) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88051170);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051170;
	ctx.current_instruction = 0x88051170;
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88051188
	if (!ctx.cr6.eq) goto loc_88051188;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x88050f88
	sub_88050F88(ctx, base);
	return;
loc_88051188:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880521CC) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880521CC;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880521CC) {
			switch (rex_dispatch_address) {
				case 0x88052200:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880521CC;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052200: goto loc_88052200;
		default: break;
	}
	// std r30,-8(r1)
	ctx.current_instruction = 0x880521CC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	ctx.current_instruction = 0x880521D4;
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880521D8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// b 0x880521f8
	goto loc_880521F8;
loc_880521F8:
	// lwz r3,80(r30)
	ctx.current_instruction = 0x880521F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x88243660
	ctx.lr = 0x88052200;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_88052200:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x88052200;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.current_instruction = 0x88052204;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.current_instruction = 0x88052208;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052FC8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88052FC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052FC8;
	ctx.current_instruction = 0x88052FC8;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24328(r10)
	ctx.current_instruction = 0x88052FD0;
	REX_STORE_U32(ctx.r10.u32 + 24328, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88055B70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88055B70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88055B70;
	ctx.current_instruction = 0x88055B70;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88055B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88055B74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88056DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88056DC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88056DC0) {
			switch (rex_dispatch_address) {
				case 0x88056DFC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88056DC0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88056DFC: goto loc_88056DFC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88056DC4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88056DC8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056de8
	if (!ctx.cr6.eq) goto loc_88056DE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88056DDC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88056DE8:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88056DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88056DF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88056E04;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057AA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057AA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057AA8;
	ctx.current_instruction = 0x88057AA8;
	// stw r4,56(r3)
	ctx.current_instruction = 0x88057AA8;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057BD0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057BD0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057BD0;
	ctx.current_instruction = 0x88057BD0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880586C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880586C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880586C8;
	ctx.current_instruction = 0x880586C8;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88058830) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88058830;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88058830) {
			switch (rex_dispatch_address) {
				case 0x88058848:
				case 0x8805885C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058830;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88058848: goto loc_88058848;
		case 0x8805885C: goto loc_8805885C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88058834;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88058838;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805883C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880570d8
	ctx.lr = 0x88058848;
	sub_880570D8(ctx, base);
loc_88058848:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8200
	ctx.r10.s64 = ctx.r11.s64 + 8200;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88058854;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x880586d8
	ctx.lr = 0x8805885C;
	sub_880586D8(ctx, base);
loc_8805885C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88058864;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805886C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059A10) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059A10);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059A10;
	ctx.current_instruction = 0x88059A10;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059CD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059CD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059CD0) {
			switch (rex_dispatch_address) {
				case 0x88059CE8:
				case 0x88059CF0:
				case 0x88059CF8:
				case 0x88059D00:
				case 0x88059D14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059CD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059CE8: goto loc_88059CE8;
		case 0x88059CF0: goto loc_88059CF0;
		case 0x88059CF8: goto loc_88059CF8;
		case 0x88059D00: goto loc_88059D00;
		case 0x88059D14: goto loc_88059D14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88059CD4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88059CD8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88059CDC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x88059CE8;
	sub_88061FB8(ctx, base);
loc_88059CE8:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x88062268
	ctx.lr = 0x88059CF0;
	sub_88062268(ctx, base);
loc_88059CF0:
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x88057970
	ctx.lr = 0x88059CF8;
	sub_88057970(ctx, base);
loc_88059CF8:
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x880654b0
	ctx.lr = 0x88059D00;
	sub_880654B0(ctx, base);
loc_88059D00:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8312
	ctx.r10.s64 = ctx.r11.s64 + 8312;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88059D0C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88062320
	ctx.lr = 0x88059D14;
	sub_88062320(ctx, base);
loc_88059D14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,520(r31)
	ctx.current_instruction = 0x88059D20;
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r9,508(r31)
	ctx.current_instruction = 0x88059D24;
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,524(r31)
	ctx.current_instruction = 0x88059D2C;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	ctx.current_instruction = 0x88059D30;
	REX_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	ctx.current_instruction = 0x88059D34;
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	ctx.current_instruction = 0x88059D38;
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r8,544(r31)
	ctx.current_instruction = 0x88059D3C;
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059D44;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88059D4C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805B888) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B888;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B888) {
			switch (rex_dispatch_address) {
				case 0x8805B890:
				case 0x8805B8CC:
				case 0x8805B8FC:
				case 0x8805B92C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B888;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805B890: goto loc_8805B890;
		case 0x8805B8CC: goto loc_8805B8CC;
		case 0x8805B8FC: goto loc_8805B8FC;
		case 0x8805B92C: goto loc_8805B92C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805B890;
	__savegprlr_28(ctx, base);
loc_8805B890:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805B890;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805b8d4
	if (ctx.cr6.eq) goto loc_8805B8D4;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x8805B8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b8cc
	if (ctx.cr6.eq) goto loc_8805B8CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B8BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B8C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B8CC:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x8805B8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805B8D0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8805B8D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8805b904
	if (ctx.cr6.eq) goto loc_8805B904;
	// lwz r11,48(r31)
	ctx.current_instruction = 0x8805B8DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b8fc
	if (ctx.cr6.eq) goto loc_8805B8FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B8F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B8FC:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x8805B8FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r29)
	ctx.current_instruction = 0x8805B900;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8805B904:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805b934
	if (ctx.cr6.eq) goto loc_8805B934;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8805B90C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b92c
	if (ctx.cr6.eq) goto loc_8805B92C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B91C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B920;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B92C:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8805B92C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,0(r28)
	ctx.current_instruction = 0x8805B930;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8805B934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C600) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C600;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C600) {
			switch (rex_dispatch_address) {
				case 0x8805C608:
				case 0x8805C63C:
				case 0x8805C684:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C600;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C608: goto loc_8805C608;
		case 0x8805C63C: goto loc_8805C63C;
		case 0x8805C684: goto loc_8805C684;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8805C608;
	__savegprlr_24(ctx, base);
loc_8805C608:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8805C608;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805C60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805C624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805C63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C63C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805c684
	if (ctx.cr6.lt) goto loc_8805C684;
	// lwz r11,120(r31)
	ctx.current_instruction = 0x8805C644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r29,44(r31)
	ctx.current_instruction = 0x8805C64C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// std r30,56(r31)
	ctx.current_instruction = 0x8805C658;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// std r30,88(r31)
	ctx.current_instruction = 0x8805C65C;
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r10,120(r31)
	ctx.current_instruction = 0x8805C664;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r28,64(r31)
	ctx.current_instruction = 0x8805C66C;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r28.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8805C674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,116(r9)
	ctx.current_instruction = 0x8805C678;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805C684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C684:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880603B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880603B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880603B8;
	ctx.current_instruction = 0x880603B8;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x880603B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// lis r6,12849
	ctx.r6.s64 = 842072064;
	// lis r5,14677
	ctx.r5.s64 = 961871872;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x880603D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ori r7,r10,13385
	ctx.r7.u64 = ctx.r10.u64 | 13385;
	// ori r6,r6,22105
	ctx.r6.u64 = ctx.r6.u64 | 22105;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r4,r10,12592
	ctx.r4.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r4,r10,21846
	ctx.r4.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
loc_880604B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880604B8:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880604B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r10)
	ctx.current_instruction = 0x880604BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880604E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604f0
	if (ctx.cr6.eq) goto loc_880604F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88060514
	if (!ctx.cr6.eq) goto loc_88060514;
loc_880604F0:
	// lhz r9,14(r9)
	ctx.current_instruction = 0x880604F0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x880604b0
	if (!ctx.cr6.eq) goto loc_880604B0;
loc_88060514:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88060524
	if (!ctx.cr6.eq) goto loc_88060524;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88060524:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x88060548
	if (!ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88060548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88064A10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88064A10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88064A10) {
			switch (rex_dispatch_address) {
				case 0x88064A60:
				case 0x88064AAC:
				case 0x88064AC0:
				case 0x88064ADC:
				case 0x88064AF0:
				case 0x88064AF4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88064A10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88064A60: goto loc_88064A60;
		case 0x88064AAC: goto loc_88064AAC;
		case 0x88064AC0: goto loc_88064AC0;
		case 0x88064ADC: goto loc_88064ADC;
		case 0x88064AF0: goto loc_88064AF0;
		case 0x88064AF4: goto loc_88064AF4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88064A14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88064A18;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88064A1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88064A20;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r1)
	ctx.current_instruction = 0x88064A30;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88064A34;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,80(r1)
	ctx.current_instruction = 0x88064A38;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88064A3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x88064a4c
	if (!ctx.cr6.eq) goto loc_88064A4C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x88064af4
	goto loc_88064AF4;
loc_88064A4C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x88064A50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x880cb758
	ctx.lr = 0x88064A60;
	sub_880CB758(ctx, base);
loc_88064A60:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	ctx.r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88064ae4
	if (ctx.cr6.eq) goto loc_88064AE4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
loc_88064A78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88064A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88064A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064ac8
	if (!ctx.cr6.eq) goto loc_88064AC8;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x88064A90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064ac8
	if (!ctx.cr6.eq) goto loc_88064AC8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x88064AA0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.current_instruction = 0x88064AA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x880cb730
	ctx.lr = 0x88064AAC;
	sub_880CB730(ctx, base);
loc_88064AAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x88064AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.current_instruction = 0x88064AB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880cc918
	ctx.lr = 0x88064AC0;
	sub_880CC918(ctx, base);
loc_88064AC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
loc_88064AC8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x88064ACC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88064AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x88064ADC;
	sub_880CB7C0(ctx, base);
loc_88064ADC:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88064a78
	if (!ctx.cr6.eq) goto loc_88064A78;
loc_88064AE4:
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88064AE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.current_instruction = 0x88064AE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x880cb828
	ctx.lr = 0x88064AF0;
	sub_880CB828(ctx, base);
loc_88064AF0:
	// bl 0x880638b8
	ctx.lr = 0x88064AF4;
	sub_880638B8(ctx, base);
loc_88064AF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88064AF8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88064B00;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88064B04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067738) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067738);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067738;
	ctx.current_instruction = 0x88067738;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88067738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x88067744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88067A80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067A80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067A80) {
			switch (rex_dispatch_address) {
				case 0x88067AB4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067A80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067AB4: goto loc_88067AB4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88067A84;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067A88;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88067A8C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.current_instruction = 0x88067A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,48(r3)
	ctx.current_instruction = 0x88067A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88067A9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.current_instruction = 0x88067AA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88067AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88067AB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88067ABC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88067AC4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88068260) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88068260);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068260;
	ctx.current_instruction = 0x88068260;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.current_instruction = 0x8806826C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,76(r11)
	ctx.current_instruction = 0x88068270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88068EA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068EA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068EA0) {
			switch (rex_dispatch_address) {
				case 0x88068EE0:
				case 0x88068EF8:
				case 0x88068F1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068EA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88068EE0: goto loc_88068EE0;
		case 0x88068EF8: goto loc_88068EF8;
		case 0x88068F1C: goto loc_88068F1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88068EA4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88068EA8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88068EAC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88068EB0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x88068EB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x88068EC0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x88068ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068EE0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88068EE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88068f38
	if (ctx.cr6.eq) goto loc_88068F38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88057da8
	ctx.lr = 0x88068EF8;
	sub_88057DA8(ctx, base);
loc_88068EF8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88068EF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88068f1c
	if (ctx.cr6.eq) goto loc_88068F1C;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88068F08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88068F10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88068F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88068F24;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88068F2C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88068F30;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88068F38:
	// stw r30,0(r31)
	ctx.current_instruction = 0x88068F38;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x88068f20
	goto loc_88068F20;
}

DEFINE_REX_FUNC(sub_8806BF68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806BF68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806BF68;
	ctx.current_instruction = 0x8806BF68;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806C088) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C088);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C088;
	ctx.current_instruction = 0x8806C088;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C0A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C0A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C0A8;
	ctx.current_instruction = 0x8806C0A8;
	// std r4,56(r3)
	ctx.current_instruction = 0x8806C0A8;
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r4.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C140) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806C140;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806C140) {
			switch (rex_dispatch_address) {
				case 0x8806C148:
				case 0x8806C170:
				case 0x8806C180:
				case 0x8806C194:
				case 0x8806C1B0:
				case 0x8806C1F0:
				case 0x8806C210:
				case 0x8806C21C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C140;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806C148: goto loc_8806C148;
		case 0x8806C170: goto loc_8806C170;
		case 0x8806C180: goto loc_8806C180;
		case 0x8806C194: goto loc_8806C194;
		case 0x8806C1B0: goto loc_8806C1B0;
		case 0x8806C1F0: goto loc_8806C1F0;
		case 0x8806C210: goto loc_8806C210;
		case 0x8806C21C: goto loc_8806C21C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8806C148;
	__savegprlr_28(ctx, base);
loc_8806C148:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8806C148;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8806C150;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806c170
	if (ctx.cr6.eq) goto loc_8806C170;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x88050358
	ctx.lr = 0x8806C170;
	sub_88050358(ctx, base);
loc_8806C170:
	// lwz r3,88(r31)
	ctx.current_instruction = 0x8806C170;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806c180
	if (ctx.cr6.eq) goto loc_8806C180;
	// bl 0x881ec570
	ctx.lr = 0x8806C180;
	sub_881EC570(ctx, base);
loc_8806C180:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806C180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8806C188;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806C194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806C194:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8806c1d4
	if (!ctx.cr6.eq) goto loc_8806C1D4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x88050340
	ctx.lr = 0x8806C1B0;
	sub_88050340(ctx, base);
loc_8806C1B0:
	// stw r3,44(r31)
	ctx.current_instruction = 0x8806C1B0;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806c1c4
	if (ctx.cr6.eq) goto loc_8806C1C4;
	// stw r3,48(r31)
	ctx.current_instruction = 0x8806C1BC;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x8806c1d8
	goto loc_8806C1D8;
loc_8806C1C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8806C1D4:
	// stw r29,48(r31)
	ctx.current_instruction = 0x8806C1D4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_8806C1D8:
	// stw r30,52(r31)
	ctx.current_instruction = 0x8806C1D8;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x881ecda0
	ctx.lr = 0x8806C1F0;
	sub_881ECDA0(ctx, base);
loc_8806C1F0:
	// stw r3,88(r31)
	ctx.current_instruction = 0x8806C1F0;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8806c228
	if (!ctx.cr6.eq) goto loc_8806C228;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806C1FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8806C204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806C210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806C210:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806bfa8
	ctx.lr = 0x8806C21C;
	sub_8806BFA8(ctx, base);
loc_8806C21C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8806C228:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806F670) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806F670);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F670;
	ctx.current_instruction = 0x8806F670;
	// addi r11,r4,5003
	ctx.r11.s64 = ctx.r4.s64 + 5003;
	// addi r10,r4,5006
	ctx.r10.s64 = ctx.r4.s64 + 5006;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.current_instruction = 0x8806F680;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r6,r8,r3
	ctx.current_instruction = 0x8806F684;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r5,0(r7)
	ctx.current_instruction = 0x8806F688;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,20140(r3)
	ctx.current_instruction = 0x8806F68C;
	REX_STORE_U32(ctx.r3.u32 + 20140, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.current_instruction = 0x8806F690;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,20144(r3)
	ctx.current_instruction = 0x8806F694;
	REX_STORE_U32(ctx.r3.u32 + 20144, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.current_instruction = 0x8806F698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,20148(r3)
	ctx.current_instruction = 0x8806F69C;
	REX_STORE_U32(ctx.r3.u32 + 20148, ctx.r11.u32);
	// lwz r10,16(r7)
	ctx.current_instruction = 0x8806F6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,20132(r3)
	ctx.current_instruction = 0x8806F6A4;
	REX_STORE_U32(ctx.r3.u32 + 20132, ctx.r10.u32);
	// lwz r9,20(r7)
	ctx.current_instruction = 0x8806F6A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r9,20136(r3)
	ctx.current_instruction = 0x8806F6AC;
	REX_STORE_U32(ctx.r3.u32 + 20136, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.current_instruction = 0x8806F6B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,20164(r3)
	ctx.current_instruction = 0x8806F6B4;
	REX_STORE_U32(ctx.r3.u32 + 20164, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.current_instruction = 0x8806F6B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,20168(r3)
	ctx.current_instruction = 0x8806F6BC;
	REX_STORE_U32(ctx.r3.u32 + 20168, ctx.r7.u32);
	// lwz r5,8(r6)
	ctx.current_instruction = 0x8806F6C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,20172(r3)
	ctx.current_instruction = 0x8806F6C4;
	REX_STORE_U32(ctx.r3.u32 + 20172, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.current_instruction = 0x8806F6C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,20176(r3)
	ctx.current_instruction = 0x8806F6CC;
	REX_STORE_U32(ctx.r3.u32 + 20176, ctx.r4.u32);
	// lwz r11,16(r6)
	ctx.current_instruction = 0x8806F6D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,20152(r3)
	ctx.current_instruction = 0x8806F6D4;
	REX_STORE_U32(ctx.r3.u32 + 20152, ctx.r11.u32);
	// lwz r10,20(r6)
	ctx.current_instruction = 0x8806F6D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,20156(r3)
	ctx.current_instruction = 0x8806F6DC;
	REX_STORE_U32(ctx.r3.u32 + 20156, ctx.r10.u32);
	// lwz r9,24(r6)
	ctx.current_instruction = 0x8806F6E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r9,20160(r3)
	ctx.current_instruction = 0x8806F6E4;
	REX_STORE_U32(ctx.r3.u32 + 20160, ctx.r9.u32);
	// lwz r8,28(r6)
	ctx.current_instruction = 0x8806F6E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r8,20180(r3)
	ctx.current_instruction = 0x8806F6EC;
	REX_STORE_U32(ctx.r3.u32 + 20180, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88070650) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88070650);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88070650;
	ctx.current_instruction = 0x88070650;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x88070650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30679
	ctx.r11.s64 = -2010578944;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// addi r9,r11,16384
	ctx.r9.s64 = ctx.r11.s64 + 16384;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x88070668;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88070FC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88070FC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88070FC8) {
			switch (rex_dispatch_address) {
				case 0x88070FD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88070FC8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88070FD0: goto loc_88070FD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88070FD0;
	__savegprlr_24(ctx, base);
loc_88070FD0:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// stw r11,56(r4)
	ctx.current_instruction = 0x88070FE0;
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r11,60(r4)
	ctx.current_instruction = 0x88070FE4;
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lfd f0,1488(r10)
	ctx.current_instruction = 0x88070FEC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// stw r11,64(r4)
	ctx.current_instruction = 0x88070FF0;
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// stfd f0,0(r4)
	ctx.current_instruction = 0x88070FF4;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stfd f0,8(r4)
	ctx.current_instruction = 0x88070FFC;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.f0.u64);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stfd f0,16(r4)
	ctx.current_instruction = 0x88071004;
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.f0.u64);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfd f0,24(r4)
	ctx.current_instruction = 0x8807100C;
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.f0.u64);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfd f0,48(r4)
	ctx.current_instruction = 0x88071014;
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.f0.u64);
	// lwz r7,724(r3)
	ctx.current_instruction = 0x88071018;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r10,720(r3)
	ctx.current_instruction = 0x8807101C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r31,r7,r10
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lfd f9,12224(r8)
	ctx.current_instruction = 0x88071024;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r8.u32 + 12224);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lfd f8,12232(r9)
	ctx.current_instruction = 0x8807102C;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r9.u32 + 12232);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// blt cr6,0x8807125c
	if (ctx.cr6.lt) goto loc_8807125C;
	// addi r7,r31,-3
	ctx.r7.s64 = ctx.r31.s64 + -3;
	// addi r8,r6,6
	ctx.r8.s64 = ctx.r6.s64 + 6;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// subf r30,r5,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_88071048:
	// lhz r10,-2(r9)
	ctx.current_instruction = 0x88071048;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x88071060
	if (!ctx.cr6.eq) goto loc_88071060;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x880710c8
	goto loc_880710C8;
loc_88071060:
	// srawi r25,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 31;
	// lhz r26,-6(r8)
	ctx.current_instruction = 0x88071064;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + -6);
	// xor r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r25.u64;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// srawi r24,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 31;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// std r10,-144(r1)
	ctx.current_instruction = 0x88071080;
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r10.u64);
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r10,-136(r1)
	ctx.current_instruction = 0x8807108C;
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r10.u64);
	// lfd f6,-136(r1)
	ctx.current_instruction = 0x88071090;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f10,-144(r1)
	ctx.current_instruction = 0x88071094;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmadd f13,f7,f7,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64);
	// fmadd f11,f10,f10,f11
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// ble cr6,0x880710bc
	if (!ctx.cr6.gt) goto loc_880710BC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_880710BC:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x880710c8
	if (!ctx.cr6.gt) goto loc_880710C8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880710C8:
	// lhz r10,0(r9)
	ctx.current_instruction = 0x880710C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x880710e0
	if (!ctx.cr6.eq) goto loc_880710E0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x88071148
	goto loc_88071148;
loc_880710E0:
	// lhzx r26,r30,r9
	ctx.current_instruction = 0x880710E0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// srawi r25,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 31;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// xor r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r25.u64;
	// srawi r24,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 31;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// std r10,-128(r1)
	ctx.current_instruction = 0x88071104;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r10.u64);
	// lfd f10,-128(r1)
	ctx.current_instruction = 0x88071108;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// std r10,-120(r1)
	ctx.current_instruction = 0x88071114;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r10.u64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadd f13,f7,f7,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// lfd f6,-120(r1)
	ctx.current_instruction = 0x88071124;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmadd f11,f10,f10,f11
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x8807113c
	if (!ctx.cr6.gt) goto loc_8807113C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8807113C:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x88071148
	if (!ctx.cr6.gt) goto loc_88071148;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88071148:
	// lhz r10,2(r9)
	ctx.current_instruction = 0x88071148;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x88071160
	if (!ctx.cr6.eq) goto loc_88071160;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x880711c8
	goto loc_880711C8;
loc_88071160:
	// lhz r26,-2(r8)
	ctx.current_instruction = 0x88071160;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// srawi r25,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 31;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// xor r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r25.u64;
	// srawi r24,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 31;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// std r10,-112(r1)
	ctx.current_instruction = 0x88071184;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r10,-104(r1)
	ctx.current_instruction = 0x8807118C;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r10.u64);
	// lfd f10,-112(r1)
	ctx.current_instruction = 0x88071190;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f6,-104(r1)
	ctx.current_instruction = 0x88071198;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadd f13,f7,f7,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmadd f11,f10,f10,f11
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x880711bc
	if (!ctx.cr6.gt) goto loc_880711BC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_880711BC:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x880711c8
	if (!ctx.cr6.gt) goto loc_880711C8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880711C8:
	// lhz r10,4(r9)
	ctx.current_instruction = 0x880711C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x880711e0
	if (!ctx.cr6.eq) goto loc_880711E0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x88071248
	goto loc_88071248;
loc_880711E0:
	// lhz r26,0(r8)
	ctx.current_instruction = 0x880711E0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// srawi r25,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 31;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// xor r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r25.u64;
	// srawi r24,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 31;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// std r10,-96(r1)
	ctx.current_instruction = 0x88071204;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r10,-88(r1)
	ctx.current_instruction = 0x8807120C;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// lfd f10,-96(r1)
	ctx.current_instruction = 0x88071210;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f6,-88(r1)
	ctx.current_instruction = 0x88071218;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadd f13,f7,f7,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmadd f11,f10,f10,f11
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x8807123c
	if (!ctx.cr6.gt) goto loc_8807123C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8807123C:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x88071248
	if (!ctx.cr6.gt) goto loc_88071248;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88071248:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88071048
	if (ctx.cr6.lt) goto loc_88071048;
loc_8807125C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x88071300
	if (!ctx.cr6.lt) goto loc_88071300;
	// subf r8,r11,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88071278:
	// lhz r11,0(r10)
	ctx.current_instruction = 0x88071278;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x88071290
	if (!ctx.cr6.eq) goto loc_88071290;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x880712f8
	goto loc_880712F8;
loc_88071290:
	// lhzx r8,r9,r10
	ctx.current_instruction = 0x88071290;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// xor r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// xor r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// std r6,-88(r1)
	ctx.current_instruction = 0x880712B4;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r6.u64);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-96(r1)
	ctx.current_instruction = 0x880712BC;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r11.u64);
	// lfd f10,-88(r1)
	ctx.current_instruction = 0x880712C0;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f6,-96(r1)
	ctx.current_instruction = 0x880712C8;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadd f13,f7,f7,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmadd f11,f10,f10,f11
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x880712ec
	if (!ctx.cr6.gt) goto loc_880712EC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_880712EC:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x880712f8
	if (!ctx.cr6.gt) goto loc_880712F8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880712F8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x88071278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88071278;
loc_88071300:
	// subf. r11,r29,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880713d8
	if (ctx.cr0.eq) goto loc_880713D8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,-88(r1)
	ctx.current_instruction = 0x88071310;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r11.u64);
	// lfd f10,-88(r1)
	ctx.current_instruction = 0x88071314;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// extsw r9,r28
	ctx.r9.s64 = ctx.r28.s32;
	// lfd f10,8624(r10)
	ctx.current_instruction = 0x88071320;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// fdiv f8,f10,f9
	ctx.f8.f64 = ctx.f10.f64 / ctx.f9.f64;
	// std r9,-88(r1)
	ctx.current_instruction = 0x8807132C;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r9.u64);
	// lfd f7,-88(r1)
	ctx.current_instruction = 0x88071330;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// std r8,-88(r1)
	ctx.current_instruction = 0x88071334;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r8.u64);
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f4,0(r4)
	ctx.current_instruction = 0x8807133C;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f4.u64);
	// fmul f3,f8,f12
	ctx.f3.f64 = ctx.f8.f64 * ctx.f12.f64;
	// stfd f3,8(r4)
	ctx.current_instruction = 0x88071344;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.f3.u64);
	// fmul f1,f4,f4
	ctx.f1.f64 = ctx.f4.f64 * ctx.f4.f64;
	// fmul f0,f3,f3
	ctx.f0.f64 = ctx.f3.f64 * ctx.f3.f64;
	// lfd f6,-88(r1)
	ctx.current_instruction = 0x88071350;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmsub f13,f8,f13,f1
	ctx.f13.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f1.f64);
	// stfd f13,16(r4)
	ctx.current_instruction = 0x8807135C;
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.f13.u64);
	// fmsub f12,f8,f11,f0
	ctx.f12.f64 = std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f0.f64);
	// stfd f12,24(r4)
	ctx.current_instruction = 0x88071364;
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.f12.u64);
	// lwz r7,724(r3)
	ctx.current_instruction = 0x88071368;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x8807136C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// std r11,-88(r1)
	ctx.current_instruction = 0x8807137C;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r11.u64);
	// lfd f11,-88(r1)
	ctx.current_instruction = 0x88071380;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fdiv f8,f5,f10
	ctx.f8.f64 = ctx.f5.f64 / ctx.f10.f64;
	// stfd f8,32(r4)
	ctx.current_instruction = 0x8807138C;
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.f8.u64);
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88071390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r9,724(r3)
	ctx.current_instruction = 0x88071394;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,-88(r1)
	ctx.current_instruction = 0x880713A0;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f7,-88(r1)
	ctx.current_instruction = 0x880713A4;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fdiv f5,f2,f6
	ctx.f5.f64 = ctx.f2.f64 / ctx.f6.f64;
	// stfd f5,40(r4)
	ctx.current_instruction = 0x880713B0;
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.f5.u64);
	// lwz r6,724(r3)
	ctx.current_instruction = 0x880713B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880713B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r3,r6,r5
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,-88(r1)
	ctx.current_instruction = 0x880713C4;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r11.u64);
	// lfd f4,-88(r1)
	ctx.current_instruction = 0x880713C8;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fdiv f2,f9,f3
	ctx.f2.f64 = ctx.f9.f64 / ctx.f3.f64;
	// stfd f2,48(r4)
	ctx.current_instruction = 0x880713D4;
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.f2.u64);
loc_880713D8:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807F9C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807F9C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807F9C0;
	ctx.current_instruction = 0x8807F9C0;
	// lwz r11,7868(r3)
	ctx.current_instruction = 0x8807F9C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807F9C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8807F9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.u64 = static_cast<uint64_t>(39) - ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,7944(r3)
	ctx.current_instruction = 0x8807F9E0;
	REX_STORE_U32(ctx.r3.u32 + 7944, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807f9f8
	if (!ctx.cr6.eq) goto loc_8807F9F8;
	// stw r9,8024(r3)
	ctx.current_instruction = 0x8807F9EC;
	REX_STORE_U32(ctx.r3.u32 + 8024, ctx.r9.u32);
	// stw r9,30584(r3)
	ctx.current_instruction = 0x8807F9F0;
	REX_STORE_U32(ctx.r3.u32 + 30584, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807F9F8:
	// lwz r8,2800(r3)
	ctx.current_instruction = 0x8807F9F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8807fa3c
	if (!ctx.cr6.eq) goto loc_8807FA3C;
	// lwz r10,7952(r3)
	ctx.current_instruction = 0x8807FA04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8807fa3c
	if (!ctx.cr6.gt) goto loc_8807FA3C;
	// lwz r10,676(r3)
	ctx.current_instruction = 0x8807FA10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// lwz r7,30480(r3)
	ctx.current_instruction = 0x8807FA14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 30480);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8807fa3c
	if (ctx.cr6.lt) goto loc_8807FA3C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,30472(r3)
	ctx.current_instruction = 0x8807FA24;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 30472);
	// std r11,-16(r1)
	ctx.current_instruction = 0x8807FA28;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8807FA2C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8807fb28
	if (ctx.cr6.gt) goto loc_8807FB28;
loc_8807FA3C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8807faa0
	if (!ctx.cr6.eq) goto loc_8807FAA0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,30456(r3)
	ctx.current_instruction = 0x8807FA48;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 30456);
	// lfd f12,30440(r3)
	ctx.current_instruction = 0x8807FA4C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r3.u32 + 30440);
	// fsub f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f0,12248(r11)
	ctx.current_instruction = 0x8807FA54;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12248);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8807fa6c
	if (!ctx.cr6.gt) goto loc_8807FA6C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8807FA6C:
	// stw r11,30516(r3)
	ctx.current_instruction = 0x8807FA6C;
	REX_STORE_U32(ctx.r3.u32 + 30516, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807fb00
	if (ctx.cr6.eq) goto loc_8807FB00;
	// lwz r10,672(r3)
	ctx.current_instruction = 0x8807FA78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r7,30480(r3)
	ctx.current_instruction = 0x8807FA7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 30480);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8807fb00
	if (!ctx.cr6.lt) goto loc_8807FB00;
	// lwz r11,30588(r3)
	ctx.current_instruction = 0x8807FA88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30588);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8807fa9c
	if (ctx.cr6.gt) goto loc_8807FA9C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8807FA9C:
	// stw r11,30588(r3)
	ctx.current_instruction = 0x8807FA9C;
	REX_STORE_U32(ctx.r3.u32 + 30588, ctx.r11.u32);
loc_8807FAA0:
	// lwz r11,7944(r3)
	ctx.current_instruction = 0x8807FAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7944);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,7952(r3)
	ctx.current_instruction = 0x8807FAA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// lwz r10,2192(r3)
	ctx.current_instruction = 0x8807FAAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2192);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lwz r7,7944(r3)
	ctx.current_instruction = 0x8807FAB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 7944);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,30584(r3)
	ctx.current_instruction = 0x8807FABC;
	REX_STORE_U32(ctx.r3.u32 + 30584, ctx.r9.u32);
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r9,8024(r3)
	ctx.current_instruction = 0x8807FAC4;
	REX_STORE_U32(ctx.r3.u32 + 8024, ctx.r9.u32);
	// stw r6,2192(r3)
	ctx.current_instruction = 0x8807FAC8;
	REX_STORE_U32(ctx.r3.u32 + 2192, ctx.r6.u32);
	// stw r5,7952(r3)
	ctx.current_instruction = 0x8807FACC;
	REX_STORE_U32(ctx.r3.u32 + 7952, ctx.r5.u32);
	// bne cr6,0x8807fafc
	if (!ctx.cr6.eq) goto loc_8807FAFC;
	// lwz r11,30516(r3)
	ctx.current_instruction = 0x8807FAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807fafc
	if (!ctx.cr6.eq) goto loc_8807FAFC;
	// lwz r11,672(r3)
	ctx.current_instruction = 0x8807FAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r10,30480(r3)
	ctx.current_instruction = 0x8807FAE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30480);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8807fafc
	if (ctx.cr6.lt) goto loc_8807FAFC;
	// lwz r11,30588(r3)
	ctx.current_instruction = 0x8807FAF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30588);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,30588(r3)
	ctx.current_instruction = 0x8807FAF8;
	REX_STORE_U32(ctx.r3.u32 + 30588, ctx.r11.u32);
loc_8807FAFC:
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807FB00:
	// lwz r10,7944(r3)
	ctx.current_instruction = 0x8807FB00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7944);
	// lwz r7,8004(r3)
	ctx.current_instruction = 0x8807FB04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8004);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8807fb28
	if (ctx.cr6.gt) goto loc_8807FB28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807faa0
	if (!ctx.cr6.eq) goto loc_8807FAA0;
	// lwz r11,672(r3)
	ctx.current_instruction = 0x8807FB18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r10,30480(r3)
	ctx.current_instruction = 0x8807FB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30480);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8807faa0
	if (ctx.cr6.lt) goto loc_8807FAA0;
loc_8807FB28:
	// lwz r11,30584(r3)
	ctx.current_instruction = 0x8807FB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30584);
	// lwz r10,30588(r3)
	ctx.current_instruction = 0x8807FB2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30588);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,30584(r3)
	ctx.current_instruction = 0x8807FB34;
	REX_STORE_U32(ctx.r3.u32 + 30584, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8807faa0
	if (ctx.cr6.gt) goto loc_8807FAA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8024(r3)
	ctx.current_instruction = 0x8807FB44;
	REX_STORE_U32(ctx.r3.u32 + 8024, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880854D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880854D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880854D8) {
			switch (rex_dispatch_address) {
				case 0x880854E0:
				case 0x8808553C:
				case 0x88085564:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880854D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880854E0: goto loc_880854E0;
		case 0x8808553C: goto loc_8808553C;
		case 0x88085564: goto loc_88085564;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880854E0;
	__savegprlr_25(ctx, base);
loc_880854E0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880854E0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x88085510
	if (!ctx.cr6.gt) goto loc_88085510;
loc_88085504:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88085510:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r29,0(r31)
	ctx.current_instruction = 0x8808551C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stb r29,1(r31)
	ctx.current_instruction = 0x88085520;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stb r11,2(r31)
	ctx.current_instruction = 0x88085528;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stb r10,3(r31)
	ctx.current_instruction = 0x88085530;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x880547a0
	ctx.lr = 0x8808553C;
	sub_880547A0(ctx, base);
loc_8808553C:
	// stw r30,0(r28)
	ctx.current_instruction = 0x8808553C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8808557c
	if (ctx.cr6.eq) goto loc_8808557C;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88085548;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,31
	ctx.r6.s64 = 31;
	// subf r5,r30,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88084e80
	ctx.lr = 0x88085564;
	sub_88084E80(ctx, base);
loc_88085564:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88085504
	if (!ctx.cr6.eq) goto loc_88085504;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8808556C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88085570;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x88085578;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8808557C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880896D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880896D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880896D8) {
			switch (rex_dispatch_address) {
				case 0x880896E0:
				case 0x880897B0:
				case 0x880897CC:
				case 0x880897EC:
				case 0x88089824:
				case 0x8808983C:
				case 0x88089874:
				case 0x8808988C:
				case 0x880898A8:
				case 0x8808993C:
				case 0x88089954:
				case 0x88089974:
				case 0x880899B0:
				case 0x880899C8:
				case 0x88089A04:
				case 0x88089A1C:
				case 0x88089AF8:
				case 0x88089B10:
				case 0x88089B30:
				case 0x88089B68:
				case 0x88089B80:
				case 0x88089BB8:
				case 0x88089BD0:
				case 0x88089C9C:
				case 0x88089CB4:
				case 0x88089CD4:
				case 0x88089D0C:
				case 0x88089D24:
				case 0x88089D5C:
				case 0x88089D74:
				case 0x88089E44:
				case 0x88089E5C:
				case 0x88089E7C:
				case 0x88089EB4:
				case 0x88089ECC:
				case 0x88089F04:
				case 0x88089F1C:
				case 0x88089FFC:
				case 0x8808A010:
				case 0x8808A030:
				case 0x8808A06C:
				case 0x8808A084:
				case 0x8808A0C0:
				case 0x8808A0D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880896D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880896E0: goto loc_880896E0;
		case 0x880897B0: goto loc_880897B0;
		case 0x880897CC: goto loc_880897CC;
		case 0x880897EC: goto loc_880897EC;
		case 0x88089824: goto loc_88089824;
		case 0x8808983C: goto loc_8808983C;
		case 0x88089874: goto loc_88089874;
		case 0x8808988C: goto loc_8808988C;
		case 0x880898A8: goto loc_880898A8;
		case 0x8808993C: goto loc_8808993C;
		case 0x88089954: goto loc_88089954;
		case 0x88089974: goto loc_88089974;
		case 0x880899B0: goto loc_880899B0;
		case 0x880899C8: goto loc_880899C8;
		case 0x88089A04: goto loc_88089A04;
		case 0x88089A1C: goto loc_88089A1C;
		case 0x88089AF8: goto loc_88089AF8;
		case 0x88089B10: goto loc_88089B10;
		case 0x88089B30: goto loc_88089B30;
		case 0x88089B68: goto loc_88089B68;
		case 0x88089B80: goto loc_88089B80;
		case 0x88089BB8: goto loc_88089BB8;
		case 0x88089BD0: goto loc_88089BD0;
		case 0x88089C9C: goto loc_88089C9C;
		case 0x88089CB4: goto loc_88089CB4;
		case 0x88089CD4: goto loc_88089CD4;
		case 0x88089D0C: goto loc_88089D0C;
		case 0x88089D24: goto loc_88089D24;
		case 0x88089D5C: goto loc_88089D5C;
		case 0x88089D74: goto loc_88089D74;
		case 0x88089E44: goto loc_88089E44;
		case 0x88089E5C: goto loc_88089E5C;
		case 0x88089E7C: goto loc_88089E7C;
		case 0x88089EB4: goto loc_88089EB4;
		case 0x88089ECC: goto loc_88089ECC;
		case 0x88089F04: goto loc_88089F04;
		case 0x88089F1C: goto loc_88089F1C;
		case 0x88089FFC: goto loc_88089FFC;
		case 0x8808A010: goto loc_8808A010;
		case 0x8808A030: goto loc_8808A030;
		case 0x8808A06C: goto loc_8808A06C;
		case 0x8808A084: goto loc_8808A084;
		case 0x8808A0C0: goto loc_8808A0C0;
		case 0x8808A0D8: goto loc_8808A0D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880896E0;
	__savegprlr_14(ctx, base);
loc_880896E0:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x880896E0;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880896E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lwz r22,396(r1)
	ctx.current_instruction = 0x880896EC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	ctx.current_instruction = 0x880896F4;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r6,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r22.u64;
	// stw r9,340(r1)
	ctx.current_instruction = 0x88089700;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r19,476(r1)
	ctx.current_instruction = 0x88089708;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r28,12(r11)
	ctx.current_instruction = 0x8808970C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r25,0(r11)
	ctx.current_instruction = 0x88089714;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// lwz r8,372(r1)
	ctx.current_instruction = 0x8808971C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lwz r24,468(r1)
	ctx.current_instruction = 0x88089728;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lwz r23,460(r1)
	ctx.current_instruction = 0x88089730;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r18,452(r1)
	ctx.current_instruction = 0x88089734;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r30,412(r1)
	ctx.current_instruction = 0x8808973C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r20,388(r1)
	ctx.current_instruction = 0x88089744;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r17,r10,6848
	ctx.r17.s64 = ctx.r10.s64 + 6848;
	// stw r7,324(r1)
	ctx.current_instruction = 0x8808974C;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stw r28,104(r1)
	ctx.current_instruction = 0x88089750;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x88089754;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x88089758;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r3,108(r1)
	ctx.current_instruction = 0x8808975C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// beq cr6,0x88089aa8
	if (ctx.cr6.eq) goto loc_88089AA8;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089764;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// subf r11,r4,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r4.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x880898cc
	if (ctx.cr6.eq) goto loc_880898CC;
	// lwz r9,436(r1)
	ctx.current_instruction = 0x88089778;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880897b4
	if (!ctx.cr6.eq) goto loc_880897B4;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089794;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r26,16
	ctx.r26.s64 = 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r26,84(r1)
	ctx.current_instruction = 0x880897A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880897B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880897B0:
	// b 0x880897d0
	goto loc_880897D0;
loc_880897B4:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880897B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880897BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880897CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880897CC:
	// li r26,16
	ctx.r26.s64 = 16;
loc_880897D0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880897EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880897EC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880897EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089840
	if (ctx.cr6.eq) goto loc_88089840;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089804;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089824;
	sub_8810B7F8(ctx, base);
loc_88089824:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x8808983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808983C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089840:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x88089840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089890
	if (ctx.cr6.eq) goto loc_88089890;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089854;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x8808985C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089874;
	sub_8810B7F8(ctx, base);
loc_88089874:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8808988C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808988C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089890:
	// lwz r11,444(r1)
	ctx.current_instruction = 0x88089890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r18,-1
	ctx.r5.s64 = ctx.r18.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880898A8;
	sub_88085820(ctx, base);
loc_880898A8:
	// lwz r21,364(r1)
	ctx.current_instruction = 0x880898A8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880898d4
	if (!ctx.cr6.lt) goto loc_880898D4;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,96(r1)
	ctx.current_instruction = 0x880898C0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880898C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x880898d4
	goto loc_880898D4;
loc_880898CC:
	// lwz r21,364(r1)
	ctx.current_instruction = 0x880898CC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r26,16
	ctx.r26.s64 = 16;
loc_880898D4:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880898D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,108(r1)
	ctx.current_instruction = 0x880898DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,324(r1)
	ctx.current_instruction = 0x880898E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r27,r11,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r11.u64;
	// blt cr6,0x88089ab0
	if (ctx.cr6.lt) goto loc_88089AB0;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r26,r10,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88089900:
	// lwz r9,436(r1)
	ctx.current_instruction = 0x88089900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089910;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88089940
	if (!ctx.cr6.eq) goto loc_88089940;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,84(r1)
	ctx.current_instruction = 0x88089930;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808993C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808993C:
	// b 0x88089954
	goto loc_88089954;
loc_88089940:
	// stw r6,84(r1)
	ctx.current_instruction = 0x88089940;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089954:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88089954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x88089960;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089974:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x88089974;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880899cc
	if (ctx.cr6.eq) goto loc_880899CC;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808998C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880899B0;
	sub_8810B7F8(ctx, base);
loc_880899B0:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x880899C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880899C8:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880899CC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880899CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089a20
	if (ctx.cr6.eq) goto loc_88089A20;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880899E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x880899E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089A04;
	sub_8810B7F8(ctx, base);
loc_88089A04:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089A1C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089A20:
	// lwz r10,444(r1)
	ctx.current_instruction = 0x88089A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089a70
	if (ctx.cr6.gt) goto loc_88089A70;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88089a70
	if (ctx.cr6.gt) goto loc_88089A70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.current_instruction = 0x88089A50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.current_instruction = 0x88089A54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r19
	ctx.current_instruction = 0x88089A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r10,r6,r19
	ctx.current_instruction = 0x88089A64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88089a78
	goto loc_88089A78;
loc_88089A70:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x88089A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089A78:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089a94
	if (!ctx.cr6.lt) goto loc_88089A94;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r28,96(r1)
	ctx.current_instruction = 0x88089A88;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,100(r1)
	ctx.current_instruction = 0x88089A90;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_88089A94:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x88089A94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88089900
	if (!ctx.cr6.gt) goto loc_88089900;
	// b 0x88089aac
	goto loc_88089AAC;
loc_88089AA8:
	// lwz r21,364(r1)
	ctx.current_instruction = 0x88089AA8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_88089AAC:
	// li r26,16
	ctx.r26.s64 = 16;
loc_88089AB0:
	// lwz r28,436(r1)
	ctx.current_instruction = 0x88089AB0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88089c58
	if (ctx.cr6.eq) goto loc_88089C58;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x88089ABC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089AC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089ACC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089afc
	if (!ctx.cr6.eq) goto loc_88089AFC;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089AE4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089AF8:
	// b 0x88089b10
	goto loc_88089B10;
loc_88089AFC:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089B04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089B10:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88089B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x88089B1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089B30:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x88089B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089b84
	if (ctx.cr6.eq) goto loc_88089B84;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089B48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089B68;
	sub_8810B7F8(ctx, base);
loc_88089B68:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089B80:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089B84:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x88089B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089bd4
	if (ctx.cr6.eq) goto loc_88089BD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089B98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x88089BA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089BB8;
	sub_8810B7F8(ctx, base);
loc_88089BB8:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089BD0:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089BD4:
	// lwz r27,444(r1)
	ctx.current_instruction = 0x88089BD4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r18,r9
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089c2c
	if (ctx.cr6.gt) goto loc_88089C2C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089c2c
	if (ctx.cr6.gt) goto loc_88089C2C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.current_instruction = 0x88089C0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.current_instruction = 0x88089C10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.current_instruction = 0x88089C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.current_instruction = 0x88089C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089c34
	goto loc_88089C34;
loc_88089C2C:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x88089C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089C34:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089c5c
	if (!ctx.cr6.lt) goto loc_88089C5C;
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x88089C4C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x88089C50;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x88089c5c
	goto loc_88089C5C;
loc_88089C58:
	// lwz r27,444(r1)
	ctx.current_instruction = 0x88089C58;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_88089C5C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88089df4
	if (ctx.cr6.eq) goto loc_88089DF4;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089C6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,324(r1)
	ctx.current_instruction = 0x88089C74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089ca0
	if (!ctx.cr6.eq) goto loc_88089CA0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089C88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089C90;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089C9C:
	// b 0x88089cb4
	goto loc_88089CB4;
loc_88089CA0:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089CA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089CA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089CB4:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88089CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x88089CC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089CD4:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x88089CD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089d28
	if (ctx.cr6.eq) goto loc_88089D28;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089CEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089D0C;
	sub_8810B7F8(ctx, base);
loc_88089D0C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089D24:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089D28:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x88089D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089d78
	if (ctx.cr6.eq) goto loc_88089D78;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089D3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x88089D44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089D5C;
	sub_8810B7F8(ctx, base);
loc_88089D5C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089D74:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089D78:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r18,r9
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089dcc
	if (ctx.cr6.gt) goto loc_88089DCC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089dcc
	if (ctx.cr6.gt) goto loc_88089DCC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.current_instruction = 0x88089DAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.current_instruction = 0x88089DB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.current_instruction = 0x88089DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.current_instruction = 0x88089DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089dd4
	goto loc_88089DD4;
loc_88089DCC:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x88089DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089DD4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089df4
	if (!ctx.cr6.lt) goto loc_88089DF4;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x88089DEC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x88089DF0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_88089DF4:
	// lwz r11,380(r1)
	ctx.current_instruction = 0x88089DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808a160
	if (ctx.cr6.eq) goto loc_8808A160;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88089fa0
	if (ctx.cr6.eq) goto loc_88089FA0;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x88089E08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089E10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089E18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089e48
	if (!ctx.cr6.eq) goto loc_88089E48;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089E30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089E38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089E44:
	// b 0x88089e5c
	goto loc_88089E5C;
loc_88089E48:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089E50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089E5C:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88089E5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x88089E68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089E7C:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x88089E7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089ed0
	if (ctx.cr6.eq) goto loc_88089ED0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089E94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089EB4;
	sub_8810B7F8(ctx, base);
loc_88089EB4:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089ECC:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089ED0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x88089ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089f20
	if (ctx.cr6.eq) goto loc_88089F20;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88089EE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x88089EEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089F04;
	sub_8810B7F8(ctx, base);
loc_88089F04:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089F1C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089F20:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
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
	// bgt cr6,0x88089f78
	if (ctx.cr6.gt) goto loc_88089F78;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089f78
	if (ctx.cr6.gt) goto loc_88089F78;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.current_instruction = 0x88089F58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.current_instruction = 0x88089F5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.current_instruction = 0x88089F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.current_instruction = 0x88089F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089f80
	goto loc_88089F80;
loc_88089F78:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x88089F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089F80:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089fa0
	if (!ctx.cr6.lt) goto loc_88089FA0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x88089F98;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x88089F9C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_88089FA0:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x88089FA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8808a160
	if (ctx.cr6.lt) goto loc_8808A160;
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r27,r10,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88089FC0:
	// lwz r9,436(r1)
	ctx.current_instruction = 0x88089FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089FD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r3,324(r1)
	ctx.current_instruction = 0x88089FD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808a000
	if (!ctx.cr6.eq) goto loc_8808A000;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88089FF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089FFC:
	// b 0x8808a010
	goto loc_8808A010;
loc_8808A000:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808A000;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A004;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A010:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8808A010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x8808A01C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A030:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x8808A030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808a088
	if (ctx.cr6.eq) goto loc_8808A088;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808A048;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808A06C;
	sub_8810B7F8(ctx, base);
loc_8808A06C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x8808A084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A084:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808A088:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808A088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808a0dc
	if (ctx.cr6.eq) goto loc_8808A0DC;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808A09C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x8808A0A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808A0C0;
	sub_8810B7F8(ctx, base);
loc_8808A0C0:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8808A0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A0D8:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808A0DC:
	// lwz r10,444(r1)
	ctx.current_instruction = 0x8808A0DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808a12c
	if (ctx.cr6.gt) goto loc_8808A12C;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8808a12c
	if (ctx.cr6.gt) goto loc_8808A12C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.current_instruction = 0x8808A10C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.current_instruction = 0x8808A110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.current_instruction = 0x8808A11C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.current_instruction = 0x8808A120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808a134
	goto loc_8808A134;
loc_8808A12C:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x8808A12C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808A134:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x8808a150
	if (!ctx.cr6.lt) goto loc_8808A150;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,96(r1)
	ctx.current_instruction = 0x8808A144;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8808A14C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_8808A150:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x8808A150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88089fc0
	if (!ctx.cr6.gt) goto loc_88089FC0;
loc_8808A160:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808A160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r10,96(r1)
	ctx.current_instruction = 0x8808A164;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,500(r1)
	ctx.current_instruction = 0x8808A168;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r8,100(r1)
	ctx.current_instruction = 0x8808A16C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,508(r1)
	ctx.current_instruction = 0x8808A170;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r10,0(r11)
	ctx.current_instruction = 0x8808A174;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x8808A178;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r21,0(r7)
	ctx.current_instruction = 0x8808A17C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r21.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF270) {
			switch (rex_dispatch_address) {
				case 0x880BF278:
				case 0x880BF2D0:
				case 0x880BF2E8:
				case 0x880BF300:
				case 0x880BF318:
				case 0x880BF33C:
				case 0x880BF350:
				case 0x880BF36C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF270;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF278: goto loc_880BF278;
		case 0x880BF2D0: goto loc_880BF2D0;
		case 0x880BF2E8: goto loc_880BF2E8;
		case 0x880BF300: goto loc_880BF300;
		case 0x880BF318: goto loc_880BF318;
		case 0x880BF33C: goto loc_880BF33C;
		case 0x880BF350: goto loc_880BF350;
		case 0x880BF36C: goto loc_880BF36C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880BF278;
	__savegprlr_26(ctx, base);
loc_880BF278:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880BF278;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880bf348
	if (ctx.cr6.eq) goto loc_880BF348;
	// lwz r10,-4(r3)
	ctx.current_instruction = 0x880BF290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// lis r9,9356
	ctx.r9.s64 = 613154816;
	// addi r27,r3,-4
	ctx.r27.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,16428
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(16428));
	// addic. r28,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r28.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ori r29,r9,32768
	ctx.r29.u64 = ctx.r9.u64 | 32768;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x880bf324
	if (ctx.cr0.lt) goto loc_880BF324;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
loc_880BF2B8:
	// addi r31,r31,-16428
	ctx.r31.s64 = ctx.r31.s64 + -16428;
	// lwz r3,-12(r31)
	ctx.current_instruction = 0x880BF2BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf2d4
	if (ctx.cr6.eq) goto loc_880BF2D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BF2D0;
	sub_88050358(ctx, base);
loc_880BF2D0:
	// stw r30,-12(r31)
	ctx.current_instruction = 0x880BF2D0;
	REX_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
loc_880BF2D4:
	// lwz r3,-8(r31)
	ctx.current_instruction = 0x880BF2D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf2ec
	if (ctx.cr6.eq) goto loc_880BF2EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BF2E8;
	sub_88050358(ctx, base);
loc_880BF2E8:
	// stw r30,-8(r31)
	ctx.current_instruction = 0x880BF2E8;
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
loc_880BF2EC:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880BF2EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf304
	if (ctx.cr6.eq) goto loc_880BF304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BF300;
	sub_88050358(ctx, base);
loc_880BF300:
	// stw r30,0(r31)
	ctx.current_instruction = 0x880BF300;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_880BF304:
	// lwz r3,-4(r31)
	ctx.current_instruction = 0x880BF304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf31c
	if (ctx.cr6.eq) goto loc_880BF31C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BF318;
	sub_88050358(ctx, base);
loc_880BF318:
	// stw r30,-4(r31)
	ctx.current_instruction = 0x880BF318;
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
loc_880BF31C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x880bf2b8
	if (!ctx.cr0.lt) goto loc_880BF2B8;
loc_880BF324:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880bf33c
	if (ctx.cr6.eq) goto loc_880BF33C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x880BF33C;
	sub_88050358(ctx, base);
loc_880BF33C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880BF348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880beea0
	ctx.lr = 0x880BF350;
	sub_880BEEA0(ctx, base);
loc_880BF350:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880bf36c
	if (ctx.cr6.eq) goto loc_880BF36C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF36C;
	sub_88050358(ctx, base);
loc_880BF36C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BFB10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BFB10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BFB10) {
			switch (rex_dispatch_address) {
				case 0x880BFB18:
				case 0x880BFB34:
				case 0x880BFB4C:
				case 0x880BFB64:
				case 0x880BFB7C:
				case 0x880BFBA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BFB10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BFB18: goto loc_880BFB18;
		case 0x880BFB34: goto loc_880BFB34;
		case 0x880BFB4C: goto loc_880BFB4C;
		case 0x880BFB64: goto loc_880BFB64;
		case 0x880BFB7C: goto loc_880BFB7C;
		case 0x880BFBA0: goto loc_880BFBA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880BFB18;
	__savegprlr_28(ctx, base);
loc_880BFB18:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880BFB18;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880BFB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFB34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x880bfb78
	if (!ctx.cr6.lt) goto loc_880BFB78;
	// bctrl 
	ctx.lr = 0x880BFB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFB4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880bfb84
	if (ctx.cr6.lt) goto loc_880BFB84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880BFB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFB64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880bfba8
	if (ctx.cr6.lt) goto loc_880BFBA8;
loc_880BFB6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880BFB78:
	// bctrl 
	ctx.lr = 0x880BFB7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFB7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880bfb90
	if (!ctx.cr6.gt) goto loc_880BFB90;
loc_880BFB84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880BFB90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880BFBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFBA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880bfb6c
	if (!ctx.cr6.gt) goto loc_880BFB6C;
loc_880BFBA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C0AA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C0AA8) {
			switch (rex_dispatch_address) {
				case 0x880C0AB0:
				case 0x880C0ADC:
				case 0x880C0AF8:
				case 0x880C0B18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C0AA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C0AB0: goto loc_880C0AB0;
		case 0x880C0ADC: goto loc_880C0ADC;
		case 0x880C0AF8: goto loc_880C0AF8;
		case 0x880C0B18: goto loc_880C0B18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880C0AB0;
	__savegprlr_27(ctx, base);
loc_880C0AB0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880C0AB0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r7,8240(r3)
	ctx.current_instruction = 0x880C0AC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8240);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x880ec360
	ctx.lr = 0x880C0ADC;
	sub_880EC360(ctx, base);
loc_880C0ADC:
	// lwz r11,8088(r31)
	ctx.current_instruction = 0x880C0ADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C0AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0AF8:
	// lwz r10,8116(r31)
	ctx.current_instruction = 0x880C0AF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8116);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880C0B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0B18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C2620) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C2620);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C2620;
	ctx.current_instruction = 0x880C2620;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x880C2620;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,0(r5)
	ctx.current_instruction = 0x880C2624;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lis r3,-30679
	ctx.r3.s64 = -2010578944;
	// lbz r10,0(r4)
	ctx.current_instruction = 0x880C262C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbz r7,1(r4)
	ctx.current_instruction = 0x880C2638;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r8,2(r4)
	ctx.current_instruction = 0x880C263C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,3(r4)
	ctx.current_instruction = 0x880C2644;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lbzx r11,r10,r11
	ctx.current_instruction = 0x880C264C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r11,0(r4)
	ctx.current_instruction = 0x880C2650;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r10,2(r5)
	ctx.current_instruction = 0x880C2658;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r11,r7,r11
	ctx.current_instruction = 0x880C2664;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r11,1(r4)
	ctx.current_instruction = 0x880C2668;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C266C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r10,4(r5)
	ctx.current_instruction = 0x880C2670;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880C267C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r7,2(r4)
	ctx.current_instruction = 0x880C2680;
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r7.u8);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r10,6(r5)
	ctx.current_instruction = 0x880C2688;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x880C2694;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,3(r4)
	ctx.current_instruction = 0x880C2698;
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// lbzux r10,r4,r6
	ctx.current_instruction = 0x880C269C;
	ea = ctx.r4.u32 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C26A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhzux r7,r5,r31
	ctx.current_instruction = 0x880C26A4;
	ea = ctx.r5.u32 + ctx.r31.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880C26B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r4)
	ctx.current_instruction = 0x880C26B4;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r4)
	ctx.current_instruction = 0x880C26B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C26BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r8,2(r5)
	ctx.current_instruction = 0x880C26C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r7,r11
	ctx.current_instruction = 0x880C26CC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r11,1(r4)
	ctx.current_instruction = 0x880C26D0;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// lbz r9,2(r4)
	ctx.current_instruction = 0x880C26D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C26D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r10,4(r5)
	ctx.current_instruction = 0x880C26DC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x880C26E8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,2(r4)
	ctx.current_instruction = 0x880C26EC;
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lbz r9,3(r4)
	ctx.current_instruction = 0x880C26F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C26F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r7,6(r5)
	ctx.current_instruction = 0x880C26F8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880C2704;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,3(r4)
	ctx.current_instruction = 0x880C2708;
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// lbzux r10,r4,r6
	ctx.current_instruction = 0x880C270C;
	ea = ctx.r4.u32 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhzux r8,r5,r31
	ctx.current_instruction = 0x880C2714;
	ea = ctx.r5.u32 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r7,r11
	ctx.current_instruction = 0x880C2720;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r11,0(r4)
	ctx.current_instruction = 0x880C2724;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lbz r9,1(r4)
	ctx.current_instruction = 0x880C2728;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C272C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r10,2(r5)
	ctx.current_instruction = 0x880C2730;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x880C273C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,1(r4)
	ctx.current_instruction = 0x880C2740;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lbz r9,2(r4)
	ctx.current_instruction = 0x880C2744;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r7,4(r5)
	ctx.current_instruction = 0x880C274C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880C2758;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,2(r4)
	ctx.current_instruction = 0x880C275C;
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r4)
	ctx.current_instruction = 0x880C2760;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r8,6(r5)
	ctx.current_instruction = 0x880C2764;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C276C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r7,r11
	ctx.current_instruction = 0x880C2774;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r11,3(r4)
	ctx.current_instruction = 0x880C2778;
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
	// lbzux r10,r4,r6
	ctx.current_instruction = 0x880C277C;
	ea = ctx.r4.u32 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C2780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhzux r9,r5,r31
	ctx.current_instruction = 0x880C2784;
	ea = ctx.r5.u32 + ctx.r31.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880C2790;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r7,0(r4)
	ctx.current_instruction = 0x880C2794;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// lbz r9,1(r4)
	ctx.current_instruction = 0x880C2798;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C279C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r6,2(r5)
	ctx.current_instruction = 0x880C27A0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880C27AC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,1(r4)
	ctx.current_instruction = 0x880C27B0;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r4)
	ctx.current_instruction = 0x880C27B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r8,4(r5)
	ctx.current_instruction = 0x880C27B8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C27C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r6,r7,r11
	ctx.current_instruction = 0x880C27C8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r6,2(r4)
	ctx.current_instruction = 0x880C27CC;
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lbz r9,3(r4)
	ctx.current_instruction = 0x880C27D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r11,-25280(r3)
	ctx.current_instruction = 0x880C27D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -25280);
	// lhz r5,6(r5)
	ctx.current_instruction = 0x880C27D8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r3,r11
	ctx.current_instruction = 0x880C27E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r11,3(r4)
	ctx.current_instruction = 0x880C27E8;
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880C27EC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C6CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C6CB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C6CB8) {
			switch (rex_dispatch_address) {
				case 0x880C6D00:
				case 0x880C6D18:
				case 0x880C6D28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C6CB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C6D00: goto loc_880C6D00;
		case 0x880C6D18: goto loc_880C6D18;
		case 0x880C6D28: goto loc_880C6D28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880C6CBC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880C6CC0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880C6CC4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880c6cec
	if (!ctx.cr6.eq) goto loc_880C6CEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C6CDC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C6CE4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6CEC:
	// lwz r11,344(r31)
	ctx.current_instruction = 0x880C6CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6d14
	if (!ctx.cr6.eq) goto loc_880C6D14;
	// bl 0x880c6520
	ctx.lr = 0x880C6D00;
	sub_880C6520(ctx, base);
loc_880C6D00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C6D04;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C6D0C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6D14:
	// bl 0x880c6180
	ctx.lr = 0x880C6D18;
	sub_880C6180(ctx, base);
loc_880C6D18:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880C6D28;
	sub_88050358(ctx, base);
loc_880C6D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C6D30;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C6D38;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C7E20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C7E20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C7E20) {
			switch (rex_dispatch_address) {
				case 0x880C7E28:
				case 0x880C7E50:
				case 0x880C7E68:
				case 0x880C7E7C:
				case 0x880C7E90:
				case 0x880C7EA0:
				case 0x880C7EC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C7E20;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C7E28: goto loc_880C7E28;
		case 0x880C7E50: goto loc_880C7E50;
		case 0x880C7E68: goto loc_880C7E68;
		case 0x880C7E7C: goto loc_880C7E7C;
		case 0x880C7E90: goto loc_880C7E90;
		case 0x880C7EA0: goto loc_880C7EA0;
		case 0x880C7EC0: goto loc_880C7EC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880C7E28;
	__savegprlr_28(ctx, base);
loc_880C7E28:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880C7E28;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,352(r3)
	ctx.current_instruction = 0x880C7E30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7e54
	if (ctx.cr6.eq) goto loc_880C7E54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880C7E50;
	sub_88050358(ctx, base);
loc_880C7E50:
	// stw r29,352(r31)
	ctx.current_instruction = 0x880C7E50;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_880C7E54:
	// lwz r3,356(r31)
	ctx.current_instruction = 0x880C7E54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7e6c
	if (ctx.cr6.eq) goto loc_880C7E6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880C7E68;
	sub_88050358(ctx, base);
loc_880C7E68:
	// stw r29,356(r31)
	ctx.current_instruction = 0x880C7E68;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_880C7E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.current_instruction = 0x880C7E70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.current_instruction = 0x880C7E74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x880c6dd0
	ctx.lr = 0x880C7E7C;
	sub_880C6DD0(ctx, base);
loc_880C7E7C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,52(r31)
	ctx.current_instruction = 0x880C7E84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.current_instruction = 0x880C7E88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x880c6dd0
	ctx.lr = 0x880C7E90;
	sub_880C6DD0(ctx, base);
loc_880C7E90:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x880C7EA0;
	sub_88050340(ctx, base);
loc_880C7EA0:
	// stw r3,352(r31)
	ctx.current_instruction = 0x880C7EA0;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880c7eb4
	if (!ctx.cr6.eq) goto loc_880C7EB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880C7EB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x880C7EC0;
	sub_88050340(ctx, base);
loc_880C7EC0:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,356(r31)
	ctx.current_instruction = 0x880C7EC4;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C8E68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C8E68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C8E68) {
			switch (rex_dispatch_address) {
				case 0x880C8E70:
				case 0x880C8E78:
				case 0x880C8FBC:
				case 0x880C90E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C8E68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C8E70: goto loc_880C8E70;
		case 0x880C8E78: goto loc_880C8E78;
		case 0x880C8FBC: goto loc_880C8FBC;
		case 0x880C90E8: goto loc_880C90E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880C8E70;
	__savegprlr_29(ctx, base);
loc_880C8E70:
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef284
	ctx.lr = 0x880C8E78;
	__savefpr_27(ctx, base);
loc_880C8E78:
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,14464(r3)
	ctx.current_instruction = 0x880C8E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14464);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,8312
	ctx.r11.s64 = ctx.r3.s64 + 8312;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x880c8fc0
	if (!ctx.cr6.eq) goto loc_880C8FC0;
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
	ctx.current_instruction = 0x880C8EA8;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13880);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f0,13872(r7)
	ctx.current_instruction = 0x880C8EB0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f7,13864(r6)
	ctx.current_instruction = 0x880C8EB8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 13864);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13856(r9)
	ctx.current_instruction = 0x880C8EC4;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13856);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f8,13848(r5)
	ctx.current_instruction = 0x880C8ECC;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r5.u32 + 13848);
	// lfd f9,13840(r4)
	ctx.current_instruction = 0x880C8ED0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r4.u32 + 13840);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f10,13832(r3)
	ctx.current_instruction = 0x880C8ED8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r3.u32 + 13832);
	// lfd f11,13824(r8)
	ctx.current_instruction = 0x880C8EDC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 13824);
	// lfd f12,13816(r7)
	ctx.current_instruction = 0x880C8EE0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 13816);
	// lfd f13,13808(r6)
	ctx.current_instruction = 0x880C8EE4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13808);
loc_880C8EE8:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-128(r1)
	ctx.current_instruction = 0x880C8EF0;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfd f4,-128(r1)
	ctx.current_instruction = 0x880C8EF4;
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
	ctx.current_instruction = 0x880C8F24;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-120(r1)
	ctx.current_instruction = 0x880C8F2C;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f1.u64);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-96(r1)
	ctx.current_instruction = 0x880C8F34;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-104(r1)
	ctx.current_instruction = 0x880C8F3C;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f1.u64);
	// fctiwz f2,f30
	ctx.f2.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f2,-88(r1)
	ctx.current_instruction = 0x880C8F44;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f2.u64);
	// lwz r5,-100(r1)
	ctx.current_instruction = 0x880C8F48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r6,-108(r1)
	ctx.current_instruction = 0x880C8F54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stfd f1,-80(r1)
	ctx.current_instruction = 0x880C8F58;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f1.u64);
	// fctiwz f4,f28
	ctx.f4.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// lwz r7,-116(r1)
	ctx.current_instruction = 0x880C8F60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f4,-112(r1)
	ctx.current_instruction = 0x880C8F64;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f2,f27
	ctx.f2.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f2,-104(r1)
	ctx.current_instruction = 0x880C8F6C;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f2.u64);
	// lwz r4,-100(r1)
	ctx.current_instruction = 0x880C8F70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stfd f3,-104(r1)
	ctx.current_instruction = 0x880C8F74;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f3.u64);
	// lwz r3,-92(r1)
	ctx.current_instruction = 0x880C8F78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r8,-84(r1)
	ctx.current_instruction = 0x880C8F7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r31,-76(r1)
	ctx.current_instruction = 0x880C8F80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-100(r1)
	ctx.current_instruction = 0x880C8F84;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r30,-108(r1)
	ctx.current_instruction = 0x880C8F88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r5,-4092(r11)
	ctx.current_instruction = 0x880C8F8C;
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// stw r6,-7164(r11)
	ctx.current_instruction = 0x880C8F90;
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r6.u32);
	// stw r7,-2044(r11)
	ctx.current_instruction = 0x880C8F94;
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// stw r4,-1020(r11)
	ctx.current_instruction = 0x880C8F98;
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// stw r3,-6140(r11)
	ctx.current_instruction = 0x880C8F9C;
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// stw r8,-3068(r11)
	ctx.current_instruction = 0x880C8FA0;
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r8.u32);
	// stw r31,-8188(r11)
	ctx.current_instruction = 0x880C8FA4;
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r31.u32);
	// stw r29,-5116(r11)
	ctx.current_instruction = 0x880C8FA8;
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r29.u32);
	// stwu r30,4(r11)
	ctx.current_instruction = 0x880C8FAC;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880c8ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8EE8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x880C8FBC;
	__restfpr_27(ctx, base);
loc_880C8FBC:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C8FC0:
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
	ctx.current_instruction = 0x880C8FD4;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13800);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f7,13792(r7)
	ctx.current_instruction = 0x880C8FDC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 13792);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f8,13784(r6)
	ctx.current_instruction = 0x880C8FE4;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + 13784);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13776(r9)
	ctx.current_instruction = 0x880C8FF0;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13776);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f9,13768(r5)
	ctx.current_instruction = 0x880C8FF8;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r5.u32 + 13768);
	// lfd f10,13760(r4)
	ctx.current_instruction = 0x880C8FFC;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 13760);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f11,13752(r3)
	ctx.current_instruction = 0x880C9004;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r3.u32 + 13752);
	// lfd f12,13744(r8)
	ctx.current_instruction = 0x880C9008;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 13744);
	// lfd f0,13872(r7)
	ctx.current_instruction = 0x880C900C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lfd f13,13832(r6)
	ctx.current_instruction = 0x880C9010;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13832);
loc_880C9014:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-80(r1)
	ctx.current_instruction = 0x880C901C;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f4,-80(r1)
	ctx.current_instruction = 0x880C9020;
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
	ctx.current_instruction = 0x880C9050;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-104(r1)
	ctx.current_instruction = 0x880C9058;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// lwz r7,-84(r1)
	ctx.current_instruction = 0x880C905C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f4,f30
	ctx.f4.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f4,-88(r1)
	ctx.current_instruction = 0x880C9064;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r5,-100(r1)
	ctx.current_instruction = 0x880C9068;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-104(r1)
	ctx.current_instruction = 0x880C9070;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-96(r1)
	ctx.current_instruction = 0x880C9078;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// lwz r4,-84(r1)
	ctx.current_instruction = 0x880C907C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// lwz r6,-92(r1)
	ctx.current_instruction = 0x880C9084;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stfd f1,-96(r1)
	ctx.current_instruction = 0x880C9088;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r31,-100(r1)
	ctx.current_instruction = 0x880C9090;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f27
	ctx.f4.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f4,-88(r1)
	ctx.current_instruction = 0x880C9098;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r3,-84(r1)
	ctx.current_instruction = 0x880C909C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stfd f1,-88(r1)
	ctx.current_instruction = 0x880C90A0;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// lwz r8,-84(r1)
	ctx.current_instruction = 0x880C90A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f2,f28
	ctx.f2.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// stfd f2,-112(r1)
	ctx.current_instruction = 0x880C90AC;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f2.u64);
	// lwz r30,-108(r1)
	ctx.current_instruction = 0x880C90B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r7,-4092(r11)
	ctx.current_instruction = 0x880C90B4;
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// stw r5,-8188(r11)
	ctx.current_instruction = 0x880C90B8;
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r5.u32);
	// stw r6,-2044(r11)
	ctx.current_instruction = 0x880C90BC;
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r6.u32);
	// stw r31,-6140(r11)
	ctx.current_instruction = 0x880C90C0;
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r31.u32);
	// stw r3,-1020(r11)
	ctx.current_instruction = 0x880C90C4;
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r3.u32);
	// stw r8,-7164(r11)
	ctx.current_instruction = 0x880C90C8;
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r8.u32);
	// lwz r8,-92(r1)
	ctx.current_instruction = 0x880C90CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r8,-5116(r11)
	ctx.current_instruction = 0x880C90D0;
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// stw r30,-3068(r11)
	ctx.current_instruction = 0x880C90D4;
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r30.u32);
	// stwu r4,4(r11)
	ctx.current_instruction = 0x880C90D8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880c9014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C9014;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x880C90E8;
	__restfpr_27(ctx, base);
loc_880C90E8:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD010) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CD010);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD010;
	ctx.current_instruction = 0x880CD010;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x880CD010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r4)
	ctx.current_instruction = 0x880CD018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,68(r11)
	ctx.current_instruction = 0x880CD01C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,4(r10)
	ctx.current_instruction = 0x880CD020;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,68(r11)
	ctx.current_instruction = 0x880CD024;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD4F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CD4F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD4F8;
	ctx.current_instruction = 0x880CD4F8;
	// b 0x88062000
	sub_88062000(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD510) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CD510);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD510;
	ctx.current_instruction = 0x880CD510;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880CD510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,44
	ctx.r7.s64 = ctx.r3.s64 + 44;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x880CD51C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880CD5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD5D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD5D0) {
			switch (rex_dispatch_address) {
				case 0x880CD5D8:
				case 0x880CD63C:
				case 0x880CD660:
				case 0x880CD698:
				case 0x880CD6B4:
				case 0x880CD6E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD5D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD5D8: goto loc_880CD5D8;
		case 0x880CD63C: goto loc_880CD63C;
		case 0x880CD660: goto loc_880CD660;
		case 0x880CD698: goto loc_880CD698;
		case 0x880CD6B4: goto loc_880CD6B4;
		case 0x880CD6E8: goto loc_880CD6E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880CD5D8;
	__savegprlr_22(ctx, base);
loc_880CD5D8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880CD5D8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.current_instruction = 0x880CD5DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// ld r9,0(r4)
	ctx.current_instruction = 0x880CD5E4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,80(r1)
	ctx.current_instruction = 0x880CD5F4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpld cr6,r7,r5
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r5.u64, ctx.xer);
	// ble cr6,0x880cd618
	if (!ctx.cr6.gt) goto loc_880CD618;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880CD618:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 512, ctx.xer);
	// ble cr6,0x880cd628
	if (!ctx.cr6.gt) goto loc_880CD628;
	// li r28,512
	ctx.r28.s64 = 512;
loc_880CD628:
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880CD63C;
	sub_88050340(ctx, base);
loc_880CD63C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880cd650
	if (!ctx.cr6.eq) goto loc_880CD650;
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x880cd6cc
	goto loc_880CD6CC;
loc_880CD650:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052d90
	ctx.lr = 0x880CD660;
	sub_88052D90(ctx, base);
loc_880CD660:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880cd6c0
	if (ctx.cr6.eq) goto loc_880CD6C0;
loc_880CD66C:
	// subf r29,r31,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r31.u64;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// ble cr6,0x880cd67c
	if (!ctx.cr6.gt) goto loc_880CD67C;
	// li r29,128
	ctx.r29.s64 = 128;
loc_880CD67C:
	// ld r10,0(r26)
	ctx.current_instruction = 0x880CD67C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r26.u32 + 0);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CD698;
	sub_8805ADC8(ctx, base);
loc_880CD698:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cd6c8
	if (!ctx.cr6.eq) goto loc_880CD6C8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CD6A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CD6B4;
	sub_880547A0(ctx, base);
loc_880CD6B4:
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x880cd66c
	if (ctx.cr6.lt) goto loc_880CD66C;
loc_880CD6C0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x880cd6ec
	if (ctx.cr6.eq) goto loc_880CD6EC;
loc_880CD6C8:
	// li r23,3
	ctx.r23.s64 = 3;
loc_880CD6CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880cd6ec
	if (ctx.cr6.eq) goto loc_880CD6EC;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880CD6E8;
	sub_88050358(ctx, base);
loc_880CD6E8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_880CD6EC:
	// lhz r11,0(r24)
	ctx.current_instruction = 0x880CD6EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r10,0(r26)
	ctx.current_instruction = 0x880CD6F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r26.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,0(r26)
	ctx.current_instruction = 0x880CD6FC;
	REX_STORE_U64(ctx.r26.u32 + 0, ctx.r8.u64);
	// sth r31,0(r24)
	ctx.current_instruction = 0x880CD700;
	REX_STORE_U16(ctx.r24.u32 + 0, ctx.r31.u16);
	// stw r27,0(r22)
	ctx.current_instruction = 0x880CD704;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1680) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D1680;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D1680) {
			switch (rex_dispatch_address) {
				case 0x880D16B0:
				case 0x880D16B8:
				case 0x880D16D0:
				case 0x880D16D8:
				case 0x880D16E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1680;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D16B0: goto loc_880D16B0;
		case 0x880D16B8: goto loc_880D16B8;
		case 0x880D16D0: goto loc_880D16D0;
		case 0x880D16D8: goto loc_880D16D8;
		case 0x880D16E8: goto loc_880D16E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880D1684;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880D1688;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880D168C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d16a4
	if (ctx.cr6.eq) goto loc_880D16A4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x880d16e8
	if (ctx.cr6.lt) goto loc_880D16E8;
loc_880D16A4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88061460
	ctx.lr = 0x880D16B0;
	sub_88061460(ctx, base);
loc_880D16B0:
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x88125e60
	ctx.lr = 0x880D16B8;
	sub_88125E60(ctx, base);
loc_880D16B8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d16e8
	if (ctx.cr6.eq) goto loc_880D16E8;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880D16D0;
	sub_88052D90(ctx, base);
loc_880D16D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d15f0
	ctx.lr = 0x880D16D8;
	sub_880D15F0(ctx, base);
loc_880D16D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x880d16ec
	if (!ctx.cr6.lt) goto loc_880D16EC;
	// bl 0x88125e70
	ctx.lr = 0x880D16E8;
	sub_88125E70(ctx, base);
loc_880D16E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_880D16EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880D16F0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880D16F8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D1B38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D1B38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1B38;
	ctx.current_instruction = 0x880D1B38;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880D1B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,356(r3)
	ctx.current_instruction = 0x880D1B40;
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880D1B44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,368(r3)
	ctx.current_instruction = 0x880D1B48;
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lhz r8,110(r11)
	ctx.current_instruction = 0x880D1B4C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r8,396(r3)
	ctx.current_instruction = 0x880D1B50;
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// lhz r7,110(r11)
	ctx.current_instruction = 0x880D1B54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,12(r4)
	ctx.current_instruction = 0x880D1B60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,396(r3)
	ctx.current_instruction = 0x880D1B74;
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// stw r10,356(r3)
	ctx.current_instruction = 0x880D1B78;
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880D1B7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x880d1b8c
	if (!ctx.cr6.gt) goto loc_880D1B8C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880D1B8C:
	// stw r10,368(r3)
	ctx.current_instruction = 0x880D1B8C;
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lwz r8,88(r11)
	ctx.current_instruction = 0x880D1B90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r9,356(r3)
	ctx.current_instruction = 0x880D1B9C;
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lhz r11,110(r11)
	ctx.current_instruction = 0x880D1BA0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r11,396(r3)
	ctx.current_instruction = 0x880D1BA4;
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r11.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D3C40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D3C40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D3C40) {
			switch (rex_dispatch_address) {
				case 0x880D3C48:
				case 0x880D3C50:
				case 0x880D3D14:
				case 0x880D3D44:
				case 0x880D3D74:
				case 0x880D3DA4:
				case 0x880D3DD4:
				case 0x880D3E04:
				case 0x880D3EAC:
				case 0x880D3F0C:
				case 0x880D3F40:
				case 0x880D3F7C:
				case 0x880D3FB8:
				case 0x880D4074:
				case 0x880D40B0:
				case 0x880D40FC:
				case 0x880D4138:
				case 0x880D41F4:
				case 0x880D4230:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D3C40;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D3C48: goto loc_880D3C48;
		case 0x880D3C50: goto loc_880D3C50;
		case 0x880D3D14: goto loc_880D3D14;
		case 0x880D3D44: goto loc_880D3D44;
		case 0x880D3D74: goto loc_880D3D74;
		case 0x880D3DA4: goto loc_880D3DA4;
		case 0x880D3DD4: goto loc_880D3DD4;
		case 0x880D3E04: goto loc_880D3E04;
		case 0x880D3EAC: goto loc_880D3EAC;
		case 0x880D3F0C: goto loc_880D3F0C;
		case 0x880D3F40: goto loc_880D3F40;
		case 0x880D3F7C: goto loc_880D3F7C;
		case 0x880D3FB8: goto loc_880D3FB8;
		case 0x880D4074: goto loc_880D4074;
		case 0x880D40B0: goto loc_880D40B0;
		case 0x880D40FC: goto loc_880D40FC;
		case 0x880D4138: goto loc_880D4138;
		case 0x880D41F4: goto loc_880D41F4;
		case 0x880D4230: goto loc_880D4230;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880D3C48;
	__savegprlr_19(ctx, base);
loc_880D3C48:
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef250
	ctx.lr = 0x880D3C50;
	__savefpr_14(ctx, base);
loc_880D3C50:
	// stwu r1,-400(r1)
	ctx.current_instruction = 0x880D3C50;
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D3C54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.current_instruction = 0x880D3C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r20,360(r3)
	ctx.current_instruction = 0x880D3C64;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r27,384(r3)
	ctx.current_instruction = 0x880D3C6C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r25,34(r31)
	ctx.current_instruction = 0x880D3C74;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// beq cr6,0x880d4220
	if (ctx.cr6.eq) goto loc_880D4220;
	// lwz r11,424(r3)
	ctx.current_instruction = 0x880D3C7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d3c8c
	if (ctx.cr6.eq) goto loc_880D3C8C;
	// li r20,6
	ctx.r20.s64 = 6;
loc_880D3C8C:
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// bne cr6,0x880d3f44
	if (!ctx.cr6.eq) goto loc_880D3F44;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x880d3f44
	if (!ctx.cr6.eq) goto loc_880D3F44;
	// lwz r11,372(r21)
	ctx.current_instruction = 0x880D3C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880D3CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880D3CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f29,0(r10)
	ctx.current_instruction = 0x880D3CAC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r10)
	ctx.current_instruction = 0x880D3CB0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	ctx.current_instruction = 0x880D3CB4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r10)
	ctx.current_instruction = 0x880D3CB8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,16(r10)
	ctx.current_instruction = 0x880D3CBC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r10)
	ctx.current_instruction = 0x880D3CC0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,0(r9)
	ctx.current_instruction = 0x880D3CC4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,4(r9)
	ctx.current_instruction = 0x880D3CC8;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,8(r9)
	ctx.current_instruction = 0x880D3CCC;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,12(r9)
	ctx.current_instruction = 0x880D3CD0;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,16(r9)
	ctx.current_instruction = 0x880D3CD4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,20(r9)
	ctx.current_instruction = 0x880D3CD8;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f18.f64 = double(temp.f32);
	// ble cr6,0x880d4220
	if (!ctx.cr6.gt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,6728(r11)
	ctx.current_instruction = 0x880D3CEC;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	ctx.current_instruction = 0x880D3CF0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	ctx.current_instruction = 0x880D3CF4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_880D3CF8:
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D3CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3D04;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3D08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3D14:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.current_instruction = 0x880D3D18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3D20;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,88(r1)
	ctx.current_instruction = 0x880D3D24;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x880D3D28;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3D34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880D3D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3D44:
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.current_instruction = 0x880D3D48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3D50;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,96(r1)
	ctx.current_instruction = 0x880D3D54;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x880D3D58;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3D64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f17,f11
	ctx.f17.f64 = double(float(ctx.f11.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880D3D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3D74:
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D3D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3D80;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r4,104(r1)
	ctx.current_instruction = 0x880D3D84;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.current_instruction = 0x880D3D88;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3D94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f16,f9
	ctx.f16.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3DA4:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.current_instruction = 0x880D3DA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3DB0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,112(r1)
	ctx.current_instruction = 0x880D3DB4;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f8,112(r1)
	ctx.current_instruction = 0x880D3DB8;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3DC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f15,f7
	ctx.f15.f64 = double(float(ctx.f7.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880D3DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3DD4:
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.current_instruction = 0x880D3DD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3DE0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,120(r1)
	ctx.current_instruction = 0x880D3DE4;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f6,120(r1)
	ctx.current_instruction = 0x880D3DE8;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3DF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f14,f5
	ctx.f14.f64 = double(float(ctx.f5.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880D3E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3E04:
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fmuls f4,f14,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f25.f64));
	// fmuls f3,f14,f19
	ctx.f3.f64 = double(float(ctx.f14.f64 * ctx.f19.f64));
	// std r6,128(r1)
	ctx.current_instruction = 0x880D3E10;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f2,128(r1)
	ctx.current_instruction = 0x880D3E14;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f13,f0,f24,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f24.f64, ctx.f4.f64)));
	// fmadds f12,f0,f18,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f18.f64, ctx.f3.f64)));
	// fmadds f11,f15,f26,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f15.f64, ctx.f26.f64, ctx.f13.f64)));
	// fmadds f10,f15,f20,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f15.f64, ctx.f20.f64, ctx.f12.f64)));
	// fmadds f9,f16,f27,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f16.f64, ctx.f27.f64, ctx.f11.f64)));
	// fmadds f8,f17,f28,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f17.f64, ctx.f28.f64, ctx.f9.f64)));
	// fmadds f0,f31,f29,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, ctx.f8.f64)));
	// fmadds f7,f16,f21,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f16.f64, ctx.f21.f64, ctx.f10.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fmadds f6,f17,f22,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f17.f64, ctx.f22.f64, ctx.f7.f64)));
	// lfs f17,80(r1)
	ctx.current_instruction = 0x880D3E48;
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f31,f31,f23,f6
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f23.f64, ctx.f6.f64)));
	// bge cr6,0x880d3e68
	if (!ctx.cr6.lt) goto loc_880D3E68;
	// fsubs f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	ctx.current_instruction = 0x880D3E5C;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.current_instruction = 0x880D3E60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x880d3e78
	goto loc_880D3E78;
loc_880D3E68:
	// fadds f0,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	ctx.current_instruction = 0x880D3E70;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.current_instruction = 0x880D3E74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880D3E78:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x880D3E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d3e90
	if (ctx.cr6.lt) goto loc_880D3E90;
	// lwz r11,116(r31)
	ctx.current_instruction = 0x880D3E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d3e94
	if (!ctx.cr6.gt) goto loc_880D3E94;
loc_880D3E90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D3E94:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D3E94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3EAC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x880d3ec8
	if (!ctx.cr6.lt) goto loc_880D3EC8;
	// fsubs f0,f31,f17
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	ctx.current_instruction = 0x880D3EBC;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.current_instruction = 0x880D3EC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x880d3ed8
	goto loc_880D3ED8;
loc_880D3EC8:
	// fadds f0,f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	ctx.current_instruction = 0x880D3ED0;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.current_instruction = 0x880D3ED4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880D3ED8:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x880D3ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d3ef0
	if (ctx.cr6.lt) goto loc_880D3EF0;
	// lwz r11,116(r31)
	ctx.current_instruction = 0x880D3EE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d3ef4
	if (!ctx.cr6.gt) goto loc_880D3EF4;
loc_880D3EF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D3EF4:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D3EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3F0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3F0C:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880D3F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x880d3cf8
	if (!ctx.cr0.eq) goto loc_880D3CF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D3F40;
	__restfpr_14(ctx, base);
loc_880D3F40:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D3F44:
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d40b4
	if (ctx.cr6.lt) goto loc_880D40B4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880d4220
	if (!ctx.cr6.gt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f31,6728(r11)
	ctx.current_instruction = 0x880D3F64;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	ctx.current_instruction = 0x880D3F68;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
loc_880D3F6C:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D3F7C;
	sub_88052D90(ctx, base);
loc_880D3F7C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4000
	if (!ctx.cr6.gt) goto loc_880D4000;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_880D3F8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d3ff4
	if (!ctx.cr6.gt) goto loc_880D3FF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880D3F9C:
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D3F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3FA8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3FAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3FB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3FB8:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.current_instruction = 0x880D3FBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.current_instruction = 0x880D3FC0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	ctx.current_instruction = 0x880D3FC8;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f13,136(r1)
	ctx.current_instruction = 0x880D3FCC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwzx r8,r28,r9
	ctx.current_instruction = 0x880D3FDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f10,r8,r29
	ctx.current_instruction = 0x880D3FE0;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f11,f10,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	ctx.current_instruction = 0x880D3FEC;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x880d3f9c
	if (ctx.cr6.lt) goto loc_880D3F9C;
loc_880D3FF4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880d3f8c
	if (!ctx.cr0.eq) goto loc_880D3F8C;
loc_880D4000:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4084
	if (!ctx.cr6.gt) goto loc_880D4084;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880D4010:
	// lfs f0,0(r29)
	ctx.current_instruction = 0x880D4010;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x880d4030
	if (!ctx.cr6.lt) goto loc_880D4030;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	ctx.current_instruction = 0x880D4024;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.current_instruction = 0x880D4028;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x880d4040
	goto loc_880D4040;
loc_880D4030:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	ctx.current_instruction = 0x880D4038;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.current_instruction = 0x880D403C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880D4040:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x880D4040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d4058
	if (ctx.cr6.lt) goto loc_880D4058;
	// lwz r11,116(r31)
	ctx.current_instruction = 0x880D404C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d405c
	if (!ctx.cr6.gt) goto loc_880D405C;
loc_880D4058:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D405C:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D405C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D4074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D4074:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d4010
	if (ctx.cr6.lt) goto loc_880D4010;
loc_880D4084:
	// lwz r10,88(r31)
	ctx.current_instruction = 0x880D4084;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bne 0x880d3f6c
	if (!ctx.cr0.eq) goto loc_880D3F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D40B0;
	__restfpr_14(ctx, base);
loc_880D40B0:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D40B4:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880D40B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// mullw r10,r22,r11
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// blt cr6,0x880d4220
	if (ctx.cr6.lt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,6728(r11)
	ctx.current_instruction = 0x880D40E4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	ctx.current_instruction = 0x880D40E8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
loc_880D40EC:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D40FC;
	sub_88052D90(ctx, base);
loc_880D40FC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4180
	if (!ctx.cr6.gt) goto loc_880D4180;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_880D410C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d4174
	if (!ctx.cr6.gt) goto loc_880D4174;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880D411C:
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D411C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D4128;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D412C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D4138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D4138:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.current_instruction = 0x880D413C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.current_instruction = 0x880D4140;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	ctx.current_instruction = 0x880D4148;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f12,136(r1)
	ctx.current_instruction = 0x880D414C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzx r8,r28,r9
	ctx.current_instruction = 0x880D415C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f13,r8,r29
	ctx.current_instruction = 0x880D4160;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	ctx.current_instruction = 0x880D416C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x880d411c
	if (ctx.cr6.lt) goto loc_880D411C;
loc_880D4174:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880d410c
	if (!ctx.cr0.eq) goto loc_880D410C;
loc_880D4180:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4204
	if (!ctx.cr6.gt) goto loc_880D4204;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880D4190:
	// lfs f0,0(r29)
	ctx.current_instruction = 0x880D4190;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x880d41b0
	if (!ctx.cr6.lt) goto loc_880D41B0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	ctx.current_instruction = 0x880D41A4;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.current_instruction = 0x880D41A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x880d41c0
	goto loc_880D41C0;
loc_880D41B0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	ctx.current_instruction = 0x880D41B8;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.current_instruction = 0x880D41BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880D41C0:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x880D41C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d41d8
	if (ctx.cr6.lt) goto loc_880D41D8;
	// lwz r11,116(r31)
	ctx.current_instruction = 0x880D41CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d41dc
	if (!ctx.cr6.gt) goto loc_880D41DC;
loc_880D41D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D41DC:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D41DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D41F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D41F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d4190
	if (ctx.cr6.lt) goto loc_880D4190;
loc_880D4204:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880D4204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// mullw r9,r11,r20
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// subf r26,r10,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r10.u64;
	// subf r23,r9,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r9.u64;
	// bge 0x880d40ec
	if (!ctx.cr0.lt) goto loc_880D40EC;
loc_880D4220:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D4230;
	__restfpr_14(ctx, base);
loc_880D4230:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E29C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E29C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E29C0;
	ctx.current_instruction = 0x880E29C0;
	// std r31,-8(r1)
	ctx.current_instruction = 0x880E29C0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,7668(r3)
	ctx.current_instruction = 0x880E29C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7668);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r10,7672(r3)
	ctx.current_instruction = 0x880E29CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7672);
	// lfd f13,7648(r3)
	ctx.current_instruction = 0x880E29D0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7648);
	// lwz r6,7940(r3)
	ctx.current_instruction = 0x880E29D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 7940);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r11,7664(r3)
	ctx.current_instruction = 0x880E29E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7664);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,7676(r3)
	ctx.current_instruction = 0x880E29E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 7676);
	// divwu r10,r8,r6
	ctx.r10.u64 = uint32_t(ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0);
	// lfd f0,14696(r9)
	ctx.current_instruction = 0x880E29F0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 14696);
	// divwu r31,r5,r6
	ctx.r31.u64 = uint32_t(ctx.r6.u32 ? ctx.r5.u32 / ctx.r6.u32 : 0);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwzx r7,r7,r11
	ctx.current_instruction = 0x880E29FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mullw r8,r31,r6
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// stw r9,7668(r3)
	ctx.current_instruction = 0x880E2A08;
	REX_STORE_U32(ctx.r3.u32 + 7668, ctx.r9.u32);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// std r6,-16(r1)
	ctx.current_instruction = 0x880E2A1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x880E2A20;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r9,r7,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r7.u64;
	// stw r5,7672(r3)
	ctx.current_instruction = 0x880E2A34;
	REX_STORE_U32(ctx.r3.u32 + 7672, ctx.r5.u32);
	// stw r9,7676(r3)
	ctx.current_instruction = 0x880E2A38;
	REX_STORE_U32(ctx.r3.u32 + 7676, ctx.r9.u32);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880E2A3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// stwx r7,r10,r11
	ctx.current_instruction = 0x880E2A44;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r6,676(r3)
	ctx.current_instruction = 0x880E2A4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// fmul f10,f13,f11
	ctx.f10.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	ctx.current_instruction = 0x880E2A58;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r5,-12(r1)
	ctx.current_instruction = 0x880E2A5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r3,r6,r4
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880E2A6C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f8,-16(r1)
	ctx.current_instruction = 0x880E2A70;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fdiv f6,f7,f10
	ctx.f6.f64 = ctx.f7.f64 / ctx.f10.f64;
	// fmul f1,f6,f0
	ctx.f1.f64 = ctx.f6.f64 * ctx.f0.f64;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880E2A80;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E3AD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E3AD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E3AD0) {
			switch (rex_dispatch_address) {
				case 0x880E3AD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E3AD0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880E3AD8: goto loc_880E3AD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880E3AD8;
	__savegprlr_28(ctx, base);
loc_880E3AD8:
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e3ae8
	if (ctx.cr6.lt) goto loc_880E3AE8;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_880E3AE8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfd f0,7888(r3)
	ctx.current_instruction = 0x880E3AEC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 7888);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3AF4;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3AF8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r5,2
	ctx.r5.s64 = 2;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfd f13,14856(r10)
	ctx.current_instruction = 0x880E3B08;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14856);
	// li r6,6
	ctx.r6.s64 = 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r5,7932(r3)
	ctx.current_instruction = 0x880E3B18;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r5.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// li r30,14
	ctx.r30.s64 = 14;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f9,r3,r12
	ctx.current_instruction = 0x880E3B3C;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
	// bgt cr6,0x880e3c88
	if (ctx.cr6.gt) goto loc_880E3C88;
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x880e3c00
	if (ctx.cr6.gt) goto loc_880E3C00;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgt cr6,0x880e3b7c
	if (ctx.cr6.gt) goto loc_880E3B7C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,7932(r3)
	ctx.current_instruction = 0x880E3B60;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r6.u32);
	// stw r7,672(r3)
	ctx.current_instruction = 0x880E3B64;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r10.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3B7C:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// blt cr6,0x880e3bb0
	if (ctx.cr6.lt) goto loc_880E3BB0;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r7,7908(r3)
	ctx.current_instruction = 0x880E3B88;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r7.u32);
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3B8C;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3B90;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3B94;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f10,r3,r12
	ctx.current_instruction = 0x880E3BA8;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f10.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3BB0:
	// cmplwi cr6,r4,1300
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1300, ctx.xer);
	// stw r6,7932(r3)
	ctx.current_instruction = 0x880E3BB4;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x880e3bc4
	if (ctx.cr6.lt) goto loc_880E3BC4;
	// li r10,1300
	ctx.r10.s64 = 1300;
loc_880E3BC4:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r7,672(r3)
	ctx.current_instruction = 0x880E3BC8;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r7.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r10,-64(r1)
	ctx.current_instruction = 0x880E3BD0;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// divw r10,r11,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// subfic r11,r10,18
	ctx.xer.ca = ctx.r10.u32 <= 18;
	ctx.r11.u64 = static_cast<uint64_t>(18) - ctx.r10.u64;
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E3BDC;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3BE0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f9,r3,r12
	ctx.current_instruction = 0x880E3BF8;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3C00:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,35840
	ctx.r10.u64 = ctx.r10.u64 | 35840;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3c78
	if (ctx.cr6.gt) goto loc_880E3C78;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// blt cr6,0x880e3c4c
	if (ctx.cr6.lt) goto loc_880E3C4C;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3C20;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// stw r8,7932(r3)
	ctx.current_instruction = 0x880E3C24;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r8.u32);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3C28;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// stw r7,7908(r3)
	ctx.current_instruction = 0x880E3C2C;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r7.u32);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3C30;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f10,r3,r12
	ctx.current_instruction = 0x880E3C44;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f10.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3C4C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,7932(r3)
	ctx.current_instruction = 0x880E3C50;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r6.u32);
	// mulli r28,r11,14
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r28,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r28.s32 / ctx.r9.s32 : 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r10,24
	ctx.xer.ca = ctx.r10.u32 <= 24;
	ctx.r10.u64 = static_cast<uint64_t>(24) - ctx.r10.u64;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// stw r10,672(r3)
	ctx.current_instruction = 0x880E3C6C;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// subfic r10,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3C78:
	// stw r7,672(r3)
	ctx.current_instruction = 0x880E3C78;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r7.u32);
	// stw r6,7932(r3)
	ctx.current_instruction = 0x880E3C7C;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r6.u32);
	// stw r31,7908(r3)
	ctx.current_instruction = 0x880E3C80;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r31.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3C88:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14848(r11)
	ctx.current_instruction = 0x880E3C8C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14848);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3d80
	if (ctx.cr6.gt) goto loc_880E3D80;
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3C98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x880e3cf8
	if (ctx.cr6.gt) goto loc_880E3CF8;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// blt cr6,0x880e3cdc
	if (ctx.cr6.lt) goto loc_880E3CDC;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3CB4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// stw r7,7908(r3)
	ctx.current_instruction = 0x880E3CB8;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r7.u32);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3CBC;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3CC0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f10,r3,r12
	ctx.current_instruction = 0x880E3CD4;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f10.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3CDC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,672(r3)
	ctx.current_instruction = 0x880E3CE0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r10.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3CF8:
	// lwz r10,7904(r3)
	ctx.current_instruction = 0x880E3CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r10,95
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 95, ctx.xer);
	// ble cr6,0x880e3d30
	if (!ctx.cr6.gt) goto loc_880E3D30;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3D08;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// stw r7,7908(r3)
	ctx.current_instruction = 0x880E3D0C;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r7.u32);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3D10;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3D14;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f10,r3,r12
	ctx.current_instruction = 0x880E3D28;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f10.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3D30:
	// cmplwi cr6,r4,2000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e3d40
	if (ctx.cr6.lt) goto loc_880E3D40;
	// li r11,2000
	ctx.r11.s64 = 2000;
loc_880E3D40:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3D48;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3D4C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r11,8
	ctx.r11.s64 = 8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r11,672(r3)
	ctx.current_instruction = 0x880E3D60;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// subfic r11,r10,30
	ctx.xer.ca = ctx.r10.u32 <= 30;
	ctx.r11.u64 = static_cast<uint64_t>(30) - ctx.r10.u64;
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E3D68;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f9,r3,r12
	ctx.current_instruction = 0x880E3D78;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3D80:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14840(r11)
	ctx.current_instruction = 0x880E3D84;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14840);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3e6c
	if (ctx.cr6.gt) goto loc_880E3E6C;
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3D90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x880e3dbc
	if (ctx.cr6.gt) goto loc_880E3DBC;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3D9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3DA0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,24
	ctx.xer.ca = ctx.r11.u32 <= 24;
	ctx.r10.u64 = static_cast<uint64_t>(24) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3DBC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,42240
	ctx.r10.u64 = ctx.r10.u64 | 42240;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3de4
	if (ctx.cr6.gt) goto loc_880E3DE4;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3DD0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// mulli r10,r11,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r10.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3DE4:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,35840
	ctx.r10.u64 = ctx.r10.u64 | 35840;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3e4c
	if (ctx.cr6.gt) goto loc_880E3E4C;
	// lwz r10,7904(r3)
	ctx.current_instruction = 0x880E3DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// blt cr6,0x880e3e34
	if (ctx.cr6.lt) goto loc_880E3E34;
	// cmplwi cr6,r4,2000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e3e10
	if (ctx.cr6.lt) goto loc_880E3E10;
	// li r11,2000
	ctx.r11.s64 = 2000;
loc_880E3E10:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3E14;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E3E18;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f9,r3,r12
	ctx.current_instruction = 0x880E3E30;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
loc_880E3E34:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,672(r3)
	ctx.current_instruction = 0x880E3E38;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r6.u32);
	// divw r10,r11,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// subfic r11,r10,30
	ctx.xer.ca = ctx.r10.u32 <= 30;
	ctx.r11.u64 = static_cast<uint64_t>(30) - ctx.r10.u64;
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E3E44;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3E4C:
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// stw r7,672(r3)
	ctx.current_instruction = 0x880E3E50;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r7.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r10.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3E6C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14832(r11)
	ctx.current_instruction = 0x880E3E70;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14832);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3ee0
	if (ctx.cr6.gt) goto loc_880E3EE0;
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x880e3e9c
	if (ctx.cr6.gt) goto loc_880E3E9C;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3E8C;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// stw r5,7932(r3)
	ctx.current_instruction = 0x880E3E90;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r5.u32);
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E3E94;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3E9C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,35840
	ctx.r10.u64 = ctx.r10.u64 | 35840;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3EA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// bgt cr6,0x880e3ecc
	if (ctx.cr6.gt) goto loc_880E3ECC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3EB4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r10.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3ECC:
	// stw r6,672(r3)
	ctx.current_instruction = 0x880E3ECC;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r6.u32);
loc_880E3ED0:
	// mulli r10,r11,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r10.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3EE0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14824(r11)
	ctx.current_instruction = 0x880E3EE4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14824);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3f30
	if (ctx.cr6.gt) goto loc_880E3F30;
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3EF4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x880e3f0c
	if (ctx.cr6.gt) goto loc_880E3F0C;
	// stw r5,7932(r3)
	ctx.current_instruction = 0x880E3F00;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r5.u32);
	// stw r30,7908(r3)
	ctx.current_instruction = 0x880E3F04;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r30.u32);
	// b 0x880e3fdc
	goto loc_880E3FDC;
loc_880E3F0C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,35840
	ctx.r10.u64 = ctx.r10.u64 | 35840;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3F18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// bgt cr6,0x880e3ed0
	if (ctx.cr6.gt) goto loc_880E3ED0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r10.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3F30:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12520(r11)
	ctx.current_instruction = 0x880E3F34;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12520);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3f58
	if (ctx.cr6.gt) goto loc_880E3F58;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E3F44;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r10.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// b 0x880e3fd4
	goto loc_880E3FD4;
loc_880E3F58:
	// lwz r11,8056(r3)
	ctx.current_instruction = 0x880E3F58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3f68
	if (ctx.cr6.eq) goto loc_880E3F68;
	// stw r29,8048(r3)
	ctx.current_instruction = 0x880E3F64;
	REX_STORE_U32(ctx.r3.u32 + 8048, ctx.r29.u32);
loc_880E3F68:
	// lwz r11,1376(r3)
	ctx.current_instruction = 0x880E3F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// lfd f13,7688(r3)
	ctx.current_instruction = 0x880E3F6C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7688);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E3F78;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f12,-64(r1)
	ctx.current_instruction = 0x880E3F7C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E3F84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f13,14816(r10)
	ctx.current_instruction = 0x880E3F8C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14816);
	// fdiv f9,f0,f10
	ctx.f9.f64 = ctx.f0.f64 / ctx.f10.f64;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x880e3fbc
	if (ctx.cr6.lt) goto loc_880E3FBC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,672(r3)
	ctx.current_instruction = 0x880E3FA0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r29.u32);
	// stw r29,7932(r3)
	ctx.current_instruction = 0x880E3FA4;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,24
	ctx.xer.ca = ctx.r11.u32 <= 24;
	ctx.r10.u64 = static_cast<uint64_t>(24) - ctx.r11.u64;
	// b 0x880e3fd8
	goto loc_880E3FD8;
loc_880E3FBC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,672(r3)
	ctx.current_instruction = 0x880E3FC0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r10,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r10.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
loc_880E3FD4:
	// stw r5,7932(r3)
	ctx.current_instruction = 0x880E3FD4;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r5.u32);
loc_880E3FD8:
	// stw r10,7908(r3)
	ctx.current_instruction = 0x880E3FD8;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r10.u32);
loc_880E3FDC:
	// lwz r11,21076(r3)
	ctx.current_instruction = 0x880E3FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21076);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880e3ff0
	if (ctx.cr6.eq) goto loc_880E3FF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e4004
	if (!ctx.cr6.eq) goto loc_880E4004;
loc_880E3FF0:
	// lwz r11,7908(r3)
	ctx.current_instruction = 0x880E3FF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7908);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x880e4004
	if (!ctx.cr6.gt) goto loc_880E4004;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E4000;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
loc_880E4004:
	// lwz r10,7904(r3)
	ctx.current_instruction = 0x880E4004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// blt cr6,0x880e4018
	if (ctx.cr6.lt) goto loc_880E4018;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_880E4018:
	// clrldi r28,r4,32
	ctx.r28.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,7932(r3)
	ctx.current_instruction = 0x880E401C;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r11.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// std r28,-64(r1)
	ctx.current_instruction = 0x880E4024;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r28.u64);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// lfd f9,12088(r11)
	ctx.current_instruction = 0x880E402C;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// subfic r9,r10,30
	ctx.xer.ca = ctx.r10.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r10.u64;
	// stw r9,7908(r3)
	ctx.current_instruction = 0x880E403C;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r9.u32);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E4040;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f13,f12,f9
	ctx.f13.f64 = ctx.f12.f64 * ctx.f9.f64;
	// lfd f12,12392(r11)
	ctx.current_instruction = 0x880E404C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12392);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x880e405c
	if (ctx.cr6.lt) goto loc_880E405C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_880E405C:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// frsp f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E4068;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,14800(r10)
	ctx.current_instruction = 0x880E406C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14800);
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// lfd f11,-64(r1)
	ctx.current_instruction = 0x880E4078;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stfd f5,-64(r1)
	ctx.current_instruction = 0x880E4080;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// lwz r11,-60(r1)
	ctx.current_instruction = 0x880E4084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmul f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f4,f6,f13
	ctx.f4.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-64(r1)
	ctx.current_instruction = 0x880E4098;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f3.u64);
	// lwz r10,-60(r1)
	ctx.current_instruction = 0x880E409C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e40ac
	if (ctx.cr6.gt) goto loc_880E40AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E40AC:
	// lwz r10,7864(r3)
	ctx.current_instruction = 0x880E40AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7864);
	// stw r11,8004(r3)
	ctx.current_instruction = 0x880E40B0;
	REX_STORE_U32(ctx.r3.u32 + 8004, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e40f8
	if (ctx.cr6.eq) goto loc_880E40F8;
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e40cc
	if (ctx.cr6.lt) goto loc_880E40CC;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_880E40CC:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r29,7932(r3)
	ctx.current_instruction = 0x880E40D0;
	REX_STORE_U32(ctx.r3.u32 + 7932, ctx.r29.u32);
	// stw r31,7908(r3)
	ctx.current_instruction = 0x880E40D4;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r31.u32);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E40D8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x880E40DC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f8,r3,r12
	ctx.current_instruction = 0x880E40F4;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f8.u32);
loc_880E40F8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,30408(r3)
	ctx.current_instruction = 0x880E40FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f10,8624(r11)
	ctx.current_instruction = 0x880E4108;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// lfd f11,12416(r9)
	ctx.current_instruction = 0x880E410C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 12416);
	// beq cr6,0x880e42cc
	if (ctx.cr6.eq) goto loc_880E42CC;
	// lwz r11,7596(r3)
	ctx.current_instruction = 0x880E4114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880e42cc
	if (!ctx.cr6.eq) goto loc_880E42CC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,7896(r3)
	ctx.current_instruction = 0x880E4124;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7896);
	// lfd f12,12480(r11)
	ctx.current_instruction = 0x880E4128;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12480);
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x880e4140
	if (!ctx.cr6.gt) goto loc_880E4140;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x880e4174
	goto loc_880E4174;
loc_880E4140:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,12512(r11)
	ctx.current_instruction = 0x880E4144;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12512);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x880e415c
	if (!ctx.cr6.gt) goto loc_880E415C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,12384(r11)
	ctx.current_instruction = 0x880E4154;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12384);
	// b 0x880e4164
	goto loc_880E4164;
loc_880E415C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,12424(r11)
	ctx.current_instruction = 0x880E4160;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12424);
loc_880E4164:
	// fmul f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x880e4174
	if (!ctx.cr6.lt) goto loc_880E4174;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_880E4174:
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e4184
	if (ctx.cr6.lt) goto loc_880E4184;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_880E4184:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfd f12,7704(r3)
	ctx.current_instruction = 0x880E4188;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r3.u32 + 7704);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E4190;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f7,f11
	ctx.f6.f64 = ctx.f7.f64 * ctx.f11.f64;
	// lfd f5,-64(r1)
	ctx.current_instruction = 0x880E419C;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fctiwz f3,f6
	ctx.f3.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f3,-64(r1)
	ctx.current_instruction = 0x880E41A8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f3.u64);
	// lwz r10,-60(r1)
	ctx.current_instruction = 0x880E41AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-64(r1)
	ctx.current_instruction = 0x880E41BC;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r11,-60(r1)
	ctx.current_instruction = 0x880E41C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,8004(r3)
	ctx.current_instruction = 0x880E41C8;
	REX_STORE_U32(ctx.r3.u32 + 8004, ctx.r11.u32);
	// blt cr6,0x880e41d4
	if (ctx.cr6.lt) goto loc_880E41D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E41D4:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r10,1376(r3)
	ctx.current_instruction = 0x880E41D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// stw r11,8004(r3)
	ctx.current_instruction = 0x880E41DC;
	REX_STORE_U32(ctx.r3.u32 + 8004, ctx.r11.u32);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// std r9,-64(r1)
	ctx.current_instruction = 0x880E41E4;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,-56(r1)
	ctx.current_instruction = 0x880E41EC;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r11.u64);
	// lfd f8,-56(r1)
	ctx.current_instruction = 0x880E41F0;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f0,-64(r1)
	ctx.current_instruction = 0x880E41F8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,12296(r4)
	ctx.current_instruction = 0x880E4200;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r4.u32 + 12296);
	// fdiv f0,f12,f7
	ctx.f0.f64 = ctx.f12.f64 / ctx.f7.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880e4218
	if (!ctx.cr6.gt) goto loc_880E4218;
	// stw r5,672(r3)
	ctx.current_instruction = 0x880E4210;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r5.u32);
	// b 0x880e4284
	goto loc_880E4284;
loc_880E4218:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x880e4228
	if (!ctx.cr6.gt) goto loc_880E4228;
	// stw r8,672(r3)
	ctx.current_instruction = 0x880E4220;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// b 0x880e4284
	goto loc_880E4284;
loc_880E4228:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x880e4238
	if (!ctx.cr6.gt) goto loc_880E4238;
	// stw r6,672(r3)
	ctx.current_instruction = 0x880E4230;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r6.u32);
	// b 0x880e4284
	goto loc_880E4284;
loc_880E4238:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14760(r11)
	ctx.current_instruction = 0x880E423C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14760);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880e4250
	if (!ctx.cr6.gt) goto loc_880E4250;
	// stw r7,672(r3)
	ctx.current_instruction = 0x880E4248;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r7.u32);
	// b 0x880e4284
	goto loc_880E4284;
loc_880E4250:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14752(r11)
	ctx.current_instruction = 0x880E4254;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14752);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880e4268
	if (!ctx.cr6.gt) goto loc_880E4268;
	// stw r30,672(r3)
	ctx.current_instruction = 0x880E4260;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r30.u32);
	// b 0x880e4284
	goto loc_880E4284;
loc_880E4268:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14696(r11)
	ctx.current_instruction = 0x880E426C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14696);
	// li r11,18
	ctx.r11.s64 = 18;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e4280
	if (ctx.cr6.gt) goto loc_880E4280;
	// li r11,22
	ctx.r11.s64 = 22;
loc_880E4280:
	// stw r11,672(r3)
	ctx.current_instruction = 0x880E4280;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_880E4284:
	// lwz r10,7908(r3)
	ctx.current_instruction = 0x880E4284;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7908);
	// addi r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 + 14;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// stw r10,7912(r3)
	ctx.current_instruction = 0x880E4290;
	REX_STORE_U32(ctx.r3.u32 + 7912, ctx.r10.u32);
	// ble cr6,0x880e429c
	if (!ctx.cr6.gt) goto loc_880E429C;
	// li r11,30
	ctx.r11.s64 = 30;
loc_880E429C:
	// lwz r10,672(r3)
	ctx.current_instruction = 0x880E429C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// stw r11,30480(r3)
	ctx.current_instruction = 0x880E42A0;
	REX_STORE_U32(ctx.r3.u32 + 30480, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880e42b0
	if (!ctx.cr6.lt) goto loc_880E42B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E42B0:
	// lwz r10,7932(r3)
	ctx.current_instruction = 0x880E42B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7932);
	// stw r11,672(r3)
	ctx.current_instruction = 0x880E42B4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e42c4
	if (ctx.cr6.gt) goto loc_880E42C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E42C4:
	// stw r11,672(r3)
	ctx.current_instruction = 0x880E42C4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// b 0x880e430c
	goto loc_880E430C;
loc_880E42CC:
	// lwz r11,30412(r3)
	ctx.current_instruction = 0x880E42CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e430c
	if (ctx.cr6.eq) goto loc_880E430C;
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x880e42e8
	if (ctx.cr6.lt) goto loc_880E42E8;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_880E42E8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-56(r1)
	ctx.current_instruction = 0x880E42EC;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r11.u64);
	// lfd f13,-56(r1)
	ctx.current_instruction = 0x880E42F0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// li r12,8004
	ctx.r12.s64 = 8004;
	// stfiwx f6,r3,r12
	ctx.current_instruction = 0x880E4308;
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f6.u32);
loc_880E430C:
	// lwz r10,7908(r3)
	ctx.current_instruction = 0x880E430C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7908);
	// lwz r9,672(r3)
	ctx.current_instruction = 0x880E4310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r8,1424(r3)
	ctx.current_instruction = 0x880E4318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r11,-64(r1)
	ctx.current_instruction = 0x880E4320;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// std r7,-56(r1)
	ctx.current_instruction = 0x880E4324;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r7.u64);
	// lfd f0,-56(r1)
	ctx.current_instruction = 0x880E4328;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,688(r3)
	ctx.current_instruction = 0x880E4330;
	REX_STORE_U64(ctx.r3.u32 + 688, ctx.f13.u64);
	// lfd f12,-64(r1)
	ctx.current_instruction = 0x880E4334;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// stw r9,676(r3)
	ctx.current_instruction = 0x880E4338;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r9.u32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// stfd f13,8040(r3)
	ctx.current_instruction = 0x880E4340;
	REX_STORE_U64(ctx.r3.u32 + 8040, ctx.f13.u64);
	// stw r10,8052(r3)
	ctx.current_instruction = 0x880E4344;
	REX_STORE_U32(ctx.r3.u32 + 8052, ctx.r10.u32);
	// stw r9,8028(r3)
	ctx.current_instruction = 0x880E4348;
	REX_STORE_U32(ctx.r3.u32 + 8028, ctx.r9.u32);
	// stw r8,8032(r3)
	ctx.current_instruction = 0x880E434C;
	REX_STORE_U32(ctx.r3.u32 + 8032, ctx.r8.u32);
	// stw r10,7916(r3)
	ctx.current_instruction = 0x880E4350;
	REX_STORE_U32(ctx.r3.u32 + 7916, ctx.r10.u32);
	// fmadd f7,f8,f11,f9
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64);
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-56(r1)
	ctx.current_instruction = 0x880E435C;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f6.u64);
	// lwz r11,-52(r1)
	ctx.current_instruction = 0x880E4360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x880e4370
	if (ctx.cr6.gt) goto loc_880E4370;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_880E4370:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,7924(r3)
	ctx.current_instruction = 0x880E4374;
	REX_STORE_U32(ctx.r3.u32 + 7924, ctx.r11.u32);
	// stw r11,7920(r3)
	ctx.current_instruction = 0x880E4378;
	REX_STORE_U32(ctx.r3.u32 + 7920, ctx.r11.u32);
	// std r8,-56(r1)
	ctx.current_instruction = 0x880E437C;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// lfd f0,-56(r1)
	ctx.current_instruction = 0x880E4380;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f10
	ctx.f12.f64 = ctx.f13.f64 + ctx.f10.f64;
	// fmul f11,f12,f9
	ctx.f11.f64 = ctx.f12.f64 * ctx.f9.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-56(r1)
	ctx.current_instruction = 0x880E4394;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f10.u64);
	// lwz r11,-52(r1)
	ctx.current_instruction = 0x880E4398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x880e43a8
	if (ctx.cr6.gt) goto loc_880E43A8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_880E43A8:
	// stw r11,7928(r3)
	ctx.current_instruction = 0x880E43A8;
	REX_STORE_U32(ctx.r3.u32 + 7928, ctx.r11.u32);
	// stw r10,7912(r3)
	ctx.current_instruction = 0x880E43AC;
	REX_STORE_U32(ctx.r3.u32 + 7912, ctx.r10.u32);
	// stw r9,30640(r3)
	ctx.current_instruction = 0x880E43B0;
	REX_STORE_U32(ctx.r3.u32 + 30640, ctx.r9.u32);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FA2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FA2C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FA2C0) {
			switch (rex_dispatch_address) {
				case 0x880FA310:
				case 0x880FA314:
				case 0x880FA328:
				case 0x880FA348:
				case 0x880FA35C:
				case 0x880FA368:
				case 0x880FA374:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA2C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FA310: goto loc_880FA310;
		case 0x880FA314: goto loc_880FA314;
		case 0x880FA328: goto loc_880FA328;
		case 0x880FA348: goto loc_880FA348;
		case 0x880FA35C: goto loc_880FA35C;
		case 0x880FA368: goto loc_880FA368;
		case 0x880FA374: goto loc_880FA374;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880FA2C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880FA2C8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880FA2CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880FA2D0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880FA2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa304
	if (ctx.cr6.eq) goto loc_880FA304;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880FA2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa304
	if (ctx.cr6.eq) goto loc_880FA304;
	// lwz r11,28136(r3)
	ctx.current_instruction = 0x880FA2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880fa304
	if (!ctx.cr6.eq) goto loc_880FA304;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FA2FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_880FA304:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA308;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA310;
	sub_880E6960(ctx, base);
loc_880FA310:
	// bl 0x881ee8e8
	ctx.lr = 0x880FA314;
	sub_881EE8E8(ctx, base);
loc_880FA314:
	// clrlwi r30,r3,31
	ctx.r30.u64 = ctx.r3.u32 & 0x1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA31C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA328;
	sub_880E6960(ctx, base);
loc_880FA328:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880fa374
	if (ctx.cr6.eq) goto loc_880FA374;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880FA330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa34c
	if (!ctx.cr6.eq) goto loc_880FA34C;
	// lwz r4,2304(r31)
	ctx.current_instruction = 0x880FA340;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2304);
	// bl 0x88073d70
	ctx.lr = 0x880FA348;
	sub_88073D70(ctx, base);
loc_880FA348:
	// b 0x880fa374
	goto loc_880FA374;
loc_880FA34C:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880FA34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa36c
	if (ctx.cr6.eq) goto loc_880FA36C;
	// bl 0x88061460
	ctx.lr = 0x880FA35C;
	sub_88061460(ctx, base);
loc_880FA35C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2304(r31)
	ctx.current_instruction = 0x880FA360;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2304);
	// bl 0x88061460
	ctx.lr = 0x880FA368;
	sub_88061460(ctx, base);
loc_880FA368:
	// b 0x880fa374
	goto loc_880FA374;
loc_880FA36C:
	// lwz r4,2304(r31)
	ctx.current_instruction = 0x880FA36C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2304);
	// bl 0x88061460
	ctx.lr = 0x880FA374;
	sub_88061460(ctx, base);
loc_880FA374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880FA378;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880FA380;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880FA384;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FF460) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FF460;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FF460) {
			switch (rex_dispatch_address) {
				case 0x880FF468:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FF460;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880FF468: goto loc_880FF468;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880FF468;
	__savegprlr_27(ctx, base);
loc_880FF468:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bge cr6,0x880ff5b0
	if (!ctx.cr6.lt) goto loc_880FF5B0;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880FF474;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r27,r6,0,30,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// lwz r7,2544(r3)
	ctx.current_instruction = 0x880FF47C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// add r10,r27,r9
	ctx.r10.u64 = ctx.r27.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhzx r10,r10,r7
	ctx.current_instruction = 0x880FF4A0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x880ff6a0
	if (!ctx.cr6.eq) goto loc_880FF6A0;
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// beq 0x880ff4c8
	if (ctx.cr0.eq) goto loc_880FF4C8;
	// lhz r11,-2(r29)
	ctx.current_instruction = 0x880FF4B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + -2);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x880ff4cc
	if (ctx.cr6.eq) goto loc_880FF4CC;
loc_880FF4C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880FF4CC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// beq cr6,0x880ff4ec
	if (ctx.cr6.eq) goto loc_880FF4EC;
	// lwz r10,2264(r3)
	ctx.current_instruction = 0x880FF4DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2264);
	// lwzx r9,r10,r9
	ctx.current_instruction = 0x880FF4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ff4f4
	if (ctx.cr6.eq) goto loc_880FF4F4;
loc_880FF4EC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x880ff510
	if (!ctx.cr6.gt) goto loc_880FF510;
loc_880FF4F4:
	// subf r10,r28,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r7
	ctx.current_instruction = 0x880FF4FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r6,r10,-16384
	ctx.r6.s64 = ctx.r10.s64 + -16384;
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r10,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_880FF510:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880ff534
	if (!ctx.cr6.eq) goto loc_880FF534;
	// subf r10,r28,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// lhzx r6,r9,r7
	ctx.current_instruction = 0x880FF528;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x880ff538
	if (ctx.cr6.eq) goto loc_880FF538;
loc_880FF534:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880FF538:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880ff554
	if (ctx.cr6.lt) goto loc_880FF554;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880ff564
	if (!ctx.cr6.eq) goto loc_880FF564;
loc_880FF554:
	// lhz r11,2(r29)
	ctx.current_instruction = 0x880FF554;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x880ff568
	if (ctx.cr6.eq) goto loc_880FF568;
loc_880FF564:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880FF568:
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FF568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880ff588
	if (ctx.cr6.lt) goto loc_880FF588;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880ff5a0
	if (!ctx.cr6.eq) goto loc_880FF5A0;
loc_880FF588:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhzx r8,r9,r7
	ctx.current_instruction = 0x880FF594;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// beq cr6,0x880ff5a4
	if (ctx.cr6.eq) goto loc_880FF5A4;
loc_880FF5A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880FF5A4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880FF5B0:
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880FF5B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,2552(r3)
	ctx.current_instruction = 0x880FF5B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2552);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r11,r11,r8
	ctx.current_instruction = 0x880FF5C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x880ff6a0
	if (!ctx.cr6.eq) goto loc_880FF6A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880ff5f0
	if (ctx.cr6.eq) goto loc_880FF5F0;
	// lhz r11,-2(r10)
	ctx.current_instruction = 0x880FF5E0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x880ff5f0
	if (!ctx.cr6.eq) goto loc_880FF5F0;
	// li r6,3
	ctx.r6.s64 = 3;
loc_880FF5F0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880ff640
	if (ctx.cr6.eq) goto loc_880FF640;
	// lwz r11,2264(r3)
	ctx.current_instruction = 0x880FF5F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2264);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x880FF600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ff640
	if (!ctx.cr6.eq) goto loc_880FF640;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r31,0(r11)
	ctx.current_instruction = 0x880FF618;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// bne cr6,0x880ff628
	if (!ctx.cr6.eq) goto loc_880FF628;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_880FF628:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880ff640
	if (ctx.cr6.eq) goto loc_880FF640;
	// lhz r11,-2(r11)
	ctx.current_instruction = 0x880FF630;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x880ff640
	if (!ctx.cr6.eq) goto loc_880FF640;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
loc_880FF640:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880ff65c
	if (!ctx.cr6.lt) goto loc_880FF65C;
	// lhz r11,2(r10)
	ctx.current_instruction = 0x880FF64C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x880ff660
	if (ctx.cr6.eq) goto loc_880FF660;
loc_880FF65C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880FF660:
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FF660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x880ff690
	if (!ctx.cr6.lt) goto loc_880FF690;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhzx r8,r9,r8
	ctx.current_instruction = 0x880FF684;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// beq cr6,0x880ff694
	if (ctx.cr6.eq) goto loc_880FF694;
loc_880FF690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880FF694:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880FF6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88105760) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88105760;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88105760) {
			switch (rex_dispatch_address) {
				case 0x88105768:
				case 0x88105808:
				case 0x88105830:
				case 0x88105858:
				case 0x88105880:
				case 0x881058A8:
				case 0x881058D0:
				case 0x881058F8:
				case 0x88105920:
				case 0x8810594C:
				case 0x88105974:
				case 0x88105998:
				case 0x881059B8:
				case 0x881059DC:
				case 0x881059FC:
				case 0x88105A28:
				case 0x88105A50:
				case 0x88105A7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88105760;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88105768: goto loc_88105768;
		case 0x88105808: goto loc_88105808;
		case 0x88105830: goto loc_88105830;
		case 0x88105858: goto loc_88105858;
		case 0x88105880: goto loc_88105880;
		case 0x881058A8: goto loc_881058A8;
		case 0x881058D0: goto loc_881058D0;
		case 0x881058F8: goto loc_881058F8;
		case 0x88105920: goto loc_88105920;
		case 0x8810594C: goto loc_8810594C;
		case 0x88105974: goto loc_88105974;
		case 0x88105998: goto loc_88105998;
		case 0x881059B8: goto loc_881059B8;
		case 0x881059DC: goto loc_881059DC;
		case 0x881059FC: goto loc_881059FC;
		case 0x88105A28: goto loc_88105A28;
		case 0x88105A50: goto loc_88105A50;
		case 0x88105A7C: goto loc_88105A7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88105768;
	__savegprlr_28(ctx, base);
loc_88105768:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88105768;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x88105a7c
	if (ctx.cr6.gt) goto loc_88105A7C;
	// lis r12,-30704
	ctx.r12.s64 = -2012217344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22436
	ctx.r12.s64 = ctx.r12.s64 + 22436;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x88105798;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_881057E0;
	case 1:
		goto loc_88105810;
	case 2:
		goto loc_88105838;
	case 3:
		goto loc_88105860;
	case 4:
		goto loc_88105888;
	case 5:
		goto loc_881058D8;
	case 6:
		goto loc_88105900;
	case 7:
		goto loc_88105928;
	case 8:
		goto loc_88105930;
	case 9:
		goto loc_8810597C;
	case 10:
		goto loc_881059C0;
	case 11:
		goto loc_88105A04;
	case 12:
		goto loc_88105A0C;
	case 13:
		goto loc_88105A58;
	case 14:
		goto loc_88105A60;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_881057E0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x881057E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88105808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105810:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105830:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105838:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105860:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105888:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105888;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881058A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881058A8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2160(r30)
	ctx.current_instruction = 0x881058AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x881058D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881058D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881058D8:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x881058D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881058F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881058F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105900:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,12
	ctx.r6.s64 = 12;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105920:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105928:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x88105a64
	goto loc_88105A64;
loc_88105930:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x88105930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8810594C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8810594C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2160(r30)
	ctx.current_instruction = 0x88105950;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88105974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8810597C:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x8810597C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105998:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881059B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881059B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881059C0:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x881059C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881059DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881059DC:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x881059DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881059FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881059FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105A04:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x88105a64
	goto loc_88105A64;
loc_88105A0C:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x88105A0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105A28:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2160(r30)
	ctx.current_instruction = 0x88105A2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88105A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105A50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88105A58:
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x88105a64
	goto loc_88105A64;
loc_88105A60:
	// li r6,16
	ctx.r6.s64 = 16;
loc_88105A64:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x88105A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810BDE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810BDE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810BDE0) {
			switch (rex_dispatch_address) {
				case 0x8810BDE8:
				case 0x8810BE44:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810BDE0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810BDE8: goto loc_8810BDE8;
		case 0x8810BE44: goto loc_8810BE44;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x8810BDE8;
	__savegprlr_17(ctx, base);
loc_8810BDE8:
	// stwu r1,-352(r1)
	ctx.current_instruction = 0x8810BDE8;
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// addi r11,r11,5552
	ctx.r11.s64 = ctx.r11.s64 + 5552;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8810bf4c
	if (!ctx.cr6.eq) goto loc_8810BF4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8810be5c
	if (!ctx.cr6.eq) goto loc_8810BE5C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8810c1b0
	if (!ctx.cr6.gt) goto loc_8810C1B0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_8810BE34:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x8810BE44;
	sub_880547A0(ctx, base);
loc_8810BE44:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bne 0x8810be34
	if (!ctx.cr0.eq) goto loc_8810BE34;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810BE5C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// beq cr6,0x8810be6c
	if (ctx.cr6.eq) goto loc_8810BE6C;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8810BE6C:
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r11,436(r1)
	ctx.current_instruction = 0x8810BE70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x8810c1b0
	if (!ctx.cr6.gt) goto loc_8810C1B0;
	// subf r7,r27,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r27.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8810BE98:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8810bf34
	if (!ctx.cr6.gt) goto loc_8810BF34;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_8810BEB4:
	// lhz r9,4(r6)
	ctx.current_instruction = 0x8810BEB4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lhz r29,6(r6)
	ctx.current_instruction = 0x8810BEBC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lhz r9,2(r6)
	ctx.current_instruction = 0x8810BEC4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r26,0(r6)
	ctx.current_instruction = 0x8810BECC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// lbzx r24,r7,r10
	ctx.current_instruction = 0x8810BED4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x8810BED8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lbzx r23,r5,r11
	ctx.current_instruction = 0x8810BEE0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r22,r11,r27
	ctx.current_instruction = 0x8810BEE4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r23,r28
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r22,r25
	ctx.r9.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r26,r24
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sraw. r11,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8810bf18
	if (!ctx.cr0.lt) goto loc_8810BF18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8810bf24
	goto loc_8810BF24;
loc_8810BF18:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8810bf24
	if (!ctx.cr6.gt) goto loc_8810BF24;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8810BF24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r30,r10
	ctx.current_instruction = 0x8810BF28;
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8810beb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810BEB4;
loc_8810BF34:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// bne 0x8810be98
	if (!ctx.cr0.eq) goto loc_8810BE98;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810BF4C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8810c02c
	if (!ctx.cr6.eq) goto loc_8810C02C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// beq cr6,0x8810bf64
	if (ctx.cr6.eq) goto loc_8810BF64;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8810BF64:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8810BF68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// subf r31,r10,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble cr6,0x8810c1b0
	if (!ctx.cr6.gt) goto loc_8810C1B0;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
loc_8810BF84:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8810c014
	if (!ctx.cr6.gt) goto loc_8810C014;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_8810BF94:
	// lhz r9,6(r7)
	ctx.current_instruction = 0x8810BF94;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lhz r3,4(r7)
	ctx.current_instruction = 0x8810BF9C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r9,2(r7)
	ctx.current_instruction = 0x8810BFA4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r29,0(r7)
	ctx.current_instruction = 0x8810BFAC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lbzx r26,r6,r10
	ctx.current_instruction = 0x8810BFB4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x8810BFB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lbz r25,3(r11)
	ctx.current_instruction = 0x8810BFC0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r24,1(r11)
	ctx.current_instruction = 0x8810BFC4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r24,r28
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r26,r29
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sraw. r11,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r11.s64 = ctx.r3.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8810bff8
	if (!ctx.cr0.lt) goto loc_8810BFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8810c004
	goto loc_8810C004;
loc_8810BFF8:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8810c004
	if (!ctx.cr6.gt) goto loc_8810C004;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8810C004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r5,r10
	ctx.current_instruction = 0x8810C008;
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8810bf94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810BF94;
loc_8810C014:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// bne 0x8810bf84
	if (!ctx.cr0.eq) goto loc_8810BF84;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810C02C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x8810c03c
	if (ctx.cr6.eq) goto loc_8810C03C;
	// li r9,6
	ctx.r9.s64 = 6;
loc_8810C03C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x8810c04c
	if (ctx.cr6.eq) goto loc_8810C04C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8810C04C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8810C050;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r26,r11,-7
	ctx.r26.s64 = ctx.r11.s64 + -7;
	// subfic r23,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r23.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r4,r26,-1
	ctx.r4.s64 = ctx.r26.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r11,r9,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x8810c1b0
	if (!ctx.cr6.gt) goto loc_8810C1B0;
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r27.u64;
	// addi r22,r20,3
	ctx.r22.s64 = ctx.r20.s64 + 3;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
loc_8810C088:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8810c10c
	if (!ctx.cr6.gt) goto loc_8810C10C;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r6)
	ctx.current_instruction = 0x8810C094;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lhz r8,4(r6)
	ctx.current_instruction = 0x8810C09C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// lhz r29,2(r6)
	ctx.current_instruction = 0x8810C0A0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// add r4,r27,r10
	ctx.r4.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lhz r28,0(r6)
	ctx.current_instruction = 0x8810C0A8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r31,r27,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8810C0CC:
	// lbzx r9,r11,r27
	ctx.current_instruction = 0x8810C0CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r8,r11,r31
	ctx.current_instruction = 0x8810C0D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lbzx r18,r11,r4
	ctx.current_instruction = 0x8810C0D8;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r17,0(r11)
	ctx.current_instruction = 0x8810C0DC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r18,r3
	ctx.r8.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r17,r28
	ctx.r8.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// sraw r9,r9,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x8810C104;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8810c0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C0CC;
loc_8810C10C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8810c1a0
	if (!ctx.cr6.gt) goto loc_8810C1A0;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8810C120:
	// lhz r10,6(r7)
	ctx.current_instruction = 0x8810C120;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r9,2(r7)
	ctx.current_instruction = 0x8810C124;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x8810C128;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwz r31,-4(r11)
	ctx.current_instruction = 0x8810C130;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r30,0(r7)
	ctx.current_instruction = 0x8810C138;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r4,-8(r11)
	ctx.current_instruction = 0x8810C140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lhz r3,4(r7)
	ctx.current_instruction = 0x8810C144;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lwz r29,0(r11)
	ctx.current_instruction = 0x8810C148;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r31,r4
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r4,r29
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// srawi. r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8810c180
	if (!ctx.cr0.lt) goto loc_8810C180;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8810c18c
	goto loc_8810C18C;
loc_8810C180:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8810c18c
	if (!ctx.cr6.gt) goto loc_8810C18C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8810C18C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbx r10,r8,r5
	ctx.current_instruction = 0x8810C194;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8810c120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C120;
loc_8810C1A0:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r24,r24,r27
	ctx.r24.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// bne 0x8810c088
	if (!ctx.cr0.eq) goto loc_8810C088;
loc_8810C1B0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88112DC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88112DC0) {
			switch (rex_dispatch_address) {
				case 0x88112DC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88112DC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88112DC8: goto loc_88112DC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88112DC8;
	__savegprlr_22(ctx, base);
loc_88112DC8:
	// lwz r10,116(r3)
	ctx.current_instruction = 0x88112DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r11,96(r3)
	ctx.current_instruction = 0x88112DD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r6,120(r3)
	ctx.current_instruction = 0x88112DD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,132(r3)
	ctx.current_instruction = 0x88112DDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lhz r7,14(r10)
	ctx.current_instruction = 0x88112DE4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88112DEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r31,r9,31
	ctx.r31.s64 = ctx.r9.s64 + 31;
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r31,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// rlwinm r30,r10,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// mullw r28,r31,r11
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// rlwinm r27,r9,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// divw r24,r30,r11
	ctx.r24.u64 = uint32_t((ctx.r11.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r30.s32 / ctx.r11.s32 : 0);
	// rotlwi r31,r30,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// srawi r27,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 3;
	// rotlwi r30,r28,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// rlwinm r7,r24,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addze r25,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r25.s64 = temp.s64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// andc r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// addi r27,r7,-1
	ctx.r27.s64 = ctx.r7.s64 + -1;
	// andc r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 & ~ctx.r30.u64;
	// mullw r7,r25,r4
	ctx.r7.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// twlgei r31,-1
	if (ctx.r31.s32 == -1 || ctx.r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r26,r28,r10
	ctx.r26.u64 = uint32_t((ctx.r10.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r28.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r30,-1
	if (ctx.r30.s32 == -1 || ctx.r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r23,r29,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r29.u64;
	// and r31,r27,r24
	ctx.r31.u64 = ctx.r27.u64 & ctx.r24.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bge cr6,0x88112f78
	if (!ctx.cr6.lt) goto loc_88112F78;
	// subf r24,r4,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_88112E78:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88112f14
	if (!ctx.cr6.gt) goto loc_88112F14;
	// addi r4,r7,3
	ctx.r4.s64 = ctx.r7.s64 + 3;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// addi r28,r7,2
	ctx.r28.s64 = ctx.r7.s64 + 2;
	// addi r27,r7,5
	ctx.r27.s64 = ctx.r7.s64 + 5;
loc_88112E9C:
	// srawi r10,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 7;
	// clrlwi r22,r9,25
	ctx.r22.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r22,128
	ctx.xer.ca = ctx.r22.u32 <= 128;
	ctx.r8.u64 = static_cast<uint64_t>(128) - ctx.r22.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r6,r4,r10
	ctx.current_instruction = 0x88112EB4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r5,r10,r7
	ctx.current_instruction = 0x88112EB8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r22.s32);
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// stb r5,0(r11)
	ctx.current_instruction = 0x88112ECC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r6,r29,r10
	ctx.current_instruction = 0x88112ED0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lbzx r5,r30,r10
	ctx.current_instruction = 0x88112ED4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r22.s32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// srawi r6,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 7;
	// stbu r6,1(r11)
	ctx.current_instruction = 0x88112EE8;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzx r6,r27,r10
	ctx.current_instruction = 0x88112EEC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// lbzx r5,r28,r10
	ctx.current_instruction = 0x88112EF0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r22
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r22.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbu r6,1(r11)
	ctx.current_instruction = 0x88112F08;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88112e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112E9C;
loc_88112F14:
	// lwz r10,96(r3)
	ctx.current_instruction = 0x88112F14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88112f68
	if (!ctx.cr6.lt) goto loc_88112F68;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
loc_88112F2C:
	// srawi r10,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r6,r10,r7
	ctx.current_instruction = 0x88112F40;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r6,0(r11)
	ctx.current_instruction = 0x88112F44;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r5,r10
	ctx.current_instruction = 0x88112F48;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stbu r6,1(r11)
	ctx.current_instruction = 0x88112F4C;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzx r10,r4,r10
	ctx.current_instruction = 0x88112F50;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stbu r10,1(r11)
	ctx.current_instruction = 0x88112F54;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// lwz r6,96(r3)
	ctx.current_instruction = 0x88112F58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88112f2c
	if (ctx.cr6.lt) goto loc_88112F2C;
loc_88112F68:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// bne 0x88112e78
	if (!ctx.cr0.eq) goto loc_88112E78;
loc_88112F78:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881198A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881198A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881198A8) {
			switch (rex_dispatch_address) {
				case 0x881198B0:
				case 0x8811990C:
				case 0x88119970:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881198A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881198B0: goto loc_881198B0;
		case 0x8811990C: goto loc_8811990C;
		case 0x88119970: goto loc_88119970;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881198B0;
	__savegprlr_21(ctx, base);
loc_881198B0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881198B0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	ctx.current_instruction = 0x881198B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
loc_881198DC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881198DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8811993c
	if (!ctx.cr6.eq) goto loc_8811993C;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881198E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.current_instruction = 0x881198F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88119900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811990C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811990C:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119998
	if (ctx.cr6.lt) goto loc_88119998;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88119918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// ld r11,8(r27)
	ctx.current_instruction = 0x88119920;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r27)
	ctx.current_instruction = 0x88119928;
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x8811992C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88119930;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r28)
	ctx.current_instruction = 0x88119938;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_8811993C:
	// lwz r31,0(r30)
	ctx.current_instruction = 0x8811993C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8811994c
	if (!ctx.cr6.gt) goto loc_8811994C;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8811994C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x88119970
	if (ctx.cr6.eq) goto loc_88119970;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x881199a4
	if (ctx.cr6.gt) goto loc_881199A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r24)
	ctx.current_instruction = 0x88119964;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r3,r25,r21
	ctx.r3.u64 = ctx.r25.u64 + ctx.r21.u64;
	// bl 0x880547a0
	ctx.lr = 0x88119970;
	sub_880547A0(ctx, base);
loc_88119970:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88119970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subf. r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r31.u64;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r10,0(r30)
	ctx.current_instruction = 0x88119984;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bgt 0x881198dc
	if (ctx.cr0.gt) goto loc_881198DC;
	// lwz r11,0(r24)
	ctx.current_instruction = 0x8811998C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r24)
	ctx.current_instruction = 0x88119994;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_88119998:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881199A4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811CAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811CAB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811CAB0) {
			switch (rex_dispatch_address) {
				case 0x8811CAB8:
				case 0x8811CAF8:
				case 0x8811CB4C:
				case 0x8811CB94:
				case 0x8811CBCC:
				case 0x8811CC20:
				case 0x8811CC40:
				case 0x8811CC78:
				case 0x8811CCA0:
				case 0x8811CCC8:
				case 0x8811CCEC:
				case 0x8811CD14:
				case 0x8811CD40:
				case 0x8811CD5C:
				case 0x8811CD84:
				case 0x8811CDF0:
				case 0x8811CE0C:
				case 0x8811CE34:
				case 0x8811CE94:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811CAB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811CAB8: goto loc_8811CAB8;
		case 0x8811CAF8: goto loc_8811CAF8;
		case 0x8811CB4C: goto loc_8811CB4C;
		case 0x8811CB94: goto loc_8811CB94;
		case 0x8811CBCC: goto loc_8811CBCC;
		case 0x8811CC20: goto loc_8811CC20;
		case 0x8811CC40: goto loc_8811CC40;
		case 0x8811CC78: goto loc_8811CC78;
		case 0x8811CCA0: goto loc_8811CCA0;
		case 0x8811CCC8: goto loc_8811CCC8;
		case 0x8811CCEC: goto loc_8811CCEC;
		case 0x8811CD14: goto loc_8811CD14;
		case 0x8811CD40: goto loc_8811CD40;
		case 0x8811CD5C: goto loc_8811CD5C;
		case 0x8811CD84: goto loc_8811CD84;
		case 0x8811CDF0: goto loc_8811CDF0;
		case 0x8811CE0C: goto loc_8811CE0C;
		case 0x8811CE34: goto loc_8811CE34;
		case 0x8811CE94: goto loc_8811CE94;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x8811CAB8;
	__savegprlr_20(ctx, base);
loc_8811CAB8:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8811CAB8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r24,28(r3)
	ctx.current_instruction = 0x8811CAC0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r22,r4,-24
	ctx.r22.s64 = ctx.r4.s64 + -24;
	// stw r30,96(r1)
	ctx.current_instruction = 0x8811CAC8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x8811CAD0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x8811CAD8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x8811CADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811CAE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r22,88(r1)
	ctx.current_instruction = 0x8811CAEC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// sth r30,80(r1)
	ctx.current_instruction = 0x8811CAF0;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bctrl 
	ctx.lr = 0x8811CAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811CAF8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lwz r11,4(r24)
	ctx.current_instruction = 0x8811CB04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.current_instruction = 0x8811CB08;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8811cb2c
	if (!ctx.cr6.gt) goto loc_8811CB2C;
loc_8811CB18:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8811CB2C:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x8811cb18
	if (ctx.cr6.lt) goto loc_8811CB18;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811CB4C;
	sub_88119210(ctx, base);
loc_8811CB4C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lhz r28,80(r1)
	ctx.current_instruction = 0x8811CB58;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8811cbb8
	if (!ctx.cr6.eq) goto loc_8811CBB8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811CB6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r11.u64;
	// addic. r30,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r30.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811ceb0
	if (ctx.cr0.eq) goto loc_8811CEB0;
	// lwz r11,0(r24)
	ctx.current_instruction = 0x8811CB7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811CB88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811CB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811CB94:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// ld r11,8(r24)
	ctx.current_instruction = 0x8811CBA0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	ctx.current_instruction = 0x8811CBAC;
	REX_STORE_U64(ctx.r24.u32 + 8, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8811CBB8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,224(r24)
	ctx.current_instruction = 0x8811CBBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811CBCC;
	sub_880CB2C0(ctx, base);
loc_8811CBCC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8811CBD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	ctx.current_instruction = 0x8811CBE4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r10)
	ctx.current_instruction = 0x8811CBEC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// add r9,r21,r11
	ctx.r9.u64 = ctx.r21.u64 + ctx.r11.u64;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,4(r24)
	ctx.current_instruction = 0x8811CBFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r7,96(r1)
	ctx.current_instruction = 0x8811CC00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,96(r8)
	ctx.current_instruction = 0x8811CC04;
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r7.u32);
	// lwz r6,96(r1)
	ctx.current_instruction = 0x8811CC08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r28,0(r6)
	ctx.current_instruction = 0x8811CC0C;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r28.u16);
	// lwz r3,224(r24)
	ctx.current_instruction = 0x8811CC10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8811CC14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x880cb2c0
	ctx.lr = 0x8811CC20;
	sub_880CB2C0(ctx, base);
loc_8811CC20:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8811CC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x8811CC38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88052d90
	ctx.lr = 0x8811CC40;
	sub_88052D90(ctx, base);
loc_8811CC40:
	// lwz r10,96(r1)
	ctx.current_instruction = 0x8811CC40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r26,4(r10)
	ctx.current_instruction = 0x8811CC4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8811ce5c
	if (ctx.cr6.eq) goto loc_8811CE5C;
loc_8811CC54:
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811cb18
	if (ctx.cr6.gt) goto loc_8811CB18;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811CC78;
	sub_88119210(ctx, base);
loc_8811CC78:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// addi r30,r26,6
	ctx.r30.s64 = ctx.r26.s64 + 6;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811CCA0;
	sub_88119210(ctx, base);
loc_8811CCA0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811CCC8;
	sub_88119210(ctx, base);
loc_8811CCC8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811CCEC;
	sub_88119210(ctx, base);
loc_8811CCEC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// addi r25,r26,8
	ctx.r25.s64 = ctx.r26.s64 + 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119390
	ctx.lr = 0x8811CD14;
	sub_88119390(ctx, base);
loc_8811CD14:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lhz r5,0(r28)
	ctx.current_instruction = 0x8811CD20;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8811cdd0
	if (ctx.cr6.eq) goto loc_8811CDD0;
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
	// lwz r3,224(r24)
	ctx.current_instruction = 0x8811CD30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811CD40;
	sub_880CB2C0(ctx, base);
loc_8811CD40:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r28)
	ctx.current_instruction = 0x8811CD50;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x8811CD54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x8811CD5C;
	sub_88052D90(ctx, base);
loc_8811CD5C:
	// lhz r5,0(r28)
	ctx.current_instruction = 0x8811CD5C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// add r29,r27,r5
	ctx.r29.u64 = ctx.r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811cb18
	if (ctx.cr6.gt) goto loc_8811CB18;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x8811CD70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811CD84;
	sub_881198A8(ctx, base);
loc_8811CD84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// lwz r11,76(r24)
	ctx.current_instruction = 0x8811CD90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 76);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811cdd0
	if (ctx.cr6.eq) goto loc_8811CDD0;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x8811CDA0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8811CDA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8811cdd0
	if (!ctx.cr6.gt) goto loc_8811CDD0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811CDBC:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811CDBC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811CDC0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811CDC4;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811CDC8;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811cdbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811CDBC;
loc_8811CDD0:
	// lwz r5,0(r25)
	ctx.current_instruction = 0x8811CDD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8811ce44
	if (ctx.cr6.eq) goto loc_8811CE44;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// lwz r3,224(r24)
	ctx.current_instruction = 0x8811CDE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811CDF0;
	sub_880CB2C0(ctx, base);
loc_8811CDF0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.current_instruction = 0x8811CE00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x8811CE04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x8811CE0C;
	sub_88052D90(ctx, base);
loc_8811CE0C:
	// lwz r5,0(r25)
	ctx.current_instruction = 0x8811CE0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r29,r27,r5
	ctx.r29.u64 = ctx.r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811cb18
	if (ctx.cr6.gt) goto loc_8811CB18;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x8811CE20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811CE34;
	sub_881198A8(ctx, base);
loc_8811CE34:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8811CE44:
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8811cc54
	if (ctx.cr6.lt) goto loc_8811CC54;
loc_8811CE5C:
	// lwz r11,4(r24)
	ctx.current_instruction = 0x8811CE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.current_instruction = 0x8811CE60;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,54(r11)
	ctx.current_instruction = 0x8811CE68;
	REX_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8811CE6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r7.u64;
	// subf. r30,r27,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811ceb0
	if (ctx.cr0.eq) goto loc_8811CEB0;
	// lwz r11,0(r24)
	ctx.current_instruction = 0x8811CE7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811CE88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811CE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811CE94:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ceb0
	if (ctx.cr6.lt) goto loc_8811CEB0;
	// ld r10,8(r24)
	ctx.current_instruction = 0x8811CEA0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r24.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r24)
	ctx.current_instruction = 0x8811CEAC;
	REX_STORE_U64(ctx.r24.u32 + 8, ctx.r11.u64);
loc_8811CEB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123FC8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88123FC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123FC8;
	ctx.current_instruction = 0x88123FC8;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x88123FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88123FCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88123FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124048
	if (ctx.cr6.eq) goto loc_88124048;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88123FE0:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88123FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88123FE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.current_instruction = 0x88123FE8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8812402c
	if (ctx.cr6.eq) goto loc_8812402C;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x88124010
	if (ctx.cr6.lt) goto loc_88124010;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x88124020
	if (ctx.cr6.lt) goto loc_88124020;
	// b 0x8812402c
	goto loc_8812402C;
loc_88124010:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x8812402c
	if (!ctx.cr6.gt) goto loc_8812402C;
loc_88124020:
	// lwz r10,4(r8)
	ctx.current_instruction = 0x88124020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r8)
	ctx.current_instruction = 0x88124028;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8812402C:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x88124048
	if (ctx.cr6.lt) goto loc_88124048;
	// lwz r8,8(r8)
	ctx.current_instruction = 0x8812403C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88123fe0
	if (!ctx.cr6.eq) goto loc_88123FE0;
loc_88124048:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88124E18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124E18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124E18) {
			switch (rex_dispatch_address) {
				case 0x88124F20:
				case 0x88124F38:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124E18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88124F20: goto loc_88124F20;
		case 0x88124F38: goto loc_88124F38;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88124E1C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88124E20;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88124E24;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88124E28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r1)
	ctx.current_instruction = 0x88124E30;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88124E34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124e68
	if (ctx.cr6.eq) goto loc_88124E68;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88124E40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124E48;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x88124e68
	if (ctx.cr6.eq) goto loc_88124E68;
loc_88124E50:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88124e84
	if (ctx.cr6.eq) goto loc_88124E84;
	// lwz r11,40(r11)
	ctx.current_instruction = 0x88124E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124E60;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x88124e50
	if (!ctx.cr6.eq) goto loc_88124E50;
loc_88124E68:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88124E74;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88124E7C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88124E84:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88124E84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88124e9c
	if (!ctx.cr6.eq) goto loc_88124E9C;
	// lwz r11,40(r11)
	ctx.current_instruction = 0x88124E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,8(r31)
	ctx.current_instruction = 0x88124E94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88124E9C:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88124E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88124ec0
	if (!ctx.cr6.eq) goto loc_88124EC0;
	// lwz r11,36(r10)
	ctx.current_instruction = 0x88124EA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	ctx.current_instruction = 0x88124EB0;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x88124ef4
	if (ctx.cr6.eq) goto loc_88124EF4;
	// stw r9,40(r11)
	ctx.current_instruction = 0x88124EB8;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x88124ef4
	goto loc_88124EF4;
loc_88124EC0:
	// lwz r10,40(r11)
	ctx.current_instruction = 0x88124EC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88124edc
	if (ctx.cr6.eq) goto loc_88124EDC;
	// lwz r8,36(r11)
	ctx.current_instruction = 0x88124ECC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,36(r10)
	ctx.current_instruction = 0x88124ED4;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88124EDC:
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88124EDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88124ef4
	if (ctx.cr6.eq) goto loc_88124EF4;
	// lwz r8,40(r11)
	ctx.current_instruction = 0x88124EE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,40(r10)
	ctx.current_instruction = 0x88124EF0;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
loc_88124EF4:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88124EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88124EFC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x88124f0c
	if (!ctx.cr0.eq) goto loc_88124F0C;
	// stw r9,4(r31)
	ctx.current_instruction = 0x88124F04;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r9,8(r31)
	ctx.current_instruction = 0x88124F08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_88124F0C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88124F14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x880cb318
	ctx.lr = 0x88124F20;
	sub_880CB318(ctx, base);
loc_88124F20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88124f38
	if (ctx.cr6.lt) goto loc_88124F38;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88124F2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x88124F38;
	sub_880CB318(ctx, base);
loc_88124F38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88124F3C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88124F44;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881289B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881289B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881289B8) {
			switch (rex_dispatch_address) {
				case 0x881289D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881289B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881289D8: goto loc_881289D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881289BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881289C0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r3,520
	ctx.r4.s64 = ctx.r3.s64 + 520;
	// addi r3,r3,524
	ctx.r3.s64 = ctx.r3.s64 + 524;
	// lwz r5,96(r7)
	ctx.current_instruction = 0x881289D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// bl 0x88128908
	ctx.lr = 0x881289D8;
	sub_88128908(ctx, base);
loc_881289D8:
	// lwz r10,100(r7)
	ctx.current_instruction = 0x881289D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881289f0
	if (!ctx.cr6.eq) goto loc_881289F0;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// b 0x881289f8
	goto loc_881289F8;
loc_881289F0:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r9,r11,32304
	ctx.r9.s64 = ctx.r11.s64 + 32304;
loc_881289F8:
	// stw r9,488(r7)
	ctx.current_instruction = 0x881289F8;
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88128a30
	if (!ctx.cr6.eq) goto loc_88128A30;
	// lwz r11,96(r7)
	ctx.current_instruction = 0x88128A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x88128a1c
	if (!ctx.cr6.eq) goto loc_88128A1C;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r9,r11,23864
	ctx.r9.s64 = ctx.r11.s64 + 23864;
	// b 0x88128a2c
	goto loc_88128A2C;
loc_88128A1C:
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// bne cr6,0x88128a30
	if (!ctx.cr6.eq) goto loc_88128A30;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r9,r11,25112
	ctx.r9.s64 = ctx.r11.s64 + 25112;
loc_88128A2C:
	// stw r9,488(r7)
	ctx.current_instruction = 0x88128A2C;
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
loc_88128A30:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x88128a48
	if (!ctx.cr6.eq) goto loc_88128A48;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r10,r11,26072
	ctx.r10.s64 = ctx.r11.s64 + 26072;
	// stw r10,488(r7)
	ctx.current_instruction = 0x88128A44;
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r10.u32);
loc_88128A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88128A4C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812A9A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812A9A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812A9A0) {
			switch (rex_dispatch_address) {
				case 0x8812A9A8:
				case 0x8812AA00:
				case 0x8812AA38:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812A9A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812A9A8: goto loc_8812A9A8;
		case 0x8812AA00: goto loc_8812AA00;
		case 0x8812AA38: goto loc_8812AA38;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8812A9A8;
	__savegprlr_26(ctx, base);
loc_8812A9A8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8812A9A8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.current_instruction = 0x8812A9AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r28,716(r3)
	ctx.current_instruction = 0x8812A9BC;
	REX_STORE_U32(ctx.r3.u32 + 716, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,648(r3)
	ctx.current_instruction = 0x8812A9C4;
	REX_STORE_U32(ctx.r3.u32 + 648, ctx.r10.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812aa78
	if (!ctx.cr6.gt) goto loc_8812AA78;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812A9DC:
	// lwz r10,584(r29)
	ctx.current_instruction = 0x8812A9DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x8812A9E8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// bl 0x88052d90
	ctx.lr = 0x8812AA00;
	sub_88052D90(ctx, base);
loc_8812AA00:
	// stw r28,468(r31)
	ctx.current_instruction = 0x8812AA00;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// stw r28,472(r31)
	ctx.current_instruction = 0x8812AA04;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stw r28,476(r31)
	ctx.current_instruction = 0x8812AA08;
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r28.u32);
	// stw r28,480(r31)
	ctx.current_instruction = 0x8812AA0C;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// lhz r7,182(r31)
	ctx.current_instruction = 0x8812AA10;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812aa54
	if (!ctx.cr6.gt) goto loc_8812AA54;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8812AA24:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x88141d38
	ctx.lr = 0x8812AA38;
	sub_88141D38(ctx, base);
loc_8812AA38:
	// lhz r9,182(r31)
	ctx.current_instruction = 0x8812AA38;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8812aa24
	if (ctx.cr6.lt) goto loc_8812AA24;
loc_8812AA54:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stw r28,188(r31)
	ctx.current_instruction = 0x8812AA58;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// lhz r10,580(r29)
	ctx.current_instruction = 0x8812AA5C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812a9dc
	if (ctx.cr6.lt) goto loc_8812A9DC;
loc_8812AA78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812D9B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812D9B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812D9B8) {
			switch (rex_dispatch_address) {
				case 0x8812D9C0:
				case 0x8812D9C8:
				case 0x8812DAC8:
				case 0x8812DAD8:
				case 0x8812DAE8:
				case 0x8812DAFC:
				case 0x8812DB0C:
				case 0x8812DB48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812D9B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812D9C0: goto loc_8812D9C0;
		case 0x8812D9C8: goto loc_8812D9C8;
		case 0x8812DAC8: goto loc_8812DAC8;
		case 0x8812DAD8: goto loc_8812DAD8;
		case 0x8812DAE8: goto loc_8812DAE8;
		case 0x8812DAFC: goto loc_8812DAFC;
		case 0x8812DB0C: goto loc_8812DB0C;
		case 0x8812DB48: goto loc_8812DB48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8812D9C0;
	__savegprlr_28(ctx, base);
loc_8812D9C0:
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x881ef280
	ctx.lr = 0x8812D9C8;
	__savefpr_26(ctx, base);
loc_8812D9C8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8812D9C8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.current_instruction = 0x8812D9CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812db38
	if (!ctx.cr6.gt) goto loc_8812DB38;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lfd f29,12296(r9)
	ctx.current_instruction = 0x8812D9F8;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 12296);
	// lfd f30,12088(r8)
	ctx.current_instruction = 0x8812D9FC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f31,23944(r7)
	ctx.current_instruction = 0x8812DA04;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 23944);
	// addi r28,r11,17104
	ctx.r28.s64 = ctx.r11.s64 + 17104;
	// lfs f28,12180(r6)
	ctx.current_instruction = 0x8812DA0C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12180);
	ctx.f28.f64 = double(temp.f32);
loc_8812DA10:
	// lwz r9,584(r30)
	ctx.current_instruction = 0x8812DA10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.current_instruction = 0x8812DA14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x8812DA18;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,124(r31)
	ctx.current_instruction = 0x8812DA28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r10,122(r31)
	ctx.current_instruction = 0x8812DA2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 122);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8812da44
	if (!ctx.cr6.lt) goto loc_8812DA44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8812DA44:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8812daa8
	if (ctx.cr6.lt) goto loc_8812DAA8;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bgt cr6,0x8812daa8
	if (ctx.cr6.gt) goto loc_8812DAA8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812daa8
	if (!ctx.cr6.eq) goto loc_8812DAA8;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.current_instruction = 0x8812DA70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lfs f0,0(r9)
	ctx.current_instruction = 0x8812DA74;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	ctx.current_instruction = 0x8812DA78;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f13,4(r9)
	ctx.current_instruction = 0x8812DA7C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	ctx.current_instruction = 0x8812DA80;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f12,0(r9)
	ctx.current_instruction = 0x8812DA84;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,80(r31)
	ctx.current_instruction = 0x8812DA8C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,4(r9)
	ctx.current_instruction = 0x8812DA90;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	ctx.current_instruction = 0x8812DA94;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,32(r9)
	ctx.current_instruction = 0x8812DA98;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// stfs f8,88(r31)
	ctx.current_instruction = 0x8812DAA0;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8812db18
	goto loc_8812DB18;
loc_8812DAA8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x8812DAAC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8812DAB0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f27,f31,f13
	ctx.f27.f64 = ctx.f31.f64 / ctx.f13.f64;
	// fmul f26,f27,f30
	ctx.f26.f64 = ctx.f27.f64 * ctx.f30.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x881efea0
	ctx.lr = 0x8812DAC8;
	sub_881EFEA0(ctx, base);
loc_8812DAC8:
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,72(r31)
	ctx.current_instruction = 0x8812DACC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x881eff80
	ctx.lr = 0x8812DAD8;
	sub_881EFF80(ctx, base);
loc_8812DAD8:
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,76(r31)
	ctx.current_instruction = 0x8812DADC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x881efea0
	ctx.lr = 0x8812DAE8;
	sub_881EFEA0(ctx, base);
loc_8812DAE8:
	// fneg f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r31)
	ctx.current_instruction = 0x8812DAF4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// bl 0x881eff80
	ctx.lr = 0x8812DAFC;
	sub_881EFF80(ctx, base);
loc_8812DAFC:
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,84(r31)
	ctx.current_instruction = 0x8812DB00;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x881efea0
	ctx.lr = 0x8812DB0C;
	sub_881EFEA0(ctx, base);
loc_8812DB0C:
	// fmul f7,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64 * ctx.f29.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,88(r31)
	ctx.current_instruction = 0x8812DB14;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_8812DB18:
	// lhz r10,580(r30)
	ctx.current_instruction = 0x8812DB18;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812da10
	if (ctx.cr6.lt) goto loc_8812DA10;
loc_8812DB38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x881ef2cc
	ctx.lr = 0x8812DB48;
	__restfpr_26(ctx, base);
loc_8812DB48:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88136528) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88136528;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88136528) {
			switch (rex_dispatch_address) {
				case 0x88136530:
				case 0x881365F8:
				case 0x8813664C:
				case 0x8813665C:
				case 0x881366C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88136528;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88136530: goto loc_88136530;
		case 0x881365F8: goto loc_881365F8;
		case 0x8813664C: goto loc_8813664C;
		case 0x8813665C: goto loc_8813665C;
		case 0x881366C8: goto loc_881366C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88136530;
	__savegprlr_26(ctx, base);
loc_88136530:
	// stfd f31,-64(r1)
	ctx.current_instruction = 0x88136530;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88136534;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	ctx.current_instruction = 0x88136538;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r11,150(r3)
	ctx.current_instruction = 0x88136540;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 150);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r9,580(r27)
	ctx.current_instruction = 0x88136550;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881366f8
	if (!ctx.cr6.lt) goto loc_881366F8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f31,6708(r11)
	ctx.current_instruction = 0x88136564;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f31.f64 = double(temp.f32);
loc_88136568:
	// lhz r11,150(r31)
	ctx.current_instruction = 0x88136568;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// lwz r10,584(r27)
	ctx.current_instruction = 0x8813656C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r27)
	ctx.current_instruction = 0x88136574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x8813657C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,424(r30)
	ctx.current_instruction = 0x8813658C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// lwz r4,40(r30)
	ctx.current_instruction = 0x88136590;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r3,16(r5)
	ctx.current_instruction = 0x88136598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lbz r11,0(r3)
	ctx.current_instruction = 0x8813659C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// beq cr6,0x8813666c
	if (ctx.cr6.eq) goto loc_8813666C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881366ac
	if (!ctx.cr6.eq) goto loc_881366AC;
	// lhz r11,152(r31)
	ctx.current_instruction = 0x881365AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r29,148(r30)
	ctx.current_instruction = 0x881365B0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x88136638
	if (!ctx.cr6.lt) goto loc_88136638;
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
loc_881365C4:
	// lhz r11,152(r31)
	ctx.current_instruction = 0x881365C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881365e8
	if (ctx.cr6.eq) goto loc_881365E8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x881365e8
	if (ctx.cr6.eq) goto loc_881365E8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// bne cr6,0x881365ec
	if (!ctx.cr6.eq) goto loc_881365EC;
loc_881365E8:
	// li r4,3
	ctx.r4.s64 = 3;
loc_881365EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812c528
	ctx.lr = 0x881365F8;
	sub_8812C528(ctx, base);
loc_881365F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881366fc
	if (ctx.cr6.lt) goto loc_881366FC;
	// lhz r11,152(r31)
	ctx.current_instruction = 0x88136600;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88136604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r9,r29
	ctx.current_instruction = 0x88136610;
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u8);
	// lhz r7,152(r31)
	ctx.current_instruction = 0x88136614;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,152(r31)
	ctx.current_instruction = 0x88136628;
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r5.u16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x881365c4
	if (ctx.cr6.lt) goto loc_881365C4;
loc_88136638:
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88144e20
	ctx.lr = 0x8813664C;
	sub_88144E20(ctx, base);
loc_8813664C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88145270
	ctx.lr = 0x8813665C;
	sub_88145270(ctx, base);
loc_8813665C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881366f8
	if (ctx.cr6.lt) goto loc_881366F8;
	// b 0x881366c8
	goto loc_881366C8;
loc_8813666C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881366ac
	if (!ctx.cr6.eq) goto loc_881366AC;
	// lhz r11,118(r30)
	ctx.current_instruction = 0x88136674;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// stfs f31,156(r30)
	ctx.current_instruction = 0x88136678;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// lwz r10,52(r30)
	ctx.current_instruction = 0x8813667C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881366c8
	if (!ctx.cr6.gt) goto loc_881366C8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88136690:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfsu f31,4(r10)
	ctx.current_instruction = 0x88136694;
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88136690
	if (ctx.cr6.gt) goto loc_88136690;
	// b 0x881366c8
	goto loc_881366C8;
loc_881366AC:
	// lhz r11,114(r30)
	ctx.current_instruction = 0x881366AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 114);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881366c8
	if (!ctx.cr6.gt) goto loc_881366C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88142838
	ctx.lr = 0x881366C8;
	sub_88142838(ctx, base);
loc_881366C8:
	// sth r26,152(r31)
	ctx.current_instruction = 0x881366C8;
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r26.u16);
	// lhz r11,150(r31)
	ctx.current_instruction = 0x881366CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r31)
	ctx.current_instruction = 0x881366E0;
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r9.u16);
	// lhz r7,580(r27)
	ctx.current_instruction = 0x881366E4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + 580);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88136568
	if (ctx.cr6.lt) goto loc_88136568;
loc_881366F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_881366FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.current_instruction = 0x88136700;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139EE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88139EE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88139EE8) {
			switch (rex_dispatch_address) {
				case 0x88139EF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139EE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88139EF0: goto loc_88139EF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88139EF0;
	__savegprlr_27(ctx, base);
loc_88139EF0:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88139f78
	if (!ctx.cr0.gt) goto loc_88139F78;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_88139F10:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88139f68
	if (!ctx.cr6.gt) goto loc_88139F68;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + ctx.r30.u64;
loc_88139F30:
	// lbz r6,1(r10)
	ctx.current_instruction = 0x88139F30;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r3,r11
	ctx.current_instruction = 0x88139F34;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x88139F38;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88139F40;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbu r8,1(r9)
	ctx.current_instruction = 0x88139F60;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x88139f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88139F30;
loc_88139F68:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// bne 0x88139f10
	if (!ctx.cr0.eq) goto loc_88139F10;
loc_88139F78:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C860) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813C860);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813C860;
	ctx.current_instruction = 0x8813C860;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8813C860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c914
	if (ctx.cr6.eq) goto loc_8813C914;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8813c914
	if (ctx.cr6.eq) goto loc_8813C914;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8813c8f4
	if (ctx.cr6.eq) goto loc_8813C8F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8813c8f4
	if (ctx.cr6.eq) goto loc_8813C8F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8813c8ac
	if (!ctx.cr6.eq) goto loc_8813C8AC;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// bge cr6,0x8813c8a4
	if (!ctx.cr6.lt) goto loc_8813C8A4;
	// addi r11,r11,-1456
	ctx.r11.s64 = ctx.r11.s64 + -1456;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C8A4:
	// addi r11,r11,-1472
	ctx.r11.s64 = ctx.r11.s64 + -1472;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C8AC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8813c8e4
	if (ctx.cr6.eq) goto loc_8813C8E4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8813c8dc
	if (ctx.cr6.eq) goto loc_8813C8DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8813c934
	if (!ctx.cr6.gt) goto loc_8813C934;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// bge cr6,0x8813c930
	if (!ctx.cr6.lt) goto loc_8813C930;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C8DC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8813C8E4:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r10,r11,6544
	ctx.r10.s64 = ctx.r11.s64 + 6544;
	// stw r10,4(r3)
	ctx.current_instruction = 0x8813C8EC;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813C8F4:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// bge cr6,0x8813c90c
	if (!ctx.cr6.lt) goto loc_8813C90C;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C90C:
	// addi r11,r11,-784
	ctx.r11.s64 = ctx.r11.s64 + -784;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C914:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// bge cr6,0x8813c92c
	if (!ctx.cr6.lt) goto loc_8813C92C;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// b 0x8813c930
	goto loc_8813C930;
loc_8813C92C:
	// addi r11,r11,-1424
	ctx.r11.s64 = ctx.r11.s64 + -1424;
loc_8813C930:
	// stw r11,24(r3)
	ctx.current_instruction = 0x8813C930;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_8813C934:
	// lwz r11,24(r3)
	ctx.current_instruction = 0x8813C934;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8813C940;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,24(r3)
	ctx.current_instruction = 0x8813C944;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// stw r8,20(r3)
	ctx.current_instruction = 0x8813C94C;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,16(r3)
	ctx.current_instruction = 0x8813C950;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8813F7C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813F7C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813F7C8) {
			switch (rex_dispatch_address) {
				case 0x8813F7D0:
				case 0x8813F8A0:
				case 0x8813F948:
				case 0x8813F98C:
				case 0x8813F9E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813F7C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813F7D0: goto loc_8813F7D0;
		case 0x8813F8A0: goto loc_8813F8A0;
		case 0x8813F948: goto loc_8813F948;
		case 0x8813F98C: goto loc_8813F98C;
		case 0x8813F9E4: goto loc_8813F9E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x8813F7D0;
	__savegprlr_20(ctx, base);
loc_8813F7D0:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8813F7D0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x8813F7D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8813F7E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// std r26,96(r1)
	ctx.current_instruction = 0x8813F7EC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r26,80(r1)
	ctx.current_instruction = 0x8813F7F4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,92(r1)
	ctx.current_instruction = 0x8813F7FC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,88(r1)
	ctx.current_instruction = 0x8813F800;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// beq cr6,0x8813fa58
	if (ctx.cr6.eq) goto loc_8813FA58;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8813fa64
	if (ctx.cr6.eq) goto loc_8813FA64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8813fa58
	if (ctx.cr6.eq) goto loc_8813FA58;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8813fa58
	if (ctx.cr6.eq) goto loc_8813FA58;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r26,0(r5)
	ctx.current_instruction = 0x8813F824;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// stw r26,0(r7)
	ctx.current_instruction = 0x8813F828;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
	// stw r22,0(r8)
	ctx.current_instruction = 0x8813F82C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
	// lwz r31,32(r3)
	ctx.current_instruction = 0x8813F830;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8813F834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,0(r31)
	ctx.current_instruction = 0x8813F83C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r23,4(r31)
	ctx.current_instruction = 0x8813F840;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x8813f868
	if (ctx.cr6.eq) goto loc_8813F868;
	// lwz r11,84(r31)
	ctx.current_instruction = 0x8813F848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8813F850;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r10,88(r31)
	ctx.current_instruction = 0x8813F854;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 88);
	// stw r10,0(r7)
	ctx.current_instruction = 0x8813F858;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r26,0(r8)
	ctx.current_instruction = 0x8813F85C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8813F868:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8813F868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8813f8ec
	if (!ctx.cr6.eq) goto loc_8813F8EC;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x8813F8A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813F8A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8813f8c0
	if (!ctx.cr6.lt) goto loc_8813F8C0;
loc_8813F8A8:
	// stw r26,0(r25)
	ctx.current_instruction = 0x8813F8A8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r26,0(r24)
	ctx.current_instruction = 0x8813F8B0;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r22,0(r20)
	ctx.current_instruction = 0x8813F8B4;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8813F8C0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813F8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813f8d4
	if (ctx.cr6.eq) goto loc_8813F8D4;
	// ld r11,96(r1)
	ctx.current_instruction = 0x8813F8CC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,72(r31)
	ctx.current_instruction = 0x8813F8D0;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_8813F8D4:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8813F8D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813f8e4
	if (ctx.cr6.eq) goto loc_8813F8E4;
	// stw r22,112(r31)
	ctx.current_instruction = 0x8813F8E0;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
loc_8813F8E4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8813F8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	ctx.current_instruction = 0x8813F8E8;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8813F8EC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8813f920
	if (!ctx.cr6.eq) goto loc_8813F920;
	// lwz r30,16(r31)
	ctx.current_instruction = 0x8813F8F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8813f920
	if (ctx.cr6.lt) goto loc_8813F920;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8813F900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8813f920
	if (!ctx.cr6.eq) goto loc_8813F920;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8813F914;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r30,0(r24)
	ctx.current_instruction = 0x8813F918;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// b 0x8813fa0c
	goto loc_8813FA0C;
loc_8813F920:
	// lwz r30,16(r31)
	ctx.current_instruction = 0x8813F920;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// ble cr6,0x8813f930
	if (!ctx.cr6.gt) goto loc_8813F930;
	// li r30,4096
	ctx.r30.s64 = 4096;
loc_8813F930:
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r4,20(r31)
	ctx.current_instruction = 0x8813F934;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// bl 0x880547a0
	ctx.lr = 0x8813F948;
	sub_880547A0(ctx, base);
loc_8813F948:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x8813f9fc
	if (!ctx.cr6.lt) goto loc_8813F9FC;
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8813F950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813f9fc
	if (!ctx.cr6.eq) goto loc_8813F9FC;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8813F98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813F98C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8813f8a8
	if (ctx.cr6.lt) goto loc_8813F8A8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813F994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813f9a8
	if (ctx.cr6.eq) goto loc_8813F9A8;
	// ld r11,96(r1)
	ctx.current_instruction = 0x8813F9A0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,72(r31)
	ctx.current_instruction = 0x8813F9A4;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_8813F9A8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8813F9A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813f9b8
	if (ctx.cr6.eq) goto loc_8813F9B8;
	// stw r22,112(r31)
	ctx.current_instruction = 0x8813F9B4;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
loc_8813F9B8:
	// lwz r30,0(r27)
	ctx.current_instruction = 0x8813F9B8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// stw r30,16(r31)
	ctx.current_instruction = 0x8813F9C0;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ble cr6,0x8813f9cc
	if (!ctx.cr6.gt) goto loc_8813F9CC;
	// li r30,4096
	ctx.r30.s64 = 4096;
loc_8813F9CC:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.current_instruction = 0x8813F9D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// bl 0x880547a0
	ctx.lr = 0x8813F9E4;
	sub_880547A0(ctx, base);
loc_8813F9E4:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r10,0(r25)
	ctx.current_instruction = 0x8813F9F0;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,0(r24)
	ctx.current_instruction = 0x8813F9F4;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// b 0x8813fa0c
	goto loc_8813FA0C;
loc_8813F9FC:
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8813FA04;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	ctx.current_instruction = 0x8813FA08;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_8813FA0C:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8813FA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r29)
	ctx.current_instruction = 0x8813FA10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,112(r31)
	ctx.current_instruction = 0x8813FA14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,16(r31)
	ctx.current_instruction = 0x8813FA20;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r29)
	ctx.current_instruction = 0x8813FA28;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8813fa4c
	if (ctx.cr6.eq) goto loc_8813FA4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8813fa4c
	if (!ctx.cr6.eq) goto loc_8813FA4C;
	// stw r26,0(r20)
	ctx.current_instruction = 0x8813FA38;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r26.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r26,112(r31)
	ctx.current_instruction = 0x8813FA40;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8813FA4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8813FA58:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8813fa64
	if (ctx.cr6.eq) goto loc_8813FA64;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8813FA60;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
loc_8813FA64:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8813fa70
	if (ctx.cr6.eq) goto loc_8813FA70;
	// stw r26,0(r24)
	ctx.current_instruction = 0x8813FA6C;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_8813FA70:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8813fa7c
	if (ctx.cr6.eq) goto loc_8813FA7C;
	// stw r26,0(r20)
	ctx.current_instruction = 0x8813FA78;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r26.u32);
loc_8813FA7C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88144960) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88144960);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144960;
	ctx.current_instruction = 0x88144960;
	PPCRegister temp{};
	uint32_t ea{};
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_88144988:
	// lwzx r7,r8,r11
	ctx.current_instruction = 0x88144988;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.current_instruction = 0x8814498C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwu r4,4(r10)
	ctx.current_instruction = 0x881449A0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x881449A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r8,r11
	ctx.current_instruction = 0x881449A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// stwu r4,-4(r9)
	ctx.current_instruction = 0x881449BC;
	ea = -4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x88144988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144988;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88144EF8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88144EF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144EF8;
	ctx.current_instruction = 0x88144EF8;
	// b 0x88144e68
	sub_88144E68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88145D38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88145D38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88145D38) {
			switch (rex_dispatch_address) {
				case 0x88145D40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88145D38;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88145D40: goto loc_88145D40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88145D40;
	__savegprlr_23(ctx, base);
loc_88145D40:
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88145D44;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r7,r10,7696
	ctx.r7.s64 = ctx.r10.s64 + 7696;
	// addi r4,r8,7680
	ctx.r4.s64 = ctx.r8.s64 + 7680;
	// addi r28,r3,34
	ctx.r28.s64 = ctx.r3.s64 + 34;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x88146030
	if (ctx.cr6.eq) goto loc_88146030;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x88145e60
	if (ctx.cr6.eq) goto loc_88145E60;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8814620c
	if (!ctx.cr6.gt) goto loc_8814620C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x88145D94;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r8)
	ctx.current_instruction = 0x88145D98;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88145D9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88145e44
	if (!ctx.cr6.gt) goto loc_88145E44;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
loc_88145DB8:
	// lwz r11,320(r3)
	ctx.current_instruction = 0x88145DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r8,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88145DC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.current_instruction = 0x88145DC8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r5
	ctx.current_instruction = 0x88145DD0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x88145e04
	if (!ctx.cr6.lt) goto loc_88145E04;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x88145DEC;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x88145DF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88145e28
	if (!ctx.cr6.lt) goto loc_88145E28;
	// b 0x88145e24
	goto loc_88145E24;
loc_88145E04:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x88145E14;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x88145E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88145e28
	if (!ctx.cr6.gt) goto loc_88145E28;
loc_88145E24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88145E28:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// sthu r11,2(r7)
	ctx.current_instruction = 0x88145E2C;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r7.u32 = ea;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88145E30;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88145db8
	if (ctx.cr6.lt) goto loc_88145DB8;
loc_88145E44:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88145d9c
	if (ctx.cr6.lt) goto loc_88145D9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88145E60:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// ble cr6,0x88145f50
	if (!ctx.cr6.gt) goto loc_88145F50;
	// addi r30,r3,320
	ctx.r30.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_88145E8C:
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88145E8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r8)
	ctx.current_instruction = 0x88145EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// lwz r8,1836(r8)
	ctx.current_instruction = 0x88145EAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 1836);
	// addi r23,r1,-96
	ctx.r23.s64 = ctx.r1.s64 + -96;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r26,r1,-112
	ctx.r26.s64 = ctx.r1.s64 + -112;
	// addi r24,r1,-112
	ctx.r24.s64 = ctx.r1.s64 + -112;
	// lfsx f0,r5,r10
	ctx.current_instruction = 0x88145EC0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f13,r27,r10
	ctx.current_instruction = 0x88145EC8;
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r6,r10
	ctx.current_instruction = 0x88145ECC;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f9,4(r7)
	ctx.current_instruction = 0x88145ED4;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r6,r8
	ctx.current_instruction = 0x88145ED8;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,-96(r1)
	ctx.current_instruction = 0x88145EDC;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f9,-88(r1)
	ctx.current_instruction = 0x88145EE0;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// lfs f7,4(r10)
	ctx.current_instruction = 0x88145EE4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,-92(r1)
	ctx.current_instruction = 0x88145EE8;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f7,-84(r1)
	ctx.current_instruction = 0x88145EEC;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f12,r5,r8
	ctx.current_instruction = 0x88145EF4;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lfsx f11,r27,r8
	ctx.current_instruction = 0x88145EFC;
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	ctx.current_instruction = 0x88145F00;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stfs f13,-104(r1)
	ctx.current_instruction = 0x88145F08;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// stfs f12,-108(r1)
	ctx.current_instruction = 0x88145F10;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f11,-100(r1)
	ctx.current_instruction = 0x88145F14;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lvx128 v61,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v58,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v59,v63,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v56,v62,v58
	simde_mm_store_ps(ctx.v56.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vminfp128 v57,v62,v59
	simde_mm_store_ps(ctx.v57.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vcfpsxws128 v61,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v60,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v61,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// stvx128 v60,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v55,r0,r9
	ctx.current_instruction = 0x88145F40;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r9,r4
	ctx.current_instruction = 0x88145F44;
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x88145e8c
	if (ctx.cr6.lt) goto loc_88145E8C;
loc_88145F50:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8814620c
	if (!ctx.cr6.lt) goto loc_8814620C;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88145F68;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x88145F78;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r9)
	ctx.current_instruction = 0x88145F7C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88145F80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88146014
	if (!ctx.cr6.gt) goto loc_88146014;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88145F90:
	// lwz r11,320(r3)
	ctx.current_instruction = 0x88145F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88145F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.current_instruction = 0x88145FA0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lfsx f0,r10,r7
	ctx.current_instruction = 0x88145FAC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x88145fdc
	if (!ctx.cr6.lt) goto loc_88145FDC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x88145FC8;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x88145FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88145ff8
	if (!ctx.cr6.lt) goto loc_88145FF8;
	// b 0x88145ff4
	goto loc_88145FF4;
loc_88145FDC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x88145FE4;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x88145FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88145ff8
	if (!ctx.cr6.gt) goto loc_88145FF8;
loc_88145FF4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88145FF8:
	// sthu r11,2(r8)
	ctx.current_instruction = 0x88145FF8;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88146008;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88145f90
	if (ctx.cr6.lt) goto loc_88145F90;
loc_88146014:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88145f80
	if (ctx.cr6.lt) goto loc_88145F80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88146030:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r11,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// ble cr6,0x88146138
	if (!ctx.cr6.gt) goto loc_88146138;
	// addi r6,r3,320
	ctx.r6.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8814605C:
	// lwz r10,0(r6)
	ctx.current_instruction = 0x8814605C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 5;
	// addi r29,r11,7
	ctx.r29.s64 = ctx.r11.s64 + 7;
	// lwz r10,60(r10)
	ctx.current_instruction = 0x88146074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,-112
	ctx.r26.s64 = ctx.r1.s64 + -112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r27,r10
	ctx.current_instruction = 0x8814608C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// lfsx f12,r30,r10
	ctx.current_instruction = 0x88146094;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r31,r10
	ctx.current_instruction = 0x881460A0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r29,r10
	ctx.current_instruction = 0x881460A4;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r1,-112
	ctx.r27.s64 = ctx.r1.s64 + -112;
	// stfs f0,-112(r1)
	ctx.current_instruction = 0x881460AC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// stfs f13,-108(r1)
	ctx.current_instruction = 0x881460B4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// stfs f12,-104(r1)
	ctx.current_instruction = 0x881460BC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,-100(r1)
	ctx.current_instruction = 0x881460C4;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// lvx128 v52,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f10,0(r8)
	ctx.current_instruction = 0x881460D4;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	ctx.current_instruction = 0x881460D8;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lfsx f8,r30,r10
	ctx.current_instruction = 0x881460E0;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r10
	ctx.current_instruction = 0x881460E4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stfs f10,-96(r1)
	ctx.current_instruction = 0x881460EC;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stfs f9,-92(r1)
	ctx.current_instruction = 0x881460F4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f8,-88(r1)
	ctx.current_instruction = 0x881460F8;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f7,-84(r1)
	ctx.current_instruction = 0x881460FC;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v54,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v53,v63,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmaxfp128 v50,v63,v52
	simde_mm_store_ps(ctx.v50.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vminfp128 v51,v62,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vminfp128 v49,v62,v50
	simde_mm_store_ps(ctx.v49.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v61,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v60,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v48,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// stvx128 v60,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v48,r0,r9
	ctx.current_instruction = 0x88146128;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r9,r4
	ctx.current_instruction = 0x8814612C;
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x8814605c
	if (ctx.cr6.lt) goto loc_8814605C;
loc_88146138:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8814620c
	if (!ctx.cr6.lt) goto loc_8814620C;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88146150;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x88146160;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r9)
	ctx.current_instruction = 0x88146164;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88146168:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881461f8
	if (!ctx.cr6.gt) goto loc_881461F8;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88146178:
	// lwz r11,320(r3)
	ctx.current_instruction = 0x88146178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88146184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.current_instruction = 0x88146188;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lfsx f0,r10,r7
	ctx.current_instruction = 0x88146194;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x881461c4
	if (!ctx.cr6.lt) goto loc_881461C4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x881461B0;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x881461B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881461e0
	if (!ctx.cr6.lt) goto loc_881461E0;
	// b 0x881461dc
	goto loc_881461DC;
loc_881461C4:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	ctx.current_instruction = 0x881461CC;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.current_instruction = 0x881461D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881461e0
	if (!ctx.cr6.gt) goto loc_881461E0;
loc_881461DC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881461E0:
	// sthu r11,2(r8)
	ctx.current_instruction = 0x881461E0;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x881461EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88146178
	if (ctx.cr6.lt) goto loc_88146178;
loc_881461F8:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88146168
	if (ctx.cr6.lt) goto loc_88146168;
loc_8814620C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814D3F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814D3F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814D3F0) {
			switch (rex_dispatch_address) {
				case 0x8814D3F8:
				case 0x8814D400:
				case 0x8814D488:
				case 0x8814D4D0:
				case 0x8814D560:
				case 0x8814D5A8:
				case 0x8814D610:
				case 0x8814D658:
				case 0x8814D6C0:
				case 0x8814D708:
				case 0x8814D770:
				case 0x8814D7B8:
				case 0x8814D880:
				case 0x8814D8C8:
				case 0x8814D930:
				case 0x8814D978:
				case 0x8814D9E0:
				case 0x8814DA28:
				case 0x8814DA90:
				case 0x8814DAD8:
				case 0x8814DB40:
				case 0x8814DB88:
				case 0x8814DBF0:
				case 0x8814DC38:
				case 0x8814DD20:
				case 0x8814DD68:
				case 0x8814DDD0:
				case 0x8814DE18:
				case 0x8814DE80:
				case 0x8814DEC8:
				case 0x8814DF30:
				case 0x8814DF78:
				case 0x8814DFE0:
				case 0x8814E028:
				case 0x8814E090:
				case 0x8814E0D8:
				case 0x8814E140:
				case 0x8814E188:
				case 0x8814E1F0:
				case 0x8814E238:
				case 0x8814E324:
				case 0x8814E36C:
				case 0x8814E3D4:
				case 0x8814E41C:
				case 0x8814E484:
				case 0x8814E4CC:
				case 0x8814E534:
				case 0x8814E57C:
				case 0x8814E5E4:
				case 0x8814E62C:
				case 0x8814E694:
				case 0x8814E6DC:
				case 0x8814E744:
				case 0x8814E78C:
				case 0x8814E7F4:
				case 0x8814E83C:
				case 0x8814E8A4:
				case 0x8814E8EC:
				case 0x8814E954:
				case 0x8814E99C:
				case 0x8814EA04:
				case 0x8814EA4C:
				case 0x8814EAB4:
				case 0x8814EAFC:
				case 0x8814EC24:
				case 0x8814EC6C:
				case 0x8814ECD8:
				case 0x8814ED20:
				case 0x8814ED88:
				case 0x8814EDD0:
				case 0x8814EE34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814D3F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814D3F8: goto loc_8814D3F8;
		case 0x8814D400: goto loc_8814D400;
		case 0x8814D488: goto loc_8814D488;
		case 0x8814D4D0: goto loc_8814D4D0;
		case 0x8814D560: goto loc_8814D560;
		case 0x8814D5A8: goto loc_8814D5A8;
		case 0x8814D610: goto loc_8814D610;
		case 0x8814D658: goto loc_8814D658;
		case 0x8814D6C0: goto loc_8814D6C0;
		case 0x8814D708: goto loc_8814D708;
		case 0x8814D770: goto loc_8814D770;
		case 0x8814D7B8: goto loc_8814D7B8;
		case 0x8814D880: goto loc_8814D880;
		case 0x8814D8C8: goto loc_8814D8C8;
		case 0x8814D930: goto loc_8814D930;
		case 0x8814D978: goto loc_8814D978;
		case 0x8814D9E0: goto loc_8814D9E0;
		case 0x8814DA28: goto loc_8814DA28;
		case 0x8814DA90: goto loc_8814DA90;
		case 0x8814DAD8: goto loc_8814DAD8;
		case 0x8814DB40: goto loc_8814DB40;
		case 0x8814DB88: goto loc_8814DB88;
		case 0x8814DBF0: goto loc_8814DBF0;
		case 0x8814DC38: goto loc_8814DC38;
		case 0x8814DD20: goto loc_8814DD20;
		case 0x8814DD68: goto loc_8814DD68;
		case 0x8814DDD0: goto loc_8814DDD0;
		case 0x8814DE18: goto loc_8814DE18;
		case 0x8814DE80: goto loc_8814DE80;
		case 0x8814DEC8: goto loc_8814DEC8;
		case 0x8814DF30: goto loc_8814DF30;
		case 0x8814DF78: goto loc_8814DF78;
		case 0x8814DFE0: goto loc_8814DFE0;
		case 0x8814E028: goto loc_8814E028;
		case 0x8814E090: goto loc_8814E090;
		case 0x8814E0D8: goto loc_8814E0D8;
		case 0x8814E140: goto loc_8814E140;
		case 0x8814E188: goto loc_8814E188;
		case 0x8814E1F0: goto loc_8814E1F0;
		case 0x8814E238: goto loc_8814E238;
		case 0x8814E324: goto loc_8814E324;
		case 0x8814E36C: goto loc_8814E36C;
		case 0x8814E3D4: goto loc_8814E3D4;
		case 0x8814E41C: goto loc_8814E41C;
		case 0x8814E484: goto loc_8814E484;
		case 0x8814E4CC: goto loc_8814E4CC;
		case 0x8814E534: goto loc_8814E534;
		case 0x8814E57C: goto loc_8814E57C;
		case 0x8814E5E4: goto loc_8814E5E4;
		case 0x8814E62C: goto loc_8814E62C;
		case 0x8814E694: goto loc_8814E694;
		case 0x8814E6DC: goto loc_8814E6DC;
		case 0x8814E744: goto loc_8814E744;
		case 0x8814E78C: goto loc_8814E78C;
		case 0x8814E7F4: goto loc_8814E7F4;
		case 0x8814E83C: goto loc_8814E83C;
		case 0x8814E8A4: goto loc_8814E8A4;
		case 0x8814E8EC: goto loc_8814E8EC;
		case 0x8814E954: goto loc_8814E954;
		case 0x8814E99C: goto loc_8814E99C;
		case 0x8814EA04: goto loc_8814EA04;
		case 0x8814EA4C: goto loc_8814EA4C;
		case 0x8814EAB4: goto loc_8814EAB4;
		case 0x8814EAFC: goto loc_8814EAFC;
		case 0x8814EC24: goto loc_8814EC24;
		case 0x8814EC6C: goto loc_8814EC6C;
		case 0x8814ECD8: goto loc_8814ECD8;
		case 0x8814ED20: goto loc_8814ED20;
		case 0x8814ED88: goto loc_8814ED88;
		case 0x8814EDD0: goto loc_8814EDD0;
		case 0x8814EE34: goto loc_8814EE34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x8814D3F8;
	__savegprlr_15(ctx, base);
loc_8814D3F8:
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x881ef288
	ctx.lr = 0x8814D400;
	__savefpr_28(ctx, base);
loc_8814D400:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x8814D400;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8814D404;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D41C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8814d498
	if (!ctx.cr6.lt) goto loc_8814D498;
loc_8814D440:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d498
	if (ctx.cr6.eq) goto loc_8814D498;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D44C;
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
	ctx.current_instruction = 0x8814D470;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D478;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d488
	if (!ctx.cr0.lt) goto loc_8814D488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D488;
	sub_88156678(ctx, base);
loc_8814D488:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d440
	if (ctx.cr6.gt) goto loc_8814D440;
loc_8814D498:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D49C;
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
	ctx.current_instruction = 0x8814D4B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D4C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d4d0
	if (!ctx.cr0.lt) goto loc_8814D4D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D4D0;
	sub_88156678(ctx, base);
loc_8814D4D0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r30,15428(r20)
	ctx.current_instruction = 0x8814D4D4;
	REX_STORE_U32(ctx.r20.u32 + 15428, ctx.r30.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f29,6732(r11)
	ctx.current_instruction = 0x8814D4E4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,6708(r10)
	ctx.current_instruction = 0x8814D4E8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x8814d810
	if (!ctx.cr6.eq) goto loc_8814D810;
	// stfs f28,0(r17)
	ctx.current_instruction = 0x8814D4F0;
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stfs f29,0(r22)
	ctx.current_instruction = 0x8814D4F8;
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	ctx.current_instruction = 0x8814D4FC;
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stfs f28,0(r16)
	ctx.current_instruction = 0x8814D500;
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D504;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D508;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d570
	if (!ctx.cr6.lt) goto loc_8814D570;
loc_8814D518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d570
	if (ctx.cr6.eq) goto loc_8814D570;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D524;
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
	ctx.current_instruction = 0x8814D548;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D550;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d560
	if (!ctx.cr0.lt) goto loc_8814D560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D560;
	sub_88156678(ctx, base);
loc_8814D560:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d518
	if (ctx.cr6.gt) goto loc_8814D518;
loc_8814D570:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D574;
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
	ctx.current_instruction = 0x8814D58C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D598;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d5a8
	if (!ctx.cr0.lt) goto loc_8814D5A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D5A8;
	sub_88156678(ctx, base);
loc_8814D5A8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D5A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D5B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d620
	if (!ctx.cr6.lt) goto loc_8814D620;
loc_8814D5C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d620
	if (ctx.cr6.eq) goto loc_8814D620;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D5D4;
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
	ctx.current_instruction = 0x8814D5F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D600;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d610
	if (!ctx.cr0.lt) goto loc_8814D610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D610;
	sub_88156678(ctx, base);
loc_8814D610:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d5c8
	if (ctx.cr6.gt) goto loc_8814D5C8;
loc_8814D620:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D624;
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
	ctx.current_instruction = 0x8814D63C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D648;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d658
	if (!ctx.cr0.lt) goto loc_8814D658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D658;
	sub_88156678(ctx, base);
loc_8814D658:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D658;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r27,r30,r28
	ctx.r27.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d6d0
	if (!ctx.cr6.lt) goto loc_8814D6D0;
loc_8814D678:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d6d0
	if (ctx.cr6.eq) goto loc_8814D6D0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D684;
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
	ctx.current_instruction = 0x8814D6A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D6B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d6c0
	if (!ctx.cr0.lt) goto loc_8814D6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D6C0;
	sub_88156678(ctx, base);
loc_8814D6C0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D6C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d678
	if (ctx.cr6.gt) goto loc_8814D678;
loc_8814D6D0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D6D4;
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
	ctx.current_instruction = 0x8814D6EC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D6F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d708
	if (!ctx.cr0.lt) goto loc_8814D708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D708;
	sub_88156678(ctx, base);
loc_8814D708:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D708;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d780
	if (!ctx.cr6.lt) goto loc_8814D780;
loc_8814D728:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d780
	if (ctx.cr6.eq) goto loc_8814D780;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D734;
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
	ctx.current_instruction = 0x8814D758;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D760;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d770
	if (!ctx.cr0.lt) goto loc_8814D770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D770;
	sub_88156678(ctx, base);
loc_8814D770:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D770;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d728
	if (ctx.cr6.gt) goto loc_8814D728;
loc_8814D780:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D784;
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
	ctx.current_instruction = 0x8814D79C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D7A8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d7b8
	if (!ctx.cr0.lt) goto loc_8814D7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D7B8;
	sub_88156678(ctx, base);
loc_8814D7B8:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	ctx.current_instruction = 0x8814D7C4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8814D7C8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	ctx.current_instruction = 0x8814D7CC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8814D7D0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,18136
	ctx.r11.s64 = ctx.r11.s64 + 18136;
	// addi r10,r10,12188
	ctx.r10.s64 = ctx.r10.s64 + 12188;
	// lfs f31,0(r11)
	ctx.current_instruction = 0x8814D7F0;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	ctx.current_instruction = 0x8814D7F4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f10,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f8,0(r19)
	ctx.current_instruction = 0x8814D800;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// fmsubs f7,f9,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f7,0(r18)
	ctx.current_instruction = 0x8814D808;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// b 0x8814ebc0
	goto loc_8814EBC0;
loc_8814D810:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8814dcb0
	if (!ctx.cr6.eq) goto loc_8814DCB0;
	// stfs f29,0(r22)
	ctx.current_instruction = 0x8814D818;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stfs f29,0(r21)
	ctx.current_instruction = 0x8814D820;
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D824;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d890
	if (!ctx.cr6.lt) goto loc_8814D890;
loc_8814D838:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d890
	if (ctx.cr6.eq) goto loc_8814D890;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D844;
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
	ctx.current_instruction = 0x8814D868;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D870;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d880
	if (!ctx.cr0.lt) goto loc_8814D880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D880;
	sub_88156678(ctx, base);
loc_8814D880:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d838
	if (ctx.cr6.gt) goto loc_8814D838;
loc_8814D890:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D894;
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
	ctx.current_instruction = 0x8814D8AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D8B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d8c8
	if (!ctx.cr0.lt) goto loc_8814D8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D8C8;
	sub_88156678(ctx, base);
loc_8814D8C8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D8C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D8D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d940
	if (!ctx.cr6.lt) goto loc_8814D940;
loc_8814D8E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d940
	if (ctx.cr6.eq) goto loc_8814D940;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D8F4;
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
	ctx.current_instruction = 0x8814D918;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D920;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d930
	if (!ctx.cr0.lt) goto loc_8814D930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D930;
	sub_88156678(ctx, base);
loc_8814D930:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d8e8
	if (ctx.cr6.gt) goto loc_8814D8E8;
loc_8814D940:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D944;
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
	ctx.current_instruction = 0x8814D95C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814D968;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814d978
	if (!ctx.cr0.lt) goto loc_8814D978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D978;
	sub_88156678(ctx, base);
loc_8814D978:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814D978;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r26,r30,r28
	ctx.r26.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814d9f0
	if (!ctx.cr6.lt) goto loc_8814D9F0;
loc_8814D998:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814d9f0
	if (ctx.cr6.eq) goto loc_8814D9F0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814D9A4;
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
	ctx.current_instruction = 0x8814D9C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814D9D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814d9e0
	if (!ctx.cr0.lt) goto loc_8814D9E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814D9E0;
	sub_88156678(ctx, base);
loc_8814D9E0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814D9E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814d998
	if (ctx.cr6.gt) goto loc_8814D998;
loc_8814D9F0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814D9F4;
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
	ctx.current_instruction = 0x8814DA0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DA18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814da28
	if (!ctx.cr0.lt) goto loc_8814DA28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DA28;
	sub_88156678(ctx, base);
loc_8814DA28:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DA28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DA38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814daa0
	if (!ctx.cr6.lt) goto loc_8814DAA0;
loc_8814DA48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814daa0
	if (ctx.cr6.eq) goto loc_8814DAA0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DA54;
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
	ctx.current_instruction = 0x8814DA78;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DA80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814da90
	if (!ctx.cr0.lt) goto loc_8814DA90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DA90;
	sub_88156678(ctx, base);
loc_8814DA90:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DA90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814da48
	if (ctx.cr6.gt) goto loc_8814DA48;
loc_8814DAA0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DAA4;
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
	ctx.current_instruction = 0x8814DABC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DAC8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814dad8
	if (!ctx.cr0.lt) goto loc_8814DAD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DAD8;
	sub_88156678(ctx, base);
loc_8814DAD8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DAD8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r27,r30,r28
	ctx.r27.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DAE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814db50
	if (!ctx.cr6.lt) goto loc_8814DB50;
loc_8814DAF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814db50
	if (ctx.cr6.eq) goto loc_8814DB50;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DB04;
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
	ctx.current_instruction = 0x8814DB28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DB30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814db40
	if (!ctx.cr0.lt) goto loc_8814DB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DB40;
	sub_88156678(ctx, base);
loc_8814DB40:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DB40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814daf8
	if (ctx.cr6.gt) goto loc_8814DAF8;
loc_8814DB50:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DB54;
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
	ctx.current_instruction = 0x8814DB6C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DB78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814db88
	if (!ctx.cr0.lt) goto loc_8814DB88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DB88;
	sub_88156678(ctx, base);
loc_8814DB88:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DB88;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DB98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814dc00
	if (!ctx.cr6.lt) goto loc_8814DC00;
loc_8814DBA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814dc00
	if (ctx.cr6.eq) goto loc_8814DC00;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DBB4;
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
	ctx.current_instruction = 0x8814DBD8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DBE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814dbf0
	if (!ctx.cr0.lt) goto loc_8814DBF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DBF0;
	sub_88156678(ctx, base);
loc_8814DBF0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DBF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814dba8
	if (ctx.cr6.gt) goto loc_8814DBA8;
loc_8814DC00:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DC04;
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
	ctx.current_instruction = 0x8814DC1C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DC28;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814dc38
	if (!ctx.cr0.lt) goto loc_8814DC38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DC38;
	sub_88156678(ctx, base);
loc_8814DC38:
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	ctx.current_instruction = 0x8814DC40;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// std r9,80(r1)
	ctx.current_instruction = 0x8814DC48;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r11,r11,18136
	ctx.r11.s64 = ctx.r11.s64 + 18136;
	// addi r10,r10,12188
	ctx.r10.s64 = ctx.r10.s64 + 12188;
	// lfs f31,0(r11)
	ctx.current_instruction = 0x8814DC60;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	ctx.current_instruction = 0x8814DC64;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x8814DC68;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8814DC6C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r8,80(r1)
	ctx.current_instruction = 0x8814DC74;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.current_instruction = 0x8814DC78;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmsubs f4,f7,f31,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f4,0(r16)
	ctx.current_instruction = 0x8814DC94;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// stfs f4,0(r17)
	ctx.current_instruction = 0x8814DC98;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// fmsubs f5,f8,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f5,0(r19)
	ctx.current_instruction = 0x8814DCA0;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// fmsubs f3,f6,f31,f30
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f3,0(r18)
	ctx.current_instruction = 0x8814DCA8;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// b 0x8814ebc0
	goto loc_8814EBC0;
loc_8814DCB0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// li r30,15
	ctx.r30.s64 = 15;
	// bne cr6,0x8814e2c8
	if (!ctx.cr6.eq) goto loc_8814E2C8;
	// stfs f29,0(r22)
	ctx.current_instruction = 0x8814DCBC;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	ctx.current_instruction = 0x8814DCC0;
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DCC4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DCC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814dd30
	if (!ctx.cr6.lt) goto loc_8814DD30;
loc_8814DCD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814dd30
	if (ctx.cr6.eq) goto loc_8814DD30;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DCE4;
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
	ctx.current_instruction = 0x8814DD08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DD10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814dd20
	if (!ctx.cr0.lt) goto loc_8814DD20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DD20;
	sub_88156678(ctx, base);
loc_8814DD20:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DD20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814dcd8
	if (ctx.cr6.gt) goto loc_8814DCD8;
loc_8814DD30:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DD34;
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
	ctx.current_instruction = 0x8814DD4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DD58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814dd68
	if (!ctx.cr0.lt) goto loc_8814DD68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DD68;
	sub_88156678(ctx, base);
loc_8814DD68:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DD68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DD78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814dde0
	if (!ctx.cr6.lt) goto loc_8814DDE0;
loc_8814DD88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814dde0
	if (ctx.cr6.eq) goto loc_8814DDE0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DD94;
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
	ctx.current_instruction = 0x8814DDB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DDC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814ddd0
	if (!ctx.cr0.lt) goto loc_8814DDD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DDD0;
	sub_88156678(ctx, base);
loc_8814DDD0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DDD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814dd88
	if (ctx.cr6.gt) goto loc_8814DD88;
loc_8814DDE0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DDE4;
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
	ctx.current_instruction = 0x8814DDFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DE08;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814de18
	if (!ctx.cr0.lt) goto loc_8814DE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DE18;
	sub_88156678(ctx, base);
loc_8814DE18:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DE18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r25,r30,r28
	ctx.r25.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DE28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814de90
	if (!ctx.cr6.lt) goto loc_8814DE90;
loc_8814DE38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814de90
	if (ctx.cr6.eq) goto loc_8814DE90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DE44;
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
	ctx.current_instruction = 0x8814DE68;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DE70;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814de80
	if (!ctx.cr0.lt) goto loc_8814DE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DE80;
	sub_88156678(ctx, base);
loc_8814DE80:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DE80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814de38
	if (ctx.cr6.gt) goto loc_8814DE38;
loc_8814DE90:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DE94;
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
	ctx.current_instruction = 0x8814DEAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DEB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814dec8
	if (!ctx.cr0.lt) goto loc_8814DEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DEC8;
	sub_88156678(ctx, base);
loc_8814DEC8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DEC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DED8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814df40
	if (!ctx.cr6.lt) goto loc_8814DF40;
loc_8814DEE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814df40
	if (ctx.cr6.eq) goto loc_8814DF40;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DEF4;
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
	ctx.current_instruction = 0x8814DF18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DF20;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814df30
	if (!ctx.cr0.lt) goto loc_8814DF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DF30;
	sub_88156678(ctx, base);
loc_8814DF30:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DF30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814dee8
	if (ctx.cr6.gt) goto loc_8814DEE8;
loc_8814DF40:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DF44;
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
	ctx.current_instruction = 0x8814DF5C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814DF68;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814df78
	if (!ctx.cr0.lt) goto loc_8814DF78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DF78;
	sub_88156678(ctx, base);
loc_8814DF78:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814DF78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r26,r30,r28
	ctx.r26.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DF88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814dff0
	if (!ctx.cr6.lt) goto loc_8814DFF0;
loc_8814DF98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814dff0
	if (ctx.cr6.eq) goto loc_8814DFF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814DFA4;
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
	ctx.current_instruction = 0x8814DFC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814DFD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814dfe0
	if (!ctx.cr0.lt) goto loc_8814DFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814DFE0;
	sub_88156678(ctx, base);
loc_8814DFE0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814DFE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814df98
	if (ctx.cr6.gt) goto loc_8814DF98;
loc_8814DFF0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814DFF4;
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
	ctx.current_instruction = 0x8814E00C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E018;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e028
	if (!ctx.cr0.lt) goto loc_8814E028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E028;
	sub_88156678(ctx, base);
loc_8814E028:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E028;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e0a0
	if (!ctx.cr6.lt) goto loc_8814E0A0;
loc_8814E048:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e0a0
	if (ctx.cr6.eq) goto loc_8814E0A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E054;
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
	ctx.current_instruction = 0x8814E078;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E080;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e090
	if (!ctx.cr0.lt) goto loc_8814E090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E090;
	sub_88156678(ctx, base);
loc_8814E090:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E090;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e048
	if (ctx.cr6.gt) goto loc_8814E048;
loc_8814E0A0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E0A4;
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
	ctx.current_instruction = 0x8814E0BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E0C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e0d8
	if (!ctx.cr0.lt) goto loc_8814E0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E0D8;
	sub_88156678(ctx, base);
loc_8814E0D8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E0D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r27,r30,r28
	ctx.r27.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E0E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e150
	if (!ctx.cr6.lt) goto loc_8814E150;
loc_8814E0F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e150
	if (ctx.cr6.eq) goto loc_8814E150;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E104;
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
	ctx.current_instruction = 0x8814E128;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E130;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e140
	if (!ctx.cr0.lt) goto loc_8814E140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E140;
	sub_88156678(ctx, base);
loc_8814E140:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e0f8
	if (ctx.cr6.gt) goto loc_8814E0F8;
loc_8814E150:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E154;
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
	ctx.current_instruction = 0x8814E16C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E178;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e188
	if (!ctx.cr0.lt) goto loc_8814E188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E188;
	sub_88156678(ctx, base);
loc_8814E188:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E188;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e200
	if (!ctx.cr6.lt) goto loc_8814E200;
loc_8814E1A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e200
	if (ctx.cr6.eq) goto loc_8814E200;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E1B4;
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
	ctx.current_instruction = 0x8814E1D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E1E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e1f0
	if (!ctx.cr0.lt) goto loc_8814E1F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E1F0;
	sub_88156678(ctx, base);
loc_8814E1F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E1F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e1a8
	if (ctx.cr6.gt) goto loc_8814E1A8;
loc_8814E200:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E204;
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
	ctx.current_instruction = 0x8814E21C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E228;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e238
	if (!ctx.cr0.lt) goto loc_8814E238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E238;
	sub_88156678(ctx, base);
loc_8814E238:
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	ctx.current_instruction = 0x8814E240;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.current_instruction = 0x8814E244;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,104(r1)
	ctx.current_instruction = 0x8814E248;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.current_instruction = 0x8814E24C;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// add r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 + ctx.r28.u64;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	ctx.current_instruction = 0x8814E25C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8814E260;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	ctx.current_instruction = 0x8814E264;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x8814E26C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// addi r11,r11,18136
	ctx.r11.s64 = ctx.r11.s64 + 18136;
	// addi r10,r10,12188
	ctx.r10.s64 = ctx.r10.s64 + 12188;
	// lfs f31,0(r11)
	ctx.current_instruction = 0x8814E290;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	ctx.current_instruction = 0x8814E294;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// fmsubs f1,f5,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f1,0(r17)
	ctx.current_instruction = 0x8814E2A8;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// fmsubs f0,f4,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f0,0(r19)
	ctx.current_instruction = 0x8814E2B0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// fmsubs f13,f3,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f13,0(r16)
	ctx.current_instruction = 0x8814E2B8;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// fmsubs f2,f6,f31,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f2,0(r18)
	ctx.current_instruction = 0x8814E2C0;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// b 0x8814ebc0
	goto loc_8814EBC0;
loc_8814E2C8:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E2C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E2CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e334
	if (!ctx.cr6.lt) goto loc_8814E334;
loc_8814E2DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e334
	if (ctx.cr6.eq) goto loc_8814E334;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E2E8;
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
	ctx.current_instruction = 0x8814E30C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E314;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e324
	if (!ctx.cr0.lt) goto loc_8814E324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E324;
	sub_88156678(ctx, base);
loc_8814E324:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E324;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e2dc
	if (ctx.cr6.gt) goto loc_8814E2DC;
loc_8814E334:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E338;
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
	ctx.current_instruction = 0x8814E350;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E35C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e36c
	if (!ctx.cr0.lt) goto loc_8814E36C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E36C;
	sub_88156678(ctx, base);
loc_8814E36C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E36C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E37C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e3e4
	if (!ctx.cr6.lt) goto loc_8814E3E4;
loc_8814E38C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e3e4
	if (ctx.cr6.eq) goto loc_8814E3E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E398;
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
	ctx.current_instruction = 0x8814E3BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E3C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e3d4
	if (!ctx.cr0.lt) goto loc_8814E3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E3D4;
	sub_88156678(ctx, base);
loc_8814E3D4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E3D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e38c
	if (ctx.cr6.gt) goto loc_8814E38C;
loc_8814E3E4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E3E8;
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
	ctx.current_instruction = 0x8814E400;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E40C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e41c
	if (!ctx.cr0.lt) goto loc_8814E41C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E41C;
	sub_88156678(ctx, base);
loc_8814E41C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E41C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r23,r30,r28
	ctx.r23.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E42C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e494
	if (!ctx.cr6.lt) goto loc_8814E494;
loc_8814E43C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e494
	if (ctx.cr6.eq) goto loc_8814E494;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E448;
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
	ctx.current_instruction = 0x8814E46C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E474;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e484
	if (!ctx.cr0.lt) goto loc_8814E484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E484;
	sub_88156678(ctx, base);
loc_8814E484:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e43c
	if (ctx.cr6.gt) goto loc_8814E43C;
loc_8814E494:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E498;
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
	ctx.current_instruction = 0x8814E4B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E4BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e4cc
	if (!ctx.cr0.lt) goto loc_8814E4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E4CC;
	sub_88156678(ctx, base);
loc_8814E4CC:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E4CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E4DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e544
	if (!ctx.cr6.lt) goto loc_8814E544;
loc_8814E4EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e544
	if (ctx.cr6.eq) goto loc_8814E544;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E4F8;
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
	ctx.current_instruction = 0x8814E51C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E524;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e534
	if (!ctx.cr0.lt) goto loc_8814E534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E534;
	sub_88156678(ctx, base);
loc_8814E534:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e4ec
	if (ctx.cr6.gt) goto loc_8814E4EC;
loc_8814E544:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E548;
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
	ctx.current_instruction = 0x8814E560;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E56C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e57c
	if (!ctx.cr0.lt) goto loc_8814E57C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E57C;
	sub_88156678(ctx, base);
loc_8814E57C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E57C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r24,r30,r28
	ctx.r24.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E58C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e5f4
	if (!ctx.cr6.lt) goto loc_8814E5F4;
loc_8814E59C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e5f4
	if (ctx.cr6.eq) goto loc_8814E5F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E5A8;
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
	ctx.current_instruction = 0x8814E5CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E5D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e5e4
	if (!ctx.cr0.lt) goto loc_8814E5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E5E4;
	sub_88156678(ctx, base);
loc_8814E5E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e59c
	if (ctx.cr6.gt) goto loc_8814E59C;
loc_8814E5F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E5F8;
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
	ctx.current_instruction = 0x8814E610;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E61C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e62c
	if (!ctx.cr0.lt) goto loc_8814E62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E62C;
	sub_88156678(ctx, base);
loc_8814E62C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E62C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E63C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e6a4
	if (!ctx.cr6.lt) goto loc_8814E6A4;
loc_8814E64C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e6a4
	if (ctx.cr6.eq) goto loc_8814E6A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E658;
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
	ctx.current_instruction = 0x8814E67C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E684;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e694
	if (!ctx.cr0.lt) goto loc_8814E694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E694;
	sub_88156678(ctx, base);
loc_8814E694:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e64c
	if (ctx.cr6.gt) goto loc_8814E64C;
loc_8814E6A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E6A8;
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
	ctx.current_instruction = 0x8814E6C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E6CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e6dc
	if (!ctx.cr0.lt) goto loc_8814E6DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E6DC;
	sub_88156678(ctx, base);
loc_8814E6DC:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E6DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r25,r30,r28
	ctx.r25.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E6EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e754
	if (!ctx.cr6.lt) goto loc_8814E754;
loc_8814E6FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e754
	if (ctx.cr6.eq) goto loc_8814E754;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E708;
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
	ctx.current_instruction = 0x8814E72C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E734;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e744
	if (!ctx.cr0.lt) goto loc_8814E744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E744;
	sub_88156678(ctx, base);
loc_8814E744:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e6fc
	if (ctx.cr6.gt) goto loc_8814E6FC;
loc_8814E754:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E758;
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
	ctx.current_instruction = 0x8814E770;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E77C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e78c
	if (!ctx.cr0.lt) goto loc_8814E78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E78C;
	sub_88156678(ctx, base);
loc_8814E78C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E78C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E79C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e804
	if (!ctx.cr6.lt) goto loc_8814E804;
loc_8814E7AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e804
	if (ctx.cr6.eq) goto loc_8814E804;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E7B8;
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
	ctx.current_instruction = 0x8814E7DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E7E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e7f4
	if (!ctx.cr0.lt) goto loc_8814E7F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E7F4;
	sub_88156678(ctx, base);
loc_8814E7F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E7F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e7ac
	if (ctx.cr6.gt) goto loc_8814E7AC;
loc_8814E804:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E808;
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
	ctx.current_instruction = 0x8814E820;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E82C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e83c
	if (!ctx.cr0.lt) goto loc_8814E83C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E83C;
	sub_88156678(ctx, base);
loc_8814E83C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E83C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r26,r30,r28
	ctx.r26.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E84C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e8b4
	if (!ctx.cr6.lt) goto loc_8814E8B4;
loc_8814E85C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e8b4
	if (ctx.cr6.eq) goto loc_8814E8B4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E868;
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
	ctx.current_instruction = 0x8814E88C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E894;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e8a4
	if (!ctx.cr0.lt) goto loc_8814E8A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E8A4;
	sub_88156678(ctx, base);
loc_8814E8A4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e85c
	if (ctx.cr6.gt) goto loc_8814E85C;
loc_8814E8B4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E8B8;
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
	ctx.current_instruction = 0x8814E8D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E8DC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e8ec
	if (!ctx.cr0.lt) goto loc_8814E8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E8EC;
	sub_88156678(ctx, base);
loc_8814E8EC:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E8EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E8FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814e964
	if (!ctx.cr6.lt) goto loc_8814E964;
loc_8814E90C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814e964
	if (ctx.cr6.eq) goto loc_8814E964;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E918;
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
	ctx.current_instruction = 0x8814E93C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E944;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814e954
	if (!ctx.cr0.lt) goto loc_8814E954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E954;
	sub_88156678(ctx, base);
loc_8814E954:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e90c
	if (ctx.cr6.gt) goto loc_8814E90C;
loc_8814E964:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814E968;
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
	ctx.current_instruction = 0x8814E980;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814E98C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814e99c
	if (!ctx.cr0.lt) goto loc_8814E99C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814E99C;
	sub_88156678(ctx, base);
loc_8814E99C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814E99C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// add r27,r30,r28
	ctx.r27.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814E9AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814ea14
	if (!ctx.cr6.lt) goto loc_8814EA14;
loc_8814E9BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814ea14
	if (ctx.cr6.eq) goto loc_8814EA14;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814E9C8;
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
	ctx.current_instruction = 0x8814E9EC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814E9F4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814ea04
	if (!ctx.cr0.lt) goto loc_8814EA04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EA04;
	sub_88156678(ctx, base);
loc_8814EA04:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EA04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814e9bc
	if (ctx.cr6.gt) goto loc_8814E9BC;
loc_8814EA14:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814EA18;
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
	ctx.current_instruction = 0x8814EA30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814EA3C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814ea4c
	if (!ctx.cr0.lt) goto loc_8814EA4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EA4C;
	sub_88156678(ctx, base);
loc_8814EA4C:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814EA4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EA5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814eac4
	if (!ctx.cr6.lt) goto loc_8814EAC4;
loc_8814EA6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814eac4
	if (ctx.cr6.eq) goto loc_8814EAC4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814EA78;
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
	ctx.current_instruction = 0x8814EA9C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814EAA4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814eab4
	if (!ctx.cr0.lt) goto loc_8814EAB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EAB4;
	sub_88156678(ctx, base);
loc_8814EAB4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EAB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814ea6c
	if (ctx.cr6.gt) goto loc_8814EA6C;
loc_8814EAC4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814EAC8;
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
	ctx.current_instruction = 0x8814EAE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814EAEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814eafc
	if (!ctx.cr0.lt) goto loc_8814EAFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EAFC;
	sub_88156678(ctx, base);
loc_8814EAFC:
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// std r10,104(r1)
	ctx.current_instruction = 0x8814EB04;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// clrldi r7,r24,32
	ctx.r7.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r25,32
	ctx.r6.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r7,88(r1)
	ctx.current_instruction = 0x8814EB14;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f8,88(r1)
	ctx.current_instruction = 0x8814EB18;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r5,r26,32
	ctx.r5.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	ctx.current_instruction = 0x8814EB20;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x8814EB24;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r8,r23,32
	ctx.r8.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// std r8,96(r1)
	ctx.current_instruction = 0x8814EB30;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.current_instruction = 0x8814EB34;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,104(r1)
	ctx.current_instruction = 0x8814EB40;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	ctx.current_instruction = 0x8814EB44;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// addi r11,r11,18136
	ctx.r11.s64 = ctx.r11.s64 + 18136;
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// addi r10,r10,12188
	ctx.r10.s64 = ctx.r10.s64 + 12188;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// lfs f31,0(r11)
	ctx.current_instruction = 0x8814EB60;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	ctx.current_instruction = 0x8814EB64;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// fmsubs f8,f0,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f8,0(r17)
	ctx.current_instruction = 0x8814EB70;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// lfd f13,104(r1)
	ctx.current_instruction = 0x8814EB74;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,104(r1)
	ctx.current_instruction = 0x8814EB78;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmsubs f9,f1,f31,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f31.f64, -ctx.f30.f64)));
	// fmsubs f7,f13,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f7,0(r22)
	ctx.current_instruction = 0x8814EB8C;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// lfd f12,104(r1)
	ctx.current_instruction = 0x8814EB90;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmsubs f6,f12,f31,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f6,0(r19)
	ctx.current_instruction = 0x8814EBA8;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// fmsubs f10,f2,f31,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f10,0(r21)
	ctx.current_instruction = 0x8814EBB0;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stfs f9,0(r16)
	ctx.current_instruction = 0x8814EBB4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// fmsubs f5,f11,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f5,0(r18)
	ctx.current_instruction = 0x8814EBBC;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r18.u32 + 0, temp.u32);
loc_8814EBC0:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814EBC0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EBCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8814ec34
	if (!ctx.cr6.lt) goto loc_8814EC34;
loc_8814EBDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814ec34
	if (ctx.cr6.eq) goto loc_8814EC34;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814EBE8;
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
	ctx.current_instruction = 0x8814EC0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814EC14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814ec24
	if (!ctx.cr0.lt) goto loc_8814EC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EC24;
	sub_88156678(ctx, base);
loc_8814EC24:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EC24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814ebdc
	if (ctx.cr6.gt) goto loc_8814EBDC;
loc_8814EC34:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814EC38;
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
	ctx.current_instruction = 0x8814EC50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814EC5C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814ec6c
	if (!ctx.cr0.lt) goto loc_8814EC6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EC6C;
	sub_88156678(ctx, base);
loc_8814EC6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8814edf4
	if (ctx.cr6.eq) goto loc_8814EDF4;
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814EC74;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814EC80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814ece8
	if (!ctx.cr6.lt) goto loc_8814ECE8;
loc_8814EC90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814ece8
	if (ctx.cr6.eq) goto loc_8814ECE8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814EC9C;
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
	ctx.current_instruction = 0x8814ECC0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814ECC8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814ecd8
	if (!ctx.cr0.lt) goto loc_8814ECD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814ECD8;
	sub_88156678(ctx, base);
loc_8814ECD8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814ECD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814ec90
	if (ctx.cr6.gt) goto loc_8814EC90;
loc_8814ECE8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814ECEC;
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
	ctx.current_instruction = 0x8814ED04;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814ED10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814ed20
	if (!ctx.cr0.lt) goto loc_8814ED20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814ED20;
	sub_88156678(ctx, base);
loc_8814ED20:
	// lwz r31,84(r20)
	ctx.current_instruction = 0x8814ED20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814ED30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8814ed98
	if (!ctx.cr6.lt) goto loc_8814ED98;
loc_8814ED40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814ed98
	if (ctx.cr6.eq) goto loc_8814ED98;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8814ED4C;
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
	ctx.current_instruction = 0x8814ED70;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8814ED78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8814ed88
	if (!ctx.cr0.lt) goto loc_8814ED88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814ED88;
	sub_88156678(ctx, base);
loc_8814ED88:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8814ED88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8814ed40
	if (ctx.cr6.gt) goto loc_8814ED40;
loc_8814ED98:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8814ED9C;
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
	ctx.current_instruction = 0x8814EDB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8814EDC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8814edd0
	if (!ctx.cr0.lt) goto loc_8814EDD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8814EDD0;
	sub_88156678(ctx, base);
loc_8814EDD0:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	ctx.current_instruction = 0x8814EDD8;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.current_instruction = 0x8814EDDC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfs f11,0(r15)
	ctx.current_instruction = 0x8814EDEC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r15.u32 + 0, temp.u32);
	// b 0x8814edf8
	goto loc_8814EDF8;
loc_8814EDF4:
	// stfs f28,0(r15)
	ctx.current_instruction = 0x8814EDF4;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r15.u32 + 0, temp.u32);
loc_8814EDF8:
	// lwz r11,84(r20)
	ctx.current_instruction = 0x8814EDF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8814EDFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8814ee24
	if (!ctx.cr6.eq) goto loc_8814EE24;
	// lfs f0,0(r17)
	ctx.current_instruction = 0x8814EE08;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x8814ee24
	if (ctx.cr6.lt) goto loc_8814EE24;
	// lfs f0,0(r16)
	ctx.current_instruction = 0x8814EE14;
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8814ee28
	if (!ctx.cr6.lt) goto loc_8814EE28;
loc_8814EE24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8814EE28:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x881ef2d4
	ctx.lr = 0x8814EE34;
	__restfpr_28(ctx, base);
loc_8814EE34:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819D330) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819D330;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819D330) {
			switch (rex_dispatch_address) {
				case 0x8819D338:
				case 0x8819D41C:
				case 0x8819D55C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819D330;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819D338: goto loc_8819D338;
		case 0x8819D41C: goto loc_8819D41C;
		case 0x8819D55C: goto loc_8819D55C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8819D338;
	__savegprlr_27(ctx, base);
loc_8819D338:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8819D338;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r3,4084
	ctx.r11.s64 = ctx.r3.s64 + 4084;
	// li r7,-3
	ctx.r7.s64 = -3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r27,8
	ctx.r27.s64 = 8;
loc_8819D35C:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stw r6,-12(r11)
	ctx.current_instruction = 0x8819D360;
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r10,-16(r11)
	ctx.current_instruction = 0x8819D36C;
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-8(r11)
	ctx.current_instruction = 0x8819D370;
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r5,-4(r11)
	ctx.current_instruction = 0x8819D374;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8819d3a0
	if (ctx.cr6.gt) goto loc_8819D3A0;
	// stw r27,0(r11)
	ctx.current_instruction = 0x8819D380;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,14820(r28)
	ctx.current_instruction = 0x8819D384;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 14820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819d3ac
	if (ctx.cr6.eq) goto loc_8819D3AC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x8819d3ac
	if (ctx.cr6.gt) goto loc_8819D3AC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8819d3a8
	goto loc_8819D3A8;
loc_8819D3A0:
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8819D3A8:
	// stw r10,0(r11)
	ctx.current_instruction = 0x8819D3A8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8819D3AC:
	// stw r8,4(r11)
	ctx.current_instruction = 0x8819D3AC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// stw r6,8(r11)
	ctx.current_instruction = 0x8819D3B4;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,12(r11)
	ctx.current_instruction = 0x8819D3B8;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r7,16(r11)
	ctx.current_instruction = 0x8819D3C0;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// bgt cr6,0x8819d3e8
	if (ctx.cr6.gt) goto loc_8819D3E8;
	// stw r27,20(r11)
	ctx.current_instruction = 0x8819D3C8;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r9,14820(r28)
	ctx.current_instruction = 0x8819D3CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8819d3f4
	if (ctx.cr6.eq) goto loc_8819D3F4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8819d3f4
	if (ctx.cr6.gt) goto loc_8819D3F4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8819d3f0
	goto loc_8819D3F0;
loc_8819D3E8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8819D3F0:
	// stw r10,20(r11)
	ctx.current_instruction = 0x8819D3F0;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8819D3F4:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bdnz 0x8819d35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819D35C;
	// addi r29,r28,4068
	ctx.r29.s64 = ctx.r28.s64 + 4068;
	// addi r30,r28,6688
	ctx.r30.s64 = ctx.r28.s64 + 6688;
	// li r31,62
	ctx.r31.s64 = 62;
loc_8819D410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881b6f48
	ctx.lr = 0x8819D41C;
	sub_881B6F48(ctx, base);
loc_8819D41C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// bne 0x8819d410
	if (!ctx.cr0.eq) goto loc_8819D410;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r11,r28,5356
	ctx.r11.s64 = ctx.r28.s64 + 5356;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8819D43C:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// stw r9,-8(r11)
	ctx.current_instruction = 0x8819D440;
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r10,15536(r28)
	ctx.current_instruction = 0x8819D444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// blt cr6,0x8819d464
	if (ctx.cr6.lt) goto loc_8819D464;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,-4(r11)
	ctx.current_instruction = 0x8819D458;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,0(r11)
	ctx.current_instruction = 0x8819D45C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8819d47c
	goto loc_8819D47C;
loc_8819D464:
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// subf r8,r6,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,-4(r11)
	ctx.current_instruction = 0x8819D474;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r5,0(r11)
	ctx.current_instruction = 0x8819D478;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8819D47C:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8819D47C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,4(r11)
	ctx.current_instruction = 0x8819D488;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bgt cr6,0x8819d4b0
	if (ctx.cr6.gt) goto loc_8819D4B0;
	// stw r27,8(r11)
	ctx.current_instruction = 0x8819D490;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r9,14820(r28)
	ctx.current_instruction = 0x8819D494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8819d4bc
	if (ctx.cr6.eq) goto loc_8819D4BC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8819d4bc
	if (ctx.cr6.gt) goto loc_8819D4BC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8819d4b8
	goto loc_8819D4B8;
loc_8819D4B0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8819D4B8:
	// stw r10,8(r11)
	ctx.current_instruction = 0x8819D4B8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8819D4BC:
	// stw r7,12(r11)
	ctx.current_instruction = 0x8819D4BC;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r10,15536(r28)
	ctx.current_instruction = 0x8819D4C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// blt cr6,0x8819d4e0
	if (ctx.cr6.lt) goto loc_8819D4E0;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8819D4D4;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	ctx.current_instruction = 0x8819D4D8;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x8819d4f8
	goto loc_8819D4F8;
loc_8819D4E0:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r11)
	ctx.current_instruction = 0x8819D4F0;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r6,20(r11)
	ctx.current_instruction = 0x8819D4F4;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_8819D4F8:
	// lwz r9,20(r11)
	ctx.current_instruction = 0x8819D4F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,24(r11)
	ctx.current_instruction = 0x8819D504;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8819d52c
	if (ctx.cr6.gt) goto loc_8819D52C;
	// stw r27,28(r11)
	ctx.current_instruction = 0x8819D50C;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// lwz r9,14820(r28)
	ctx.current_instruction = 0x8819D510;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8819d538
	if (ctx.cr6.eq) goto loc_8819D538;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8819d538
	if (ctx.cr6.gt) goto loc_8819D538;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8819d534
	goto loc_8819D534;
loc_8819D52C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8819D534:
	// stw r10,28(r11)
	ctx.current_instruction = 0x8819D534;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8819D538:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x8819d43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819D43C;
	// addi r29,r28,5348
	ctx.r29.s64 = ctx.r28.s64 + 5348;
	// addi r30,r28,10784
	ctx.r30.s64 = ctx.r28.s64 + 10784;
	// li r31,62
	ctx.r31.s64 = 62;
loc_8819D550:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881b6f48
	ctx.lr = 0x8819D55C;
	sub_881B6F48(ctx, base);
loc_8819D55C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// bne 0x8819d550
	if (!ctx.cr0.eq) goto loc_8819D550;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A5DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A5DC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A5DC0) {
			switch (rex_dispatch_address) {
				case 0x881A5DC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A5DC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881A5DC8: goto loc_881A5DC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881A5DC8;
	__savegprlr_23(ctx, base);
loc_881A5DC8:
	// srawi. r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881a5f3c
	if (!ctx.cr0.gt) goto loc_881A5F3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,26744
	ctx.r26.s64 = ctx.r11.s64 + 26744;
loc_881A5DE0:
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_881A5DE8:
	// lbz r6,4(r3)
	ctx.current_instruction = 0x881A5DE8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r31,5(r3)
	ctx.current_instruction = 0x881A5DEC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r11,3(r3)
	ctx.current_instruction = 0x881A5DF0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// subf r10,r31,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r31.u64;
	// lbz r9,6(r3)
	ctx.current_instruction = 0x881A5DF8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze. r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r28.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x881a5f0c
	if (ctx.cr0.eq) goto loc_881A5F0C;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r7,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r7.u64;
	// srawi r30,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// xor r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// subf r29,r7,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881a5f0c
	if (!ctx.cr6.lt) goto loc_881A5F0C;
	// lbz r10,2(r3)
	ctx.current_instruction = 0x881A5E38;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,1(r3)
	ctx.current_instruction = 0x881A5E3C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lbz r24,8(r3)
	ctx.current_instruction = 0x881A5E44;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r11,7(r3)
	ctx.current_instruction = 0x881A5E48;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// subf r7,r6,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r24,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r7,2
	ctx.r24.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r8,2
	ctx.r23.s64 = ctx.r8.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881a5eac
	if (!ctx.cr6.lt) goto loc_881A5EAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5EAC:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881a5f0c
	if (!ctx.cr6.lt) goto loc_881A5F0C;
	// xor r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r28.u64;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a5f14
	if (ctx.cr6.eq) goto loc_881A5F14;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 31;
	// xor r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881a5eec
	if (ctx.cr6.lt) goto loc_881A5EEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5EEC:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x881a5ef8
	if (!ctx.cr6.lt) goto loc_881A5EF8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881A5EF8:
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,4(r3)
	ctx.current_instruction = 0x881A5F00;
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r9,5(r3)
	ctx.current_instruction = 0x881A5F04;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// b 0x881a5f14
	goto loc_881A5F14;
loc_881A5F0C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881a5f34
	if (ctx.cr6.eq) goto loc_881A5F34;
loc_881A5F14:
	// lbzx r11,r27,r26
	ctx.current_instruction = 0x881A5F14;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r26.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x881a5de8
	if (ctx.cr6.lt) goto loc_881A5DE8;
	// b 0x881a5f38
	goto loc_881A5F38;
loc_881A5F34:
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
loc_881A5F38:
	// bdnz 0x881a5de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A5DE0;
loc_881A5F3C:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A93A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A93A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A93A0) {
			switch (rex_dispatch_address) {
				case 0x881A93A8:
				case 0x881A9470:
				case 0x881A9568:
				case 0x881A95AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A93A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A93A8: goto loc_881A93A8;
		case 0x881A9470: goto loc_881A9470;
		case 0x881A9568: goto loc_881A9568;
		case 0x881A95AC: goto loc_881A95AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881A93A8;
	__savegprlr_25(ctx, base);
loc_881A93A8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881A93A8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,212(r3)
	ctx.current_instruction = 0x881A93B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,216(r3)
	ctx.current_instruction = 0x881A93B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,21916(r3)
	ctx.current_instruction = 0x881A93BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21916);
	// lwz r6,204(r3)
	ctx.current_instruction = 0x881A93C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,208(r3)
	ctx.current_instruction = 0x881A93C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r26,-10072(r11)
	ctx.current_instruction = 0x881A93CC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -10072);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r25,r8,r5
	ctx.r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// beq cr6,0x881a943c
	if (ctx.cr6.eq) goto loc_881A943C;
	// lwz r11,15628(r3)
	ctx.current_instruction = 0x881A93DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a93f0
	if (!ctx.cr6.eq) goto loc_881A93F0;
	// lwz r7,3776(r3)
	ctx.current_instruction = 0x881A93E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// b 0x881a93f4
	goto loc_881A93F4;
loc_881A93F0:
	// lwz r7,3832(r31)
	ctx.current_instruction = 0x881A93F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
loc_881A93F4:
	// lwz r10,21924(r31)
	ctx.current_instruction = 0x881A93F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21924);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,3832(r31)
	ctx.current_instruction = 0x881A93FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x881a9480
	if (!ctx.cr6.gt) goto loc_881A9480;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881A9410:
	// lbzx r10,r9,r11
	ctx.current_instruction = 0x881A9410;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r5,128(r6)
	ctx.current_instruction = 0x881A9428;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881A942C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a9410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9410;
	// b 0x881a9480
	goto loc_881A9480;
loc_881A943C:
	// lwz r11,220(r31)
	ctx.current_instruction = 0x881A943C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x881A9440;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r10,3832(r31)
	ctx.current_instruction = 0x881A9444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r27,188(r31)
	ctx.current_instruction = 0x881A9448;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,204(r31)
	ctx.current_instruction = 0x881A9450;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881a9480
	if (!ctx.cr6.gt) goto loc_881A9480;
loc_881A9460:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A9470;
	sub_880547A0(ctx, base);
loc_881A9470:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bne 0x881a9460
	if (!ctx.cr0.eq) goto loc_881A9460;
loc_881A9480:
	// lwz r11,21920(r31)
	ctx.current_instruction = 0x881A9480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a9534
	if (ctx.cr6.eq) goto loc_881A9534;
	// lwz r11,15628(r31)
	ctx.current_instruction = 0x881A948C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a94a4
	if (!ctx.cr6.eq) goto loc_881A94A4;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881A9498;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881A949C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// b 0x881a94ac
	goto loc_881A94AC;
loc_881A94A4:
	// lwz r8,3836(r31)
	ctx.current_instruction = 0x881A94A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r7,3840(r31)
	ctx.current_instruction = 0x881A94A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
loc_881A94AC:
	// lwz r10,21928(r31)
	ctx.current_instruction = 0x881A94AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21928);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r11,3836(r31)
	ctx.current_instruction = 0x881A94B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x881a94f0
	if (!ctx.cr6.gt) goto loc_881A94F0;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_881A94C8:
	// lbzx r10,r8,r11
	ctx.current_instruction = 0x881A94C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r4,128(r5)
	ctx.current_instruction = 0x881A94E0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 128);
	// stb r4,0(r11)
	ctx.current_instruction = 0x881A94E4;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a94c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A94C8;
loc_881A94F0:
	// lwz r11,3840(r31)
	ctx.current_instruction = 0x881A94F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881a95bc
	if (!ctx.cr6.gt) goto loc_881A95BC;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881A9504:
	// lbzx r10,r8,r11
	ctx.current_instruction = 0x881A9504;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r5,128(r6)
	ctx.current_instruction = 0x881A951C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881A9520;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a9504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9504;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881A9534:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881A9534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3780(r31)
	ctx.current_instruction = 0x881A9538;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r10,3836(r31)
	ctx.current_instruction = 0x881A953C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r27,200(r31)
	ctx.current_instruction = 0x881A9540;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,208(r31)
	ctx.current_instruction = 0x881A9548;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881a9578
	if (!ctx.cr6.gt) goto loc_881A9578;
loc_881A9558:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A9568;
	sub_880547A0(ctx, base);
loc_881A9568:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bne 0x881a9558
	if (!ctx.cr0.eq) goto loc_881A9558;
loc_881A9578:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881A9578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x881A957C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r28,200(r31)
	ctx.current_instruction = 0x881A9580;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,3840(r31)
	ctx.current_instruction = 0x881A9584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r29,208(r31)
	ctx.current_instruction = 0x881A958C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x881a95bc
	if (!ctx.cr6.gt) goto loc_881A95BC;
loc_881A959C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A95AC;
	sub_880547A0(ctx, base);
loc_881A95AC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bne 0x881a959c
	if (!ctx.cr0.eq) goto loc_881A959C;
loc_881A95BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ACF40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ACF40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ACF40;
	ctx.current_instruction = 0x881ACF40;
	PPCRegister temp{};
	// lwz r7,15552(r3)
	ctx.current_instruction = 0x881ACF40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15552);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,15632(r3)
	ctx.current_instruction = 0x881ACF4C;
	REX_STORE_U32(ctx.r3.u32 + 15632, ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,15956(r3)
	ctx.current_instruction = 0x881ACF54;
	REX_STORE_U32(ctx.r3.u32 + 15956, ctx.r6.u32);
	// stw r6,15960(r3)
	ctx.current_instruction = 0x881ACF58;
	REX_STORE_U32(ctx.r3.u32 + 15960, ctx.r6.u32);
	// bne cr6,0x881acf6c
	if (!ctx.cr6.eq) goto loc_881ACF6C;
loc_881ACF60:
	// li r3,-5
	ctx.r3.s64 = -5;
	// stw r6,15636(r11)
	ctx.current_instruction = 0x881ACF64;
	REX_STORE_U32(ctx.r11.u32 + 15636, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881ACF6C:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x881acf60
	if (ctx.cr6.eq) goto loc_881ACF60;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r10,21849
	ctx.r8.u64 = ctx.r10.u64 | 21849;
	// ori r5,r9,22105
	ctx.r5.u64 = ctx.r9.u64 | 22105;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881acff8
	if (!ctx.cr6.eq) goto loc_881ACFF8;
	// lwz r10,3980(r11)
	ctx.current_instruction = 0x881ACF8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881acfbc
	if (ctx.cr6.eq) goto loc_881ACFBC;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-16968
	ctx.r4.s64 = ctx.r10.s64 + -16968;
	// addi r3,r9,-12616
	ctx.r3.s64 = ctx.r9.s64 + -12616;
	// stw r8,15636(r11)
	ctx.current_instruction = 0x881ACFAC;
	REX_STORE_U32(ctx.r11.u32 + 15636, ctx.r8.u32);
	// stw r4,15936(r11)
	ctx.current_instruction = 0x881ACFB0;
	REX_STORE_U32(ctx.r11.u32 + 15936, ctx.r4.u32);
	// stw r3,15940(r11)
	ctx.current_instruction = 0x881ACFB4;
	REX_STORE_U32(ctx.r11.u32 + 15940, ctx.r3.u32);
	// b 0x881ad100
	goto loc_881AD100;
loc_881ACFBC:
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-16832
	ctx.r10.s64 = ctx.r10.s64 + -16832;
	// addi r9,r9,-12752
	ctx.r9.s64 = ctx.r9.s64 + -12752;
	// stw r3,15636(r11)
	ctx.current_instruction = 0x881ACFD8;
	REX_STORE_U32(ctx.r11.u32 + 15636, ctx.r3.u32);
	// addi r8,r8,-16216
	ctx.r8.s64 = ctx.r8.s64 + -16216;
	// stw r10,15936(r11)
	ctx.current_instruction = 0x881ACFE0;
	REX_STORE_U32(ctx.r11.u32 + 15936, ctx.r10.u32);
	// addi r4,r4,-13168
	ctx.r4.s64 = ctx.r4.s64 + -13168;
	// stw r9,15940(r11)
	ctx.current_instruction = 0x881ACFE8;
	REX_STORE_U32(ctx.r11.u32 + 15940, ctx.r9.u32);
	// stw r8,15944(r11)
	ctx.current_instruction = 0x881ACFEC;
	REX_STORE_U32(ctx.r11.u32 + 15944, ctx.r8.u32);
	// stw r4,15956(r11)
	ctx.current_instruction = 0x881ACFF0;
	REX_STORE_U32(ctx.r11.u32 + 15956, ctx.r4.u32);
	// b 0x881ad100
	goto loc_881AD100;
loc_881ACFF8:
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// lis r8,12849
	ctx.r8.s64 = 842072064;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// ori r8,r8,22094
	ctx.r8.u64 = ctx.r8.u64 | 22094;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x881ad038
	if (ctx.cr6.eq) goto loc_881AD038;
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r4,r10,22857
	ctx.r4.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881ad038
	if (ctx.cr6.eq) goto loc_881AD038;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881ad038
	if (ctx.cr6.eq) goto loc_881AD038;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881ad038
	if (ctx.cr6.eq) goto loc_881AD038;
loc_881AD030:
	// li r3,-5
	ctx.r3.s64 = -5;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881AD038:
	// lwz r4,24(r11)
	ctx.current_instruction = 0x881AD038;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,15636(r11)
	ctx.current_instruction = 0x881AD044;
	REX_STORE_U32(ctx.r11.u32 + 15636, ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,15632(r11)
	ctx.current_instruction = 0x881AD04C;
	REX_STORE_U32(ctx.r11.u32 + 15632, ctx.r10.u32);
	// sth r3,15556(r11)
	ctx.current_instruction = 0x881AD050;
	REX_STORE_U16(ctx.r11.u32 + 15556, ctx.r3.u16);
	// bne cr6,0x881ad100
	if (!ctx.cr6.eq) goto loc_881AD100;
	// lwz r10,152(r11)
	ctx.current_instruction = 0x881AD058;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881ad088
	if (ctx.cr6.eq) goto loc_881AD088;
	// lwz r4,22144(r11)
	ctx.current_instruction = 0x881AD064;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 22144);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ad07c
	if (!ctx.cr6.eq) goto loc_881AD07C;
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// addi r3,r4,-14472
	ctx.r3.s64 = ctx.r4.s64 + -14472;
	// b 0x881ad090
	goto loc_881AD090;
loc_881AD07C:
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// addi r3,r4,-15464
	ctx.r3.s64 = ctx.r4.s64 + -15464;
	// b 0x881ad090
	goto loc_881AD090;
loc_881AD088:
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// addi r3,r4,-15464
	ctx.r3.s64 = ctx.r4.s64 + -15464;
loc_881AD090:
	// lwz r4,22144(r11)
	ctx.current_instruction = 0x881AD090;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 22144);
	// stw r3,15948(r11)
	ctx.current_instruction = 0x881AD094;
	REX_STORE_U32(ctx.r11.u32 + 15948, ctx.r3.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ad0ac
	if (!ctx.cr6.eq) goto loc_881AD0AC;
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// addi r3,r4,-13368
	ctx.r3.s64 = ctx.r4.s64 + -13368;
	// b 0x881ad0b4
	goto loc_881AD0B4;
loc_881AD0AC:
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// addi r3,r4,-15712
	ctx.r3.s64 = ctx.r4.s64 + -15712;
loc_881AD0B4:
	// stw r3,15952(r11)
	ctx.current_instruction = 0x881AD0B4;
	REX_STORE_U32(ctx.r11.u32 + 15952, ctx.r3.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881ad0d0
	if (ctx.cr6.eq) goto loc_881AD0D0;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x881ad0d0
	if (ctx.cr6.eq) goto loc_881AD0D0;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881ad100
	if (!ctx.cr6.eq) goto loc_881AD100;
loc_881AD0D0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881ad0f4
	if (ctx.cr6.eq) goto loc_881AD0F4;
	// lwz r10,88(r11)
	ctx.current_instruction = 0x881AD0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881ad0f4
	if (!ctx.cr6.eq) goto loc_881AD0F4;
	// lis r10,-30690
	ctx.r10.s64 = -2011299840;
	// addi r9,r10,10568
	ctx.r9.s64 = ctx.r10.s64 + 10568;
	// b 0x881ad0fc
	goto loc_881AD0FC;
loc_881AD0F4:
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// addi r9,r10,-15872
	ctx.r9.s64 = ctx.r10.s64 + -15872;
loc_881AD0FC:
	// stw r9,15960(r11)
	ctx.current_instruction = 0x881AD0FC;
	REX_STORE_U32(ctx.r11.u32 + 15960, ctx.r9.u32);
loc_881AD100:
	// lwz r10,24(r11)
	ctx.current_instruction = 0x881AD100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881ad25c
	if (!ctx.cr6.eq) goto loc_881AD25C;
	// lhz r10,15556(r11)
	ctx.current_instruction = 0x881AD10C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 15556);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x881ad128
	if (ctx.cr6.eq) goto loc_881AD128;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x881ad128
	if (ctx.cr6.eq) goto loc_881AD128;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x881ad130
	if (!ctx.cr6.eq) goto loc_881AD130;
loc_881AD128:
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r10,15556(r11)
	ctx.current_instruction = 0x881AD12C;
	REX_STORE_U16(ctx.r11.u32 + 15556, ctx.r10.u16);
loc_881AD130:
	// lhz r10,15556(r11)
	ctx.current_instruction = 0x881AD130;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 15556);
	// lwz r9,15560(r11)
	ctx.current_instruction = 0x881AD134;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 15560);
	// rotlwi r8,r10,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r6,15692(r11)
	ctx.current_instruction = 0x881AD13C;
	REX_STORE_U32(ctx.r11.u32 + 15692, ctx.r6.u32);
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r4,15632(r11)
	ctx.current_instruction = 0x881AD144;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	// srawi r3,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r3,15696(r11)
	ctx.current_instruction = 0x881AD15C;
	REX_STORE_U32(ctx.r11.u32 + 15696, ctx.r3.u32);
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,15684(r11)
	ctx.current_instruction = 0x881AD168;
	REX_STORE_U32(ctx.r11.u32 + 15684, ctx.r10.u32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,15700(r11)
	ctx.current_instruction = 0x881AD170;
	REX_STORE_U32(ctx.r11.u32 + 15700, ctx.r3.u32);
	// stw r6,15708(r11)
	ctx.current_instruction = 0x881AD174;
	REX_STORE_U32(ctx.r11.u32 + 15708, ctx.r6.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r8,15712(r11)
	ctx.current_instruction = 0x881AD17C;
	REX_STORE_U32(ctx.r11.u32 + 15712, ctx.r8.u32);
	// bne cr6,0x881ad25c
	if (!ctx.cr6.eq) goto loc_881AD25C;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881ad030
	if (!ctx.cr6.eq) goto loc_881AD030;
	// lwz r8,92(r11)
	ctx.current_instruction = 0x881AD190;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881ad030
	if (!ctx.cr6.eq) goto loc_881AD030;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,15688(r11)
	ctx.current_instruction = 0x881AD1AC;
	REX_STORE_U32(ctx.r11.u32 + 15688, ctx.r7.u32);
	// beq cr6,0x881ad238
	if (ctx.cr6.eq) goto loc_881AD238;
	// lwz r10,24688(r11)
	ctx.current_instruction = 0x881AD1B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r7,712(r10)
	ctx.current_instruction = 0x881AD1B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881ad20c
	if (ctx.cr6.eq) goto loc_881AD20C;
	// lwz r7,18468(r10)
	ctx.current_instruction = 0x881AD1C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 18468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881ad20c
	if (ctx.cr6.eq) goto loc_881AD20C;
	// lwz r9,144(r10)
	ctx.current_instruction = 0x881AD1D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15640(r11)
	ctx.current_instruction = 0x881AD1D8;
	REX_STORE_U32(ctx.r11.u32 + 15640, ctx.r9.u32);
	// lwz r9,144(r10)
	ctx.current_instruction = 0x881AD1DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r8,148(r10)
	ctx.current_instruction = 0x881AD1E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,15644(r11)
	ctx.current_instruction = 0x881AD1E8;
	REX_STORE_U32(ctx.r11.u32 + 15644, ctx.r8.u32);
	// lwz r7,136(r10)
	ctx.current_instruction = 0x881AD1EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// stw r7,15684(r11)
	ctx.current_instruction = 0x881AD1F0;
	REX_STORE_U32(ctx.r11.u32 + 15684, ctx.r7.u32);
	// lwz r5,140(r10)
	ctx.current_instruction = 0x881AD1F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// stw r5,15688(r11)
	ctx.current_instruction = 0x881AD1FC;
	REX_STORE_U32(ctx.r11.u32 + 15688, ctx.r5.u32);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,15716(r11)
	ctx.current_instruction = 0x881AD204;
	REX_STORE_U32(ctx.r11.u32 + 15716, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881AD20C:
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r10,15640(r11)
	ctx.current_instruction = 0x881AD210;
	REX_STORE_U32(ctx.r11.u32 + 15640, ctx.r10.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// stw r9,15644(r11)
	ctx.current_instruction = 0x881AD228;
	REX_STORE_U32(ctx.r11.u32 + 15644, ctx.r9.u32);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,15716(r11)
	ctx.current_instruction = 0x881AD230;
	REX_STORE_U32(ctx.r11.u32 + 15716, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881AD238:
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r10,15644(r11)
	ctx.current_instruction = 0x881AD23C;
	REX_STORE_U32(ctx.r11.u32 + 15644, ctx.r10.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// stw r9,15640(r11)
	ctx.current_instruction = 0x881AD250;
	REX_STORE_U32(ctx.r11.u32 + 15640, ctx.r9.u32);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,15716(r11)
	ctx.current_instruction = 0x881AD258;
	REX_STORE_U32(ctx.r11.u32 + 15716, ctx.r9.u32);
loc_881AD25C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B30F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B30F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B30F0) {
			switch (rex_dispatch_address) {
				case 0x881B30F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B30F0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881B30F8: goto loc_881B30F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B30F8;
	__savegprlr_28(ctx, base);
loc_881B30F8:
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// addi r7,r10,-21912
	ctx.r7.s64 = ctx.r10.s64 + -21912;
	// addi r6,r9,9344
	ctx.r6.s64 = ctx.r9.s64 + 9344;
	// addi r8,r11,11568
	ctx.r8.s64 = ctx.r11.s64 + 11568;
	// stw r7,3220(r3)
	ctx.current_instruction = 0x881B3110;
	REX_STORE_U32(ctx.r3.u32 + 3220, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r6,3224(r3)
	ctx.current_instruction = 0x881B3118;
	REX_STORE_U32(ctx.r3.u32 + 3224, ctx.r6.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,3232(r3)
	ctx.current_instruction = 0x881B3120;
	REX_STORE_U32(ctx.r3.u32 + 3232, ctx.r8.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,15876(r3)
	ctx.current_instruction = 0x881B3128;
	REX_STORE_U32(ctx.r3.u32 + 15876, ctx.r9.u32);
	// lis r5,-30693
	ctx.r5.s64 = -2011496448;
	// stw r11,15888(r3)
	ctx.current_instruction = 0x881B3130;
	REX_STORE_U32(ctx.r3.u32 + 15888, ctx.r11.u32);
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// stw r7,15880(r3)
	ctx.current_instruction = 0x881B3138;
	REX_STORE_U32(ctx.r3.u32 + 15880, ctx.r7.u32);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// lis r6,-30693
	ctx.r6.s64 = -2011496448;
	// addi r5,r5,10672
	ctx.r5.s64 = ctx.r5.s64 + 10672;
	// addi r4,r4,3688
	ctx.r4.s64 = ctx.r4.s64 + 3688;
	// addi r10,r10,4744
	ctx.r10.s64 = ctx.r10.s64 + 4744;
	// stw r5,3228(r3)
	ctx.current_instruction = 0x881B3154;
	REX_STORE_U32(ctx.r3.u32 + 3228, ctx.r5.u32);
	// addi r8,r8,4320
	ctx.r8.s64 = ctx.r8.s64 + 4320;
	// stw r4,15844(r3)
	ctx.current_instruction = 0x881B315C;
	REX_STORE_U32(ctx.r3.u32 + 15844, ctx.r4.u32);
	// addi r6,r6,5376
	ctx.r6.s64 = ctx.r6.s64 + 5376;
	// stw r10,15852(r3)
	ctx.current_instruction = 0x881B3164;
	REX_STORE_U32(ctx.r3.u32 + 15852, ctx.r10.u32);
	// lis r31,-30693
	ctx.r31.s64 = -2011496448;
	// stw r8,15848(r3)
	ctx.current_instruction = 0x881B316C;
	REX_STORE_U32(ctx.r3.u32 + 15848, ctx.r8.u32);
	// lis r30,-30693
	ctx.r30.s64 = -2011496448;
	// stw r6,15856(r3)
	ctx.current_instruction = 0x881B3174;
	REX_STORE_U32(ctx.r3.u32 + 15856, ctx.r6.u32);
	// lis r29,-30693
	ctx.r29.s64 = -2011496448;
	// lis r28,-30693
	ctx.r28.s64 = -2011496448;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r4,r31,6656
	ctx.r4.s64 = ctx.r31.s64 + 6656;
	// addi r10,r30,7856
	ctx.r10.s64 = ctx.r30.s64 + 7856;
	// stw r5,15884(r3)
	ctx.current_instruction = 0x881B318C;
	REX_STORE_U32(ctx.r3.u32 + 15884, ctx.r5.u32);
	// addi r8,r29,7224
	ctx.r8.s64 = ctx.r29.s64 + 7224;
	// stw r4,15860(r3)
	ctx.current_instruction = 0x881B3194;
	REX_STORE_U32(ctx.r3.u32 + 15860, ctx.r4.u32);
	// addi r6,r28,8376
	ctx.r6.s64 = ctx.r28.s64 + 8376;
	// stw r10,15868(r3)
	ctx.current_instruction = 0x881B319C;
	REX_STORE_U32(ctx.r3.u32 + 15868, ctx.r10.u32);
	// stw r8,15864(r3)
	ctx.current_instruction = 0x881B31A0;
	REX_STORE_U32(ctx.r3.u32 + 15864, ctx.r8.u32);
	// stw r6,15872(r3)
	ctx.current_instruction = 0x881B31A4;
	REX_STORE_U32(ctx.r3.u32 + 15872, ctx.r6.u32);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B3A08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B3A08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B3A08) {
			switch (rex_dispatch_address) {
				case 0x881B3A10:
				case 0x881B3A40:
				case 0x881B3A54:
				case 0x881B3A68:
				case 0x881B3A7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3A08;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B3A10: goto loc_881B3A10;
		case 0x881B3A40: goto loc_881B3A40;
		case 0x881B3A54: goto loc_881B3A54;
		case 0x881B3A68: goto loc_881B3A68;
		case 0x881B3A7C: goto loc_881B3A7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881B3A10;
	__savegprlr_29(ctx, base);
loc_881B3A10:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881B3A10;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3a80
	if (ctx.cr6.eq) goto loc_881B3A80;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881B3A20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881b3a80
	if (ctx.cr6.eq) goto loc_881B3A80;
	// lwz r3,36(r31)
	ctx.current_instruction = 0x881B3A2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3a44
	if (ctx.cr6.eq) goto loc_881B3A44;
	// bl 0x8815ba70
	ctx.lr = 0x881B3A40;
	sub_8815BA70(ctx, base);
loc_881B3A40:
	// stw r30,36(r31)
	ctx.current_instruction = 0x881B3A40;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_881B3A44:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x881B3A44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3a58
	if (ctx.cr6.eq) goto loc_881B3A58;
	// bl 0x8815ba70
	ctx.lr = 0x881B3A54;
	sub_8815BA70(ctx, base);
loc_881B3A54:
	// stw r30,48(r31)
	ctx.current_instruction = 0x881B3A54;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_881B3A58:
	// lwz r3,28(r31)
	ctx.current_instruction = 0x881B3A58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3a6c
	if (ctx.cr6.eq) goto loc_881B3A6C;
	// bl 0x8815ba70
	ctx.lr = 0x881B3A68;
	sub_8815BA70(ctx, base);
loc_881B3A68:
	// stw r30,28(r31)
	ctx.current_instruction = 0x881B3A68;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_881B3A6C:
	// lwz r3,0(r29)
	ctx.current_instruction = 0x881B3A6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3a80
	if (ctx.cr6.eq) goto loc_881B3A80;
	// bl 0x8815ba70
	ctx.lr = 0x881B3A7C;
	sub_8815BA70(ctx, base);
loc_881B3A7C:
	// stw r30,0(r29)
	ctx.current_instruction = 0x881B3A7C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_881B3A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B4860) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B4860;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B4860) {
			switch (rex_dispatch_address) {
				case 0x881B4890:
				case 0x881B48A4:
				case 0x881B48B8:
				case 0x881B48CC:
				case 0x881B48D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B4860;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B4890: goto loc_881B4890;
		case 0x881B48A4: goto loc_881B48A4;
		case 0x881B48B8: goto loc_881B48B8;
		case 0x881B48CC: goto loc_881B48CC;
		case 0x881B48D8: goto loc_881B48D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881B4864;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881B4868;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881B486C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881B4870;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881B4874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x881b48d8
	if (ctx.cr6.eq) goto loc_881B48D8;
	// lwz r4,44(r4)
	ctx.current_instruction = 0x881B4888;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// bl 0x881b5a88
	ctx.lr = 0x881B4890;
	sub_881B5A88(ctx, base);
loc_881B4890:
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881B4890;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b48a4
	if (ctx.cr6.eq) goto loc_881B48A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B48A4;
	sub_8815E528(ctx, base);
loc_881B48A4:
	// lwz r4,48(r31)
	ctx.current_instruction = 0x881B48A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b48b8
	if (ctx.cr6.eq) goto loc_881B48B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B48B8;
	sub_8815E528(ctx, base);
loc_881B48B8:
	// lwz r4,40(r31)
	ctx.current_instruction = 0x881B48B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b48cc
	if (ctx.cr6.eq) goto loc_881B48CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B48CC;
	sub_8815E528(ctx, base);
loc_881B48CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B48D8;
	sub_8815E528(ctx, base);
loc_881B48D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881B48DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881B48E4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881B48E8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B6670) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B6670;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B6670) {
			switch (rex_dispatch_address) {
				case 0x881B6678:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B6670;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B6678: goto loc_881B6678;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B6678;
	__savegprlr_28(ctx, base);
loc_881B6678:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,24
	ctx.r5.s64 = 24;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// li r7,56
	ctx.r7.s64 = 56;
	// vspltisw128 v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x3)));
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r31,72
	ctx.r31.s64 = 72;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v51,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvrx128 v52,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r5,64
	ctx.r5.s64 = 64;
	// lvlx128 v50,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v49,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v57,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvrx128 v55,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v47,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v53,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v45,v50,v47
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vupkhsb128 v43,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// lvrx128 v35,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r11,6496
	ctx.r7.s64 = ctx.r11.s64 + 6496;
	// vupkhsb128 v48,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// lvrx128 v44,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v46,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// lvrx128 v42,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v39,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// vcsxwfp128 v37,v43,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// lvlx128 v41,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v33,v63,v44
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vcsxwfp128 v13,v48,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// lvrx128 v38,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vcsxwfp128 v40,v46,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvlx128 v36,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v39,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvlx128 v34,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// li r5,-176
	ctx.r5.s64 = -176;
	// vor128 v32,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// li r4,-160
	ctx.r4.s64 = -160;
	// vor128 v60,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// li r31,-128
	ctx.r31.s64 = -128;
	// li r30,-112
	ctx.r30.s64 = -112;
	// vupkhsb128 v58,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// li r29,-96
	ctx.r29.s64 = -96;
	// vupkhsb128 v55,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16))));
	// li r28,-48
	ctx.r28.s64 = -48;
	// vupkhsb128 v57,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16))));
	// vupkhsb128 v54,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v62,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v58,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v63,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v52,v62,v37
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v37.f32)));
	// lvx128 v61,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v63,v13
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v53,v62,v40
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v40.f32)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vmulfp128 v50,v63,v12
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v62,r7,r30
	ea = (ctx.r7.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r7,r29
	ea = (ctx.r7.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v56,v13,v40
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v40.f32)));
	// lvx128 v63,r7,r28
	ea = (ctx.r7.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v61,v40
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vcsxwfp128 v48,v57,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// li r3,-192
	ctx.r3.s64 = -192;
	// vcsxwfp128 v47,v55,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// li r6,-144
	ctx.r6.s64 = -144;
	// vmulfp128 v46,v61,v37
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v37.f32)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// vcsxwfp128 v9,v54,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// li r4,-16
	ctx.r4.s64 = -16;
	// vaddfp128 v45,v12,v37
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v8,v62,v56
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v56.f32)));
	// li r31,-80
	ctx.r31.s64 = -80;
	// vmulfp128 v44,v63,v56
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v11,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v5,v6,v11,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v7,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v48,v11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v61,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v63,v45
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// lvx128 v60,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v41,v6,v47
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmulfp128 v40,v60,v9
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v9.f32)));
	// li r3,128
	ctx.r3.s64 = 128;
	// vmulfp128 v11,v61,v47
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v47.f32)));
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// vmaddfp v4,v7,v13,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v62,v45
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v39,v8,v49
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vsubfp128 v38,v44,v51
	simde_mm_store_ps(ctx.v38.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v35,v5,v42
	simde_mm_store_ps(ctx.v35.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v34,v5,v42
	simde_mm_store_ps(ctx.v34.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v33,v41,v40
	simde_mm_store_ps(ctx.v33.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmaddfp v11,v6,v9,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v37,v44,v53
	simde_mm_store_ps(ctx.v37.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v36,v4,v43
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vmaddfp v12,v7,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v32,v39,v43
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v63,v38,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v60,v34,v33
	simde_mm_store_ps(ctx.v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vaddfp128 v58,v35,v11
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v57,v35,v11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp128 v56,v34,v33
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v62,v36,v50
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v61,v37,v12
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v55,v32,v52
	simde_mm_store_ps(ctx.v55.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsubfp128 v54,v63,v46
	simde_mm_store_ps(ctx.v54.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v8,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v7,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// vcfpsxws128 v6,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v5,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v11,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vcfpsxws128 v13,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vcfpsxws128 v9,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v55.f32)));
	// vcfpsxws128 v12,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// vaddsws v4,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v7,v11
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v2,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v30,v8,v12
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v29,v6,v9
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v28,v5,v13
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v53,v4,v59
	ctx.v53.s32[0] = ctx.v4.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v53.s32[1] = ctx.v4.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v53.s32[2] = ctx.v4.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v53.s32[3] = ctx.v4.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v52,v2,v59
	ctx.v52.s32[0] = ctx.v2.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v2.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v2.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v2.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v51,v31,v59
	ctx.v51.s32[0] = ctx.v31.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v51.s32[1] = ctx.v31.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v51.s32[2] = ctx.v31.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v51.s32[3] = ctx.v31.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v50,v1,v59
	ctx.v50.s32[0] = ctx.v1.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v50.s32[1] = ctx.v1.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v50.s32[2] = ctx.v1.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v50.s32[3] = ctx.v1.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v49,v29,v59
	ctx.v49.s32[0] = ctx.v29.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v49.s32[1] = ctx.v29.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v49.s32[2] = ctx.v29.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v49.s32[3] = ctx.v29.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v48,v28,v59
	ctx.v48.s32[0] = ctx.v28.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v48.s32[1] = ctx.v28.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v48.s32[2] = ctx.v28.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v48.s32[3] = ctx.v28.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v47,v30,v59
	ctx.v47.s32[0] = ctx.v30.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v47.s32[1] = ctx.v30.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v47.s32[2] = ctx.v30.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v47.s32[3] = ctx.v30.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vmrghw128 v46,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vsraw128 v45,v3,v59
	ctx.v45.s32[0] = ctx.v3.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v45.s32[1] = ctx.v3.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v45.s32[2] = ctx.v3.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v45.s32[3] = ctx.v3.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vmrghw128 v44,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrglw128 v43,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v42,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v41,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrghw128 v40,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrglw128 v39,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v38,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v37,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v36,v42,v40
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmrghw128 v35,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrghw128 v34,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v33,v37,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrglw128 v32,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v62,v36,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrglw128 v61,v42,v40
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vcsxwfp128 v60,v35,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmrglw128 v59,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v57,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v58,v34,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vcsxwfp128 v56,v32,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v63,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v9,v61,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v12,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v59,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvx128 v13,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v57,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vsubfp128 v7,v33,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v5,v60,v33
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v6,v62,v58
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v4,v58,v62
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v54,v11,v56
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v53,v63,v8
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v31,v63,v55
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v52,v11,v55
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v30,v63,v56
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v51,v63,v9
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v3,v13,v7,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v13,v5,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v50,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v49,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v2,v13,v6,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v4,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v48,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v47,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v12,v11,v8,v31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vsubfp128 v46,v53,v52
	simde_mm_store_ps(ctx.v46.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmaddfp v11,v11,v9,v30
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vsubfp128 v45,v51,v54
	simde_mm_store_ps(ctx.v45.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v44,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v43,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v42,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v41,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vpkswss128 v27,v50,v48
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vpkswss128 v26,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// vcfpsxws128 v40,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v39,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v38,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vsrah v25,v27,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v37,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsrah v24,v26,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v23,v44,v42
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// vpkswss128 v13,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vadduhm v11,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v13,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vpkswss128 v12,v40,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// vpkswss128 v10,v39,v37
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vadduhm v22,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsubuhm v21,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v20,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v19,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
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
	// vsrah v16,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D6008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D6008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D6008) {
			switch (rex_dispatch_address) {
				case 0x881D6010:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D6008;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D6010: goto loc_881D6010;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881D6010;
	__savegprlr_18(ctx, base);
loc_881D6010:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x881D6010;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// stw r5,48(r1)
	ctx.current_instruction = 0x881D6018;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r5.u32);
	// addi r27,r1,32
	ctx.r27.s64 = ctx.r1.s64 + 32;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// stw r10,32(r1)
	ctx.current_instruction = 0x881D6024;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x8)));
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltisb v6,-9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_set1_epi8(char(0xF7)));
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r26,-30717
	ctx.r26.s64 = -2013069312;
	// lvrx128 v61,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r28,r4,r7
	ctx.r28.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lvrx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vor128 v11,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vor128 v12,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v10,v60,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// li r31,-16
	ctx.r31.s64 = -16;
	// lvlx128 v57,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v5,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r26,-26096
	ctx.r27.s64 = ctx.r26.s64 + -26096;
	// subf r29,r4,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r4.u64;
	// lvrx128 v52,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltb v13,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_set1_epi8(char(0xC))));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// vsplth v3,v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lvlx128 v56,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// lvx128 v43,r27,r31
	ea = (ctx.r27.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lvrx128 v55,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-32
	ctx.r28.s64 = -32;
	// lvlx128 v53,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r1,48
	ctx.r23.s64 = ctx.r1.s64 + 48;
	// lvrx128 v51,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lvrx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stvx128 v8,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stvx128 v7,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v63,r27,r28
	ea = (ctx.r27.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v9,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v49,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v48,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v7,v57,v51
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v47,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v46,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v53,v50
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// stvx128 v63,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vmrghb v15,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v48,v46
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vmrglb v14,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v5,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vmrghb v18,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v31,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvrx128 v45,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v11,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcmpgtub v19,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v30,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrglb v29,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v2,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vmrghb v26,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// vmrglb v25,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// vcmpgtub v10,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r30,r1,368
	ctx.r30.s64 = ctx.r1.s64 + 368;
	// vmrghb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,384
	ctx.r28.s64 = ctx.r1.s64 + 384;
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,400
	ctx.r26.s64 = ctx.r1.s64 + 400;
	// vcmpgtub v8,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r24,r1,416
	ctx.r24.s64 = ctx.r1.s64 + 416;
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r22,r1,432
	ctx.r22.s64 = ctx.r1.s64 + 432;
	// stvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// vmrglb v27,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrghb v24,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vmrglb v23,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// vmrghb v16,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// vor128 v42,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// addi r23,r1,256
	ctx.r23.s64 = ctx.r1.s64 + 256;
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stvx128 v14,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vmrglb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx128 v11,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v11,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// vcmpgtub v9,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v17,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// vaddsbs v7,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// vcmpgtub v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v29,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v13,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// lvx128 v40,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,112
	ctx.r20.s64 = ctx.r1.s64 + 112;
	// vaddsbs v12,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)ctx.v19.s8)));
	// stvx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,880
	ctx.r18.s64 = ctx.r1.s64 + 880;
	// stvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v31,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// stvx128 v12,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v0,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vaddsbs v11,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.s8), simde_mm_load_si128((simde__m128i*)ctx.v20.s8)));
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// stvx128 v2,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v17,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddsbs v12,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.s8), simde_mm_load_si128((simde__m128i*)ctx.v31.s8)));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// vaddshs v7,v18,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// vaddshs v20,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// vaddsbs v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v9.s8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vaddshs v19,v27,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// addi r31,r1,512
	ctx.r31.s64 = ctx.r1.s64 + 512;
	// vaddshs v18,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// addi r30,r1,528
	ctx.r30.s64 = ctx.r1.s64 + 528;
	// vaddsbs v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// addi r29,r1,544
	ctx.r29.s64 = ctx.r1.s64 + 544;
	// vaddshs v17,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r28,r1,560
	ctx.r28.s64 = ctx.r1.s64 + 560;
	// vaddsbs v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v8.s8)));
	// vaddsbs v10,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v31.s8)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vaddshs v31,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// addi r27,r1,720
	ctx.r27.s64 = ctx.r1.s64 + 720;
	// vaddshs v8,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// addi r26,r1,736
	ctx.r26.s64 = ctx.r1.s64 + 736;
	// vaddshs v14,v4,v27
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v15,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// vaddshs v4,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v30,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v20,v24
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// lvx128 v7,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v21,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v29,v19,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v20,v18,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// addi r25,r1,752
	ctx.r25.s64 = ctx.r1.s64 + 752;
	// addi r24,r1,592
	ctx.r24.s64 = ctx.r1.s64 + 592;
	// vaddshs v16,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r23,r1,608
	ctx.r23.s64 = ctx.r1.s64 + 608;
	// stvx128 v38,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,624
	ctx.r22.s64 = ctx.r1.s64 + 624;
	// vaddsbs v24,v11,v15
	simde_mm_store_si128((simde__m128i*)ctx.v24.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v15.s8)));
	// addi r21,r1,768
	ctx.r21.s64 = ctx.r1.s64 + 768;
	// stvx128 v9,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// stvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// stvx128 v12,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// stvx128 v10,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,800
	ctx.r20.s64 = ctx.r1.s64 + 800;
	// vaddshs v19,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// addi r19,r1,672
	ctx.r19.s64 = ctx.r1.s64 + 672;
	// vaddshs v18,v18,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// stvx128 v23,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// stvx128 v19,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// vaddshs v15,v2,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v8,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v31,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v16,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v1,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvx128 v4,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v29,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// stvx128 v27,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881D6454:
	// addi r8,r1,48
	ctx.r8.s64 = ctx.r1.s64 + 48;
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// vperm v13,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v7,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vperm v5,v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v11,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddsbs v2,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vperm128 v4,v11,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v13,v10,v62,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v10,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v29,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vaddshs v27,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vaddsbs v12,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// vaddshs v26,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v25,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v24,v11,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v23,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequb v22,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v21,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vcmpequb v20,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v19,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v18,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor v12,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// vaddshs v16,v25,v17
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vmrghb v15,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v14,v16,v29
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vandc128 v37,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v12,v14,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vcmpgtsh v11,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtsh v10,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vandc128 v36,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v35,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v34,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor128 v33,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vandc128 v32,v33,v10
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v63,v32,v34
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vand128 v62,v63,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vor128 v61,v62,v37
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vpkshus128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// stvewx128 v60,r0,r3
	ctx.current_instruction = 0x881D653C;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r10
	ctx.current_instruction = 0x881D6540;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bdnz 0x881d6454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D6454;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC710) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EC710);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC710;
	ctx.current_instruction = 0x881EC710;
	// lbz r3,268(r13)
	ctx.current_instruction = 0x881EC710;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC8B0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EC8B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC8B0;
	ctx.current_instruction = 0x881EC8B0;
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881ec8c0
	if (!ctx.cr0.eq) goto loc_881EC8C0;
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
loc_881EC8C0:
	// std r11,0(r3)
	ctx.current_instruction = 0x881EC8C0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ECCF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ECCF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ECCF0) {
			switch (rex_dispatch_address) {
				case 0x881ECD38:
				case 0x881ECD50:
				case 0x881ECD7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ECCF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ECD38: goto loc_881ECD38;
		case 0x881ECD50: goto loc_881ECD50;
		case 0x881ECD7C: goto loc_881ECD7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ECCF4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881ECCF8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881ECCFC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881ECD00;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881ECD04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x881ecd5c
	if (!ctx.cr6.eq) goto loc_881ECD5C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881ecd3c
	if (ctx.cr6.eq) goto loc_881ECD3C;
	// lwz r11,16(r4)
	ctx.current_instruction = 0x881ECD20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ecd30
	if (ctx.cr6.eq) goto loc_881ECD30;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_881ECD30:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x881ecd98
	ctx.lr = 0x881ECD38;
	sub_881ECD98(ctx, base);
loc_881ECD38:
	// b 0x881ecd40
	goto loc_881ECD40;
loc_881ECD3C:
	// li r3,258
	ctx.r3.s64 = 258;
loc_881ECD40:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x881ecd54
	if (!ctx.cr6.eq) goto loc_881ECD54;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x881e9018
	ctx.lr = 0x881ECD50;
	sub_881E9018(ctx, base);
loc_881ECD50:
	// b 0x881ecd7c
	goto loc_881ECD7C;
loc_881ECD54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881ecd7c
	if (!ctx.cr6.eq) goto loc_881ECD7C;
loc_881ECD5C:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881ECD5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	ctx.current_instruction = 0x881ECD60;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.current_instruction = 0x881ECD64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881ecd78
	if (ctx.cr6.lt) goto loc_881ECD78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881ecd80
	goto loc_881ECD80;
loc_881ECD78:
	// bl 0x881ed488
	ctx.lr = 0x881ECD7C;
	sub_881ED488(ctx, base);
loc_881ECD7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECD80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ECD84;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881ECD8C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881ECD90;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED568) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED568;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED568) {
			switch (rex_dispatch_address) {
				case 0x881ED570:
				case 0x881ED584:
				case 0x881ED5A0:
				case 0x881ED5C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED568;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED570: goto loc_881ED570;
		case 0x881ED584: goto loc_881ED584;
		case 0x881ED5A0: goto loc_881ED5A0;
		case 0x881ED5C0: goto loc_881ED5C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881ED570;
	__savegprlr_28(ctx, base);
loc_881ED570:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881ED570;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x881ed628
	ctx.lr = 0x881ED584;
	sub_881ED628(ctx, base);
loc_881ED584:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
loc_881ED58C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243840
	ctx.lr = 0x881ED5A0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
loc_881ED5A0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ed5bc
	if (ctx.cr0.lt) goto loc_881ED5BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881ed5c4
	if (ctx.cr6.eq) goto loc_881ED5C4;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x881ed58c
	if (ctx.cr6.eq) goto loc_881ED58C;
	// b 0x881ed5c4
	goto loc_881ED5C4;
loc_881ED5BC:
	// bl 0x881ed488
	ctx.lr = 0x881ED5C0;
	sub_881ED488(ctx, base);
loc_881ED5C0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_881ED5C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EE6F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EE6F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE6F0;
	ctx.current_instruction = 0x881EE6F0;
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_881EE714:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x881ee72c
	if (ctx.cr7.lt) goto loc_881EE72C;
	// ble 0x881ee728
	if (!ctx.cr0.gt) goto loc_881EE728;
	// dcbt r10,r4
loc_881EE728:
	// dcbzl r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_881EE72C:
	// lvx v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge 0x881ee714
	if (!ctx.cr0.lt) goto loc_881EE714;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_26) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED40;
	ctx.current_instruction = 0x881EED40;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED94);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED94;
	ctx.current_instruction = 0x881EED94;
	uint32_t ea{};
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_103) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEAC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEAC;
	ctx.current_instruction = 0x881EEEAC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_14) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEF78;
	ctx.current_instruction = 0x881EEF78;
	uint32_t ea{};
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx v14,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_95) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF104);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF104;
	ctx.current_instruction = 0x881EF104;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_98) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF11C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF11C;
	ctx.current_instruction = 0x881EF11C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F0D38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0D38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0D38) {
			switch (rex_dispatch_address) {
				case 0x881F0D50:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0D38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0D50: goto loc_881F0D50;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F0D3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F0D40;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x880522d8
	ctx.lr = 0x881F0D50;
	sub_880522D8(ctx, base);
loc_881F0D50:
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881f0d60
	if (!ctx.cr0.eq) goto loc_881F0D60;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f0dfc
	goto loc_881F0DFC;
loc_881F0D60:
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24064(r7)
	ctx.current_instruction = 0x881F0D74;
	REX_STORE_U32(ctx.r7.u32 + 24064, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stw r11,24036(r8)
	ctx.current_instruction = 0x881F0D7C;
	REX_STORE_U32(ctx.r8.u32 + 24036, ctx.r11.u32);
	// bge cr6,0x881f0dcc
	if (!ctx.cr6.lt) goto loc_881F0DCC;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// li r8,10
	ctx.r8.s64 = 10;
loc_881F0D8C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,-1(r11)
	ctx.current_instruction = 0x881F0D90;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r8,0(r11)
	ctx.current_instruction = 0x881F0D94;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r10,-5(r11)
	ctx.current_instruction = 0x881F0D98;
	REX_STORE_U32(ctx.r11.u32 + -5, ctx.r10.u32);
	// stw r9,3(r11)
	ctx.current_instruction = 0x881F0D9C;
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r9.u32);
	// stb r9,35(r11)
	ctx.current_instruction = 0x881F0DA0;
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r9.u8);
	// stb r8,36(r11)
	ctx.current_instruction = 0x881F0DA4;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// stb r8,37(r11)
	ctx.current_instruction = 0x881F0DA8;
	REX_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stw r9,59(r11)
	ctx.current_instruction = 0x881F0DAC;
	REX_STORE_U32(ctx.r11.u32 + 59, ctx.r9.u32);
	// stb r9,55(r11)
	ctx.current_instruction = 0x881F0DB0;
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r9.u8);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,24064(r7)
	ctx.current_instruction = 0x881F0DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 24064);
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x881f0d8c
	if (ctx.cr6.lt) goto loc_881F0D8C;
loc_881F0DCC:
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x881f0ddc
	goto loc_881F0DDC;
loc_881F0DD8:
	// lwz r10,24064(r7)
	ctx.current_instruction = 0x881F0DD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 24064);
loc_881F0DDC:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stb r10,4(r11)
	ctx.current_instruction = 0x881F0DEC;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r8,0(r11)
	ctx.current_instruction = 0x881F0DF0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x881f0dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F0DD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F0DFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F0E00;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F6240) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F6240;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F6240) {
			switch (rex_dispatch_address) {
				case 0x881F6248:
				case 0x881F639C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F6240;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F6248: goto loc_881F6248;
		case 0x881F639C: goto loc_881F639C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F6248;
	__savegprlr_14(ctx, base);
loc_881F6248:
	// stwu r1,-1728(r1)
	ctx.current_instruction = 0x881F6248;
	ea = -1728 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r25,1312(r4)
	ctx.current_instruction = 0x881F6250;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// ori r8,r10,45236
	ctx.r8.u64 = ctx.r10.u64 | 45236;
	// addi r9,r1,223
	ctx.r9.s64 = ctx.r1.s64 + 223;
	// addi r7,r1,796
	ctx.r7.s64 = ctx.r1.s64 + 796;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r6,r9,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lwzx r10,r3,r8
	ctx.current_instruction = 0x881F626C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r5,r7,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r6,40(r31)
	ctx.current_instruction = 0x881F6278;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	ctx.current_instruction = 0x881F627C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r10,22268(r11)
	ctx.current_instruction = 0x881F6284;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22268);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r10,28(r31)
	ctx.current_instruction = 0x881F628C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// lwz r11,22280(r11)
	ctx.current_instruction = 0x881F6294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22280);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r31)
	ctx.current_instruction = 0x881F629C;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881F62A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r15,0(r31)
	ctx.current_instruction = 0x881F62AC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// stw r15,4(r31)
	ctx.current_instruction = 0x881F62B4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r15.u32);
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// sth r15,16(r31)
	ctx.current_instruction = 0x881F62BC;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r15.u16);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// lhz r6,50(r29)
	ctx.current_instruction = 0x881F62C4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// lhz r5,52(r29)
	ctx.current_instruction = 0x881F62CC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 52);
	// rlwinm r14,r5,31,1,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r16,74(r29)
	ctx.current_instruction = 0x881F62D4;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// rlwinm r8,r8,16,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FF;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881F62E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r24,r6,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,80(r1)
	ctx.current_instruction = 0x881F62E8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x881f6478
	if (ctx.cr6.eq) goto loc_881F6478;
	// lis r27,-30678
	ctx.r27.s64 = -2010513408;
	// lis r26,-30678
	ctx.r26.s64 = -2010513408;
loc_881F62FC:
	// stw r18,8(r31)
	ctx.current_instruction = 0x881F62FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r18.u32);
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, ctx.xer);
	// stw r17,12(r31)
	ctx.current_instruction = 0x881F6304;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r17.u32);
	// sth r15,18(r31)
	ctx.current_instruction = 0x881F6308;
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r15.u16);
	// bne cr6,0x881f6428
	if (!ctx.cr6.eq) goto loc_881F6428;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x881f6428
	if (ctx.cr6.eq) goto loc_881F6428;
loc_881F631C:
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881f63d8
	if (!ctx.cr6.eq) goto loc_881F63D8;
	// ld r11,0(r25)
	ctx.current_instruction = 0x881F6324;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r25.u32 + 0);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// clrlwi r28,r10,26
	ctx.r28.u64 = ctx.r10.u32 & 0x3F;
loc_881F6334:
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881F6338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r30,140
	ctx.r9.s64 = ctx.r30.s64 + 140;
	// lwz r8,40(r31)
	ctx.current_instruction = 0x881F6340;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
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
	// lwzx r10,r6,r29
	ctx.current_instruction = 0x881F6358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwzx r11,r5,r31
	ctx.current_instruction = 0x881F635C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r3,28(r31)
	ctx.current_instruction = 0x881F6360;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r8,392(r29)
	ctx.current_instruction = 0x881F6374;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 392);
	// rlwinm r11,r28,6,18,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0x3FC0;
	// addi r10,r10,45
	ctx.r10.s64 = ctx.r10.s64 + 45;
	// lwz r9,24356(r26)
	ctx.current_instruction = 0x881F6380;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 24356);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,25780(r27)
	ctx.current_instruction = 0x881F6388;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 25780);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,40(r31)
	ctx.current_instruction = 0x881F6390;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lhzx r8,r8,r29
	ctx.current_instruction = 0x881F6394;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// bl 0x881cc1c0
	ctx.lr = 0x881F639C;
	sub_881CC1C0(ctx, base);
loc_881F639C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x881f6334
	if (ctx.cr6.lt) goto loc_881F6334;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881F63A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881F63AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881F63B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x881F63BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,80(r1)
	ctx.current_instruction = 0x881F63C0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwinm r8,r7,16,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3FF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881f631c
	if (ctx.cr6.eq) goto loc_881F631C;
	// b 0x881f6428
	goto loc_881F6428;
loc_881F63D8:
	// lhz r10,18(r31)
	ctx.current_instruction = 0x881F63D8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881F63E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x881F63E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881F63F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881F63F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,0(r31)
	ctx.current_instruction = 0x881F6404;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r4,4(r31)
	ctx.current_instruction = 0x881F640C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r3,18(r31)
	ctx.current_instruction = 0x881F6414;
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// stw r10,8(r31)
	ctx.current_instruction = 0x881F6418;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// stw r9,12(r31)
	ctx.current_instruction = 0x881F6420;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// blt cr6,0x881f631c
	if (ctx.cr6.lt) goto loc_881F631C;
loc_881F6428:
	// lhz r9,16(r31)
	ctx.current_instruction = 0x881F6428;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r21,r10,r21
	ctx.r21.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r20,r24,r20
	ctx.r20.u64 = ctx.r24.u64 + ctx.r20.u64;
	// stw r21,0(r31)
	ctx.current_instruction = 0x881F6444;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r10,r16,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r20,4(r31)
	ctx.current_instruction = 0x881F6450;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r6,16(r31)
	ctx.current_instruction = 0x881F6458;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// add r18,r10,r18
	ctx.r18.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplw cr6,r22,r14
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x881f62fc
	if (ctx.cr6.lt) goto loc_881F62FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F6478:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88215BC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88215BC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88215BC0) {
			switch (rex_dispatch_address) {
				case 0x88215BC8:
				case 0x88216014:
				case 0x882160C0:
				case 0x8821617C:
				case 0x882162A0:
				case 0x88216324:
				case 0x8821633C:
				case 0x88216398:
				case 0x88216428:
				case 0x882164A0:
				case 0x882164C8:
				case 0x882164E8:
				case 0x88216588:
				case 0x882165B0:
				case 0x882165D0:
				case 0x88216604:
				case 0x882166D0:
				case 0x882166F8:
				case 0x88216718:
				case 0x882167C0:
				case 0x8821683C:
				case 0x88216844:
				case 0x8821688C:
				case 0x88216934:
				case 0x8821695C:
				case 0x8821697C:
				case 0x882169A4:
				case 0x88216A4C:
				case 0x88216A74:
				case 0x88216A94:
				case 0x88216AB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88215BC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88215BC8: goto loc_88215BC8;
		case 0x88216014: goto loc_88216014;
		case 0x882160C0: goto loc_882160C0;
		case 0x8821617C: goto loc_8821617C;
		case 0x882162A0: goto loc_882162A0;
		case 0x88216324: goto loc_88216324;
		case 0x8821633C: goto loc_8821633C;
		case 0x88216398: goto loc_88216398;
		case 0x88216428: goto loc_88216428;
		case 0x882164A0: goto loc_882164A0;
		case 0x882164C8: goto loc_882164C8;
		case 0x882164E8: goto loc_882164E8;
		case 0x88216588: goto loc_88216588;
		case 0x882165B0: goto loc_882165B0;
		case 0x882165D0: goto loc_882165D0;
		case 0x88216604: goto loc_88216604;
		case 0x882166D0: goto loc_882166D0;
		case 0x882166F8: goto loc_882166F8;
		case 0x88216718: goto loc_88216718;
		case 0x882167C0: goto loc_882167C0;
		case 0x8821683C: goto loc_8821683C;
		case 0x88216844: goto loc_88216844;
		case 0x8821688C: goto loc_8821688C;
		case 0x88216934: goto loc_88216934;
		case 0x8821695C: goto loc_8821695C;
		case 0x8821697C: goto loc_8821697C;
		case 0x882169A4: goto loc_882169A4;
		case 0x88216A4C: goto loc_88216A4C;
		case 0x88216A74: goto loc_88216A74;
		case 0x88216A94: goto loc_88216A94;
		case 0x88216AB8: goto loc_88216AB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88215BC8;
	__savegprlr_14(ctx, base);
loc_88215BC8:
	// stwu r1,-2416(r1)
	ctx.current_instruction = 0x88215BC8;
	ea = -2416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3788(r3)
	ctx.current_instruction = 0x88215BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,1312(r4)
	ctx.current_instruction = 0x88215BD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,2476(r1)
	ctx.current_instruction = 0x88215BE0;
	REX_STORE_U32(ctx.r1.u32 + 2476, ctx.r8.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88216b98
	if (ctx.cr6.eq) goto loc_88216B98;
	// lwz r11,3792(r3)
	ctx.current_instruction = 0x88215BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88216b98
	if (ctx.cr6.eq) goto loc_88216B98;
	// lwz r11,3796(r3)
	ctx.current_instruction = 0x88215BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88216b98
	if (ctx.cr6.eq) goto loc_88216B98;
	// addi r11,r1,911
	ctx.r11.s64 = ctx.r1.s64 + 911;
	// addi r10,r1,271
	ctx.r10.s64 = ctx.r1.s64 + 271;
	// addi r9,r1,1484
	ctx.r9.s64 = ctx.r1.s64 + 1484;
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r4,r10,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,36(r30)
	ctx.current_instruction = 0x88215C20;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// stw r4,40(r30)
	ctx.current_instruction = 0x88215C24;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r11,44(r30)
	ctx.current_instruction = 0x88215C2C;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lhz r18,74(r31)
	ctx.current_instruction = 0x88215C30;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r16,76(r31)
	ctx.current_instruction = 0x88215C34;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lhz r10,50(r31)
	ctx.current_instruction = 0x88215C38;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r18,108(r1)
	ctx.current_instruction = 0x88215C40;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r16,96(r1)
	ctx.current_instruction = 0x88215C44;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// stw r29,88(r1)
	ctx.current_instruction = 0x88215C48;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x88215c78
	if (!ctx.cr6.eq) goto loc_88215C78;
	// lwz r11,22264(r3)
	ctx.current_instruction = 0x88215C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r11,20(r30)
	ctx.current_instruction = 0x88215C5C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,22276(r3)
	ctx.current_instruction = 0x88215C60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r10,24(r30)
	ctx.current_instruction = 0x88215C64;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r14,0(r30)
	ctx.current_instruction = 0x88215C68;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r14.u32);
	// stw r14,4(r30)
	ctx.current_instruction = 0x88215C6C;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r14.u32);
	// sth r14,16(r30)
	ctx.current_instruction = 0x88215C70;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r14.u16);
	// b 0x88215cd8
	goto loc_88215CD8;
loc_88215C78:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r18,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r16,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r31
	ctx.current_instruction = 0x88215C94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r3,20(r30)
	ctx.current_instruction = 0x88215CA0;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// rlwinm r3,r7,1,16,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r7
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r27,4(r8)
	ctx.current_instruction = 0x88215CB4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r27,24(r30)
	ctx.current_instruction = 0x88215CB8;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// lwz r27,8(r8)
	ctx.current_instruction = 0x88215CBC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r27,28(r30)
	ctx.current_instruction = 0x88215CC0;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// lwz r11,12(r8)
	ctx.current_instruction = 0x88215CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,32(r30)
	ctx.current_instruction = 0x88215CC8;
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r9,0(r30)
	ctx.current_instruction = 0x88215CCC;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	ctx.current_instruction = 0x88215CD0;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// sth r3,16(r30)
	ctx.current_instruction = 0x88215CD4;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r3.u16);
loc_88215CD8:
	// sth r14,18(r30)
	ctx.current_instruction = 0x88215CD8;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r14.u16);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r4,80(r1)
	ctx.current_instruction = 0x88215CE0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// stw r6,84(r1)
	ctx.current_instruction = 0x88215CE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x88215CEC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bge cr6,0x88216b8c
	if (!ctx.cr6.lt) goto loc_88216B8C;
loc_88215CF4:
	// stw r6,8(r30)
	ctx.current_instruction = 0x88215CF4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r4,12(r30)
	ctx.current_instruction = 0x88215CFC;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// stw r14,104(r1)
	ctx.current_instruction = 0x88215D00;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// sth r14,18(r30)
	ctx.current_instruction = 0x88215D04;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r14.u16);
	// beq cr6,0x88216b48
	if (ctx.cr6.eq) goto loc_88216B48;
loc_88215D0C:
	// lhz r22,18(r30)
	ctx.current_instruction = 0x88215D0C;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// lwz r7,464(r31)
	ctx.current_instruction = 0x88215D14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// addi r20,r1,112
	ctx.r20.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r22,31,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7;
	// ld r19,0(r5)
	ctx.current_instruction = 0x88215D20;
	ctx.r19.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// rlwinm r8,r22,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0xF;
	// lwz r10,12(r30)
	ctx.current_instruction = 0x88215D28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88215D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r8,596
	ctx.r8.s64 = ctx.r8.s64 + 596;
	// lwz r6,480(r31)
	ctx.current_instruction = 0x88215D38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,484(r31)
	ctx.current_instruction = 0x88215D40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,100(r1)
	ctx.current_instruction = 0x88215D48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r9,74(r31)
	ctx.current_instruction = 0x88215D50;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lhzx r4,r3,r31
	ctx.current_instruction = 0x88215D5C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// rldicl r28,r19,9,55
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u64, 9) & 0x1FF;
	// lhzx r3,r29,r31
	ctx.current_instruction = 0x88215D64;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// clrlwi r17,r28,31
	ctx.r17.u64 = ctx.r28.u32 & 0x1;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r3,r4,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// dcbt r10,r11
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r9,r11
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// dcbt r8,r11
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// dcbt r5,r11
	// dcbt r3,r7
	// dcbt r3,r6
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x88215DB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,348(r31)
	ctx.current_instruction = 0x88215DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x882160d0
	if (!ctx.cr6.eq) goto loc_882160D0;
	// lhz r23,50(r31)
	ctx.current_instruction = 0x88215DC4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88215DCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x88215DD0;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r23,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r23.u32, 2);
	// srawi r7,r9,14
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 14;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r20)
	ctx.current_instruction = 0x88215DE8;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r9.u32);
	// srawi r6,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 14;
	// stw r8,4(r20)
	ctx.current_instruction = 0x88215DF0;
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r8.u32);
	// xor r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x88215E00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// lwzu r6,4(r10)
	ctx.current_instruction = 0x88215E08;
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r29,r5,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,14
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 14;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// srawi r28,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 1;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stwu r7,4(r11)
	ctx.current_instruction = 0x88215E20;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// xor r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 ^ ctx.r10.u64;
	// srawi r10,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 14;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// srawi r28,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 1;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r6,4(r11)
	ctx.current_instruction = 0x88215E38;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// xor r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r10.u64;
	// rlwinm r28,r5,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// add. r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r20,r11,-12
	ctx.r20.s64 = ctx.r11.s64 + -12;
	// or r21,r3,r4
	ctx.r21.u64 = ctx.r3.u64 | ctx.r4.u64;
	// bne 0x882160ac
	if (!ctx.cr0.eq) goto loc_882160AC;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88215e90
	if (!ctx.cr6.gt) goto loc_88215E90;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x88215e98
	goto loc_88215E98;
loc_88215E90:
	// bge cr6,0x88215e98
	if (!ctx.cr6.lt) goto loc_88215E98;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_88215E98:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88215ea8
	if (!ctx.cr6.gt) goto loc_88215EA8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x88215eb4
	goto loc_88215EB4;
loc_88215EA8:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88215eb4
	if (!ctx.cr6.lt) goto loc_88215EB4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_88215EB4:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88215ec4
	if (!ctx.cr6.gt) goto loc_88215EC4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x88215ed0
	goto loc_88215ED0;
loc_88215EC4:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88215ed0
	if (!ctx.cr6.lt) goto loc_88215ED0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_88215ED0:
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// srawi r29,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88215f14
	if (!ctx.cr6.gt) goto loc_88215F14;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x88215f1c
	goto loc_88215F1C;
loc_88215F14:
	// bge cr6,0x88215f1c
	if (!ctx.cr6.lt) goto loc_88215F1C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_88215F1C:
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88215f2c
	if (!ctx.cr6.gt) goto loc_88215F2C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x88215f38
	goto loc_88215F38;
loc_88215F2C:
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88215f38
	if (!ctx.cr6.lt) goto loc_88215F38;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_88215F38:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88215f48
	if (!ctx.cr6.gt) goto loc_88215F48;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x88215f54
	goto loc_88215F54;
loc_88215F48:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88215f54
	if (!ctx.cr6.lt) goto loc_88215F54;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_88215F54:
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r28,16(r30)
	ctx.current_instruction = 0x88215F58;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r26,1716(r31)
	ctx.current_instruction = 0x88215F60;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1716);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r25,1712(r31)
	ctx.current_instruction = 0x88215F68;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1712);
	// addi r6,r28,-2048
	ctx.r6.s64 = ctx.r28.s64 + -2048;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r6,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r8,r3,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r3.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subf r6,r5,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r3,r5,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF8000;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88216208
	if (ctx.cr6.eq) goto loc_88216208;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r29,r20,16
	ctx.r29.s64 = ctx.r20.s64 + 16;
loc_88215FC4:
	// lwz r4,-4(r29)
	ctx.current_instruction = 0x88215FC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r4,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// subf r8,r10,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r5,r5,0,16,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8821609c
	if (ctx.cr6.eq) goto loc_8821609C;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x88215FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8821601c
	if (!ctx.cr6.eq) goto loc_8821601C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215768
	ctx.lr = 0x88216014;
	sub_88215768(ctx, base);
loc_88216014:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8821609c
	goto loc_8821609C;
loc_8821601C:
	// lhz r9,16(r30)
	ctx.current_instruction = 0x8821601C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lhz r7,52(r31)
	ctx.current_instruction = 0x88216028;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// rlwinm r10,r6,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r6,r7,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rlwinm r8,r23,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r5,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,-64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -64, ctx.xer);
	// bge cr6,0x88216060
	if (!ctx.cr6.lt) goto loc_88216060;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x88216070
	goto loc_88216070;
loc_88216060:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88216070
	if (!ctx.cr6.gt) goto loc_88216070;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_88216070:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x88216084
	if (!ctx.cr6.lt) goto loc_88216084;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x88216094
	goto loc_88216094;
loc_88216084:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88216094
	if (!ctx.cr6.gt) goto loc_88216094;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_88216094:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8821609C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stwu r4,-4(r29)
	ctx.current_instruction = 0x882160A0;
	ea = -4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r29.u32 = ea;
	// bge 0x88215fc4
	if (!ctx.cr0.lt) goto loc_88215FC4;
	// b 0x88216208
	goto loc_88216208;
loc_882160AC:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215920
	ctx.lr = 0x882160C0;
	sub_88215920(ctx, base);
loc_882160C0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x882160e4
	if (ctx.cr6.eq) goto loc_882160E4;
	// b 0x88216208
	goto loc_88216208;
loc_882160D0:
	// lwz r27,0(r10)
	ctx.current_instruction = 0x882160D0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r27,16384
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16384, ctx.xer);
	// stw r27,0(r20)
	ctx.current_instruction = 0x882160D8;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r27.u32);
	// bne cr6,0x8821611c
	if (!ctx.cr6.eq) goto loc_8821611C;
	// li r21,60
	ctx.r21.s64 = 60;
loc_882160E4:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x882160E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,352(r31)
	ctx.current_instruction = 0x882160E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x882160F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x88216b98
	if (!ctx.cr6.eq) goto loc_88216B98;
	// lbz r10,32(r31)
	ctx.current_instruction = 0x882160FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 32);
	// ori r21,r21,3
	ctx.r21.u64 = ctx.r21.u64 | 3;
	// stw r9,16(r20)
	ctx.current_instruction = 0x88216104;
	REX_STORE_U32(ctx.r20.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x882163ac
	if (ctx.cr6.eq) goto loc_882163AC;
	// lwz r10,376(r31)
	ctx.current_instruction = 0x88216110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r14,r10,r11
	ctx.current_instruction = 0x88216114;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r14.u32);
	// b 0x882163ac
	goto loc_882163AC;
loc_8821611C:
	// lwz r8,16(r30)
	ctx.current_instruction = 0x8821611C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r7,r27,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x10000;
	// lwz r10,1712(r31)
	ctx.current_instruction = 0x88216124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,1716(r31)
	ctx.current_instruction = 0x88216130;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1716);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r27,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88216204
	if (ctx.cr6.eq) goto loc_88216204;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x88216160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88216184
	if (!ctx.cr6.eq) goto loc_88216184;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215768
	ctx.lr = 0x8821617C;
	sub_88215768(ctx, base);
loc_8821617C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x88216204
	goto loc_88216204;
loc_88216184:
	// lhz r9,16(r30)
	ctx.current_instruction = 0x88216184;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// lhz r7,50(r31)
	ctx.current_instruction = 0x88216190;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lhz r6,52(r31)
	ctx.current_instruction = 0x88216198;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// srawi r9,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rotlwi r8,r7,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r6,r6,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// rlwinm r7,r4,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,-64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -64, ctx.xer);
	// bge cr6,0x882161cc
	if (!ctx.cr6.lt) goto loc_882161CC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x882161dc
	goto loc_882161DC;
loc_882161CC:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x882161dc
	if (!ctx.cr6.gt) goto loc_882161DC;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_882161DC:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x882161f0
	if (!ctx.cr6.lt) goto loc_882161F0;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x88216200
	goto loc_88216200;
loc_882161F0:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88216200
	if (!ctx.cr6.gt) goto loc_88216200;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_88216200:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_88216204:
	// stw r11,0(r20)
	ctx.current_instruction = 0x88216204;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_88216208:
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// lbz r8,31(r31)
	ctx.current_instruction = 0x8821620C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 31);
	// srawi r11,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 16;
	// addi r10,r31,308
	ctx.r10.s64 = ctx.r31.s64 + 308;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r8,r7,r10
	ctx.current_instruction = 0x88216224;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r10,r6,r10
	ctx.current_instruction = 0x88216228;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r29,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x88216258
	if (ctx.cr6.eq) goto loc_88216258;
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r29,r10,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_88216258:
	// lbz r10,32(r31)
	ctx.current_instruction = 0x88216258;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 32);
	// rlwimi r29,r11,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r28,4(r30)
	ctx.current_instruction = 0x88216260;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x882162ac
	if (ctx.cr6.eq) goto loc_882162AC;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x8821626C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88216288
	if (!ctx.cr6.eq) goto loc_88216288;
	// lwz r11,376(r31)
	ctx.current_instruction = 0x88216278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	ctx.current_instruction = 0x88216280;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// b 0x882162ac
	goto loc_882162AC;
loc_88216288:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817dd50
	ctx.lr = 0x882162A0;
	sub_8817DD50(ctx, base);
loc_882162A0:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x882162A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	ctx.current_instruction = 0x882162A8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_882162AC:
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x882162AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88216340
	if (!ctx.cr6.eq) goto loc_88216340;
	// lwz r11,352(r31)
	ctx.current_instruction = 0x882162BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r29,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x10000;
	// stwx r29,r10,r11
	ctx.current_instruction = 0x882162C8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,1720(r31)
	ctx.current_instruction = 0x882162CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r8,1724(r31)
	ctx.current_instruction = 0x882162D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// lwz r7,16(r30)
	ctx.current_instruction = 0x882162D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r29,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r29.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x882163a4
	if (ctx.cr6.eq) goto loc_882163A4;
	// lwz r11,1168(r31)
	ctx.current_instruction = 0x88216308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88216328
	if (!ctx.cr6.eq) goto loc_88216328;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88215848
	ctx.lr = 0x88216324;
	sub_88215848(ctx, base);
loc_88216324:
	// b 0x882163a4
	goto loc_882163A4;
loc_88216328:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8817dd50
	ctx.lr = 0x8821633C;
	sub_8817DD50(ctx, base);
loc_8821633C:
	// b 0x882163a4
	goto loc_882163A4;
loc_88216340:
	// lwz r9,16(r30)
	ctx.current_instruction = 0x88216340;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r29,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x10000;
	// lwz r11,1720(r31)
	ctx.current_instruction = 0x88216348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,1724(r31)
	ctx.current_instruction = 0x88216350;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r6,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r10,r29,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88216398
	if (ctx.cr6.eq) goto loc_88216398;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817dd50
	ctx.lr = 0x88216398;
	sub_8817DD50(ctx, base);
loc_88216398:
	// lwz r11,352(r31)
	ctx.current_instruction = 0x88216398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	ctx.current_instruction = 0x882163A0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_882163A4:
	// stw r3,16(r20)
	ctx.current_instruction = 0x882163A4;
	REX_STORE_U32(ctx.r20.u32 + 16, ctx.r3.u32);
	// stw r3,20(r20)
	ctx.current_instruction = 0x882163A8;
	REX_STORE_U32(ctx.r20.u32 + 20, ctx.r3.u32);
loc_882163AC:
	// rldicl r11,r19,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u64, 16) & 0xFFFF;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x88216618
	if (ctx.cr6.eq) goto loc_88216618;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88216618
	if (!ctx.cr6.eq) goto loc_88216618;
	// clrlwi r11,r21,30
	ctx.r11.u64 = ctx.r21.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88216618
	if (!ctx.cr6.eq) goto loc_88216618;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r30)
	ctx.current_instruction = 0x882163D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r26)
	ctx.current_instruction = 0x882163DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8821642c
	if (!ctx.cr6.eq) goto loc_8821642C;
	// lwz r7,560(r31)
	ctx.current_instruction = 0x882163E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x882163F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r6,576(r31)
	ctx.current_instruction = 0x882163F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 576);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,464(r31)
	ctx.current_instruction = 0x88216400;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r5,580(r31)
	ctx.current_instruction = 0x88216404;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r29,480(r31)
	ctx.current_instruction = 0x8821640C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r28,484(r31)
	ctx.current_instruction = 0x88216414;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x881cdb68
	ctx.lr = 0x88216428;
	sub_881CDB68(ctx, base);
loc_88216428:
	// b 0x88216ad0
	goto loc_88216AD0;
loc_8821642C:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x8821642C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// lhz r10,2(r26)
	ctx.current_instruction = 0x88216434;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r4,90(r31)
	ctx.current_instruction = 0x8821643C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r9,464(r31)
	ctx.current_instruction = 0x88216444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// lbz r3,48(r31)
	ctx.current_instruction = 0x8821644C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 48);
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r5,44(r30)
	ctx.current_instruction = 0x88216458;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r29,r6,30
	ctx.r29.u64 = ctx.r6.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r28,r7,30
	ctx.r28.u64 = ctx.r7.u32 & 0x3;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x882164cc
	if (!ctx.cr6.eq) goto loc_882164CC;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88216494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x882164A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_882164A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x882164e8
	if (ctx.cr6.eq) goto loc_882164E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x882164AC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x882164B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r4,90(r31)
	ctx.current_instruction = 0x882164BC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ccf78
	ctx.lr = 0x882164C8;
	sub_881CCF78(ctx, base);
loc_882164C8:
	// b 0x882164e8
	goto loc_882164E8;
loc_882164CC:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x882164DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x882164E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_882164E8:
	// addi r20,r31,1728
	ctx.r20.s64 = ctx.r31.s64 + 1728;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r23,r31,556
	ctx.r23.s64 = ctx.r31.s64 + 556;
loc_882164F8:
	// srawi r29,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r22.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x882165d0
	if (ctx.cr6.eq) goto loc_882165D0;
	// addi r11,r29,45
	ctx.r11.s64 = ctx.r29.s64 + 45;
	// lhz r7,0(r28)
	ctx.current_instruction = 0x88216508;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// lhz r5,2(r28)
	ctx.current_instruction = 0x88216510;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// rlwinm r24,r11,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-92(r23)
	ctx.current_instruction = 0x88216518;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + -92);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lbzx r3,r29,r21
	ctx.current_instruction = 0x88216520;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r21.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhzx r4,r24,r31
	ctx.current_instruction = 0x88216530;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r31.u32);
	// clrlwi r27,r5,30
	ctx.r27.u64 = ctx.r5.u32 & 0x3;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x8821653C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r9,r9,r30
	ctx.current_instruction = 0x88216540;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r26,r7,30
	ctx.r26.u64 = ctx.r7.u32 & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x882165b4
	if (!ctx.cr6.eq) goto loc_882165B4;
	// addi r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x8821657C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88216588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88216588:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x882165d0
	if (ctx.cr6.eq) goto loc_882165D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x88216594;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x8821659C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhzx r4,r24,r31
	ctx.current_instruction = 0x882165A4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881ccf78
	ctx.lr = 0x882165B0;
	sub_881CCF78(ctx, base);
loc_882165B0:
	// b 0x882165d0
	goto loc_882165D0;
loc_882165B4:
	// addi r11,r27,48
	ctx.r11.s64 = ctx.r27.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x882165C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x882165D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_882165D0:
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// lbzx r10,r22,r20
	ctx.current_instruction = 0x882165D4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// lwz r9,44(r30)
	ctx.current_instruction = 0x882165D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// addi r8,r29,45
	ctx.r8.s64 = ctx.r29.s64 + 45;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzu r11,4(r23)
	ctx.current_instruction = 0x882165E4;
	ea = 4 + ctx.r23.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r23.u32 = ea;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r7,r30
	ctx.current_instruction = 0x882165F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r5,r6,r31
	ctx.current_instruction = 0x882165FC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8821e2c0
	ctx.lr = 0x88216604;
	sub_8821E2C0(ctx, base);
loc_88216604:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// blt cr6,0x882164f8
	if (ctx.cr6.lt) goto loc_882164F8;
	// b 0x88216ad0
	goto loc_88216AD0;
loc_88216618:
	// rldicl r11,r19,8,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u64, 8) & 0xFF;
	// lwz r10,388(r31)
	ctx.current_instruction = 0x8821661C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// rlwinm r7,r21,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x20;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r16,r8,24
	ctx.r16.u64 = ctx.r8.u32 & 0xFF;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r31,1734
	ctx.r18.s64 = ctx.r31.s64 + 1734;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88216720
	if (!ctx.cr6.eq) goto loc_88216720;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x88216720
	if (!ctx.cr6.eq) goto loc_88216720;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lbz r8,48(r31)
	ctx.current_instruction = 0x8821665C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 48);
	// lhz r4,90(r31)
	ctx.current_instruction = 0x88216660;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r9,464(r31)
	ctx.current_instruction = 0x88216668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8821666C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x88216670;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,2(r11)
	ctx.current_instruction = 0x88216674;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r29,r3,30
	ctx.r29.u64 = ctx.r3.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r28,r5,30
	ctx.r28.u64 = ctx.r5.u32 & 0x3;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x8821669C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x882166fc
	if (!ctx.cr6.eq) goto loc_882166FC;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x882166C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x882166D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_882166D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88216718
	if (ctx.cr6.eq) goto loc_88216718;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x882166DC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x882166E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r4,90(r31)
	ctx.current_instruction = 0x882166EC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ccf78
	ctx.lr = 0x882166F8;
	sub_881CCF78(ctx, base);
loc_882166F8:
	// b 0x88216718
	goto loc_88216718;
loc_882166FC:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x8821670C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88216718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88216718:
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r18,r31,1728
	ctx.r18.s64 = ctx.r31.s64 + 1728;
loc_88216720:
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_88216724:
	// srawi r24,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r28.s32 >> 2;
	// addi r11,r28,140
	ctx.r11.s64 = ctx.r28.s64 + 140;
	// addi r10,r24,2
	ctx.r10.s64 = ctx.r24.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r6,r19,20,44
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u64, 20) & 0xFFFFF;
	// rlwinm r5,r15,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x20;
	// clrlwi r8,r16,31
	ctx.r8.u64 = ctx.r16.u32 & 0x1;
	// lwzx r10,r9,r31
	ctx.current_instruction = 0x88216744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// clrlwi r9,r6,29
	ctx.r9.u64 = ctx.r6.u32 & 0x7;
	// lwzx r11,r7,r30
	ctx.current_instruction = 0x8821674C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// subf r20,r24,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r24.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x88216ab8
	if (!ctx.cr6.eq) goto loc_88216AB8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x882169a8
	if (ctx.cr6.eq) goto loc_882169A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88216848
	if (!ctx.cr6.eq) goto loc_88216848;
	// lwz r11,24(r30)
	ctx.current_instruction = 0x88216770;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// lwz r29,40(r30)
	ctx.current_instruction = 0x88216778;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r4,444(r31)
	ctx.current_instruction = 0x88216784;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r7,0(r22)
	ctx.current_instruction = 0x88216788;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lwz r6,4(r22)
	ctx.current_instruction = 0x88216790;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88216798;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x8821679C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r3,24(r30)
	ctx.current_instruction = 0x882167A0;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x882167c8
	if (ctx.cr6.lt) goto loc_882167C8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817db68
	ctx.lr = 0x882167C0;
	sub_8817DB68(ctx, base);
loc_882167C0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x88216828
	goto loc_88216828;
loc_882167C8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88216824
	if (!ctx.cr6.gt) goto loc_88216824;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_882167D4:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x882167D4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r27,r3,24,8,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r27,r7
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r27,r10,r4
	ctx.current_instruction = 0x882167FC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r26,r27,r5
	ctx.current_instruction = 0x88216810;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// sthx r8,r27,r29
	ctx.current_instruction = 0x8821681C;
	REX_STORE_U16(ctx.r27.u32 + ctx.r29.u32, ctx.r8.u16);
	// bdnz 0x882167d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882167D4;
loc_88216824:
	// stw r11,20(r30)
	ctx.current_instruction = 0x88216824;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_88216828:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x88216840
	if (!ctx.cr6.eq) goto loc_88216840;
	// bl 0x88193c80
	ctx.lr = 0x8821683C;
	sub_88193C80(ctx, base);
loc_8821683C:
	// b 0x8821688c
	goto loc_8821688C;
loc_88216840:
	// bl 0x88217cc0
	ctx.lr = 0x88216844;
	sub_88217CC0(ctx, base);
loc_88216844:
	// b 0x8821688c
	goto loc_8821688C;
loc_88216848:
	// rldicl r10,r19,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.current_instruction = 0x8821684C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.current_instruction = 0x8821686C;
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
	ctx.current_instruction = 0x88216880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8821688C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8821688C:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bge cr6,0x8821697c
	if (!ctx.cr6.lt) goto loc_8821697C;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// addi r7,r28,116
	ctx.r7.s64 = ctx.r28.s64 + 116;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r10)
	ctx.current_instruction = 0x882168B4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r10)
	ctx.current_instruction = 0x882168C0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwzx r11,r5,r30
	ctx.current_instruction = 0x882168CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwzx r10,r3,r31
	ctx.current_instruction = 0x882168D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// lhzx r4,r25,r31
	ctx.current_instruction = 0x882168DC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// clrlwi r29,r5,30
	ctx.r29.u64 = ctx.r5.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,48(r7)
	ctx.current_instruction = 0x882168E8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 48);
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x882168F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r26,r8,30
	ctx.r26.u64 = ctx.r8.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88216960
	if (!ctx.cr6.eq) goto loc_88216960;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88216928;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88216934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88216934:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8821697c
	if (ctx.cr6.eq) goto loc_8821697C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x88216940;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x88216948;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhzx r4,r25,r31
	ctx.current_instruction = 0x88216950;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ccf78
	ctx.lr = 0x8821695C;
	sub_881CCF78(ctx, base);
loc_8821695C:
	// b 0x8821697c
	goto loc_8821697C;
loc_88216960:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88216970;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8821697C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8821697C:
	// addi r11,r24,45
	ctx.r11.s64 = ctx.r24.s64 + 45;
	// lbzx r9,r28,r18
	ctx.current_instruction = 0x88216980;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r18.u32);
	// lwz r10,44(r30)
	ctx.current_instruction = 0x88216984;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r8,r31
	ctx.current_instruction = 0x8821699C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x8821e380
	ctx.lr = 0x882169A4;
	sub_8821E380(ctx, base);
loc_882169A4:
	// b 0x88216ab8
	goto loc_88216AB8;
loc_882169A8:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bge cr6,0x88216a94
	if (!ctx.cr6.lt) goto loc_88216A94;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r24,45
	ctx.r9.s64 = ctx.r24.s64 + 45;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r24,2
	ctx.r8.s64 = ctx.r24.s64 + 2;
	// addi r7,r28,116
	ctx.r7.s64 = ctx.r28.s64 + 116;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,0(r11)
	ctx.current_instruction = 0x882169D0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,2(r11)
	ctx.current_instruction = 0x882169D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r24,r31
	ctx.r8.u64 = ctx.r24.u64 + ctx.r31.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lwzx r11,r6,r30
	ctx.current_instruction = 0x882169E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lwzx r10,r3,r31
	ctx.current_instruction = 0x882169EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// lhzx r4,r25,r31
	ctx.current_instruction = 0x882169F4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// clrlwi r27,r5,30
	ctx.r27.u64 = ctx.r5.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,48(r8)
	ctx.current_instruction = 0x88216A00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 48);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x88216A0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r26,r7,30
	ctx.r26.u64 = ctx.r7.u32 & 0x3;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x88216a78
	if (!ctx.cr6.eq) goto loc_88216A78;
	// addi r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88216A40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88216A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88216A4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88216a94
	if (ctx.cr6.eq) goto loc_88216A94;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.current_instruction = 0x88216A58;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,44(r30)
	ctx.current_instruction = 0x88216A60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhzx r4,r25,r31
	ctx.current_instruction = 0x88216A68;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ccf78
	ctx.lr = 0x88216A74;
	sub_881CCF78(ctx, base);
loc_88216A74:
	// b 0x88216a94
	goto loc_88216A94;
loc_88216A78:
	// addi r11,r27,48
	ctx.r11.s64 = ctx.r27.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88216A88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88216A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88216A94:
	// addi r11,r24,45
	ctx.r11.s64 = ctx.r24.s64 + 45;
	// lbzx r9,r28,r18
	ctx.current_instruction = 0x88216A98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r18.u32);
	// lwz r10,44(r30)
	ctx.current_instruction = 0x88216A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r5,r8,r31
	ctx.current_instruction = 0x88216AB0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x8821e2c0
	ctx.lr = 0x88216AB8;
	sub_8821E2C0(ctx, base);
loc_88216AB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r16,r16,31,1,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r19,r19,8,55
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x88216724
	if (ctx.cr6.lt) goto loc_88216724;
loc_88216AD0:
	// lhz r10,18(r30)
	ctx.current_instruction = 0x88216AD0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88216AD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.current_instruction = 0x88216AD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88216AE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88216AE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x88216AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88216AFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stw r5,0(r30)
	ctx.current_instruction = 0x88216B04;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r16,96(r1)
	ctx.current_instruction = 0x88216B0C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,108(r1)
	ctx.current_instruction = 0x88216B10;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88216B18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,104(r1)
	ctx.current_instruction = 0x88216B1C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r4,4(r30)
	ctx.current_instruction = 0x88216B20;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// sth r9,18(r30)
	ctx.current_instruction = 0x88216B24;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r9.u16);
	// stw r7,8(r30)
	ctx.current_instruction = 0x88216B28;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r6,12(r30)
	ctx.current_instruction = 0x88216B2C;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// blt cr6,0x88215d0c
	if (ctx.cr6.lt) goto loc_88215D0C;
	// lwz r28,2476(r1)
	ctx.current_instruction = 0x88216B34;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 2476);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88216B38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88216B3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x88216B40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,88(r1)
	ctx.current_instruction = 0x88216B44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88216B48:
	// lhz r8,16(r30)
	ctx.current_instruction = 0x88216B48;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// rlwinm r11,r16,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88216B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r18,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r8,16(r30)
	ctx.current_instruction = 0x88216B60;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r8.u16);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r4,80(r1)
	ctx.current_instruction = 0x88216B6C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r3,92(r1)
	ctx.current_instruction = 0x88216B70;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// stw r6,84(r1)
	ctx.current_instruction = 0x88216B78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r11,50(r31)
	ctx.current_instruction = 0x88216B7C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	ctx.current_instruction = 0x88216B84;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x88215cf4
	if (ctx.cr6.lt) goto loc_88215CF4;
loc_88216B8C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88216B98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88226870) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88226870;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88226870) {
			switch (rex_dispatch_address) {
				case 0x88226878:
				case 0x88226E80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88226870;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88226878: goto loc_88226878;
		case 0x88226E80: goto loc_88226E80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88226878;
	__savegprlr_14(ctx, base);
loc_88226878:
	// stwu r1,-1040(r1)
	ctx.current_instruction = 0x88226878;
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,1124(r1)
	ctx.current_instruction = 0x88226880;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1124);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,1076(r1)
	ctx.current_instruction = 0x88226888;
	REX_STORE_U32(ctx.r1.u32 + 1076, ctx.r5.u32);
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// stw r6,1084(r1)
	ctx.current_instruction = 0x88226890;
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// stw r9,96(r1)
	ctx.current_instruction = 0x8822689C;
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
	ctx.current_instruction = 0x882268C4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stw r7,80(r1)
	ctx.current_instruction = 0x882268D4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88226d4c
	if (ctx.cr6.eq) goto loc_88226D4C;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x88226b90
	if (ctx.cr6.eq) goto loc_88226B90;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88226b20
	if (!ctx.cr6.gt) goto loc_88226B20;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x882268FC;
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
loc_88226948:
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
	ctx.current_instruction = 0x88226964;
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
	// bdnz 0x88226948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88226948;
	// lwz r6,88(r1)
	ctx.current_instruction = 0x88226B18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88226B1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88226B20:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88226e70
	if (!ctx.cr6.gt) goto loc_88226E70;
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
loc_88226B54:
	// lbzx r3,r30,r11
	ctx.current_instruction = 0x88226B54;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ctx.current_instruction = 0x88226B58;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88226B60;
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
	ctx.current_instruction = 0x88226B80;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88226B84;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88226b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88226B54;
	// b 0x88226e70
	goto loc_88226E70;
loc_88226B90:
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
loc_88226D10:
	// lbzx r31,r10,r5
	ctx.current_instruction = 0x88226D10;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r3,r8,r11
	ctx.current_instruction = 0x88226D14;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x88226D1C;
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
	ctx.current_instruction = 0x88226D3C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88226D40;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88226d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88226D10;
	// b 0x88226e70
	goto loc_88226E70;
loc_88226D4C:
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
	// bne cr6,0x88226e70
	if (!ctx.cr6.eq) goto loc_88226E70;
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
loc_88226E34:
	// lbzx r29,r11,r30
	ctx.current_instruction = 0x88226E34;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x88226E38;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x88226E3C;
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
	ctx.current_instruction = 0x88226E5C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r5.u16);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r4,96(r9)
	ctx.current_instruction = 0x88226E68;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88226e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88226E34;
loc_88226E70:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1076(r1)
	ctx.current_instruction = 0x88226E74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r4,1084(r1)
	ctx.current_instruction = 0x88226E78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x88223088
	ctx.lr = 0x88226E80;
	sub_88223088(ctx, base);
loc_88226E80:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

