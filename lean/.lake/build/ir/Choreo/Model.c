// Lean compiler output
// Module: Choreo.Model
// Imports: public import Init public meta import Init public import Choreo.Poly
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
lean_object* l_List_range(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_zeros(lean_object*);
lean_object* lp_choreo_Choreo_Poly_add(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_ev___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__5;
static lean_once_cell_t lp_choreo_Choreo_Path_rest___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_rest___closed__6;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_rest;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_deriv(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_grid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_grid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_line_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_line_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_circle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_circle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_free_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_free_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_Formation_slots___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_Formation_slots___closed__0 = (const lean_object*)&lp_choreo_Choreo_Formation_slots___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Formation_wellFormed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_wellFormed___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_sep_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_sep_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_bern_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_bern_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_offset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_offset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_fixed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_fixed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_path___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_speed2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_speed2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Config_durNum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Config_durNum___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durDen(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_localTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_localTime(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__0, &lp_choreo_Choreo_Path_rest___closed__0_once, _init_lp_choreo_Choreo_Path_rest___closed__0);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__1, &lp_choreo_Choreo_Path_rest___closed__1_once, _init_lp_choreo_Choreo_Path_rest___closed__1);
v___x_7_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__0, &lp_choreo_Choreo_Path_rest___closed__0_once, _init_lp_choreo_Choreo_Path_rest___closed__0);
v___x_8_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_nat_to_int(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__4(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
v___x_12_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__5(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__4, &lp_choreo_Choreo_Path_rest___closed__4_once, _init_lp_choreo_Choreo_Path_rest___closed__4);
v___x_15_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest___closed__6(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__5, &lp_choreo_Choreo_Path_rest___closed__5_once, _init_lp_choreo_Choreo_Path_rest___closed__5);
v___x_18_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__2, &lp_choreo_Choreo_Path_rest___closed__2_once, _init_lp_choreo_Choreo_Path_rest___closed__2);
v___x_19_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
lean_ctor_set(v___x_19_, 2, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_rest(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__6, &lp_choreo_Choreo_Path_rest___closed__6_once, _init_lp_choreo_Choreo_Path_rest___closed__6);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_deriv(lean_object* v_x_21_){
_start:
{
if (lean_obj_tag(v_x_21_) == 0)
{
return v_x_21_;
}
else
{
lean_object* v_tail_22_; 
v_tail_22_ = lean_ctor_get(v_x_21_, 1);
lean_inc(v_tail_22_);
if (lean_obj_tag(v_tail_22_) == 0)
{
lean_dec_ref_known(v_x_21_, 2);
return v_tail_22_;
}
else
{
lean_object* v_head_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_42_; 
v_head_23_ = lean_ctor_get(v_x_21_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v_x_21_);
if (v_isSharedCheck_42_ == 0)
{
lean_object* v_unused_43_; 
v_unused_43_ = lean_ctor_get(v_x_21_, 1);
lean_dec(v_unused_43_);
v___x_25_ = v_x_21_;
v_isShared_26_ = v_isSharedCheck_42_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_head_23_);
lean_dec(v_x_21_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_42_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v_m_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
v_m_27_ = l_List_lengthTR___redArg(v_tail_22_);
lean_inc(v_m_27_);
v___x_28_ = lean_nat_to_int(v_m_27_);
v___x_29_ = lean_int_neg(v___x_28_);
lean_dec(v___x_28_);
v___x_30_ = lean_int_mul(v___x_29_, v_head_23_);
lean_dec(v_head_23_);
lean_dec(v___x_29_);
v___x_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_sub(v_m_27_, v___x_31_);
lean_dec(v_m_27_);
v___x_33_ = lp_choreo_Choreo_Poly_zeros(v___x_32_);
lean_dec(v___x_32_);
if (v_isShared_26_ == 0)
{
lean_ctor_set(v___x_25_, 1, v___x_33_);
lean_ctor_set(v___x_25_, 0, v___x_30_);
v___x_35_ = v___x_25_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_41_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_36_ = lp_choreo_Choreo_Poly_add(v_tail_22_, v___x_35_);
v___x_37_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__0, &lp_choreo_Choreo_Path_rest___closed__0_once, _init_lp_choreo_Choreo_Path_rest___closed__0);
v___x_38_ = lp_choreo_Choreo_Poly_deriv(v_tail_22_);
v___x_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_37_);
lean_ctor_set(v___x_39_, 1, v___x_38_);
v___x_40_ = lp_choreo_Choreo_Poly_add(v___x_36_, v___x_39_);
lean_dec(v___x_36_);
return v___x_40_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorIdx(lean_object* v_x_44_){
_start:
{
switch(lean_obj_tag(v_x_44_))
{
case 0:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(0u);
return v___x_45_;
}
case 1:
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(1u);
return v___x_46_;
}
case 2:
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(2u);
return v___x_47_;
}
default: 
{
lean_object* v___x_48_; 
v___x_48_ = lean_unsigned_to_nat(3u);
return v___x_48_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorIdx___boxed(lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_choreo_Choreo_Formation_ctorIdx(v_x_49_);
lean_dec_ref(v_x_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim___redArg(lean_object* v_t_51_, lean_object* v_k_52_){
_start:
{
switch(lean_obj_tag(v_t_51_))
{
case 0:
{
lean_object* v_x_u2080_53_; lean_object* v_y_u2080_54_; lean_object* v_dx_55_; lean_object* v_dy_56_; lean_object* v_rows_57_; lean_object* v_cols_58_; lean_object* v___x_59_; 
v_x_u2080_53_ = lean_ctor_get(v_t_51_, 0);
lean_inc(v_x_u2080_53_);
v_y_u2080_54_ = lean_ctor_get(v_t_51_, 1);
lean_inc(v_y_u2080_54_);
v_dx_55_ = lean_ctor_get(v_t_51_, 2);
lean_inc(v_dx_55_);
v_dy_56_ = lean_ctor_get(v_t_51_, 3);
lean_inc(v_dy_56_);
v_rows_57_ = lean_ctor_get(v_t_51_, 4);
lean_inc(v_rows_57_);
v_cols_58_ = lean_ctor_get(v_t_51_, 5);
lean_inc(v_cols_58_);
lean_dec_ref_known(v_t_51_, 6);
v___x_59_ = lean_apply_6(v_k_52_, v_x_u2080_53_, v_y_u2080_54_, v_dx_55_, v_dy_56_, v_rows_57_, v_cols_58_);
return v___x_59_;
}
case 1:
{
lean_object* v_x_u2080_60_; lean_object* v_y_u2080_61_; lean_object* v_dx_62_; lean_object* v_dy_63_; lean_object* v_n_64_; lean_object* v___x_65_; 
v_x_u2080_60_ = lean_ctor_get(v_t_51_, 0);
lean_inc(v_x_u2080_60_);
v_y_u2080_61_ = lean_ctor_get(v_t_51_, 1);
lean_inc(v_y_u2080_61_);
v_dx_62_ = lean_ctor_get(v_t_51_, 2);
lean_inc(v_dx_62_);
v_dy_63_ = lean_ctor_get(v_t_51_, 3);
lean_inc(v_dy_63_);
v_n_64_ = lean_ctor_get(v_t_51_, 4);
lean_inc(v_n_64_);
lean_dec_ref_known(v_t_51_, 5);
v___x_65_ = lean_apply_5(v_k_52_, v_x_u2080_60_, v_y_u2080_61_, v_dx_62_, v_dy_63_, v_n_64_);
return v___x_65_;
}
case 2:
{
lean_object* v_cx_66_; lean_object* v_cy_67_; lean_object* v_r_68_; lean_object* v_pts_69_; lean_object* v___x_70_; 
v_cx_66_ = lean_ctor_get(v_t_51_, 0);
lean_inc(v_cx_66_);
v_cy_67_ = lean_ctor_get(v_t_51_, 1);
lean_inc(v_cy_67_);
v_r_68_ = lean_ctor_get(v_t_51_, 2);
lean_inc(v_r_68_);
v_pts_69_ = lean_ctor_get(v_t_51_, 3);
lean_inc(v_pts_69_);
lean_dec_ref_known(v_t_51_, 4);
v___x_70_ = lean_apply_4(v_k_52_, v_cx_66_, v_cy_67_, v_r_68_, v_pts_69_);
return v___x_70_;
}
default: 
{
lean_object* v_pts_71_; lean_object* v___x_72_; 
v_pts_71_ = lean_ctor_get(v_t_51_, 0);
lean_inc(v_pts_71_);
lean_dec_ref_known(v_t_51_, 1);
v___x_72_ = lean_apply_1(v_k_52_, v_pts_71_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim(lean_object* v_motive_73_, lean_object* v_ctorIdx_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_k_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_75_, v_k_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_ctorElim___boxed(lean_object* v_motive_79_, lean_object* v_ctorIdx_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_k_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_choreo_Choreo_Formation_ctorElim(v_motive_79_, v_ctorIdx_80_, v_t_81_, v_h_82_, v_k_83_);
lean_dec(v_ctorIdx_80_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_grid_elim___redArg(lean_object* v_t_85_, lean_object* v_grid_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_85_, v_grid_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_grid_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_grid_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_89_, v_grid_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_line_elim___redArg(lean_object* v_t_93_, lean_object* v_line_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_93_, v_line_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_line_elim(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_line_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_97_, v_line_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_circle_elim___redArg(lean_object* v_t_101_, lean_object* v_circle_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_101_, v_circle_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_circle_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_circle_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_105_, v_circle_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_free_elim___redArg(lean_object* v_t_109_, lean_object* v_free_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_109_, v_free_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_free_elim(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_free_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lp_choreo_Choreo_Formation_ctorElim___redArg(v_t_113_, v_free_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4(lean_object* v_dx_117_, lean_object* v_x_u2080_118_, lean_object* v_dy_119_, lean_object* v_y_u2080_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
if (lean_obj_tag(v_a_121_) == 0)
{
lean_object* v___x_123_; 
v___x_123_ = l_List_reverse___redArg(v_a_122_);
return v___x_123_;
}
else
{
lean_object* v_head_124_; lean_object* v_tail_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_140_; 
v_head_124_ = lean_ctor_get(v_a_121_, 0);
v_tail_125_ = lean_ctor_get(v_a_121_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_a_121_);
if (v_isSharedCheck_140_ == 0)
{
v___x_127_ = v_a_121_;
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_tail_125_);
lean_inc(v_head_124_);
lean_dec(v_a_121_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_129_ = lean_nat_to_int(v_head_124_);
v___x_130_ = lean_int_mul(v___x_129_, v_dx_117_);
v___x_131_ = lean_int_add(v_x_u2080_118_, v___x_130_);
lean_dec(v___x_130_);
v___x_132_ = lean_int_mul(v___x_129_, v_dy_119_);
lean_dec(v___x_129_);
v___x_133_ = lean_int_add(v_y_u2080_120_, v___x_132_);
lean_dec(v___x_132_);
v___x_134_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_131_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_134_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_a_122_);
lean_ctor_set(v___x_127_, 0, v___x_135_);
v___x_137_ = v___x_127_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_a_122_);
v___x_137_ = v_reuseFailAlloc_139_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
v_a_121_ = v_tail_125_;
v_a_122_ = v___x_137_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4___boxed(lean_object* v_dx_141_, lean_object* v_x_u2080_142_, lean_object* v_dy_143_, lean_object* v_y_u2080_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4(v_dx_141_, v_x_u2080_142_, v_dy_143_, v_y_u2080_144_, v_a_145_, v_a_146_);
lean_dec(v_y_u2080_144_);
lean_dec(v_dy_143_);
lean_dec(v_x_u2080_142_);
lean_dec(v_dx_141_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2(lean_object* v_dx_148_, lean_object* v_x_u2080_149_, lean_object* v_dy_150_, lean_object* v_y_u2080_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
if (lean_obj_tag(v_a_152_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = l_List_reverse___redArg(v_a_153_);
return v___x_154_;
}
else
{
lean_object* v_head_155_; lean_object* v_tail_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_171_; 
v_head_155_ = lean_ctor_get(v_a_152_, 0);
v_tail_156_ = lean_ctor_get(v_a_152_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_a_152_);
if (v_isSharedCheck_171_ == 0)
{
v___x_158_ = v_a_152_;
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_tail_156_);
lean_inc(v_head_155_);
lean_dec(v_a_152_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_160_ = lean_nat_to_int(v_head_155_);
v___x_161_ = lean_int_mul(v___x_160_, v_dx_148_);
v___x_162_ = lean_int_add(v_x_u2080_149_, v___x_161_);
lean_dec(v___x_161_);
v___x_163_ = lean_int_mul(v___x_160_, v_dy_150_);
lean_dec(v___x_160_);
v___x_164_ = lean_int_add(v_y_u2080_151_, v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_166_, 0, v___x_162_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set(v___x_166_, 2, v___x_165_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_a_153_);
lean_ctor_set(v___x_158_, 0, v___x_166_);
v___x_168_ = v___x_158_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_a_153_);
v___x_168_ = v_reuseFailAlloc_170_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; 
v___x_169_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__2_spec__4(v_dx_148_, v_x_u2080_149_, v_dy_150_, v_y_u2080_151_, v_tail_156_, v___x_168_);
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2___boxed(lean_object* v_dx_172_, lean_object* v_x_u2080_173_, lean_object* v_dy_174_, lean_object* v_y_u2080_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2(v_dx_172_, v_x_u2080_173_, v_dy_174_, v_y_u2080_175_, v_a_176_, v_a_177_);
lean_dec(v_y_u2080_175_);
lean_dec(v_dy_174_);
lean_dec(v_x_u2080_173_);
lean_dec(v_dx_172_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0(lean_object* v_dx_179_, lean_object* v_x_u2080_180_, lean_object* v_r_181_, lean_object* v_dy_182_, lean_object* v_y_u2080_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
if (lean_obj_tag(v_a_184_) == 0)
{
lean_object* v___x_186_; 
lean_dec(v_r_181_);
v___x_186_ = l_List_reverse___redArg(v_a_185_);
return v___x_186_;
}
else
{
lean_object* v_head_187_; lean_object* v_tail_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_204_; 
v_head_187_ = lean_ctor_get(v_a_184_, 0);
v_tail_188_ = lean_ctor_get(v_a_184_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_a_184_);
if (v_isSharedCheck_204_ == 0)
{
v___x_190_ = v_a_184_;
v_isShared_191_ = v_isSharedCheck_204_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_tail_188_);
lean_inc(v_head_187_);
lean_dec(v_a_184_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_204_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_192_ = lean_nat_to_int(v_head_187_);
v___x_193_ = lean_int_mul(v___x_192_, v_dx_179_);
lean_dec(v___x_192_);
v___x_194_ = lean_int_add(v_x_u2080_180_, v___x_193_);
lean_dec(v___x_193_);
lean_inc(v_r_181_);
v___x_195_ = lean_nat_to_int(v_r_181_);
v___x_196_ = lean_int_mul(v___x_195_, v_dy_182_);
lean_dec(v___x_195_);
v___x_197_ = lean_int_add(v_y_u2080_183_, v___x_196_);
lean_dec(v___x_196_);
v___x_198_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_199_, 0, v___x_194_);
lean_ctor_set(v___x_199_, 1, v___x_197_);
lean_ctor_set(v___x_199_, 2, v___x_198_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 1, v_a_185_);
lean_ctor_set(v___x_190_, 0, v___x_199_);
v___x_201_ = v___x_190_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_a_185_);
v___x_201_ = v_reuseFailAlloc_203_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
v_a_184_ = v_tail_188_;
v_a_185_ = v___x_201_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0___boxed(lean_object* v_dx_205_, lean_object* v_x_u2080_206_, lean_object* v_r_207_, lean_object* v_dy_208_, lean_object* v_y_u2080_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0(v_dx_205_, v_x_u2080_206_, v_r_207_, v_dy_208_, v_y_u2080_209_, v_a_210_, v_a_211_);
lean_dec(v_y_u2080_209_);
lean_dec(v_dy_208_);
lean_dec(v_x_u2080_206_);
lean_dec(v_dx_205_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0(lean_object* v_dx_213_, lean_object* v_x_u2080_214_, lean_object* v_r_215_, lean_object* v_dy_216_, lean_object* v_y_u2080_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
if (lean_obj_tag(v_a_218_) == 0)
{
lean_object* v___x_220_; 
lean_dec(v_r_215_);
v___x_220_ = l_List_reverse___redArg(v_a_219_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_238_; 
v_head_221_ = lean_ctor_get(v_a_218_, 0);
v_tail_222_ = lean_ctor_get(v_a_218_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_238_ == 0)
{
v___x_224_ = v_a_218_;
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_tail_222_);
lean_inc(v_head_221_);
lean_dec(v_a_218_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_226_ = lean_nat_to_int(v_head_221_);
v___x_227_ = lean_int_mul(v___x_226_, v_dx_213_);
lean_dec(v___x_226_);
v___x_228_ = lean_int_add(v_x_u2080_214_, v___x_227_);
lean_dec(v___x_227_);
lean_inc(v_r_215_);
v___x_229_ = lean_nat_to_int(v_r_215_);
v___x_230_ = lean_int_mul(v___x_229_, v_dy_216_);
lean_dec(v___x_229_);
v___x_231_ = lean_int_add(v_y_u2080_217_, v___x_230_);
lean_dec(v___x_230_);
v___x_232_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__3, &lp_choreo_Choreo_Path_rest___closed__3_once, _init_lp_choreo_Choreo_Path_rest___closed__3);
v___x_233_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_233_, 0, v___x_228_);
lean_ctor_set(v___x_233_, 1, v___x_231_);
lean_ctor_set(v___x_233_, 2, v___x_232_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v_a_219_);
lean_ctor_set(v___x_224_, 0, v___x_233_);
v___x_235_ = v___x_224_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_a_219_);
v___x_235_ = v_reuseFailAlloc_237_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_236_; 
v___x_236_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_Formation_slots_spec__0_spec__0(v_dx_213_, v_x_u2080_214_, v_r_215_, v_dy_216_, v_y_u2080_217_, v_tail_222_, v___x_235_);
return v___x_236_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0___boxed(lean_object* v_dx_239_, lean_object* v_x_u2080_240_, lean_object* v_r_241_, lean_object* v_dy_242_, lean_object* v_y_u2080_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0(v_dx_239_, v_x_u2080_240_, v_r_241_, v_dy_242_, v_y_u2080_243_, v_a_244_, v_a_245_);
lean_dec(v_y_u2080_243_);
lean_dec(v_dy_242_);
lean_dec(v_x_u2080_240_);
lean_dec(v_dx_239_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2(lean_object* v_cols_247_, lean_object* v_dx_248_, lean_object* v_x_u2080_249_, lean_object* v_dy_250_, lean_object* v_y_u2080_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
if (lean_obj_tag(v_a_252_) == 0)
{
lean_object* v___x_254_; 
lean_dec(v_cols_247_);
v___x_254_ = lean_array_to_list(v_a_253_);
return v___x_254_;
}
else
{
lean_object* v_head_255_; lean_object* v_tail_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_head_255_ = lean_ctor_get(v_a_252_, 0);
lean_inc(v_head_255_);
v_tail_256_ = lean_ctor_get(v_a_252_, 1);
lean_inc(v_tail_256_);
lean_dec_ref_known(v_a_252_, 2);
lean_inc(v_cols_247_);
v___x_257_ = l_List_range(v_cols_247_);
v___x_258_ = lean_box(0);
v___x_259_ = lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0(v_dx_248_, v_x_u2080_249_, v_head_255_, v_dy_250_, v_y_u2080_251_, v___x_257_, v___x_258_);
v___x_260_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_253_, v___x_259_);
v_a_252_ = v_tail_256_;
v_a_253_ = v___x_260_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2___boxed(lean_object* v_cols_262_, lean_object* v_dx_263_, lean_object* v_x_u2080_264_, lean_object* v_dy_265_, lean_object* v_y_u2080_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2(v_cols_262_, v_dx_263_, v_x_u2080_264_, v_dy_265_, v_y_u2080_266_, v_a_267_, v_a_268_);
lean_dec(v_y_u2080_266_);
lean_dec(v_dy_265_);
lean_dec(v_x_u2080_264_);
lean_dec(v_dx_263_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1(lean_object* v_dx_270_, lean_object* v_x_u2080_271_, lean_object* v_dy_272_, lean_object* v_y_u2080_273_, lean_object* v_cols_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
if (lean_obj_tag(v_a_275_) == 0)
{
lean_object* v___x_277_; 
lean_dec(v_cols_274_);
v___x_277_ = lean_array_to_list(v_a_276_);
return v___x_277_;
}
else
{
lean_object* v_head_278_; lean_object* v_tail_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_head_278_ = lean_ctor_get(v_a_275_, 0);
lean_inc(v_head_278_);
v_tail_279_ = lean_ctor_get(v_a_275_, 1);
lean_inc(v_tail_279_);
lean_dec_ref_known(v_a_275_, 2);
lean_inc(v_cols_274_);
v___x_280_ = l_List_range(v_cols_274_);
v___x_281_ = lean_box(0);
v___x_282_ = lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__0(v_dx_270_, v_x_u2080_271_, v_head_278_, v_dy_272_, v_y_u2080_273_, v___x_280_, v___x_281_);
v___x_283_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_276_, v___x_282_);
v___x_284_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1_spec__2(v_cols_274_, v_dx_270_, v_x_u2080_271_, v_dy_272_, v_y_u2080_273_, v_tail_279_, v___x_283_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1___boxed(lean_object* v_dx_285_, lean_object* v_x_u2080_286_, lean_object* v_dy_287_, lean_object* v_y_u2080_288_, lean_object* v_cols_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1(v_dx_285_, v_x_u2080_286_, v_dy_287_, v_y_u2080_288_, v_cols_289_, v_a_290_, v_a_291_);
lean_dec(v_y_u2080_288_);
lean_dec(v_dy_287_);
lean_dec(v_x_u2080_286_);
lean_dec(v_dx_285_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_slots(lean_object* v_x_295_){
_start:
{
switch(lean_obj_tag(v_x_295_))
{
case 0:
{
lean_object* v_x_u2080_296_; lean_object* v_y_u2080_297_; lean_object* v_dx_298_; lean_object* v_dy_299_; lean_object* v_rows_300_; lean_object* v_cols_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_x_u2080_296_ = lean_ctor_get(v_x_295_, 0);
lean_inc(v_x_u2080_296_);
v_y_u2080_297_ = lean_ctor_get(v_x_295_, 1);
lean_inc(v_y_u2080_297_);
v_dx_298_ = lean_ctor_get(v_x_295_, 2);
lean_inc(v_dx_298_);
v_dy_299_ = lean_ctor_get(v_x_295_, 3);
lean_inc(v_dy_299_);
v_rows_300_ = lean_ctor_get(v_x_295_, 4);
lean_inc(v_rows_300_);
v_cols_301_ = lean_ctor_get(v_x_295_, 5);
lean_inc(v_cols_301_);
lean_dec_ref_known(v_x_295_, 6);
v___x_302_ = l_List_range(v_rows_300_);
v___x_303_ = ((lean_object*)(lp_choreo_Choreo_Formation_slots___closed__0));
v___x_304_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Formation_slots_spec__1(v_dx_298_, v_x_u2080_296_, v_dy_299_, v_y_u2080_297_, v_cols_301_, v___x_302_, v___x_303_);
lean_dec(v_y_u2080_297_);
lean_dec(v_dy_299_);
lean_dec(v_x_u2080_296_);
lean_dec(v_dx_298_);
return v___x_304_;
}
case 1:
{
lean_object* v_x_u2080_305_; lean_object* v_y_u2080_306_; lean_object* v_dx_307_; lean_object* v_dy_308_; lean_object* v_n_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_x_u2080_305_ = lean_ctor_get(v_x_295_, 0);
lean_inc(v_x_u2080_305_);
v_y_u2080_306_ = lean_ctor_get(v_x_295_, 1);
lean_inc(v_y_u2080_306_);
v_dx_307_ = lean_ctor_get(v_x_295_, 2);
lean_inc(v_dx_307_);
v_dy_308_ = lean_ctor_get(v_x_295_, 3);
lean_inc(v_dy_308_);
v_n_309_ = lean_ctor_get(v_x_295_, 4);
lean_inc(v_n_309_);
lean_dec_ref_known(v_x_295_, 5);
v___x_310_ = l_List_range(v_n_309_);
v___x_311_ = lean_box(0);
v___x_312_ = lp_choreo_List_mapTR_loop___at___00Choreo_Formation_slots_spec__2(v_dx_307_, v_x_u2080_305_, v_dy_308_, v_y_u2080_306_, v___x_310_, v___x_311_);
lean_dec(v_y_u2080_306_);
lean_dec(v_dy_308_);
lean_dec(v_x_u2080_305_);
lean_dec(v_dx_307_);
return v___x_312_;
}
case 2:
{
lean_object* v_pts_313_; 
v_pts_313_ = lean_ctor_get(v_x_295_, 3);
lean_inc(v_pts_313_);
lean_dec_ref_known(v_x_295_, 4);
return v_pts_313_;
}
default: 
{
lean_object* v_pts_314_; 
v_pts_314_ = lean_ctor_get(v_x_295_, 0);
lean_inc(v_pts_314_);
lean_dec_ref_known(v_x_295_, 1);
return v_pts_314_;
}
}
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0(lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 0)
{
uint8_t v___x_316_; 
v___x_316_ = 1;
return v___x_316_;
}
else
{
lean_object* v_head_317_; lean_object* v_tail_318_; lean_object* v_w_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v_head_317_ = lean_ctor_get(v_x_315_, 0);
v_tail_318_ = lean_ctor_get(v_x_315_, 1);
v_w_319_ = lean_ctor_get(v_head_317_, 2);
v___x_320_ = lean_obj_once(&lp_choreo_Choreo_Path_rest___closed__0, &lp_choreo_Choreo_Path_rest___closed__0_once, _init_lp_choreo_Choreo_Path_rest___closed__0);
v___x_321_ = lean_int_dec_lt(v___x_320_, v_w_319_);
if (v___x_321_ == 0)
{
return v___x_321_;
}
else
{
v_x_315_ = v_tail_318_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0___boxed(lean_object* v_x_323_){
_start:
{
uint8_t v_res_324_; lean_object* v_r_325_; 
v_res_324_ = lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0(v_x_323_);
lean_dec(v_x_323_);
v_r_325_ = lean_box(v_res_324_);
return v_r_325_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1(lean_object* v_cx_326_, lean_object* v_cy_327_, lean_object* v_r_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
uint8_t v___x_330_; 
v___x_330_ = 1;
return v___x_330_;
}
else
{
lean_object* v_head_331_; lean_object* v_tail_332_; lean_object* v_x_333_; lean_object* v_y_334_; lean_object* v_w_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_head_331_ = lean_ctor_get(v_x_329_, 0);
v_tail_332_ = lean_ctor_get(v_x_329_, 1);
v_x_333_ = lean_ctor_get(v_head_331_, 0);
v_y_334_ = lean_ctor_get(v_head_331_, 1);
v_w_335_ = lean_ctor_get(v_head_331_, 2);
v___x_336_ = lean_int_mul(v_cx_326_, v_w_335_);
v___x_337_ = lean_int_sub(v_x_333_, v___x_336_);
lean_dec(v___x_336_);
v___x_338_ = lean_int_mul(v___x_337_, v___x_337_);
lean_dec(v___x_337_);
v___x_339_ = lean_int_mul(v_cy_327_, v_w_335_);
v___x_340_ = lean_int_sub(v_y_334_, v___x_339_);
lean_dec(v___x_339_);
v___x_341_ = lean_int_mul(v___x_340_, v___x_340_);
lean_dec(v___x_340_);
v___x_342_ = lean_int_add(v___x_338_, v___x_341_);
lean_dec(v___x_341_);
lean_dec(v___x_338_);
v___x_343_ = lean_int_mul(v_r_328_, v_r_328_);
v___x_344_ = lean_int_mul(v_w_335_, v_w_335_);
v___x_345_ = lean_int_mul(v___x_343_, v___x_344_);
lean_dec(v___x_344_);
lean_dec(v___x_343_);
v___x_346_ = lean_int_dec_eq(v___x_342_, v___x_345_);
lean_dec(v___x_345_);
lean_dec(v___x_342_);
if (v___x_346_ == 0)
{
return v___x_346_;
}
else
{
v_x_329_ = v_tail_332_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1___boxed(lean_object* v_cx_348_, lean_object* v_cy_349_, lean_object* v_r_350_, lean_object* v_x_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1(v_cx_348_, v_cy_349_, v_r_350_, v_x_351_);
lean_dec(v_x_351_);
lean_dec(v_r_350_);
lean_dec(v_cy_349_);
lean_dec(v_cx_348_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Formation_wellFormed(lean_object* v_f_354_){
_start:
{
lean_object* v___x_355_; uint8_t v___x_356_; 
lean_inc_ref(v_f_354_);
v___x_355_ = lp_choreo_Choreo_Formation_slots(v_f_354_);
v___x_356_ = lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__0(v___x_355_);
lean_dec(v___x_355_);
if (v___x_356_ == 0)
{
lean_dec_ref(v_f_354_);
return v___x_356_;
}
else
{
if (lean_obj_tag(v_f_354_) == 2)
{
lean_object* v_cx_357_; lean_object* v_cy_358_; lean_object* v_r_359_; lean_object* v_pts_360_; uint8_t v___x_361_; 
v_cx_357_ = lean_ctor_get(v_f_354_, 0);
lean_inc(v_cx_357_);
v_cy_358_ = lean_ctor_get(v_f_354_, 1);
lean_inc(v_cy_358_);
v_r_359_ = lean_ctor_get(v_f_354_, 2);
lean_inc(v_r_359_);
v_pts_360_ = lean_ctor_get(v_f_354_, 3);
lean_inc(v_pts_360_);
lean_dec_ref_known(v_f_354_, 4);
v___x_361_ = lp_choreo_List_all___at___00Choreo_Formation_wellFormed_spec__1(v_cx_357_, v_cy_358_, v_r_359_, v_pts_360_);
lean_dec(v_pts_360_);
lean_dec(v_r_359_);
lean_dec(v_cy_358_);
lean_dec(v_cx_357_);
return v___x_361_;
}
else
{
lean_dec_ref(v_f_354_);
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Formation_wellFormed___boxed(lean_object* v_f_362_){
_start:
{
uint8_t v_res_363_; lean_object* v_r_364_; 
v_res_363_ = lp_choreo_Choreo_Formation_wellFormed(v_f_362_);
v_r_364_ = lean_box(v_res_363_);
return v_r_364_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorIdx(lean_object* v_x_365_){
_start:
{
switch(lean_obj_tag(v_x_365_))
{
case 0:
{
lean_object* v___x_366_; 
v___x_366_ = lean_unsigned_to_nat(0u);
return v___x_366_;
}
case 1:
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(1u);
return v___x_367_;
}
case 2:
{
lean_object* v___x_368_; 
v___x_368_ = lean_unsigned_to_nat(2u);
return v___x_368_;
}
default: 
{
lean_object* v___x_369_; 
v___x_369_ = lean_unsigned_to_nat(3u);
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorIdx___boxed(lean_object* v_x_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = lp_choreo_Choreo_Cert_ctorIdx(v_x_370_);
lean_dec_ref(v_x_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim___redArg(lean_object* v_t_372_, lean_object* v_k_373_){
_start:
{
switch(lean_obj_tag(v_t_372_))
{
case 0:
{
uint8_t v_xAxis_374_; uint8_t v_positive_375_; lean_object* v_depth_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_xAxis_374_ = lean_ctor_get_uint8(v_t_372_, sizeof(void*)*1);
v_positive_375_ = lean_ctor_get_uint8(v_t_372_, sizeof(void*)*1 + 1);
v_depth_376_ = lean_ctor_get(v_t_372_, 0);
lean_inc(v_depth_376_);
lean_dec_ref_known(v_t_372_, 1);
v___x_377_ = lean_box(v_xAxis_374_);
v___x_378_ = lean_box(v_positive_375_);
v___x_379_ = lean_apply_3(v_k_373_, v___x_377_, v___x_378_, v_depth_376_);
return v___x_379_;
}
case 2:
{
lean_object* v_cx_380_; lean_object* v_cy_381_; lean_object* v___x_382_; 
v_cx_380_ = lean_ctor_get(v_t_372_, 0);
lean_inc(v_cx_380_);
v_cy_381_ = lean_ctor_get(v_t_372_, 1);
lean_inc(v_cy_381_);
lean_dec_ref_known(v_t_372_, 2);
v___x_382_ = lean_apply_2(v_k_373_, v_cx_380_, v_cy_381_);
return v___x_382_;
}
default: 
{
lean_object* v_depth_383_; lean_object* v___x_384_; 
v_depth_383_ = lean_ctor_get(v_t_372_, 0);
lean_inc(v_depth_383_);
lean_dec_ref(v_t_372_);
v___x_384_ = lean_apply_1(v_k_373_, v_depth_383_);
return v___x_384_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim(lean_object* v_motive_385_, lean_object* v_ctorIdx_386_, lean_object* v_t_387_, lean_object* v_h_388_, lean_object* v_k_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_387_, v_k_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_ctorElim___boxed(lean_object* v_motive_391_, lean_object* v_ctorIdx_392_, lean_object* v_t_393_, lean_object* v_h_394_, lean_object* v_k_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = lp_choreo_Choreo_Cert_ctorElim(v_motive_391_, v_ctorIdx_392_, v_t_393_, v_h_394_, v_k_395_);
lean_dec(v_ctorIdx_392_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_sep_elim___redArg(lean_object* v_t_397_, lean_object* v_sep_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_397_, v_sep_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_sep_elim(lean_object* v_motive_400_, lean_object* v_t_401_, lean_object* v_h_402_, lean_object* v_sep_403_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_401_, v_sep_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_bern_elim___redArg(lean_object* v_t_405_, lean_object* v_bern_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_405_, v_bern_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_bern_elim(lean_object* v_motive_408_, lean_object* v_t_409_, lean_object* v_h_410_, lean_object* v_bern_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_409_, v_bern_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_offset_elim___redArg(lean_object* v_t_413_, lean_object* v_offset_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_413_, v_offset_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_offset_elim(lean_object* v_motive_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_offset_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_417_, v_offset_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_fixed_elim___redArg(lean_object* v_t_421_, lean_object* v_fixed_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_421_, v_fixed_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_fixed_elim(lean_object* v_motive_424_, lean_object* v_t_425_, lean_object* v_h_426_, lean_object* v_fixed_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = lp_choreo_Choreo_Cert_ctorElim___redArg(v_t_425_, v_fixed_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_path(lean_object* v_ph_429_, lean_object* v_i_430_){
_start:
{
lean_object* v_paths_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_paths_431_ = lean_ctor_get(v_ph_429_, 2);
v___x_432_ = lp_choreo_Choreo_Path_rest;
v___x_433_ = l_List_getD___redArg(v_paths_431_, v_i_430_, v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_path___boxed(lean_object* v_ph_434_, lean_object* v_i_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = lp_choreo_Choreo_Phase_path(v_ph_434_, v_i_435_);
lean_dec_ref(v_ph_434_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x___redArg(lean_object* v_inst_437_, lean_object* v_p_438_, lean_object* v_t_439_){
_start:
{
lean_object* v_toCommRing_440_; lean_object* v_toSemiring_441_; lean_object* v_toDiv_442_; lean_object* v_X_443_; lean_object* v_W_444_; lean_object* v_toSub_445_; lean_object* v_ofNat_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_toCommRing_440_ = lean_ctor_get(v_inst_437_, 0);
v_toSemiring_441_ = lean_ctor_get(v_toCommRing_440_, 0);
v_toDiv_442_ = lean_ctor_get(v_inst_437_, 2);
lean_inc(v_toDiv_442_);
v_X_443_ = lean_ctor_get(v_p_438_, 0);
lean_inc(v_X_443_);
v_W_444_ = lean_ctor_get(v_p_438_, 2);
lean_inc(v_W_444_);
lean_dec_ref(v_p_438_);
v_toSub_445_ = lean_ctor_get(v_toCommRing_440_, 2);
v_ofNat_446_ = lean_ctor_get(v_toSemiring_441_, 3);
v___x_447_ = lean_unsigned_to_nat(1u);
lean_inc(v_ofNat_446_);
v___x_448_ = lean_apply_1(v_ofNat_446_, v___x_447_);
lean_inc(v_toSub_445_);
lean_inc_n(v_t_439_, 2);
v___x_449_ = lean_apply_2(v_toSub_445_, v___x_448_, v_t_439_);
lean_inc(v___x_449_);
lean_inc_ref(v_inst_437_);
v___x_450_ = lp_choreo_Choreo_ev___redArg(v_inst_437_, v_X_443_, v___x_449_, v_t_439_);
v___x_451_ = lp_choreo_Choreo_ev___redArg(v_inst_437_, v_W_444_, v___x_449_, v_t_439_);
v___x_452_ = lean_apply_2(v_toDiv_442_, v___x_450_, v___x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x(lean_object* v_K_453_, lean_object* v_inst_454_, lean_object* v_p_455_, lean_object* v_t_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = lp_choreo_Choreo_Path_x___redArg(v_inst_454_, v_p_455_, v_t_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y___redArg(lean_object* v_inst_458_, lean_object* v_p_459_, lean_object* v_t_460_){
_start:
{
lean_object* v_toCommRing_461_; lean_object* v_toSemiring_462_; lean_object* v_toDiv_463_; lean_object* v_Y_464_; lean_object* v_W_465_; lean_object* v_toSub_466_; lean_object* v_ofNat_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_toCommRing_461_ = lean_ctor_get(v_inst_458_, 0);
v_toSemiring_462_ = lean_ctor_get(v_toCommRing_461_, 0);
v_toDiv_463_ = lean_ctor_get(v_inst_458_, 2);
lean_inc(v_toDiv_463_);
v_Y_464_ = lean_ctor_get(v_p_459_, 1);
lean_inc(v_Y_464_);
v_W_465_ = lean_ctor_get(v_p_459_, 2);
lean_inc(v_W_465_);
lean_dec_ref(v_p_459_);
v_toSub_466_ = lean_ctor_get(v_toCommRing_461_, 2);
v_ofNat_467_ = lean_ctor_get(v_toSemiring_462_, 3);
v___x_468_ = lean_unsigned_to_nat(1u);
lean_inc(v_ofNat_467_);
v___x_469_ = lean_apply_1(v_ofNat_467_, v___x_468_);
lean_inc(v_toSub_466_);
lean_inc_n(v_t_460_, 2);
v___x_470_ = lean_apply_2(v_toSub_466_, v___x_469_, v_t_460_);
lean_inc(v___x_470_);
lean_inc_ref(v_inst_458_);
v___x_471_ = lp_choreo_Choreo_ev___redArg(v_inst_458_, v_Y_464_, v___x_470_, v_t_460_);
v___x_472_ = lp_choreo_Choreo_ev___redArg(v_inst_458_, v_W_465_, v___x_470_, v_t_460_);
v___x_473_ = lean_apply_2(v_toDiv_463_, v___x_471_, v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y(lean_object* v_K_474_, lean_object* v_inst_475_, lean_object* v_p_476_, lean_object* v_t_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lp_choreo_Choreo_Path_y___redArg(v_inst_475_, v_p_476_, v_t_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2___redArg(lean_object* v_inst_479_, lean_object* v_a_480_, lean_object* v_b_481_, lean_object* v_t_482_){
_start:
{
lean_object* v_toCommRing_483_; lean_object* v_toSemiring_484_; lean_object* v_toSub_485_; lean_object* v_toAdd_486_; lean_object* v_npow_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_toCommRing_483_ = lean_ctor_get(v_inst_479_, 0);
v_toSemiring_484_ = lean_ctor_get(v_toCommRing_483_, 0);
v_toSub_485_ = lean_ctor_get(v_toCommRing_483_, 2);
lean_inc_n(v_toSub_485_, 2);
v_toAdd_486_ = lean_ctor_get(v_toSemiring_484_, 0);
lean_inc(v_toAdd_486_);
v_npow_487_ = lean_ctor_get(v_toSemiring_484_, 5);
lean_inc_n(v_npow_487_, 2);
lean_inc_n(v_t_482_, 3);
lean_inc_ref(v_a_480_);
lean_inc_ref_n(v_inst_479_, 3);
v___x_488_ = lp_choreo_Choreo_Path_x___redArg(v_inst_479_, v_a_480_, v_t_482_);
lean_inc_ref(v_b_481_);
v___x_489_ = lp_choreo_Choreo_Path_x___redArg(v_inst_479_, v_b_481_, v_t_482_);
v___x_490_ = lean_apply_2(v_toSub_485_, v___x_488_, v___x_489_);
v___x_491_ = lean_unsigned_to_nat(2u);
v___x_492_ = lean_apply_2(v_npow_487_, v___x_490_, v___x_491_);
v___x_493_ = lp_choreo_Choreo_Path_y___redArg(v_inst_479_, v_a_480_, v_t_482_);
v___x_494_ = lp_choreo_Choreo_Path_y___redArg(v_inst_479_, v_b_481_, v_t_482_);
v___x_495_ = lean_apply_2(v_toSub_485_, v___x_493_, v___x_494_);
v___x_496_ = lean_apply_2(v_npow_487_, v___x_495_, v___x_491_);
v___x_497_ = lean_apply_2(v_toAdd_486_, v___x_492_, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2(lean_object* v_K_498_, lean_object* v_inst_499_, lean_object* v_a_500_, lean_object* v_b_501_, lean_object* v_t_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lp_choreo_Choreo_dist2___redArg(v_inst_499_, v_a_500_, v_b_501_, v_t_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vx___redArg(lean_object* v_inst_504_, lean_object* v_p_505_, lean_object* v_t_506_){
_start:
{
lean_object* v_toCommRing_507_; lean_object* v_toSemiring_508_; lean_object* v_toDiv_509_; lean_object* v_toSub_510_; lean_object* v_toMul_511_; lean_object* v_ofNat_512_; lean_object* v_npow_513_; lean_object* v_X_514_; lean_object* v_W_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_toCommRing_507_ = lean_ctor_get(v_inst_504_, 0);
v_toSemiring_508_ = lean_ctor_get(v_toCommRing_507_, 0);
v_toDiv_509_ = lean_ctor_get(v_inst_504_, 2);
lean_inc(v_toDiv_509_);
v_toSub_510_ = lean_ctor_get(v_toCommRing_507_, 2);
lean_inc_n(v_toSub_510_, 2);
v_toMul_511_ = lean_ctor_get(v_toSemiring_508_, 1);
lean_inc_n(v_toMul_511_, 2);
v_ofNat_512_ = lean_ctor_get(v_toSemiring_508_, 3);
v_npow_513_ = lean_ctor_get(v_toSemiring_508_, 5);
lean_inc(v_npow_513_);
v_X_514_ = lean_ctor_get(v_p_505_, 0);
lean_inc_n(v_X_514_, 2);
v_W_515_ = lean_ctor_get(v_p_505_, 2);
lean_inc_n(v_W_515_, 2);
lean_dec_ref(v_p_505_);
v___x_516_ = lp_choreo_Choreo_Poly_deriv(v_X_514_);
v___x_517_ = lean_unsigned_to_nat(1u);
lean_inc(v_ofNat_512_);
v___x_518_ = lean_apply_1(v_ofNat_512_, v___x_517_);
lean_inc_n(v_t_506_, 4);
v___x_519_ = lean_apply_2(v_toSub_510_, v___x_518_, v_t_506_);
lean_inc_n(v___x_519_, 3);
lean_inc_ref_n(v_inst_504_, 3);
v___x_520_ = lp_choreo_Choreo_ev___redArg(v_inst_504_, v___x_516_, v___x_519_, v_t_506_);
v___x_521_ = lp_choreo_Choreo_ev___redArg(v_inst_504_, v_W_515_, v___x_519_, v_t_506_);
lean_inc(v___x_521_);
v___x_522_ = lean_apply_2(v_toMul_511_, v___x_520_, v___x_521_);
v___x_523_ = lp_choreo_Choreo_ev___redArg(v_inst_504_, v_X_514_, v___x_519_, v_t_506_);
v___x_524_ = lp_choreo_Choreo_Poly_deriv(v_W_515_);
v___x_525_ = lp_choreo_Choreo_ev___redArg(v_inst_504_, v___x_524_, v___x_519_, v_t_506_);
v___x_526_ = lean_apply_2(v_toMul_511_, v___x_523_, v___x_525_);
v___x_527_ = lean_apply_2(v_toSub_510_, v___x_522_, v___x_526_);
v___x_528_ = lean_unsigned_to_nat(2u);
v___x_529_ = lean_apply_2(v_npow_513_, v___x_521_, v___x_528_);
v___x_530_ = lean_apply_2(v_toDiv_509_, v___x_527_, v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vx(lean_object* v_K_531_, lean_object* v_inst_532_, lean_object* v_p_533_, lean_object* v_t_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lp_choreo_Choreo_Path_vx___redArg(v_inst_532_, v_p_533_, v_t_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vy___redArg(lean_object* v_inst_536_, lean_object* v_p_537_, lean_object* v_t_538_){
_start:
{
lean_object* v_toCommRing_539_; lean_object* v_toSemiring_540_; lean_object* v_toDiv_541_; lean_object* v_toSub_542_; lean_object* v_toMul_543_; lean_object* v_ofNat_544_; lean_object* v_npow_545_; lean_object* v_Y_546_; lean_object* v_W_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_toCommRing_539_ = lean_ctor_get(v_inst_536_, 0);
v_toSemiring_540_ = lean_ctor_get(v_toCommRing_539_, 0);
v_toDiv_541_ = lean_ctor_get(v_inst_536_, 2);
lean_inc(v_toDiv_541_);
v_toSub_542_ = lean_ctor_get(v_toCommRing_539_, 2);
lean_inc_n(v_toSub_542_, 2);
v_toMul_543_ = lean_ctor_get(v_toSemiring_540_, 1);
lean_inc_n(v_toMul_543_, 2);
v_ofNat_544_ = lean_ctor_get(v_toSemiring_540_, 3);
v_npow_545_ = lean_ctor_get(v_toSemiring_540_, 5);
lean_inc(v_npow_545_);
v_Y_546_ = lean_ctor_get(v_p_537_, 1);
lean_inc_n(v_Y_546_, 2);
v_W_547_ = lean_ctor_get(v_p_537_, 2);
lean_inc_n(v_W_547_, 2);
lean_dec_ref(v_p_537_);
v___x_548_ = lp_choreo_Choreo_Poly_deriv(v_Y_546_);
v___x_549_ = lean_unsigned_to_nat(1u);
lean_inc(v_ofNat_544_);
v___x_550_ = lean_apply_1(v_ofNat_544_, v___x_549_);
lean_inc_n(v_t_538_, 4);
v___x_551_ = lean_apply_2(v_toSub_542_, v___x_550_, v_t_538_);
lean_inc_n(v___x_551_, 3);
lean_inc_ref_n(v_inst_536_, 3);
v___x_552_ = lp_choreo_Choreo_ev___redArg(v_inst_536_, v___x_548_, v___x_551_, v_t_538_);
v___x_553_ = lp_choreo_Choreo_ev___redArg(v_inst_536_, v_W_547_, v___x_551_, v_t_538_);
lean_inc(v___x_553_);
v___x_554_ = lean_apply_2(v_toMul_543_, v___x_552_, v___x_553_);
v___x_555_ = lp_choreo_Choreo_ev___redArg(v_inst_536_, v_Y_546_, v___x_551_, v_t_538_);
v___x_556_ = lp_choreo_Choreo_Poly_deriv(v_W_547_);
v___x_557_ = lp_choreo_Choreo_ev___redArg(v_inst_536_, v___x_556_, v___x_551_, v_t_538_);
v___x_558_ = lean_apply_2(v_toMul_543_, v___x_555_, v___x_557_);
v___x_559_ = lean_apply_2(v_toSub_542_, v___x_554_, v___x_558_);
v___x_560_ = lean_unsigned_to_nat(2u);
v___x_561_ = lean_apply_2(v_npow_545_, v___x_553_, v___x_560_);
v___x_562_ = lean_apply_2(v_toDiv_541_, v___x_559_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_vy(lean_object* v_K_563_, lean_object* v_inst_564_, lean_object* v_p_565_, lean_object* v_t_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = lp_choreo_Choreo_Path_vy___redArg(v_inst_564_, v_p_565_, v_t_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_speed2___redArg(lean_object* v_inst_568_, lean_object* v_p_569_, lean_object* v_t_570_){
_start:
{
lean_object* v_toCommRing_571_; lean_object* v_toSemiring_572_; lean_object* v_toAdd_573_; lean_object* v_npow_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_toCommRing_571_ = lean_ctor_get(v_inst_568_, 0);
v_toSemiring_572_ = lean_ctor_get(v_toCommRing_571_, 0);
v_toAdd_573_ = lean_ctor_get(v_toSemiring_572_, 0);
lean_inc(v_toAdd_573_);
v_npow_574_ = lean_ctor_get(v_toSemiring_572_, 5);
lean_inc_n(v_npow_574_, 2);
lean_inc(v_t_570_);
lean_inc_ref(v_p_569_);
lean_inc_ref(v_inst_568_);
v___x_575_ = lp_choreo_Choreo_Path_vx___redArg(v_inst_568_, v_p_569_, v_t_570_);
v___x_576_ = lean_unsigned_to_nat(2u);
v___x_577_ = lean_apply_2(v_npow_574_, v___x_575_, v___x_576_);
v___x_578_ = lp_choreo_Choreo_Path_vy___redArg(v_inst_568_, v_p_569_, v_t_570_);
v___x_579_ = lean_apply_2(v_npow_574_, v___x_578_, v___x_576_);
v___x_580_ = lean_apply_2(v_toAdd_573_, v___x_577_, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_speed2(lean_object* v_K_581_, lean_object* v_inst_582_, lean_object* v_p_583_, lean_object* v_t_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lp_choreo_Choreo_Path_speed2___redArg(v_inst_582_, v_p_583_, v_t_584_);
return v___x_585_;
}
}
static lean_object* _init_lp_choreo_Choreo_Config_durNum___closed__0(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_unsigned_to_nat(60u);
v___x_587_ = lean_nat_to_int(v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durNum(lean_object* v_c_588_, lean_object* v_ph_589_){
_start:
{
lean_object* v_t0_590_; lean_object* v_t1_591_; lean_object* v_bpmDen_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_t0_590_ = lean_ctor_get(v_ph_589_, 0);
v_t1_591_ = lean_ctor_get(v_ph_589_, 1);
v_bpmDen_592_ = lean_ctor_get(v_c_588_, 6);
lean_inc(v_bpmDen_592_);
lean_dec_ref(v_c_588_);
v___x_593_ = lean_nat_sub(v_t1_591_, v_t0_590_);
v___x_594_ = lean_nat_to_int(v___x_593_);
v___x_595_ = lean_obj_once(&lp_choreo_Choreo_Config_durNum___closed__0, &lp_choreo_Choreo_Config_durNum___closed__0_once, _init_lp_choreo_Choreo_Config_durNum___closed__0);
v___x_596_ = lean_int_mul(v___x_594_, v___x_595_);
lean_dec(v___x_594_);
v___x_597_ = lean_nat_to_int(v_bpmDen_592_);
v___x_598_ = lean_int_mul(v___x_596_, v___x_597_);
lean_dec(v___x_597_);
lean_dec(v___x_596_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durNum___boxed(lean_object* v_c_599_, lean_object* v_ph_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = lp_choreo_Choreo_Config_durNum(v_c_599_, v_ph_600_);
lean_dec_ref(v_ph_600_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_durDen(lean_object* v_c_602_){
_start:
{
lean_object* v_ticksPerBeat_603_; lean_object* v_bpmNum_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_ticksPerBeat_603_ = lean_ctor_get(v_c_602_, 4);
lean_inc(v_ticksPerBeat_603_);
v_bpmNum_604_ = lean_ctor_get(v_c_602_, 5);
lean_inc(v_bpmNum_604_);
lean_dec_ref(v_c_602_);
v___x_605_ = lean_nat_to_int(v_bpmNum_604_);
v___x_606_ = lean_nat_to_int(v_ticksPerBeat_603_);
v___x_607_ = lean_int_mul(v___x_605_, v___x_606_);
lean_dec(v___x_606_);
lean_dec(v___x_605_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_localTime___redArg(lean_object* v_inst_608_, lean_object* v_ph_609_, lean_object* v_T_610_){
_start:
{
lean_object* v_toCommRing_611_; lean_object* v_toDiv_612_; lean_object* v_toSub_613_; lean_object* v_intCast_614_; lean_object* v_t0_615_; lean_object* v_t1_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v_toCommRing_611_ = lean_ctor_get(v_inst_608_, 0);
lean_inc_ref(v_toCommRing_611_);
v_toDiv_612_ = lean_ctor_get(v_inst_608_, 2);
lean_inc(v_toDiv_612_);
lean_dec_ref(v_inst_608_);
v_toSub_613_ = lean_ctor_get(v_toCommRing_611_, 2);
lean_inc(v_toSub_613_);
v_intCast_614_ = lean_ctor_get(v_toCommRing_611_, 3);
lean_inc_n(v_intCast_614_, 2);
lean_dec_ref(v_toCommRing_611_);
v_t0_615_ = lean_ctor_get(v_ph_609_, 0);
lean_inc(v_t0_615_);
v_t1_616_ = lean_ctor_get(v_ph_609_, 1);
lean_inc(v_t1_616_);
lean_dec_ref(v_ph_609_);
v___x_617_ = lean_nat_to_int(v_t0_615_);
lean_inc(v___x_617_);
v___x_618_ = lean_apply_1(v_intCast_614_, v___x_617_);
v___x_619_ = lean_apply_2(v_toSub_613_, v_T_610_, v___x_618_);
v___x_620_ = lean_nat_to_int(v_t1_616_);
v___x_621_ = lean_int_sub(v___x_620_, v___x_617_);
lean_dec(v___x_617_);
lean_dec(v___x_620_);
v___x_622_ = lean_apply_1(v_intCast_614_, v___x_621_);
v___x_623_ = lean_apply_2(v_toDiv_612_, v___x_619_, v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_localTime(lean_object* v_K_624_, lean_object* v_inst_625_, lean_object* v_ph_626_, lean_object* v_T_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = lp_choreo_Choreo_Phase_localTime___redArg(v_inst_625_, v_ph_626_, v_T_627_);
return v___x_628_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Poly(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Model(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Poly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_Path_rest = _init_lp_choreo_Choreo_Path_rest();
lean_mark_persistent(lp_choreo_Choreo_Path_rest);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
