// Lean compiler output
// Module: Choreo.Intent
// Imports: public import Init public meta import Init public import Choreo.Routine
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
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_last(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_scale(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Formation_wellFormed(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_orbitPoly(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Poly_allZero(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_startsIn_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_startsIn_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsIn_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsIn_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysIn_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysIn_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_forms_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_forms_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_flips_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_flips_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsShape_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsShape_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysOnCircle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysOnCircle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsLine_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsLine_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsInLine_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsInLine_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsMirrored_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsMirrored_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Ask_isMovement(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_isMovement___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_nextPairs(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_startInBox(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_startInBox___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_endInBox(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_endInBox___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_flipOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_flipOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Link_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Link_check___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_endOffsetOk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOffsetOk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_endMirrorOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_endMirrorOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Rect_same(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Rect_same___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0;
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1;
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2;
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Ask_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_check___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Phase_checkTarget_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Phase_checkTarget_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_Holds_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_Holds_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_lineBrokenAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_lineBrokenAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
default: 
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorIdx___boxed(lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_choreo_Choreo_Ask_ctorIdx(v_x_12_);
lean_dec_ref(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim___redArg(lean_object* v_t_14_, lean_object* v_k_15_){
_start:
{
switch(lean_obj_tag(v_t_14_))
{
case 0:
{
lean_object* v_k_16_; lean_object* v_dancers_17_; lean_object* v_box_18_; lean_object* v___x_19_; 
v_k_16_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_16_);
v_dancers_17_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_dancers_17_);
v_box_18_ = lean_ctor_get(v_t_14_, 2);
lean_inc_ref(v_box_18_);
lean_dec_ref_known(v_t_14_, 3);
v___x_19_ = lean_apply_3(v_k_15_, v_k_16_, v_dancers_17_, v_box_18_);
return v___x_19_;
}
case 1:
{
lean_object* v_k_20_; lean_object* v_dancers_21_; lean_object* v_box_22_; lean_object* v___x_23_; 
v_k_20_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_20_);
v_dancers_21_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_dancers_21_);
v_box_22_ = lean_ctor_get(v_t_14_, 2);
lean_inc_ref(v_box_22_);
lean_dec_ref_known(v_t_14_, 3);
v___x_23_ = lean_apply_3(v_k_15_, v_k_20_, v_dancers_21_, v_box_22_);
return v___x_23_;
}
case 2:
{
lean_object* v_k_24_; lean_object* v_box_25_; lean_object* v___x_26_; 
v_k_24_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_24_);
v_box_25_ = lean_ctor_get(v_t_14_, 1);
lean_inc_ref(v_box_25_);
lean_dec_ref_known(v_t_14_, 2);
v___x_26_ = lean_apply_2(v_k_15_, v_k_24_, v_box_25_);
return v___x_26_;
}
case 3:
{
lean_object* v_k_27_; lean_object* v_f_28_; lean_object* v_assign_29_; lean_object* v___x_30_; 
v_k_27_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_27_);
v_f_28_ = lean_ctor_get(v_t_14_, 1);
lean_inc_ref(v_f_28_);
v_assign_29_ = lean_ctor_get(v_t_14_, 2);
lean_inc(v_assign_29_);
lean_dec_ref_known(v_t_14_, 3);
v___x_30_ = lean_apply_3(v_k_15_, v_k_27_, v_f_28_, v_assign_29_);
return v___x_30_;
}
case 5:
{
lean_object* v_k_31_; lean_object* v_links_32_; lean_object* v___x_33_; 
v_k_31_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_31_);
v_links_32_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_links_32_);
lean_dec_ref_known(v_t_14_, 2);
v___x_33_ = lean_apply_2(v_k_15_, v_k_31_, v_links_32_);
return v___x_33_;
}
case 6:
{
lean_object* v_k_34_; lean_object* v_dancers_35_; lean_object* v_cx_36_; lean_object* v_cy_37_; lean_object* v_r2_38_; lean_object* v___x_39_; 
v_k_34_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_34_);
v_dancers_35_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_dancers_35_);
v_cx_36_ = lean_ctor_get(v_t_14_, 2);
lean_inc(v_cx_36_);
v_cy_37_ = lean_ctor_get(v_t_14_, 3);
lean_inc(v_cy_37_);
v_r2_38_ = lean_ctor_get(v_t_14_, 4);
lean_inc(v_r2_38_);
lean_dec_ref_known(v_t_14_, 5);
v___x_39_ = lean_apply_5(v_k_15_, v_k_34_, v_dancers_35_, v_cx_36_, v_cy_37_, v_r2_38_);
return v___x_39_;
}
case 9:
{
lean_object* v_k_40_; lean_object* v_pairs_41_; lean_object* v_mirror_42_; lean_object* v___x_43_; 
v_k_40_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_40_);
v_pairs_41_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_pairs_41_);
v_mirror_42_ = lean_ctor_get(v_t_14_, 2);
lean_inc(v_mirror_42_);
lean_dec_ref_known(v_t_14_, 3);
v___x_43_ = lean_apply_3(v_k_15_, v_k_40_, v_pairs_41_, v_mirror_42_);
return v___x_43_;
}
default: 
{
lean_object* v_k_u2080_44_; lean_object* v_k_u2081_45_; lean_object* v_dancers_46_; lean_object* v_mirror_47_; lean_object* v___x_48_; 
v_k_u2080_44_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_k_u2080_44_);
v_k_u2081_45_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_k_u2081_45_);
v_dancers_46_ = lean_ctor_get(v_t_14_, 2);
lean_inc(v_dancers_46_);
v_mirror_47_ = lean_ctor_get(v_t_14_, 3);
lean_inc(v_mirror_47_);
lean_dec_ref(v_t_14_);
v___x_48_ = lean_apply_4(v_k_15_, v_k_u2080_44_, v_k_u2081_45_, v_dancers_46_, v_mirror_47_);
return v___x_48_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim(lean_object* v_motive_49_, lean_object* v_ctorIdx_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_k_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_51_, v_k_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_ctorElim___boxed(lean_object* v_motive_55_, lean_object* v_ctorIdx_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_k_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = lp_choreo_Choreo_Ask_ctorElim(v_motive_55_, v_ctorIdx_56_, v_t_57_, v_h_58_, v_k_59_);
lean_dec(v_ctorIdx_56_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_startsIn_elim___redArg(lean_object* v_t_61_, lean_object* v_startsIn_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_61_, v_startsIn_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_startsIn_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_startsIn_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_65_, v_startsIn_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsIn_elim___redArg(lean_object* v_t_69_, lean_object* v_endsIn_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_69_, v_endsIn_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsIn_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_endsIn_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_73_, v_endsIn_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysIn_elim___redArg(lean_object* v_t_77_, lean_object* v_staysIn_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_77_, v_staysIn_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysIn_elim(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_staysIn_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_81_, v_staysIn_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_forms_elim___redArg(lean_object* v_t_85_, lean_object* v_forms_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_85_, v_forms_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_forms_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_forms_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_89_, v_forms_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_flips_elim___redArg(lean_object* v_t_93_, lean_object* v_flips_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_93_, v_flips_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_flips_elim(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_flips_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_97_, v_flips_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsShape_elim___redArg(lean_object* v_t_101_, lean_object* v_keepsShape_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_101_, v_keepsShape_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsShape_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_keepsShape_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_105_, v_keepsShape_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysOnCircle_elim___redArg(lean_object* v_t_109_, lean_object* v_staysOnCircle_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_109_, v_staysOnCircle_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_staysOnCircle_elim(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_staysOnCircle_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_113_, v_staysOnCircle_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsLine_elim___redArg(lean_object* v_t_117_, lean_object* v_keepsLine_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_117_, v_keepsLine_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_keepsLine_elim(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_keepsLine_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_121_, v_keepsLine_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsInLine_elim___redArg(lean_object* v_t_125_, lean_object* v_endsInLine_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_125_, v_endsInLine_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsInLine_elim(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_endsInLine_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_129_, v_endsInLine_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsMirrored_elim___redArg(lean_object* v_t_133_, lean_object* v_endsMirrored_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_133_, v_endsMirrored_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_endsMirrored_elim(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_endsMirrored_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lp_choreo_Choreo_Ask_ctorElim___redArg(v_t_137_, v_endsMirrored_139_);
return v___x_140_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Ask_isMovement(lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 2)
{
uint8_t v___x_142_; 
v___x_142_ = 1;
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_isMovement___boxed(lean_object* v_x_144_){
_start:
{
uint8_t v_res_145_; lean_object* v_r_146_; 
v_res_145_ = lp_choreo_Choreo_Ask_isMovement(v_x_144_);
lean_dec_ref(v_x_144_);
v_r_146_ = lean_box(v_res_145_);
return v_r_146_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_nextPairs(lean_object* v_ds_147_){
_start:
{
if (lean_obj_tag(v_ds_147_) == 0)
{
lean_object* v___x_148_; 
v___x_148_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_ds_147_, v_ds_147_);
return v___x_148_;
}
else
{
lean_object* v_tail_149_; lean_object* v___x_150_; 
v_tail_149_ = lean_ctor_get(v_ds_147_, 1);
lean_inc(v_tail_149_);
v___x_150_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_ds_147_, v_tail_149_);
return v___x_150_;
}
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_startInBox(lean_object* v_p_151_, lean_object* v_b_152_){
_start:
{
uint8_t v___y_154_; uint8_t v___x_170_; 
v___x_170_ = lp_choreo_Choreo_Path_wf(v_p_151_);
if (v___x_170_ == 0)
{
v___y_154_ = v___x_170_;
goto v___jp_153_;
}
else
{
lean_object* v_xmin_171_; lean_object* v_X_172_; lean_object* v_W_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_xmin_171_ = lean_ctor_get(v_b_152_, 0);
v_X_172_ = lean_ctor_get(v_p_151_, 0);
v_W_173_ = lean_ctor_get(v_p_151_, 2);
v___x_174_ = lp_choreo_Choreo_Poly_first(v_W_173_);
v___x_175_ = lean_int_mul(v_xmin_171_, v___x_174_);
lean_dec(v___x_174_);
v___x_176_ = lp_choreo_Choreo_Poly_first(v_X_172_);
v___x_177_ = lean_int_dec_le(v___x_175_, v___x_176_);
lean_dec(v___x_176_);
lean_dec(v___x_175_);
v___y_154_ = v___x_177_;
goto v___jp_153_;
}
v___jp_153_:
{
if (v___y_154_ == 0)
{
return v___y_154_;
}
else
{
lean_object* v_X_155_; lean_object* v_Y_156_; lean_object* v_W_157_; lean_object* v_xmax_158_; lean_object* v_ymin_159_; lean_object* v_ymax_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v_X_155_ = lean_ctor_get(v_p_151_, 0);
v_Y_156_ = lean_ctor_get(v_p_151_, 1);
v_W_157_ = lean_ctor_get(v_p_151_, 2);
v_xmax_158_ = lean_ctor_get(v_b_152_, 1);
v_ymin_159_ = lean_ctor_get(v_b_152_, 2);
v_ymax_160_ = lean_ctor_get(v_b_152_, 3);
v___x_161_ = lp_choreo_Choreo_Poly_first(v_X_155_);
v___x_162_ = lp_choreo_Choreo_Poly_first(v_W_157_);
v___x_163_ = lean_int_mul(v_xmax_158_, v___x_162_);
v___x_164_ = lean_int_dec_le(v___x_161_, v___x_163_);
lean_dec(v___x_163_);
lean_dec(v___x_161_);
if (v___x_164_ == 0)
{
lean_dec(v___x_162_);
return v___x_164_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_165_ = lean_int_mul(v_ymin_159_, v___x_162_);
v___x_166_ = lp_choreo_Choreo_Poly_first(v_Y_156_);
v___x_167_ = lean_int_dec_le(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
if (v___x_167_ == 0)
{
lean_dec(v___x_166_);
lean_dec(v___x_162_);
return v___x_167_;
}
else
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = lean_int_mul(v_ymax_160_, v___x_162_);
lean_dec(v___x_162_);
v___x_169_ = lean_int_dec_le(v___x_166_, v___x_168_);
lean_dec(v___x_168_);
lean_dec(v___x_166_);
return v___x_169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_startInBox___boxed(lean_object* v_p_178_, lean_object* v_b_179_){
_start:
{
uint8_t v_res_180_; lean_object* v_r_181_; 
v_res_180_ = lp_choreo_Choreo_Path_startInBox(v_p_178_, v_b_179_);
lean_dec_ref(v_b_179_);
lean_dec_ref(v_p_178_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Path_endInBox(lean_object* v_p_182_, lean_object* v_b_183_){
_start:
{
uint8_t v___y_185_; uint8_t v___x_201_; 
v___x_201_ = lp_choreo_Choreo_Path_wf(v_p_182_);
if (v___x_201_ == 0)
{
v___y_185_ = v___x_201_;
goto v___jp_184_;
}
else
{
lean_object* v_xmin_202_; lean_object* v_X_203_; lean_object* v_W_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v_xmin_202_ = lean_ctor_get(v_b_183_, 0);
v_X_203_ = lean_ctor_get(v_p_182_, 0);
v_W_204_ = lean_ctor_get(v_p_182_, 2);
v___x_205_ = lp_choreo_Choreo_Poly_last(v_W_204_);
v___x_206_ = lean_int_mul(v_xmin_202_, v___x_205_);
lean_dec(v___x_205_);
v___x_207_ = lp_choreo_Choreo_Poly_last(v_X_203_);
v___x_208_ = lean_int_dec_le(v___x_206_, v___x_207_);
lean_dec(v___x_207_);
lean_dec(v___x_206_);
v___y_185_ = v___x_208_;
goto v___jp_184_;
}
v___jp_184_:
{
if (v___y_185_ == 0)
{
return v___y_185_;
}
else
{
lean_object* v_X_186_; lean_object* v_Y_187_; lean_object* v_W_188_; lean_object* v_xmax_189_; lean_object* v_ymin_190_; lean_object* v_ymax_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v_X_186_ = lean_ctor_get(v_p_182_, 0);
v_Y_187_ = lean_ctor_get(v_p_182_, 1);
v_W_188_ = lean_ctor_get(v_p_182_, 2);
v_xmax_189_ = lean_ctor_get(v_b_183_, 1);
v_ymin_190_ = lean_ctor_get(v_b_183_, 2);
v_ymax_191_ = lean_ctor_get(v_b_183_, 3);
v___x_192_ = lp_choreo_Choreo_Poly_last(v_X_186_);
v___x_193_ = lp_choreo_Choreo_Poly_last(v_W_188_);
v___x_194_ = lean_int_mul(v_xmax_189_, v___x_193_);
v___x_195_ = lean_int_dec_le(v___x_192_, v___x_194_);
lean_dec(v___x_194_);
lean_dec(v___x_192_);
if (v___x_195_ == 0)
{
lean_dec(v___x_193_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_int_mul(v_ymin_190_, v___x_193_);
v___x_197_ = lp_choreo_Choreo_Poly_last(v_Y_187_);
v___x_198_ = lean_int_dec_le(v___x_196_, v___x_197_);
lean_dec(v___x_196_);
if (v___x_198_ == 0)
{
lean_dec(v___x_197_);
lean_dec(v___x_193_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = lean_int_mul(v_ymax_191_, v___x_193_);
lean_dec(v___x_193_);
v___x_200_ = lean_int_dec_le(v___x_197_, v___x_199_);
lean_dec(v___x_199_);
lean_dec(v___x_197_);
return v___x_200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_endInBox___boxed(lean_object* v_p_209_, lean_object* v_b_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = lp_choreo_Choreo_Path_endInBox(v_p_209_, v_b_210_);
lean_dec_ref(v_b_210_);
lean_dec_ref(v_p_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_flipOk(lean_object* v_a_213_, lean_object* v_b_214_, lean_object* v_m_215_){
_start:
{
uint8_t v___y_217_; uint8_t v___x_238_; 
v___x_238_ = lp_choreo_Choreo_Path_wf(v_a_213_);
if (v___x_238_ == 0)
{
v___y_217_ = v___x_238_;
goto v___jp_216_;
}
else
{
uint8_t v___x_239_; 
v___x_239_ = lp_choreo_Choreo_Path_wf(v_b_214_);
v___y_217_ = v___x_239_;
goto v___jp_216_;
}
v___jp_216_:
{
if (v___y_217_ == 0)
{
return v___y_217_;
}
else
{
lean_object* v_X_218_; lean_object* v_Y_219_; lean_object* v_W_220_; lean_object* v_X_221_; lean_object* v_Y_222_; lean_object* v_W_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v_X_218_ = lean_ctor_get(v_b_214_, 0);
v_Y_219_ = lean_ctor_get(v_b_214_, 1);
v_W_220_ = lean_ctor_get(v_b_214_, 2);
v_X_221_ = lean_ctor_get(v_a_213_, 0);
v_Y_222_ = lean_ctor_get(v_a_213_, 1);
v_W_223_ = lean_ctor_get(v_a_213_, 2);
v___x_224_ = lp_choreo_Choreo_Poly_last(v_X_218_);
v___x_225_ = lp_choreo_Choreo_Poly_first(v_W_223_);
v___x_226_ = lean_int_mul(v___x_224_, v___x_225_);
lean_dec(v___x_224_);
v___x_227_ = lp_choreo_Choreo_Poly_first(v_X_221_);
v___x_228_ = lp_choreo_Choreo_Poly_last(v_W_220_);
v___x_229_ = lean_int_mul(v___x_227_, v___x_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_int_dec_eq(v___x_226_, v___x_229_);
lean_dec(v___x_229_);
lean_dec(v___x_226_);
if (v___x_230_ == 0)
{
lean_dec(v___x_228_);
lean_dec(v___x_225_);
return v___x_230_;
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_231_ = lp_choreo_Choreo_Poly_last(v_Y_219_);
v___x_232_ = lean_int_mul(v___x_231_, v___x_225_);
lean_dec(v___x_231_);
v___x_233_ = lean_int_mul(v_m_215_, v___x_225_);
lean_dec(v___x_225_);
v___x_234_ = lp_choreo_Choreo_Poly_first(v_Y_222_);
v___x_235_ = lean_int_sub(v___x_233_, v___x_234_);
lean_dec(v___x_234_);
lean_dec(v___x_233_);
v___x_236_ = lean_int_mul(v___x_235_, v___x_228_);
lean_dec(v___x_228_);
lean_dec(v___x_235_);
v___x_237_ = lean_int_dec_eq(v___x_232_, v___x_236_);
lean_dec(v___x_236_);
lean_dec(v___x_232_);
return v___x_237_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_flipOk___boxed(lean_object* v_a_240_, lean_object* v_b_241_, lean_object* v_m_242_){
_start:
{
uint8_t v_res_243_; lean_object* v_r_244_; 
v_res_243_ = lp_choreo_Choreo_flipOk(v_a_240_, v_b_241_, v_m_242_);
lean_dec(v_m_242_);
lean_dec_ref(v_b_241_);
lean_dec_ref(v_a_240_);
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Link_check(lean_object* v_ph_245_, lean_object* v_l_246_){
_start:
{
lean_object* v_leader_247_; lean_object* v_member_248_; lean_object* v_dx_249_; lean_object* v_dy_250_; lean_object* v_a_251_; lean_object* v_b_252_; uint8_t v___y_254_; uint8_t v___x_268_; 
v_leader_247_ = lean_ctor_get(v_l_246_, 0);
lean_inc(v_leader_247_);
v_member_248_ = lean_ctor_get(v_l_246_, 1);
lean_inc(v_member_248_);
v_dx_249_ = lean_ctor_get(v_l_246_, 2);
lean_inc(v_dx_249_);
v_dy_250_ = lean_ctor_get(v_l_246_, 3);
lean_inc(v_dy_250_);
lean_dec_ref(v_l_246_);
v_a_251_ = lp_choreo_Choreo_Phase_path(v_ph_245_, v_member_248_);
v_b_252_ = lp_choreo_Choreo_Phase_path(v_ph_245_, v_leader_247_);
v___x_268_ = lp_choreo_Choreo_Path_wf(v_a_251_);
if (v___x_268_ == 0)
{
v___y_254_ = v___x_268_;
goto v___jp_253_;
}
else
{
uint8_t v___x_269_; 
v___x_269_ = lp_choreo_Choreo_Path_wf(v_b_252_);
v___y_254_ = v___x_269_;
goto v___jp_253_;
}
v___jp_253_:
{
if (v___y_254_ == 0)
{
lean_dec_ref(v_b_252_);
lean_dec_ref(v_a_251_);
lean_dec(v_dy_250_);
lean_dec(v_dx_249_);
return v___y_254_;
}
else
{
lean_object* v_X_255_; lean_object* v_Y_256_; lean_object* v_W_257_; lean_object* v_X_258_; lean_object* v_Y_259_; lean_object* v_W_260_; uint8_t v___x_261_; 
v_X_255_ = lean_ctor_get(v_a_251_, 0);
lean_inc(v_X_255_);
v_Y_256_ = lean_ctor_get(v_a_251_, 1);
lean_inc(v_Y_256_);
v_W_257_ = lean_ctor_get(v_a_251_, 2);
lean_inc(v_W_257_);
lean_dec_ref(v_a_251_);
v_X_258_ = lean_ctor_get(v_b_252_, 0);
lean_inc(v_X_258_);
v_Y_259_ = lean_ctor_get(v_b_252_, 1);
lean_inc(v_Y_259_);
v_W_260_ = lean_ctor_get(v_b_252_, 2);
lean_inc(v_W_260_);
lean_dec_ref(v_b_252_);
v___x_261_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_257_, v_W_260_);
lean_dec(v_W_260_);
if (v___x_261_ == 0)
{
lean_dec(v_Y_259_);
lean_dec(v_X_258_);
lean_dec(v_W_257_);
lean_dec(v_Y_256_);
lean_dec(v_X_255_);
lean_dec(v_dy_250_);
lean_dec(v_dx_249_);
return v___x_261_;
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_262_ = lp_choreo_Choreo_Poly_sub(v_X_255_, v_X_258_);
lean_dec(v_X_255_);
lean_inc(v_W_257_);
v___x_263_ = lp_choreo_Choreo_Poly_scale(v_dx_249_, v_W_257_);
lean_dec(v_dx_249_);
v___x_264_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v___x_262_, v___x_263_);
lean_dec(v___x_263_);
lean_dec(v___x_262_);
if (v___x_264_ == 0)
{
lean_dec(v_Y_259_);
lean_dec(v_W_257_);
lean_dec(v_Y_256_);
lean_dec(v_dy_250_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = lp_choreo_Choreo_Poly_sub(v_Y_256_, v_Y_259_);
lean_dec(v_Y_256_);
v___x_266_ = lp_choreo_Choreo_Poly_scale(v_dy_250_, v_W_257_);
lean_dec(v_dy_250_);
v___x_267_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v___x_265_, v___x_266_);
lean_dec(v___x_266_);
lean_dec(v___x_265_);
return v___x_267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Link_check___boxed(lean_object* v_ph_270_, lean_object* v_l_271_){
_start:
{
uint8_t v_res_272_; lean_object* v_r_273_; 
v_res_272_ = lp_choreo_Choreo_Link_check(v_ph_270_, v_l_271_);
lean_dec_ref(v_ph_270_);
v_r_273_ = lean_box(v_res_272_);
return v_r_273_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_endOffsetOk(lean_object* v_a_274_, lean_object* v_b_275_, lean_object* v_dx_276_, lean_object* v_dy_277_){
_start:
{
uint8_t v___y_279_; uint8_t v___x_304_; 
v___x_304_ = lp_choreo_Choreo_Path_wf(v_a_274_);
if (v___x_304_ == 0)
{
v___y_279_ = v___x_304_;
goto v___jp_278_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = lp_choreo_Choreo_Path_wf(v_b_275_);
v___y_279_ = v___x_305_;
goto v___jp_278_;
}
v___jp_278_:
{
if (v___y_279_ == 0)
{
return v___y_279_;
}
else
{
lean_object* v_X_280_; lean_object* v_Y_281_; lean_object* v_W_282_; lean_object* v_X_283_; lean_object* v_Y_284_; lean_object* v_W_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_X_280_ = lean_ctor_get(v_b_275_, 0);
v_Y_281_ = lean_ctor_get(v_b_275_, 1);
v_W_282_ = lean_ctor_get(v_b_275_, 2);
v_X_283_ = lean_ctor_get(v_a_274_, 0);
v_Y_284_ = lean_ctor_get(v_a_274_, 1);
v_W_285_ = lean_ctor_get(v_a_274_, 2);
v___x_286_ = lp_choreo_Choreo_Poly_last(v_X_280_);
v___x_287_ = lp_choreo_Choreo_Poly_last(v_W_285_);
v___x_288_ = lean_int_mul(v___x_286_, v___x_287_);
lean_dec(v___x_286_);
v___x_289_ = lp_choreo_Choreo_Poly_last(v_X_283_);
v___x_290_ = lp_choreo_Choreo_Poly_last(v_W_282_);
v___x_291_ = lean_int_mul(v___x_289_, v___x_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_int_sub(v___x_288_, v___x_291_);
lean_dec(v___x_291_);
lean_dec(v___x_288_);
v___x_293_ = lean_int_mul(v_dx_276_, v___x_287_);
v___x_294_ = lean_int_mul(v___x_293_, v___x_290_);
lean_dec(v___x_293_);
v___x_295_ = lean_int_dec_eq(v___x_292_, v___x_294_);
lean_dec(v___x_294_);
lean_dec(v___x_292_);
if (v___x_295_ == 0)
{
lean_dec(v___x_290_);
lean_dec(v___x_287_);
return v___x_295_;
}
else
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_296_ = lp_choreo_Choreo_Poly_last(v_Y_281_);
v___x_297_ = lean_int_mul(v___x_296_, v___x_287_);
lean_dec(v___x_296_);
v___x_298_ = lp_choreo_Choreo_Poly_last(v_Y_284_);
v___x_299_ = lean_int_mul(v___x_298_, v___x_290_);
lean_dec(v___x_298_);
v___x_300_ = lean_int_sub(v___x_297_, v___x_299_);
lean_dec(v___x_299_);
lean_dec(v___x_297_);
v___x_301_ = lean_int_mul(v_dy_277_, v___x_287_);
lean_dec(v___x_287_);
v___x_302_ = lean_int_mul(v___x_301_, v___x_290_);
lean_dec(v___x_290_);
lean_dec(v___x_301_);
v___x_303_ = lean_int_dec_eq(v___x_300_, v___x_302_);
lean_dec(v___x_302_);
lean_dec(v___x_300_);
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOffsetOk___boxed(lean_object* v_a_306_, lean_object* v_b_307_, lean_object* v_dx_308_, lean_object* v_dy_309_){
_start:
{
uint8_t v_res_310_; lean_object* v_r_311_; 
v_res_310_ = lp_choreo_Choreo_endOffsetOk(v_a_306_, v_b_307_, v_dx_308_, v_dy_309_);
lean_dec(v_dy_309_);
lean_dec(v_dx_308_);
lean_dec_ref(v_b_307_);
lean_dec_ref(v_a_306_);
v_r_311_ = lean_box(v_res_310_);
return v_r_311_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_endMirrorOk(lean_object* v_a_312_, lean_object* v_b_313_, lean_object* v_m_314_){
_start:
{
uint8_t v___y_316_; uint8_t v___x_338_; 
v___x_338_ = lp_choreo_Choreo_Path_wf(v_a_312_);
if (v___x_338_ == 0)
{
v___y_316_ = v___x_338_;
goto v___jp_315_;
}
else
{
uint8_t v___x_339_; 
v___x_339_ = lp_choreo_Choreo_Path_wf(v_b_313_);
v___y_316_ = v___x_339_;
goto v___jp_315_;
}
v___jp_315_:
{
if (v___y_316_ == 0)
{
return v___y_316_;
}
else
{
lean_object* v_X_317_; lean_object* v_Y_318_; lean_object* v_W_319_; lean_object* v_X_320_; lean_object* v_Y_321_; lean_object* v_W_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v_X_317_ = lean_ctor_get(v_a_312_, 0);
v_Y_318_ = lean_ctor_get(v_a_312_, 1);
v_W_319_ = lean_ctor_get(v_a_312_, 2);
v_X_320_ = lean_ctor_get(v_b_313_, 0);
v_Y_321_ = lean_ctor_get(v_b_313_, 1);
v_W_322_ = lean_ctor_get(v_b_313_, 2);
v___x_323_ = lp_choreo_Choreo_Poly_last(v_X_317_);
v___x_324_ = lp_choreo_Choreo_Poly_last(v_W_322_);
v___x_325_ = lean_int_mul(v___x_323_, v___x_324_);
lean_dec(v___x_323_);
v___x_326_ = lp_choreo_Choreo_Poly_last(v_X_320_);
v___x_327_ = lp_choreo_Choreo_Poly_last(v_W_319_);
v___x_328_ = lean_int_mul(v___x_326_, v___x_327_);
lean_dec(v___x_326_);
v___x_329_ = lean_int_add(v___x_325_, v___x_328_);
lean_dec(v___x_328_);
lean_dec(v___x_325_);
v___x_330_ = lean_int_mul(v_m_314_, v___x_327_);
v___x_331_ = lean_int_mul(v___x_330_, v___x_324_);
lean_dec(v___x_330_);
v___x_332_ = lean_int_dec_eq(v___x_329_, v___x_331_);
lean_dec(v___x_331_);
lean_dec(v___x_329_);
if (v___x_332_ == 0)
{
lean_dec(v___x_327_);
lean_dec(v___x_324_);
return v___x_332_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_333_ = lp_choreo_Choreo_Poly_last(v_Y_318_);
v___x_334_ = lean_int_mul(v___x_333_, v___x_324_);
lean_dec(v___x_324_);
lean_dec(v___x_333_);
v___x_335_ = lp_choreo_Choreo_Poly_last(v_Y_321_);
v___x_336_ = lean_int_mul(v___x_335_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_335_);
v___x_337_ = lean_int_dec_eq(v___x_334_, v___x_336_);
lean_dec(v___x_336_);
lean_dec(v___x_334_);
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endMirrorOk___boxed(lean_object* v_a_340_, lean_object* v_b_341_, lean_object* v_m_342_){
_start:
{
uint8_t v_res_343_; lean_object* v_r_344_; 
v_res_343_ = lp_choreo_Choreo_endMirrorOk(v_a_340_, v_b_341_, v_m_342_);
lean_dec(v_m_342_);
lean_dec_ref(v_b_341_);
lean_dec_ref(v_a_340_);
v_r_344_ = lean_box(v_res_343_);
return v_r_344_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Rect_same(lean_object* v_a_345_, lean_object* v_b_346_){
_start:
{
lean_object* v_xmin_347_; lean_object* v_xmax_348_; lean_object* v_ymin_349_; lean_object* v_ymax_350_; lean_object* v_xmin_351_; lean_object* v_xmax_352_; lean_object* v_ymin_353_; lean_object* v_ymax_354_; uint8_t v___x_355_; 
v_xmin_347_ = lean_ctor_get(v_a_345_, 0);
v_xmax_348_ = lean_ctor_get(v_a_345_, 1);
v_ymin_349_ = lean_ctor_get(v_a_345_, 2);
v_ymax_350_ = lean_ctor_get(v_a_345_, 3);
v_xmin_351_ = lean_ctor_get(v_b_346_, 0);
v_xmax_352_ = lean_ctor_get(v_b_346_, 1);
v_ymin_353_ = lean_ctor_get(v_b_346_, 2);
v_ymax_354_ = lean_ctor_get(v_b_346_, 3);
v___x_355_ = lean_int_dec_eq(v_xmin_347_, v_xmin_351_);
if (v___x_355_ == 0)
{
return v___x_355_;
}
else
{
uint8_t v___x_356_; 
v___x_356_ = lean_int_dec_eq(v_xmax_348_, v_xmax_352_);
if (v___x_356_ == 0)
{
return v___x_356_;
}
else
{
uint8_t v___x_357_; 
v___x_357_ = lean_int_dec_eq(v_ymin_349_, v_ymin_353_);
if (v___x_357_ == 0)
{
return v___x_357_;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = lean_int_dec_eq(v_ymax_350_, v_ymax_354_);
return v___x_358_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Rect_same___boxed(lean_object* v_a_359_, lean_object* v_b_360_){
_start:
{
uint8_t v_res_361_; lean_object* v_r_362_; 
v_res_361_ = lp_choreo_Choreo_Rect_same(v_a_359_, v_b_360_);
lean_dec_ref(v_b_360_);
lean_dec_ref(v_a_359_);
v_r_362_ = lean_box(v_res_361_);
return v_r_362_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__4(lean_object* v_r_363_, lean_object* v_val_364_, lean_object* v_x_365_){
_start:
{
if (lean_obj_tag(v_x_365_) == 0)
{
uint8_t v___x_366_; 
v___x_366_ = 1;
return v___x_366_;
}
else
{
lean_object* v_head_367_; lean_object* v_cfg_368_; lean_object* v_tail_369_; lean_object* v_leader_370_; lean_object* v_member_371_; lean_object* v_n_372_; uint8_t v___x_373_; 
v_head_367_ = lean_ctor_get(v_x_365_, 0);
lean_inc(v_head_367_);
v_cfg_368_ = lean_ctor_get(v_r_363_, 0);
v_tail_369_ = lean_ctor_get(v_x_365_, 1);
lean_inc(v_tail_369_);
lean_dec_ref_known(v_x_365_, 2);
v_leader_370_ = lean_ctor_get(v_head_367_, 0);
v_member_371_ = lean_ctor_get(v_head_367_, 1);
v_n_372_ = lean_ctor_get(v_cfg_368_, 0);
v___x_373_ = lean_nat_dec_lt(v_leader_370_, v_n_372_);
if (v___x_373_ == 0)
{
lean_dec(v_tail_369_);
lean_dec(v_head_367_);
return v___x_373_;
}
else
{
uint8_t v___x_374_; 
v___x_374_ = lean_nat_dec_lt(v_member_371_, v_n_372_);
if (v___x_374_ == 0)
{
lean_dec(v_tail_369_);
lean_dec(v_head_367_);
return v___x_374_;
}
else
{
uint8_t v___x_375_; 
v___x_375_ = lp_choreo_Choreo_Link_check(v_val_364_, v_head_367_);
if (v___x_375_ == 0)
{
lean_dec(v_tail_369_);
return v___x_375_;
}
else
{
v_x_365_ = v_tail_369_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__4___boxed(lean_object* v_r_377_, lean_object* v_val_378_, lean_object* v_x_379_){
_start:
{
uint8_t v_res_380_; lean_object* v_r_381_; 
v_res_380_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__4(v_r_377_, v_val_378_, v_x_379_);
lean_dec_ref(v_val_378_);
lean_dec_ref(v_r_377_);
v_r_381_ = lean_box(v_res_380_);
return v_r_381_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__6(lean_object* v_r_382_, lean_object* v_dx_383_, lean_object* v_dy_384_, lean_object* v_val_385_, lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
uint8_t v___x_387_; 
lean_dec(v_dy_384_);
lean_dec(v_dx_383_);
v___x_387_ = 1;
return v___x_387_;
}
else
{
lean_object* v_head_388_; lean_object* v_cfg_389_; lean_object* v_tail_390_; lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v_n_393_; uint8_t v___x_394_; 
v_head_388_ = lean_ctor_get(v_x_386_, 0);
v_cfg_389_ = lean_ctor_get(v_r_382_, 0);
v_tail_390_ = lean_ctor_get(v_x_386_, 1);
v_fst_391_ = lean_ctor_get(v_head_388_, 0);
v_snd_392_ = lean_ctor_get(v_head_388_, 1);
v_n_393_ = lean_ctor_get(v_cfg_389_, 0);
v___x_394_ = lean_nat_dec_lt(v_fst_391_, v_n_393_);
if (v___x_394_ == 0)
{
lean_dec(v_dy_384_);
lean_dec(v_dx_383_);
return v___x_394_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = lean_nat_dec_lt(v_snd_392_, v_n_393_);
if (v___x_395_ == 0)
{
lean_dec(v_dy_384_);
lean_dec(v_dx_383_);
return v___x_395_;
}
else
{
lean_object* v___x_396_; uint8_t v___x_397_; 
lean_inc(v_dy_384_);
lean_inc(v_dx_383_);
lean_inc(v_snd_392_);
lean_inc(v_fst_391_);
v___x_396_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_396_, 0, v_fst_391_);
lean_ctor_set(v___x_396_, 1, v_snd_392_);
lean_ctor_set(v___x_396_, 2, v_dx_383_);
lean_ctor_set(v___x_396_, 3, v_dy_384_);
v___x_397_ = lp_choreo_Choreo_Link_check(v_val_385_, v___x_396_);
if (v___x_397_ == 0)
{
lean_dec(v_dy_384_);
lean_dec(v_dx_383_);
return v___x_397_;
}
else
{
v_x_386_ = v_tail_390_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__6___boxed(lean_object* v_r_399_, lean_object* v_dx_400_, lean_object* v_dy_401_, lean_object* v_val_402_, lean_object* v_x_403_){
_start:
{
uint8_t v_res_404_; lean_object* v_r_405_; 
v_res_404_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__6(v_r_399_, v_dx_400_, v_dy_401_, v_val_402_, v_x_403_);
lean_dec(v_x_403_);
lean_dec_ref(v_val_402_);
lean_dec_ref(v_r_399_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__7(lean_object* v_r_406_, lean_object* v_val_407_, lean_object* v_dx_408_, lean_object* v_dy_409_, lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
uint8_t v___x_411_; 
v___x_411_ = 1;
return v___x_411_;
}
else
{
lean_object* v_head_412_; lean_object* v_cfg_413_; lean_object* v_tail_414_; lean_object* v_fst_415_; lean_object* v_snd_416_; lean_object* v_n_417_; uint8_t v___x_418_; 
v_head_412_ = lean_ctor_get(v_x_410_, 0);
lean_inc(v_head_412_);
v_cfg_413_ = lean_ctor_get(v_r_406_, 0);
v_tail_414_ = lean_ctor_get(v_x_410_, 1);
lean_inc(v_tail_414_);
lean_dec_ref_known(v_x_410_, 2);
v_fst_415_ = lean_ctor_get(v_head_412_, 0);
lean_inc(v_fst_415_);
v_snd_416_ = lean_ctor_get(v_head_412_, 1);
lean_inc(v_snd_416_);
lean_dec(v_head_412_);
v_n_417_ = lean_ctor_get(v_cfg_413_, 0);
v___x_418_ = lean_nat_dec_lt(v_fst_415_, v_n_417_);
if (v___x_418_ == 0)
{
lean_dec(v_snd_416_);
lean_dec(v_fst_415_);
lean_dec(v_tail_414_);
return v___x_418_;
}
else
{
uint8_t v___x_419_; 
v___x_419_ = lean_nat_dec_lt(v_snd_416_, v_n_417_);
if (v___x_419_ == 0)
{
lean_dec(v_snd_416_);
lean_dec(v_fst_415_);
lean_dec(v_tail_414_);
return v___x_419_;
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lp_choreo_Choreo_Phase_path(v_val_407_, v_fst_415_);
v___x_421_ = lp_choreo_Choreo_Phase_path(v_val_407_, v_snd_416_);
v___x_422_ = lp_choreo_Choreo_endOffsetOk(v___x_420_, v___x_421_, v_dx_408_, v_dy_409_);
lean_dec_ref(v___x_421_);
lean_dec_ref(v___x_420_);
if (v___x_422_ == 0)
{
lean_dec(v_tail_414_);
return v___x_422_;
}
else
{
v_x_410_ = v_tail_414_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__7___boxed(lean_object* v_r_424_, lean_object* v_val_425_, lean_object* v_dx_426_, lean_object* v_dy_427_, lean_object* v_x_428_){
_start:
{
uint8_t v_res_429_; lean_object* v_r_430_; 
v_res_429_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__7(v_r_424_, v_val_425_, v_dx_426_, v_dy_427_, v_x_428_);
lean_dec(v_dy_427_);
lean_dec(v_dx_426_);
lean_dec_ref(v_val_425_);
lean_dec_ref(v_r_424_);
v_r_430_ = lean_box(v_res_429_);
return v_r_430_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__3(lean_object* v_r_431_, lean_object* v_val_432_, lean_object* v_val_433_, lean_object* v_mirror_434_, lean_object* v_x_435_){
_start:
{
if (lean_obj_tag(v_x_435_) == 0)
{
uint8_t v___x_436_; 
v___x_436_ = 1;
return v___x_436_;
}
else
{
lean_object* v_cfg_437_; lean_object* v_head_438_; lean_object* v_tail_439_; lean_object* v_n_440_; uint8_t v___x_441_; 
v_cfg_437_ = lean_ctor_get(v_r_431_, 0);
v_head_438_ = lean_ctor_get(v_x_435_, 0);
lean_inc(v_head_438_);
v_tail_439_ = lean_ctor_get(v_x_435_, 1);
lean_inc(v_tail_439_);
lean_dec_ref_known(v_x_435_, 2);
v_n_440_ = lean_ctor_get(v_cfg_437_, 0);
v___x_441_ = lean_nat_dec_lt(v_head_438_, v_n_440_);
if (v___x_441_ == 0)
{
lean_dec(v_tail_439_);
lean_dec(v_head_438_);
return v___x_441_;
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
lean_inc(v_head_438_);
v___x_442_ = lp_choreo_Choreo_Phase_path(v_val_432_, v_head_438_);
v___x_443_ = lp_choreo_Choreo_Phase_path(v_val_433_, v_head_438_);
v___x_444_ = lp_choreo_Choreo_flipOk(v___x_442_, v___x_443_, v_mirror_434_);
lean_dec_ref(v___x_443_);
lean_dec_ref(v___x_442_);
if (v___x_444_ == 0)
{
lean_dec(v_tail_439_);
return v___x_444_;
}
else
{
v_x_435_ = v_tail_439_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__3___boxed(lean_object* v_r_446_, lean_object* v_val_447_, lean_object* v_val_448_, lean_object* v_mirror_449_, lean_object* v_x_450_){
_start:
{
uint8_t v_res_451_; lean_object* v_r_452_; 
v_res_451_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__3(v_r_446_, v_val_447_, v_val_448_, v_mirror_449_, v_x_450_);
lean_dec(v_mirror_449_);
lean_dec_ref(v_val_448_);
lean_dec_ref(v_val_447_);
lean_dec_ref(v_r_446_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_nat_to_int(v___x_453_);
return v___x_454_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(1u);
v___x_456_ = lean_nat_to_int(v___x_455_);
return v___x_456_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1, &lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1_once, _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__1);
v___x_458_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0, &lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0);
v___x_459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
lean_ctor_set(v___x_459_, 2, v___x_457_);
return v___x_459_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__2(lean_object* v_val_460_, lean_object* v_f_461_, lean_object* v_assign_462_, lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
uint8_t v___x_464_; 
lean_dec_ref(v_f_461_);
v___x_464_ = 1;
return v___x_464_;
}
else
{
lean_object* v_head_465_; lean_object* v_tail_466_; uint8_t v___y_468_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_head_465_ = lean_ctor_get(v_x_463_, 0);
lean_inc_n(v_head_465_, 2);
v_tail_466_ = lean_ctor_get(v_x_463_, 1);
lean_inc(v_tail_466_);
lean_dec_ref_known(v_x_463_, 2);
v___x_477_ = lp_choreo_Choreo_Phase_path(v_val_460_, v_head_465_);
v___x_478_ = lp_choreo_Choreo_Path_wf(v___x_477_);
lean_dec_ref(v___x_477_);
if (v___x_478_ == 0)
{
v___y_468_ = v___x_478_;
goto v___jp_467_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_w_485_; uint8_t v___x_486_; 
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0, &lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__0);
lean_inc_ref(v_f_461_);
v___x_481_ = lp_choreo_Choreo_Formation_slots(v_f_461_);
lean_inc(v_head_465_);
v___x_482_ = l_List_getD___redArg(v_assign_462_, v_head_465_, v___x_479_);
v___x_483_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2, &lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2);
v___x_484_ = l_List_getD___redArg(v___x_481_, v___x_482_, v___x_483_);
lean_dec(v___x_481_);
v_w_485_ = lean_ctor_get(v___x_484_, 2);
lean_inc(v_w_485_);
lean_dec(v___x_484_);
v___x_486_ = lean_int_dec_lt(v___x_480_, v_w_485_);
lean_dec(v_w_485_);
v___y_468_ = v___x_486_;
goto v___jp_467_;
}
v___jp_467_:
{
if (v___y_468_ == 0)
{
lean_dec(v_tail_466_);
lean_dec(v_head_465_);
lean_dec_ref(v_f_461_);
return v___y_468_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
lean_inc(v_head_465_);
v___x_469_ = lp_choreo_Choreo_Phase_path(v_val_460_, v_head_465_);
lean_inc_ref(v_f_461_);
v___x_470_ = lp_choreo_Choreo_Formation_slots(v_f_461_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_List_getD___redArg(v_assign_462_, v_head_465_, v___x_471_);
v___x_473_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2, &lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2_once, _init_lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___closed__2);
v___x_474_ = l_List_getD___redArg(v___x_470_, v___x_472_, v___x_473_);
lean_dec(v___x_470_);
v___x_475_ = lp_choreo_Choreo_Path_reachesSlot(v___x_469_, v___x_474_);
lean_dec(v___x_474_);
lean_dec_ref(v___x_469_);
if (v___x_475_ == 0)
{
lean_dec(v_tail_466_);
lean_dec_ref(v_f_461_);
return v___x_475_;
}
else
{
v_x_463_ = v_tail_466_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__2___boxed(lean_object* v_val_487_, lean_object* v_f_488_, lean_object* v_assign_489_, lean_object* v_x_490_){
_start:
{
uint8_t v_res_491_; lean_object* v_r_492_; 
v_res_491_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__2(v_val_487_, v_f_488_, v_assign_489_, v_x_490_);
lean_dec(v_assign_489_);
lean_dec_ref(v_val_487_);
v_r_492_ = lean_box(v_res_491_);
return v_r_492_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__8(lean_object* v_r_493_, lean_object* v_val_494_, lean_object* v_mirror_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_496_) == 0)
{
uint8_t v___x_497_; 
v___x_497_ = 1;
return v___x_497_;
}
else
{
lean_object* v_head_498_; lean_object* v_cfg_499_; lean_object* v_tail_500_; lean_object* v_fst_501_; lean_object* v_snd_502_; lean_object* v_n_503_; uint8_t v___x_504_; 
v_head_498_ = lean_ctor_get(v_x_496_, 0);
lean_inc(v_head_498_);
v_cfg_499_ = lean_ctor_get(v_r_493_, 0);
v_tail_500_ = lean_ctor_get(v_x_496_, 1);
lean_inc(v_tail_500_);
lean_dec_ref_known(v_x_496_, 2);
v_fst_501_ = lean_ctor_get(v_head_498_, 0);
lean_inc(v_fst_501_);
v_snd_502_ = lean_ctor_get(v_head_498_, 1);
lean_inc(v_snd_502_);
lean_dec(v_head_498_);
v_n_503_ = lean_ctor_get(v_cfg_499_, 0);
v___x_504_ = lean_nat_dec_lt(v_fst_501_, v_n_503_);
if (v___x_504_ == 0)
{
lean_dec(v_snd_502_);
lean_dec(v_fst_501_);
lean_dec(v_tail_500_);
return v___x_504_;
}
else
{
uint8_t v___x_505_; 
v___x_505_ = lean_nat_dec_lt(v_snd_502_, v_n_503_);
if (v___x_505_ == 0)
{
lean_dec(v_snd_502_);
lean_dec(v_fst_501_);
lean_dec(v_tail_500_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_506_ = lp_choreo_Choreo_Phase_path(v_val_494_, v_fst_501_);
v___x_507_ = lp_choreo_Choreo_Phase_path(v_val_494_, v_snd_502_);
v___x_508_ = lp_choreo_Choreo_endMirrorOk(v___x_506_, v___x_507_, v_mirror_495_);
lean_dec_ref(v___x_507_);
lean_dec_ref(v___x_506_);
if (v___x_508_ == 0)
{
lean_dec(v_tail_500_);
return v___x_508_;
}
else
{
v_x_496_ = v_tail_500_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__8___boxed(lean_object* v_r_510_, lean_object* v_val_511_, lean_object* v_mirror_512_, lean_object* v_x_513_){
_start:
{
uint8_t v_res_514_; lean_object* v_r_515_; 
v_res_514_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__8(v_r_510_, v_val_511_, v_mirror_512_, v_x_513_);
lean_dec(v_mirror_512_);
lean_dec_ref(v_val_511_);
lean_dec_ref(v_r_510_);
v_r_515_ = lean_box(v_res_514_);
return v_r_515_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__1(lean_object* v_r_516_, lean_object* v_val_517_, lean_object* v_box_518_, lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_519_) == 0)
{
uint8_t v___x_520_; 
v___x_520_ = 1;
return v___x_520_;
}
else
{
lean_object* v_cfg_521_; lean_object* v_head_522_; lean_object* v_tail_523_; lean_object* v_n_524_; uint8_t v___x_525_; 
v_cfg_521_ = lean_ctor_get(v_r_516_, 0);
v_head_522_ = lean_ctor_get(v_x_519_, 0);
lean_inc(v_head_522_);
v_tail_523_ = lean_ctor_get(v_x_519_, 1);
lean_inc(v_tail_523_);
lean_dec_ref_known(v_x_519_, 2);
v_n_524_ = lean_ctor_get(v_cfg_521_, 0);
v___x_525_ = lean_nat_dec_lt(v_head_522_, v_n_524_);
if (v___x_525_ == 0)
{
lean_dec(v_tail_523_);
lean_dec(v_head_522_);
return v___x_525_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lp_choreo_Choreo_Phase_path(v_val_517_, v_head_522_);
v___x_527_ = lp_choreo_Choreo_Path_endInBox(v___x_526_, v_box_518_);
lean_dec_ref(v___x_526_);
if (v___x_527_ == 0)
{
lean_dec(v_tail_523_);
return v___x_527_;
}
else
{
v_x_519_ = v_tail_523_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__1___boxed(lean_object* v_r_529_, lean_object* v_val_530_, lean_object* v_box_531_, lean_object* v_x_532_){
_start:
{
uint8_t v_res_533_; lean_object* v_r_534_; 
v_res_533_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__1(v_r_529_, v_val_530_, v_box_531_, v_x_532_);
lean_dec_ref(v_box_531_);
lean_dec_ref(v_val_530_);
lean_dec_ref(v_r_529_);
v_r_534_ = lean_box(v_res_533_);
return v_r_534_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__5(lean_object* v_val_535_, lean_object* v_cx_536_, lean_object* v_cy_537_, lean_object* v_r2_538_, lean_object* v_x_539_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
uint8_t v___x_540_; 
v___x_540_ = 1;
return v___x_540_;
}
else
{
lean_object* v_head_541_; lean_object* v_tail_542_; uint8_t v___y_544_; lean_object* v___x_546_; uint8_t v___x_547_; 
v_head_541_ = lean_ctor_get(v_x_539_, 0);
lean_inc(v_head_541_);
v_tail_542_ = lean_ctor_get(v_x_539_, 1);
lean_inc(v_tail_542_);
lean_dec_ref_known(v_x_539_, 2);
v___x_546_ = lp_choreo_Choreo_Phase_path(v_val_535_, v_head_541_);
v___x_547_ = lp_choreo_Choreo_Path_wf(v___x_546_);
if (v___x_547_ == 0)
{
lean_dec_ref(v___x_546_);
v___y_544_ = v___x_547_;
goto v___jp_543_;
}
else
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lp_choreo_Choreo_orbitPoly(v___x_546_, v_cx_536_, v_cy_537_, v_r2_538_);
v___x_549_ = lp_choreo_Choreo_Poly_allZero(v___x_548_);
lean_dec(v___x_548_);
v___y_544_ = v___x_549_;
goto v___jp_543_;
}
v___jp_543_:
{
if (v___y_544_ == 0)
{
lean_dec(v_tail_542_);
return v___y_544_;
}
else
{
v_x_539_ = v_tail_542_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__5___boxed(lean_object* v_val_550_, lean_object* v_cx_551_, lean_object* v_cy_552_, lean_object* v_r2_553_, lean_object* v_x_554_){
_start:
{
uint8_t v_res_555_; lean_object* v_r_556_; 
v_res_555_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__5(v_val_550_, v_cx_551_, v_cy_552_, v_r2_553_, v_x_554_);
lean_dec(v_r2_553_);
lean_dec(v_cy_552_);
lean_dec(v_cx_551_);
lean_dec_ref(v_val_550_);
v_r_556_ = lean_box(v_res_555_);
return v_r_556_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Ask_check_spec__0(lean_object* v_r_557_, lean_object* v_val_558_, lean_object* v_box_559_, lean_object* v_x_560_){
_start:
{
if (lean_obj_tag(v_x_560_) == 0)
{
uint8_t v___x_561_; 
v___x_561_ = 1;
return v___x_561_;
}
else
{
lean_object* v_cfg_562_; lean_object* v_head_563_; lean_object* v_tail_564_; lean_object* v_n_565_; uint8_t v___x_566_; 
v_cfg_562_ = lean_ctor_get(v_r_557_, 0);
v_head_563_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_head_563_);
v_tail_564_ = lean_ctor_get(v_x_560_, 1);
lean_inc(v_tail_564_);
lean_dec_ref_known(v_x_560_, 2);
v_n_565_ = lean_ctor_get(v_cfg_562_, 0);
v___x_566_ = lean_nat_dec_lt(v_head_563_, v_n_565_);
if (v___x_566_ == 0)
{
lean_dec(v_tail_564_);
lean_dec(v_head_563_);
return v___x_566_;
}
else
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lp_choreo_Choreo_Phase_path(v_val_558_, v_head_563_);
v___x_568_ = lp_choreo_Choreo_Path_startInBox(v___x_567_, v_box_559_);
lean_dec_ref(v___x_567_);
if (v___x_568_ == 0)
{
lean_dec(v_tail_564_);
return v___x_568_;
}
else
{
v_x_560_ = v_tail_564_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Ask_check_spec__0___boxed(lean_object* v_r_570_, lean_object* v_val_571_, lean_object* v_box_572_, lean_object* v_x_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__0(v_r_570_, v_val_571_, v_box_572_, v_x_573_);
lean_dec_ref(v_box_572_);
lean_dec_ref(v_val_571_);
lean_dec_ref(v_r_570_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Ask_check(lean_object* v_r_576_, lean_object* v_x_577_){
_start:
{
switch(lean_obj_tag(v_x_577_))
{
case 0:
{
lean_object* v_k_578_; lean_object* v_dancers_579_; lean_object* v_box_580_; lean_object* v_phases_581_; lean_object* v___x_582_; 
v_k_578_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_578_);
v_dancers_579_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_dancers_579_);
v_box_580_ = lean_ctor_get(v_x_577_, 2);
lean_inc_ref(v_box_580_);
lean_dec_ref_known(v_x_577_, 3);
v_phases_581_ = lean_ctor_get(v_r_576_, 1);
v___x_582_ = l_List_get_x3fInternal___redArg(v_phases_581_, v_k_578_);
if (lean_obj_tag(v___x_582_) == 0)
{
uint8_t v___x_583_; 
lean_dec_ref(v_box_580_);
lean_dec(v_dancers_579_);
lean_dec_ref(v_r_576_);
v___x_583_ = 0;
return v___x_583_;
}
else
{
lean_object* v_val_584_; uint8_t v___x_585_; 
v_val_584_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_val_584_);
lean_dec_ref_known(v___x_582_, 1);
v___x_585_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__0(v_r_576_, v_val_584_, v_box_580_, v_dancers_579_);
lean_dec_ref(v_box_580_);
lean_dec(v_val_584_);
lean_dec_ref(v_r_576_);
return v___x_585_;
}
}
case 1:
{
lean_object* v_k_586_; lean_object* v_dancers_587_; lean_object* v_box_588_; lean_object* v_phases_589_; lean_object* v___x_590_; 
v_k_586_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_586_);
v_dancers_587_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_dancers_587_);
v_box_588_ = lean_ctor_get(v_x_577_, 2);
lean_inc_ref(v_box_588_);
lean_dec_ref_known(v_x_577_, 3);
v_phases_589_ = lean_ctor_get(v_r_576_, 1);
v___x_590_ = l_List_get_x3fInternal___redArg(v_phases_589_, v_k_586_);
if (lean_obj_tag(v___x_590_) == 0)
{
uint8_t v___x_591_; 
lean_dec_ref(v_box_588_);
lean_dec(v_dancers_587_);
lean_dec_ref(v_r_576_);
v___x_591_ = 0;
return v___x_591_;
}
else
{
lean_object* v_val_592_; uint8_t v___x_593_; 
v_val_592_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_val_592_);
lean_dec_ref_known(v___x_590_, 1);
v___x_593_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__1(v_r_576_, v_val_592_, v_box_588_, v_dancers_587_);
lean_dec_ref(v_box_588_);
lean_dec(v_val_592_);
lean_dec_ref(v_r_576_);
return v___x_593_;
}
}
case 2:
{
lean_object* v_k_594_; lean_object* v_box_595_; lean_object* v_phases_596_; lean_object* v___x_597_; 
v_k_594_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_594_);
v_box_595_ = lean_ctor_get(v_x_577_, 1);
lean_inc_ref(v_box_595_);
lean_dec_ref_known(v_x_577_, 2);
v_phases_596_ = lean_ctor_get(v_r_576_, 1);
lean_inc(v_phases_596_);
lean_dec_ref(v_r_576_);
v___x_597_ = l_List_get_x3fInternal___redArg(v_phases_596_, v_k_594_);
lean_dec(v_phases_596_);
if (lean_obj_tag(v___x_597_) == 0)
{
uint8_t v___x_598_; 
lean_dec_ref(v_box_595_);
v___x_598_ = 0;
return v___x_598_;
}
else
{
lean_object* v_val_599_; lean_object* v_bounds_600_; uint8_t v___x_601_; 
v_val_599_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_val_599_);
lean_dec_ref_known(v___x_597_, 1);
v_bounds_600_ = lean_ctor_get(v_val_599_, 3);
lean_inc_ref(v_bounds_600_);
lean_dec(v_val_599_);
v___x_601_ = lp_choreo_Choreo_Rect_same(v_bounds_600_, v_box_595_);
lean_dec_ref(v_box_595_);
lean_dec_ref(v_bounds_600_);
return v___x_601_;
}
}
case 3:
{
lean_object* v_k_602_; lean_object* v_f_603_; lean_object* v_assign_604_; lean_object* v_cfg_605_; lean_object* v_phases_606_; lean_object* v___x_607_; 
v_k_602_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_602_);
v_f_603_ = lean_ctor_get(v_x_577_, 1);
lean_inc_ref(v_f_603_);
v_assign_604_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_assign_604_);
lean_dec_ref_known(v_x_577_, 3);
v_cfg_605_ = lean_ctor_get(v_r_576_, 0);
lean_inc_ref(v_cfg_605_);
v_phases_606_ = lean_ctor_get(v_r_576_, 1);
lean_inc(v_phases_606_);
lean_dec_ref(v_r_576_);
v___x_607_ = l_List_get_x3fInternal___redArg(v_phases_606_, v_k_602_);
lean_dec(v_phases_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
uint8_t v___x_608_; 
lean_dec_ref(v_cfg_605_);
lean_dec(v_assign_604_);
lean_dec_ref(v_f_603_);
v___x_608_ = 0;
return v___x_608_;
}
else
{
lean_object* v_val_609_; uint8_t v___y_611_; uint8_t v___x_616_; 
v_val_609_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v___x_607_, 1);
lean_inc_ref(v_f_603_);
v___x_616_ = lp_choreo_Choreo_Formation_wellFormed(v_f_603_);
if (v___x_616_ == 0)
{
v___y_611_ = v___x_616_;
goto v___jp_610_;
}
else
{
lean_object* v_n_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v_n_617_ = lean_ctor_get(v_cfg_605_, 0);
lean_inc_ref(v_f_603_);
v___x_618_ = lp_choreo_Choreo_Formation_slots(v_f_603_);
v___x_619_ = l_List_lengthTR___redArg(v___x_618_);
lean_dec(v___x_618_);
v___x_620_ = lean_nat_dec_eq(v___x_619_, v_n_617_);
lean_dec(v___x_619_);
v___y_611_ = v___x_620_;
goto v___jp_610_;
}
v___jp_610_:
{
if (v___y_611_ == 0)
{
lean_dec(v_val_609_);
lean_dec_ref(v_cfg_605_);
lean_dec(v_assign_604_);
lean_dec_ref(v_f_603_);
return v___y_611_;
}
else
{
lean_object* v_n_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_n_612_ = lean_ctor_get(v_cfg_605_, 0);
lean_inc(v_n_612_);
lean_dec_ref(v_cfg_605_);
v___x_613_ = l_List_range(v_n_612_);
lean_inc(v___x_613_);
v___x_614_ = lp_choreo_List_isPerm___at___00Choreo_Phase_checkTarget_spec__0(v_assign_604_, v___x_613_);
if (v___x_614_ == 0)
{
lean_dec(v___x_613_);
lean_dec(v_val_609_);
lean_dec(v_assign_604_);
lean_dec_ref(v_f_603_);
return v___x_614_;
}
else
{
uint8_t v___x_615_; 
v___x_615_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__2(v_val_609_, v_f_603_, v_assign_604_, v___x_613_);
lean_dec(v_assign_604_);
lean_dec(v_val_609_);
return v___x_615_;
}
}
}
}
}
case 4:
{
lean_object* v_k_u2080_621_; lean_object* v_k_u2081_622_; lean_object* v_dancers_623_; lean_object* v_mirror_624_; lean_object* v_phases_625_; lean_object* v___x_626_; 
v_k_u2080_621_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_u2080_621_);
v_k_u2081_622_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_k_u2081_622_);
v_dancers_623_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_dancers_623_);
v_mirror_624_ = lean_ctor_get(v_x_577_, 3);
lean_inc(v_mirror_624_);
lean_dec_ref_known(v_x_577_, 4);
v_phases_625_ = lean_ctor_get(v_r_576_, 1);
v___x_626_ = l_List_get_x3fInternal___redArg(v_phases_625_, v_k_u2080_621_);
if (lean_obj_tag(v___x_626_) == 1)
{
lean_object* v_val_627_; lean_object* v___x_628_; 
v_val_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_val_627_);
lean_dec_ref_known(v___x_626_, 1);
v___x_628_ = l_List_get_x3fInternal___redArg(v_phases_625_, v_k_u2081_622_);
if (lean_obj_tag(v___x_628_) == 1)
{
lean_object* v_val_629_; uint8_t v___x_630_; 
v_val_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_val_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__3(v_r_576_, v_val_627_, v_val_629_, v_mirror_624_, v_dancers_623_);
lean_dec(v_mirror_624_);
lean_dec(v_val_629_);
lean_dec(v_val_627_);
lean_dec_ref(v_r_576_);
return v___x_630_;
}
else
{
uint8_t v___x_631_; 
lean_dec(v___x_628_);
lean_dec(v_val_627_);
lean_dec(v_mirror_624_);
lean_dec(v_dancers_623_);
lean_dec_ref(v_r_576_);
v___x_631_ = 0;
return v___x_631_;
}
}
else
{
uint8_t v___x_632_; 
lean_dec(v___x_626_);
lean_dec(v_mirror_624_);
lean_dec(v_dancers_623_);
lean_dec(v_k_u2081_622_);
lean_dec_ref(v_r_576_);
v___x_632_ = 0;
return v___x_632_;
}
}
case 5:
{
lean_object* v_k_633_; lean_object* v_links_634_; lean_object* v_phases_635_; lean_object* v___x_636_; 
v_k_633_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_633_);
v_links_634_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_links_634_);
lean_dec_ref_known(v_x_577_, 2);
v_phases_635_ = lean_ctor_get(v_r_576_, 1);
v___x_636_ = l_List_get_x3fInternal___redArg(v_phases_635_, v_k_633_);
if (lean_obj_tag(v___x_636_) == 0)
{
uint8_t v___x_637_; 
lean_dec(v_links_634_);
lean_dec_ref(v_r_576_);
v___x_637_ = 0;
return v___x_637_;
}
else
{
lean_object* v_val_638_; uint8_t v___x_639_; 
v_val_638_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___x_636_, 1);
v___x_639_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__4(v_r_576_, v_val_638_, v_links_634_);
lean_dec(v_val_638_);
lean_dec_ref(v_r_576_);
return v___x_639_;
}
}
case 6:
{
lean_object* v_k_640_; lean_object* v_dancers_641_; lean_object* v_cx_642_; lean_object* v_cy_643_; lean_object* v_r2_644_; lean_object* v_phases_645_; lean_object* v___x_646_; 
v_k_640_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_640_);
v_dancers_641_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_dancers_641_);
v_cx_642_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_cx_642_);
v_cy_643_ = lean_ctor_get(v_x_577_, 3);
lean_inc(v_cy_643_);
v_r2_644_ = lean_ctor_get(v_x_577_, 4);
lean_inc(v_r2_644_);
lean_dec_ref_known(v_x_577_, 5);
v_phases_645_ = lean_ctor_get(v_r_576_, 1);
lean_inc(v_phases_645_);
lean_dec_ref(v_r_576_);
v___x_646_ = l_List_get_x3fInternal___redArg(v_phases_645_, v_k_640_);
lean_dec(v_phases_645_);
if (lean_obj_tag(v___x_646_) == 0)
{
uint8_t v___x_647_; 
lean_dec(v_r2_644_);
lean_dec(v_cy_643_);
lean_dec(v_cx_642_);
lean_dec(v_dancers_641_);
v___x_647_ = 0;
return v___x_647_;
}
else
{
lean_object* v_val_648_; uint8_t v___x_649_; 
v_val_648_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_648_);
lean_dec_ref_known(v___x_646_, 1);
v___x_649_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__5(v_val_648_, v_cx_642_, v_cy_643_, v_r2_644_, v_dancers_641_);
lean_dec(v_r2_644_);
lean_dec(v_cy_643_);
lean_dec(v_cx_642_);
lean_dec(v_val_648_);
return v___x_649_;
}
}
case 7:
{
lean_object* v_k_650_; lean_object* v_dancers_651_; lean_object* v_dx_652_; lean_object* v_dy_653_; lean_object* v_phases_654_; lean_object* v___x_655_; 
v_k_650_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_650_);
v_dancers_651_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_dancers_651_);
v_dx_652_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_dx_652_);
v_dy_653_ = lean_ctor_get(v_x_577_, 3);
lean_inc(v_dy_653_);
lean_dec_ref_known(v_x_577_, 4);
v_phases_654_ = lean_ctor_get(v_r_576_, 1);
v___x_655_ = l_List_get_x3fInternal___redArg(v_phases_654_, v_k_650_);
if (lean_obj_tag(v___x_655_) == 0)
{
uint8_t v___x_656_; 
lean_dec(v_dy_653_);
lean_dec(v_dx_652_);
lean_dec(v_dancers_651_);
lean_dec_ref(v_r_576_);
v___x_656_ = 0;
return v___x_656_;
}
else
{
lean_object* v_val_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_val_657_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v___x_655_, 1);
v___x_658_ = lean_unsigned_to_nat(2u);
v___x_659_ = l_List_lengthTR___redArg(v_dancers_651_);
v___x_660_ = lean_nat_dec_le(v___x_658_, v___x_659_);
lean_dec(v___x_659_);
if (v___x_660_ == 0)
{
lean_dec(v_val_657_);
lean_dec(v_dy_653_);
lean_dec(v_dx_652_);
lean_dec(v_dancers_651_);
lean_dec_ref(v_r_576_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_661_ = lp_choreo_Choreo_nextPairs(v_dancers_651_);
v___x_662_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__6(v_r_576_, v_dx_652_, v_dy_653_, v_val_657_, v___x_661_);
lean_dec(v___x_661_);
lean_dec(v_val_657_);
lean_dec_ref(v_r_576_);
return v___x_662_;
}
}
}
case 8:
{
lean_object* v_k_663_; lean_object* v_dancers_664_; lean_object* v_dx_665_; lean_object* v_dy_666_; lean_object* v_phases_667_; lean_object* v___x_668_; 
v_k_663_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_663_);
v_dancers_664_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_dancers_664_);
v_dx_665_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_dx_665_);
v_dy_666_ = lean_ctor_get(v_x_577_, 3);
lean_inc(v_dy_666_);
lean_dec_ref_known(v_x_577_, 4);
v_phases_667_ = lean_ctor_get(v_r_576_, 1);
v___x_668_ = l_List_get_x3fInternal___redArg(v_phases_667_, v_k_663_);
if (lean_obj_tag(v___x_668_) == 0)
{
uint8_t v___x_669_; 
lean_dec(v_dy_666_);
lean_dec(v_dx_665_);
lean_dec(v_dancers_664_);
lean_dec_ref(v_r_576_);
v___x_669_ = 0;
return v___x_669_;
}
else
{
lean_object* v_val_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v_val_670_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_670_);
lean_dec_ref_known(v___x_668_, 1);
v___x_671_ = lean_unsigned_to_nat(2u);
v___x_672_ = l_List_lengthTR___redArg(v_dancers_664_);
v___x_673_ = lean_nat_dec_le(v___x_671_, v___x_672_);
lean_dec(v___x_672_);
if (v___x_673_ == 0)
{
lean_dec(v_val_670_);
lean_dec(v_dy_666_);
lean_dec(v_dx_665_);
lean_dec(v_dancers_664_);
lean_dec_ref(v_r_576_);
return v___x_673_;
}
else
{
lean_object* v___x_674_; uint8_t v___x_675_; 
v___x_674_ = lp_choreo_Choreo_nextPairs(v_dancers_664_);
v___x_675_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__7(v_r_576_, v_val_670_, v_dx_665_, v_dy_666_, v___x_674_);
lean_dec(v_dy_666_);
lean_dec(v_dx_665_);
lean_dec(v_val_670_);
lean_dec_ref(v_r_576_);
return v___x_675_;
}
}
}
default: 
{
lean_object* v_k_676_; lean_object* v_pairs_677_; lean_object* v_mirror_678_; lean_object* v_phases_679_; lean_object* v___x_680_; 
v_k_676_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_k_676_);
v_pairs_677_ = lean_ctor_get(v_x_577_, 1);
lean_inc(v_pairs_677_);
v_mirror_678_ = lean_ctor_get(v_x_577_, 2);
lean_inc(v_mirror_678_);
lean_dec_ref_known(v_x_577_, 3);
v_phases_679_ = lean_ctor_get(v_r_576_, 1);
v___x_680_ = l_List_get_x3fInternal___redArg(v_phases_679_, v_k_676_);
if (lean_obj_tag(v___x_680_) == 0)
{
uint8_t v___x_681_; 
lean_dec(v_mirror_678_);
lean_dec(v_pairs_677_);
lean_dec_ref(v_r_576_);
v___x_681_ = 0;
return v___x_681_;
}
else
{
lean_object* v_val_682_; uint8_t v___x_683_; 
v_val_682_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_val_682_);
lean_dec_ref_known(v___x_680_, 1);
v___x_683_ = lp_choreo_List_all___at___00Choreo_Ask_check_spec__8(v_r_576_, v_val_682_, v_mirror_678_, v_pairs_677_);
lean_dec(v_mirror_678_);
lean_dec(v_val_682_);
lean_dec_ref(v_r_576_);
return v___x_683_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Ask_check___boxed(lean_object* v_r_684_, lean_object* v_x_685_){
_start:
{
uint8_t v_res_686_; lean_object* v_r_687_; 
v_res_686_ = lp_choreo_Choreo_Ask_check(v_r_684_, v_x_685_);
v_r_687_ = lean_box(v_res_686_);
return v_r_687_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Phase_checkTarget_match__1_splitter___redArg(lean_object* v_x_688_, lean_object* v_h__1_689_, lean_object* v_h__2_690_){
_start:
{
if (lean_obj_tag(v_x_688_) == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec(v_h__2_690_);
v___x_691_ = lean_box(0);
v___x_692_ = lean_apply_1(v_h__1_689_, v___x_691_);
return v___x_692_;
}
else
{
lean_object* v_val_693_; lean_object* v___x_694_; 
lean_dec(v_h__1_689_);
v_val_693_ = lean_ctor_get(v_x_688_, 0);
lean_inc(v_val_693_);
lean_dec_ref_known(v_x_688_, 1);
v___x_694_ = lean_apply_1(v_h__2_690_, v_val_693_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Phase_checkTarget_match__1_splitter(lean_object* v_motive_695_, lean_object* v_x_696_, lean_object* v_h__1_697_, lean_object* v_h__2_698_){
_start:
{
if (lean_obj_tag(v_x_696_) == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec(v_h__2_698_);
v___x_699_ = lean_box(0);
v___x_700_ = lean_apply_1(v_h__1_697_, v___x_699_);
return v___x_700_;
}
else
{
lean_object* v_val_701_; lean_object* v___x_702_; 
lean_dec(v_h__1_697_);
v_val_701_ = lean_ctor_get(v_x_696_, 0);
lean_inc(v_val_701_);
lean_dec_ref_known(v_x_696_, 1);
v___x_702_ = lean_apply_1(v_h__2_698_, v_val_701_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_Holds_match__1_splitter___redArg(lean_object* v_x_703_, lean_object* v_h__1_704_, lean_object* v_h__2_705_, lean_object* v_h__3_706_, lean_object* v_h__4_707_, lean_object* v_h__5_708_, lean_object* v_h__6_709_, lean_object* v_h__7_710_, lean_object* v_h__8_711_, lean_object* v_h__9_712_, lean_object* v_h__10_713_){
_start:
{
switch(lean_obj_tag(v_x_703_))
{
case 0:
{
lean_object* v_k_714_; lean_object* v_dancers_715_; lean_object* v_box_716_; lean_object* v___x_717_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
v_k_714_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_714_);
v_dancers_715_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_dancers_715_);
v_box_716_ = lean_ctor_get(v_x_703_, 2);
lean_inc_ref(v_box_716_);
lean_dec_ref_known(v_x_703_, 3);
v___x_717_ = lean_apply_3(v_h__1_704_, v_k_714_, v_dancers_715_, v_box_716_);
return v___x_717_;
}
case 1:
{
lean_object* v_k_718_; lean_object* v_dancers_719_; lean_object* v_box_720_; lean_object* v___x_721_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__1_704_);
v_k_718_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_718_);
v_dancers_719_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_dancers_719_);
v_box_720_ = lean_ctor_get(v_x_703_, 2);
lean_inc_ref(v_box_720_);
lean_dec_ref_known(v_x_703_, 3);
v___x_721_ = lean_apply_3(v_h__2_705_, v_k_718_, v_dancers_719_, v_box_720_);
return v___x_721_;
}
case 2:
{
lean_object* v_k_722_; lean_object* v_box_723_; lean_object* v___x_724_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_722_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_722_);
v_box_723_ = lean_ctor_get(v_x_703_, 1);
lean_inc_ref(v_box_723_);
lean_dec_ref_known(v_x_703_, 2);
v___x_724_ = lean_apply_2(v_h__3_706_, v_k_722_, v_box_723_);
return v___x_724_;
}
case 3:
{
lean_object* v_k_725_; lean_object* v_f_726_; lean_object* v_assign_727_; lean_object* v___x_728_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_725_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_725_);
v_f_726_ = lean_ctor_get(v_x_703_, 1);
lean_inc_ref(v_f_726_);
v_assign_727_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_assign_727_);
lean_dec_ref_known(v_x_703_, 3);
v___x_728_ = lean_apply_3(v_h__4_707_, v_k_725_, v_f_726_, v_assign_727_);
return v___x_728_;
}
case 4:
{
lean_object* v_k_u2080_729_; lean_object* v_k_u2081_730_; lean_object* v_dancers_731_; lean_object* v_mirror_732_; lean_object* v___x_733_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_u2080_729_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_u2080_729_);
v_k_u2081_730_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_k_u2081_730_);
v_dancers_731_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_dancers_731_);
v_mirror_732_ = lean_ctor_get(v_x_703_, 3);
lean_inc(v_mirror_732_);
lean_dec_ref_known(v_x_703_, 4);
v___x_733_ = lean_apply_4(v_h__5_708_, v_k_u2080_729_, v_k_u2081_730_, v_dancers_731_, v_mirror_732_);
return v___x_733_;
}
case 5:
{
lean_object* v_k_734_; lean_object* v_links_735_; lean_object* v___x_736_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_734_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_734_);
v_links_735_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_links_735_);
lean_dec_ref_known(v_x_703_, 2);
v___x_736_ = lean_apply_2(v_h__6_709_, v_k_734_, v_links_735_);
return v___x_736_;
}
case 6:
{
lean_object* v_k_737_; lean_object* v_dancers_738_; lean_object* v_cx_739_; lean_object* v_cy_740_; lean_object* v_r2_741_; lean_object* v___x_742_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_737_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_737_);
v_dancers_738_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_dancers_738_);
v_cx_739_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_cx_739_);
v_cy_740_ = lean_ctor_get(v_x_703_, 3);
lean_inc(v_cy_740_);
v_r2_741_ = lean_ctor_get(v_x_703_, 4);
lean_inc(v_r2_741_);
lean_dec_ref_known(v_x_703_, 5);
v___x_742_ = lean_apply_5(v_h__7_710_, v_k_737_, v_dancers_738_, v_cx_739_, v_cy_740_, v_r2_741_);
return v___x_742_;
}
case 7:
{
lean_object* v_k_743_; lean_object* v_dancers_744_; lean_object* v_dx_745_; lean_object* v_dy_746_; lean_object* v___x_747_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__9_712_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_743_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_743_);
v_dancers_744_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_dancers_744_);
v_dx_745_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_dx_745_);
v_dy_746_ = lean_ctor_get(v_x_703_, 3);
lean_inc(v_dy_746_);
lean_dec_ref_known(v_x_703_, 4);
v___x_747_ = lean_apply_4(v_h__8_711_, v_k_743_, v_dancers_744_, v_dx_745_, v_dy_746_);
return v___x_747_;
}
case 8:
{
lean_object* v_k_748_; lean_object* v_dancers_749_; lean_object* v_dx_750_; lean_object* v_dy_751_; lean_object* v___x_752_; 
lean_dec(v_h__10_713_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_748_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_748_);
v_dancers_749_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_dancers_749_);
v_dx_750_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_dx_750_);
v_dy_751_ = lean_ctor_get(v_x_703_, 3);
lean_inc(v_dy_751_);
lean_dec_ref_known(v_x_703_, 4);
v___x_752_ = lean_apply_4(v_h__9_712_, v_k_748_, v_dancers_749_, v_dx_750_, v_dy_751_);
return v___x_752_;
}
default: 
{
lean_object* v_k_753_; lean_object* v_pairs_754_; lean_object* v_mirror_755_; lean_object* v___x_756_; 
lean_dec(v_h__9_712_);
lean_dec(v_h__8_711_);
lean_dec(v_h__7_710_);
lean_dec(v_h__6_709_);
lean_dec(v_h__5_708_);
lean_dec(v_h__4_707_);
lean_dec(v_h__3_706_);
lean_dec(v_h__2_705_);
lean_dec(v_h__1_704_);
v_k_753_ = lean_ctor_get(v_x_703_, 0);
lean_inc(v_k_753_);
v_pairs_754_ = lean_ctor_get(v_x_703_, 1);
lean_inc(v_pairs_754_);
v_mirror_755_ = lean_ctor_get(v_x_703_, 2);
lean_inc(v_mirror_755_);
lean_dec_ref_known(v_x_703_, 3);
v___x_756_ = lean_apply_3(v_h__10_713_, v_k_753_, v_pairs_754_, v_mirror_755_);
return v___x_756_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_Holds_match__1_splitter(lean_object* v_motive_757_, lean_object* v_x_758_, lean_object* v_h__1_759_, lean_object* v_h__2_760_, lean_object* v_h__3_761_, lean_object* v_h__4_762_, lean_object* v_h__5_763_, lean_object* v_h__6_764_, lean_object* v_h__7_765_, lean_object* v_h__8_766_, lean_object* v_h__9_767_, lean_object* v_h__10_768_){
_start:
{
switch(lean_obj_tag(v_x_758_))
{
case 0:
{
lean_object* v_k_769_; lean_object* v_dancers_770_; lean_object* v_box_771_; lean_object* v___x_772_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
v_k_769_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_769_);
v_dancers_770_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_dancers_770_);
v_box_771_ = lean_ctor_get(v_x_758_, 2);
lean_inc_ref(v_box_771_);
lean_dec_ref_known(v_x_758_, 3);
v___x_772_ = lean_apply_3(v_h__1_759_, v_k_769_, v_dancers_770_, v_box_771_);
return v___x_772_;
}
case 1:
{
lean_object* v_k_773_; lean_object* v_dancers_774_; lean_object* v_box_775_; lean_object* v___x_776_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__1_759_);
v_k_773_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_773_);
v_dancers_774_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_dancers_774_);
v_box_775_ = lean_ctor_get(v_x_758_, 2);
lean_inc_ref(v_box_775_);
lean_dec_ref_known(v_x_758_, 3);
v___x_776_ = lean_apply_3(v_h__2_760_, v_k_773_, v_dancers_774_, v_box_775_);
return v___x_776_;
}
case 2:
{
lean_object* v_k_777_; lean_object* v_box_778_; lean_object* v___x_779_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_777_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_777_);
v_box_778_ = lean_ctor_get(v_x_758_, 1);
lean_inc_ref(v_box_778_);
lean_dec_ref_known(v_x_758_, 2);
v___x_779_ = lean_apply_2(v_h__3_761_, v_k_777_, v_box_778_);
return v___x_779_;
}
case 3:
{
lean_object* v_k_780_; lean_object* v_f_781_; lean_object* v_assign_782_; lean_object* v___x_783_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_780_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_780_);
v_f_781_ = lean_ctor_get(v_x_758_, 1);
lean_inc_ref(v_f_781_);
v_assign_782_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_assign_782_);
lean_dec_ref_known(v_x_758_, 3);
v___x_783_ = lean_apply_3(v_h__4_762_, v_k_780_, v_f_781_, v_assign_782_);
return v___x_783_;
}
case 4:
{
lean_object* v_k_u2080_784_; lean_object* v_k_u2081_785_; lean_object* v_dancers_786_; lean_object* v_mirror_787_; lean_object* v___x_788_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_u2080_784_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_u2080_784_);
v_k_u2081_785_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_k_u2081_785_);
v_dancers_786_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_dancers_786_);
v_mirror_787_ = lean_ctor_get(v_x_758_, 3);
lean_inc(v_mirror_787_);
lean_dec_ref_known(v_x_758_, 4);
v___x_788_ = lean_apply_4(v_h__5_763_, v_k_u2080_784_, v_k_u2081_785_, v_dancers_786_, v_mirror_787_);
return v___x_788_;
}
case 5:
{
lean_object* v_k_789_; lean_object* v_links_790_; lean_object* v___x_791_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_789_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_789_);
v_links_790_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_links_790_);
lean_dec_ref_known(v_x_758_, 2);
v___x_791_ = lean_apply_2(v_h__6_764_, v_k_789_, v_links_790_);
return v___x_791_;
}
case 6:
{
lean_object* v_k_792_; lean_object* v_dancers_793_; lean_object* v_cx_794_; lean_object* v_cy_795_; lean_object* v_r2_796_; lean_object* v___x_797_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_792_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_792_);
v_dancers_793_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_dancers_793_);
v_cx_794_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_cx_794_);
v_cy_795_ = lean_ctor_get(v_x_758_, 3);
lean_inc(v_cy_795_);
v_r2_796_ = lean_ctor_get(v_x_758_, 4);
lean_inc(v_r2_796_);
lean_dec_ref_known(v_x_758_, 5);
v___x_797_ = lean_apply_5(v_h__7_765_, v_k_792_, v_dancers_793_, v_cx_794_, v_cy_795_, v_r2_796_);
return v___x_797_;
}
case 7:
{
lean_object* v_k_798_; lean_object* v_dancers_799_; lean_object* v_dx_800_; lean_object* v_dy_801_; lean_object* v___x_802_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__9_767_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_798_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_798_);
v_dancers_799_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_dancers_799_);
v_dx_800_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_dx_800_);
v_dy_801_ = lean_ctor_get(v_x_758_, 3);
lean_inc(v_dy_801_);
lean_dec_ref_known(v_x_758_, 4);
v___x_802_ = lean_apply_4(v_h__8_766_, v_k_798_, v_dancers_799_, v_dx_800_, v_dy_801_);
return v___x_802_;
}
case 8:
{
lean_object* v_k_803_; lean_object* v_dancers_804_; lean_object* v_dx_805_; lean_object* v_dy_806_; lean_object* v___x_807_; 
lean_dec(v_h__10_768_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_803_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_803_);
v_dancers_804_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_dancers_804_);
v_dx_805_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_dx_805_);
v_dy_806_ = lean_ctor_get(v_x_758_, 3);
lean_inc(v_dy_806_);
lean_dec_ref_known(v_x_758_, 4);
v___x_807_ = lean_apply_4(v_h__9_767_, v_k_803_, v_dancers_804_, v_dx_805_, v_dy_806_);
return v___x_807_;
}
default: 
{
lean_object* v_k_808_; lean_object* v_pairs_809_; lean_object* v_mirror_810_; lean_object* v___x_811_; 
lean_dec(v_h__9_767_);
lean_dec(v_h__8_766_);
lean_dec(v_h__7_765_);
lean_dec(v_h__6_764_);
lean_dec(v_h__5_763_);
lean_dec(v_h__4_762_);
lean_dec(v_h__3_761_);
lean_dec(v_h__2_760_);
lean_dec(v_h__1_759_);
v_k_808_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_k_808_);
v_pairs_809_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_pairs_809_);
v_mirror_810_ = lean_ctor_get(v_x_758_, 2);
lean_inc(v_mirror_810_);
lean_dec_ref_known(v_x_758_, 3);
v___x_811_ = lean_apply_3(v_h__10_768_, v_k_808_, v_pairs_809_, v_mirror_810_);
return v___x_811_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__1_splitter___redArg(lean_object* v_x_812_, lean_object* v_h__1_813_, lean_object* v_h__2_814_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec(v_h__1_813_);
v___x_815_ = lean_box(0);
v___x_816_ = lean_apply_1(v_h__2_814_, v___x_815_);
return v___x_816_;
}
else
{
lean_object* v_val_817_; lean_object* v___x_818_; 
lean_dec(v_h__2_814_);
v_val_817_ = lean_ctor_get(v_x_812_, 0);
lean_inc(v_val_817_);
lean_dec_ref_known(v_x_812_, 1);
v___x_818_ = lean_apply_1(v_h__1_813_, v_val_817_);
return v___x_818_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__1_splitter(lean_object* v_motive_819_, lean_object* v_x_820_, lean_object* v_h__1_821_, lean_object* v_h__2_822_){
_start:
{
if (lean_obj_tag(v_x_820_) == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_h__1_821_);
v___x_823_ = lean_box(0);
v___x_824_ = lean_apply_1(v_h__2_822_, v___x_823_);
return v___x_824_;
}
else
{
lean_object* v_val_825_; lean_object* v___x_826_; 
lean_dec(v_h__2_822_);
v_val_825_ = lean_ctor_get(v_x_820_, 0);
lean_inc(v_val_825_);
lean_dec_ref_known(v_x_820_, 1);
v___x_826_ = lean_apply_1(v_h__1_821_, v_val_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__3_splitter___redArg(lean_object* v_x_827_, lean_object* v_x_828_, lean_object* v_h__1_829_, lean_object* v_h__2_830_){
_start:
{
if (lean_obj_tag(v_x_827_) == 1)
{
if (lean_obj_tag(v_x_828_) == 1)
{
lean_object* v_val_831_; lean_object* v_val_832_; lean_object* v___x_833_; 
lean_dec(v_h__2_830_);
v_val_831_ = lean_ctor_get(v_x_827_, 0);
lean_inc(v_val_831_);
lean_dec_ref_known(v_x_827_, 1);
v_val_832_ = lean_ctor_get(v_x_828_, 0);
lean_inc(v_val_832_);
lean_dec_ref_known(v_x_828_, 1);
v___x_833_ = lean_apply_2(v_h__1_829_, v_val_831_, v_val_832_);
return v___x_833_;
}
else
{
lean_object* v___x_834_; 
lean_dec(v_h__1_829_);
v___x_834_ = lean_apply_3(v_h__2_830_, v_x_827_, v_x_828_, lean_box(0));
return v___x_834_;
}
}
else
{
lean_object* v___x_835_; 
lean_dec(v_h__1_829_);
v___x_835_ = lean_apply_3(v_h__2_830_, v_x_827_, v_x_828_, lean_box(0));
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Intent_0__Choreo_Ask_check_match__3_splitter(lean_object* v_motive_836_, lean_object* v_x_837_, lean_object* v_x_838_, lean_object* v_h__1_839_, lean_object* v_h__2_840_){
_start:
{
if (lean_obj_tag(v_x_837_) == 1)
{
if (lean_obj_tag(v_x_838_) == 1)
{
lean_object* v_val_841_; lean_object* v_val_842_; lean_object* v___x_843_; 
lean_dec(v_h__2_840_);
v_val_841_ = lean_ctor_get(v_x_837_, 0);
lean_inc(v_val_841_);
lean_dec_ref_known(v_x_837_, 1);
v_val_842_ = lean_ctor_get(v_x_838_, 0);
lean_inc(v_val_842_);
lean_dec_ref_known(v_x_838_, 1);
v___x_843_ = lean_apply_2(v_h__1_839_, v_val_841_, v_val_842_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; 
lean_dec(v_h__1_839_);
v___x_844_ = lean_apply_3(v_h__2_840_, v_x_837_, v_x_838_, lean_box(0));
return v___x_844_;
}
}
else
{
lean_object* v___x_845_; 
lean_dec(v_h__1_839_);
v___x_845_ = lean_apply_3(v_h__2_840_, v_x_837_, v_x_838_, lean_box(0));
return v___x_845_;
}
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_lineBrokenAt(lean_object* v_c_846_, lean_object* v_ph_847_, lean_object* v_a_848_, lean_object* v_b_849_, lean_object* v_dx_850_, lean_object* v_dy_851_){
_start:
{
lean_object* v_n_852_; uint8_t v___x_853_; 
v_n_852_ = lean_ctor_get(v_c_846_, 0);
v___x_853_ = lean_nat_dec_lt(v_a_848_, v_n_852_);
if (v___x_853_ == 0)
{
lean_dec(v_b_849_);
lean_dec(v_a_848_);
return v___x_853_;
}
else
{
uint8_t v___x_854_; 
v___x_854_ = lean_nat_dec_lt(v_b_849_, v_n_852_);
if (v___x_854_ == 0)
{
lean_dec(v_b_849_);
lean_dec(v_a_848_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = lp_choreo_Choreo_Phase_path(v_ph_847_, v_a_848_);
v___x_856_ = lp_choreo_Choreo_Path_wf(v___x_855_);
if (v___x_856_ == 0)
{
lean_dec_ref(v___x_855_);
lean_dec(v_b_849_);
return v___x_856_;
}
else
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = lp_choreo_Choreo_Phase_path(v_ph_847_, v_b_849_);
v___x_858_ = lp_choreo_Choreo_Path_wf(v___x_857_);
if (v___x_858_ == 0)
{
lean_dec_ref(v___x_857_);
lean_dec_ref(v___x_855_);
return v___x_858_;
}
else
{
uint8_t v___x_859_; 
v___x_859_ = lp_choreo_Choreo_endOffsetOk(v___x_855_, v___x_857_, v_dx_850_, v_dy_851_);
lean_dec_ref(v___x_857_);
lean_dec_ref(v___x_855_);
if (v___x_859_ == 0)
{
return v___x_858_;
}
else
{
uint8_t v___x_860_; 
v___x_860_ = 0;
return v___x_860_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_lineBrokenAt___boxed(lean_object* v_c_861_, lean_object* v_ph_862_, lean_object* v_a_863_, lean_object* v_b_864_, lean_object* v_dx_865_, lean_object* v_dy_866_){
_start:
{
uint8_t v_res_867_; lean_object* v_r_868_; 
v_res_867_ = lp_choreo_Choreo_lineBrokenAt(v_c_861_, v_ph_862_, v_a_863_, v_b_864_, v_dx_865_, v_dy_866_);
lean_dec(v_dy_866_);
lean_dec(v_dx_865_);
lean_dec_ref(v_ph_862_);
lean_dec_ref(v_c_861_);
v_r_868_ = lean_box(v_res_867_);
return v_r_868_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Routine(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Intent(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Routine(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
