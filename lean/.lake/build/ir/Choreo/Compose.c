// Lean compiler output
// Module: Choreo.Compose
// Imports: public import Init public meta import Init public import Choreo.Intent
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_joins(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_chainFrom(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Rect_within(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Config_wf(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkMovement(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkMovement___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkMusic(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkMusic___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_count(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_count___boxed(lean_object*);
static const lean_array_object lp_choreo_Choreo_Transition_segment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_Transition_segment___closed__0 = (const lean_object*)&lp_choreo_Choreo_Transition_segment___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_segment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_segment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_startsAtSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_startsAtSlot___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0;
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1;
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2;
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Transition_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_check___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Compose_0__Choreo_Transition_check_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Compose_0__Choreo_Transition_check_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0(lean_object* v_r_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_cfg_5_; lean_object* v_tail_6_; lean_object* v_bounds_7_; lean_object* v_stage_8_; uint8_t v___x_9_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_cfg_5_ = lean_ctor_get(v_r_1_, 0);
v_tail_6_ = lean_ctor_get(v_x_2_, 1);
v_bounds_7_ = lean_ctor_get(v_head_4_, 3);
v_stage_8_ = lean_ctor_get(v_cfg_5_, 3);
v___x_9_ = lp_choreo_Choreo_Rect_within(v_bounds_7_, v_stage_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
v_x_2_ = v_tail_6_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0___boxed(lean_object* v_r_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0(v_r_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec_ref(v_r_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkMovement(lean_object* v_r_15_){
_start:
{
lean_object* v_cfg_16_; lean_object* v_phases_17_; uint8_t v___y_19_; uint8_t v___x_25_; 
v_cfg_16_ = lean_ctor_get(v_r_15_, 0);
v_phases_17_ = lean_ctor_get(v_r_15_, 1);
lean_inc(v_phases_17_);
v___x_25_ = lp_choreo_Choreo_Config_wf(v_cfg_16_);
if (v___x_25_ == 0)
{
v___y_19_ = v___x_25_;
goto v___jp_18_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = l_List_isEmpty___redArg(v_phases_17_);
if (v___x_26_ == 0)
{
v___y_19_ = v___x_25_;
goto v___jp_18_;
}
else
{
uint8_t v___x_27_; 
lean_dec(v_phases_17_);
lean_dec_ref(v_r_15_);
v___x_27_ = 0;
return v___x_27_;
}
}
v___jp_18_:
{
if (v___y_19_ == 0)
{
lean_dec(v_phases_17_);
lean_dec_ref(v_r_15_);
return v___y_19_;
}
else
{
lean_object* v_total_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_total_20_ = lean_ctor_get(v_cfg_16_, 7);
v___x_21_ = lean_unsigned_to_nat(0u);
v___x_22_ = lp_choreo_Choreo_chainFrom(v___x_21_, v_phases_17_, v_total_20_);
if (v___x_22_ == 0)
{
lean_dec(v_phases_17_);
lean_dec_ref(v_r_15_);
return v___x_22_;
}
else
{
uint8_t v___x_23_; 
lean_inc(v_phases_17_);
lean_inc_ref(v_cfg_16_);
v___x_23_ = lp_choreo_Choreo_joins(v_cfg_16_, v_phases_17_);
if (v___x_23_ == 0)
{
lean_dec(v_phases_17_);
lean_dec_ref(v_r_15_);
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = lp_choreo_List_all___at___00Choreo_Routine_checkMovement_spec__0(v_r_15_, v_phases_17_);
lean_dec(v_phases_17_);
lean_dec_ref(v_r_15_);
return v___x_24_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkMovement___boxed(lean_object* v_r_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = lp_choreo_Choreo_Routine_checkMovement(v_r_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0(lean_object* v_r_31_, lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 1;
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_cfg_35_; lean_object* v_tail_36_; lean_object* v_t0_37_; lean_object* v_t1_38_; lean_object* v_ticksPerBeat_39_; lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v_head_34_ = lean_ctor_get(v_x_32_, 0);
v_cfg_35_ = lean_ctor_get(v_r_31_, 0);
v_tail_36_ = lean_ctor_get(v_x_32_, 1);
v_t0_37_ = lean_ctor_get(v_head_34_, 0);
v_t1_38_ = lean_ctor_get(v_head_34_, 1);
v_ticksPerBeat_39_ = lean_ctor_get(v_cfg_35_, 4);
v___x_40_ = lean_nat_mod(v_t0_37_, v_ticksPerBeat_39_);
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_nat_dec_eq(v___x_40_, v___x_41_);
lean_dec(v___x_40_);
if (v___x_42_ == 0)
{
return v___x_42_;
}
else
{
lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_43_ = lean_nat_mod(v_t1_38_, v_ticksPerBeat_39_);
v___x_44_ = lean_nat_dec_eq(v___x_43_, v___x_41_);
lean_dec(v___x_43_);
if (v___x_44_ == 0)
{
return v___x_44_;
}
else
{
v_x_32_ = v_tail_36_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0___boxed(lean_object* v_r_46_, lean_object* v_x_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0(v_r_46_, v_x_47_);
lean_dec(v_x_47_);
lean_dec_ref(v_r_46_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Routine_checkMusic(lean_object* v_r_50_){
_start:
{
lean_object* v_cfg_51_; lean_object* v_phases_52_; uint8_t v___x_53_; 
v_cfg_51_ = lean_ctor_get(v_r_50_, 0);
v_phases_52_ = lean_ctor_get(v_r_50_, 1);
v___x_53_ = lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0(v_r_50_, v_phases_52_);
if (v___x_53_ == 0)
{
return v___x_53_;
}
else
{
lean_object* v_ticksPerBeat_54_; lean_object* v_bpmNum_55_; lean_object* v_bpmDen_56_; lean_object* v_total_57_; lean_object* v_seconds_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; 
v_ticksPerBeat_54_ = lean_ctor_get(v_cfg_51_, 4);
v_bpmNum_55_ = lean_ctor_get(v_cfg_51_, 5);
v_bpmDen_56_ = lean_ctor_get(v_cfg_51_, 6);
v_total_57_ = lean_ctor_get(v_cfg_51_, 7);
v_seconds_58_ = lean_ctor_get(v_cfg_51_, 8);
v___x_59_ = lean_unsigned_to_nat(60u);
v___x_60_ = lean_nat_mul(v_total_57_, v___x_59_);
v___x_61_ = lean_nat_mul(v___x_60_, v_bpmDen_56_);
lean_dec(v___x_60_);
v___x_62_ = lean_nat_mul(v_seconds_58_, v_bpmNum_55_);
v___x_63_ = lean_nat_mul(v___x_62_, v_ticksPerBeat_54_);
lean_dec(v___x_62_);
v___x_64_ = lean_nat_dec_eq(v___x_61_, v___x_63_);
lean_dec(v___x_63_);
lean_dec(v___x_61_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_checkMusic___boxed(lean_object* v_r_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = lp_choreo_Choreo_Routine_checkMusic(v_r_65_);
lean_dec_ref(v_r_65_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_count(lean_object* v_tr_68_){
_start:
{
lean_object* v_first_69_; lean_object* v_last_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_first_69_ = lean_ctor_get(v_tr_68_, 0);
v_last_70_ = lean_ctor_get(v_tr_68_, 1);
v___x_71_ = lean_unsigned_to_nat(1u);
v___x_72_ = lean_nat_add(v_last_70_, v___x_71_);
v___x_73_ = lean_nat_sub(v___x_72_, v_first_69_);
lean_dec(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_count___boxed(lean_object* v_tr_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_choreo_Choreo_Transition_count(v_tr_74_);
lean_dec_ref(v_tr_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_segment(lean_object* v_r_78_, lean_object* v_tr_79_){
_start:
{
lean_object* v_first_80_; lean_object* v_phases_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_first_80_ = lean_ctor_get(v_tr_79_, 0);
lean_inc(v_first_80_);
v_phases_81_ = lean_ctor_get(v_r_78_, 1);
v___x_82_ = lp_choreo_Choreo_Transition_count(v_tr_79_);
lean_dec_ref(v_tr_79_);
v___x_83_ = l_List_drop___redArg(v_first_80_, v_phases_81_);
v___x_84_ = ((lean_object*)(lp_choreo_Choreo_Transition_segment___closed__0));
lean_inc(v___x_83_);
v___x_85_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_83_, v___x_83_, v___x_82_, v___x_84_);
lean_dec(v___x_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_segment___boxed(lean_object* v_r_86_, lean_object* v_tr_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_choreo_Choreo_Transition_segment(v_r_86_, v_tr_87_);
lean_dec_ref(v_r_86_);
return v_res_88_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_startsAtSlot(lean_object* v_p_89_, lean_object* v_s_90_){
_start:
{
lean_object* v_X_91_; lean_object* v_Y_92_; lean_object* v_W_93_; lean_object* v_x_94_; lean_object* v_y_95_; lean_object* v_w_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_X_91_ = lean_ctor_get(v_p_89_, 0);
v_Y_92_ = lean_ctor_get(v_p_89_, 1);
v_W_93_ = lean_ctor_get(v_p_89_, 2);
v_x_94_ = lean_ctor_get(v_s_90_, 0);
v_y_95_ = lean_ctor_get(v_s_90_, 1);
v_w_96_ = lean_ctor_get(v_s_90_, 2);
v___x_97_ = lp_choreo_Choreo_Poly_first(v_X_91_);
v___x_98_ = lean_int_mul(v___x_97_, v_w_96_);
lean_dec(v___x_97_);
v___x_99_ = lp_choreo_Choreo_Poly_first(v_W_93_);
v___x_100_ = lean_int_mul(v_x_94_, v___x_99_);
v___x_101_ = lean_int_dec_eq(v___x_98_, v___x_100_);
lean_dec(v___x_100_);
lean_dec(v___x_98_);
if (v___x_101_ == 0)
{
lean_dec(v___x_99_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_102_ = lp_choreo_Choreo_Poly_first(v_Y_92_);
v___x_103_ = lean_int_mul(v___x_102_, v_w_96_);
lean_dec(v___x_102_);
v___x_104_ = lean_int_mul(v_y_95_, v___x_99_);
lean_dec(v___x_99_);
v___x_105_ = lean_int_dec_eq(v___x_103_, v___x_104_);
lean_dec(v___x_104_);
lean_dec(v___x_103_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_startsAtSlot___boxed(lean_object* v_p_106_, lean_object* v_s_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = lp_choreo_Choreo_Path_startsAtSlot(v_p_106_, v_s_107_);
lean_dec_ref(v_s_107_);
lean_dec_ref(v_p_106_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_nat_to_int(v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_to_int(v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__1);
v___x_115_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0);
v___x_116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
lean_ctor_set(v___x_116_, 2, v___x_114_);
return v___x_116_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__1(lean_object* v_val_117_, lean_object* v_tr_118_, lean_object* v_x_119_){
_start:
{
if (lean_obj_tag(v_x_119_) == 0)
{
uint8_t v___x_120_; 
v___x_120_ = 1;
return v___x_120_;
}
else
{
lean_object* v_head_121_; lean_object* v_tail_122_; uint8_t v___y_124_; lean_object* v___x_131_; uint8_t v___x_132_; 
v_head_121_ = lean_ctor_get(v_x_119_, 0);
lean_inc_n(v_head_121_, 2);
v_tail_122_ = lean_ctor_get(v_x_119_, 1);
lean_inc(v_tail_122_);
lean_dec_ref_known(v_x_119_, 2);
v___x_131_ = lp_choreo_Choreo_Phase_path(v_val_117_, v_head_121_);
v___x_132_ = lp_choreo_Choreo_Path_wf(v___x_131_);
lean_dec_ref(v___x_131_);
if (v___x_132_ == 0)
{
v___y_124_ = v___x_132_;
goto v___jp_123_;
}
else
{
lean_object* v_finish_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_w_137_; uint8_t v___x_138_; 
v_finish_133_ = lean_ctor_get(v_tr_118_, 3);
v___x_134_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0);
v___x_135_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2);
lean_inc(v_head_121_);
v___x_136_ = l_List_getD___redArg(v_finish_133_, v_head_121_, v___x_135_);
v_w_137_ = lean_ctor_get(v___x_136_, 2);
lean_inc(v_w_137_);
lean_dec(v___x_136_);
v___x_138_ = lean_int_dec_lt(v___x_134_, v_w_137_);
lean_dec(v_w_137_);
v___y_124_ = v___x_138_;
goto v___jp_123_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
lean_dec(v_tail_122_);
lean_dec(v_head_121_);
return v___y_124_;
}
else
{
lean_object* v_finish_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_finish_125_ = lean_ctor_get(v_tr_118_, 3);
lean_inc(v_head_121_);
v___x_126_ = lp_choreo_Choreo_Phase_path(v_val_117_, v_head_121_);
v___x_127_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2);
v___x_128_ = l_List_getD___redArg(v_finish_125_, v_head_121_, v___x_127_);
v___x_129_ = lp_choreo_Choreo_Path_reachesSlot(v___x_126_, v___x_128_);
lean_dec(v___x_128_);
lean_dec_ref(v___x_126_);
if (v___x_129_ == 0)
{
lean_dec(v_tail_122_);
return v___x_129_;
}
else
{
v_x_119_ = v_tail_122_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___boxed(lean_object* v_val_139_, lean_object* v_tr_140_, lean_object* v_x_141_){
_start:
{
uint8_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = lp_choreo_List_all___at___00Choreo_Transition_check_spec__1(v_val_139_, v_tr_140_, v_x_141_);
lean_dec_ref(v_tr_140_);
lean_dec_ref(v_val_139_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Transition_check_spec__0(lean_object* v_val_144_, lean_object* v_tr_145_, lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_146_) == 0)
{
uint8_t v___x_147_; 
v___x_147_ = 1;
return v___x_147_;
}
else
{
lean_object* v_head_148_; lean_object* v_tail_149_; uint8_t v___y_151_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_head_148_ = lean_ctor_get(v_x_146_, 0);
lean_inc_n(v_head_148_, 2);
v_tail_149_ = lean_ctor_get(v_x_146_, 1);
lean_inc(v_tail_149_);
lean_dec_ref_known(v_x_146_, 2);
v___x_158_ = lp_choreo_Choreo_Phase_path(v_val_144_, v_head_148_);
v___x_159_ = lp_choreo_Choreo_Path_wf(v___x_158_);
lean_dec_ref(v___x_158_);
if (v___x_159_ == 0)
{
v___y_151_ = v___x_159_;
goto v___jp_150_;
}
else
{
lean_object* v_start_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_w_164_; uint8_t v___x_165_; 
v_start_160_ = lean_ctor_get(v_tr_145_, 2);
v___x_161_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__0);
v___x_162_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2);
lean_inc(v_head_148_);
v___x_163_ = l_List_getD___redArg(v_start_160_, v_head_148_, v___x_162_);
v_w_164_ = lean_ctor_get(v___x_163_, 2);
lean_inc(v_w_164_);
lean_dec(v___x_163_);
v___x_165_ = lean_int_dec_lt(v___x_161_, v_w_164_);
lean_dec(v_w_164_);
v___y_151_ = v___x_165_;
goto v___jp_150_;
}
v___jp_150_:
{
if (v___y_151_ == 0)
{
lean_dec(v_tail_149_);
lean_dec(v_head_148_);
return v___y_151_;
}
else
{
lean_object* v_start_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_start_152_ = lean_ctor_get(v_tr_145_, 2);
lean_inc(v_head_148_);
v___x_153_ = lp_choreo_Choreo_Phase_path(v_val_144_, v_head_148_);
v___x_154_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2, &lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Transition_check_spec__1___closed__2);
v___x_155_ = l_List_getD___redArg(v_start_152_, v_head_148_, v___x_154_);
v___x_156_ = lp_choreo_Choreo_Path_startsAtSlot(v___x_153_, v___x_155_);
lean_dec(v___x_155_);
lean_dec_ref(v___x_153_);
if (v___x_156_ == 0)
{
lean_dec(v_tail_149_);
return v___x_156_;
}
else
{
v_x_146_ = v_tail_149_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Transition_check_spec__0___boxed(lean_object* v_val_166_, lean_object* v_tr_167_, lean_object* v_x_168_){
_start:
{
uint8_t v_res_169_; lean_object* v_r_170_; 
v_res_169_ = lp_choreo_List_all___at___00Choreo_Transition_check_spec__0(v_val_166_, v_tr_167_, v_x_168_);
lean_dec_ref(v_tr_167_);
lean_dec_ref(v_val_166_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Transition_check(lean_object* v_r_171_, lean_object* v_tr_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = lp_choreo_Choreo_Transition_count(v_tr_172_);
v___x_175_ = lean_nat_dec_lt(v___x_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_dec(v___x_174_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
return v___x_175_;
}
else
{
lean_object* v_seg_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
lean_inc_ref(v_tr_172_);
v_seg_176_ = lp_choreo_Choreo_Transition_segment(v_r_171_, v_tr_172_);
v___x_177_ = l_List_lengthTR___redArg(v_seg_176_);
v___x_178_ = lean_nat_dec_eq(v___x_177_, v___x_174_);
lean_dec(v___x_174_);
lean_dec(v___x_177_);
if (v___x_178_ == 0)
{
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
return v___x_178_;
}
else
{
lean_object* v_cfg_179_; lean_object* v_start_180_; lean_object* v_finish_181_; lean_object* v_n_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v_cfg_179_ = lean_ctor_get(v_r_171_, 0);
v_start_180_ = lean_ctor_get(v_tr_172_, 2);
v_finish_181_ = lean_ctor_get(v_tr_172_, 3);
v_n_182_ = lean_ctor_get(v_cfg_179_, 0);
v___x_183_ = l_List_lengthTR___redArg(v_start_180_);
v___x_184_ = lean_nat_dec_eq(v___x_183_, v_n_182_);
lean_dec(v___x_183_);
if (v___x_184_ == 0)
{
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = l_List_lengthTR___redArg(v_finish_181_);
v___x_186_ = lean_nat_dec_eq(v___x_185_, v_n_182_);
lean_dec(v___x_185_);
if (v___x_186_ == 0)
{
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
return v___x_186_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = l_List_head_x3f___redArg(v_seg_176_);
if (lean_obj_tag(v___x_187_) == 0)
{
uint8_t v___x_188_; 
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
v___x_188_ = 0;
return v___x_188_;
}
else
{
lean_object* v_val_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_val_189_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_val_189_);
lean_dec_ref_known(v___x_187_, 1);
lean_inc(v_n_182_);
v___x_190_ = l_List_range(v_n_182_);
lean_inc(v___x_190_);
v___x_191_ = lp_choreo_List_all___at___00Choreo_Transition_check_spec__0(v_val_189_, v_tr_172_, v___x_190_);
lean_dec(v_val_189_);
if (v___x_191_ == 0)
{
lean_dec(v___x_190_);
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = l_List_getLast_x3f___redArg(v_seg_176_);
if (lean_obj_tag(v___x_192_) == 0)
{
uint8_t v___x_193_; 
lean_dec(v___x_190_);
lean_dec(v_seg_176_);
lean_dec_ref(v_tr_172_);
lean_dec_ref(v_r_171_);
v___x_193_ = 0;
return v___x_193_;
}
else
{
lean_object* v_val_194_; uint8_t v___x_195_; 
v_val_194_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_194_);
lean_dec_ref_known(v___x_192_, 1);
v___x_195_ = lp_choreo_List_all___at___00Choreo_Transition_check_spec__1(v_val_194_, v_tr_172_, v___x_190_);
lean_dec_ref(v_tr_172_);
lean_dec(v_val_194_);
if (v___x_195_ == 0)
{
lean_dec(v_seg_176_);
lean_dec_ref(v_r_171_);
return v___x_195_;
}
else
{
uint8_t v___x_196_; 
lean_inc(v_seg_176_);
lean_inc_ref(v_cfg_179_);
v___x_196_ = lp_choreo_Choreo_joins(v_cfg_179_, v_seg_176_);
if (v___x_196_ == 0)
{
lean_dec(v_seg_176_);
lean_dec_ref(v_r_171_);
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = lp_choreo_List_all___at___00Choreo_Routine_checkMusic_spec__0(v_r_171_, v_seg_176_);
lean_dec(v_seg_176_);
lean_dec_ref(v_r_171_);
return v___x_197_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Transition_check___boxed(lean_object* v_r_198_, lean_object* v_tr_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = lp_choreo_Choreo_Transition_check(v_r_198_, v_tr_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Compose_0__Choreo_Transition_check_match__1_splitter___redArg(lean_object* v_x_202_, lean_object* v_h__1_203_, lean_object* v_h__2_204_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; 
lean_dec(v_h__1_203_);
v___x_205_ = lean_box(0);
v___x_206_ = lean_apply_1(v_h__2_204_, v___x_205_);
return v___x_206_;
}
else
{
lean_object* v_val_207_; lean_object* v___x_208_; 
lean_dec(v_h__2_204_);
v_val_207_ = lean_ctor_get(v_x_202_, 0);
lean_inc(v_val_207_);
lean_dec_ref_known(v_x_202_, 1);
v___x_208_ = lean_apply_1(v_h__1_203_, v_val_207_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Compose_0__Choreo_Transition_check_match__1_splitter(lean_object* v_motive_209_, lean_object* v_x_210_, lean_object* v_h__1_211_, lean_object* v_h__2_212_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_h__1_211_);
v___x_213_ = lean_box(0);
v___x_214_ = lean_apply_1(v_h__2_212_, v___x_213_);
return v___x_214_;
}
else
{
lean_object* v_val_215_; lean_object* v___x_216_; 
lean_dec(v_h__2_212_);
v_val_215_ = lean_ctor_get(v_x_210_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v_x_210_, 1);
v___x_216_ = lean_apply_1(v_h__1_211_, v_val_215_);
return v___x_216_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Intent(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Compose(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Intent(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
