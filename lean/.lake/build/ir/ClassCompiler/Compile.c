// Lean compiler output
// Module: ClassCompiler.Compile
// Imports: Init ClassCompiler.Asm ClassCompiler.SExp
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_compile__string___closed__2;
static lean_object* l_compile___closed__6;
LEAN_EXPORT lean_object* l_num__shift;
lean_object* l_String__of__Directive(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_compile__exp___closed__1;
static lean_object* l_compile__and__run___closed__1;
static lean_object* l_compile__string___closed__4;
static lean_object* l_compile__and__run___closed__15;
static lean_object* l_compile__exp___closed__19;
LEAN_EXPORT lean_object* l_bool__mask;
static lean_object* l_compile__to__file___closed__5;
static lean_object* l_compile__and__run___closed__24;
static lean_object* l_compile__exp___closed__4;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__20;
LEAN_EXPORT lean_object* l_compile(lean_object*);
static lean_object* l_compile__and__run___closed__26;
static lean_object* l_compile__exp___closed__16;
static lean_object* l_compile___closed__4;
static lean_object* l_compile__and__run___closed__21;
static lean_object* l_compile__exp___closed__11;
static lean_object* l_compile__and__run___closed__2;
static lean_object* l_compile__exp___closed__2;
LEAN_EXPORT lean_object* l_bool__tag;
static lean_object* l_compile__exp___closed__8;
static lean_object* l_compile__and__run___closed__28;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__16;
static lean_object* l_compile__and__run___closed__17;
LEAN_EXPORT lean_object* l_compile__string__to__string(lean_object*);
static lean_object* l_compile___closed__1;
static lean_object* l_compile__exp___closed__12;
static lean_object* l_compile__to__file___closed__4;
LEAN_EXPORT lean_object* l_compile__string(lean_object*);
static lean_object* l_compile__exp___closed__18;
static lean_object* l_compile__and__run___closed__3;
static lean_object* l_compile__exp___closed__5;
static lean_object* l_compile__exp___closed__7;
static lean_object* l_compile__exp___closed__20;
static lean_object* l_compile__string___closed__3;
LEAN_EXPORT lean_object* l_panic___at_compile__string___spec__1(lean_object*);
lean_object* l_S__exp__of__String(lean_object*);
static lean_object* l_compile__and__run___closed__11;
static lean_object* l_compile__to__file___closed__1;
static lean_object* l_compile__exp___closed__13;
static lean_object* l_compile__and__run___closed__13;
lean_object* l_List_foldl___at_String_join___spec__1(lean_object*, lean_object*);
lean_object* l_IO_print___at_IO_println___spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__9;
static lean_object* l_compile__and__run___closed__6;
static lean_object* l_compile__and__run___closed__29;
LEAN_EXPORT lean_object* l_compile__exp___boxed(lean_object*);
static lean_object* l_compile__and__run___closed__18;
static lean_object* l_compile__exp___closed__15;
static lean_object* l_compile__and__run___closed__19;
static lean_object* l_compile__exp___closed__6;
LEAN_EXPORT lean_object* l_num__mask;
static lean_object* l_compile__and__run___closed__14;
static lean_object* l_compile__exp___closed__17;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_compile__string__to__string___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_compile__and__run(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__7;
LEAN_EXPORT lean_object* l_compile__exp(lean_object*);
lean_object* l_System_mkFilePath(lean_object*);
static lean_object* l_compile__and__run___closed__22;
static lean_object* l_compile___closed__2;
static lean_object* l_compile__and__run___closed__10;
static lean_object* l_compile__exp___closed__9;
static lean_object* l_compile__and__run___closed__27;
static lean_object* l_compile__exp___closed__14;
static lean_object* l_compile__and__run___closed__30;
static lean_object* l_compile__string__to__string___closed__2;
static lean_object* l_compile__and__run___closed__5;
static lean_object* l_compile___closed__5;
static lean_object* l_compile__exp___closed__10;
lean_object* l_List_intersperse___rarg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_compile___closed__3;
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__23;
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_compile__and__run___closed__12;
static lean_object* l_compile__to__file___closed__3;
LEAN_EXPORT lean_object* l_compile__to__file(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__25;
lean_object* l_Ast__of__S__exp(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_compile___boxed(lean_object*);
static lean_object* l_compile__and__run___closed__4;
static lean_object* l_compile__string___closed__1;
static lean_object* l_compile__to__file___closed__2;
static lean_object* l_compile__exp___closed__3;
static lean_object* l_compile__and__run___closed__31;
LEAN_EXPORT lean_object* l_num__tag;
lean_object* l_IO_Process_run(lean_object*, lean_object*);
static lean_object* l_compile__and__run___closed__8;
lean_object* lean_nat_lor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bool__shift;
static lean_object* l_compile__string__to__string___closed__1;
static lean_object* _init_l_num__shift() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(2u);
return x_1;
}
}
static lean_object* _init_l_num__mask() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(3u);
return x_1;
}
}
static lean_object* _init_l_num__tag() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_bool__shift() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(7u);
return x_1;
}
}
static lean_object* _init_l_bool__mask() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(127u);
return x_1;
}
}
static lean_object* _init_l_bool__tag() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(31u);
return x_1;
}
}
static lean_object* _init_l_compile__exp___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_bool__shift;
x_3 = lean_nat_shiftl(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__exp___closed__2;
x_2 = l_bool__tag;
x_3 = lean_nat_lor(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__exp___closed__1;
x_2 = l_compile__exp___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile__exp___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_bool__shift;
x_3 = lean_nat_shiftl(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__exp___closed__8;
x_2 = l_bool__tag;
x_3 = lean_nat_lor(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__9;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__exp___closed__1;
x_2 = l_compile__exp___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile__exp___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_num__shift;
x_3 = lean_nat_shiftl(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__14;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__exp___closed__1;
x_2 = l_compile__exp___closed__15;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__16;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile__exp___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_compile__exp___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__exp___closed__16;
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__exp___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile__exp___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_compile__exp(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_compile__exp___closed__7;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_compile__exp___closed__13;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_num__shift;
x_6 = lean_nat_shiftl(x_4, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_compile__exp___closed__1;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_compile__exp(x_13);
x_15 = l_compile__exp___closed__18;
x_16 = l_List_appendTR___rarg(x_14, x_15);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = l_compile__exp(x_17);
x_19 = l_compile__exp___closed__20;
x_20 = l_List_appendTR___rarg(x_18, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_compile__exp___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_compile__exp(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_compile___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("entry", 5);
return x_1;
}
}
static lean_object* _init_l_compile___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_compile___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_compile___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile___closed__2;
x_2 = l_compile___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(5);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_compile(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_compile__exp(x_1);
x_3 = l_compile___closed__5;
x_4 = l_List_appendTR___rarg(x_3, x_2);
x_5 = l_compile___closed__6;
x_6 = l_List_appendTR___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_compile___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_compile(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_compile__string___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_compile__string___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ClassCompiler.Compile", 21);
return x_1;
}
}
static lean_object* _init_l_compile__string___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("compile_string", 14);
return x_1;
}
}
static lean_object* _init_l_compile__string___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("parser error", 12);
return x_1;
}
}
static lean_object* _init_l_compile__string___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_compile__string___closed__1;
x_2 = l_compile__string___closed__2;
x_3 = lean_unsigned_to_nat(37u);
x_4 = lean_unsigned_to_nat(10u);
x_5 = l_compile__string___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_compile__string(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_S__exp__of__String(x_1);
x_3 = l_Ast__of__S__exp(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_compile__string___closed__4;
x_5 = l_panic___at_compile__string___spec__1(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_compile(x_6);
lean_dec(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_compile__string__to__string___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_String__of__Directive(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_String__of__Directive(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_compile__string__to__string___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n", 1);
return x_1;
}
}
static lean_object* _init_l_compile__string__to__string___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_compile__string__to__string(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_compile__string(x_1);
x_3 = lean_box(0);
x_4 = l_List_mapTR_loop___at_compile__string__to__string___spec__1(x_2, x_3);
x_5 = l_compile__string__to__string___closed__1;
x_6 = l_List_intersperse___rarg(x_5, x_4);
x_7 = l_compile__string__to__string___closed__2;
x_8 = l_List_foldl___at_String_join___spec__1(x_7, x_6);
lean_dec(x_6);
return x_8;
}
}
static lean_object* _init_l_compile__to__file___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("program.s", 9);
return x_1;
}
}
static lean_object* _init_l_compile__to__file___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_compile__to__file___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_compile__to__file___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".", 1);
return x_1;
}
}
static lean_object* _init_l_compile__to__file___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__to__file___closed__3;
x_2 = l_compile__to__file___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__to__file___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_compile__to__file___closed__4;
x_2 = l_System_mkFilePath(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_compile__to__file(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_compile__string__to__string(x_1);
x_4 = l_compile__to__file___closed__5;
x_5 = l_IO_FS_writeFile(x_4, x_3, x_2);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_compile__and__run___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_compile__and__run___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_compile__and__run___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__2;
x_2 = l_compile__to__file___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-f", 2);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__3;
x_2 = l_compile__and__run___closed__4;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elf64", 5);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__5;
x_2 = l_compile__and__run___closed__6;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-o", 2);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__7;
x_2 = l_compile__and__run___closed__8;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("program.o", 9);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__9;
x_2 = l_compile__and__run___closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_compile__and__run___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("nasm", 4);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_compile__and__run___closed__1;
x_3 = l_compile__and__run___closed__13;
x_4 = l_compile__and__run___closed__11;
x_5 = l_compile__and__run___closed__12;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
static lean_object* _init_l_compile__and__run___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_compile__and__run___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("--no-pie", 8);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__15;
x_2 = l_compile__and__run___closed__16;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__17;
x_2 = l_compile__and__run___closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("runtime.o", 9);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__18;
x_2 = l_compile__and__run___closed__19;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__20;
x_2 = l_compile__and__run___closed__8;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("program", 7);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__21;
x_2 = l_compile__and__run___closed__22;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-z", 2);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__23;
x_2 = l_compile__and__run___closed__24;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("noexecstack", 11);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_compile__and__run___closed__25;
x_2 = l_compile__and__run___closed__26;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_compile__and__run___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("gcc", 3);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_compile__and__run___closed__1;
x_3 = l_compile__and__run___closed__28;
x_4 = l_compile__and__run___closed__27;
x_5 = l_compile__and__run___closed__12;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
static lean_object* _init_l_compile__and__run___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("./program", 9);
return x_1;
}
}
static lean_object* _init_l_compile__and__run___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = l_compile__and__run___closed__1;
x_3 = l_compile__and__run___closed__30;
x_4 = l_compile__and__run___closed__12;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_1);
lean_ctor_set(x_6, 4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*5, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_compile__and__run(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_compile__to__file(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_compile__and__run___closed__14;
x_6 = l_IO_Process_run(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_compile__and__run___closed__29;
x_9 = l_IO_Process_run(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_compile__and__run___closed__31;
x_12 = l_IO_Process_run(x_11, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_IO_print___at_IO_println___spec__1(x_13, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_3);
if (x_28 == 0)
{
return x_3;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_3, 0);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_3);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Asm(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_SExp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ClassCompiler_Compile(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_Asm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_SExp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_num__shift = _init_l_num__shift();
lean_mark_persistent(l_num__shift);
l_num__mask = _init_l_num__mask();
lean_mark_persistent(l_num__mask);
l_num__tag = _init_l_num__tag();
lean_mark_persistent(l_num__tag);
l_bool__shift = _init_l_bool__shift();
lean_mark_persistent(l_bool__shift);
l_bool__mask = _init_l_bool__mask();
lean_mark_persistent(l_bool__mask);
l_bool__tag = _init_l_bool__tag();
lean_mark_persistent(l_bool__tag);
l_compile__exp___closed__1 = _init_l_compile__exp___closed__1();
lean_mark_persistent(l_compile__exp___closed__1);
l_compile__exp___closed__2 = _init_l_compile__exp___closed__2();
lean_mark_persistent(l_compile__exp___closed__2);
l_compile__exp___closed__3 = _init_l_compile__exp___closed__3();
lean_mark_persistent(l_compile__exp___closed__3);
l_compile__exp___closed__4 = _init_l_compile__exp___closed__4();
lean_mark_persistent(l_compile__exp___closed__4);
l_compile__exp___closed__5 = _init_l_compile__exp___closed__5();
lean_mark_persistent(l_compile__exp___closed__5);
l_compile__exp___closed__6 = _init_l_compile__exp___closed__6();
lean_mark_persistent(l_compile__exp___closed__6);
l_compile__exp___closed__7 = _init_l_compile__exp___closed__7();
lean_mark_persistent(l_compile__exp___closed__7);
l_compile__exp___closed__8 = _init_l_compile__exp___closed__8();
lean_mark_persistent(l_compile__exp___closed__8);
l_compile__exp___closed__9 = _init_l_compile__exp___closed__9();
lean_mark_persistent(l_compile__exp___closed__9);
l_compile__exp___closed__10 = _init_l_compile__exp___closed__10();
lean_mark_persistent(l_compile__exp___closed__10);
l_compile__exp___closed__11 = _init_l_compile__exp___closed__11();
lean_mark_persistent(l_compile__exp___closed__11);
l_compile__exp___closed__12 = _init_l_compile__exp___closed__12();
lean_mark_persistent(l_compile__exp___closed__12);
l_compile__exp___closed__13 = _init_l_compile__exp___closed__13();
lean_mark_persistent(l_compile__exp___closed__13);
l_compile__exp___closed__14 = _init_l_compile__exp___closed__14();
lean_mark_persistent(l_compile__exp___closed__14);
l_compile__exp___closed__15 = _init_l_compile__exp___closed__15();
lean_mark_persistent(l_compile__exp___closed__15);
l_compile__exp___closed__16 = _init_l_compile__exp___closed__16();
lean_mark_persistent(l_compile__exp___closed__16);
l_compile__exp___closed__17 = _init_l_compile__exp___closed__17();
lean_mark_persistent(l_compile__exp___closed__17);
l_compile__exp___closed__18 = _init_l_compile__exp___closed__18();
lean_mark_persistent(l_compile__exp___closed__18);
l_compile__exp___closed__19 = _init_l_compile__exp___closed__19();
lean_mark_persistent(l_compile__exp___closed__19);
l_compile__exp___closed__20 = _init_l_compile__exp___closed__20();
lean_mark_persistent(l_compile__exp___closed__20);
l_compile___closed__1 = _init_l_compile___closed__1();
lean_mark_persistent(l_compile___closed__1);
l_compile___closed__2 = _init_l_compile___closed__2();
lean_mark_persistent(l_compile___closed__2);
l_compile___closed__3 = _init_l_compile___closed__3();
lean_mark_persistent(l_compile___closed__3);
l_compile___closed__4 = _init_l_compile___closed__4();
lean_mark_persistent(l_compile___closed__4);
l_compile___closed__5 = _init_l_compile___closed__5();
lean_mark_persistent(l_compile___closed__5);
l_compile___closed__6 = _init_l_compile___closed__6();
lean_mark_persistent(l_compile___closed__6);
l_compile__string___closed__1 = _init_l_compile__string___closed__1();
lean_mark_persistent(l_compile__string___closed__1);
l_compile__string___closed__2 = _init_l_compile__string___closed__2();
lean_mark_persistent(l_compile__string___closed__2);
l_compile__string___closed__3 = _init_l_compile__string___closed__3();
lean_mark_persistent(l_compile__string___closed__3);
l_compile__string___closed__4 = _init_l_compile__string___closed__4();
lean_mark_persistent(l_compile__string___closed__4);
l_compile__string__to__string___closed__1 = _init_l_compile__string__to__string___closed__1();
lean_mark_persistent(l_compile__string__to__string___closed__1);
l_compile__string__to__string___closed__2 = _init_l_compile__string__to__string___closed__2();
lean_mark_persistent(l_compile__string__to__string___closed__2);
l_compile__to__file___closed__1 = _init_l_compile__to__file___closed__1();
lean_mark_persistent(l_compile__to__file___closed__1);
l_compile__to__file___closed__2 = _init_l_compile__to__file___closed__2();
lean_mark_persistent(l_compile__to__file___closed__2);
l_compile__to__file___closed__3 = _init_l_compile__to__file___closed__3();
lean_mark_persistent(l_compile__to__file___closed__3);
l_compile__to__file___closed__4 = _init_l_compile__to__file___closed__4();
lean_mark_persistent(l_compile__to__file___closed__4);
l_compile__to__file___closed__5 = _init_l_compile__to__file___closed__5();
lean_mark_persistent(l_compile__to__file___closed__5);
l_compile__and__run___closed__1 = _init_l_compile__and__run___closed__1();
lean_mark_persistent(l_compile__and__run___closed__1);
l_compile__and__run___closed__2 = _init_l_compile__and__run___closed__2();
lean_mark_persistent(l_compile__and__run___closed__2);
l_compile__and__run___closed__3 = _init_l_compile__and__run___closed__3();
lean_mark_persistent(l_compile__and__run___closed__3);
l_compile__and__run___closed__4 = _init_l_compile__and__run___closed__4();
lean_mark_persistent(l_compile__and__run___closed__4);
l_compile__and__run___closed__5 = _init_l_compile__and__run___closed__5();
lean_mark_persistent(l_compile__and__run___closed__5);
l_compile__and__run___closed__6 = _init_l_compile__and__run___closed__6();
lean_mark_persistent(l_compile__and__run___closed__6);
l_compile__and__run___closed__7 = _init_l_compile__and__run___closed__7();
lean_mark_persistent(l_compile__and__run___closed__7);
l_compile__and__run___closed__8 = _init_l_compile__and__run___closed__8();
lean_mark_persistent(l_compile__and__run___closed__8);
l_compile__and__run___closed__9 = _init_l_compile__and__run___closed__9();
lean_mark_persistent(l_compile__and__run___closed__9);
l_compile__and__run___closed__10 = _init_l_compile__and__run___closed__10();
lean_mark_persistent(l_compile__and__run___closed__10);
l_compile__and__run___closed__11 = _init_l_compile__and__run___closed__11();
lean_mark_persistent(l_compile__and__run___closed__11);
l_compile__and__run___closed__12 = _init_l_compile__and__run___closed__12();
lean_mark_persistent(l_compile__and__run___closed__12);
l_compile__and__run___closed__13 = _init_l_compile__and__run___closed__13();
lean_mark_persistent(l_compile__and__run___closed__13);
l_compile__and__run___closed__14 = _init_l_compile__and__run___closed__14();
lean_mark_persistent(l_compile__and__run___closed__14);
l_compile__and__run___closed__15 = _init_l_compile__and__run___closed__15();
lean_mark_persistent(l_compile__and__run___closed__15);
l_compile__and__run___closed__16 = _init_l_compile__and__run___closed__16();
lean_mark_persistent(l_compile__and__run___closed__16);
l_compile__and__run___closed__17 = _init_l_compile__and__run___closed__17();
lean_mark_persistent(l_compile__and__run___closed__17);
l_compile__and__run___closed__18 = _init_l_compile__and__run___closed__18();
lean_mark_persistent(l_compile__and__run___closed__18);
l_compile__and__run___closed__19 = _init_l_compile__and__run___closed__19();
lean_mark_persistent(l_compile__and__run___closed__19);
l_compile__and__run___closed__20 = _init_l_compile__and__run___closed__20();
lean_mark_persistent(l_compile__and__run___closed__20);
l_compile__and__run___closed__21 = _init_l_compile__and__run___closed__21();
lean_mark_persistent(l_compile__and__run___closed__21);
l_compile__and__run___closed__22 = _init_l_compile__and__run___closed__22();
lean_mark_persistent(l_compile__and__run___closed__22);
l_compile__and__run___closed__23 = _init_l_compile__and__run___closed__23();
lean_mark_persistent(l_compile__and__run___closed__23);
l_compile__and__run___closed__24 = _init_l_compile__and__run___closed__24();
lean_mark_persistent(l_compile__and__run___closed__24);
l_compile__and__run___closed__25 = _init_l_compile__and__run___closed__25();
lean_mark_persistent(l_compile__and__run___closed__25);
l_compile__and__run___closed__26 = _init_l_compile__and__run___closed__26();
lean_mark_persistent(l_compile__and__run___closed__26);
l_compile__and__run___closed__27 = _init_l_compile__and__run___closed__27();
lean_mark_persistent(l_compile__and__run___closed__27);
l_compile__and__run___closed__28 = _init_l_compile__and__run___closed__28();
lean_mark_persistent(l_compile__and__run___closed__28);
l_compile__and__run___closed__29 = _init_l_compile__and__run___closed__29();
lean_mark_persistent(l_compile__and__run___closed__29);
l_compile__and__run___closed__30 = _init_l_compile__and__run___closed__30();
lean_mark_persistent(l_compile__and__run___closed__30);
l_compile__and__run___closed__31 = _init_l_compile__and__run___closed__31();
lean_mark_persistent(l_compile__and__run___closed__31);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
