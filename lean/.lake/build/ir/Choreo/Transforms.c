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
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Transforms_0__Choreo_Pred_holds_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Transforms_0__Choreo_Pred_holds_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Transforms_0__Choreo_Pred_holds_match__1_splitter___redArg(lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v_h__1_34_, lean_object* v_h__2_35_, lean_object* v_h__3_36_, lean_object* v_h__4_37_, lean_object* v_h__5_38_, lean_object* v_h__6_39_, lean_object* v_h__7_40_){
_start:
{
switch(lean_obj_tag(v_x_32_))
{
case 0:
{
lean_object* v___x_41_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__6_39_);
lean_dec(v_h__5_38_);
lean_dec(v_h__4_37_);
lean_dec(v_h__3_36_);
lean_dec(v_h__2_35_);
v___x_41_ = lean_apply_1(v_h__1_34_, v_x_33_);
return v___x_41_;
}
case 1:
{
lean_object* v_places_42_; lean_object* v___x_43_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__6_39_);
lean_dec(v_h__5_38_);
lean_dec(v_h__4_37_);
lean_dec(v_h__3_36_);
lean_dec(v_h__1_34_);
v_places_42_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_places_42_);
lean_dec_ref_known(v_x_32_, 1);
v___x_43_ = lean_apply_2(v_h__2_35_, v_places_42_, v_x_33_);
return v___x_43_;
}
case 2:
{
lean_object* v_n_44_; lean_object* v_d_45_; lean_object* v___x_46_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__6_39_);
lean_dec(v_h__5_38_);
lean_dec(v_h__4_37_);
lean_dec(v_h__2_35_);
lean_dec(v_h__1_34_);
v_n_44_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_n_44_);
v_d_45_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_d_45_);
lean_dec_ref_known(v_x_32_, 2);
v___x_46_ = lean_apply_3(v_h__3_36_, v_n_44_, v_d_45_, v_x_33_);
return v___x_46_;
}
case 3:
{
lean_object* v_who_47_; lean_object* v_cx_48_; lean_object* v_cy_49_; lean_object* v_r2_50_; lean_object* v___x_51_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__6_39_);
lean_dec(v_h__5_38_);
lean_dec(v_h__3_36_);
lean_dec(v_h__2_35_);
lean_dec(v_h__1_34_);
v_who_47_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_who_47_);
v_cx_48_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_cx_48_);
v_cy_49_ = lean_ctor_get(v_x_32_, 2);
lean_inc(v_cy_49_);
v_r2_50_ = lean_ctor_get(v_x_32_, 3);
lean_inc(v_r2_50_);
lean_dec_ref_known(v_x_32_, 4);
v___x_51_ = lean_apply_5(v_h__4_37_, v_who_47_, v_cx_48_, v_cy_49_, v_r2_50_, v_x_33_);
return v___x_51_;
}
case 4:
{
lean_object* v_A_52_; lean_object* v_B_53_; lean_object* v_d_54_; lean_object* v___x_55_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__6_39_);
lean_dec(v_h__4_37_);
lean_dec(v_h__3_36_);
lean_dec(v_h__2_35_);
lean_dec(v_h__1_34_);
v_A_52_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_A_52_);
v_B_53_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_B_53_);
v_d_54_ = lean_ctor_get(v_x_32_, 2);
lean_inc(v_d_54_);
lean_dec_ref_known(v_x_32_, 3);
v___x_55_ = lean_apply_4(v_h__5_38_, v_A_52_, v_B_53_, v_d_54_, v_x_33_);
return v___x_55_;
}
case 5:
{
lean_object* v_A_56_; lean_object* v_B_57_; lean_object* v_line_58_; lean_object* v_d_59_; lean_object* v___x_60_; 
lean_dec(v_h__7_40_);
lean_dec(v_h__5_38_);
lean_dec(v_h__4_37_);
lean_dec(v_h__3_36_);
lean_dec(v_h__2_35_);
lean_dec(v_h__1_34_);
v_A_56_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_A_56_);
v_B_57_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_B_57_);
v_line_58_ = lean_ctor_get(v_x_32_, 2);
lean_inc(v_line_58_);
v_d_59_ = lean_ctor_get(v_x_32_, 3);
lean_inc(v_d_59_);
lean_dec_ref_known(v_x_32_, 4);
v___x_60_ = lean_apply_5(v_h__6_39_, v_A_56_, v_B_57_, v_line_58_, v_d_59_, v_x_33_);
return v___x_60_;
}
default: 
{
lean_object* v_p_61_; lean_object* v_q_62_; lean_object* v___x_63_; 
lean_dec(v_h__6_39_);
lean_dec(v_h__5_38_);
lean_dec(v_h__4_37_);
lean_dec(v_h__3_36_);
lean_dec(v_h__2_35_);
lean_dec(v_h__1_34_);
v_p_61_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_p_61_);
v_q_62_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_q_62_);
lean_dec_ref_known(v_x_32_, 2);
v___x_63_ = lean_apply_3(v_h__7_40_, v_p_61_, v_q_62_, v_x_33_);
return v___x_63_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Transforms_0__Choreo_Pred_holds_match__1_splitter(lean_object* v_motive_64_, lean_object* v_x_65_, lean_object* v_x_66_, lean_object* v_h__1_67_, lean_object* v_h__2_68_, lean_object* v_h__3_69_, lean_object* v_h__4_70_, lean_object* v_h__5_71_, lean_object* v_h__6_72_, lean_object* v_h__7_73_){
_start:
{
switch(lean_obj_tag(v_x_65_))
{
case 0:
{
lean_object* v___x_74_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__6_72_);
lean_dec(v_h__5_71_);
lean_dec(v_h__4_70_);
lean_dec(v_h__3_69_);
lean_dec(v_h__2_68_);
v___x_74_ = lean_apply_1(v_h__1_67_, v_x_66_);
return v___x_74_;
}
case 1:
{
lean_object* v_places_75_; lean_object* v___x_76_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__6_72_);
lean_dec(v_h__5_71_);
lean_dec(v_h__4_70_);
lean_dec(v_h__3_69_);
lean_dec(v_h__1_67_);
v_places_75_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_places_75_);
lean_dec_ref_known(v_x_65_, 1);
v___x_76_ = lean_apply_2(v_h__2_68_, v_places_75_, v_x_66_);
return v___x_76_;
}
case 2:
{
lean_object* v_n_77_; lean_object* v_d_78_; lean_object* v___x_79_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__6_72_);
lean_dec(v_h__5_71_);
lean_dec(v_h__4_70_);
lean_dec(v_h__2_68_);
lean_dec(v_h__1_67_);
v_n_77_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_n_77_);
v_d_78_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_d_78_);
lean_dec_ref_known(v_x_65_, 2);
v___x_79_ = lean_apply_3(v_h__3_69_, v_n_77_, v_d_78_, v_x_66_);
return v___x_79_;
}
case 3:
{
lean_object* v_who_80_; lean_object* v_cx_81_; lean_object* v_cy_82_; lean_object* v_r2_83_; lean_object* v___x_84_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__6_72_);
lean_dec(v_h__5_71_);
lean_dec(v_h__3_69_);
lean_dec(v_h__2_68_);
lean_dec(v_h__1_67_);
v_who_80_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_who_80_);
v_cx_81_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_cx_81_);
v_cy_82_ = lean_ctor_get(v_x_65_, 2);
lean_inc(v_cy_82_);
v_r2_83_ = lean_ctor_get(v_x_65_, 3);
lean_inc(v_r2_83_);
lean_dec_ref_known(v_x_65_, 4);
v___x_84_ = lean_apply_5(v_h__4_70_, v_who_80_, v_cx_81_, v_cy_82_, v_r2_83_, v_x_66_);
return v___x_84_;
}
case 4:
{
lean_object* v_A_85_; lean_object* v_B_86_; lean_object* v_d_87_; lean_object* v___x_88_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__6_72_);
lean_dec(v_h__4_70_);
lean_dec(v_h__3_69_);
lean_dec(v_h__2_68_);
lean_dec(v_h__1_67_);
v_A_85_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_A_85_);
v_B_86_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_B_86_);
v_d_87_ = lean_ctor_get(v_x_65_, 2);
lean_inc(v_d_87_);
lean_dec_ref_known(v_x_65_, 3);
v___x_88_ = lean_apply_4(v_h__5_71_, v_A_85_, v_B_86_, v_d_87_, v_x_66_);
return v___x_88_;
}
case 5:
{
lean_object* v_A_89_; lean_object* v_B_90_; lean_object* v_line_91_; lean_object* v_d_92_; lean_object* v___x_93_; 
lean_dec(v_h__7_73_);
lean_dec(v_h__5_71_);
lean_dec(v_h__4_70_);
lean_dec(v_h__3_69_);
lean_dec(v_h__2_68_);
lean_dec(v_h__1_67_);
v_A_89_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_A_89_);
v_B_90_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_B_90_);
v_line_91_ = lean_ctor_get(v_x_65_, 2);
lean_inc(v_line_91_);
v_d_92_ = lean_ctor_get(v_x_65_, 3);
lean_inc(v_d_92_);
lean_dec_ref_known(v_x_65_, 4);
v___x_93_ = lean_apply_5(v_h__6_72_, v_A_89_, v_B_90_, v_line_91_, v_d_92_, v_x_66_);
return v___x_93_;
}
default: 
{
lean_object* v_p_94_; lean_object* v_q_95_; lean_object* v___x_96_; 
lean_dec(v_h__6_72_);
lean_dec(v_h__5_71_);
lean_dec(v_h__4_70_);
lean_dec(v_h__3_69_);
lean_dec(v_h__2_68_);
lean_dec(v_h__1_67_);
v_p_94_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_p_94_);
v_q_95_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_q_95_);
lean_dec_ref_known(v_x_65_, 2);
v___x_96_ = lean_apply_3(v_h__7_73_, v_p_94_, v_q_95_, v_x_66_);
return v___x_96_;
}
}
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
