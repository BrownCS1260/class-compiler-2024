// Lean compiler output
// Module: ClassCompiler.SExp
// Imports: Init Lean.Data.Parsec ClassCompiler.Ast
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
static lean_object* l_S__exp__of__String___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_parse__lst(lean_object*, lean_object*);
static lean_object* l_parse__lst__aux___closed__5;
static lean_object* l_Ast__of__S__exp___closed__2;
lean_object* l_String_toNat_x21(lean_object*);
static lean_object* l_Ast__of__S__exp___closed__5;
static lean_object* l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_parse__lst___closed__1;
lean_object* l_String_Iterator_next(lean_object*);
static lean_object* l_Ast__of__S__exp___closed__4;
static lean_object* l_S__exp_to__String___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1;
LEAN_EXPORT lean_object* l_parse__S__exp(lean_object*);
extern lean_object* l_Lean_Parsec_unexpectedEndOfInput;
static lean_object* l_Ast__of__S__exp___closed__1;
LEAN_EXPORT lean_object* l_Ast__of__S__exp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_parse__num(lean_object*);
static lean_object* l_Ast__of__S__exp___closed__3;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
static lean_object* l_parse__S__exp___closed__1;
uint32_t l_String_Iterator_curr(lean_object*);
static lean_object* l_parse__lst___closed__2;
static lean_object* l_parse__lst__aux___closed__2;
static lean_object* l_parse__lst__aux___closed__6;
static lean_object* l_parse__lst__aux___closed__8;
uint8_t l_Char_isAlphanum(uint32_t);
LEAN_EXPORT lean_object* l_parse__sym(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_String_Iterator_hasNext(lean_object*);
static lean_object* l_S__exp_to__String___closed__1;
lean_object* lean_string_mk(lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_S__exp_to__String___spec__1(lean_object*, lean_object*);
static lean_object* l_parse__lst___closed__3;
LEAN_EXPORT lean_object* l_S__exp__of__String(lean_object*);
static lean_object* l_S__exp_to__String___closed__2;
lean_object* lean_array_to_list(lean_object*, lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5;
static lean_object* l_parse__num___closed__1;
static lean_object* l_parse__lst__aux___closed__1;
lean_object* l_List_foldl___at_String_join___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2;
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3;
static lean_object* l_parse__lst__aux___closed__7;
uint8_t l_List_elem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_parse__lst__aux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCore___at_parse__num___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parsec_run___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprS__exp(lean_object*, lean_object*);
static lean_object* l_parse__lst__aux___closed__3;
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1(lean_object*, lean_object*);
lean_object* l_List_intersperse___rarg(lean_object*, lean_object*);
lean_object* l_UInt32_decEq___boxed(lean_object*, lean_object*);
static lean_object* l_S__exp_to__String___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instReprS__exp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_S__exp_to__String(lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Ast__of__S__exp(lean_object*);
lean_object* l_instBEq___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ast__of__S__exp___closed__6;
static lean_object* l_parse__lst__aux___closed__4;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7;
static lean_object* l_S__exp__of__String___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1;
uint8_t l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_S__exp_to__String___spec__1(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_S__exp_to__String(x_5);
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
x_11 = l_S__exp_to__String(x_9);
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
static lean_object* _init_l_S__exp_to__String___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" ", 1);
return x_1;
}
}
static lean_object* _init_l_S__exp_to__String___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_S__exp_to__String___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("(", 1);
return x_1;
}
}
static lean_object* _init_l_S__exp_to__String___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(")", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_S__exp_to__String(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
default: 
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_S__exp_to__String___spec__1(x_5, x_6);
x_8 = l_S__exp_to__String___closed__1;
x_9 = l_List_intersperse___rarg(x_8, x_7);
x_10 = l_S__exp_to__String___closed__2;
x_11 = l_List_foldl___at_String_join___spec__1(x_10, x_9);
lean_dec(x_9);
x_12 = l_S__exp_to__String___closed__3;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_S__exp_to__String___closed__4;
x_15 = lean_string_append(x_13, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_instReprS__exp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_S__exp_to__String(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instReprS__exp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instReprS__exp(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("digit expected", 14);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCore___at_parse__num___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_String_Iterator_hasNext(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Lean_Parsec_unexpectedEndOfInput;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_1);
return x_7;
}
}
else
{
lean_object* x_8; uint32_t x_9; uint32_t x_10; uint8_t x_11; 
lean_inc(x_2);
x_8 = l_String_Iterator_next(x_2);
x_9 = l_String_Iterator_curr(x_2);
x_10 = 48;
x_11 = lean_uint32_dec_le(x_10, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_8);
x_12 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_1);
return x_15;
}
}
else
{
uint32_t x_16; uint8_t x_17; 
x_16 = 57;
x_17 = lean_uint32_dec_le(x_9, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_8);
x_18 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_19 = l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_1);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_box_uint32(x_9);
lean_inc(x_1);
x_23 = lean_array_push(x_1, x_22);
x_24 = l_Lean_Parsec_manyCore___at_parse__num___spec__1(x_23, x_8);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
x_32 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_30);
if (x_32 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_dec(x_31);
lean_dec(x_30);
lean_ctor_set_tag(x_24, 0);
lean_ctor_set(x_24, 1, x_1);
lean_ctor_set(x_24, 0, x_2);
return x_24;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_33);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
else
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_1);
return x_37;
}
}
}
}
}
}
}
}
static lean_object* _init_l_parse__num___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_parse__num(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_String_Iterator_hasNext(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Parsec_unexpectedEndOfInput;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
else
{
lean_object* x_5; uint32_t x_6; uint32_t x_7; uint8_t x_8; 
lean_inc(x_1);
x_5 = l_String_Iterator_next(x_1);
x_6 = l_String_Iterator_curr(x_1);
x_7 = 48;
x_8 = lean_uint32_dec_le(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
uint32_t x_11; uint8_t x_12; 
x_11 = 57;
x_12 = lean_uint32_dec_le(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_13 = l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_15 = l_parse__num___closed__1;
x_16 = lean_box_uint32(x_6);
x_17 = lean_array_push(x_15, x_16);
x_18 = l_Lean_Parsec_manyCore___at_parse__num___spec__1(x_17, x_5);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_18, 1);
x_21 = lean_array_to_list(lean_box(0), x_20);
x_22 = lean_string_mk(x_21);
x_23 = l_String_toNat_x21(x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_18, 1, x_24);
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_array_to_list(lean_box(0), x_26);
x_28 = lean_string_mk(x_27);
x_29 = l_String_toNat_x21(x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
return x_18;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_18, 0);
x_34 = lean_ctor_get(x_18, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_18);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_decEq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 63;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 42;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3;
x_2 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 45;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4;
x_2 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 43;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5;
x_2 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("condition not satisfied", 23);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; uint8_t x_21; 
x_21 = l_String_Iterator_hasNext(x_2);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = l_Lean_Parsec_unexpectedEndOfInput;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
else
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_1);
return x_25;
}
}
else
{
lean_object* x_26; uint32_t x_27; uint8_t x_28; 
lean_inc(x_2);
x_26 = l_String_Iterator_next(x_2);
x_27 = l_String_Iterator_curr(x_2);
x_28 = l_Char_isAlphanum(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2;
x_30 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6;
x_31 = lean_box_uint32(x_27);
x_32 = l_List_elem___rarg(x_29, x_31, x_30);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_26);
x_33 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_34 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_1);
return x_36;
}
}
else
{
x_3 = x_26;
x_4 = x_27;
goto block_20;
}
}
else
{
x_3 = x_26;
x_4 = x_27;
goto block_20;
}
}
block_20:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = lean_string_push(x_1, x_4);
x_6 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1(x_5, x_3);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
x_14 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_dec(x_13);
lean_dec(x_12);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 1, x_1);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_2, x_15);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_1);
return x_19;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_parse__sym(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_S__exp_to__String___closed__2;
x_3 = l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_3, 1, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_parse__lst__aux___closed__1() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 32;
x_2 = l_S__exp_to__String___closed__2;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_parse__lst__aux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("expected: '", 11);
return x_1;
}
}
static lean_object* _init_l_parse__lst__aux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst__aux___closed__2;
x_2 = l_parse__lst__aux___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_parse__lst__aux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'", 1);
return x_1;
}
}
static lean_object* _init_l_parse__lst__aux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst__aux___closed__3;
x_2 = l_parse__lst__aux___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_parse__lst__aux___closed__6() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 41;
x_2 = l_S__exp_to__String___closed__2;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_parse__lst__aux___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst__aux___closed__2;
x_2 = l_parse__lst__aux___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_parse__lst__aux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst__aux___closed__7;
x_2 = l_parse__lst__aux___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_parse__lst__aux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_34; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_6 = x_3;
} else {
 lean_dec_ref(x_3);
 x_6 = lean_box(0);
}
x_7 = 41;
x_34 = l_String_Iterator_hasNext(x_4);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Lean_Parsec_unexpectedEndOfInput;
lean_inc(x_4);
x_8 = x_4;
x_9 = x_35;
goto block_33;
}
else
{
lean_object* x_36; uint32_t x_37; uint8_t x_38; 
lean_inc(x_4);
x_36 = l_String_Iterator_next(x_4);
x_37 = l_String_Iterator_curr(x_4);
x_38 = lean_uint32_dec_eq(x_37, x_7);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_36);
x_39 = l_parse__lst__aux___closed__8;
lean_inc(x_4);
x_8 = x_4;
x_9 = x_39;
goto block_33;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_5);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_36);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
block_33:
{
uint8_t x_10; 
x_10 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_4, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_6)) {
 x_11 = lean_alloc_ctor(1, 2, 0);
} else {
 x_11 = x_6;
 lean_ctor_set_tag(x_11, 1);
}
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint32_t x_12; uint8_t x_13; 
lean_dec(x_9);
lean_dec(x_8);
x_12 = 32;
x_13 = l_String_Iterator_hasNext(x_4);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_1);
x_14 = l_Lean_Parsec_unexpectedEndOfInput;
if (lean_is_scalar(x_6)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_6;
 lean_ctor_set_tag(x_15, 1);
}
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_object* x_16; uint32_t x_17; uint8_t x_18; 
lean_inc(x_4);
x_16 = l_String_Iterator_next(x_4);
x_17 = l_String_Iterator_curr(x_4);
x_18 = lean_uint32_dec_eq(x_17, x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_1);
x_19 = l_parse__lst__aux___closed__5;
if (lean_is_scalar(x_6)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_6;
 lean_ctor_set_tag(x_20, 1);
}
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_4);
x_21 = l_parse__lst__aux(x_1, x_16);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_21, 1, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_21);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_3);
if (x_43 == 0)
{
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_3, 0);
x_45 = lean_ctor_get(x_3, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_3);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
static lean_object* _init_l_parse__lst___closed__1() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 40;
x_2 = l_S__exp_to__String___closed__2;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_parse__lst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst__aux___closed__2;
x_2 = l_parse__lst___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_parse__lst___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_parse__lst___closed__2;
x_2 = l_parse__lst__aux___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_parse__lst(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; 
x_3 = 40;
x_4 = l_String_Iterator_hasNext(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Lean_Parsec_unexpectedEndOfInput;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; uint32_t x_8; uint8_t x_9; 
lean_inc(x_2);
x_7 = l_String_Iterator_next(x_2);
x_8 = l_String_Iterator_curr(x_2);
x_9 = lean_uint32_dec_eq(x_8, x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_1);
x_10 = l_parse__lst___closed__3;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = l_parse__lst__aux(x_1, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_12, 1, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
}
static lean_object* _init_l_parse__S__exp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_parse__S__exp), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_parse__S__exp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_parse__S__exp___closed__1;
lean_inc(x_1);
x_3 = l_parse__lst(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_1, x_9);
if (x_11 == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_12; 
lean_free_object(x_3);
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_12 = l_parse__num(x_1);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
x_20 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_1, x_18);
if (x_20 == 0)
{
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_21; 
lean_free_object(x_12);
lean_dec(x_19);
lean_dec(x_18);
x_21 = l_parse__sym(x_1);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_12);
x_24 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_1, x_22);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_22);
x_26 = l_parse__sym(x_1);
return x_26;
}
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_3, 0);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_3);
x_29 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_1, x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_1);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_28);
lean_dec(x_27);
lean_inc(x_1);
x_31 = l_parse__num(x_1);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_31, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_38 = x_31;
} else {
 lean_dec_ref(x_31);
 x_38 = lean_box(0);
}
x_39 = l___private_Init_Data_String_Basic_0__String_decEqIterator____x40_Init_Data_String_Basic___hyg_3795_(x_1, x_36);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_1);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
x_41 = l_parse__sym(x_1);
return x_41;
}
}
}
}
}
}
}
static lean_object* _init_l_S__exp__of__String___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ERROR", 5);
return x_1;
}
}
static lean_object* _init_l_S__exp__of__String___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_S__exp__of__String___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_S__exp__of__String(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_parse__S__exp___closed__1;
x_3 = l_Lean_Parsec_run___rarg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = l_S__exp__of__String___closed__2;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
return x_5;
}
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("true", 4);
return x_1;
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("false", 5);
return x_1;
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("add1", 4);
return x_1;
}
}
static lean_object* _init_l_Ast__of__S__exp___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("sub1", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ast__of__S__exp(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Ast__of__S__exp___closed__1;
x_7 = lean_string_dec_eq(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Ast__of__S__exp___closed__2;
x_9 = lean_string_dec_eq(x_5, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Ast__of__S__exp___closed__3;
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = l_Ast__of__S__exp___closed__4;
return x_12;
}
}
default: 
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Ast__of__S__exp___closed__5;
x_19 = lean_string_dec_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Ast__of__S__exp___closed__6;
x_21 = lean_string_dec_eq(x_17, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
return x_22;
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_23; 
x_23 = lean_box(0);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_16, 1);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = l_Ast__of__S__exp(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_box(0);
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 0);
lean_inc(x_31);
lean_dec(x_26);
x_32 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
return x_34;
}
}
}
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_35; 
x_35 = lean_box(0);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_16, 1);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_16, 0);
x_38 = l_Ast__of__S__exp(x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_box(0);
return x_39;
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 0);
x_42 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_38, 0, x_42);
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_38, 0);
lean_inc(x_43);
lean_dec(x_38);
x_44 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
x_46 = lean_box(0);
return x_46;
}
}
}
}
else
{
lean_object* x_47; 
x_47 = lean_box(0);
return x_47;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ast__of__S__exp___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ast__of__S__exp(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Parsec(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Ast(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ClassCompiler_SExp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Parsec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_Ast(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_S__exp_to__String___closed__1 = _init_l_S__exp_to__String___closed__1();
lean_mark_persistent(l_S__exp_to__String___closed__1);
l_S__exp_to__String___closed__2 = _init_l_S__exp_to__String___closed__2();
lean_mark_persistent(l_S__exp_to__String___closed__2);
l_S__exp_to__String___closed__3 = _init_l_S__exp_to__String___closed__3();
lean_mark_persistent(l_S__exp_to__String___closed__3);
l_S__exp_to__String___closed__4 = _init_l_S__exp_to__String___closed__4();
lean_mark_persistent(l_S__exp_to__String___closed__4);
l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1 = _init_l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1();
lean_mark_persistent(l_Lean_Parsec_manyCore___at_parse__num___spec__1___closed__1);
l_parse__num___closed__1 = _init_l_parse__num___closed__1();
lean_mark_persistent(l_parse__num___closed__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__2);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3___boxed__const__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__3);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4___boxed__const__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__4);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5___boxed__const__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__5);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6___boxed__const__1);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__6);
l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7 = _init_l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7();
lean_mark_persistent(l_Lean_Parsec_manyCharsCore___at_parse__sym___spec__1___closed__7);
l_parse__lst__aux___closed__1 = _init_l_parse__lst__aux___closed__1();
lean_mark_persistent(l_parse__lst__aux___closed__1);
l_parse__lst__aux___closed__2 = _init_l_parse__lst__aux___closed__2();
lean_mark_persistent(l_parse__lst__aux___closed__2);
l_parse__lst__aux___closed__3 = _init_l_parse__lst__aux___closed__3();
lean_mark_persistent(l_parse__lst__aux___closed__3);
l_parse__lst__aux___closed__4 = _init_l_parse__lst__aux___closed__4();
lean_mark_persistent(l_parse__lst__aux___closed__4);
l_parse__lst__aux___closed__5 = _init_l_parse__lst__aux___closed__5();
lean_mark_persistent(l_parse__lst__aux___closed__5);
l_parse__lst__aux___closed__6 = _init_l_parse__lst__aux___closed__6();
lean_mark_persistent(l_parse__lst__aux___closed__6);
l_parse__lst__aux___closed__7 = _init_l_parse__lst__aux___closed__7();
lean_mark_persistent(l_parse__lst__aux___closed__7);
l_parse__lst__aux___closed__8 = _init_l_parse__lst__aux___closed__8();
lean_mark_persistent(l_parse__lst__aux___closed__8);
l_parse__lst___closed__1 = _init_l_parse__lst___closed__1();
lean_mark_persistent(l_parse__lst___closed__1);
l_parse__lst___closed__2 = _init_l_parse__lst___closed__2();
lean_mark_persistent(l_parse__lst___closed__2);
l_parse__lst___closed__3 = _init_l_parse__lst___closed__3();
lean_mark_persistent(l_parse__lst___closed__3);
l_parse__S__exp___closed__1 = _init_l_parse__S__exp___closed__1();
lean_mark_persistent(l_parse__S__exp___closed__1);
l_S__exp__of__String___closed__1 = _init_l_S__exp__of__String___closed__1();
lean_mark_persistent(l_S__exp__of__String___closed__1);
l_S__exp__of__String___closed__2 = _init_l_S__exp__of__String___closed__2();
lean_mark_persistent(l_S__exp__of__String___closed__2);
l_Ast__of__S__exp___closed__1 = _init_l_Ast__of__S__exp___closed__1();
lean_mark_persistent(l_Ast__of__S__exp___closed__1);
l_Ast__of__S__exp___closed__2 = _init_l_Ast__of__S__exp___closed__2();
lean_mark_persistent(l_Ast__of__S__exp___closed__2);
l_Ast__of__S__exp___closed__3 = _init_l_Ast__of__S__exp___closed__3();
lean_mark_persistent(l_Ast__of__S__exp___closed__3);
l_Ast__of__S__exp___closed__4 = _init_l_Ast__of__S__exp___closed__4();
lean_mark_persistent(l_Ast__of__S__exp___closed__4);
l_Ast__of__S__exp___closed__5 = _init_l_Ast__of__S__exp___closed__5();
lean_mark_persistent(l_Ast__of__S__exp___closed__5);
l_Ast__of__S__exp___closed__6 = _init_l_Ast__of__S__exp___closed__6();
lean_mark_persistent(l_Ast__of__S__exp___closed__6);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
