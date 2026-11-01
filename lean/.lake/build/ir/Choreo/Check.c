// Lean compiler output
// Module: Choreo.Check
// Imports: public import Init public meta import Init public import Choreo.Model
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
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_mul(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_add(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_scale(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Poly_allPos(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lp_choreo_Choreo_Poly_allZero(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_neg(lean_object*);
uint8_t lp_choreo_Choreo_Poly_bern(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Formation_wellFormed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Config_durNum(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Config_durDen(lean_object*);
lean_object* lp_choreo_Choreo_Poly_deriv(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_wf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_dxPoly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_dyPoly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_wwPoly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearPoly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearPoly___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_sepPoly(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_sepPoly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rigidPoly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rigidPoly___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Cert_check___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Cert_check___closed__0;
LEAN_EXPORT uint8_t lp_choreo_Choreo_Cert_check(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_lowerPoly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_lowerPoly___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_upperPoly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_upperPoly___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitLimit;
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_inRect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_inRect___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_vNum(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_speedPolyFull___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_speedPolyFull___closed__0;
static lean_once_cell_t lp_choreo_Choreo_speedPolyFull___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_speedPolyFull___closed__1;
static lean_once_cell_t lp_choreo_Choreo_speedPolyFull___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_speedPolyFull___closed__2;
static lean_once_cell_t lp_choreo_Choreo_speedPolyFull___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_speedPolyFull___closed__3;
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyFull(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyFull___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyConst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyConst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPoly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPoly___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitPoly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitPoly___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_first___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_first___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_first___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_last(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_last___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_reachesSlot___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Config_wf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_wf___boxed(lean_object*);
static const lean_ctor_object lp_choreo_Choreo_Phase_pairCert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_Phase_pairCert___closed__0 = (const lean_object*)&lp_choreo_Choreo_Phase_pairCert___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_pairCert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_pairCert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkClear(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkClear___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkPaths(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkPaths___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkInvariants(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkInvariants___boxed(lean_object*);
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0;
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_check___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_wf(lean_object* v_p_1_){
_start:
{
lean_object* v_X_2_; lean_object* v_Y_3_; lean_object* v_W_4_; lean_object* v___x_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
v_X_2_ = lean_ctor_get(v_p_1_, 0);
v_Y_3_ = lean_ctor_get(v_p_1_, 1);
v_W_4_ = lean_ctor_get(v_p_1_, 2);
v___x_5_ = lean_unsigned_to_nat(2u);
v___x_6_ = l_List_lengthTR___redArg(v_X_2_);
v___x_7_ = lean_nat_dec_le(v___x_5_, v___x_6_);
if (v___x_7_ == 0)
{
lean_dec(v___x_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = l_List_lengthTR___redArg(v_Y_3_);
v___x_9_ = lean_nat_dec_eq(v___x_8_, v___x_6_);
lean_dec(v___x_8_);
if (v___x_9_ == 0)
{
lean_dec(v___x_6_);
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_List_lengthTR___redArg(v_W_4_);
v___x_11_ = lean_nat_dec_eq(v___x_10_, v___x_6_);
lean_dec(v___x_6_);
lean_dec(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = lp_choreo_Choreo_Poly_allPos(v_W_4_);
return v___x_12_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_wf___boxed(lean_object* v_p_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lp_choreo_Choreo_Path_wf(v_p_13_);
lean_dec_ref(v_p_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
if (lean_obj_tag(v_x_16_) == 0)
{
if (lean_obj_tag(v_x_17_) == 0)
{
uint8_t v___x_18_; 
v___x_18_ = 1;
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = 0;
return v___x_19_;
}
}
else
{
if (lean_obj_tag(v_x_17_) == 0)
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
else
{
lean_object* v_head_21_; lean_object* v_tail_22_; lean_object* v_head_23_; lean_object* v_tail_24_; uint8_t v___x_25_; 
v_head_21_ = lean_ctor_get(v_x_16_, 0);
v_tail_22_ = lean_ctor_get(v_x_16_, 1);
v_head_23_ = lean_ctor_get(v_x_17_, 0);
v_tail_24_ = lean_ctor_get(v_x_17_, 1);
v___x_25_ = lean_int_dec_eq(v_head_21_, v_head_23_);
if (v___x_25_ == 0)
{
return v___x_25_;
}
else
{
v_x_16_ = v_tail_22_;
v_x_17_ = v_tail_24_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0___boxed(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_x_27_, v_x_28_);
lean_dec(v_x_28_);
lean_dec(v_x_27_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_dxPoly(lean_object* v_a_31_, lean_object* v_b_32_){
_start:
{
lean_object* v_X_33_; lean_object* v_W_34_; lean_object* v_X_35_; lean_object* v_W_36_; uint8_t v___x_37_; 
v_X_33_ = lean_ctor_get(v_a_31_, 0);
lean_inc(v_X_33_);
v_W_34_ = lean_ctor_get(v_a_31_, 2);
lean_inc(v_W_34_);
lean_dec_ref(v_a_31_);
v_X_35_ = lean_ctor_get(v_b_32_, 0);
lean_inc(v_X_35_);
v_W_36_ = lean_ctor_get(v_b_32_, 2);
lean_inc(v_W_36_);
lean_dec_ref(v_b_32_);
v___x_37_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_34_, v_W_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lp_choreo_Choreo_Poly_mul(v_X_33_, v_W_36_);
v___x_39_ = lp_choreo_Choreo_Poly_mul(v_X_35_, v_W_34_);
v___x_40_ = lp_choreo_Choreo_Poly_sub(v___x_38_, v___x_39_);
lean_dec(v___x_38_);
return v___x_40_;
}
else
{
lean_object* v___x_41_; 
lean_dec(v_W_36_);
lean_dec(v_W_34_);
v___x_41_ = lp_choreo_Choreo_Poly_sub(v_X_33_, v_X_35_);
lean_dec(v_X_33_);
return v___x_41_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_dyPoly(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
lean_object* v_Y_44_; lean_object* v_W_45_; lean_object* v_Y_46_; lean_object* v_W_47_; uint8_t v___x_48_; 
v_Y_44_ = lean_ctor_get(v_a_42_, 1);
lean_inc(v_Y_44_);
v_W_45_ = lean_ctor_get(v_a_42_, 2);
lean_inc(v_W_45_);
lean_dec_ref(v_a_42_);
v_Y_46_ = lean_ctor_get(v_b_43_, 1);
lean_inc(v_Y_46_);
v_W_47_ = lean_ctor_get(v_b_43_, 2);
lean_inc(v_W_47_);
lean_dec_ref(v_b_43_);
v___x_48_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_45_, v_W_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lp_choreo_Choreo_Poly_mul(v_Y_44_, v_W_47_);
v___x_50_ = lp_choreo_Choreo_Poly_mul(v_Y_46_, v_W_45_);
v___x_51_ = lp_choreo_Choreo_Poly_sub(v___x_49_, v___x_50_);
lean_dec(v___x_49_);
return v___x_51_;
}
else
{
lean_object* v___x_52_; 
lean_dec(v_W_47_);
lean_dec(v_W_45_);
v___x_52_ = lp_choreo_Choreo_Poly_sub(v_Y_44_, v_Y_46_);
lean_dec(v_Y_44_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_wwPoly(lean_object* v_a_53_, lean_object* v_b_54_){
_start:
{
lean_object* v_W_55_; lean_object* v_W_56_; uint8_t v___x_57_; 
v_W_55_ = lean_ctor_get(v_a_53_, 2);
lean_inc(v_W_55_);
lean_dec_ref(v_a_53_);
v_W_56_ = lean_ctor_get(v_b_54_, 2);
lean_inc(v_W_56_);
lean_dec_ref(v_b_54_);
v___x_57_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_55_, v_W_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
v___x_58_ = lp_choreo_Choreo_Poly_mul(v_W_55_, v_W_56_);
return v___x_58_;
}
else
{
lean_dec(v_W_56_);
return v_W_55_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearPoly(lean_object* v_a_59_, lean_object* v_b_60_, lean_object* v_d_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
lean_inc_ref_n(v_b_60_, 2);
lean_inc_ref_n(v_a_59_, 2);
v___x_62_ = lp_choreo_Choreo_dxPoly(v_a_59_, v_b_60_);
lean_inc(v___x_62_);
v___x_63_ = lp_choreo_Choreo_Poly_mul(v___x_62_, v___x_62_);
v___x_64_ = lp_choreo_Choreo_dyPoly(v_a_59_, v_b_60_);
lean_inc(v___x_64_);
v___x_65_ = lp_choreo_Choreo_Poly_mul(v___x_64_, v___x_64_);
v___x_66_ = lp_choreo_Choreo_Poly_add(v___x_63_, v___x_65_);
lean_dec(v___x_63_);
v___x_67_ = lean_int_mul(v_d_61_, v_d_61_);
v___x_68_ = lp_choreo_Choreo_wwPoly(v_a_59_, v_b_60_);
lean_inc(v___x_68_);
v___x_69_ = lp_choreo_Choreo_Poly_mul(v___x_68_, v___x_68_);
v___x_70_ = lp_choreo_Choreo_Poly_scale(v___x_67_, v___x_69_);
lean_dec(v___x_67_);
v___x_71_ = lp_choreo_Choreo_Poly_sub(v___x_66_, v___x_70_);
lean_dec(v___x_66_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearPoly___boxed(lean_object* v_a_72_, lean_object* v_b_73_, lean_object* v_d_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_choreo_Choreo_clearPoly(v_a_72_, v_b_73_, v_d_74_);
lean_dec(v_d_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sepPoly(lean_object* v_a_76_, lean_object* v_b_77_, lean_object* v_d_78_, uint8_t v_xAxis_79_, uint8_t v_positive_80_){
_start:
{
lean_object* v___y_82_; lean_object* v___y_87_; 
if (v_xAxis_79_ == 0)
{
lean_object* v___x_89_; 
lean_inc_ref(v_b_77_);
lean_inc_ref(v_a_76_);
v___x_89_ = lp_choreo_Choreo_dyPoly(v_a_76_, v_b_77_);
v___y_87_ = v___x_89_;
goto v___jp_86_;
}
else
{
lean_object* v___x_90_; 
lean_inc_ref(v_b_77_);
lean_inc_ref(v_a_76_);
v___x_90_ = lp_choreo_Choreo_dxPoly(v_a_76_, v_b_77_);
v___y_87_ = v___x_90_;
goto v___jp_86_;
}
v___jp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lp_choreo_Choreo_wwPoly(v_a_76_, v_b_77_);
v___x_84_ = lp_choreo_Choreo_Poly_scale(v_d_78_, v___x_83_);
v___x_85_ = lp_choreo_Choreo_Poly_sub(v___y_82_, v___x_84_);
lean_dec(v___y_82_);
return v___x_85_;
}
v___jp_86_:
{
if (v_positive_80_ == 0)
{
lean_object* v___x_88_; 
v___x_88_ = lp_choreo_Choreo_Poly_neg(v___y_87_);
v___y_82_ = v___x_88_;
goto v___jp_81_;
}
else
{
v___y_82_ = v___y_87_;
goto v___jp_81_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sepPoly___boxed(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_d_93_, lean_object* v_xAxis_94_, lean_object* v_positive_95_){
_start:
{
uint8_t v_xAxis_boxed_96_; uint8_t v_positive_boxed_97_; lean_object* v_res_98_; 
v_xAxis_boxed_96_ = lean_unbox(v_xAxis_94_);
v_positive_boxed_97_ = lean_unbox(v_positive_95_);
v_res_98_ = lp_choreo_Choreo_sepPoly(v_a_91_, v_b_92_, v_d_93_, v_xAxis_boxed_96_, v_positive_boxed_97_);
lean_dec(v_d_93_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rigidPoly(lean_object* v_a_99_, lean_object* v_b_100_, lean_object* v_num_101_, lean_object* v_den_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
lean_inc_ref_n(v_b_100_, 2);
lean_inc_ref_n(v_a_99_, 2);
v___x_103_ = lp_choreo_Choreo_dxPoly(v_a_99_, v_b_100_);
lean_inc(v___x_103_);
v___x_104_ = lp_choreo_Choreo_Poly_mul(v___x_103_, v___x_103_);
v___x_105_ = lp_choreo_Choreo_dyPoly(v_a_99_, v_b_100_);
lean_inc(v___x_105_);
v___x_106_ = lp_choreo_Choreo_Poly_mul(v___x_105_, v___x_105_);
v___x_107_ = lp_choreo_Choreo_Poly_add(v___x_104_, v___x_106_);
lean_dec(v___x_104_);
v___x_108_ = lp_choreo_Choreo_Poly_scale(v_den_102_, v___x_107_);
v___x_109_ = lp_choreo_Choreo_wwPoly(v_a_99_, v_b_100_);
lean_inc(v___x_109_);
v___x_110_ = lp_choreo_Choreo_Poly_mul(v___x_109_, v___x_109_);
v___x_111_ = lp_choreo_Choreo_Poly_scale(v_num_101_, v___x_110_);
v___x_112_ = lp_choreo_Choreo_Poly_sub(v___x_108_, v___x_111_);
lean_dec(v___x_108_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rigidPoly___boxed(lean_object* v_a_113_, lean_object* v_b_114_, lean_object* v_num_115_, lean_object* v_den_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = lp_choreo_Choreo_rigidPoly(v_a_113_, v_b_114_, v_num_115_, v_den_116_);
lean_dec(v_den_116_);
lean_dec(v_num_115_);
return v_res_117_;
}
}
static lean_object* _init_lp_choreo_Choreo_Cert_check___closed__0(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = lean_nat_to_int(v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Cert_check(lean_object* v_ct_120_, lean_object* v_a_121_, lean_object* v_b_122_, lean_object* v_d_123_){
_start:
{
switch(lean_obj_tag(v_ct_120_))
{
case 0:
{
uint8_t v_xAxis_124_; uint8_t v_positive_125_; lean_object* v_depth_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_xAxis_124_ = lean_ctor_get_uint8(v_ct_120_, sizeof(void*)*1);
v_positive_125_ = lean_ctor_get_uint8(v_ct_120_, sizeof(void*)*1 + 1);
v_depth_126_ = lean_ctor_get(v_ct_120_, 0);
lean_inc(v_depth_126_);
lean_dec_ref_known(v_ct_120_, 1);
v___x_127_ = lp_choreo_Choreo_sepPoly(v_a_121_, v_b_122_, v_d_123_, v_xAxis_124_, v_positive_125_);
v___x_128_ = lp_choreo_Choreo_Poly_bern(v_depth_126_, v___x_127_);
return v___x_128_;
}
case 1:
{
lean_object* v_depth_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v_depth_129_ = lean_ctor_get(v_ct_120_, 0);
lean_inc(v_depth_129_);
lean_dec_ref_known(v_ct_120_, 1);
v___x_130_ = lp_choreo_Choreo_clearPoly(v_a_121_, v_b_122_, v_d_123_);
v___x_131_ = lp_choreo_Choreo_Poly_bern(v_depth_129_, v___x_130_);
return v___x_131_;
}
case 2:
{
lean_object* v_cx_132_; lean_object* v_cy_133_; lean_object* v_X_134_; lean_object* v_Y_135_; lean_object* v_W_136_; lean_object* v_X_137_; lean_object* v_Y_138_; lean_object* v_W_139_; uint8_t v___y_141_; uint8_t v___x_150_; 
v_cx_132_ = lean_ctor_get(v_ct_120_, 0);
lean_inc(v_cx_132_);
v_cy_133_ = lean_ctor_get(v_ct_120_, 1);
lean_inc(v_cy_133_);
lean_dec_ref_known(v_ct_120_, 2);
v_X_134_ = lean_ctor_get(v_a_121_, 0);
lean_inc(v_X_134_);
v_Y_135_ = lean_ctor_get(v_a_121_, 1);
lean_inc(v_Y_135_);
v_W_136_ = lean_ctor_get(v_a_121_, 2);
lean_inc(v_W_136_);
lean_dec_ref(v_a_121_);
v_X_137_ = lean_ctor_get(v_b_122_, 0);
lean_inc(v_X_137_);
v_Y_138_ = lean_ctor_get(v_b_122_, 1);
lean_inc(v_Y_138_);
v_W_139_ = lean_ctor_get(v_b_122_, 2);
lean_inc(v_W_139_);
lean_dec_ref(v_b_122_);
v___x_150_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_136_, v_W_139_);
lean_dec(v_W_139_);
if (v___x_150_ == 0)
{
lean_dec(v_X_137_);
lean_dec(v_X_134_);
v___y_141_ = v___x_150_;
goto v___jp_140_;
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_151_ = lp_choreo_Choreo_Poly_sub(v_X_134_, v_X_137_);
lean_dec(v_X_134_);
lean_inc(v_W_136_);
v___x_152_ = lp_choreo_Choreo_Poly_scale(v_cx_132_, v_W_136_);
v___x_153_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v___x_151_, v___x_152_);
lean_dec(v___x_152_);
lean_dec(v___x_151_);
v___y_141_ = v___x_153_;
goto v___jp_140_;
}
v___jp_140_:
{
if (v___y_141_ == 0)
{
lean_dec(v_Y_138_);
lean_dec(v_W_136_);
lean_dec(v_Y_135_);
lean_dec(v_cy_133_);
lean_dec(v_cx_132_);
return v___y_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = lp_choreo_Choreo_Poly_sub(v_Y_135_, v_Y_138_);
lean_dec(v_Y_135_);
v___x_143_ = lp_choreo_Choreo_Poly_scale(v_cy_133_, v_W_136_);
v___x_144_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v___x_142_, v___x_143_);
lean_dec(v___x_143_);
lean_dec(v___x_142_);
if (v___x_144_ == 0)
{
lean_dec(v_cy_133_);
lean_dec(v_cx_132_);
return v___x_144_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_145_ = lean_int_mul(v_d_123_, v_d_123_);
v___x_146_ = lean_int_mul(v_cx_132_, v_cx_132_);
lean_dec(v_cx_132_);
v___x_147_ = lean_int_mul(v_cy_133_, v_cy_133_);
lean_dec(v_cy_133_);
v___x_148_ = lean_int_add(v___x_146_, v___x_147_);
lean_dec(v___x_147_);
lean_dec(v___x_146_);
v___x_149_ = lean_int_dec_le(v___x_145_, v___x_148_);
lean_dec(v___x_148_);
lean_dec(v___x_145_);
return v___x_149_;
}
}
}
}
default: 
{
lean_object* v_num_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v_num_154_ = lean_ctor_get(v_ct_120_, 0);
lean_inc(v_num_154_);
lean_dec_ref_known(v_ct_120_, 1);
v___x_155_ = lean_obj_once(&lp_choreo_Choreo_Cert_check___closed__0, &lp_choreo_Choreo_Cert_check___closed__0_once, _init_lp_choreo_Choreo_Cert_check___closed__0);
v___x_156_ = lp_choreo_Choreo_rigidPoly(v_a_121_, v_b_122_, v_num_154_, v___x_155_);
v___x_157_ = lp_choreo_Choreo_Poly_allZero(v___x_156_);
lean_dec(v___x_156_);
if (v___x_157_ == 0)
{
lean_dec(v_num_154_);
return v___x_157_;
}
else
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = lean_int_mul(v_d_123_, v_d_123_);
v___x_159_ = lean_int_dec_le(v___x_158_, v_num_154_);
lean_dec(v_num_154_);
lean_dec(v___x_158_);
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Cert_check___boxed(lean_object* v_ct_160_, lean_object* v_a_161_, lean_object* v_b_162_, lean_object* v_d_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = lp_choreo_Choreo_Cert_check(v_ct_160_, v_a_161_, v_b_162_, v_d_163_);
lean_dec(v_d_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_lowerPoly(lean_object* v_N_166_, lean_object* v_W_167_, lean_object* v_c_168_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lp_choreo_Choreo_Poly_scale(v_c_168_, v_W_167_);
v___x_170_ = lp_choreo_Choreo_Poly_sub(v_N_166_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_lowerPoly___boxed(lean_object* v_N_171_, lean_object* v_W_172_, lean_object* v_c_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = lp_choreo_Choreo_lowerPoly(v_N_171_, v_W_172_, v_c_173_);
lean_dec(v_c_173_);
lean_dec(v_N_171_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_upperPoly(lean_object* v_N_175_, lean_object* v_W_176_, lean_object* v_c_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lp_choreo_Choreo_Poly_scale(v_c_177_, v_W_176_);
v___x_179_ = lp_choreo_Choreo_Poly_sub(v___x_178_, v_N_175_);
lean_dec(v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_upperPoly___boxed(lean_object* v_N_180_, lean_object* v_W_181_, lean_object* v_c_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = lp_choreo_Choreo_upperPoly(v_N_180_, v_W_181_, v_c_182_);
lean_dec(v_c_182_);
return v_res_183_;
}
}
static lean_object* _init_lp_choreo_Choreo_splitLimit(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_unsigned_to_nat(5u);
return v___x_184_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_inRect(lean_object* v_p_185_, lean_object* v_r_186_){
_start:
{
lean_object* v_X_187_; lean_object* v_Y_188_; lean_object* v_W_189_; lean_object* v_xmin_190_; lean_object* v_xmax_191_; lean_object* v_ymin_192_; lean_object* v_ymax_193_; uint8_t v___y_195_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v_X_187_ = lean_ctor_get(v_p_185_, 0);
lean_inc(v_X_187_);
v_Y_188_ = lean_ctor_get(v_p_185_, 1);
lean_inc(v_Y_188_);
v_W_189_ = lean_ctor_get(v_p_185_, 2);
lean_inc_n(v_W_189_, 2);
lean_dec_ref(v_p_185_);
v_xmin_190_ = lean_ctor_get(v_r_186_, 0);
v_xmax_191_ = lean_ctor_get(v_r_186_, 1);
v_ymin_192_ = lean_ctor_get(v_r_186_, 2);
v_ymax_193_ = lean_ctor_get(v_r_186_, 3);
v___x_201_ = lean_unsigned_to_nat(5u);
v___x_202_ = lp_choreo_Choreo_lowerPoly(v_X_187_, v_W_189_, v_xmin_190_);
v___x_203_ = lp_choreo_Choreo_Poly_bern(v___x_201_, v___x_202_);
if (v___x_203_ == 0)
{
lean_dec(v_X_187_);
v___y_195_ = v___x_203_;
goto v___jp_194_;
}
else
{
lean_object* v___x_204_; uint8_t v___x_205_; 
lean_inc(v_W_189_);
v___x_204_ = lp_choreo_Choreo_upperPoly(v_X_187_, v_W_189_, v_xmax_191_);
v___x_205_ = lp_choreo_Choreo_Poly_bern(v___x_201_, v___x_204_);
v___y_195_ = v___x_205_;
goto v___jp_194_;
}
v___jp_194_:
{
if (v___y_195_ == 0)
{
lean_dec(v_W_189_);
lean_dec(v_Y_188_);
return v___y_195_;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_unsigned_to_nat(5u);
lean_inc(v_W_189_);
v___x_197_ = lp_choreo_Choreo_lowerPoly(v_Y_188_, v_W_189_, v_ymin_192_);
v___x_198_ = lp_choreo_Choreo_Poly_bern(v___x_196_, v___x_197_);
if (v___x_198_ == 0)
{
lean_dec(v_W_189_);
lean_dec(v_Y_188_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = lp_choreo_Choreo_upperPoly(v_Y_188_, v_W_189_, v_ymax_193_);
v___x_200_ = lp_choreo_Choreo_Poly_bern(v___x_196_, v___x_199_);
return v___x_200_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_inRect___boxed(lean_object* v_p_206_, lean_object* v_r_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = lp_choreo_Choreo_Path_inRect(v_p_206_, v_r_207_);
lean_dec_ref(v_r_207_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_vNum(lean_object* v_N_210_, lean_object* v_W_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
lean_inc(v_N_210_);
v___x_212_ = lp_choreo_Choreo_Poly_deriv(v_N_210_);
lean_inc(v_W_211_);
v___x_213_ = lp_choreo_Choreo_Poly_mul(v___x_212_, v_W_211_);
v___x_214_ = lp_choreo_Choreo_Poly_deriv(v_W_211_);
v___x_215_ = lp_choreo_Choreo_Poly_mul(v_N_210_, v___x_214_);
v___x_216_ = lp_choreo_Choreo_Poly_sub(v___x_213_, v___x_215_);
lean_dec(v___x_213_);
return v___x_216_;
}
}
static lean_object* _init_lp_choreo_Choreo_speedPolyFull___closed__0(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(2u);
v___x_218_ = lean_nat_to_int(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_lp_choreo_Choreo_speedPolyFull___closed__1(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = lean_box(0);
v___x_220_ = lean_obj_once(&lp_choreo_Choreo_Cert_check___closed__0, &lp_choreo_Choreo_Cert_check___closed__0_once, _init_lp_choreo_Choreo_Cert_check___closed__0);
v___x_221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_219_);
return v___x_221_;
}
}
static lean_object* _init_lp_choreo_Choreo_speedPolyFull___closed__2(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_obj_once(&lp_choreo_Choreo_speedPolyFull___closed__1, &lp_choreo_Choreo_speedPolyFull___closed__1_once, _init_lp_choreo_Choreo_speedPolyFull___closed__1);
v___x_223_ = lean_obj_once(&lp_choreo_Choreo_speedPolyFull___closed__0, &lp_choreo_Choreo_speedPolyFull___closed__0_once, _init_lp_choreo_Choreo_speedPolyFull___closed__0);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_222_);
return v___x_224_;
}
}
static lean_object* _init_lp_choreo_Choreo_speedPolyFull___closed__3(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_obj_once(&lp_choreo_Choreo_speedPolyFull___closed__2, &lp_choreo_Choreo_speedPolyFull___closed__2_once, _init_lp_choreo_Choreo_speedPolyFull___closed__2);
v___x_226_ = lean_obj_once(&lp_choreo_Choreo_Cert_check___closed__0, &lp_choreo_Choreo_Cert_check___closed__0_once, _init_lp_choreo_Choreo_Cert_check___closed__0);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyFull(lean_object* v_p_228_, lean_object* v_num_229_, lean_object* v_den_230_){
_start:
{
lean_object* v_X_231_; lean_object* v_Y_232_; lean_object* v_W_233_; lean_object* v_vx_234_; lean_object* v_vy_235_; lean_object* v_w2_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_X_231_ = lean_ctor_get(v_p_228_, 0);
lean_inc(v_X_231_);
v_Y_232_ = lean_ctor_get(v_p_228_, 1);
lean_inc(v_Y_232_);
v_W_233_ = lean_ctor_get(v_p_228_, 2);
lean_inc_n(v_W_233_, 4);
lean_dec_ref(v_p_228_);
v_vx_234_ = lp_choreo_Choreo_vNum(v_X_231_, v_W_233_);
v_vy_235_ = lp_choreo_Choreo_vNum(v_Y_232_, v_W_233_);
v_w2_236_ = lp_choreo_Choreo_Poly_mul(v_W_233_, v_W_233_);
lean_inc(v_w2_236_);
v___x_237_ = lp_choreo_Choreo_Poly_mul(v_w2_236_, v_w2_236_);
v___x_238_ = lp_choreo_Choreo_Poly_scale(v_num_229_, v___x_237_);
v___x_239_ = lean_obj_once(&lp_choreo_Choreo_speedPolyFull___closed__3, &lp_choreo_Choreo_speedPolyFull___closed__3_once, _init_lp_choreo_Choreo_speedPolyFull___closed__3);
lean_inc(v_vx_234_);
v___x_240_ = lp_choreo_Choreo_Poly_mul(v_vx_234_, v_vx_234_);
lean_inc(v_vy_235_);
v___x_241_ = lp_choreo_Choreo_Poly_mul(v_vy_235_, v_vy_235_);
v___x_242_ = lp_choreo_Choreo_Poly_add(v___x_240_, v___x_241_);
lean_dec(v___x_240_);
v___x_243_ = lp_choreo_Choreo_Poly_mul(v___x_239_, v___x_242_);
v___x_244_ = lp_choreo_Choreo_Poly_scale(v_den_230_, v___x_243_);
v___x_245_ = lp_choreo_Choreo_Poly_sub(v___x_238_, v___x_244_);
lean_dec(v___x_238_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyFull___boxed(lean_object* v_p_246_, lean_object* v_num_247_, lean_object* v_den_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_choreo_Choreo_speedPolyFull(v_p_246_, v_num_247_, v_den_248_);
lean_dec(v_den_248_);
lean_dec(v_num_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyConst(lean_object* v_p_250_, lean_object* v_num_251_, lean_object* v_den_252_){
_start:
{
lean_object* v_X_253_; lean_object* v_Y_254_; lean_object* v_W_255_; lean_object* v_vx_256_; lean_object* v_vy_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_X_253_ = lean_ctor_get(v_p_250_, 0);
lean_inc(v_X_253_);
v_Y_254_ = lean_ctor_get(v_p_250_, 1);
lean_inc(v_Y_254_);
v_W_255_ = lean_ctor_get(v_p_250_, 2);
lean_inc_n(v_W_255_, 2);
lean_dec_ref(v_p_250_);
v_vx_256_ = lp_choreo_Choreo_Poly_deriv(v_X_253_);
v_vy_257_ = lp_choreo_Choreo_Poly_deriv(v_Y_254_);
v___x_258_ = lp_choreo_Choreo_Poly_mul(v_W_255_, v_W_255_);
v___x_259_ = lp_choreo_Choreo_Poly_scale(v_num_251_, v___x_258_);
v___x_260_ = lean_obj_once(&lp_choreo_Choreo_speedPolyFull___closed__3, &lp_choreo_Choreo_speedPolyFull___closed__3_once, _init_lp_choreo_Choreo_speedPolyFull___closed__3);
lean_inc(v_vx_256_);
v___x_261_ = lp_choreo_Choreo_Poly_mul(v_vx_256_, v_vx_256_);
lean_inc(v_vy_257_);
v___x_262_ = lp_choreo_Choreo_Poly_mul(v_vy_257_, v_vy_257_);
v___x_263_ = lp_choreo_Choreo_Poly_add(v___x_261_, v___x_262_);
lean_dec(v___x_261_);
v___x_264_ = lp_choreo_Choreo_Poly_mul(v___x_260_, v___x_263_);
v___x_265_ = lp_choreo_Choreo_Poly_scale(v_den_252_, v___x_264_);
v___x_266_ = lp_choreo_Choreo_Poly_sub(v___x_259_, v___x_265_);
lean_dec(v___x_259_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPolyConst___boxed(lean_object* v_p_267_, lean_object* v_num_268_, lean_object* v_den_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = lp_choreo_Choreo_speedPolyConst(v_p_267_, v_num_268_, v_den_269_);
lean_dec(v_den_269_);
lean_dec(v_num_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPoly(lean_object* v_p_271_, lean_object* v_num_272_, lean_object* v_den_273_){
_start:
{
lean_object* v_W_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v_W_274_ = lean_ctor_get(v_p_271_, 2);
lean_inc(v_W_274_);
v___x_275_ = lp_choreo_Choreo_Poly_deriv(v_W_274_);
v___x_276_ = lp_choreo_Choreo_Poly_allZero(v___x_275_);
lean_dec(v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lp_choreo_Choreo_speedPolyFull(v_p_271_, v_num_272_, v_den_273_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lp_choreo_Choreo_speedPolyConst(v_p_271_, v_num_272_, v_den_273_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_speedPoly___boxed(lean_object* v_p_279_, lean_object* v_num_280_, lean_object* v_den_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = lp_choreo_Choreo_speedPoly(v_p_279_, v_num_280_, v_den_281_);
lean_dec(v_den_281_);
lean_dec(v_num_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitPoly(lean_object* v_p_283_, lean_object* v_cx_284_, lean_object* v_cy_285_, lean_object* v_r2_286_){
_start:
{
lean_object* v_X_287_; lean_object* v_Y_288_; lean_object* v_W_289_; lean_object* v___x_290_; lean_object* v_u_291_; lean_object* v___x_292_; lean_object* v_v_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_X_287_ = lean_ctor_get(v_p_283_, 0);
lean_inc(v_X_287_);
v_Y_288_ = lean_ctor_get(v_p_283_, 1);
lean_inc(v_Y_288_);
v_W_289_ = lean_ctor_get(v_p_283_, 2);
lean_inc_n(v_W_289_, 4);
lean_dec_ref(v_p_283_);
v___x_290_ = lp_choreo_Choreo_Poly_scale(v_cx_284_, v_W_289_);
v_u_291_ = lp_choreo_Choreo_Poly_sub(v_X_287_, v___x_290_);
lean_dec(v_X_287_);
v___x_292_ = lp_choreo_Choreo_Poly_scale(v_cy_285_, v_W_289_);
v_v_293_ = lp_choreo_Choreo_Poly_sub(v_Y_288_, v___x_292_);
lean_dec(v_Y_288_);
lean_inc(v_u_291_);
v___x_294_ = lp_choreo_Choreo_Poly_mul(v_u_291_, v_u_291_);
lean_inc(v_v_293_);
v___x_295_ = lp_choreo_Choreo_Poly_mul(v_v_293_, v_v_293_);
v___x_296_ = lp_choreo_Choreo_Poly_add(v___x_294_, v___x_295_);
lean_dec(v___x_294_);
v___x_297_ = lp_choreo_Choreo_Poly_mul(v_W_289_, v_W_289_);
v___x_298_ = lp_choreo_Choreo_Poly_scale(v_r2_286_, v___x_297_);
v___x_299_ = lp_choreo_Choreo_Poly_sub(v___x_296_, v___x_298_);
lean_dec(v___x_296_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitPoly___boxed(lean_object* v_p_300_, lean_object* v_cx_301_, lean_object* v_cy_302_, lean_object* v_r2_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = lp_choreo_Choreo_orbitPoly(v_p_300_, v_cx_301_, v_cy_302_, v_r2_303_);
lean_dec(v_r2_303_);
lean_dec(v_cy_302_);
lean_dec(v_cx_301_);
return v_res_304_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_first___closed__0(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_nat_to_int(v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_first(lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_307_) == 0)
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
return v___x_308_;
}
else
{
lean_object* v_head_309_; 
v_head_309_ = lean_ctor_get(v_x_307_, 0);
lean_inc(v_head_309_);
return v_head_309_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_first___boxed(lean_object* v_x_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = lp_choreo_Choreo_Poly_first(v_x_310_);
lean_dec(v_x_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_last(lean_object* v_x_312_){
_start:
{
if (lean_obj_tag(v_x_312_) == 0)
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
return v___x_313_;
}
else
{
lean_object* v_tail_314_; 
v_tail_314_ = lean_ctor_get(v_x_312_, 1);
if (lean_obj_tag(v_tail_314_) == 0)
{
lean_object* v_head_315_; 
v_head_315_ = lean_ctor_get(v_x_312_, 0);
lean_inc(v_head_315_);
return v_head_315_;
}
else
{
v_x_312_ = v_tail_314_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_last___boxed(lean_object* v_x_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = lp_choreo_Choreo_Poly_last(v_x_317_);
lean_dec(v_x_317_);
return v_res_318_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object* v_p_319_, lean_object* v_s_320_){
_start:
{
lean_object* v_X_321_; lean_object* v_Y_322_; lean_object* v_W_323_; lean_object* v_x_324_; lean_object* v_y_325_; lean_object* v_w_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v_X_321_ = lean_ctor_get(v_p_319_, 0);
v_Y_322_ = lean_ctor_get(v_p_319_, 1);
v_W_323_ = lean_ctor_get(v_p_319_, 2);
v_x_324_ = lean_ctor_get(v_s_320_, 0);
v_y_325_ = lean_ctor_get(v_s_320_, 1);
v_w_326_ = lean_ctor_get(v_s_320_, 2);
v___x_327_ = lp_choreo_Choreo_Poly_last(v_X_321_);
v___x_328_ = lean_int_mul(v___x_327_, v_w_326_);
lean_dec(v___x_327_);
v___x_329_ = lp_choreo_Choreo_Poly_last(v_W_323_);
v___x_330_ = lean_int_mul(v_x_324_, v___x_329_);
v___x_331_ = lean_int_dec_eq(v___x_328_, v___x_330_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
if (v___x_331_ == 0)
{
lean_dec(v___x_329_);
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_332_ = lp_choreo_Choreo_Poly_last(v_Y_322_);
v___x_333_ = lean_int_mul(v___x_332_, v_w_326_);
lean_dec(v___x_332_);
v___x_334_ = lean_int_mul(v_y_325_, v___x_329_);
lean_dec(v___x_329_);
v___x_335_ = lean_int_dec_eq(v___x_333_, v___x_334_);
lean_dec(v___x_334_);
lean_dec(v___x_333_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_reachesSlot___boxed(lean_object* v_p_336_, lean_object* v_s_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = lp_choreo_Choreo_Path_reachesSlot(v_p_336_, v_s_337_);
lean_dec_ref(v_s_337_);
lean_dec_ref(v_p_336_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Config_wf(lean_object* v_c_340_){
_start:
{
lean_object* v_dmin_341_; lean_object* v_ticksPerBeat_342_; lean_object* v_bpmNum_343_; lean_object* v_bpmDen_344_; lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v_dmin_341_ = lean_ctor_get(v_c_340_, 1);
v_ticksPerBeat_342_ = lean_ctor_get(v_c_340_, 4);
v_bpmNum_343_ = lean_ctor_get(v_c_340_, 5);
v_bpmDen_344_ = lean_ctor_get(v_c_340_, 6);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
v___x_347_ = lean_int_dec_le(v___x_346_, v_dmin_341_);
if (v___x_347_ == 0)
{
return v___x_347_;
}
else
{
uint8_t v___x_348_; 
v___x_348_ = lean_nat_dec_lt(v___x_345_, v_bpmNum_343_);
if (v___x_348_ == 0)
{
return v___x_348_;
}
else
{
uint8_t v___x_349_; 
v___x_349_ = lean_nat_dec_lt(v___x_345_, v_bpmDen_344_);
if (v___x_349_ == 0)
{
return v___x_349_;
}
else
{
uint8_t v___x_350_; 
v___x_350_ = lean_nat_dec_lt(v___x_345_, v_ticksPerBeat_342_);
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Config_wf___boxed(lean_object* v_c_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = lp_choreo_Choreo_Config_wf(v_c_351_);
lean_dec_ref(v_c_351_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_pairCert(lean_object* v_ph_356_, lean_object* v_i_357_, lean_object* v_j_358_){
_start:
{
lean_object* v_certs_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_certs_359_ = lean_ctor_get(v_ph_356_, 4);
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_361_ = lean_nat_sub(v_i_357_, v___x_360_);
v___x_362_ = lean_nat_mul(v_i_357_, v___x_361_);
lean_dec(v___x_361_);
v___x_363_ = lean_nat_shiftr(v___x_362_, v___x_360_);
lean_dec(v___x_362_);
v___x_364_ = lean_nat_add(v___x_363_, v_j_358_);
lean_dec(v___x_363_);
v___x_365_ = ((lean_object*)(lp_choreo_Choreo_Phase_pairCert___closed__0));
v___x_366_ = l_List_getD___redArg(v_certs_359_, v___x_364_, v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_pairCert___boxed(lean_object* v_ph_367_, lean_object* v_i_368_, lean_object* v_j_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = lp_choreo_Choreo_Phase_pairCert(v_ph_367_, v_i_368_, v_j_369_);
lean_dec(v_j_369_);
lean_dec(v_i_368_);
lean_dec_ref(v_ph_367_);
return v_res_370_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0(lean_object* v_ph_371_, lean_object* v_i_372_, lean_object* v_c_373_, lean_object* v_x_374_){
_start:
{
if (lean_obj_tag(v_x_374_) == 0)
{
uint8_t v___x_375_; 
lean_dec(v_i_372_);
v___x_375_ = 1;
return v___x_375_;
}
else
{
lean_object* v_head_376_; lean_object* v_tail_377_; lean_object* v_dmin_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v_head_376_ = lean_ctor_get(v_x_374_, 0);
lean_inc(v_head_376_);
v_tail_377_ = lean_ctor_get(v_x_374_, 1);
lean_inc(v_tail_377_);
lean_dec_ref_known(v_x_374_, 2);
v_dmin_378_ = lean_ctor_get(v_c_373_, 1);
v___x_379_ = lp_choreo_Choreo_Phase_pairCert(v_ph_371_, v_i_372_, v_head_376_);
lean_inc(v_i_372_);
v___x_380_ = lp_choreo_Choreo_Phase_path(v_ph_371_, v_i_372_);
v___x_381_ = lp_choreo_Choreo_Phase_path(v_ph_371_, v_head_376_);
v___x_382_ = lp_choreo_Choreo_Cert_check(v___x_379_, v___x_380_, v___x_381_, v_dmin_378_);
if (v___x_382_ == 0)
{
lean_dec(v_tail_377_);
lean_dec(v_i_372_);
return v___x_382_;
}
else
{
v_x_374_ = v_tail_377_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0___boxed(lean_object* v_ph_384_, lean_object* v_i_385_, lean_object* v_c_386_, lean_object* v_x_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0(v_ph_384_, v_i_385_, v_c_386_, v_x_387_);
lean_dec_ref(v_c_386_);
lean_dec_ref(v_ph_384_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1(lean_object* v_ph_390_, lean_object* v_c_391_, lean_object* v_x_392_){
_start:
{
if (lean_obj_tag(v_x_392_) == 0)
{
uint8_t v___x_393_; 
v___x_393_ = 1;
return v___x_393_;
}
else
{
lean_object* v_head_394_; lean_object* v_tail_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v_head_394_ = lean_ctor_get(v_x_392_, 0);
lean_inc_n(v_head_394_, 2);
v_tail_395_ = lean_ctor_get(v_x_392_, 1);
lean_inc(v_tail_395_);
lean_dec_ref_known(v_x_392_, 2);
v___x_396_ = l_List_range(v_head_394_);
v___x_397_ = lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__0(v_ph_390_, v_head_394_, v_c_391_, v___x_396_);
if (v___x_397_ == 0)
{
lean_dec(v_tail_395_);
return v___x_397_;
}
else
{
v_x_392_ = v_tail_395_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1___boxed(lean_object* v_ph_399_, lean_object* v_c_400_, lean_object* v_x_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1(v_ph_399_, v_c_400_, v_x_401_);
lean_dec_ref(v_c_400_);
lean_dec_ref(v_ph_399_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkClear(lean_object* v_c_404_, lean_object* v_ph_405_){
_start:
{
lean_object* v_n_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_n_406_ = lean_ctor_get(v_c_404_, 0);
lean_inc(v_n_406_);
v___x_407_ = l_List_range(v_n_406_);
v___x_408_ = lp_choreo_List_all___at___00Choreo_Phase_checkClear_spec__1(v_ph_405_, v_c_404_, v___x_407_);
lean_dec_ref(v_c_404_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkClear___boxed(lean_object* v_c_409_, lean_object* v_ph_410_){
_start:
{
uint8_t v_res_411_; lean_object* v_r_412_; 
v_res_411_ = lp_choreo_Choreo_Phase_checkClear(v_c_409_, v_ph_410_);
lean_dec_ref(v_ph_410_);
v_r_412_ = lean_box(v_res_411_);
return v_r_412_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0(lean_object* v_ph_413_, lean_object* v_c_414_, lean_object* v_x_415_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
uint8_t v___x_416_; 
lean_dec_ref(v_c_414_);
v___x_416_ = 1;
return v___x_416_;
}
else
{
lean_object* v_head_417_; lean_object* v_tail_418_; uint8_t v___y_420_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_head_417_ = lean_ctor_get(v_x_415_, 0);
lean_inc_n(v_head_417_, 2);
v_tail_418_ = lean_ctor_get(v_x_415_, 1);
lean_inc(v_tail_418_);
lean_dec_ref_known(v_x_415_, 2);
v___x_433_ = lp_choreo_Choreo_Phase_path(v_ph_413_, v_head_417_);
v___x_434_ = lp_choreo_Choreo_Path_wf(v___x_433_);
if (v___x_434_ == 0)
{
lean_dec_ref(v___x_433_);
v___y_420_ = v___x_434_;
goto v___jp_419_;
}
else
{
lean_object* v_bounds_435_; uint8_t v___x_436_; 
v_bounds_435_ = lean_ctor_get(v_ph_413_, 3);
v___x_436_ = lp_choreo_Choreo_Path_inRect(v___x_433_, v_bounds_435_);
v___y_420_ = v___x_436_;
goto v___jp_419_;
}
v___jp_419_:
{
if (v___y_420_ == 0)
{
lean_dec(v_tail_418_);
lean_dec(v_head_417_);
lean_dec_ref(v_c_414_);
return v___y_420_;
}
else
{
lean_object* v_vmax_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v_vmax_421_ = lean_ctor_get(v_c_414_, 2);
v___x_422_ = lean_unsigned_to_nat(5u);
v___x_423_ = lp_choreo_Choreo_Phase_path(v_ph_413_, v_head_417_);
v___x_424_ = lean_int_mul(v_vmax_421_, v_vmax_421_);
lean_inc_ref_n(v_c_414_, 2);
v___x_425_ = lp_choreo_Choreo_Config_durNum(v_c_414_, v_ph_413_);
v___x_426_ = lean_int_mul(v___x_425_, v___x_425_);
lean_dec(v___x_425_);
v___x_427_ = lean_int_mul(v___x_424_, v___x_426_);
lean_dec(v___x_426_);
lean_dec(v___x_424_);
v___x_428_ = lp_choreo_Choreo_Config_durDen(v_c_414_);
v___x_429_ = lean_int_mul(v___x_428_, v___x_428_);
lean_dec(v___x_428_);
v___x_430_ = lp_choreo_Choreo_speedPoly(v___x_423_, v___x_427_, v___x_429_);
lean_dec(v___x_429_);
lean_dec(v___x_427_);
v___x_431_ = lp_choreo_Choreo_Poly_bern(v___x_422_, v___x_430_);
if (v___x_431_ == 0)
{
lean_dec(v_tail_418_);
lean_dec_ref(v_c_414_);
return v___x_431_;
}
else
{
v_x_415_ = v_tail_418_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0___boxed(lean_object* v_ph_437_, lean_object* v_c_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0(v_ph_437_, v_c_438_, v_x_439_);
lean_dec_ref(v_ph_437_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkPaths(lean_object* v_c_442_, lean_object* v_ph_443_){
_start:
{
lean_object* v_n_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v_n_444_ = lean_ctor_get(v_c_442_, 0);
lean_inc(v_n_444_);
v___x_445_ = l_List_range(v_n_444_);
v___x_446_ = lp_choreo_List_all___at___00Choreo_Phase_checkPaths_spec__0(v_ph_443_, v_c_442_, v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkPaths___boxed(lean_object* v_c_447_, lean_object* v_ph_448_){
_start:
{
uint8_t v_res_449_; lean_object* v_r_450_; 
v_res_449_ = lp_choreo_Choreo_Phase_checkPaths(v_c_447_, v_ph_448_);
lean_dec_ref(v_ph_448_);
v_r_450_ = lean_box(v_res_449_);
return v_r_450_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1(lean_object* v_ph_451_, lean_object* v_x_452_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
uint8_t v___x_453_; 
v___x_453_ = 1;
return v___x_453_;
}
else
{
lean_object* v_head_454_; lean_object* v_tail_455_; uint8_t v___y_457_; lean_object* v_i_459_; lean_object* v_cx_460_; lean_object* v_cy_461_; lean_object* v_r2_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_head_454_ = lean_ctor_get(v_x_452_, 0);
lean_inc(v_head_454_);
v_tail_455_ = lean_ctor_get(v_x_452_, 1);
lean_inc(v_tail_455_);
lean_dec_ref_known(v_x_452_, 2);
v_i_459_ = lean_ctor_get(v_head_454_, 0);
lean_inc(v_i_459_);
v_cx_460_ = lean_ctor_get(v_head_454_, 1);
lean_inc(v_cx_460_);
v_cy_461_ = lean_ctor_get(v_head_454_, 2);
lean_inc(v_cy_461_);
v_r2_462_ = lean_ctor_get(v_head_454_, 3);
lean_inc(v_r2_462_);
lean_dec(v_head_454_);
v___x_463_ = lp_choreo_Choreo_Phase_path(v_ph_451_, v_i_459_);
lean_inc_ref(v___x_463_);
v___x_464_ = lp_choreo_Choreo_orbitPoly(v___x_463_, v_cx_460_, v_cy_461_, v_r2_462_);
lean_dec(v_r2_462_);
lean_dec(v_cy_461_);
lean_dec(v_cx_460_);
v___x_465_ = lp_choreo_Choreo_Poly_allZero(v___x_464_);
lean_dec(v___x_464_);
if (v___x_465_ == 0)
{
lean_dec_ref(v___x_463_);
v___y_457_ = v___x_465_;
goto v___jp_456_;
}
else
{
uint8_t v___x_466_; 
v___x_466_ = lp_choreo_Choreo_Path_wf(v___x_463_);
lean_dec_ref(v___x_463_);
v___y_457_ = v___x_466_;
goto v___jp_456_;
}
v___jp_456_:
{
if (v___y_457_ == 0)
{
lean_dec(v_tail_455_);
return v___y_457_;
}
else
{
v_x_452_ = v_tail_455_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1___boxed(lean_object* v_ph_467_, lean_object* v_x_468_){
_start:
{
uint8_t v_res_469_; lean_object* v_r_470_; 
v_res_469_ = lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1(v_ph_467_, v_x_468_);
lean_dec_ref(v_ph_467_);
v_r_470_ = lean_box(v_res_469_);
return v_r_470_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0(lean_object* v_ph_471_, lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
uint8_t v___x_473_; 
v___x_473_ = 1;
return v___x_473_;
}
else
{
lean_object* v_head_474_; lean_object* v_tail_475_; uint8_t v___y_477_; lean_object* v_i_479_; lean_object* v_j_480_; lean_object* v_num_481_; lean_object* v_den_482_; uint8_t v___y_484_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v_head_474_ = lean_ctor_get(v_x_472_, 0);
lean_inc(v_head_474_);
v_tail_475_ = lean_ctor_get(v_x_472_, 1);
lean_inc(v_tail_475_);
lean_dec_ref_known(v_x_472_, 2);
v_i_479_ = lean_ctor_get(v_head_474_, 0);
lean_inc(v_i_479_);
v_j_480_ = lean_ctor_get(v_head_474_, 1);
lean_inc_n(v_j_480_, 2);
v_num_481_ = lean_ctor_get(v_head_474_, 2);
lean_inc(v_num_481_);
v_den_482_ = lean_ctor_get(v_head_474_, 3);
lean_inc(v_den_482_);
lean_dec(v_head_474_);
v___x_490_ = lp_choreo_Choreo_Phase_path(v_ph_471_, v_i_479_);
v___x_491_ = lp_choreo_Choreo_Phase_path(v_ph_471_, v_j_480_);
lean_inc_ref(v___x_490_);
v___x_492_ = lp_choreo_Choreo_rigidPoly(v___x_490_, v___x_491_, v_num_481_, v_den_482_);
lean_dec(v_num_481_);
v___x_493_ = lp_choreo_Choreo_Poly_allZero(v___x_492_);
lean_dec(v___x_492_);
if (v___x_493_ == 0)
{
lean_dec_ref(v___x_490_);
v___y_484_ = v___x_493_;
goto v___jp_483_;
}
else
{
uint8_t v___x_494_; 
v___x_494_ = lp_choreo_Choreo_Path_wf(v___x_490_);
lean_dec_ref(v___x_490_);
v___y_484_ = v___x_494_;
goto v___jp_483_;
}
v___jp_476_:
{
if (v___y_477_ == 0)
{
lean_dec(v_tail_475_);
return v___y_477_;
}
else
{
v_x_472_ = v_tail_475_;
goto _start;
}
}
v___jp_483_:
{
if (v___y_484_ == 0)
{
lean_dec(v_den_482_);
lean_dec(v_j_480_);
lean_dec(v_tail_475_);
return v___y_484_;
}
else
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = lp_choreo_Choreo_Phase_path(v_ph_471_, v_j_480_);
v___x_486_ = lp_choreo_Choreo_Path_wf(v___x_485_);
lean_dec_ref(v___x_485_);
if (v___x_486_ == 0)
{
lean_dec(v_den_482_);
v___y_477_ = v___x_486_;
goto v___jp_476_;
}
else
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
v___x_488_ = lean_int_dec_eq(v_den_482_, v___x_487_);
lean_dec(v_den_482_);
if (v___x_488_ == 0)
{
v___y_477_ = v___x_486_;
goto v___jp_476_;
}
else
{
uint8_t v___x_489_; 
lean_dec(v_tail_475_);
v___x_489_ = 0;
return v___x_489_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0___boxed(lean_object* v_ph_495_, lean_object* v_x_496_){
_start:
{
uint8_t v_res_497_; lean_object* v_r_498_; 
v_res_497_ = lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0(v_ph_495_, v_x_496_);
lean_dec_ref(v_ph_495_);
v_r_498_ = lean_box(v_res_497_);
return v_r_498_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkInvariants(lean_object* v_ph_499_){
_start:
{
lean_object* v_rigid_500_; lean_object* v_orbits_501_; uint8_t v___x_502_; 
v_rigid_500_ = lean_ctor_get(v_ph_499_, 5);
v_orbits_501_ = lean_ctor_get(v_ph_499_, 6);
lean_inc(v_orbits_501_);
lean_inc(v_rigid_500_);
v___x_502_ = lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__0(v_ph_499_, v_rigid_500_);
if (v___x_502_ == 0)
{
lean_dec(v_orbits_501_);
lean_dec_ref(v_ph_499_);
return v___x_502_;
}
else
{
uint8_t v___x_503_; 
v___x_503_ = lp_choreo_List_all___at___00Choreo_Phase_checkInvariants_spec__1(v_ph_499_, v_orbits_501_);
lean_dec_ref(v_ph_499_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkInvariants___boxed(lean_object* v_ph_504_){
_start:
{
uint8_t v_res_505_; lean_object* v_r_506_; 
v_res_505_ = lp_choreo_Choreo_Phase_checkInvariants(v_ph_504_);
v_r_506_ = lean_box(v_res_505_);
return v_r_506_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_obj_once(&lp_choreo_Choreo_Cert_check___closed__0, &lp_choreo_Choreo_Cert_check___closed__0_once, _init_lp_choreo_Choreo_Cert_check___closed__0);
v___x_508_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
lean_ctor_set(v___x_509_, 2, v___x_507_);
return v___x_509_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1(lean_object* v_ph_510_, lean_object* v_val_511_, lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_512_) == 0)
{
uint8_t v___x_513_; 
lean_dec_ref(v_val_511_);
v___x_513_ = 1;
return v___x_513_;
}
else
{
lean_object* v_head_514_; lean_object* v_tail_515_; uint8_t v___y_517_; lean_object* v___x_528_; uint8_t v___x_529_; 
v_head_514_ = lean_ctor_get(v_x_512_, 0);
lean_inc_n(v_head_514_, 2);
v_tail_515_ = lean_ctor_get(v_x_512_, 1);
lean_inc(v_tail_515_);
lean_dec_ref_known(v_x_512_, 2);
v___x_528_ = lp_choreo_Choreo_Phase_path(v_ph_510_, v_head_514_);
v___x_529_ = lp_choreo_Choreo_Path_wf(v___x_528_);
lean_dec_ref(v___x_528_);
if (v___x_529_ == 0)
{
v___y_517_ = v___x_529_;
goto v___jp_516_;
}
else
{
lean_object* v_formation_530_; lean_object* v_assign_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v_w_538_; uint8_t v___x_539_; 
v_formation_530_ = lean_ctor_get(v_val_511_, 0);
v_assign_531_ = lean_ctor_get(v_val_511_, 1);
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = lean_obj_once(&lp_choreo_Choreo_Poly_first___closed__0, &lp_choreo_Choreo_Poly_first___closed__0_once, _init_lp_choreo_Choreo_Poly_first___closed__0);
lean_inc_ref(v_formation_530_);
v___x_534_ = lp_choreo_Choreo_Formation_slots(v_formation_530_);
lean_inc(v_head_514_);
v___x_535_ = l_List_getD___redArg(v_assign_531_, v_head_514_, v___x_532_);
v___x_536_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0, &lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0);
v___x_537_ = l_List_getD___redArg(v___x_534_, v___x_535_, v___x_536_);
lean_dec(v___x_534_);
v_w_538_ = lean_ctor_get(v___x_537_, 2);
lean_inc(v_w_538_);
lean_dec(v___x_537_);
v___x_539_ = lean_int_dec_lt(v___x_533_, v_w_538_);
lean_dec(v_w_538_);
v___y_517_ = v___x_539_;
goto v___jp_516_;
}
v___jp_516_:
{
if (v___y_517_ == 0)
{
lean_dec(v_tail_515_);
lean_dec(v_head_514_);
lean_dec_ref(v_val_511_);
return v___y_517_;
}
else
{
lean_object* v_formation_518_; lean_object* v_assign_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v_formation_518_ = lean_ctor_get(v_val_511_, 0);
v_assign_519_ = lean_ctor_get(v_val_511_, 1);
lean_inc(v_head_514_);
v___x_520_ = lp_choreo_Choreo_Phase_path(v_ph_510_, v_head_514_);
lean_inc_ref(v_formation_518_);
v___x_521_ = lp_choreo_Choreo_Formation_slots(v_formation_518_);
v___x_522_ = lean_unsigned_to_nat(0u);
v___x_523_ = l_List_getD___redArg(v_assign_519_, v_head_514_, v___x_522_);
v___x_524_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0, &lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___closed__0);
v___x_525_ = l_List_getD___redArg(v___x_521_, v___x_523_, v___x_524_);
lean_dec(v___x_521_);
v___x_526_ = lp_choreo_Choreo_Path_reachesSlot(v___x_520_, v___x_525_);
lean_dec(v___x_525_);
lean_dec_ref(v___x_520_);
if (v___x_526_ == 0)
{
lean_dec(v_tail_515_);
lean_dec_ref(v_val_511_);
return v___x_526_;
}
else
{
v_x_512_ = v_tail_515_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1___boxed(lean_object* v_ph_540_, lean_object* v_val_541_, lean_object* v_x_542_){
_start:
{
uint8_t v_res_543_; lean_object* v_r_544_; 
v_res_543_ = lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1(v_ph_540_, v_val_541_, v_x_542_);
lean_dec_ref(v_ph_540_);
v_r_544_ = lean_box(v_res_543_);
return v_r_544_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0(lean_object* v_x_545_, lean_object* v_x_546_){
_start:
{
if (lean_obj_tag(v_x_545_) == 0)
{
return v_x_545_;
}
else
{
lean_object* v_head_547_; lean_object* v_tail_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_557_; 
v_head_547_ = lean_ctor_get(v_x_545_, 0);
v_tail_548_ = lean_ctor_get(v_x_545_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_545_);
if (v_isSharedCheck_557_ == 0)
{
v___x_550_ = v_x_545_;
v_isShared_551_ = v_isSharedCheck_557_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_tail_548_);
lean_inc(v_head_547_);
lean_dec(v_x_545_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_557_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
uint8_t v___x_552_; 
v___x_552_ = lean_nat_dec_eq(v_head_547_, v_x_546_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0(v_tail_548_, v_x_546_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 1, v___x_553_);
v___x_555_ = v___x_550_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_head_547_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
else
{
lean_del_object(v___x_550_);
lean_dec(v_head_547_);
return v_tail_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0___boxed(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0(v_x_558_, v_x_559_);
lean_dec(v_x_559_);
return v_res_560_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(lean_object* v_x_561_, lean_object* v_x_562_){
_start:
{
if (lean_obj_tag(v_x_561_) == 0)
{
uint8_t v___x_563_; 
v___x_563_ = l_List_isEmpty___redArg(v_x_562_);
lean_dec(v_x_562_);
return v___x_563_;
}
else
{
lean_object* v_head_564_; lean_object* v_tail_565_; uint8_t v___x_566_; 
v_head_564_ = lean_ctor_get(v_x_561_, 0);
v_tail_565_ = lean_ctor_get(v_x_561_, 1);
v___x_566_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_564_, v_x_562_);
if (v___x_566_ == 0)
{
lean_dec(v_x_562_);
return v___x_566_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lp_choreo_List_erase___at___00List_isPerm___at___00Choreo_Phase_checkTarget_spec__0_spec__0(v_x_562_, v_head_564_);
v_x_561_ = v_tail_565_;
v_x_562_ = v___x_567_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0___boxed(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
uint8_t v_res_571_; lean_object* v_r_572_; 
v_res_571_ = lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(v_x_569_, v_x_570_);
lean_dec(v_x_569_);
v_r_572_ = lean_box(v_res_571_);
return v_r_572_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_checkTarget(lean_object* v_c_573_, lean_object* v_ph_574_){
_start:
{
lean_object* v_target_575_; 
v_target_575_ = lean_ctor_get(v_ph_574_, 7);
if (lean_obj_tag(v_target_575_) == 0)
{
uint8_t v___x_576_; 
lean_dec_ref(v_ph_574_);
lean_dec_ref(v_c_573_);
v___x_576_ = 1;
return v___x_576_;
}
else
{
lean_object* v_val_577_; lean_object* v_formation_578_; lean_object* v_assign_579_; uint8_t v___y_581_; uint8_t v___x_586_; 
v_val_577_ = lean_ctor_get(v_target_575_, 0);
lean_inc(v_val_577_);
v_formation_578_ = lean_ctor_get(v_val_577_, 0);
v_assign_579_ = lean_ctor_get(v_val_577_, 1);
lean_inc_ref(v_formation_578_);
v___x_586_ = lp_choreo_Choreo_Formation_wellFormed(v_formation_578_);
if (v___x_586_ == 0)
{
v___y_581_ = v___x_586_;
goto v___jp_580_;
}
else
{
lean_object* v_n_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_n_587_ = lean_ctor_get(v_c_573_, 0);
lean_inc_ref(v_formation_578_);
v___x_588_ = lp_choreo_Choreo_Formation_slots(v_formation_578_);
v___x_589_ = l_List_lengthTR___redArg(v___x_588_);
lean_dec(v___x_588_);
v___x_590_ = lean_nat_dec_eq(v___x_589_, v_n_587_);
lean_dec(v___x_589_);
v___y_581_ = v___x_590_;
goto v___jp_580_;
}
v___jp_580_:
{
if (v___y_581_ == 0)
{
lean_dec(v_val_577_);
lean_dec_ref(v_ph_574_);
lean_dec_ref(v_c_573_);
return v___y_581_;
}
else
{
lean_object* v_n_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v_n_582_ = lean_ctor_get(v_c_573_, 0);
lean_inc(v_n_582_);
lean_dec_ref(v_c_573_);
v___x_583_ = l_List_range(v_n_582_);
lean_inc(v___x_583_);
v___x_584_ = lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(v_assign_579_, v___x_583_);
if (v___x_584_ == 0)
{
lean_dec(v___x_583_);
lean_dec(v_val_577_);
lean_dec_ref(v_ph_574_);
return v___x_584_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = lp_choreo_List_all___at___00Choreo_Phase_checkTarget_spec__1(v_ph_574_, v_val_577_, v___x_583_);
lean_dec_ref(v_ph_574_);
return v___x_585_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_checkTarget___boxed(lean_object* v_c_591_, lean_object* v_ph_592_){
_start:
{
uint8_t v_res_593_; lean_object* v_r_594_; 
v_res_593_ = lp_choreo_Choreo_Phase_checkTarget(v_c_591_, v_ph_592_);
v_r_594_ = lean_box(v_res_593_);
return v_r_594_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Phase_check(lean_object* v_c_595_, lean_object* v_ph_596_){
_start:
{
uint8_t v___y_598_; uint8_t v___x_602_; 
v___x_602_ = lp_choreo_Choreo_Config_wf(v_c_595_);
if (v___x_602_ == 0)
{
v___y_598_ = v___x_602_;
goto v___jp_597_;
}
else
{
uint8_t v___x_603_; 
lean_inc_ref(v_c_595_);
v___x_603_ = lp_choreo_Choreo_Phase_checkPaths(v_c_595_, v_ph_596_);
v___y_598_ = v___x_603_;
goto v___jp_597_;
}
v___jp_597_:
{
if (v___y_598_ == 0)
{
lean_dec_ref(v_ph_596_);
lean_dec_ref(v_c_595_);
return v___y_598_;
}
else
{
uint8_t v___x_599_; 
lean_inc_ref(v_c_595_);
v___x_599_ = lp_choreo_Choreo_Phase_checkClear(v_c_595_, v_ph_596_);
if (v___x_599_ == 0)
{
lean_dec_ref(v_ph_596_);
lean_dec_ref(v_c_595_);
return v___x_599_;
}
else
{
uint8_t v___x_600_; 
lean_inc_ref(v_ph_596_);
v___x_600_ = lp_choreo_Choreo_Phase_checkInvariants(v_ph_596_);
if (v___x_600_ == 0)
{
lean_dec_ref(v_ph_596_);
lean_dec_ref(v_c_595_);
return v___x_600_;
}
else
{
uint8_t v___x_601_; 
v___x_601_ = lp_choreo_Choreo_Phase_checkTarget(v_c_595_, v_ph_596_);
return v___x_601_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_check___boxed(lean_object* v_c_604_, lean_object* v_ph_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = lp_choreo_Choreo_Phase_check(v_c_604_, v_ph_605_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Model(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Check(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_splitLimit = _init_lp_choreo_Choreo_splitLimit();
lean_mark_persistent(lp_choreo_Choreo_splitLimit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
