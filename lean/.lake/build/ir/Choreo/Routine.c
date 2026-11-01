// Lean compiler output
// Module: Choreo.Routine
// Imports: public import Init public meta import Init public import Choreo.Sound
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_last(lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_vNum(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Config_wf(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Rect_within(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Rect_within___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_joinPath(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_joinPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_ticks(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_joinOk_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_joinOk_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_joinOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_joinOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_joins(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_joins___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_chainFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_chainFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_phaseMeta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseMeta___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkGlobal(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkGlobal___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_chainFrom_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_chainFrom_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_joins_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_joins_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Rect_within(lean_object* v_r_1_, lean_object* v_o_2_){
_start:
{
lean_object* v_xmin_3_; lean_object* v_xmax_4_; lean_object* v_ymin_5_; lean_object* v_ymax_6_; lean_object* v_xmin_7_; lean_object* v_xmax_8_; lean_object* v_ymin_9_; lean_object* v_ymax_10_; uint8_t v___x_11_; 
v_xmin_3_ = lean_ctor_get(v_o_2_, 0);
v_xmax_4_ = lean_ctor_get(v_o_2_, 1);
v_ymin_5_ = lean_ctor_get(v_o_2_, 2);
v_ymax_6_ = lean_ctor_get(v_o_2_, 3);
v_xmin_7_ = lean_ctor_get(v_r_1_, 0);
v_xmax_8_ = lean_ctor_get(v_r_1_, 1);
v_ymin_9_ = lean_ctor_get(v_r_1_, 2);
v_ymax_10_ = lean_ctor_get(v_r_1_, 3);
v___x_11_ = lean_int_dec_le(v_xmin_3_, v_xmin_7_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = lean_int_dec_le(v_xmax_8_, v_xmax_4_);
if (v___x_12_ == 0)
{
return v___x_12_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = lean_int_dec_le(v_ymin_5_, v_ymin_9_);
if (v___x_13_ == 0)
{
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = lean_int_dec_le(v_ymax_10_, v_ymax_6_);
return v___x_14_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Rect_within___boxed(lean_object* v_r_15_, lean_object* v_o_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = lp_choreo_Choreo_Rect_within(v_r_15_, v_o_16_);
lean_dec_ref(v_o_16_);
lean_dec_ref(v_r_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_joinPath(lean_object* v_a_19_, lean_object* v_b_20_, lean_object* v_da_21_, lean_object* v_db_22_){
_start:
{
uint8_t v___y_24_; uint8_t v___x_63_; 
v___x_63_ = lp_choreo_Choreo_Path_wf(v_a_19_);
if (v___x_63_ == 0)
{
v___y_24_ = v___x_63_;
goto v___jp_23_;
}
else
{
uint8_t v___x_64_; 
v___x_64_ = lp_choreo_Choreo_Path_wf(v_b_20_);
v___y_24_ = v___x_64_;
goto v___jp_23_;
}
v___jp_23_:
{
if (v___y_24_ == 0)
{
lean_dec_ref(v_b_20_);
lean_dec_ref(v_a_19_);
return v___y_24_;
}
else
{
lean_object* v_X_25_; lean_object* v_Y_26_; lean_object* v_W_27_; lean_object* v_X_28_; lean_object* v_Y_29_; lean_object* v_W_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; uint8_t v___x_37_; 
v_X_25_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_X_25_);
v_Y_26_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_Y_26_);
v_W_27_ = lean_ctor_get(v_a_19_, 2);
lean_inc(v_W_27_);
lean_dec_ref(v_a_19_);
v_X_28_ = lean_ctor_get(v_b_20_, 0);
lean_inc(v_X_28_);
v_Y_29_ = lean_ctor_get(v_b_20_, 1);
lean_inc(v_Y_29_);
v_W_30_ = lean_ctor_get(v_b_20_, 2);
lean_inc(v_W_30_);
lean_dec_ref(v_b_20_);
v___x_31_ = lp_choreo_Choreo_Poly_last(v_X_25_);
v___x_32_ = lp_choreo_Choreo_Poly_first(v_W_30_);
v___x_33_ = lean_int_mul(v___x_31_, v___x_32_);
lean_dec(v___x_31_);
v___x_34_ = lp_choreo_Choreo_Poly_first(v_X_28_);
v___x_35_ = lp_choreo_Choreo_Poly_last(v_W_27_);
v___x_36_ = lean_int_mul(v___x_34_, v___x_35_);
lean_dec(v___x_34_);
v___x_37_ = lean_int_dec_eq(v___x_33_, v___x_36_);
lean_dec(v___x_36_);
lean_dec(v___x_33_);
if (v___x_37_ == 0)
{
lean_dec(v___x_35_);
lean_dec(v___x_32_);
lean_dec(v_W_30_);
lean_dec(v_Y_29_);
lean_dec(v_X_28_);
lean_dec(v_W_27_);
lean_dec(v_Y_26_);
lean_dec(v_X_25_);
return v___x_37_;
}
else
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_38_ = lp_choreo_Choreo_Poly_last(v_Y_26_);
v___x_39_ = lean_int_mul(v___x_38_, v___x_32_);
lean_dec(v___x_38_);
v___x_40_ = lp_choreo_Choreo_Poly_first(v_Y_29_);
v___x_41_ = lean_int_mul(v___x_40_, v___x_35_);
lean_dec(v___x_40_);
v___x_42_ = lean_int_dec_eq(v___x_39_, v___x_41_);
lean_dec(v___x_41_);
lean_dec(v___x_39_);
if (v___x_42_ == 0)
{
lean_dec(v___x_35_);
lean_dec(v___x_32_);
lean_dec(v_W_30_);
lean_dec(v_Y_29_);
lean_dec(v_X_28_);
lean_dec(v_W_27_);
lean_dec(v_Y_26_);
lean_dec(v_X_25_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
lean_inc(v_W_27_);
v___x_43_ = lp_choreo_Choreo_vNum(v_X_25_, v_W_27_);
v___x_44_ = lp_choreo_Choreo_Poly_last(v___x_43_);
lean_dec(v___x_43_);
v___x_45_ = lean_int_mul(v___x_32_, v___x_32_);
lean_dec(v___x_32_);
v___x_46_ = lean_int_mul(v___x_44_, v___x_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_int_mul(v___x_46_, v_db_22_);
lean_dec(v___x_46_);
lean_inc(v_W_30_);
v___x_48_ = lp_choreo_Choreo_vNum(v_X_28_, v_W_30_);
v___x_49_ = lp_choreo_Choreo_Poly_first(v___x_48_);
lean_dec(v___x_48_);
v___x_50_ = lean_int_mul(v___x_35_, v___x_35_);
lean_dec(v___x_35_);
v___x_51_ = lean_int_mul(v___x_49_, v___x_50_);
lean_dec(v___x_49_);
v___x_52_ = lean_int_mul(v___x_51_, v_da_21_);
lean_dec(v___x_51_);
v___x_53_ = lean_int_dec_eq(v___x_47_, v___x_52_);
lean_dec(v___x_52_);
lean_dec(v___x_47_);
if (v___x_53_ == 0)
{
lean_dec(v___x_50_);
lean_dec(v___x_45_);
lean_dec(v_W_30_);
lean_dec(v_Y_29_);
lean_dec(v_W_27_);
lean_dec(v_Y_26_);
return v___x_53_;
}
else
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_54_ = lp_choreo_Choreo_vNum(v_Y_26_, v_W_27_);
v___x_55_ = lp_choreo_Choreo_Poly_last(v___x_54_);
lean_dec(v___x_54_);
v___x_56_ = lean_int_mul(v___x_55_, v___x_45_);
lean_dec(v___x_45_);
lean_dec(v___x_55_);
v___x_57_ = lean_int_mul(v___x_56_, v_db_22_);
lean_dec(v___x_56_);
v___x_58_ = lp_choreo_Choreo_vNum(v_Y_29_, v_W_30_);
v___x_59_ = lp_choreo_Choreo_Poly_first(v___x_58_);
lean_dec(v___x_58_);
v___x_60_ = lean_int_mul(v___x_59_, v___x_50_);
lean_dec(v___x_50_);
lean_dec(v___x_59_);
v___x_61_ = lean_int_mul(v___x_60_, v_da_21_);
lean_dec(v___x_60_);
v___x_62_ = lean_int_dec_eq(v___x_57_, v___x_61_);
lean_dec(v___x_61_);
lean_dec(v___x_57_);
return v___x_62_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_joinPath___boxed(lean_object* v_a_65_, lean_object* v_b_66_, lean_object* v_da_67_, lean_object* v_db_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = lp_choreo_Choreo_joinPath(v_a_65_, v_b_66_, v_da_67_, v_db_68_);
lean_dec(v_db_68_);
lean_dec(v_da_67_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_ticks(lean_object* v_ph_71_){
_start:
{
lean_object* v_t0_72_; lean_object* v_t1_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_t0_72_ = lean_ctor_get(v_ph_71_, 0);
lean_inc(v_t0_72_);
v_t1_73_ = lean_ctor_get(v_ph_71_, 1);
lean_inc(v_t1_73_);
lean_dec_ref(v_ph_71_);
v___x_74_ = lean_nat_to_int(v_t1_73_);
v___x_75_ = lean_nat_to_int(v_t0_72_);
v___x_76_ = lean_int_sub(v___x_74_, v___x_75_);
lean_dec(v___x_75_);
lean_dec(v___x_74_);
return v___x_76_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_joinOk_spec__0(lean_object* v_p_77_, lean_object* v_q_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
uint8_t v___x_80_; 
lean_dec_ref(v_q_78_);
lean_dec_ref(v_p_77_);
v___x_80_ = 1;
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v_head_81_ = lean_ctor_get(v_x_79_, 0);
lean_inc_n(v_head_81_, 2);
v_tail_82_ = lean_ctor_get(v_x_79_, 1);
lean_inc(v_tail_82_);
lean_dec_ref_known(v_x_79_, 2);
v___x_83_ = lp_choreo_Choreo_Phase_path(v_p_77_, v_head_81_);
v___x_84_ = lp_choreo_Choreo_Phase_path(v_q_78_, v_head_81_);
lean_inc_ref(v_p_77_);
v___x_85_ = lp_choreo_Choreo_Phase_ticks(v_p_77_);
lean_inc_ref(v_q_78_);
v___x_86_ = lp_choreo_Choreo_Phase_ticks(v_q_78_);
v___x_87_ = lp_choreo_Choreo_joinPath(v___x_83_, v___x_84_, v___x_85_, v___x_86_);
lean_dec(v___x_86_);
lean_dec(v___x_85_);
if (v___x_87_ == 0)
{
lean_dec(v_tail_82_);
lean_dec_ref(v_q_78_);
lean_dec_ref(v_p_77_);
return v___x_87_;
}
else
{
v_x_79_ = v_tail_82_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_joinOk_spec__0___boxed(lean_object* v_p_89_, lean_object* v_q_90_, lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = lp_choreo_List_all___at___00Choreo_joinOk_spec__0(v_p_89_, v_q_90_, v_x_91_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_joinOk(lean_object* v_c_94_, lean_object* v_p_95_, lean_object* v_q_96_){
_start:
{
lean_object* v_t1_97_; lean_object* v_t0_98_; uint8_t v___x_99_; 
v_t1_97_ = lean_ctor_get(v_p_95_, 1);
v_t0_98_ = lean_ctor_get(v_q_96_, 0);
v___x_99_ = lean_nat_dec_eq(v_t1_97_, v_t0_98_);
if (v___x_99_ == 0)
{
lean_dec_ref(v_q_96_);
lean_dec_ref(v_p_95_);
lean_dec_ref(v_c_94_);
return v___x_99_;
}
else
{
lean_object* v_n_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v_n_100_ = lean_ctor_get(v_c_94_, 0);
lean_inc(v_n_100_);
lean_dec_ref(v_c_94_);
v___x_101_ = l_List_range(v_n_100_);
v___x_102_ = lp_choreo_List_all___at___00Choreo_joinOk_spec__0(v_p_95_, v_q_96_, v___x_101_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_joinOk___boxed(lean_object* v_c_103_, lean_object* v_p_104_, lean_object* v_q_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = lp_choreo_Choreo_joinOk(v_c_103_, v_p_104_, v_q_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_joins(lean_object* v_c_108_, lean_object* v_x_109_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
uint8_t v___x_110_; 
lean_dec_ref(v_c_108_);
v___x_110_ = 1;
return v___x_110_;
}
else
{
lean_object* v_tail_111_; 
v_tail_111_ = lean_ctor_get(v_x_109_, 1);
lean_inc(v_tail_111_);
if (lean_obj_tag(v_tail_111_) == 0)
{
uint8_t v___x_112_; 
lean_dec_ref_known(v_x_109_, 2);
lean_dec_ref(v_c_108_);
v___x_112_ = 1;
return v___x_112_;
}
else
{
lean_object* v_head_113_; lean_object* v_head_114_; uint8_t v___x_115_; 
v_head_113_ = lean_ctor_get(v_x_109_, 0);
lean_inc(v_head_113_);
lean_dec_ref_known(v_x_109_, 2);
v_head_114_ = lean_ctor_get(v_tail_111_, 0);
lean_inc(v_head_114_);
lean_inc_ref(v_c_108_);
v___x_115_ = lp_choreo_Choreo_joinOk(v_c_108_, v_head_113_, v_head_114_);
if (v___x_115_ == 0)
{
lean_dec_ref_known(v_tail_111_, 2);
lean_dec_ref(v_c_108_);
return v___x_115_;
}
else
{
v_x_109_ = v_tail_111_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_joins___boxed(lean_object* v_c_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = lp_choreo_Choreo_joins(v_c_117_, v_x_118_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_chainFrom(lean_object* v_x_121_, lean_object* v_x_122_, lean_object* v_x_123_){
_start:
{
if (lean_obj_tag(v_x_122_) == 0)
{
uint8_t v___x_124_; 
v___x_124_ = lean_nat_dec_eq(v_x_121_, v_x_123_);
return v___x_124_;
}
else
{
lean_object* v_head_125_; lean_object* v_tail_126_; lean_object* v_t0_127_; lean_object* v_t1_128_; uint8_t v___x_129_; 
v_head_125_ = lean_ctor_get(v_x_122_, 0);
v_tail_126_ = lean_ctor_get(v_x_122_, 1);
v_t0_127_ = lean_ctor_get(v_head_125_, 0);
v_t1_128_ = lean_ctor_get(v_head_125_, 1);
v___x_129_ = lean_nat_dec_eq(v_t0_127_, v_x_121_);
if (v___x_129_ == 0)
{
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
v___x_130_ = lean_nat_dec_lt(v_t0_127_, v_t1_128_);
if (v___x_130_ == 0)
{
return v___x_130_;
}
else
{
v_x_121_ = v_t1_128_;
v_x_122_ = v_tail_126_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chainFrom___boxed(lean_object* v_x_132_, lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = lp_choreo_Choreo_chainFrom(v_x_132_, v_x_133_, v_x_134_);
lean_dec(v_x_134_);
lean_dec(v_x_133_);
lean_dec(v_x_132_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_phaseMeta(lean_object* v_c_137_, lean_object* v_ph_138_){
_start:
{
lean_object* v_t0_139_; lean_object* v_t1_140_; lean_object* v_bounds_141_; lean_object* v_stage_142_; lean_object* v_ticksPerBeat_143_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v_t0_139_ = lean_ctor_get(v_ph_138_, 0);
v_t1_140_ = lean_ctor_get(v_ph_138_, 1);
v_bounds_141_ = lean_ctor_get(v_ph_138_, 3);
v_stage_142_ = lean_ctor_get(v_c_137_, 3);
v_ticksPerBeat_143_ = lean_ctor_get(v_c_137_, 4);
v___x_144_ = lean_nat_mod(v_t0_139_, v_ticksPerBeat_143_);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_nat_dec_eq(v___x_144_, v___x_145_);
lean_dec(v___x_144_);
if (v___x_146_ == 0)
{
return v___x_146_;
}
else
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_nat_mod(v_t1_140_, v_ticksPerBeat_143_);
v___x_148_ = lean_nat_dec_eq(v___x_147_, v___x_145_);
lean_dec(v___x_147_);
if (v___x_148_ == 0)
{
return v___x_148_;
}
else
{
uint8_t v___x_149_; 
v___x_149_ = lp_choreo_Choreo_Rect_within(v_bounds_141_, v_stage_142_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseMeta___boxed(lean_object* v_c_150_, lean_object* v_ph_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = lp_choreo_Choreo_phaseMeta(v_c_150_, v_ph_151_);
lean_dec_ref(v_ph_151_);
lean_dec_ref(v_c_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0(lean_object* v___x_154_, lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
uint8_t v___x_156_; 
v___x_156_ = 1;
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_tail_158_; uint8_t v___x_159_; 
v_head_157_ = lean_ctor_get(v_x_155_, 0);
v_tail_158_ = lean_ctor_get(v_x_155_, 1);
v___x_159_ = lp_choreo_Choreo_phaseMeta(v___x_154_, v_head_157_);
if (v___x_159_ == 0)
{
return v___x_159_;
}
else
{
v_x_155_ = v_tail_158_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0___boxed(lean_object* v___x_161_, lean_object* v_x_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0(v___x_161_, v_x_162_);
lean_dec(v_x_162_);
lean_dec_ref(v___x_161_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkGlobal(lean_object* v_r_165_){
_start:
{
lean_object* v_cfg_166_; lean_object* v_phases_167_; uint8_t v___y_169_; uint8_t v___x_185_; 
v_cfg_166_ = lean_ctor_get(v_r_165_, 0);
lean_inc_ref(v_cfg_166_);
v_phases_167_ = lean_ctor_get(v_r_165_, 1);
lean_inc(v_phases_167_);
lean_dec_ref(v_r_165_);
v___x_185_ = lp_choreo_Choreo_Config_wf(v_cfg_166_);
if (v___x_185_ == 0)
{
v___y_169_ = v___x_185_;
goto v___jp_168_;
}
else
{
uint8_t v___x_186_; 
v___x_186_ = l_List_isEmpty___redArg(v_phases_167_);
if (v___x_186_ == 0)
{
v___y_169_ = v___x_185_;
goto v___jp_168_;
}
else
{
uint8_t v___x_187_; 
lean_dec(v_phases_167_);
lean_dec_ref(v_cfg_166_);
v___x_187_ = 0;
return v___x_187_;
}
}
v___jp_168_:
{
if (v___y_169_ == 0)
{
lean_dec(v_phases_167_);
lean_dec_ref(v_cfg_166_);
return v___y_169_;
}
else
{
lean_object* v_ticksPerBeat_170_; lean_object* v_bpmNum_171_; lean_object* v_bpmDen_172_; lean_object* v_total_173_; lean_object* v_seconds_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_ticksPerBeat_170_ = lean_ctor_get(v_cfg_166_, 4);
lean_inc(v_ticksPerBeat_170_);
v_bpmNum_171_ = lean_ctor_get(v_cfg_166_, 5);
lean_inc(v_bpmNum_171_);
v_bpmDen_172_ = lean_ctor_get(v_cfg_166_, 6);
lean_inc(v_bpmDen_172_);
v_total_173_ = lean_ctor_get(v_cfg_166_, 7);
lean_inc(v_total_173_);
v_seconds_174_ = lean_ctor_get(v_cfg_166_, 8);
lean_inc(v_seconds_174_);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lp_choreo_Choreo_chainFrom(v___x_175_, v_phases_167_, v_total_173_);
if (v___x_176_ == 0)
{
lean_dec(v_seconds_174_);
lean_dec(v_total_173_);
lean_dec(v_bpmDen_172_);
lean_dec(v_bpmNum_171_);
lean_dec(v_ticksPerBeat_170_);
lean_dec(v_phases_167_);
lean_dec_ref(v_cfg_166_);
return v___x_176_;
}
else
{
uint8_t v___x_177_; 
lean_inc(v_phases_167_);
lean_inc_ref(v_cfg_166_);
v___x_177_ = lp_choreo_Choreo_joins(v_cfg_166_, v_phases_167_);
if (v___x_177_ == 0)
{
lean_dec(v_seconds_174_);
lean_dec(v_total_173_);
lean_dec(v_bpmDen_172_);
lean_dec(v_bpmNum_171_);
lean_dec(v_ticksPerBeat_170_);
lean_dec(v_phases_167_);
lean_dec_ref(v_cfg_166_);
return v___x_177_;
}
else
{
uint8_t v___x_178_; 
v___x_178_ = lp_choreo_List_all___at___00Choreo_Routine_checkGlobal_spec__0(v_cfg_166_, v_phases_167_);
lean_dec(v_phases_167_);
lean_dec_ref(v_cfg_166_);
if (v___x_178_ == 0)
{
lean_dec(v_seconds_174_);
lean_dec(v_total_173_);
lean_dec(v_bpmDen_172_);
lean_dec(v_bpmNum_171_);
lean_dec(v_ticksPerBeat_170_);
return v___x_178_;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_179_ = lean_unsigned_to_nat(60u);
v___x_180_ = lean_nat_mul(v_total_173_, v___x_179_);
lean_dec(v_total_173_);
v___x_181_ = lean_nat_mul(v___x_180_, v_bpmDen_172_);
lean_dec(v_bpmDen_172_);
lean_dec(v___x_180_);
v___x_182_ = lean_nat_mul(v_seconds_174_, v_bpmNum_171_);
lean_dec(v_bpmNum_171_);
lean_dec(v_seconds_174_);
v___x_183_ = lean_nat_mul(v___x_182_, v_ticksPerBeat_170_);
lean_dec(v_ticksPerBeat_170_);
lean_dec(v___x_182_);
v___x_184_ = lean_nat_dec_eq(v___x_181_, v___x_183_);
lean_dec(v___x_183_);
lean_dec(v___x_181_);
return v___x_184_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkGlobal___boxed(lean_object* v_r_188_){
_start:
{
uint8_t v_res_189_; lean_object* v_r_190_; 
v_res_189_ = lp_choreo_Choreo_Routine_checkGlobal(v_r_188_);
v_r_190_ = lean_box(v_res_189_);
return v_r_190_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_chainFrom_match__1_splitter___redArg(lean_object* v_x_191_, lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_h__1_194_, lean_object* v_h__2_195_){
_start:
{
if (lean_obj_tag(v_x_192_) == 0)
{
lean_object* v___x_196_; 
lean_dec(v_h__2_195_);
v___x_196_ = lean_apply_2(v_h__1_194_, v_x_191_, v_x_193_);
return v___x_196_;
}
else
{
lean_object* v_head_197_; lean_object* v_tail_198_; lean_object* v___x_199_; 
lean_dec(v_h__1_194_);
v_head_197_ = lean_ctor_get(v_x_192_, 0);
lean_inc(v_head_197_);
v_tail_198_ = lean_ctor_get(v_x_192_, 1);
lean_inc(v_tail_198_);
lean_dec_ref_known(v_x_192_, 2);
v___x_199_ = lean_apply_4(v_h__2_195_, v_x_191_, v_head_197_, v_tail_198_, v_x_193_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_chainFrom_match__1_splitter(lean_object* v_motive_200_, lean_object* v_x_201_, lean_object* v_x_202_, lean_object* v_x_203_, lean_object* v_h__1_204_, lean_object* v_h__2_205_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
lean_object* v___x_206_; 
lean_dec(v_h__2_205_);
v___x_206_ = lean_apply_2(v_h__1_204_, v_x_201_, v_x_203_);
return v___x_206_;
}
else
{
lean_object* v_head_207_; lean_object* v_tail_208_; lean_object* v___x_209_; 
lean_dec(v_h__1_204_);
v_head_207_ = lean_ctor_get(v_x_202_, 0);
lean_inc(v_head_207_);
v_tail_208_ = lean_ctor_get(v_x_202_, 1);
lean_inc(v_tail_208_);
lean_dec_ref_known(v_x_202_, 2);
v___x_209_ = lean_apply_4(v_h__2_205_, v_x_201_, v_head_207_, v_tail_208_, v_x_203_);
return v___x_209_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_joins_match__1_splitter___redArg(lean_object* v_x_210_, lean_object* v_h__1_211_, lean_object* v_h__2_212_, lean_object* v_h__3_213_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec(v_h__3_213_);
lean_dec(v_h__2_212_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_apply_1(v_h__1_211_, v___x_214_);
return v___x_215_;
}
else
{
lean_object* v_tail_216_; 
lean_dec(v_h__1_211_);
v_tail_216_ = lean_ctor_get(v_x_210_, 1);
if (lean_obj_tag(v_tail_216_) == 0)
{
lean_object* v_head_217_; lean_object* v___x_218_; 
lean_dec(v_h__3_213_);
v_head_217_ = lean_ctor_get(v_x_210_, 0);
lean_inc(v_head_217_);
lean_dec_ref_known(v_x_210_, 2);
v___x_218_ = lean_apply_1(v_h__2_212_, v_head_217_);
return v___x_218_;
}
else
{
lean_object* v_head_219_; lean_object* v_head_220_; lean_object* v_tail_221_; lean_object* v___x_222_; 
lean_inc_ref(v_tail_216_);
lean_dec(v_h__2_212_);
v_head_219_ = lean_ctor_get(v_x_210_, 0);
lean_inc(v_head_219_);
lean_dec_ref_known(v_x_210_, 2);
v_head_220_ = lean_ctor_get(v_tail_216_, 0);
lean_inc(v_head_220_);
v_tail_221_ = lean_ctor_get(v_tail_216_, 1);
lean_inc(v_tail_221_);
lean_dec_ref_known(v_tail_216_, 2);
v___x_222_ = lean_apply_3(v_h__3_213_, v_head_219_, v_head_220_, v_tail_221_);
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Routine_0__Choreo_joins_match__1_splitter(lean_object* v_motive_223_, lean_object* v_x_224_, lean_object* v_h__1_225_, lean_object* v_h__2_226_, lean_object* v_h__3_227_){
_start:
{
if (lean_obj_tag(v_x_224_) == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec(v_h__3_227_);
lean_dec(v_h__2_226_);
v___x_228_ = lean_box(0);
v___x_229_ = lean_apply_1(v_h__1_225_, v___x_228_);
return v___x_229_;
}
else
{
lean_object* v_tail_230_; 
lean_dec(v_h__1_225_);
v_tail_230_ = lean_ctor_get(v_x_224_, 1);
if (lean_obj_tag(v_tail_230_) == 0)
{
lean_object* v_head_231_; lean_object* v___x_232_; 
lean_dec(v_h__3_227_);
v_head_231_ = lean_ctor_get(v_x_224_, 0);
lean_inc(v_head_231_);
lean_dec_ref_known(v_x_224_, 2);
v___x_232_ = lean_apply_1(v_h__2_226_, v_head_231_);
return v___x_232_;
}
else
{
lean_object* v_head_233_; lean_object* v_head_234_; lean_object* v_tail_235_; lean_object* v___x_236_; 
lean_inc_ref(v_tail_230_);
lean_dec(v_h__2_226_);
v_head_233_ = lean_ctor_get(v_x_224_, 0);
lean_inc(v_head_233_);
lean_dec_ref_known(v_x_224_, 2);
v_head_234_ = lean_ctor_get(v_tail_230_, 0);
lean_inc(v_head_234_);
v_tail_235_ = lean_ctor_get(v_tail_230_, 1);
lean_inc(v_tail_235_);
lean_dec_ref_known(v_tail_230_, 2);
v___x_236_ = lean_apply_3(v_h__3_227_, v_head_233_, v_head_234_, v_tail_235_);
return v___x_236_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Sound(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Routine(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Sound(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
