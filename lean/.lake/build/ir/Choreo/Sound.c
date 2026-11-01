// Lean compiler output
// Module: Choreo.Sound
// Imports: public import Init public meta import Init public import Choreo.Check
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
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Cert_check_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Cert_check_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_deriv_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_deriv_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_first_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_first_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_last_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_last_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Cert_check_match__1_splitter___redArg(lean_object* v_ct_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_, lean_object* v_h__3_4_, lean_object* v_h__4_5_){
_start:
{
switch(lean_obj_tag(v_ct_1_))
{
case 0:
{
uint8_t v_xAxis_6_; uint8_t v_positive_7_; lean_object* v_depth_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
v_xAxis_6_ = lean_ctor_get_uint8(v_ct_1_, sizeof(void*)*1);
v_positive_7_ = lean_ctor_get_uint8(v_ct_1_, sizeof(void*)*1 + 1);
v_depth_8_ = lean_ctor_get(v_ct_1_, 0);
lean_inc(v_depth_8_);
lean_dec_ref_known(v_ct_1_, 1);
v___x_9_ = lean_box(v_xAxis_6_);
v___x_10_ = lean_box(v_positive_7_);
v___x_11_ = lean_apply_3(v_h__1_2_, v___x_9_, v___x_10_, v_depth_8_);
return v___x_11_;
}
case 1:
{
lean_object* v_depth_12_; lean_object* v___x_13_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__1_2_);
v_depth_12_ = lean_ctor_get(v_ct_1_, 0);
lean_inc(v_depth_12_);
lean_dec_ref_known(v_ct_1_, 1);
v___x_13_ = lean_apply_1(v_h__2_3_, v_depth_12_);
return v___x_13_;
}
case 2:
{
lean_object* v_cx_14_; lean_object* v_cy_15_; lean_object* v___x_16_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_cx_14_ = lean_ctor_get(v_ct_1_, 0);
lean_inc(v_cx_14_);
v_cy_15_ = lean_ctor_get(v_ct_1_, 1);
lean_inc(v_cy_15_);
lean_dec_ref_known(v_ct_1_, 2);
v___x_16_ = lean_apply_2(v_h__3_4_, v_cx_14_, v_cy_15_);
return v___x_16_;
}
default: 
{
lean_object* v_num_17_; lean_object* v___x_18_; 
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_num_17_ = lean_ctor_get(v_ct_1_, 0);
lean_inc(v_num_17_);
lean_dec_ref_known(v_ct_1_, 1);
v___x_18_ = lean_apply_1(v_h__4_5_, v_num_17_);
return v___x_18_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Cert_check_match__1_splitter(lean_object* v_motive_19_, lean_object* v_ct_20_, lean_object* v_h__1_21_, lean_object* v_h__2_22_, lean_object* v_h__3_23_, lean_object* v_h__4_24_){
_start:
{
switch(lean_obj_tag(v_ct_20_))
{
case 0:
{
uint8_t v_xAxis_25_; uint8_t v_positive_26_; lean_object* v_depth_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
lean_dec(v_h__4_24_);
lean_dec(v_h__3_23_);
lean_dec(v_h__2_22_);
v_xAxis_25_ = lean_ctor_get_uint8(v_ct_20_, sizeof(void*)*1);
v_positive_26_ = lean_ctor_get_uint8(v_ct_20_, sizeof(void*)*1 + 1);
v_depth_27_ = lean_ctor_get(v_ct_20_, 0);
lean_inc(v_depth_27_);
lean_dec_ref_known(v_ct_20_, 1);
v___x_28_ = lean_box(v_xAxis_25_);
v___x_29_ = lean_box(v_positive_26_);
v___x_30_ = lean_apply_3(v_h__1_21_, v___x_28_, v___x_29_, v_depth_27_);
return v___x_30_;
}
case 1:
{
lean_object* v_depth_31_; lean_object* v___x_32_; 
lean_dec(v_h__4_24_);
lean_dec(v_h__3_23_);
lean_dec(v_h__1_21_);
v_depth_31_ = lean_ctor_get(v_ct_20_, 0);
lean_inc(v_depth_31_);
lean_dec_ref_known(v_ct_20_, 1);
v___x_32_ = lean_apply_1(v_h__2_22_, v_depth_31_);
return v___x_32_;
}
case 2:
{
lean_object* v_cx_33_; lean_object* v_cy_34_; lean_object* v___x_35_; 
lean_dec(v_h__4_24_);
lean_dec(v_h__2_22_);
lean_dec(v_h__1_21_);
v_cx_33_ = lean_ctor_get(v_ct_20_, 0);
lean_inc(v_cx_33_);
v_cy_34_ = lean_ctor_get(v_ct_20_, 1);
lean_inc(v_cy_34_);
lean_dec_ref_known(v_ct_20_, 2);
v___x_35_ = lean_apply_2(v_h__3_23_, v_cx_33_, v_cy_34_);
return v___x_35_;
}
default: 
{
lean_object* v_num_36_; lean_object* v___x_37_; 
lean_dec(v_h__3_23_);
lean_dec(v_h__2_22_);
lean_dec(v_h__1_21_);
v_num_36_ = lean_ctor_get(v_ct_20_, 0);
lean_inc(v_num_36_);
lean_dec_ref_known(v_ct_20_, 1);
v___x_37_ = lean_apply_1(v_h__4_24_, v_num_36_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_deriv_match__1_splitter___redArg(lean_object* v_x_38_, lean_object* v_h__1_39_, lean_object* v_h__2_40_, lean_object* v_h__3_41_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec(v_h__3_41_);
lean_dec(v_h__2_40_);
v___x_42_ = lean_box(0);
v___x_43_ = lean_apply_1(v_h__1_39_, v___x_42_);
return v___x_43_;
}
else
{
lean_object* v_tail_44_; 
lean_dec(v_h__1_39_);
v_tail_44_ = lean_ctor_get(v_x_38_, 1);
if (lean_obj_tag(v_tail_44_) == 0)
{
lean_object* v_head_45_; lean_object* v___x_46_; 
lean_dec(v_h__3_41_);
v_head_45_ = lean_ctor_get(v_x_38_, 0);
lean_inc(v_head_45_);
lean_dec_ref_known(v_x_38_, 2);
v___x_46_ = lean_apply_1(v_h__2_40_, v_head_45_);
return v___x_46_;
}
else
{
lean_object* v_head_47_; lean_object* v_head_48_; lean_object* v_tail_49_; lean_object* v___x_50_; 
lean_inc_ref(v_tail_44_);
lean_dec(v_h__2_40_);
v_head_47_ = lean_ctor_get(v_x_38_, 0);
lean_inc(v_head_47_);
lean_dec_ref_known(v_x_38_, 2);
v_head_48_ = lean_ctor_get(v_tail_44_, 0);
lean_inc(v_head_48_);
v_tail_49_ = lean_ctor_get(v_tail_44_, 1);
lean_inc(v_tail_49_);
lean_dec_ref_known(v_tail_44_, 2);
v___x_50_ = lean_apply_3(v_h__3_41_, v_head_47_, v_head_48_, v_tail_49_);
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_deriv_match__1_splitter(lean_object* v_motive_51_, lean_object* v_x_52_, lean_object* v_h__1_53_, lean_object* v_h__2_54_, lean_object* v_h__3_55_){
_start:
{
if (lean_obj_tag(v_x_52_) == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; 
lean_dec(v_h__3_55_);
lean_dec(v_h__2_54_);
v___x_56_ = lean_box(0);
v___x_57_ = lean_apply_1(v_h__1_53_, v___x_56_);
return v___x_57_;
}
else
{
lean_object* v_tail_58_; 
lean_dec(v_h__1_53_);
v_tail_58_ = lean_ctor_get(v_x_52_, 1);
if (lean_obj_tag(v_tail_58_) == 0)
{
lean_object* v_head_59_; lean_object* v___x_60_; 
lean_dec(v_h__3_55_);
v_head_59_ = lean_ctor_get(v_x_52_, 0);
lean_inc(v_head_59_);
lean_dec_ref_known(v_x_52_, 2);
v___x_60_ = lean_apply_1(v_h__2_54_, v_head_59_);
return v___x_60_;
}
else
{
lean_object* v_head_61_; lean_object* v_head_62_; lean_object* v_tail_63_; lean_object* v___x_64_; 
lean_inc_ref(v_tail_58_);
lean_dec(v_h__2_54_);
v_head_61_ = lean_ctor_get(v_x_52_, 0);
lean_inc(v_head_61_);
lean_dec_ref_known(v_x_52_, 2);
v_head_62_ = lean_ctor_get(v_tail_58_, 0);
lean_inc(v_head_62_);
v_tail_63_ = lean_ctor_get(v_tail_58_, 1);
lean_inc(v_tail_63_);
lean_dec_ref_known(v_tail_58_, 2);
v___x_64_ = lean_apply_3(v_h__3_55_, v_head_61_, v_head_62_, v_tail_63_);
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_first_match__1_splitter___redArg(lean_object* v_x_65_, lean_object* v_h__1_66_, lean_object* v_h__2_67_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_h__2_67_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_apply_1(v_h__1_66_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v___x_72_; 
lean_dec(v_h__1_66_);
v_head_70_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_head_70_);
v_tail_71_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_tail_71_);
lean_dec_ref_known(v_x_65_, 2);
v___x_72_ = lean_apply_2(v_h__2_67_, v_head_70_, v_tail_71_);
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_first_match__1_splitter(lean_object* v_motive_73_, lean_object* v_x_74_, lean_object* v_h__1_75_, lean_object* v_h__2_76_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
lean_dec(v_h__2_76_);
v___x_77_ = lean_box(0);
v___x_78_ = lean_apply_1(v_h__1_75_, v___x_77_);
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_81_; 
lean_dec(v_h__1_75_);
v_head_79_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_head_79_);
v_tail_80_ = lean_ctor_get(v_x_74_, 1);
lean_inc(v_tail_80_);
lean_dec_ref_known(v_x_74_, 2);
v___x_81_ = lean_apply_2(v_h__2_76_, v_head_79_, v_tail_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_last_match__1_splitter___redArg(lean_object* v_x_82_, lean_object* v_h__1_83_, lean_object* v_h__2_84_, lean_object* v_h__3_85_){
_start:
{
if (lean_obj_tag(v_x_82_) == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_h__3_85_);
lean_dec(v_h__2_84_);
v___x_86_ = lean_box(0);
v___x_87_ = lean_apply_1(v_h__1_83_, v___x_86_);
return v___x_87_;
}
else
{
lean_object* v_tail_88_; 
lean_dec(v_h__1_83_);
v_tail_88_ = lean_ctor_get(v_x_82_, 1);
if (lean_obj_tag(v_tail_88_) == 0)
{
lean_object* v_head_89_; lean_object* v___x_90_; 
lean_dec(v_h__3_85_);
v_head_89_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_head_89_);
lean_dec_ref_known(v_x_82_, 2);
v___x_90_ = lean_apply_1(v_h__2_84_, v_head_89_);
return v___x_90_;
}
else
{
lean_object* v_head_91_; lean_object* v_head_92_; lean_object* v_tail_93_; lean_object* v___x_94_; 
lean_inc_ref(v_tail_88_);
lean_dec(v_h__2_84_);
v_head_91_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_head_91_);
lean_dec_ref_known(v_x_82_, 2);
v_head_92_ = lean_ctor_get(v_tail_88_, 0);
lean_inc(v_head_92_);
v_tail_93_ = lean_ctor_get(v_tail_88_, 1);
lean_inc(v_tail_93_);
lean_dec_ref_known(v_tail_88_, 2);
v___x_94_ = lean_apply_3(v_h__3_85_, v_head_91_, v_head_92_, v_tail_93_);
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Sound_0__Choreo_Poly_last_match__1_splitter(lean_object* v_motive_95_, lean_object* v_x_96_, lean_object* v_h__1_97_, lean_object* v_h__2_98_, lean_object* v_h__3_99_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v_h__3_99_);
lean_dec(v_h__2_98_);
v___x_100_ = lean_box(0);
v___x_101_ = lean_apply_1(v_h__1_97_, v___x_100_);
return v___x_101_;
}
else
{
lean_object* v_tail_102_; 
lean_dec(v_h__1_97_);
v_tail_102_ = lean_ctor_get(v_x_96_, 1);
if (lean_obj_tag(v_tail_102_) == 0)
{
lean_object* v_head_103_; lean_object* v___x_104_; 
lean_dec(v_h__3_99_);
v_head_103_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_head_103_);
lean_dec_ref_known(v_x_96_, 2);
v___x_104_ = lean_apply_1(v_h__2_98_, v_head_103_);
return v___x_104_;
}
else
{
lean_object* v_head_105_; lean_object* v_head_106_; lean_object* v_tail_107_; lean_object* v___x_108_; 
lean_inc_ref(v_tail_102_);
lean_dec(v_h__2_98_);
v_head_105_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_head_105_);
lean_dec_ref_known(v_x_96_, 2);
v_head_106_ = lean_ctor_get(v_tail_102_, 0);
lean_inc(v_head_106_);
v_tail_107_ = lean_ctor_get(v_tail_102_, 1);
lean_inc(v_tail_107_);
lean_dec_ref_known(v_tail_102_, 2);
v___x_108_ = lean_apply_3(v_h__3_99_, v_head_105_, v_head_106_, v_tail_107_);
return v___x_108_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Check(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Sound(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
