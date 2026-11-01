// Lean compiler output
// Module: Choreo.QuickRefute
// Imports: public import Init public meta import Init public import Choreo.Refute
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
lean_object* lp_choreo_Choreo_clearPoly(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_evI___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_evI___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_evI(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_evI___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_QuickRefute_0__Choreo_evI_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_QuickRefute_0__Choreo_evI_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_quickCollision(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_quickCollision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_choreo_Choreo_evI___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_evI(lean_object* v_x_3_, lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&lp_choreo_Choreo_evI___closed__0, &lp_choreo_Choreo_evI___closed__0_once, _init_lp_choreo_Choreo_evI___closed__0);
return v___x_6_;
}
else
{
lean_object* v_head_7_; lean_object* v_tail_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_head_7_ = lean_ctor_get(v_x_3_, 0);
v_tail_8_ = lean_ctor_get(v_x_3_, 1);
v___x_9_ = l_List_lengthTR___redArg(v_tail_8_);
v___x_10_ = l_Int_pow(v_x_4_, v___x_9_);
lean_dec(v___x_9_);
v___x_11_ = lean_int_mul(v_head_7_, v___x_10_);
lean_dec(v___x_10_);
v___x_12_ = lp_choreo_Choreo_evI(v_tail_8_, v_x_4_, v_x_5_);
v___x_13_ = lean_int_mul(v_x_5_, v___x_12_);
lean_dec(v___x_12_);
v___x_14_ = lean_int_add(v___x_11_, v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_11_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_evI___boxed(lean_object* v_x_15_, lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_choreo_Choreo_evI(v_x_15_, v_x_16_, v_x_17_);
lean_dec(v_x_17_);
lean_dec(v_x_16_);
lean_dec(v_x_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_QuickRefute_0__Choreo_evI_match__1_splitter___redArg(lean_object* v_x_19_, lean_object* v_x_20_, lean_object* v_x_21_, lean_object* v_h__1_22_, lean_object* v_h__2_23_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
lean_object* v___x_24_; 
lean_dec(v_h__2_23_);
v___x_24_ = lean_apply_2(v_h__1_22_, v_x_20_, v_x_21_);
return v___x_24_;
}
else
{
lean_object* v_head_25_; lean_object* v_tail_26_; lean_object* v___x_27_; 
lean_dec(v_h__1_22_);
v_head_25_ = lean_ctor_get(v_x_19_, 0);
lean_inc(v_head_25_);
v_tail_26_ = lean_ctor_get(v_x_19_, 1);
lean_inc(v_tail_26_);
lean_dec_ref_known(v_x_19_, 2);
v___x_27_ = lean_apply_4(v_h__2_23_, v_head_25_, v_tail_26_, v_x_20_, v_x_21_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_QuickRefute_0__Choreo_evI_match__1_splitter(lean_object* v_motive_28_, lean_object* v_x_29_, lean_object* v_x_30_, lean_object* v_x_31_, lean_object* v_h__1_32_, lean_object* v_h__2_33_){
_start:
{
if (lean_obj_tag(v_x_29_) == 0)
{
lean_object* v___x_34_; 
lean_dec(v_h__2_33_);
v___x_34_ = lean_apply_2(v_h__1_32_, v_x_30_, v_x_31_);
return v___x_34_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v___x_37_; 
lean_dec(v_h__1_32_);
v_head_35_ = lean_ctor_get(v_x_29_, 0);
lean_inc(v_head_35_);
v_tail_36_ = lean_ctor_get(v_x_29_, 1);
lean_inc(v_tail_36_);
lean_dec_ref_known(v_x_29_, 2);
v___x_37_ = lean_apply_4(v_h__2_33_, v_head_35_, v_tail_36_, v_x_30_, v_x_31_);
return v___x_37_;
}
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_quickCollision(lean_object* v_c_38_, lean_object* v_ph_39_, lean_object* v_i_40_, lean_object* v_j_41_, lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
lean_object* v_n_44_; lean_object* v_dmin_45_; uint8_t v___x_46_; 
v_n_44_ = lean_ctor_get(v_c_38_, 0);
v_dmin_45_ = lean_ctor_get(v_c_38_, 1);
v___x_46_ = lean_nat_dec_lt(v_i_40_, v_n_44_);
if (v___x_46_ == 0)
{
lean_dec(v_j_41_);
lean_dec(v_i_40_);
return v___x_46_;
}
else
{
uint8_t v___x_47_; 
v___x_47_ = lean_nat_dec_lt(v_j_41_, v_n_44_);
if (v___x_47_ == 0)
{
lean_dec(v_j_41_);
lean_dec(v_i_40_);
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
v___x_48_ = lean_nat_dec_eq(v_i_40_, v_j_41_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_obj_once(&lp_choreo_Choreo_evI___closed__0, &lp_choreo_Choreo_evI___closed__0_once, _init_lp_choreo_Choreo_evI___closed__0);
v___x_50_ = lean_int_dec_le(v___x_49_, v_a_42_);
if (v___x_50_ == 0)
{
lean_dec(v_j_41_);
lean_dec(v_i_40_);
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
v___x_51_ = lean_int_dec_le(v_a_42_, v_b_43_);
if (v___x_51_ == 0)
{
lean_dec(v_j_41_);
lean_dec(v_i_40_);
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = lean_int_dec_lt(v___x_49_, v_b_43_);
if (v___x_52_ == 0)
{
lean_dec(v_j_41_);
lean_dec(v_i_40_);
return v___x_52_;
}
else
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lp_choreo_Choreo_Phase_path(v_ph_39_, v_i_40_);
v___x_54_ = lp_choreo_Choreo_Path_wf(v___x_53_);
if (v___x_54_ == 0)
{
lean_dec_ref(v___x_53_);
lean_dec(v_j_41_);
return v___x_54_;
}
else
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = lp_choreo_Choreo_Phase_path(v_ph_39_, v_j_41_);
v___x_56_ = lp_choreo_Choreo_Path_wf(v___x_55_);
if (v___x_56_ == 0)
{
lean_dec_ref(v___x_55_);
lean_dec_ref(v___x_53_);
return v___x_56_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_57_ = lp_choreo_Choreo_clearPoly(v___x_53_, v___x_55_, v_dmin_45_);
v___x_58_ = lean_int_sub(v_b_43_, v_a_42_);
v___x_59_ = lp_choreo_Choreo_evI(v___x_57_, v___x_58_, v_a_42_);
lean_dec(v___x_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_int_dec_lt(v___x_59_, v___x_49_);
lean_dec(v___x_59_);
return v___x_60_;
}
}
}
}
}
}
else
{
uint8_t v___x_61_; 
lean_dec(v_j_41_);
lean_dec(v_i_40_);
v___x_61_ = 0;
return v___x_61_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_quickCollision___boxed(lean_object* v_c_62_, lean_object* v_ph_63_, lean_object* v_i_64_, lean_object* v_j_65_, lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = lp_choreo_Choreo_quickCollision(v_c_62_, v_ph_63_, v_i_64_, v_j_65_, v_a_66_, v_b_67_);
lean_dec(v_b_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_ph_63_);
lean_dec_ref(v_c_62_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Refute(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_QuickRefute(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Refute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
