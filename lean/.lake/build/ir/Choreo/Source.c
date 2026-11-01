// Lean compiler output
// Module: Choreo.Source
// Imports: public import Init public meta import Init public import Choreo.Compose
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_toDigits(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_intL___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_intL___closed__0;
static const lean_string_object lp_choreo_Choreo_intL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_choreo_Choreo_intL___closed__1 = (const lean_object*)&lp_choreo_Choreo_intL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_intL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_choreo_Choreo_intL___closed__2 = (const lean_object*)&lp_choreo_Choreo_intL___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_intL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_intL___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_listL___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_choreo_Choreo_listL___redArg___closed__0 = (const lean_object*)&lp_choreo_Choreo_listL___redArg___closed__0_value;
static const lean_string_object lp_choreo_Choreo_listL___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_choreo_Choreo_listL___redArg___closed__1 = (const lean_object*)&lp_choreo_Choreo_listL___redArg___closed__1_value;
static const lean_string_object lp_choreo_Choreo_listL___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_choreo_Choreo_listL___redArg___closed__2 = (const lean_object*)&lp_choreo_Choreo_listL___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_listL___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_listL(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_polyL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_intL___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_polyL___closed__0 = (const lean_object*)&lp_choreo_Choreo_polyL___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_polyL(lean_object*);
static const lean_string_object lp_choreo_Choreo_boolL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_choreo_Choreo_boolL___closed__0 = (const lean_object*)&lp_choreo_Choreo_boolL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_boolL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_choreo_Choreo_boolL___closed__1 = (const lean_object*)&lp_choreo_Choreo_boolL___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_boolL(uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_boolL___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_rectL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* lp_choreo_Choreo_rectL___closed__0 = (const lean_object*)&lp_choreo_Choreo_rectL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_rectL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* lp_choreo_Choreo_rectL___closed__1 = (const lean_object*)&lp_choreo_Choreo_rectL___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rectL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rectL___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_pathL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_slotL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_slotL___boxed(lean_object*);
static const lean_closure_object lp_choreo_Choreo_natsL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_natsL___closed__0 = (const lean_object*)&lp_choreo_Choreo_natsL___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_natsL(lean_object*);
static const lean_string_object lp_choreo_Choreo_certL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(.sep "};
static const lean_object* lp_choreo_Choreo_certL___closed__0 = (const lean_object*)&lp_choreo_Choreo_certL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_certL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_choreo_Choreo_certL___closed__1 = (const lean_object*)&lp_choreo_Choreo_certL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_certL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(.bern "};
static const lean_object* lp_choreo_Choreo_certL___closed__2 = (const lean_object*)&lp_choreo_Choreo_certL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_certL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(.offset "};
static const lean_object* lp_choreo_Choreo_certL___closed__3 = (const lean_object*)&lp_choreo_Choreo_certL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_certL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "(.fixed "};
static const lean_object* lp_choreo_Choreo_certL___closed__4 = (const lean_object*)&lp_choreo_Choreo_certL___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_certL(lean_object*);
static const lean_string_object lp_choreo_Choreo_formationL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(.grid "};
static const lean_object* lp_choreo_Choreo_formationL___closed__0 = (const lean_object*)&lp_choreo_Choreo_formationL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_formationL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(.line "};
static const lean_object* lp_choreo_Choreo_formationL___closed__1 = (const lean_object*)&lp_choreo_Choreo_formationL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_formationL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(.circle "};
static const lean_object* lp_choreo_Choreo_formationL___closed__2 = (const lean_object*)&lp_choreo_Choreo_formationL___closed__2_value;
static const lean_closure_object lp_choreo_Choreo_formationL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_slotL___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_formationL___closed__3 = (const lean_object*)&lp_choreo_Choreo_formationL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_formationL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(.free "};
static const lean_object* lp_choreo_Choreo_formationL___closed__4 = (const lean_object*)&lp_choreo_Choreo_formationL___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_formationL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_linkL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_askL___lam__0(lean_object*);
static const lean_string_object lp_choreo_Choreo_askL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(.startsIn "};
static const lean_object* lp_choreo_Choreo_askL___closed__0 = (const lean_object*)&lp_choreo_Choreo_askL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(.endsIn "};
static const lean_object* lp_choreo_Choreo_askL___closed__1 = (const lean_object*)&lp_choreo_Choreo_askL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(.staysIn "};
static const lean_object* lp_choreo_Choreo_askL___closed__2 = (const lean_object*)&lp_choreo_Choreo_askL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "(.forms "};
static const lean_object* lp_choreo_Choreo_askL___closed__3 = (const lean_object*)&lp_choreo_Choreo_askL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "(.flips "};
static const lean_object* lp_choreo_Choreo_askL___closed__4 = (const lean_object*)&lp_choreo_Choreo_askL___closed__4_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "(.keepsShape "};
static const lean_object* lp_choreo_Choreo_askL___closed__5 = (const lean_object*)&lp_choreo_Choreo_askL___closed__5_value;
static const lean_closure_object lp_choreo_Choreo_askL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_linkL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_askL___closed__6 = (const lean_object*)&lp_choreo_Choreo_askL___closed__6_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "(.staysOnCircle "};
static const lean_object* lp_choreo_Choreo_askL___closed__7 = (const lean_object*)&lp_choreo_Choreo_askL___closed__7_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "(.keepsLine "};
static const lean_object* lp_choreo_Choreo_askL___closed__8 = (const lean_object*)&lp_choreo_Choreo_askL___closed__8_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "(.endsInLine "};
static const lean_object* lp_choreo_Choreo_askL___closed__9 = (const lean_object*)&lp_choreo_Choreo_askL___closed__9_value;
static const lean_closure_object lp_choreo_Choreo_askL___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_askL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_askL___closed__10 = (const lean_object*)&lp_choreo_Choreo_askL___closed__10_value;
static const lean_string_object lp_choreo_Choreo_askL___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "(.endsMirrored "};
static const lean_object* lp_choreo_Choreo_askL___closed__11 = (const lean_object*)&lp_choreo_Choreo_askL___closed__11_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_askL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL___lam__1(lean_object*);
static const lean_closure_object lp_choreo_Choreo_phaseL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_phaseL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_phaseL___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__0_value;
static const lean_closure_object lp_choreo_Choreo_phaseL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_phaseL___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_phaseL___closed__1 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "{ t0 := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__2 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", t1 := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__3 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", bounds := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__4 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__4_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", paths := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__5 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__5_value;
static const lean_closure_object lp_choreo_Choreo_phaseL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_pathL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_phaseL___closed__6 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__6_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", certs := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__7 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__7_value;
static const lean_closure_object lp_choreo_Choreo_phaseL___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_certL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_phaseL___closed__8 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__8_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", rigid := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__9 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__9_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", orbits := "};
static const lean_object* lp_choreo_Choreo_phaseL___closed__10 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__10_value;
static const lean_string_object lp_choreo_Choreo_phaseL___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ", target := none }"};
static const lean_object* lp_choreo_Choreo_phaseL___closed__11 = (const lean_object*)&lp_choreo_Choreo_phaseL___closed__11_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL(lean_object*);
static const lean_string_object lp_choreo_Choreo_configL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "{ n := "};
static const lean_object* lp_choreo_Choreo_configL___closed__0 = (const lean_object*)&lp_choreo_Choreo_configL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", dmin := "};
static const lean_object* lp_choreo_Choreo_configL___closed__1 = (const lean_object*)&lp_choreo_Choreo_configL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", vmax := "};
static const lean_object* lp_choreo_Choreo_configL___closed__2 = (const lean_object*)&lp_choreo_Choreo_configL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", stage := "};
static const lean_object* lp_choreo_Choreo_configL___closed__3 = (const lean_object*)&lp_choreo_Choreo_configL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ", ticksPerBeat := "};
static const lean_object* lp_choreo_Choreo_configL___closed__4 = (const lean_object*)&lp_choreo_Choreo_configL___closed__4_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", bpmNum := "};
static const lean_object* lp_choreo_Choreo_configL___closed__5 = (const lean_object*)&lp_choreo_Choreo_configL___closed__5_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", bpmDen := "};
static const lean_object* lp_choreo_Choreo_configL___closed__6 = (const lean_object*)&lp_choreo_Choreo_configL___closed__6_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", total := "};
static const lean_object* lp_choreo_Choreo_configL___closed__7 = (const lean_object*)&lp_choreo_Choreo_configL___closed__7_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", seconds := "};
static const lean_object* lp_choreo_Choreo_configL___closed__8 = (const lean_object*)&lp_choreo_Choreo_configL___closed__8_value;
static const lean_string_object lp_choreo_Choreo_configL___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_choreo_Choreo_configL___closed__9 = (const lean_object*)&lp_choreo_Choreo_configL___closed__9_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_configL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_fingerprint_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_Routine_fingerprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_Choreo_Routine_fingerprint___closed__0 = (const lean_object*)&lp_choreo_Choreo_Routine_fingerprint___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_fingerprint(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseKey(lean_object*);
static lean_object* _init_lp_choreo_Choreo_intL___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_intL(lean_object* v_i_5_){
_start:
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_obj_once(&lp_choreo_Choreo_intL___closed__0, &lp_choreo_Choreo_intL___closed__0_once, _init_lp_choreo_Choreo_intL___closed__0);
v___x_7_ = lean_int_dec_lt(v_i_5_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; 
v___x_8_ = l_Int_repr(v_i_5_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_9_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__1));
v___x_10_ = l_Int_repr(v_i_5_);
v___x_11_ = lean_string_append(v___x_9_, v___x_10_);
lean_dec_ref(v___x_10_);
v___x_12_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_13_ = lean_string_append(v___x_11_, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_intL___boxed(lean_object* v_i_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lp_choreo_Choreo_intL(v_i_14_);
lean_dec(v_i_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0___redArg(lean_object* v_f_16_, lean_object* v_a_17_, lean_object* v_a_18_){
_start:
{
if (lean_obj_tag(v_a_17_) == 0)
{
lean_object* v___x_19_; 
lean_dec_ref(v_f_16_);
v___x_19_ = l_List_reverse___redArg(v_a_18_);
return v___x_19_;
}
else
{
lean_object* v_head_20_; lean_object* v_tail_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_30_; 
v_head_20_ = lean_ctor_get(v_a_17_, 0);
v_tail_21_ = lean_ctor_get(v_a_17_, 1);
v_isSharedCheck_30_ = !lean_is_exclusive(v_a_17_);
if (v_isSharedCheck_30_ == 0)
{
v___x_23_ = v_a_17_;
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_tail_21_);
lean_inc(v_head_20_);
lean_dec(v_a_17_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; lean_object* v___x_27_; 
lean_inc_ref(v_f_16_);
v___x_25_ = lean_apply_1(v_f_16_, v_head_20_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v_a_18_);
lean_ctor_set(v___x_23_, 0, v___x_25_);
v___x_27_ = v___x_23_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_25_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v_a_18_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
v_a_17_ = v_tail_21_;
v_a_18_ = v___x_27_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_listL___redArg(lean_object* v_f_34_, lean_object* v_l_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_36_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__0));
v___x_37_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_38_ = lean_box(0);
v___x_39_ = lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0___redArg(v_f_34_, v_l_35_, v___x_38_);
v___x_40_ = l_String_intercalate(v___x_37_, v___x_39_);
v___x_41_ = lean_string_append(v___x_36_, v___x_40_);
lean_dec_ref(v___x_40_);
v___x_42_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__2));
v___x_43_ = lean_string_append(v___x_41_, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_listL(lean_object* v_00_u03b1_44_, lean_object* v_f_45_, lean_object* v_l_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_choreo_Choreo_listL___redArg(v_f_45_, v_l_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0(lean_object* v_00_u03b1_48_, lean_object* v_f_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lp_choreo_List_mapTR_loop___at___00Choreo_listL_spec__0___redArg(v_f_49_, v_a_50_, v_a_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_polyL(lean_object* v_p_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(lp_choreo_Choreo_polyL___closed__0));
v___x_56_ = lp_choreo_Choreo_listL___redArg(v___x_55_, v_p_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_boolL(uint8_t v_b_59_){
_start:
{
if (v_b_59_ == 0)
{
lean_object* v___x_60_; 
v___x_60_ = ((lean_object*)(lp_choreo_Choreo_boolL___closed__0));
return v___x_60_;
}
else
{
lean_object* v___x_61_; 
v___x_61_ = ((lean_object*)(lp_choreo_Choreo_boolL___closed__1));
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_boolL___boxed(lean_object* v_b_62_){
_start:
{
uint8_t v_b_boxed_63_; lean_object* v_res_64_; 
v_b_boxed_63_ = lean_unbox(v_b_62_);
v_res_64_ = lp_choreo_Choreo_boolL(v_b_boxed_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rectL(lean_object* v_r_67_){
_start:
{
lean_object* v_xmin_68_; lean_object* v_xmax_69_; lean_object* v_ymin_70_; lean_object* v_ymax_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_xmin_68_ = lean_ctor_get(v_r_67_, 0);
v_xmax_69_ = lean_ctor_get(v_r_67_, 1);
v_ymin_70_ = lean_ctor_get(v_r_67_, 2);
v_ymax_71_ = lean_ctor_get(v_r_67_, 3);
v___x_72_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_73_ = lp_choreo_Choreo_intL(v_xmin_68_);
v___x_74_ = lean_string_append(v___x_72_, v___x_73_);
lean_dec_ref(v___x_73_);
v___x_75_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_76_ = lean_string_append(v___x_74_, v___x_75_);
v___x_77_ = lp_choreo_Choreo_intL(v_xmax_69_);
v___x_78_ = lean_string_append(v___x_76_, v___x_77_);
lean_dec_ref(v___x_77_);
v___x_79_ = lean_string_append(v___x_78_, v___x_75_);
v___x_80_ = lp_choreo_Choreo_intL(v_ymin_70_);
v___x_81_ = lean_string_append(v___x_79_, v___x_80_);
lean_dec_ref(v___x_80_);
v___x_82_ = lean_string_append(v___x_81_, v___x_75_);
v___x_83_ = lp_choreo_Choreo_intL(v_ymax_71_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
v___x_85_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_86_ = lean_string_append(v___x_84_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rectL___boxed(lean_object* v_r_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_choreo_Choreo_rectL(v_r_87_);
lean_dec_ref(v_r_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_pathL(lean_object* v_p_89_){
_start:
{
lean_object* v_X_90_; lean_object* v_Y_91_; lean_object* v_W_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_X_90_ = lean_ctor_get(v_p_89_, 0);
lean_inc(v_X_90_);
v_Y_91_ = lean_ctor_get(v_p_89_, 1);
lean_inc(v_Y_91_);
v_W_92_ = lean_ctor_get(v_p_89_, 2);
lean_inc(v_W_92_);
lean_dec_ref(v_p_89_);
v___x_93_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_94_ = lp_choreo_Choreo_polyL(v_X_90_);
v___x_95_ = lean_string_append(v___x_93_, v___x_94_);
lean_dec_ref(v___x_94_);
v___x_96_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_97_ = lean_string_append(v___x_95_, v___x_96_);
v___x_98_ = lp_choreo_Choreo_polyL(v_Y_91_);
v___x_99_ = lean_string_append(v___x_97_, v___x_98_);
lean_dec_ref(v___x_98_);
v___x_100_ = lean_string_append(v___x_99_, v___x_96_);
v___x_101_ = lp_choreo_Choreo_polyL(v_W_92_);
v___x_102_ = lean_string_append(v___x_100_, v___x_101_);
lean_dec_ref(v___x_101_);
v___x_103_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_104_ = lean_string_append(v___x_102_, v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slotL(lean_object* v_s_105_){
_start:
{
lean_object* v_x_106_; lean_object* v_y_107_; lean_object* v_w_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_x_106_ = lean_ctor_get(v_s_105_, 0);
v_y_107_ = lean_ctor_get(v_s_105_, 1);
v_w_108_ = lean_ctor_get(v_s_105_, 2);
v___x_109_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_110_ = lp_choreo_Choreo_intL(v_x_106_);
v___x_111_ = lean_string_append(v___x_109_, v___x_110_);
lean_dec_ref(v___x_110_);
v___x_112_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_113_ = lean_string_append(v___x_111_, v___x_112_);
v___x_114_ = lp_choreo_Choreo_intL(v_y_107_);
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
lean_dec_ref(v___x_114_);
v___x_116_ = lean_string_append(v___x_115_, v___x_112_);
v___x_117_ = lp_choreo_Choreo_intL(v_w_108_);
v___x_118_ = lean_string_append(v___x_116_, v___x_117_);
lean_dec_ref(v___x_117_);
v___x_119_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slotL___boxed(lean_object* v_s_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = lp_choreo_Choreo_slotL(v_s_121_);
lean_dec_ref(v_s_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_natsL(lean_object* v_l_124_){
_start:
{
lean_object* v___f_125_; lean_object* v___x_126_; 
v___f_125_ = ((lean_object*)(lp_choreo_Choreo_natsL___closed__0));
v___x_126_ = lp_choreo_Choreo_listL___redArg(v___f_125_, v_l_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certL(lean_object* v_x_132_){
_start:
{
switch(lean_obj_tag(v_x_132_))
{
case 0:
{
uint8_t v_xAxis_133_; uint8_t v_positive_134_; lean_object* v_depth_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_xAxis_133_ = lean_ctor_get_uint8(v_x_132_, sizeof(void*)*1);
v_positive_134_ = lean_ctor_get_uint8(v_x_132_, sizeof(void*)*1 + 1);
v_depth_135_ = lean_ctor_get(v_x_132_, 0);
lean_inc(v_depth_135_);
lean_dec_ref_known(v_x_132_, 1);
v___x_136_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__0));
v___x_137_ = lp_choreo_Choreo_boolL(v_xAxis_133_);
v___x_138_ = lean_string_append(v___x_136_, v___x_137_);
lean_dec_ref(v___x_137_);
v___x_139_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_140_ = lean_string_append(v___x_138_, v___x_139_);
v___x_141_ = lp_choreo_Choreo_boolL(v_positive_134_);
v___x_142_ = lean_string_append(v___x_140_, v___x_141_);
lean_dec_ref(v___x_141_);
v___x_143_ = lean_string_append(v___x_142_, v___x_139_);
v___x_144_ = l_Nat_reprFast(v_depth_135_);
v___x_145_ = lean_string_append(v___x_143_, v___x_144_);
lean_dec_ref(v___x_144_);
v___x_146_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_147_ = lean_string_append(v___x_145_, v___x_146_);
return v___x_147_;
}
case 1:
{
lean_object* v_depth_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_depth_148_ = lean_ctor_get(v_x_132_, 0);
lean_inc(v_depth_148_);
lean_dec_ref_known(v_x_132_, 1);
v___x_149_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__2));
v___x_150_ = l_Nat_reprFast(v_depth_148_);
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
lean_dec_ref(v___x_150_);
v___x_152_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
return v___x_153_;
}
case 2:
{
lean_object* v_cx_154_; lean_object* v_cy_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_cx_154_ = lean_ctor_get(v_x_132_, 0);
lean_inc(v_cx_154_);
v_cy_155_ = lean_ctor_get(v_x_132_, 1);
lean_inc(v_cy_155_);
lean_dec_ref_known(v_x_132_, 2);
v___x_156_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__3));
v___x_157_ = lp_choreo_Choreo_intL(v_cx_154_);
lean_dec(v_cx_154_);
v___x_158_ = lean_string_append(v___x_156_, v___x_157_);
lean_dec_ref(v___x_157_);
v___x_159_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_160_ = lean_string_append(v___x_158_, v___x_159_);
v___x_161_ = lp_choreo_Choreo_intL(v_cy_155_);
lean_dec(v_cy_155_);
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
lean_dec_ref(v___x_161_);
v___x_163_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_164_ = lean_string_append(v___x_162_, v___x_163_);
return v___x_164_;
}
default: 
{
lean_object* v_num_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_num_165_ = lean_ctor_get(v_x_132_, 0);
lean_inc(v_num_165_);
lean_dec_ref_known(v_x_132_, 1);
v___x_166_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__4));
v___x_167_ = lp_choreo_Choreo_intL(v_num_165_);
lean_dec(v_num_165_);
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
lean_dec_ref(v___x_167_);
v___x_169_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_formationL(lean_object* v_x_176_){
_start:
{
switch(lean_obj_tag(v_x_176_))
{
case 0:
{
lean_object* v_x_u2080_177_; lean_object* v_y_u2080_178_; lean_object* v_dx_179_; lean_object* v_dy_180_; lean_object* v_rows_181_; lean_object* v_cols_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_x_u2080_177_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_x_u2080_177_);
v_y_u2080_178_ = lean_ctor_get(v_x_176_, 1);
lean_inc(v_y_u2080_178_);
v_dx_179_ = lean_ctor_get(v_x_176_, 2);
lean_inc(v_dx_179_);
v_dy_180_ = lean_ctor_get(v_x_176_, 3);
lean_inc(v_dy_180_);
v_rows_181_ = lean_ctor_get(v_x_176_, 4);
lean_inc(v_rows_181_);
v_cols_182_ = lean_ctor_get(v_x_176_, 5);
lean_inc(v_cols_182_);
lean_dec_ref_known(v_x_176_, 6);
v___x_183_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__0));
v___x_184_ = lp_choreo_Choreo_intL(v_x_u2080_177_);
lean_dec(v_x_u2080_177_);
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
lean_dec_ref(v___x_184_);
v___x_186_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_187_ = lean_string_append(v___x_185_, v___x_186_);
v___x_188_ = lp_choreo_Choreo_intL(v_y_u2080_178_);
lean_dec(v_y_u2080_178_);
v___x_189_ = lean_string_append(v___x_187_, v___x_188_);
lean_dec_ref(v___x_188_);
v___x_190_ = lean_string_append(v___x_189_, v___x_186_);
v___x_191_ = lp_choreo_Choreo_intL(v_dx_179_);
lean_dec(v_dx_179_);
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_string_append(v___x_192_, v___x_186_);
v___x_194_ = lp_choreo_Choreo_intL(v_dy_180_);
lean_dec(v_dy_180_);
v___x_195_ = lean_string_append(v___x_193_, v___x_194_);
lean_dec_ref(v___x_194_);
v___x_196_ = lean_string_append(v___x_195_, v___x_186_);
v___x_197_ = l_Nat_reprFast(v_rows_181_);
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = lean_string_append(v___x_198_, v___x_186_);
v___x_200_ = l_Nat_reprFast(v_cols_182_);
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_202_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_203_ = lean_string_append(v___x_201_, v___x_202_);
return v___x_203_;
}
case 1:
{
lean_object* v_x_u2080_204_; lean_object* v_y_u2080_205_; lean_object* v_dx_206_; lean_object* v_dy_207_; lean_object* v_n_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_x_u2080_204_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_x_u2080_204_);
v_y_u2080_205_ = lean_ctor_get(v_x_176_, 1);
lean_inc(v_y_u2080_205_);
v_dx_206_ = lean_ctor_get(v_x_176_, 2);
lean_inc(v_dx_206_);
v_dy_207_ = lean_ctor_get(v_x_176_, 3);
lean_inc(v_dy_207_);
v_n_208_ = lean_ctor_get(v_x_176_, 4);
lean_inc(v_n_208_);
lean_dec_ref_known(v_x_176_, 5);
v___x_209_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__1));
v___x_210_ = lp_choreo_Choreo_intL(v_x_u2080_204_);
lean_dec(v_x_u2080_204_);
v___x_211_ = lean_string_append(v___x_209_, v___x_210_);
lean_dec_ref(v___x_210_);
v___x_212_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_213_ = lean_string_append(v___x_211_, v___x_212_);
v___x_214_ = lp_choreo_Choreo_intL(v_y_u2080_205_);
lean_dec(v_y_u2080_205_);
v___x_215_ = lean_string_append(v___x_213_, v___x_214_);
lean_dec_ref(v___x_214_);
v___x_216_ = lean_string_append(v___x_215_, v___x_212_);
v___x_217_ = lp_choreo_Choreo_intL(v_dx_206_);
lean_dec(v_dx_206_);
v___x_218_ = lean_string_append(v___x_216_, v___x_217_);
lean_dec_ref(v___x_217_);
v___x_219_ = lean_string_append(v___x_218_, v___x_212_);
v___x_220_ = lp_choreo_Choreo_intL(v_dy_207_);
lean_dec(v_dy_207_);
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
lean_dec_ref(v___x_220_);
v___x_222_ = lean_string_append(v___x_221_, v___x_212_);
v___x_223_ = l_Nat_reprFast(v_n_208_);
v___x_224_ = lean_string_append(v___x_222_, v___x_223_);
lean_dec_ref(v___x_223_);
v___x_225_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_226_ = lean_string_append(v___x_224_, v___x_225_);
return v___x_226_;
}
case 2:
{
lean_object* v_cx_227_; lean_object* v_cy_228_; lean_object* v_r_229_; lean_object* v_pts_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_cx_227_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_cx_227_);
v_cy_228_ = lean_ctor_get(v_x_176_, 1);
lean_inc(v_cy_228_);
v_r_229_ = lean_ctor_get(v_x_176_, 2);
lean_inc(v_r_229_);
v_pts_230_ = lean_ctor_get(v_x_176_, 3);
lean_inc(v_pts_230_);
lean_dec_ref_known(v_x_176_, 4);
v___x_231_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__2));
v___x_232_ = lp_choreo_Choreo_intL(v_cx_227_);
lean_dec(v_cx_227_);
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
lean_dec_ref(v___x_232_);
v___x_234_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
v___x_236_ = lp_choreo_Choreo_intL(v_cy_228_);
lean_dec(v_cy_228_);
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
lean_dec_ref(v___x_236_);
v___x_238_ = lean_string_append(v___x_237_, v___x_234_);
v___x_239_ = lp_choreo_Choreo_intL(v_r_229_);
lean_dec(v_r_229_);
v___x_240_ = lean_string_append(v___x_238_, v___x_239_);
lean_dec_ref(v___x_239_);
v___x_241_ = lean_string_append(v___x_240_, v___x_234_);
v___x_242_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__3));
v___x_243_ = lp_choreo_Choreo_listL___redArg(v___x_242_, v_pts_230_);
v___x_244_ = lean_string_append(v___x_241_, v___x_243_);
lean_dec_ref(v___x_243_);
v___x_245_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_246_ = lean_string_append(v___x_244_, v___x_245_);
return v___x_246_;
}
default: 
{
lean_object* v_pts_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_pts_247_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_pts_247_);
lean_dec_ref_known(v_x_176_, 1);
v___x_248_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__4));
v___x_249_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__3));
v___x_250_ = lp_choreo_Choreo_listL___redArg(v___x_249_, v_pts_247_);
v___x_251_ = lean_string_append(v___x_248_, v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_linkL(lean_object* v_l_254_){
_start:
{
lean_object* v_leader_255_; lean_object* v_member_256_; lean_object* v_dx_257_; lean_object* v_dy_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_leader_255_ = lean_ctor_get(v_l_254_, 0);
lean_inc(v_leader_255_);
v_member_256_ = lean_ctor_get(v_l_254_, 1);
lean_inc(v_member_256_);
v_dx_257_ = lean_ctor_get(v_l_254_, 2);
lean_inc(v_dx_257_);
v_dy_258_ = lean_ctor_get(v_l_254_, 3);
lean_inc(v_dy_258_);
lean_dec_ref(v_l_254_);
v___x_259_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_260_ = l_Nat_reprFast(v_leader_255_);
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
lean_dec_ref(v___x_260_);
v___x_262_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = l_Nat_reprFast(v_member_256_);
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
lean_dec_ref(v___x_264_);
v___x_266_ = lean_string_append(v___x_265_, v___x_262_);
v___x_267_ = lp_choreo_Choreo_intL(v_dx_257_);
lean_dec(v_dx_257_);
v___x_268_ = lean_string_append(v___x_266_, v___x_267_);
lean_dec_ref(v___x_267_);
v___x_269_ = lean_string_append(v___x_268_, v___x_262_);
v___x_270_ = lp_choreo_Choreo_intL(v_dy_258_);
lean_dec(v_dy_258_);
v___x_271_ = lean_string_append(v___x_269_, v___x_270_);
lean_dec_ref(v___x_270_);
v___x_272_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_273_ = lean_string_append(v___x_271_, v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_askL___lam__0(lean_object* v_p_274_){
_start:
{
lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_fst_275_ = lean_ctor_get(v_p_274_, 0);
lean_inc(v_fst_275_);
v_snd_276_ = lean_ctor_get(v_p_274_, 1);
lean_inc(v_snd_276_);
lean_dec_ref(v_p_274_);
v___x_277_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__1));
v___x_278_ = l_Nat_reprFast(v_fst_275_);
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
lean_dec_ref(v___x_278_);
v___x_280_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
v___x_282_ = l_Nat_reprFast(v_snd_276_);
v___x_283_ = lean_string_append(v___x_281_, v___x_282_);
lean_dec_ref(v___x_282_);
v___x_284_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_285_ = lean_string_append(v___x_283_, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_askL(lean_object* v_x_298_){
_start:
{
switch(lean_obj_tag(v_x_298_))
{
case 0:
{
lean_object* v_k_299_; lean_object* v_dancers_300_; lean_object* v_box_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_k_299_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_299_);
v_dancers_300_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_dancers_300_);
v_box_301_ = lean_ctor_get(v_x_298_, 2);
lean_inc_ref(v_box_301_);
lean_dec_ref_known(v_x_298_, 3);
v___x_302_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__0));
v___x_303_ = l_Nat_reprFast(v_k_299_);
v___x_304_ = lean_string_append(v___x_302_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
v___x_307_ = lp_choreo_Choreo_natsL(v_dancers_300_);
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
lean_dec_ref(v___x_307_);
v___x_309_ = lean_string_append(v___x_308_, v___x_305_);
v___x_310_ = lp_choreo_Choreo_rectL(v_box_301_);
lean_dec_ref(v_box_301_);
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
lean_dec_ref(v___x_310_);
v___x_312_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
return v___x_313_;
}
case 1:
{
lean_object* v_k_314_; lean_object* v_dancers_315_; lean_object* v_box_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_k_314_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_314_);
v_dancers_315_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_dancers_315_);
v_box_316_ = lean_ctor_get(v_x_298_, 2);
lean_inc_ref(v_box_316_);
lean_dec_ref_known(v_x_298_, 3);
v___x_317_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__1));
v___x_318_ = l_Nat_reprFast(v_k_314_);
v___x_319_ = lean_string_append(v___x_317_, v___x_318_);
lean_dec_ref(v___x_318_);
v___x_320_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_321_ = lean_string_append(v___x_319_, v___x_320_);
v___x_322_ = lp_choreo_Choreo_natsL(v_dancers_315_);
v___x_323_ = lean_string_append(v___x_321_, v___x_322_);
lean_dec_ref(v___x_322_);
v___x_324_ = lean_string_append(v___x_323_, v___x_320_);
v___x_325_ = lp_choreo_Choreo_rectL(v_box_316_);
lean_dec_ref(v_box_316_);
v___x_326_ = lean_string_append(v___x_324_, v___x_325_);
lean_dec_ref(v___x_325_);
v___x_327_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_328_ = lean_string_append(v___x_326_, v___x_327_);
return v___x_328_;
}
case 2:
{
lean_object* v_k_329_; lean_object* v_box_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_k_329_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_329_);
v_box_330_ = lean_ctor_get(v_x_298_, 1);
lean_inc_ref(v_box_330_);
lean_dec_ref_known(v_x_298_, 2);
v___x_331_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__2));
v___x_332_ = l_Nat_reprFast(v_k_329_);
v___x_333_ = lean_string_append(v___x_331_, v___x_332_);
lean_dec_ref(v___x_332_);
v___x_334_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
v___x_336_ = lp_choreo_Choreo_rectL(v_box_330_);
lean_dec_ref(v_box_330_);
v___x_337_ = lean_string_append(v___x_335_, v___x_336_);
lean_dec_ref(v___x_336_);
v___x_338_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_339_ = lean_string_append(v___x_337_, v___x_338_);
return v___x_339_;
}
case 3:
{
lean_object* v_k_340_; lean_object* v_f_341_; lean_object* v_assign_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_k_340_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_340_);
v_f_341_ = lean_ctor_get(v_x_298_, 1);
lean_inc_ref(v_f_341_);
v_assign_342_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_assign_342_);
lean_dec_ref_known(v_x_298_, 3);
v___x_343_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__3));
v___x_344_ = l_Nat_reprFast(v_k_340_);
v___x_345_ = lean_string_append(v___x_343_, v___x_344_);
lean_dec_ref(v___x_344_);
v___x_346_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_347_ = lean_string_append(v___x_345_, v___x_346_);
v___x_348_ = lp_choreo_Choreo_formationL(v_f_341_);
v___x_349_ = lean_string_append(v___x_347_, v___x_348_);
lean_dec_ref(v___x_348_);
v___x_350_ = lean_string_append(v___x_349_, v___x_346_);
v___x_351_ = lp_choreo_Choreo_natsL(v_assign_342_);
v___x_352_ = lean_string_append(v___x_350_, v___x_351_);
lean_dec_ref(v___x_351_);
v___x_353_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_354_ = lean_string_append(v___x_352_, v___x_353_);
return v___x_354_;
}
case 4:
{
lean_object* v_k_u2080_355_; lean_object* v_k_u2081_356_; lean_object* v_dancers_357_; lean_object* v_mirror_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_k_u2080_355_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_u2080_355_);
v_k_u2081_356_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_k_u2081_356_);
v_dancers_357_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_dancers_357_);
v_mirror_358_ = lean_ctor_get(v_x_298_, 3);
lean_inc(v_mirror_358_);
lean_dec_ref_known(v_x_298_, 4);
v___x_359_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__4));
v___x_360_ = l_Nat_reprFast(v_k_u2080_355_);
v___x_361_ = lean_string_append(v___x_359_, v___x_360_);
lean_dec_ref(v___x_360_);
v___x_362_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_363_ = lean_string_append(v___x_361_, v___x_362_);
v___x_364_ = l_Nat_reprFast(v_k_u2081_356_);
v___x_365_ = lean_string_append(v___x_363_, v___x_364_);
lean_dec_ref(v___x_364_);
v___x_366_ = lean_string_append(v___x_365_, v___x_362_);
v___x_367_ = lp_choreo_Choreo_natsL(v_dancers_357_);
v___x_368_ = lean_string_append(v___x_366_, v___x_367_);
lean_dec_ref(v___x_367_);
v___x_369_ = lean_string_append(v___x_368_, v___x_362_);
v___x_370_ = lp_choreo_Choreo_intL(v_mirror_358_);
lean_dec(v_mirror_358_);
v___x_371_ = lean_string_append(v___x_369_, v___x_370_);
lean_dec_ref(v___x_370_);
v___x_372_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_373_ = lean_string_append(v___x_371_, v___x_372_);
return v___x_373_;
}
case 5:
{
lean_object* v_k_374_; lean_object* v_links_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_k_374_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_374_);
v_links_375_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_links_375_);
lean_dec_ref_known(v_x_298_, 2);
v___x_376_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__5));
v___x_377_ = l_Nat_reprFast(v_k_374_);
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
lean_dec_ref(v___x_377_);
v___x_379_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_380_ = lean_string_append(v___x_378_, v___x_379_);
v___x_381_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__6));
v___x_382_ = lp_choreo_Choreo_listL___redArg(v___x_381_, v_links_375_);
v___x_383_ = lean_string_append(v___x_380_, v___x_382_);
lean_dec_ref(v___x_382_);
v___x_384_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
return v___x_385_;
}
case 6:
{
lean_object* v_k_386_; lean_object* v_dancers_387_; lean_object* v_cx_388_; lean_object* v_cy_389_; lean_object* v_r2_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_k_386_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_386_);
v_dancers_387_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_dancers_387_);
v_cx_388_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_cx_388_);
v_cy_389_ = lean_ctor_get(v_x_298_, 3);
lean_inc(v_cy_389_);
v_r2_390_ = lean_ctor_get(v_x_298_, 4);
lean_inc(v_r2_390_);
lean_dec_ref_known(v_x_298_, 5);
v___x_391_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__7));
v___x_392_ = l_Nat_reprFast(v_k_386_);
v___x_393_ = lean_string_append(v___x_391_, v___x_392_);
lean_dec_ref(v___x_392_);
v___x_394_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_395_ = lean_string_append(v___x_393_, v___x_394_);
v___x_396_ = lp_choreo_Choreo_natsL(v_dancers_387_);
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
lean_dec_ref(v___x_396_);
v___x_398_ = lean_string_append(v___x_397_, v___x_394_);
v___x_399_ = lp_choreo_Choreo_intL(v_cx_388_);
lean_dec(v_cx_388_);
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
lean_dec_ref(v___x_399_);
v___x_401_ = lean_string_append(v___x_400_, v___x_394_);
v___x_402_ = lp_choreo_Choreo_intL(v_cy_389_);
lean_dec(v_cy_389_);
v___x_403_ = lean_string_append(v___x_401_, v___x_402_);
lean_dec_ref(v___x_402_);
v___x_404_ = lean_string_append(v___x_403_, v___x_394_);
v___x_405_ = lp_choreo_Choreo_intL(v_r2_390_);
lean_dec(v_r2_390_);
v___x_406_ = lean_string_append(v___x_404_, v___x_405_);
lean_dec_ref(v___x_405_);
v___x_407_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_408_ = lean_string_append(v___x_406_, v___x_407_);
return v___x_408_;
}
case 7:
{
lean_object* v_k_409_; lean_object* v_dancers_410_; lean_object* v_dx_411_; lean_object* v_dy_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_k_409_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_409_);
v_dancers_410_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_dancers_410_);
v_dx_411_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_dx_411_);
v_dy_412_ = lean_ctor_get(v_x_298_, 3);
lean_inc(v_dy_412_);
lean_dec_ref_known(v_x_298_, 4);
v___x_413_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__8));
v___x_414_ = l_Nat_reprFast(v_k_409_);
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
lean_dec_ref(v___x_414_);
v___x_416_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
v___x_418_ = lp_choreo_Choreo_natsL(v_dancers_410_);
v___x_419_ = lean_string_append(v___x_417_, v___x_418_);
lean_dec_ref(v___x_418_);
v___x_420_ = lean_string_append(v___x_419_, v___x_416_);
v___x_421_ = lp_choreo_Choreo_intL(v_dx_411_);
lean_dec(v_dx_411_);
v___x_422_ = lean_string_append(v___x_420_, v___x_421_);
lean_dec_ref(v___x_421_);
v___x_423_ = lean_string_append(v___x_422_, v___x_416_);
v___x_424_ = lp_choreo_Choreo_intL(v_dy_412_);
lean_dec(v_dy_412_);
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
return v___x_427_;
}
case 8:
{
lean_object* v_k_428_; lean_object* v_dancers_429_; lean_object* v_dx_430_; lean_object* v_dy_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_k_428_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_428_);
v_dancers_429_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_dancers_429_);
v_dx_430_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_dx_430_);
v_dy_431_ = lean_ctor_get(v_x_298_, 3);
lean_inc(v_dy_431_);
lean_dec_ref_known(v_x_298_, 4);
v___x_432_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__9));
v___x_433_ = l_Nat_reprFast(v_k_428_);
v___x_434_ = lean_string_append(v___x_432_, v___x_433_);
lean_dec_ref(v___x_433_);
v___x_435_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_436_ = lean_string_append(v___x_434_, v___x_435_);
v___x_437_ = lp_choreo_Choreo_natsL(v_dancers_429_);
v___x_438_ = lean_string_append(v___x_436_, v___x_437_);
lean_dec_ref(v___x_437_);
v___x_439_ = lean_string_append(v___x_438_, v___x_435_);
v___x_440_ = lp_choreo_Choreo_intL(v_dx_430_);
lean_dec(v_dx_430_);
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = lean_string_append(v___x_441_, v___x_435_);
v___x_443_ = lp_choreo_Choreo_intL(v_dy_431_);
lean_dec(v_dy_431_);
v___x_444_ = lean_string_append(v___x_442_, v___x_443_);
lean_dec_ref(v___x_443_);
v___x_445_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_446_ = lean_string_append(v___x_444_, v___x_445_);
return v___x_446_;
}
default: 
{
lean_object* v_k_447_; lean_object* v_pairs_448_; lean_object* v_mirror_449_; lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_k_447_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_k_447_);
v_pairs_448_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_pairs_448_);
v_mirror_449_ = lean_ctor_get(v_x_298_, 2);
lean_inc(v_mirror_449_);
lean_dec_ref_known(v_x_298_, 3);
v___f_450_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__10));
v___x_451_ = ((lean_object*)(lp_choreo_Choreo_askL___closed__11));
v___x_452_ = l_Nat_reprFast(v_k_447_);
v___x_453_ = lean_string_append(v___x_451_, v___x_452_);
lean_dec_ref(v___x_452_);
v___x_454_ = ((lean_object*)(lp_choreo_Choreo_certL___closed__1));
v___x_455_ = lean_string_append(v___x_453_, v___x_454_);
v___x_456_ = lp_choreo_Choreo_listL___redArg(v___f_450_, v_pairs_448_);
v___x_457_ = lean_string_append(v___x_455_, v___x_456_);
lean_dec_ref(v___x_456_);
v___x_458_ = lean_string_append(v___x_457_, v___x_454_);
v___x_459_ = lp_choreo_Choreo_intL(v_mirror_449_);
lean_dec(v_mirror_449_);
v___x_460_ = lean_string_append(v___x_458_, v___x_459_);
lean_dec_ref(v___x_459_);
v___x_461_ = ((lean_object*)(lp_choreo_Choreo_intL___closed__2));
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
return v___x_462_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL___lam__0(lean_object* v_r_463_){
_start:
{
lean_object* v_i_464_; lean_object* v_j_465_; lean_object* v_num_466_; lean_object* v_den_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v_i_464_ = lean_ctor_get(v_r_463_, 0);
lean_inc(v_i_464_);
v_j_465_ = lean_ctor_get(v_r_463_, 1);
lean_inc(v_j_465_);
v_num_466_ = lean_ctor_get(v_r_463_, 2);
lean_inc(v_num_466_);
v_den_467_ = lean_ctor_get(v_r_463_, 3);
lean_inc(v_den_467_);
lean_dec_ref(v_r_463_);
v___x_468_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_469_ = l_Nat_reprFast(v_i_464_);
v___x_470_ = lean_string_append(v___x_468_, v___x_469_);
lean_dec_ref(v___x_469_);
v___x_471_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_472_ = lean_string_append(v___x_470_, v___x_471_);
v___x_473_ = l_Nat_reprFast(v_j_465_);
v___x_474_ = lean_string_append(v___x_472_, v___x_473_);
lean_dec_ref(v___x_473_);
v___x_475_ = lean_string_append(v___x_474_, v___x_471_);
v___x_476_ = lp_choreo_Choreo_intL(v_num_466_);
lean_dec(v_num_466_);
v___x_477_ = lean_string_append(v___x_475_, v___x_476_);
lean_dec_ref(v___x_476_);
v___x_478_ = lean_string_append(v___x_477_, v___x_471_);
v___x_479_ = lp_choreo_Choreo_intL(v_den_467_);
lean_dec(v_den_467_);
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
lean_dec_ref(v___x_479_);
v___x_481_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL___lam__1(lean_object* v_o_483_){
_start:
{
lean_object* v_i_484_; lean_object* v_cx_485_; lean_object* v_cy_486_; lean_object* v_r2_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_i_484_ = lean_ctor_get(v_o_483_, 0);
lean_inc(v_i_484_);
v_cx_485_ = lean_ctor_get(v_o_483_, 1);
lean_inc(v_cx_485_);
v_cy_486_ = lean_ctor_get(v_o_483_, 2);
lean_inc(v_cy_486_);
v_r2_487_ = lean_ctor_get(v_o_483_, 3);
lean_inc(v_r2_487_);
lean_dec_ref(v_o_483_);
v___x_488_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_489_ = l_Nat_reprFast(v_i_484_);
v___x_490_ = lean_string_append(v___x_488_, v___x_489_);
lean_dec_ref(v___x_489_);
v___x_491_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_492_ = lean_string_append(v___x_490_, v___x_491_);
v___x_493_ = lp_choreo_Choreo_intL(v_cx_485_);
lean_dec(v_cx_485_);
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
lean_dec_ref(v___x_493_);
v___x_495_ = lean_string_append(v___x_494_, v___x_491_);
v___x_496_ = lp_choreo_Choreo_intL(v_cy_486_);
lean_dec(v_cy_486_);
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
lean_dec_ref(v___x_496_);
v___x_498_ = lean_string_append(v___x_497_, v___x_491_);
v___x_499_ = lp_choreo_Choreo_intL(v_r2_487_);
lean_dec(v_r2_487_);
v___x_500_ = lean_string_append(v___x_498_, v___x_499_);
lean_dec_ref(v___x_499_);
v___x_501_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_502_ = lean_string_append(v___x_500_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseL(lean_object* v_ph_515_){
_start:
{
lean_object* v_t0_516_; lean_object* v_t1_517_; lean_object* v_paths_518_; lean_object* v_bounds_519_; lean_object* v_certs_520_; lean_object* v_rigid_521_; lean_object* v_orbits_522_; lean_object* v___f_523_; lean_object* v___f_524_; lean_object* v_rigid_525_; lean_object* v_orbits_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v_t0_516_ = lean_ctor_get(v_ph_515_, 0);
lean_inc(v_t0_516_);
v_t1_517_ = lean_ctor_get(v_ph_515_, 1);
lean_inc(v_t1_517_);
v_paths_518_ = lean_ctor_get(v_ph_515_, 2);
lean_inc(v_paths_518_);
v_bounds_519_ = lean_ctor_get(v_ph_515_, 3);
lean_inc_ref(v_bounds_519_);
v_certs_520_ = lean_ctor_get(v_ph_515_, 4);
lean_inc(v_certs_520_);
v_rigid_521_ = lean_ctor_get(v_ph_515_, 5);
lean_inc(v_rigid_521_);
v_orbits_522_ = lean_ctor_get(v_ph_515_, 6);
lean_inc(v_orbits_522_);
lean_dec_ref(v_ph_515_);
v___f_523_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__0));
v___f_524_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__1));
v_rigid_525_ = lp_choreo_Choreo_listL___redArg(v___f_523_, v_rigid_521_);
v_orbits_526_ = lp_choreo_Choreo_listL___redArg(v___f_524_, v_orbits_522_);
v___x_527_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__2));
v___x_528_ = l_Nat_reprFast(v_t0_516_);
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
lean_dec_ref(v___x_528_);
v___x_530_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__3));
v___x_531_ = lean_string_append(v___x_529_, v___x_530_);
v___x_532_ = l_Nat_reprFast(v_t1_517_);
v___x_533_ = lean_string_append(v___x_531_, v___x_532_);
lean_dec_ref(v___x_532_);
v___x_534_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__4));
v___x_535_ = lean_string_append(v___x_533_, v___x_534_);
v___x_536_ = lp_choreo_Choreo_rectL(v_bounds_519_);
lean_dec_ref(v_bounds_519_);
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
lean_dec_ref(v___x_536_);
v___x_538_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__5));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v___x_540_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__6));
v___x_541_ = lp_choreo_Choreo_listL___redArg(v___x_540_, v_paths_518_);
v___x_542_ = lean_string_append(v___x_539_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__7));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__8));
v___x_546_ = lp_choreo_Choreo_listL___redArg(v___x_545_, v_certs_520_);
v___x_547_ = lean_string_append(v___x_544_, v___x_546_);
lean_dec_ref(v___x_546_);
v___x_548_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__9));
v___x_549_ = lean_string_append(v___x_547_, v___x_548_);
v___x_550_ = lean_string_append(v___x_549_, v_rigid_525_);
lean_dec_ref(v_rigid_525_);
v___x_551_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__10));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = lean_string_append(v___x_552_, v_orbits_526_);
lean_dec_ref(v_orbits_526_);
v___x_554_ = ((lean_object*)(lp_choreo_Choreo_phaseL___closed__11));
v___x_555_ = lean_string_append(v___x_553_, v___x_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_configL(lean_object* v_c_566_){
_start:
{
lean_object* v_n_567_; lean_object* v_dmin_568_; lean_object* v_vmax_569_; lean_object* v_stage_570_; lean_object* v_ticksPerBeat_571_; lean_object* v_bpmNum_572_; lean_object* v_bpmDen_573_; lean_object* v_total_574_; lean_object* v_seconds_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_n_567_ = lean_ctor_get(v_c_566_, 0);
lean_inc(v_n_567_);
v_dmin_568_ = lean_ctor_get(v_c_566_, 1);
lean_inc(v_dmin_568_);
v_vmax_569_ = lean_ctor_get(v_c_566_, 2);
lean_inc(v_vmax_569_);
v_stage_570_ = lean_ctor_get(v_c_566_, 3);
lean_inc_ref(v_stage_570_);
v_ticksPerBeat_571_ = lean_ctor_get(v_c_566_, 4);
lean_inc(v_ticksPerBeat_571_);
v_bpmNum_572_ = lean_ctor_get(v_c_566_, 5);
lean_inc(v_bpmNum_572_);
v_bpmDen_573_ = lean_ctor_get(v_c_566_, 6);
lean_inc(v_bpmDen_573_);
v_total_574_ = lean_ctor_get(v_c_566_, 7);
lean_inc(v_total_574_);
v_seconds_575_ = lean_ctor_get(v_c_566_, 8);
lean_inc(v_seconds_575_);
lean_dec_ref(v_c_566_);
v___x_576_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__0));
v___x_577_ = l_Nat_reprFast(v_n_567_);
v___x_578_ = lean_string_append(v___x_576_, v___x_577_);
lean_dec_ref(v___x_577_);
v___x_579_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__1));
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
v___x_581_ = lp_choreo_Choreo_intL(v_dmin_568_);
lean_dec(v_dmin_568_);
v___x_582_ = lean_string_append(v___x_580_, v___x_581_);
lean_dec_ref(v___x_581_);
v___x_583_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__2));
v___x_584_ = lean_string_append(v___x_582_, v___x_583_);
v___x_585_ = lp_choreo_Choreo_intL(v_vmax_569_);
lean_dec(v_vmax_569_);
v___x_586_ = lean_string_append(v___x_584_, v___x_585_);
lean_dec_ref(v___x_585_);
v___x_587_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__3));
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
v___x_589_ = lp_choreo_Choreo_rectL(v_stage_570_);
lean_dec_ref(v_stage_570_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__4));
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = l_Nat_reprFast(v_ticksPerBeat_571_);
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
lean_dec_ref(v___x_593_);
v___x_595_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__5));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = l_Nat_reprFast(v_bpmNum_572_);
v___x_598_ = lean_string_append(v___x_596_, v___x_597_);
lean_dec_ref(v___x_597_);
v___x_599_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__6));
v___x_600_ = lean_string_append(v___x_598_, v___x_599_);
v___x_601_ = l_Nat_reprFast(v_bpmDen_573_);
v___x_602_ = lean_string_append(v___x_600_, v___x_601_);
lean_dec_ref(v___x_601_);
v___x_603_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__7));
v___x_604_ = lean_string_append(v___x_602_, v___x_603_);
v___x_605_ = l_Nat_reprFast(v_total_574_);
v___x_606_ = lean_string_append(v___x_604_, v___x_605_);
lean_dec_ref(v___x_605_);
v___x_607_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__8));
v___x_608_ = lean_string_append(v___x_606_, v___x_607_);
v___x_609_ = l_Nat_reprFast(v_seconds_575_);
v___x_610_ = lean_string_append(v___x_608_, v___x_609_);
lean_dec_ref(v___x_609_);
v___x_611_ = ((lean_object*)(lp_choreo_Choreo_configL___closed__9));
v___x_612_ = lean_string_append(v___x_610_, v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_fingerprint_spec__0(lean_object* v_a_613_, lean_object* v_a_614_){
_start:
{
if (lean_obj_tag(v_a_613_) == 0)
{
lean_object* v___x_615_; 
v___x_615_ = l_List_reverse___redArg(v_a_614_);
return v___x_615_;
}
else
{
lean_object* v_head_616_; lean_object* v_tail_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_626_; 
v_head_616_ = lean_ctor_get(v_a_613_, 0);
v_tail_617_ = lean_ctor_get(v_a_613_, 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v_a_613_);
if (v_isSharedCheck_626_ == 0)
{
v___x_619_ = v_a_613_;
v_isShared_620_ = v_isSharedCheck_626_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_tail_617_);
lean_inc(v_head_616_);
lean_dec(v_a_613_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_626_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = lp_choreo_Choreo_phaseL(v_head_616_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v_a_614_);
lean_ctor_set(v___x_619_, 0, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_a_614_);
v___x_623_ = v_reuseFailAlloc_625_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v_a_613_ = v_tail_617_;
v_a_614_ = v___x_623_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1(lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
return v_x_627_;
}
else
{
lean_object* v_head_629_; lean_object* v_tail_630_; lean_object* v___x_631_; 
v_head_629_ = lean_ctor_get(v_x_628_, 0);
v_tail_630_ = lean_ctor_get(v_x_628_, 1);
v___x_631_ = lean_string_append(v_x_627_, v_head_629_);
v_x_627_ = v___x_631_;
v_x_628_ = v_tail_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1___boxed(lean_object* v_x_633_, lean_object* v_x_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1(v_x_633_, v_x_634_);
lean_dec(v_x_634_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_fingerprint(lean_object* v_r_637_){
_start:
{
lean_object* v_cfg_638_; lean_object* v_phases_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_s_645_; uint64_t v_h_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_hex_650_; 
v_cfg_638_ = lean_ctor_get(v_r_637_, 0);
lean_inc_ref(v_cfg_638_);
v_phases_639_ = lean_ctor_get(v_r_637_, 1);
lean_inc(v_phases_639_);
lean_dec_ref(v_r_637_);
v___x_640_ = lp_choreo_Choreo_configL(v_cfg_638_);
v___x_641_ = lean_box(0);
v___x_642_ = lp_choreo_List_mapTR_loop___at___00Choreo_Routine_fingerprint_spec__0(v_phases_639_, v___x_641_);
v___x_643_ = ((lean_object*)(lp_choreo_Choreo_Routine_fingerprint___closed__0));
v___x_644_ = lp_choreo_List_foldl___at___00Choreo_Routine_fingerprint_spec__1(v___x_643_, v___x_642_);
lean_dec(v___x_642_);
v_s_645_ = lean_string_append(v___x_640_, v___x_644_);
lean_dec_ref(v___x_644_);
v_h_646_ = lean_string_hash(v_s_645_);
lean_dec_ref(v_s_645_);
v___x_647_ = lean_unsigned_to_nat(16u);
v___x_648_ = lean_uint64_to_nat(v_h_646_);
v___x_649_ = l_Nat_toDigits(v___x_647_, v___x_648_);
v_hex_650_ = lean_string_mk(v___x_649_);
return v_hex_650_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionL(lean_object* v_t_651_){
_start:
{
lean_object* v_first_652_; lean_object* v_last_653_; lean_object* v_start_654_; lean_object* v_finish_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_first_652_ = lean_ctor_get(v_t_651_, 0);
lean_inc(v_first_652_);
v_last_653_ = lean_ctor_get(v_t_651_, 1);
lean_inc(v_last_653_);
v_start_654_ = lean_ctor_get(v_t_651_, 2);
lean_inc(v_start_654_);
v_finish_655_ = lean_ctor_get(v_t_651_, 3);
lean_inc(v_finish_655_);
lean_dec_ref(v_t_651_);
v___x_656_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__0));
v___x_657_ = l_Nat_reprFast(v_first_652_);
v___x_658_ = lean_string_append(v___x_656_, v___x_657_);
lean_dec_ref(v___x_657_);
v___x_659_ = ((lean_object*)(lp_choreo_Choreo_listL___redArg___closed__1));
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
v___x_661_ = l_Nat_reprFast(v_last_653_);
v___x_662_ = lean_string_append(v___x_660_, v___x_661_);
lean_dec_ref(v___x_661_);
v___x_663_ = lean_string_append(v___x_662_, v___x_659_);
v___x_664_ = ((lean_object*)(lp_choreo_Choreo_formationL___closed__3));
v___x_665_ = lp_choreo_Choreo_listL___redArg(v___x_664_, v_start_654_);
v___x_666_ = lean_string_append(v___x_663_, v___x_665_);
lean_dec_ref(v___x_665_);
v___x_667_ = lean_string_append(v___x_666_, v___x_659_);
v___x_668_ = lp_choreo_Choreo_listL___redArg(v___x_664_, v_finish_655_);
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
lean_dec_ref(v___x_668_);
v___x_670_ = ((lean_object*)(lp_choreo_Choreo_rectL___closed__1));
v___x_671_ = lean_string_append(v___x_669_, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseKey(lean_object* v_ph_672_){
_start:
{
lean_object* v_t0_673_; lean_object* v_t1_674_; lean_object* v_paths_675_; lean_object* v_bounds_676_; lean_object* v_certs_677_; lean_object* v_rigid_678_; lean_object* v_orbits_679_; lean_object* v_target_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_690_; 
v_t0_673_ = lean_ctor_get(v_ph_672_, 0);
v_t1_674_ = lean_ctor_get(v_ph_672_, 1);
v_paths_675_ = lean_ctor_get(v_ph_672_, 2);
v_bounds_676_ = lean_ctor_get(v_ph_672_, 3);
v_certs_677_ = lean_ctor_get(v_ph_672_, 4);
v_rigid_678_ = lean_ctor_get(v_ph_672_, 5);
v_orbits_679_ = lean_ctor_get(v_ph_672_, 6);
v_target_680_ = lean_ctor_get(v_ph_672_, 7);
v_isSharedCheck_690_ = !lean_is_exclusive(v_ph_672_);
if (v_isSharedCheck_690_ == 0)
{
v___x_682_ = v_ph_672_;
v_isShared_683_ = v_isSharedCheck_690_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_target_680_);
lean_inc(v_orbits_679_);
lean_inc(v_rigid_678_);
lean_inc(v_certs_677_);
lean_inc(v_bounds_676_);
lean_inc(v_paths_675_);
lean_inc(v_t1_674_);
lean_inc(v_t0_673_);
lean_dec(v_ph_672_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_690_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_nat_sub(v_t1_674_, v_t0_673_);
lean_dec(v_t0_673_);
lean_dec(v_t1_674_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 1, v___x_685_);
lean_ctor_set(v___x_682_, 0, v___x_684_);
v___x_687_ = v___x_682_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_paths_675_);
lean_ctor_set(v_reuseFailAlloc_689_, 3, v_bounds_676_);
lean_ctor_set(v_reuseFailAlloc_689_, 4, v_certs_677_);
lean_ctor_set(v_reuseFailAlloc_689_, 5, v_rigid_678_);
lean_ctor_set(v_reuseFailAlloc_689_, 6, v_orbits_679_);
lean_ctor_set(v_reuseFailAlloc_689_, 7, v_target_680_);
v___x_687_ = v_reuseFailAlloc_689_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; 
v___x_688_ = lp_choreo_Choreo_phaseL(v___x_687_);
return v___x_688_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Compose(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Source(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Compose(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
