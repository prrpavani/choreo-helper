// Lean compiler output
// Module: Choreo.Poly
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_scale(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_scale___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_neg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_neg___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Poly_neg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_neg___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_neg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_sub___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_zeros___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_zeros___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_zeros(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_zeros___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_shiftS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_shiftS___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_mul(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_pow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_pow___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_pow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_subst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_subst___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_left___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_left___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Poly_left___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_left___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Poly_left___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_left___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_left(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_left___boxed(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Poly_right___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_right___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Poly_right___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_right___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Poly_right___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_right___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Poly_right___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Poly_right___closed__3;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_right(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_right___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allNonneg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allNonneg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allPos(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allPos___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allZero(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allZero___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_bern(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_bern___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_add_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_add_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_scale_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_scale_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_mul_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_mul_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_subst_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_subst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_add(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_2_;
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_inc_ref(v_x_1_);
return v_x_1_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_15_; 
v_head_3_ = lean_ctor_get(v_x_1_, 0);
v_tail_4_ = lean_ctor_get(v_x_1_, 1);
v_head_5_ = lean_ctor_get(v_x_2_, 0);
v_tail_6_ = lean_ctor_get(v_x_2_, 1);
v_isSharedCheck_15_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_15_ == 0)
{
v___x_8_ = v_x_2_;
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_tail_6_);
lean_inc(v_head_5_);
lean_dec(v_x_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_10_ = lean_int_add(v_head_3_, v_head_5_);
lean_dec(v_head_5_);
v___x_11_ = lp_choreo_Choreo_Poly_add(v_tail_4_, v_tail_6_);
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v___x_11_);
lean_ctor_set(v___x_8_, 0, v___x_10_);
v___x_13_ = v___x_8_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v___x_10_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v___x_11_);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
return v___x_13_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_add___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_choreo_Choreo_Poly_add(v_x_16_, v_x_17_);
lean_dec(v_x_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_scale(lean_object* v_c_19_, lean_object* v_x_20_){
_start:
{
if (lean_obj_tag(v_x_20_) == 0)
{
return v_x_20_;
}
else
{
lean_object* v_head_21_; lean_object* v_tail_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_31_; 
v_head_21_ = lean_ctor_get(v_x_20_, 0);
v_tail_22_ = lean_ctor_get(v_x_20_, 1);
v_isSharedCheck_31_ = !lean_is_exclusive(v_x_20_);
if (v_isSharedCheck_31_ == 0)
{
v___x_24_ = v_x_20_;
v_isShared_25_ = v_isSharedCheck_31_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_tail_22_);
lean_inc(v_head_21_);
lean_dec(v_x_20_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_31_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v___x_26_ = lean_int_mul(v_c_19_, v_head_21_);
lean_dec(v_head_21_);
v___x_27_ = lp_choreo_Choreo_Poly_scale(v_c_19_, v_tail_22_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 1, v___x_27_);
lean_ctor_set(v___x_24_, 0, v___x_26_);
v___x_29_ = v___x_24_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v___x_26_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v___x_27_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_scale___boxed(lean_object* v_c_32_, lean_object* v_x_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lp_choreo_Choreo_Poly_scale(v_c_32_, v_x_33_);
lean_dec(v_c_32_);
return v_res_34_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_neg___closed__0(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_neg___closed__1(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&lp_choreo_Choreo_Poly_neg___closed__0, &lp_choreo_Choreo_Poly_neg___closed__0_once, _init_lp_choreo_Choreo_Poly_neg___closed__0);
v___x_38_ = lean_int_neg(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_neg(lean_object* v_p_39_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&lp_choreo_Choreo_Poly_neg___closed__1, &lp_choreo_Choreo_Poly_neg___closed__1_once, _init_lp_choreo_Choreo_Poly_neg___closed__1);
v___x_41_ = lp_choreo_Choreo_Poly_scale(v___x_40_, v_p_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_sub(lean_object* v_p_42_, lean_object* v_q_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lp_choreo_Choreo_Poly_neg(v_q_43_);
v___x_45_ = lp_choreo_Choreo_Poly_add(v_p_42_, v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_sub___boxed(lean_object* v_p_46_, lean_object* v_q_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = lp_choreo_Choreo_Poly_sub(v_p_46_, v_q_47_);
lean_dec(v_p_46_);
return v_res_48_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_zeros___closed__0(void){
_start:
{
lean_object* v_zero_49_; lean_object* v___x_50_; 
v_zero_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_nat_to_int(v_zero_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_zeros(lean_object* v_x_51_){
_start:
{
lean_object* v_zero_52_; uint8_t v_isZero_53_; 
v_zero_52_ = lean_unsigned_to_nat(0u);
v_isZero_53_ = lean_nat_dec_eq(v_x_51_, v_zero_52_);
if (v_isZero_53_ == 1)
{
lean_object* v___x_54_; 
v___x_54_ = lean_box(0);
return v___x_54_;
}
else
{
lean_object* v_one_55_; lean_object* v_n_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_one_55_ = lean_unsigned_to_nat(1u);
v_n_56_ = lean_nat_sub(v_x_51_, v_one_55_);
v___x_57_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_58_ = lp_choreo_Choreo_Poly_zeros(v_n_56_);
lean_dec(v_n_56_);
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_zeros___boxed(lean_object* v_x_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = lp_choreo_Choreo_Poly_zeros(v_x_60_);
lean_dec(v_x_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_shiftS(lean_object* v_p_62_, lean_object* v_k_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lp_choreo_Choreo_Poly_zeros(v_k_63_);
v___x_65_ = l_List_appendTR___redArg(v_p_62_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_shiftS___boxed(lean_object* v_p_66_, lean_object* v_k_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lp_choreo_Choreo_Poly_shiftS(v_p_66_, v_k_67_);
lean_dec(v_k_67_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_mul(lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_69_) == 0)
{
lean_dec(v_x_70_);
return v_x_69_;
}
else
{
lean_object* v_tail_71_; 
v_tail_71_ = lean_ctor_get(v_x_69_, 1);
if (lean_obj_tag(v_tail_71_) == 0)
{
lean_object* v_head_72_; lean_object* v___x_73_; 
v_head_72_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_head_72_);
lean_dec_ref_known(v_x_69_, 2);
v___x_73_ = lp_choreo_Choreo_Poly_scale(v_head_72_, v_x_70_);
lean_dec(v_head_72_);
return v___x_73_;
}
else
{
lean_object* v_head_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_87_; 
lean_inc_ref(v_tail_71_);
v_head_74_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v_x_69_, 1);
lean_dec(v_unused_88_);
v___x_76_ = v_x_69_;
v_isShared_77_ = v_isSharedCheck_87_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_head_74_);
lean_dec(v_x_69_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_87_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
lean_inc(v_x_70_);
v___x_78_ = lp_choreo_Choreo_Poly_scale(v_head_74_, v_x_70_);
lean_dec(v_head_74_);
v___x_79_ = l_List_lengthTR___redArg(v_tail_71_);
v___x_80_ = lp_choreo_Choreo_Poly_shiftS(v___x_78_, v___x_79_);
lean_dec(v___x_79_);
v___x_81_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_82_ = lp_choreo_Choreo_Poly_mul(v_tail_71_, v_x_70_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v___x_82_);
lean_ctor_set(v___x_76_, 0, v___x_81_);
v___x_84_ = v___x_76_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v___x_82_);
v___x_84_ = v_reuseFailAlloc_86_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_85_; 
v___x_85_ = lp_choreo_Choreo_Poly_add(v___x_80_, v___x_84_);
lean_dec(v___x_80_);
return v___x_85_;
}
}
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_pow___closed__0(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_box(0);
v___x_90_ = lean_obj_once(&lp_choreo_Choreo_Poly_neg___closed__0, &lp_choreo_Choreo_Poly_neg___closed__0_once, _init_lp_choreo_Choreo_Poly_neg___closed__0);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_pow(lean_object* v_p_92_, lean_object* v_x_93_){
_start:
{
lean_object* v_zero_94_; uint8_t v_isZero_95_; 
v_zero_94_ = lean_unsigned_to_nat(0u);
v_isZero_95_ = lean_nat_dec_eq(v_x_93_, v_zero_94_);
if (v_isZero_95_ == 1)
{
lean_object* v___x_96_; 
lean_dec(v_p_92_);
v___x_96_ = lean_obj_once(&lp_choreo_Choreo_Poly_pow___closed__0, &lp_choreo_Choreo_Poly_pow___closed__0_once, _init_lp_choreo_Choreo_Poly_pow___closed__0);
return v___x_96_;
}
else
{
lean_object* v_one_97_; lean_object* v_n_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_one_97_ = lean_unsigned_to_nat(1u);
v_n_98_ = lean_nat_sub(v_x_93_, v_one_97_);
lean_inc(v_p_92_);
v___x_99_ = lp_choreo_Choreo_Poly_pow(v_p_92_, v_n_98_);
lean_dec(v_n_98_);
v___x_100_ = lp_choreo_Choreo_Poly_mul(v_p_92_, v___x_99_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_pow___boxed(lean_object* v_p_101_, lean_object* v_x_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = lp_choreo_Choreo_Poly_pow(v_p_101_, v_x_102_);
lean_dec(v_x_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_subst(lean_object* v_l_104_, lean_object* v_r_105_, lean_object* v_x_106_){
_start:
{
if (lean_obj_tag(v_x_106_) == 0)
{
lean_dec(v_r_105_);
lean_dec(v_l_104_);
return v_x_106_;
}
else
{
lean_object* v_tail_107_; 
v_tail_107_ = lean_ctor_get(v_x_106_, 1);
if (lean_obj_tag(v_tail_107_) == 0)
{
lean_dec(v_r_105_);
lean_dec(v_l_104_);
lean_inc_ref(v_x_106_);
return v_x_106_;
}
else
{
lean_object* v_head_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_head_108_ = lean_ctor_get(v_x_106_, 0);
v___x_109_ = l_List_lengthTR___redArg(v_tail_107_);
lean_inc(v_l_104_);
v___x_110_ = lp_choreo_Choreo_Poly_pow(v_l_104_, v___x_109_);
lean_dec(v___x_109_);
v___x_111_ = lp_choreo_Choreo_Poly_scale(v_head_108_, v___x_110_);
lean_inc(v_r_105_);
v___x_112_ = lp_choreo_Choreo_Poly_subst(v_l_104_, v_r_105_, v_tail_107_);
v___x_113_ = lp_choreo_Choreo_Poly_mul(v_r_105_, v___x_112_);
v___x_114_ = lp_choreo_Choreo_Poly_add(v___x_111_, v___x_113_);
lean_dec(v___x_111_);
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_subst___boxed(lean_object* v_l_115_, lean_object* v_r_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_choreo_Choreo_Poly_subst(v_l_115_, v_r_116_, v_x_117_);
lean_dec(v_x_117_);
return v_res_118_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_left___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(2u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_left___closed__1(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = lean_obj_once(&lp_choreo_Choreo_Poly_pow___closed__0, &lp_choreo_Choreo_Poly_pow___closed__0_once, _init_lp_choreo_Choreo_Poly_pow___closed__0);
v___x_122_ = lean_obj_once(&lp_choreo_Choreo_Poly_left___closed__0, &lp_choreo_Choreo_Poly_left___closed__0_once, _init_lp_choreo_Choreo_Poly_left___closed__0);
v___x_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_121_);
return v___x_123_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_left___closed__2(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&lp_choreo_Choreo_Poly_pow___closed__0, &lp_choreo_Choreo_Poly_pow___closed__0_once, _init_lp_choreo_Choreo_Poly_pow___closed__0);
v___x_125_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_left(lean_object* v_p_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&lp_choreo_Choreo_Poly_left___closed__1, &lp_choreo_Choreo_Poly_left___closed__1_once, _init_lp_choreo_Choreo_Poly_left___closed__1);
v___x_129_ = lean_obj_once(&lp_choreo_Choreo_Poly_left___closed__2, &lp_choreo_Choreo_Poly_left___closed__2_once, _init_lp_choreo_Choreo_Poly_left___closed__2);
v___x_130_ = lp_choreo_Choreo_Poly_subst(v___x_128_, v___x_129_, v_p_127_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_left___boxed(lean_object* v_p_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = lp_choreo_Choreo_Poly_left(v_p_131_);
lean_dec(v_p_131_);
return v_res_132_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_right___closed__0(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_box(0);
v___x_134_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_right___closed__1(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_obj_once(&lp_choreo_Choreo_Poly_right___closed__0, &lp_choreo_Choreo_Poly_right___closed__0_once, _init_lp_choreo_Choreo_Poly_right___closed__0);
v___x_137_ = lean_obj_once(&lp_choreo_Choreo_Poly_neg___closed__0, &lp_choreo_Choreo_Poly_neg___closed__0_once, _init_lp_choreo_Choreo_Poly_neg___closed__0);
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_right___closed__2(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_box(0);
v___x_140_ = lean_obj_once(&lp_choreo_Choreo_Poly_left___closed__0, &lp_choreo_Choreo_Poly_left___closed__0_once, _init_lp_choreo_Choreo_Poly_left___closed__0);
v___x_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_lp_choreo_Choreo_Poly_right___closed__3(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_obj_once(&lp_choreo_Choreo_Poly_right___closed__2, &lp_choreo_Choreo_Poly_right___closed__2_once, _init_lp_choreo_Choreo_Poly_right___closed__2);
v___x_143_ = lean_obj_once(&lp_choreo_Choreo_Poly_neg___closed__0, &lp_choreo_Choreo_Poly_neg___closed__0_once, _init_lp_choreo_Choreo_Poly_neg___closed__0);
v___x_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_right(lean_object* v_p_145_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = lean_obj_once(&lp_choreo_Choreo_Poly_right___closed__1, &lp_choreo_Choreo_Poly_right___closed__1_once, _init_lp_choreo_Choreo_Poly_right___closed__1);
v___x_147_ = lean_obj_once(&lp_choreo_Choreo_Poly_right___closed__3, &lp_choreo_Choreo_Poly_right___closed__3_once, _init_lp_choreo_Choreo_Poly_right___closed__3);
v___x_148_ = lp_choreo_Choreo_Poly_subst(v___x_146_, v___x_147_, v_p_145_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_right___boxed(lean_object* v_p_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = lp_choreo_Choreo_Poly_right(v_p_149_);
lean_dec(v_p_149_);
return v_res_150_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allNonneg(lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
uint8_t v___x_152_; 
v___x_152_ = 1;
return v___x_152_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_head_153_ = lean_ctor_get(v_x_151_, 0);
v_tail_154_ = lean_ctor_get(v_x_151_, 1);
v___x_155_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_156_ = lean_int_dec_le(v___x_155_, v_head_153_);
if (v___x_156_ == 0)
{
return v___x_156_;
}
else
{
v_x_151_ = v_tail_154_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allNonneg___boxed(lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = lp_choreo_Choreo_Poly_allNonneg(v_x_158_);
lean_dec(v_x_158_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allPos(lean_object* v_x_161_){
_start:
{
if (lean_obj_tag(v_x_161_) == 0)
{
uint8_t v___x_162_; 
v___x_162_ = 1;
return v___x_162_;
}
else
{
lean_object* v_head_163_; lean_object* v_tail_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_head_163_ = lean_ctor_get(v_x_161_, 0);
v_tail_164_ = lean_ctor_get(v_x_161_, 1);
v___x_165_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_166_ = lean_int_dec_lt(v___x_165_, v_head_163_);
if (v___x_166_ == 0)
{
return v___x_166_;
}
else
{
v_x_161_ = v_tail_164_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allPos___boxed(lean_object* v_x_168_){
_start:
{
uint8_t v_res_169_; lean_object* v_r_170_; 
v_res_169_ = lp_choreo_Choreo_Poly_allPos(v_x_168_);
lean_dec(v_x_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_allZero(lean_object* v_x_171_){
_start:
{
if (lean_obj_tag(v_x_171_) == 0)
{
uint8_t v___x_172_; 
v___x_172_ = 1;
return v___x_172_;
}
else
{
lean_object* v_head_173_; lean_object* v_tail_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_head_173_ = lean_ctor_get(v_x_171_, 0);
v_tail_174_ = lean_ctor_get(v_x_171_, 1);
v___x_175_ = lean_obj_once(&lp_choreo_Choreo_Poly_zeros___closed__0, &lp_choreo_Choreo_Poly_zeros___closed__0_once, _init_lp_choreo_Choreo_Poly_zeros___closed__0);
v___x_176_ = lean_int_dec_eq(v_head_173_, v___x_175_);
if (v___x_176_ == 0)
{
return v___x_176_;
}
else
{
v_x_171_ = v_tail_174_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_allZero___boxed(lean_object* v_x_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = lp_choreo_Choreo_Poly_allZero(v_x_178_);
lean_dec(v_x_178_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Poly_bern(lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
lean_object* v_zero_183_; uint8_t v_isZero_184_; 
v_zero_183_ = lean_unsigned_to_nat(0u);
v_isZero_184_ = lean_nat_dec_eq(v_x_181_, v_zero_183_);
if (v_isZero_184_ == 1)
{
uint8_t v___x_185_; 
lean_dec(v_x_181_);
v___x_185_ = lp_choreo_Choreo_Poly_allNonneg(v_x_182_);
lean_dec(v_x_182_);
return v___x_185_;
}
else
{
uint8_t v___x_186_; 
v___x_186_ = lp_choreo_Choreo_Poly_allNonneg(v_x_182_);
if (v___x_186_ == 0)
{
lean_object* v_one_187_; lean_object* v_n_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v_one_187_ = lean_unsigned_to_nat(1u);
v_n_188_ = lean_nat_sub(v_x_181_, v_one_187_);
lean_dec(v_x_181_);
v___x_189_ = lp_choreo_Choreo_Poly_left(v_x_182_);
lean_inc(v_n_188_);
v___x_190_ = lp_choreo_Choreo_Poly_bern(v_n_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_dec(v_n_188_);
lean_dec(v_x_182_);
return v___x_190_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = lp_choreo_Choreo_Poly_right(v_x_182_);
lean_dec(v_x_182_);
v_x_181_ = v_n_188_;
v_x_182_ = v___x_191_;
goto _start;
}
}
else
{
lean_dec(v_x_182_);
lean_dec(v_x_181_);
return v___x_186_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Poly_bern___boxed(lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = lp_choreo_Choreo_Poly_bern(v_x_193_, v_x_194_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___redArg(lean_object* v_inst_197_, lean_object* v_p_198_, lean_object* v_s_199_, lean_object* v_t_200_){
_start:
{
if (lean_obj_tag(v_p_198_) == 0)
{
lean_object* v_toCommRing_201_; lean_object* v_toSemiring_202_; lean_object* v_ofNat_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_toCommRing_201_ = lean_ctor_get(v_inst_197_, 0);
v_toSemiring_202_ = lean_ctor_get(v_toCommRing_201_, 0);
lean_inc_ref(v_toSemiring_202_);
lean_dec(v_t_200_);
lean_dec(v_s_199_);
lean_dec_ref(v_inst_197_);
v_ofNat_203_ = lean_ctor_get(v_toSemiring_202_, 3);
lean_inc(v_ofNat_203_);
lean_dec_ref(v_toSemiring_202_);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_apply_1(v_ofNat_203_, v___x_204_);
return v___x_205_;
}
else
{
lean_object* v_toCommRing_206_; lean_object* v_toSemiring_207_; lean_object* v_intCast_208_; lean_object* v_toAdd_209_; lean_object* v_toMul_210_; lean_object* v_npow_211_; lean_object* v_head_212_; lean_object* v_tail_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_toCommRing_206_ = lean_ctor_get(v_inst_197_, 0);
v_toSemiring_207_ = lean_ctor_get(v_toCommRing_206_, 0);
v_intCast_208_ = lean_ctor_get(v_toCommRing_206_, 3);
v_toAdd_209_ = lean_ctor_get(v_toSemiring_207_, 0);
lean_inc(v_toAdd_209_);
v_toMul_210_ = lean_ctor_get(v_toSemiring_207_, 1);
lean_inc_n(v_toMul_210_, 2);
v_npow_211_ = lean_ctor_get(v_toSemiring_207_, 5);
v_head_212_ = lean_ctor_get(v_p_198_, 0);
lean_inc(v_head_212_);
v_tail_213_ = lean_ctor_get(v_p_198_, 1);
lean_inc(v_tail_213_);
lean_dec_ref_known(v_p_198_, 2);
lean_inc(v_intCast_208_);
v___x_214_ = lean_apply_1(v_intCast_208_, v_head_212_);
v___x_215_ = l_List_lengthTR___redArg(v_tail_213_);
lean_inc(v_npow_211_);
lean_inc(v_s_199_);
v___x_216_ = lean_apply_2(v_npow_211_, v_s_199_, v___x_215_);
v___x_217_ = lean_apply_2(v_toMul_210_, v___x_214_, v___x_216_);
lean_inc(v_t_200_);
v___x_218_ = lp_choreo_Choreo_ev___redArg(v_inst_197_, v_tail_213_, v_s_199_, v_t_200_);
v___x_219_ = lean_apply_2(v_toMul_210_, v_t_200_, v___x_218_);
v___x_220_ = lean_apply_2(v_toAdd_209_, v___x_217_, v___x_219_);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev(lean_object* v_K_221_, lean_object* v_inst_222_, lean_object* v_p_223_, lean_object* v_s_224_, lean_object* v_t_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lp_choreo_Choreo_ev___redArg(v_inst_222_, v_p_223_, v_s_224_, v_t_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_add_match__1_splitter___redArg(lean_object* v_x_227_, lean_object* v_x_228_, lean_object* v_h__1_229_, lean_object* v_h__2_230_, lean_object* v_h__3_231_){
_start:
{
if (lean_obj_tag(v_x_227_) == 0)
{
lean_object* v___x_232_; 
lean_dec(v_h__3_231_);
lean_dec(v_h__1_229_);
v___x_232_ = lean_apply_1(v_h__2_230_, v_x_228_);
return v___x_232_;
}
else
{
lean_dec(v_h__2_230_);
if (lean_obj_tag(v_x_228_) == 0)
{
lean_object* v___x_233_; 
lean_dec(v_h__1_229_);
v___x_233_ = lean_apply_2(v_h__3_231_, v_x_227_, lean_box(0));
return v___x_233_;
}
else
{
lean_object* v_head_234_; lean_object* v_tail_235_; lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_238_; 
lean_dec(v_h__3_231_);
v_head_234_ = lean_ctor_get(v_x_227_, 0);
lean_inc(v_head_234_);
v_tail_235_ = lean_ctor_get(v_x_227_, 1);
lean_inc(v_tail_235_);
lean_dec_ref_known(v_x_227_, 2);
v_head_236_ = lean_ctor_get(v_x_228_, 0);
lean_inc(v_head_236_);
v_tail_237_ = lean_ctor_get(v_x_228_, 1);
lean_inc(v_tail_237_);
lean_dec_ref_known(v_x_228_, 2);
v___x_238_ = lean_apply_4(v_h__1_229_, v_head_234_, v_tail_235_, v_head_236_, v_tail_237_);
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_add_match__1_splitter(lean_object* v_motive_239_, lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_h__1_242_, lean_object* v_h__2_243_, lean_object* v_h__3_244_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
lean_object* v___x_245_; 
lean_dec(v_h__3_244_);
lean_dec(v_h__1_242_);
v___x_245_ = lean_apply_1(v_h__2_243_, v_x_241_);
return v___x_245_;
}
else
{
lean_dec(v_h__2_243_);
if (lean_obj_tag(v_x_241_) == 0)
{
lean_object* v___x_246_; 
lean_dec(v_h__1_242_);
v___x_246_ = lean_apply_2(v_h__3_244_, v_x_240_, lean_box(0));
return v___x_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v_head_249_; lean_object* v_tail_250_; lean_object* v___x_251_; 
lean_dec(v_h__3_244_);
v_head_247_ = lean_ctor_get(v_x_240_, 0);
lean_inc(v_head_247_);
v_tail_248_ = lean_ctor_get(v_x_240_, 1);
lean_inc(v_tail_248_);
lean_dec_ref_known(v_x_240_, 2);
v_head_249_ = lean_ctor_get(v_x_241_, 0);
lean_inc(v_head_249_);
v_tail_250_ = lean_ctor_get(v_x_241_, 1);
lean_inc(v_tail_250_);
lean_dec_ref_known(v_x_241_, 2);
v___x_251_ = lean_apply_4(v_h__1_242_, v_head_247_, v_tail_248_, v_head_249_, v_tail_250_);
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_scale_match__1_splitter___redArg(lean_object* v_x_252_, lean_object* v_h__1_253_, lean_object* v_h__2_254_){
_start:
{
if (lean_obj_tag(v_x_252_) == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v_h__2_254_);
v___x_255_ = lean_box(0);
v___x_256_ = lean_apply_1(v_h__1_253_, v___x_255_);
return v___x_256_;
}
else
{
lean_object* v_head_257_; lean_object* v_tail_258_; lean_object* v___x_259_; 
lean_dec(v_h__1_253_);
v_head_257_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_head_257_);
v_tail_258_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_tail_258_);
lean_dec_ref_known(v_x_252_, 2);
v___x_259_ = lean_apply_2(v_h__2_254_, v_head_257_, v_tail_258_);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_scale_match__1_splitter(lean_object* v_motive_260_, lean_object* v_x_261_, lean_object* v_h__1_262_, lean_object* v_h__2_263_){
_start:
{
if (lean_obj_tag(v_x_261_) == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v_h__2_263_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_apply_1(v_h__1_262_, v___x_264_);
return v___x_265_;
}
else
{
lean_object* v_head_266_; lean_object* v_tail_267_; lean_object* v___x_268_; 
lean_dec(v_h__1_262_);
v_head_266_ = lean_ctor_get(v_x_261_, 0);
lean_inc(v_head_266_);
v_tail_267_ = lean_ctor_get(v_x_261_, 1);
lean_inc(v_tail_267_);
lean_dec_ref_known(v_x_261_, 2);
v___x_268_ = lean_apply_2(v_h__2_263_, v_head_266_, v_tail_267_);
return v___x_268_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___redArg(lean_object* v_x_269_, lean_object* v_h__1_270_, lean_object* v_h__2_271_){
_start:
{
lean_object* v_zero_272_; uint8_t v_isZero_273_; 
v_zero_272_ = lean_unsigned_to_nat(0u);
v_isZero_273_ = lean_nat_dec_eq(v_x_269_, v_zero_272_);
if (v_isZero_273_ == 1)
{
lean_object* v___x_274_; lean_object* v___x_275_; 
lean_dec(v_h__2_271_);
v___x_274_ = lean_box(0);
v___x_275_ = lean_apply_1(v_h__1_270_, v___x_274_);
return v___x_275_;
}
else
{
lean_object* v_one_276_; lean_object* v_n_277_; lean_object* v___x_278_; 
lean_dec(v_h__1_270_);
v_one_276_ = lean_unsigned_to_nat(1u);
v_n_277_ = lean_nat_sub(v_x_269_, v_one_276_);
v___x_278_ = lean_apply_1(v_h__2_271_, v_n_277_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___redArg___boxed(lean_object* v_x_279_, lean_object* v_h__1_280_, lean_object* v_h__2_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___redArg(v_x_279_, v_h__1_280_, v_h__2_281_);
lean_dec(v_x_279_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter(lean_object* v_motive_283_, lean_object* v_x_284_, lean_object* v_h__1_285_, lean_object* v_h__2_286_){
_start:
{
lean_object* v_zero_287_; uint8_t v_isZero_288_; 
v_zero_287_ = lean_unsigned_to_nat(0u);
v_isZero_288_ = lean_nat_dec_eq(v_x_284_, v_zero_287_);
if (v_isZero_288_ == 1)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_h__2_286_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_apply_1(v_h__1_285_, v___x_289_);
return v___x_290_;
}
else
{
lean_object* v_one_291_; lean_object* v_n_292_; lean_object* v___x_293_; 
lean_dec(v_h__1_285_);
v_one_291_ = lean_unsigned_to_nat(1u);
v_n_292_ = lean_nat_sub(v_x_284_, v_one_291_);
v___x_293_ = lean_apply_1(v_h__2_286_, v_n_292_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter___boxed(lean_object* v_motive_294_, lean_object* v_x_295_, lean_object* v_h__1_296_, lean_object* v_h__2_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = lp_choreo___private_Choreo_Poly_0__Choreo_Poly_zeros_match__1_splitter(v_motive_294_, v_x_295_, v_h__1_296_, v_h__2_297_);
lean_dec(v_x_295_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_mul_match__1_splitter___redArg(lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_h__1_301_, lean_object* v_h__2_302_, lean_object* v_h__3_303_){
_start:
{
if (lean_obj_tag(v_x_299_) == 0)
{
lean_object* v___x_304_; 
lean_dec(v_h__3_303_);
lean_dec(v_h__2_302_);
v___x_304_ = lean_apply_1(v_h__1_301_, v_x_300_);
return v___x_304_;
}
else
{
lean_object* v_tail_305_; 
lean_dec(v_h__1_301_);
v_tail_305_ = lean_ctor_get(v_x_299_, 1);
if (lean_obj_tag(v_tail_305_) == 0)
{
lean_object* v_head_306_; lean_object* v___x_307_; 
lean_dec(v_h__3_303_);
v_head_306_ = lean_ctor_get(v_x_299_, 0);
lean_inc(v_head_306_);
lean_dec_ref_known(v_x_299_, 2);
v___x_307_ = lean_apply_2(v_h__2_302_, v_head_306_, v_x_300_);
return v___x_307_;
}
else
{
lean_object* v_head_308_; lean_object* v_head_309_; lean_object* v_tail_310_; lean_object* v___x_311_; 
lean_inc_ref(v_tail_305_);
lean_dec(v_h__2_302_);
v_head_308_ = lean_ctor_get(v_x_299_, 0);
lean_inc(v_head_308_);
lean_dec_ref_known(v_x_299_, 2);
v_head_309_ = lean_ctor_get(v_tail_305_, 0);
lean_inc(v_head_309_);
v_tail_310_ = lean_ctor_get(v_tail_305_, 1);
lean_inc(v_tail_310_);
lean_dec_ref_known(v_tail_305_, 2);
v___x_311_ = lean_apply_4(v_h__3_303_, v_head_308_, v_head_309_, v_tail_310_, v_x_300_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_mul_match__1_splitter(lean_object* v_motive_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_h__1_315_, lean_object* v_h__2_316_, lean_object* v_h__3_317_){
_start:
{
if (lean_obj_tag(v_x_313_) == 0)
{
lean_object* v___x_318_; 
lean_dec(v_h__3_317_);
lean_dec(v_h__2_316_);
v___x_318_ = lean_apply_1(v_h__1_315_, v_x_314_);
return v___x_318_;
}
else
{
lean_object* v_tail_319_; 
lean_dec(v_h__1_315_);
v_tail_319_ = lean_ctor_get(v_x_313_, 1);
if (lean_obj_tag(v_tail_319_) == 0)
{
lean_object* v_head_320_; lean_object* v___x_321_; 
lean_dec(v_h__3_317_);
v_head_320_ = lean_ctor_get(v_x_313_, 0);
lean_inc(v_head_320_);
lean_dec_ref_known(v_x_313_, 2);
v___x_321_ = lean_apply_2(v_h__2_316_, v_head_320_, v_x_314_);
return v___x_321_;
}
else
{
lean_object* v_head_322_; lean_object* v_head_323_; lean_object* v_tail_324_; lean_object* v___x_325_; 
lean_inc_ref(v_tail_319_);
lean_dec(v_h__2_316_);
v_head_322_ = lean_ctor_get(v_x_313_, 0);
lean_inc(v_head_322_);
lean_dec_ref_known(v_x_313_, 2);
v_head_323_ = lean_ctor_get(v_tail_319_, 0);
lean_inc(v_head_323_);
v_tail_324_ = lean_ctor_get(v_tail_319_, 1);
lean_inc(v_tail_324_);
lean_dec_ref_known(v_tail_319_, 2);
v___x_325_ = lean_apply_4(v_h__3_317_, v_head_322_, v_head_323_, v_tail_324_, v_x_314_);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_subst_match__1_splitter___redArg(lean_object* v_x_326_, lean_object* v_h__1_327_, lean_object* v_h__2_328_, lean_object* v_h__3_329_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec(v_h__3_329_);
lean_dec(v_h__2_328_);
v___x_330_ = lean_box(0);
v___x_331_ = lean_apply_1(v_h__1_327_, v___x_330_);
return v___x_331_;
}
else
{
lean_object* v_tail_332_; 
lean_dec(v_h__1_327_);
v_tail_332_ = lean_ctor_get(v_x_326_, 1);
if (lean_obj_tag(v_tail_332_) == 0)
{
lean_object* v_head_333_; lean_object* v___x_334_; 
lean_dec(v_h__3_329_);
v_head_333_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_head_333_);
lean_dec_ref_known(v_x_326_, 2);
v___x_334_ = lean_apply_1(v_h__2_328_, v_head_333_);
return v___x_334_;
}
else
{
lean_object* v_head_335_; lean_object* v_head_336_; lean_object* v_tail_337_; lean_object* v___x_338_; 
lean_inc_ref(v_tail_332_);
lean_dec(v_h__2_328_);
v_head_335_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_head_335_);
lean_dec_ref_known(v_x_326_, 2);
v_head_336_ = lean_ctor_get(v_tail_332_, 0);
lean_inc(v_head_336_);
v_tail_337_ = lean_ctor_get(v_tail_332_, 1);
lean_inc(v_tail_337_);
lean_dec_ref_known(v_tail_332_, 2);
v___x_338_ = lean_apply_3(v_h__3_329_, v_head_335_, v_head_336_, v_tail_337_);
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_subst_match__1_splitter(lean_object* v_motive_339_, lean_object* v_x_340_, lean_object* v_h__1_341_, lean_object* v_h__2_342_, lean_object* v_h__3_343_){
_start:
{
if (lean_obj_tag(v_x_340_) == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec(v_h__3_343_);
lean_dec(v_h__2_342_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_apply_1(v_h__1_341_, v___x_344_);
return v___x_345_;
}
else
{
lean_object* v_tail_346_; 
lean_dec(v_h__1_341_);
v_tail_346_ = lean_ctor_get(v_x_340_, 1);
if (lean_obj_tag(v_tail_346_) == 0)
{
lean_object* v_head_347_; lean_object* v___x_348_; 
lean_dec(v_h__3_343_);
v_head_347_ = lean_ctor_get(v_x_340_, 0);
lean_inc(v_head_347_);
lean_dec_ref_known(v_x_340_, 2);
v___x_348_ = lean_apply_1(v_h__2_342_, v_head_347_);
return v___x_348_;
}
else
{
lean_object* v_head_349_; lean_object* v_head_350_; lean_object* v_tail_351_; lean_object* v___x_352_; 
lean_inc_ref(v_tail_346_);
lean_dec(v_h__2_342_);
v_head_349_ = lean_ctor_get(v_x_340_, 0);
lean_inc(v_head_349_);
lean_dec_ref_known(v_x_340_, 2);
v_head_350_ = lean_ctor_get(v_tail_346_, 0);
lean_inc(v_head_350_);
v_tail_351_ = lean_ctor_get(v_tail_346_, 1);
lean_inc(v_tail_351_);
lean_dec_ref_known(v_tail_346_, 2);
v___x_352_ = lean_apply_3(v_h__3_343_, v_head_349_, v_head_350_, v_tail_351_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___redArg(lean_object* v_x_353_, lean_object* v_x_354_, lean_object* v_h__1_355_, lean_object* v_h__2_356_){
_start:
{
lean_object* v_zero_357_; uint8_t v_isZero_358_; 
v_zero_357_ = lean_unsigned_to_nat(0u);
v_isZero_358_ = lean_nat_dec_eq(v_x_353_, v_zero_357_);
if (v_isZero_358_ == 1)
{
lean_object* v___x_359_; 
lean_dec(v_h__2_356_);
v___x_359_ = lean_apply_1(v_h__1_355_, v_x_354_);
return v___x_359_;
}
else
{
lean_object* v_one_360_; lean_object* v_n_361_; lean_object* v___x_362_; 
lean_dec(v_h__1_355_);
v_one_360_ = lean_unsigned_to_nat(1u);
v_n_361_ = lean_nat_sub(v_x_353_, v_one_360_);
v___x_362_ = lean_apply_2(v_h__2_356_, v_n_361_, v_x_354_);
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___redArg___boxed(lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_h__1_365_, lean_object* v_h__2_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___redArg(v_x_363_, v_x_364_, v_h__1_365_, v_h__2_366_);
lean_dec(v_x_363_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter(lean_object* v_motive_368_, lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_h__1_371_, lean_object* v_h__2_372_){
_start:
{
lean_object* v_zero_373_; uint8_t v_isZero_374_; 
v_zero_373_ = lean_unsigned_to_nat(0u);
v_isZero_374_ = lean_nat_dec_eq(v_x_369_, v_zero_373_);
if (v_isZero_374_ == 1)
{
lean_object* v___x_375_; 
lean_dec(v_h__2_372_);
v___x_375_ = lean_apply_1(v_h__1_371_, v_x_370_);
return v___x_375_;
}
else
{
lean_object* v_one_376_; lean_object* v_n_377_; lean_object* v___x_378_; 
lean_dec(v_h__1_371_);
v_one_376_ = lean_unsigned_to_nat(1u);
v_n_377_ = lean_nat_sub(v_x_369_, v_one_376_);
v___x_378_ = lean_apply_2(v_h__2_372_, v_n_377_, v_x_370_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter___boxed(lean_object* v_motive_379_, lean_object* v_x_380_, lean_object* v_x_381_, lean_object* v_h__1_382_, lean_object* v_h__2_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = lp_choreo___private_Choreo_Poly_0__Choreo_Poly_bern_match__1_splitter(v_motive_379_, v_x_380_, v_x_381_, v_h__1_382_, v_h__2_383_);
lean_dec(v_x_380_);
return v_res_384_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Poly(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
