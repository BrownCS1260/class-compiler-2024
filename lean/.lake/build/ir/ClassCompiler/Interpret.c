// Lean compiler output
// Module: ClassCompiler.Interpret
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
static lean_object* l_interpret__exp___closed__1;
LEAN_EXPORT lean_object* l_Value_to__String___boxed(lean_object*);
static lean_object* l_Value_to__String___closed__1;
static lean_object* l_Value_to__String___closed__3;
static lean_object* l_interpret__string___closed__3;
static lean_object* l_Value_to__String___closed__2;
LEAN_EXPORT lean_object* l_interpret__string(lean_object*);
static lean_object* l_interpret__string___closed__1;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_interpret__exp___closed__4;
LEAN_EXPORT lean_object* l_Value_to__String(lean_object*);
lean_object* l_S__exp__of__String(lean_object*);
static lean_object* l_interpret__exp___closed__5;
LEAN_EXPORT lean_object* l_interpret__exp(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_interpret__string___closed__4;
static lean_object* l_interpret__exp___closed__2;
lean_object* lean_int_sub(lean_object*, lean_object*);
static lean_object* l_Value_to__String___closed__4;
static lean_object* l_interpret__exp___closed__3;
lean_object* lean_nat_abs(lean_object*);
static lean_object* l_interpret__string___closed__2;
LEAN_EXPORT lean_object* l_instReprValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprValue(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_interpret__string___spec__1(lean_object*);
lean_object* l_Ast__of__S__exp(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
static lean_object* _init_l_Value_to__String___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Value_to__String___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-", 1);
return x_1;
}
}
static lean_object* _init_l_Value_to__String___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("false", 5);
return x_1;
}
}
static lean_object* _init_l_Value_to__String___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("true", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Value_to__String(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Value_to__String___closed__1;
x_4 = lean_int_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_nat_abs(x_2);
x_6 = l_Nat_repr(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_nat_abs(x_2);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_7, x_8);
lean_dec(x_7);
x_10 = lean_nat_add(x_9, x_8);
lean_dec(x_9);
x_11 = l_Nat_repr(x_10);
x_12 = l_Value_to__String___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_1, 0);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Value_to__String___closed__3;
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_Value_to__String___closed__4;
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Value_to__String___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Value_to__String(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instReprValue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Value_to__String(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instReprValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instReprValue(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_interpret__exp___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpret__exp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_interpret__exp___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpret__exp___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpret__exp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_interpret__exp___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpret__exp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_interpret__exp(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_interpret__exp___closed__2;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_interpret__exp___closed__4;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_nat_to_int(x_4);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_interpret__exp(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_interpret__exp___closed__5;
x_16 = lean_int_add(x_14, x_15);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l_interpret__exp___closed__5;
x_19 = lean_int_add(x_17, x_18);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
}
else
{
lean_object* x_21; 
lean_free_object(x_9);
lean_dec(x_12);
x_21 = lean_box(0);
return x_21;
}
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_9, 0);
lean_inc(x_22);
lean_dec(x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 x_24 = x_22;
} else {
 lean_dec_ref(x_22);
 x_24 = lean_box(0);
}
x_25 = l_interpret__exp___closed__5;
x_26 = lean_int_add(x_23, x_25);
lean_dec(x_23);
if (lean_is_scalar(x_24)) {
 x_27 = lean_alloc_ctor(0, 1, 0);
} else {
 x_27 = x_24;
}
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_22);
x_29 = lean_box(0);
return x_29;
}
}
}
}
default: 
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
lean_dec(x_1);
x_31 = l_interpret__exp(x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_box(0);
return x_32;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 0);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = l_interpret__exp___closed__5;
x_38 = lean_int_sub(x_36, x_37);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_38);
return x_31;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
lean_dec(x_34);
x_40 = l_interpret__exp___closed__5;
x_41 = lean_int_sub(x_39, x_40);
lean_dec(x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_31, 0, x_42);
return x_31;
}
}
else
{
lean_object* x_43; 
lean_free_object(x_31);
lean_dec(x_34);
x_43 = lean_box(0);
return x_43;
}
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_31, 0);
lean_inc(x_44);
lean_dec(x_31);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
x_47 = l_interpret__exp___closed__5;
x_48 = lean_int_sub(x_45, x_47);
lean_dec(x_45);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 1, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
else
{
lean_object* x_51; 
lean_dec(x_44);
x_51 = lean_box(0);
return x_51;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_interpret__string___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_interpret__string___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ClassCompiler.Interpret", 23);
return x_1;
}
}
static lean_object* _init_l_interpret__string___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("interpret_string", 16);
return x_1;
}
}
static lean_object* _init_l_interpret__string___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("parser error", 12);
return x_1;
}
}
static lean_object* _init_l_interpret__string___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_interpret__string___closed__1;
x_2 = l_interpret__string___closed__2;
x_3 = lean_unsigned_to_nat(36u);
x_4 = lean_unsigned_to_nat(10u);
x_5 = l_interpret__string___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_interpret__string(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_S__exp__of__String(x_1);
x_3 = l_Ast__of__S__exp(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_interpret__string___closed__4;
x_5 = l_panic___at_interpret__string___spec__1(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_interpret__exp(x_6);
return x_7;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Asm(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_SExp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ClassCompiler_Interpret(uint8_t builtin, lean_object* w) {
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
l_Value_to__String___closed__1 = _init_l_Value_to__String___closed__1();
lean_mark_persistent(l_Value_to__String___closed__1);
l_Value_to__String___closed__2 = _init_l_Value_to__String___closed__2();
lean_mark_persistent(l_Value_to__String___closed__2);
l_Value_to__String___closed__3 = _init_l_Value_to__String___closed__3();
lean_mark_persistent(l_Value_to__String___closed__3);
l_Value_to__String___closed__4 = _init_l_Value_to__String___closed__4();
lean_mark_persistent(l_Value_to__String___closed__4);
l_interpret__exp___closed__1 = _init_l_interpret__exp___closed__1();
lean_mark_persistent(l_interpret__exp___closed__1);
l_interpret__exp___closed__2 = _init_l_interpret__exp___closed__2();
lean_mark_persistent(l_interpret__exp___closed__2);
l_interpret__exp___closed__3 = _init_l_interpret__exp___closed__3();
lean_mark_persistent(l_interpret__exp___closed__3);
l_interpret__exp___closed__4 = _init_l_interpret__exp___closed__4();
lean_mark_persistent(l_interpret__exp___closed__4);
l_interpret__exp___closed__5 = _init_l_interpret__exp___closed__5();
lean_mark_persistent(l_interpret__exp___closed__5);
l_interpret__string___closed__1 = _init_l_interpret__string___closed__1();
lean_mark_persistent(l_interpret__string___closed__1);
l_interpret__string___closed__2 = _init_l_interpret__string___closed__2();
lean_mark_persistent(l_interpret__string___closed__2);
l_interpret__string___closed__3 = _init_l_interpret__string___closed__3();
lean_mark_persistent(l_interpret__string___closed__3);
l_interpret__string___closed__4 = _init_l_interpret__string___closed__4();
lean_mark_persistent(l_interpret__string___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
