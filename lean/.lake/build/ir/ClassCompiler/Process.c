// Lean compiler output
// Module: ClassCompiler.Process
// Imports: Init ClassCompiler.Asm ClassCompiler.Compile ClassCompiler.Interpret
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
LEAN_EXPORT lean_object* l_Processor_evalToState(lean_object*);
extern lean_object* l_num__shift;
LEAN_EXPORT lean_object* l_List_foldl___at_Processor_evalToState___spec__1(lean_object*, lean_object*);
extern lean_object* l_bool__mask;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
extern lean_object* l_bool__tag;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_Processor_eval___closed__2;
static lean_object* l_Processor_eval___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at_Processor_evalToState___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_processDirective(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
extern lean_object* l_num__mask;
static lean_object* l_Processor_eval___closed__4;
LEAN_EXPORT lean_object* l_ProcessorState_setReg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ProcessorState_regVal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ProcessorState_setReg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Processor_eval(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_processDirective___boxed(lean_object*, lean_object*);
static lean_object* l_Processor_eval___closed__1;
LEAN_EXPORT lean_object* l_ProcessorState_regVal(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_ProcessorState_opVal(lean_object*, lean_object*);
extern lean_object* l_num__tag;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Processor_evalToState___closed__1;
LEAN_EXPORT lean_object* l_ProcessorState_opVal___boxed(lean_object*, lean_object*);
extern lean_object* l_bool__shift;
LEAN_EXPORT lean_object* l_ProcessorState_regVal(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_ProcessorState_regVal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_ProcessorState_regVal(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ProcessorState_opVal(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_ctor_get_uint8(x_2, 0);
x_4 = l_ProcessorState_regVal(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_ProcessorState_opVal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ProcessorState_opVal(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ProcessorState_setReg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_dec(x_5);
lean_ctor_set(x_1, 0, x_2);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 1);
lean_dec(x_9);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_2);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_ProcessorState_setReg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_ProcessorState_setReg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_processDirective(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get_uint8(x_4, 0);
x_7 = l_ProcessorState_opVal(x_1, x_5);
x_8 = l_ProcessorState_setReg(x_1, x_7, x_6);
return x_8;
}
else
{
return x_1;
}
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_9, 0);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = lean_ctor_get_uint8(x_10, 0);
x_13 = l_ProcessorState_regVal(x_1, x_12);
x_14 = l_ProcessorState_opVal(x_1, x_11);
x_15 = lean_nat_add(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
x_16 = l_ProcessorState_setReg(x_1, x_15, x_12);
return x_16;
}
else
{
return x_1;
}
}
case 4:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_17, 0);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_17, 1);
x_20 = lean_ctor_get_uint8(x_18, 0);
x_21 = l_ProcessorState_regVal(x_1, x_20);
x_22 = l_ProcessorState_opVal(x_1, x_19);
x_23 = lean_nat_sub(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
x_24 = l_ProcessorState_setReg(x_1, x_23, x_20);
return x_24;
}
else
{
return x_1;
}
}
default: 
{
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_processDirective___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_processDirective(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Processor_evalToState___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_processDirective(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
static lean_object* _init_l_Processor_evalToState___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Processor_evalToState(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Processor_evalToState___closed__1;
x_3 = l_List_foldl___at_Processor_evalToState___spec__1(x_2, x_1);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Processor_evalToState___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Processor_evalToState___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Processor_eval___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Processor_eval___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Processor_eval___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Processor_eval___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Processor_eval___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Processor_eval___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Processor_eval(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = l_Processor_evalToState(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_num__mask;
x_5 = lean_nat_land(x_3, x_4);
x_6 = l_num__tag;
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_bool__mask;
x_9 = lean_nat_land(x_3, x_8);
x_10 = l_bool__tag;
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = l_bool__shift;
x_14 = lean_nat_shiftr(x_3, x_13);
lean_dec(x_3);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = l_Processor_eval___closed__2;
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_Processor_eval___closed__4;
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = l_num__shift;
x_20 = lean_nat_shiftr(x_3, x_19);
lean_dec(x_3);
x_21 = lean_nat_to_int(x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Asm(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Compile(uint8_t builtin, lean_object*);
lean_object* initialize_ClassCompiler_Interpret(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ClassCompiler_Process(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_Asm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_Compile(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ClassCompiler_Interpret(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Processor_evalToState___closed__1 = _init_l_Processor_evalToState___closed__1();
lean_mark_persistent(l_Processor_evalToState___closed__1);
l_Processor_eval___closed__1 = _init_l_Processor_eval___closed__1();
lean_mark_persistent(l_Processor_eval___closed__1);
l_Processor_eval___closed__2 = _init_l_Processor_eval___closed__2();
lean_mark_persistent(l_Processor_eval___closed__2);
l_Processor_eval___closed__3 = _init_l_Processor_eval___closed__3();
lean_mark_persistent(l_Processor_eval___closed__3);
l_Processor_eval___closed__4 = _init_l_Processor_eval___closed__4();
lean_mark_persistent(l_Processor_eval___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
