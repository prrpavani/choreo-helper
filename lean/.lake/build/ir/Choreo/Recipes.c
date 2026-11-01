// Lean compiler output
// Module: Choreo.Recipes
// Imports: public import Init public meta import Init public import Choreo.Build
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
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_easeShare___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_easeShare(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_shift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_shift___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Pt_halfTurn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Pt_halfTurn___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_halfTurn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_halfTurn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_reflect(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_easeShare___redArg(lean_object* v_inst_1_, lean_object* v_t_2_){
_start:
{
lean_object* v_toCommRing_3_; lean_object* v_toSemiring_4_; lean_object* v_toSub_5_; lean_object* v_toMul_6_; lean_object* v_ofNat_7_; lean_object* v_npow_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_toCommRing_3_ = lean_ctor_get(v_inst_1_, 0);
lean_inc_ref(v_toCommRing_3_);
lean_dec_ref(v_inst_1_);
v_toSemiring_4_ = lean_ctor_get(v_toCommRing_3_, 0);
lean_inc_ref(v_toSemiring_4_);
v_toSub_5_ = lean_ctor_get(v_toCommRing_3_, 2);
lean_inc(v_toSub_5_);
lean_dec_ref(v_toCommRing_3_);
v_toMul_6_ = lean_ctor_get(v_toSemiring_4_, 1);
lean_inc_n(v_toMul_6_, 2);
v_ofNat_7_ = lean_ctor_get(v_toSemiring_4_, 3);
lean_inc_n(v_ofNat_7_, 2);
v_npow_8_ = lean_ctor_get(v_toSemiring_4_, 5);
lean_inc_n(v_npow_8_, 2);
lean_dec_ref(v_toSemiring_4_);
v___x_9_ = lean_unsigned_to_nat(3u);
v___x_10_ = lean_apply_1(v_ofNat_7_, v___x_9_);
v___x_11_ = lean_unsigned_to_nat(2u);
lean_inc(v_t_2_);
v___x_12_ = lean_apply_2(v_npow_8_, v_t_2_, v___x_11_);
v___x_13_ = lean_apply_2(v_toMul_6_, v___x_10_, v___x_12_);
v___x_14_ = lean_apply_1(v_ofNat_7_, v___x_11_);
v___x_15_ = lean_apply_2(v_npow_8_, v_t_2_, v___x_9_);
v___x_16_ = lean_apply_2(v_toMul_6_, v___x_14_, v___x_15_);
v___x_17_ = lean_apply_2(v_toSub_5_, v___x_13_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_easeShare(lean_object* v_K_18_, lean_object* v_inst_19_, lean_object* v_t_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lp_choreo_Choreo_easeShare___redArg(v_inst_19_, v_t_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_shift(lean_object* v_p_22_, lean_object* v_dx_23_, lean_object* v_dy_24_){
_start:
{
lean_object* v_x_25_; lean_object* v_y_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_35_; 
v_x_25_ = lean_ctor_get(v_p_22_, 0);
v_y_26_ = lean_ctor_get(v_p_22_, 1);
v_isSharedCheck_35_ = !lean_is_exclusive(v_p_22_);
if (v_isSharedCheck_35_ == 0)
{
v___x_28_ = v_p_22_;
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_y_26_);
lean_inc(v_x_25_);
lean_dec(v_p_22_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_30_ = lean_int_add(v_x_25_, v_dx_23_);
lean_dec(v_x_25_);
v___x_31_ = lean_int_add(v_y_26_, v_dy_24_);
lean_dec(v_y_26_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_31_);
lean_ctor_set(v___x_28_, 0, v___x_30_);
v___x_33_ = v___x_28_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_shift___boxed(lean_object* v_p_36_, lean_object* v_dx_37_, lean_object* v_dy_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = lp_choreo_Choreo_Pt_shift(v_p_36_, v_dx_37_, v_dy_38_);
lean_dec(v_dy_38_);
lean_dec(v_dx_37_);
return v_res_39_;
}
}
static lean_object* _init_lp_choreo_Choreo_Pt_halfTurn___closed__0(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_unsigned_to_nat(2u);
v___x_41_ = lean_nat_to_int(v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_halfTurn(lean_object* v_c_42_, lean_object* v_p_43_){
_start:
{
lean_object* v_x_44_; lean_object* v_y_45_; lean_object* v_x_46_; lean_object* v_y_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_59_; 
v_x_44_ = lean_ctor_get(v_c_42_, 0);
v_y_45_ = lean_ctor_get(v_c_42_, 1);
v_x_46_ = lean_ctor_get(v_p_43_, 0);
v_y_47_ = lean_ctor_get(v_p_43_, 1);
v_isSharedCheck_59_ = !lean_is_exclusive(v_p_43_);
if (v_isSharedCheck_59_ == 0)
{
v___x_49_ = v_p_43_;
v_isShared_50_ = v_isSharedCheck_59_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_y_47_);
lean_inc(v_x_46_);
lean_dec(v_p_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_59_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_57_; 
v___x_51_ = lean_obj_once(&lp_choreo_Choreo_Pt_halfTurn___closed__0, &lp_choreo_Choreo_Pt_halfTurn___closed__0_once, _init_lp_choreo_Choreo_Pt_halfTurn___closed__0);
v___x_52_ = lean_int_mul(v___x_51_, v_x_44_);
v___x_53_ = lean_int_sub(v___x_52_, v_x_46_);
lean_dec(v_x_46_);
lean_dec(v___x_52_);
v___x_54_ = lean_int_mul(v___x_51_, v_y_45_);
v___x_55_ = lean_int_sub(v___x_54_, v_y_47_);
lean_dec(v_y_47_);
lean_dec(v___x_54_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 1, v___x_55_);
lean_ctor_set(v___x_49_, 0, v___x_53_);
v___x_57_ = v___x_49_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v___x_55_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_halfTurn___boxed(lean_object* v_c_60_, lean_object* v_p_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_choreo_Choreo_Pt_halfTurn(v_c_60_, v_p_61_);
lean_dec_ref(v_c_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_reflect(lean_object* v_p_63_){
_start:
{
lean_object* v_x_64_; lean_object* v_y_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_73_; 
v_x_64_ = lean_ctor_get(v_p_63_, 0);
v_y_65_ = lean_ctor_get(v_p_63_, 1);
v_isSharedCheck_73_ = !lean_is_exclusive(v_p_63_);
if (v_isSharedCheck_73_ == 0)
{
v___x_67_ = v_p_63_;
v_isShared_68_ = v_isSharedCheck_73_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_y_65_);
lean_inc(v_x_64_);
lean_dec(v_p_63_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_73_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_69_ = lean_int_neg(v_x_64_);
lean_dec(v_x_64_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_69_);
v___x_71_ = v___x_67_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_69_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v_y_65_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq(lean_object* v_p_74_, lean_object* v_q_75_){
_start:
{
lean_object* v_x_76_; lean_object* v_y_77_; lean_object* v_x_78_; lean_object* v_y_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_x_76_ = lean_ctor_get(v_p_74_, 0);
v_y_77_ = lean_ctor_get(v_p_74_, 1);
v_x_78_ = lean_ctor_get(v_q_75_, 0);
v_y_79_ = lean_ctor_get(v_q_75_, 1);
v___x_80_ = lean_int_sub(v_x_76_, v_x_78_);
v___x_81_ = lean_int_mul(v___x_80_, v___x_80_);
lean_dec(v___x_80_);
v___x_82_ = lean_int_sub(v_y_77_, v_y_79_);
v___x_83_ = lean_int_mul(v___x_82_, v___x_82_);
lean_dec(v___x_82_);
v___x_84_ = lean_int_add(v___x_81_, v___x_83_);
lean_dec(v___x_83_);
lean_dec(v___x_81_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq___boxed(lean_object* v_p_85_, lean_object* v_q_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lp_choreo_Choreo_gapSq(v_p_85_, v_q_86_);
lean_dec_ref(v_q_86_);
lean_dec_ref(v_p_85_);
return v_res_87_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Build(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Recipes(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
