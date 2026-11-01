// Lean compiler output
// Module: Choreo.Transforms
// Imports: public import Init public meta import Init public import Choreo.Language
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
lean_object* lp_choreo_Choreo_Pt_quarter(lean_object*, lean_object*, uint8_t);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarterTurn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarterTurn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_scaleAbout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_scaleAbout___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarterTurn(lean_object* v_c_1_, lean_object* v_p_2_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_3_ = 1;
v___x_4_ = lp_choreo_Choreo_Pt_quarter(v_c_1_, v_p_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarterTurn___boxed(lean_object* v_c_5_, lean_object* v_p_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lp_choreo_Choreo_Pt_quarterTurn(v_c_5_, v_p_6_);
lean_dec_ref(v_p_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_scaleAbout(lean_object* v_c_8_, lean_object* v_k_9_, lean_object* v_p_10_){
_start:
{
lean_object* v_x_11_; lean_object* v_y_12_; lean_object* v_x_13_; lean_object* v_y_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_27_; 
v_x_11_ = lean_ctor_get(v_c_8_, 0);
v_y_12_ = lean_ctor_get(v_c_8_, 1);
v_x_13_ = lean_ctor_get(v_p_10_, 0);
v_y_14_ = lean_ctor_get(v_p_10_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v_p_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_16_ = v_p_10_;
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_y_14_);
lean_inc(v_x_13_);
lean_dec(v_p_10_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_18_ = lean_int_sub(v_x_13_, v_x_11_);
lean_dec(v_x_13_);
v___x_19_ = lean_int_mul(v_k_9_, v___x_18_);
lean_dec(v___x_18_);
v___x_20_ = lean_int_add(v_x_11_, v___x_19_);
lean_dec(v___x_19_);
v___x_21_ = lean_int_sub(v_y_14_, v_y_12_);
lean_dec(v_y_14_);
v___x_22_ = lean_int_mul(v_k_9_, v___x_21_);
lean_dec(v___x_21_);
v___x_23_ = lean_int_add(v_y_12_, v___x_22_);
lean_dec(v___x_22_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 1, v___x_23_);
lean_ctor_set(v___x_16_, 0, v___x_20_);
v___x_25_ = v___x_16_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_20_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_scaleAbout___boxed(lean_object* v_c_28_, lean_object* v_k_29_, lean_object* v_p_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = lp_choreo_Choreo_Pt_scaleAbout(v_c_28_, v_k_29_, v_p_30_);
lean_dec(v_k_29_);
lean_dec_ref(v_c_28_);
return v_res_31_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Language(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Transforms(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Language(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
