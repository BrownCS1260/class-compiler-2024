// Lean compiler output
// Module: ClassCompiler.Asm
// Imports: Init
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
LEAN_EXPORT lean_object* l_String__of__Directive(lean_object*);
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_String__of__Directive___closed__8;
static lean_object* l_String__of__Directive___closed__6;
LEAN_EXPORT lean_object* l_is__Register___boxed(lean_object*);
static lean_object* l_Register_noConfusion___rarg___closed__1;
static lean_object* l_String__of__Directive___closed__5;
static lean_object* l_String__of__Directive___closed__3;
static lean_object* l_String__of__Directive___closed__1;
static lean_object* l_String__of__Directive___closed__2;
static lean_object* l_String__of__Directive___closed__4;
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String__of__Register___boxed(lean_object*);
static lean_object* l_String__of__Register___closed__2;
static lean_object* l_String__of__Directive___closed__7;
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Register_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Register_noConfusion(lean_object*);
LEAN_EXPORT lean_object* l_String__of__Operand(lean_object*);
LEAN_EXPORT lean_object* l_Register_toCtorIdx(uint8_t);
LEAN_EXPORT uint8_t l_is__Register(lean_object*);
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg(uint8_t, uint8_t, lean_object*);
static lean_object* l_String__of__Register___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String__of__Register(uint8_t);
lean_object* l_Nat_repr(lean_object*);
LEAN_EXPORT lean_object* l_Register_toCtorIdx(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Register_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Register_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Register_noConfusion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Register_noConfusion___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Register_noConfusion___rarg___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Register_noConfusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Register_noConfusion___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Register_noConfusion___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Register_noConfusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Register_noConfusion___rarg(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_String__of__Register___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rax", 3);
return x_1;
}
}
static lean_object* _init_l_String__of__Register___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rcx", 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_String__of__Register(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_String__of__Register___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_String__of__Register___closed__2;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_String__of__Register___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_String__of__Register(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_is__Register(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_is__Register___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_is__Register(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_String__of__Operand(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
x_3 = l_String__of__Register(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Nat_repr(x_4);
return x_5;
}
}
}
static lean_object* _init_l_String__of__Directive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("global ", 7);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(":", 1);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\tmov ", 5);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(", ", 2);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\tadd ", 5);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\tsub ", 5);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\tret", 4);
return x_1;
}
}
static lean_object* _init_l_String__of__Directive___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("; ", 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_String__of__Directive(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_String__of__Directive___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String__of__Directive___closed__2;
x_7 = lean_string_append(x_5, x_6);
return x_7;
}
case 2:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = l_String__of__Operand(x_9);
x_11 = l_String__of__Directive___closed__3;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_String__of__Directive___closed__4;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = l_String__of__Operand(x_15);
x_17 = lean_string_append(x_14, x_16);
lean_dec(x_16);
return x_17;
}
case 3:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = l_String__of__Operand(x_19);
x_21 = l_String__of__Directive___closed__5;
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = l_String__of__Directive___closed__4;
x_24 = lean_string_append(x_22, x_23);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_26 = l_String__of__Operand(x_25);
x_27 = lean_string_append(x_24, x_26);
lean_dec(x_26);
return x_27;
}
case 4:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = l_String__of__Operand(x_29);
x_31 = l_String__of__Directive___closed__6;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_String__of__Directive___closed__4;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_dec(x_28);
x_36 = l_String__of__Operand(x_35);
x_37 = lean_string_append(x_34, x_36);
lean_dec(x_36);
return x_37;
}
case 5:
{
lean_object* x_38; 
x_38 = l_String__of__Directive___closed__7;
return x_38;
}
default: 
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = l_String__of__Directive___closed__8;
x_41 = lean_string_append(x_40, x_39);
lean_dec(x_39);
return x_41;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ClassCompiler_Asm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Register_noConfusion___rarg___closed__1 = _init_l_Register_noConfusion___rarg___closed__1();
lean_mark_persistent(l_Register_noConfusion___rarg___closed__1);
l_String__of__Register___closed__1 = _init_l_String__of__Register___closed__1();
lean_mark_persistent(l_String__of__Register___closed__1);
l_String__of__Register___closed__2 = _init_l_String__of__Register___closed__2();
lean_mark_persistent(l_String__of__Register___closed__2);
l_String__of__Directive___closed__1 = _init_l_String__of__Directive___closed__1();
lean_mark_persistent(l_String__of__Directive___closed__1);
l_String__of__Directive___closed__2 = _init_l_String__of__Directive___closed__2();
lean_mark_persistent(l_String__of__Directive___closed__2);
l_String__of__Directive___closed__3 = _init_l_String__of__Directive___closed__3();
lean_mark_persistent(l_String__of__Directive___closed__3);
l_String__of__Directive___closed__4 = _init_l_String__of__Directive___closed__4();
lean_mark_persistent(l_String__of__Directive___closed__4);
l_String__of__Directive___closed__5 = _init_l_String__of__Directive___closed__5();
lean_mark_persistent(l_String__of__Directive___closed__5);
l_String__of__Directive___closed__6 = _init_l_String__of__Directive___closed__6();
lean_mark_persistent(l_String__of__Directive___closed__6);
l_String__of__Directive___closed__7 = _init_l_String__of__Directive___closed__7();
lean_mark_persistent(l_String__of__Directive___closed__7);
l_String__of__Directive___closed__8 = _init_l_String__of__Directive___closed__8();
lean_mark_persistent(l_String__of__Directive___closed__8);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
