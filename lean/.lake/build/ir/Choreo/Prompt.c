// Lean compiler output
// Module: Choreo.Prompt
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqSide_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqSide_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instBEqSide___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instBEqSide_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instBEqSide___closed__0 = (const lean_object*)&lp_choreo_Choreo_instBEqSide___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instBEqSide = (const lean_object*)&lp_choreo_Choreo_instBEqSide___closed__0_value;
LEAN_EXPORT uint8_t lp_choreo_Choreo_instInhabitedSide_default;
LEAN_EXPORT uint8_t lp_choreo_Choreo_instInhabitedSide;
static const lean_string_object lp_choreo_Choreo_instReprSide_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Choreo.Side.left"};
static const lean_object* lp_choreo_Choreo_instReprSide_repr___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instReprSide_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instReprSide_repr___closed__1 = (const lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__1_value;
static const lean_string_object lp_choreo_Choreo_instReprSide_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Side.right"};
static const lean_object* lp_choreo_Choreo_instReprSide_repr___closed__2 = (const lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_instReprSide_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_instReprSide_repr___closed__3 = (const lean_object*)&lp_choreo_Choreo_instReprSide_repr___closed__3_value;
static lean_once_cell_t lp_choreo_Choreo_instReprSide_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprSide_repr___closed__4;
static lean_once_cell_t lp_choreo_Choreo_instReprSide_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprSide_repr___closed__5;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprSide_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprSide_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instReprSide___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instReprSide_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instReprSide___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprSide___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instReprSide = (const lean_object*)&lp_choreo_Choreo_instReprSide___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_grid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_grid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_line_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_line_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diagonal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diagonal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_circle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_circle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_vee_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_vee_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diamond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diamond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_windows_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_windows_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_rings_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_rings_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_square_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_square_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_cross_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_cross_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_spiral_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_spiral_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqShape_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqShape_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instBEqShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instBEqShape_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instBEqShape___closed__0 = (const lean_object*)&lp_choreo_Choreo_instBEqShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instBEqShape = (const lean_object*)&lp_choreo_Choreo_instBEqShape___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instInhabitedShape_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instInhabitedShape_default___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedShape_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedShape_default = (const lean_object*)&lp_choreo_Choreo_instInhabitedShape_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedShape = (const lean_object*)&lp_choreo_Choreo_instInhabitedShape_default___closed__0_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Shape.line"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__1 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__1_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Choreo.Shape.diagonal"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__2 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__3 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__3_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Choreo.Shape.circle"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__4 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__5 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__5_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Choreo.Shape.vee"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__6 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__6_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__7 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__7_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Choreo.Shape.diamond"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__8 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__9 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__9_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Choreo.Shape.windows"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__10 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__10_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__11 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__11_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Choreo.Shape.rings"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__12 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__12_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__13 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__13_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Choreo.Shape.square"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__14 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__14_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__15 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__15_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Choreo.Shape.cross"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__16 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__16_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__17 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__17_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Choreo.Shape.spiral"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__18 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__18_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__19 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__19_value;
static const lean_string_object lp_choreo_Choreo_instReprShape_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Shape.grid"};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__20 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__21 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_instReprShape_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprShape_repr___closed__22 = (const lean_object*)&lp_choreo_Choreo_instReprShape_repr___closed__22_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instReprShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instReprShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instReprShape___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instReprShape = (const lean_object*)&lp_choreo_Choreo_instReprShape___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_enter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_enter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_form_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_form_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_flip_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_flip_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_rotate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_rotate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_counterRotate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_counterRotate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_weave_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_weave_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ripple_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ripple_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_burst_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_burst_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_snake_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_snake_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_zipper_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_zipper_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_exchange_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_exchange_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_join_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_join_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_leave_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_leave_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqMove_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqMove_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instBEqMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instBEqMove_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instBEqMove___closed__0 = (const lean_object*)&lp_choreo_Choreo_instBEqMove___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instBEqMove = (const lean_object*)&lp_choreo_Choreo_instBEqMove___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instInhabitedMove_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instInhabitedShape_default___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instInhabitedMove_default___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedMove_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedMove_default = (const lean_object*)&lp_choreo_Choreo_instInhabitedMove_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedMove = (const lean_object*)&lp_choreo_Choreo_instInhabitedMove_default___closed__0_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Choreo.Move.flip"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__1 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__1_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Choreo.Move.ripple"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__2 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__3 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__3_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Move.burst"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__4 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__5 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__5_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Move.snake"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__6 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__6_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__7 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__7_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Choreo.Move.zipper"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__8 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__9 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__9_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Choreo.Move.exchange"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__10 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__10_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__11 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__11_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Move.enter"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__12 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__12_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__13 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__14 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__14_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Choreo.Move.form"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__15 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__15_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__15_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__16 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__17 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__17_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Choreo.Move.rotate"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__18 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__18_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__19 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__19_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__20 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__20_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Choreo.Move.counterRotate"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__21 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__21_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__22 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__23 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__23_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Move.weave"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__24 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__24_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__25 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__26 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__26_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Choreo.Move.join"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__27 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__27_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__27_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__28 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__28_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__28_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__29 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__29_value;
static const lean_string_object lp_choreo_Choreo_instReprMove_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Choreo.Move.leave"};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__30 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__30_value)}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__31 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__31_value;
static const lean_ctor_object lp_choreo_Choreo_instReprMove_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__31_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instReprMove_repr___closed__32 = (const lean_object*)&lp_choreo_Choreo_instReprMove_repr___closed__32_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprMove_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprMove_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instReprMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instReprMove_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instReprMove___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprMove___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instReprMove = (const lean_object*)&lp_choreo_Choreo_instReprMove___closed__0_value;
static const lean_string_object lp_choreo_Choreo_instInhabitedPlan_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_Choreo_instInhabitedPlan_default___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedPlan_default___closed__0_value;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedPlan_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedPlan_default___closed__1;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedPlan_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedPlan_default___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedPlan_default;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedPlan;
LEAN_EXPORT lean_object* lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__0_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "seconds"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__1 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__2 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__3 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__3_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__4 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__5 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__3_value),((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__5_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__6 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__6_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bpm"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__8 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__9 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__9_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "genre"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__11 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__11_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__12 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__12_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__14 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__14_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__15 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__15_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__17 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__17_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__17_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__18 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__18_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__20 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__21 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__21_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "moves"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__22 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__22_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__23 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__23_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "steps"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__24 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__24_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__25 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__25_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gap"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__26 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__26_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__26_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__27 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__27_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__28 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__28_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__28_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__29 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__29_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sweep"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__30 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__30_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__31 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__31_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "waiting"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__32 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__32_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__32_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__33 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__33_value;
static const lean_string_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__34 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__34_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__37 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__37_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPlan_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__34_value)}};
static const lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__38 = (const lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__38_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instReprPlan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instReprPlan_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instReprPlan___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprPlan___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instReprPlan = (const lean_object*)&lp_choreo_Choreo_instReprPlan___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__0 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__1 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__1_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__2 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__2_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__3 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__3_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "single"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__4 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__4_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "two"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__5 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__5_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pair"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__6 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__6_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "both"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__7 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__7_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "three"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__8 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__8_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "four"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__9 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__9_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "five"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__10 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__10_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "six"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__11 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__11_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "seven"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__12 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__12_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "eight"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__13 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__13_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nine"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__14 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__14_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ten"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__15 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__15_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "twelve"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__16 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__16_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sixteen"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__17 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__17_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "fifteen"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__18 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__18_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "twenty"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__19 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__19_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "thirty"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__20 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__20_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "forty"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__21 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__21_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fifty"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__22 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__22_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sixty"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__23 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__23_value;
static const lean_string_object lp_choreo_Choreo_wordNumber___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ninety"};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__24 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(90) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__25 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__26 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__26_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__27 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__27_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__28 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__28_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__29 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__29_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__30 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__31 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__31_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__32 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__32_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__33 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__33_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__34 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__34_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__35 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__35_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__36 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__36_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__37 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__37_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__38 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__38_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__39 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__39_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__40 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__40_value;
static const lean_ctor_object lp_choreo_Choreo_wordNumber___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_wordNumber___closed__41 = (const lean_object*)&lp_choreo_Choreo_wordNumber___closed__41_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_wordNumber(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_tokenize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_tokenize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_choreo_Choreo_tokenize___closed__0 = (const lean_object*)&lp_choreo_Choreo_tokenize___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_tokenize(lean_object*);
static const lean_string_object lp_choreo_Choreo_splitBy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_choreo_Choreo_splitBy___closed__0 = (const lean_object*)&lp_choreo_Choreo_splitBy___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitBy(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitBy___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_size(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_size___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_readSeconds_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_choreo_Choreo_readSeconds_go___closed__0 = (const lean_object*)&lp_choreo_Choreo_readSeconds_go___closed__0_value;
static const lean_string_object lp_choreo_Choreo_readSeconds_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sec"};
static const lean_object* lp_choreo_Choreo_readSeconds_go___closed__1 = (const lean_object*)&lp_choreo_Choreo_readSeconds_go___closed__1_value;
static lean_once_cell_t lp_choreo_Choreo_readSeconds_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_readSeconds_go___closed__2;
static const lean_string_object lp_choreo_Choreo_readSeconds_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* lp_choreo_Choreo_readSeconds_go___closed__3 = (const lean_object*)&lp_choreo_Choreo_readSeconds_go___closed__3_value;
static lean_once_cell_t lp_choreo_Choreo_readSeconds_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_readSeconds_go___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSeconds_go(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSeconds(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm_go(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm_go___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_countBefore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* lp_choreo_Choreo_countBefore_go___closed__0 = (const lean_object*)&lp_choreo_Choreo_countBefore_go___closed__0_value;
static const lean_string_object lp_choreo_Choreo_countBefore_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* lp_choreo_Choreo_countBefore_go___closed__1 = (const lean_object*)&lp_choreo_Choreo_countBefore_go___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_countBefore_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_countBefore(lean_object*);
static const lean_ctor_object lp_choreo_Choreo_instInhabitedScan_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instInhabitedScan_default___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedScan_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedScan_default = (const lean_object*)&lp_choreo_Choreo_instInhabitedScan_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedScan = (const lean_object*)&lp_choreo_Choreo_instInhabitedScan_default___closed__0_value;
LEAN_EXPORT uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__0(lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_scan___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___lam__1___closed__0 = (const lean_object*)&lp_choreo_Choreo_scan___lam__1___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_scan_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_scan_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_scan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_scan___closed__0 = (const lean_object*)&lp_choreo_Choreo_scan___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__1 = (const lean_object*)&lp_choreo_Choreo_scan___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__2 = (const lean_object*)&lp_choreo_Choreo_scan___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_wordNumber___closed__3_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__3 = (const lean_object*)&lp_choreo_Choreo_scan___closed__3_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* lp_choreo_Choreo_scan___closed__4 = (const lean_object*)&lp_choreo_Choreo_scan___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_wordNumber___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__5 = (const lean_object*)&lp_choreo_Choreo_scan___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_wordNumber___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__6 = (const lean_object*)&lp_choreo_Choreo_scan___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__7 = (const lean_object*)&lp_choreo_Choreo_scan___closed__7_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__8 = (const lean_object*)&lp_choreo_Choreo_scan___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__9 = (const lean_object*)&lp_choreo_Choreo_scan___closed__9_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__10 = (const lean_object*)&lp_choreo_Choreo_scan___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__11 = (const lean_object*)&lp_choreo_Choreo_scan___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__12 = (const lean_object*)&lp_choreo_Choreo_scan___closed__12_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* lp_choreo_Choreo_scan___closed__13 = (const lean_object*)&lp_choreo_Choreo_scan___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__14 = (const lean_object*)&lp_choreo_Choreo_scan___closed__14_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "new"};
static const lean_object* lp_choreo_Choreo_scan___closed__15 = (const lean_object*)&lp_choreo_Choreo_scan___closed__15_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "leave"};
static const lean_object* lp_choreo_Choreo_scan___closed__16 = (const lean_object*)&lp_choreo_Choreo_scan___closed__16_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "leaves"};
static const lean_object* lp_choreo_Choreo_scan___closed__17 = (const lean_object*)&lp_choreo_Choreo_scan___closed__17_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* lp_choreo_Choreo_scan___closed__18 = (const lean_object*)&lp_choreo_Choreo_scan___closed__18_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exits"};
static const lean_object* lp_choreo_Choreo_scan___closed__19 = (const lean_object*)&lp_choreo_Choreo_scan___closed__19_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "off"};
static const lean_object* lp_choreo_Choreo_scan___closed__20 = (const lean_object*)&lp_choreo_Choreo_scan___closed__20_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "walk"};
static const lean_object* lp_choreo_Choreo_scan___closed__21 = (const lean_object*)&lp_choreo_Choreo_scan___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__21_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__22 = (const lean_object*)&lp_choreo_Choreo_scan___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__17_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__23 = (const lean_object*)&lp_choreo_Choreo_scan___closed__23_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "clockwise"};
static const lean_object* lp_choreo_Choreo_scan___closed__24 = (const lean_object*)&lp_choreo_Choreo_scan___closed__24_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "counter"};
static const lean_object* lp_choreo_Choreo_scan___closed__25 = (const lean_object*)&lp_choreo_Choreo_scan___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__25_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__26 = (const lean_object*)&lp_choreo_Choreo_scan___closed__26_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "270"};
static const lean_object* lp_choreo_Choreo_scan___closed__27 = (const lean_object*)&lp_choreo_Choreo_scan___closed__27_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "360"};
static const lean_object* lp_choreo_Choreo_scan___closed__28 = (const lean_object*)&lp_choreo_Choreo_scan___closed__28_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "full"};
static const lean_object* lp_choreo_Choreo_scan___closed__29 = (const lean_object*)&lp_choreo_Choreo_scan___closed__29_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "180"};
static const lean_object* lp_choreo_Choreo_scan___closed__30 = (const lean_object*)&lp_choreo_Choreo_scan___closed__30_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "half"};
static const lean_object* lp_choreo_Choreo_scan___closed__31 = (const lean_object*)&lp_choreo_Choreo_scan___closed__31_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "zipper"};
static const lean_object* lp_choreo_Choreo_scan___closed__32 = (const lean_object*)&lp_choreo_Choreo_scan___closed__32_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "interlock"};
static const lean_object* lp_choreo_Choreo_scan___closed__33 = (const lean_object*)&lp_choreo_Choreo_scan___closed__33_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "interlocking"};
static const lean_object* lp_choreo_Choreo_scan___closed__34 = (const lean_object*)&lp_choreo_Choreo_scan___closed__34_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "comb"};
static const lean_object* lp_choreo_Choreo_scan___closed__35 = (const lean_object*)&lp_choreo_Choreo_scan___closed__35_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "crossover"};
static const lean_object* lp_choreo_Choreo_scan___closed__36 = (const lean_object*)&lp_choreo_Choreo_scan___closed__36_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "circle"};
static const lean_object* lp_choreo_Choreo_scan___closed__37 = (const lean_object*)&lp_choreo_Choreo_scan___closed__37_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ring"};
static const lean_object* lp_choreo_Choreo_scan___closed__38 = (const lean_object*)&lp_choreo_Choreo_scan___closed__38_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "diagonal"};
static const lean_object* lp_choreo_Choreo_scan___closed__39 = (const lean_object*)&lp_choreo_Choreo_scan___closed__39_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "diamond"};
static const lean_object* lp_choreo_Choreo_scan___closed__40 = (const lean_object*)&lp_choreo_Choreo_scan___closed__40_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "windows"};
static const lean_object* lp_choreo_Choreo_scan___closed__41 = (const lean_object*)&lp_choreo_Choreo_scan___closed__41_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* lp_choreo_Choreo_scan___closed__42 = (const lean_object*)&lp_choreo_Choreo_scan___closed__42_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "vee"};
static const lean_object* lp_choreo_Choreo_scan___closed__43 = (const lean_object*)&lp_choreo_Choreo_scan___closed__43_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "wedge"};
static const lean_object* lp_choreo_Choreo_scan___closed__44 = (const lean_object*)&lp_choreo_Choreo_scan___closed__44_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "chevron"};
static const lean_object* lp_choreo_Choreo_scan___closed__45 = (const lean_object*)&lp_choreo_Choreo_scan___closed__45_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "flip"};
static const lean_object* lp_choreo_Choreo_scan___closed__46 = (const lean_object*)&lp_choreo_Choreo_scan___closed__46_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flips"};
static const lean_object* lp_choreo_Choreo_scan___closed__47 = (const lean_object*)&lp_choreo_Choreo_scan___closed__47_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "swap"};
static const lean_object* lp_choreo_Choreo_scan___closed__48 = (const lean_object*)&lp_choreo_Choreo_scan___closed__48_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trade"};
static const lean_object* lp_choreo_Choreo_scan___closed__49 = (const lean_object*)&lp_choreo_Choreo_scan___closed__49_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rotate"};
static const lean_object* lp_choreo_Choreo_scan___closed__50 = (const lean_object*)&lp_choreo_Choreo_scan___closed__50_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rotates"};
static const lean_object* lp_choreo_Choreo_scan___closed__51 = (const lean_object*)&lp_choreo_Choreo_scan___closed__51_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spin"};
static const lean_object* lp_choreo_Choreo_scan___closed__52 = (const lean_object*)&lp_choreo_Choreo_scan___closed__52_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spins"};
static const lean_object* lp_choreo_Choreo_scan___closed__53 = (const lean_object*)&lp_choreo_Choreo_scan___closed__53_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revolve"};
static const lean_object* lp_choreo_Choreo_scan___closed__54 = (const lean_object*)&lp_choreo_Choreo_scan___closed__54_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "turn"};
static const lean_object* lp_choreo_Choreo_scan___closed__55 = (const lean_object*)&lp_choreo_Choreo_scan___closed__55_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pivot"};
static const lean_object* lp_choreo_Choreo_scan___closed__56 = (const lean_object*)&lp_choreo_Choreo_scan___closed__56_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__56_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__57 = (const lean_object*)&lp_choreo_Choreo_scan___closed__57_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "chaine"};
static const lean_object* lp_choreo_Choreo_scan___closed__58 = (const lean_object*)&lp_choreo_Choreo_scan___closed__58_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__58_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__59 = (const lean_object*)&lp_choreo_Choreo_scan___closed__59_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "chakkar"};
static const lean_object* lp_choreo_Choreo_scan___closed__60 = (const lean_object*)&lp_choreo_Choreo_scan___closed__60_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__60_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__61 = (const lean_object*)&lp_choreo_Choreo_scan___closed__61_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__62 = (const lean_object*)&lp_choreo_Choreo_scan___closed__62_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__63 = (const lean_object*)&lp_choreo_Choreo_scan___closed__63_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__64 = (const lean_object*)&lp_choreo_Choreo_scan___closed__64_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "weave"};
static const lean_object* lp_choreo_Choreo_scan___closed__65 = (const lean_object*)&lp_choreo_Choreo_scan___closed__65_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "weaves"};
static const lean_object* lp_choreo_Choreo_scan___closed__66 = (const lean_object*)&lp_choreo_Choreo_scan___closed__66_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "weaving"};
static const lean_object* lp_choreo_Choreo_scan___closed__67 = (const lean_object*)&lp_choreo_Choreo_scan___closed__67_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "chain"};
static const lean_object* lp_choreo_Choreo_scan___closed__68 = (const lean_object*)&lp_choreo_Choreo_scan___closed__68_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ripple"};
static const lean_object* lp_choreo_Choreo_scan___closed__69 = (const lean_object*)&lp_choreo_Choreo_scan___closed__69_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ripples"};
static const lean_object* lp_choreo_Choreo_scan___closed__70 = (const lean_object*)&lp_choreo_Choreo_scan___closed__70_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wave"};
static const lean_object* lp_choreo_Choreo_scan___closed__71 = (const lean_object*)&lp_choreo_Choreo_scan___closed__71_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "waves"};
static const lean_object* lp_choreo_Choreo_scan___closed__72 = (const lean_object*)&lp_choreo_Choreo_scan___closed__72_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* lp_choreo_Choreo_scan___closed__73 = (const lean_object*)&lp_choreo_Choreo_scan___closed__73_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "cascade"};
static const lean_object* lp_choreo_Choreo_scan___closed__74 = (const lean_object*)&lp_choreo_Choreo_scan___closed__74_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "burst"};
static const lean_object* lp_choreo_Choreo_scan___closed__75 = (const lean_object*)&lp_choreo_Choreo_scan___closed__75_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bursts"};
static const lean_object* lp_choreo_Choreo_scan___closed__76 = (const lean_object*)&lp_choreo_Choreo_scan___closed__76_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "explode"};
static const lean_object* lp_choreo_Choreo_scan___closed__77 = (const lean_object*)&lp_choreo_Choreo_scan___closed__77_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explodes"};
static const lean_object* lp_choreo_Choreo_scan___closed__78 = (const lean_object*)&lp_choreo_Choreo_scan___closed__78_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "starburst"};
static const lean_object* lp_choreo_Choreo_scan___closed__79 = (const lean_object*)&lp_choreo_Choreo_scan___closed__79_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "snake"};
static const lean_object* lp_choreo_Choreo_scan___closed__80 = (const lean_object*)&lp_choreo_Choreo_scan___closed__80_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "serpentine"};
static const lean_object* lp_choreo_Choreo_scan___closed__81 = (const lean_object*)&lp_choreo_Choreo_scan___closed__81_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "conga"};
static const lean_object* lp_choreo_Choreo_scan___closed__82 = (const lean_object*)&lp_choreo_Choreo_scan___closed__82_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "follow"};
static const lean_object* lp_choreo_Choreo_scan___closed__83 = (const lean_object*)&lp_choreo_Choreo_scan___closed__83_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "leader"};
static const lean_object* lp_choreo_Choreo_scan___closed__84 = (const lean_object*)&lp_choreo_Choreo_scan___closed__84_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formation"};
static const lean_object* lp_choreo_Choreo_scan___closed__85 = (const lean_object*)&lp_choreo_Choreo_scan___closed__85_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__85_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__86 = (const lean_object*)&lp_choreo_Choreo_scan___closed__86_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spiral"};
static const lean_object* lp_choreo_Choreo_scan___closed__87 = (const lean_object*)&lp_choreo_Choreo_scan___closed__87_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "swirl"};
static const lean_object* lp_choreo_Choreo_scan___closed__88 = (const lean_object*)&lp_choreo_Choreo_scan___closed__88_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "whirlpool"};
static const lean_object* lp_choreo_Choreo_scan___closed__89 = (const lean_object*)&lp_choreo_Choreo_scan___closed__89_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pinwheel"};
static const lean_object* lp_choreo_Choreo_scan___closed__90 = (const lean_object*)&lp_choreo_Choreo_scan___closed__90_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spokes"};
static const lean_object* lp_choreo_Choreo_scan___closed__91 = (const lean_object*)&lp_choreo_Choreo_scan___closed__91_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cross"};
static const lean_object* lp_choreo_Choreo_scan___closed__92 = (const lean_object*)&lp_choreo_Choreo_scan___closed__92_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shape"};
static const lean_object* lp_choreo_Choreo_scan___closed__93 = (const lean_object*)&lp_choreo_Choreo_scan___closed__93_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__93_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__94 = (const lean_object*)&lp_choreo_Choreo_scan___closed__94_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "of"};
static const lean_object* lp_choreo_Choreo_scan___closed__95 = (const lean_object*)&lp_choreo_Choreo_scan___closed__95_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__95_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__96 = (const lean_object*)&lp_choreo_Choreo_scan___closed__96_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dancers"};
static const lean_object* lp_choreo_Choreo_scan___closed__97 = (const lean_object*)&lp_choreo_Choreo_scan___closed__97_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dancer"};
static const lean_object* lp_choreo_Choreo_scan___closed__98 = (const lean_object*)&lp_choreo_Choreo_scan___closed__98_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "people"};
static const lean_object* lp_choreo_Choreo_scan___closed__99 = (const lean_object*)&lp_choreo_Choreo_scan___closed__99_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "grid"};
static const lean_object* lp_choreo_Choreo_scan___closed__100 = (const lean_object*)&lp_choreo_Choreo_scan___closed__100_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rows"};
static const lean_object* lp_choreo_Choreo_scan___closed__101 = (const lean_object*)&lp_choreo_Choreo_scan___closed__101_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "block"};
static const lean_object* lp_choreo_Choreo_scan___closed__102 = (const lean_object*)&lp_choreo_Choreo_scan___closed__102_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "circles"};
static const lean_object* lp_choreo_Choreo_scan___closed__103 = (const lean_object*)&lp_choreo_Choreo_scan___closed__103_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rings"};
static const lean_object* lp_choreo_Choreo_scan___closed__104 = (const lean_object*)&lp_choreo_Choreo_scan___closed__104_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "concentric"};
static const lean_object* lp_choreo_Choreo_scan___closed__105 = (const lean_object*)&lp_choreo_Choreo_scan___closed__105_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "square"};
static const lean_object* lp_choreo_Choreo_scan___closed__106 = (const lean_object*)&lp_choreo_Choreo_scan___closed__106_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "jazz"};
static const lean_object* lp_choreo_Choreo_scan___closed__107 = (const lean_object*)&lp_choreo_Choreo_scan___closed__107_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__107_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__108 = (const lean_object*)&lp_choreo_Choreo_scan___closed__108_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_scan___closed__109 = (const lean_object*)&lp_choreo_Choreo_scan___closed__109_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exchange"};
static const lean_object* lp_choreo_Choreo_scan___closed__110 = (const lean_object*)&lp_choreo_Choreo_scan___closed__110_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "substitute"};
static const lean_object* lp_choreo_Choreo_scan___closed__111 = (const lean_object*)&lp_choreo_Choreo_scan___closed__111_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "substitution"};
static const lean_object* lp_choreo_Choreo_scan___closed__112 = (const lean_object*)&lp_choreo_Choreo_scan___closed__112_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "relay"};
static const lean_object* lp_choreo_Choreo_scan___closed__113 = (const lean_object*)&lp_choreo_Choreo_scan___closed__113_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "replace"};
static const lean_object* lp_choreo_Choreo_scan___closed__114 = (const lean_object*)&lp_choreo_Choreo_scan___closed__114_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "replaces"};
static const lean_object* lp_choreo_Choreo_scan___closed__115 = (const lean_object*)&lp_choreo_Choreo_scan___closed__115_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "join"};
static const lean_object* lp_choreo_Choreo_scan___closed__116 = (const lean_object*)&lp_choreo_Choreo_scan___closed__116_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "joins"};
static const lean_object* lp_choreo_Choreo_scan___closed__117 = (const lean_object*)&lp_choreo_Choreo_scan___closed__117_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rest"};
static const lean_object* lp_choreo_Choreo_scan___closed__118 = (const lean_object*)&lp_choreo_Choreo_scan___closed__118_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stage"};
static const lean_object* lp_choreo_Choreo_scan___closed__119 = (const lean_object*)&lp_choreo_Choreo_scan___closed__119_value;
static const lean_ctor_object lp_choreo_Choreo_scan___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_scan___closed__120 = (const lean_object*)&lp_choreo_Choreo_scan___closed__120_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wait"};
static const lean_object* lp_choreo_Choreo_scan___closed__121 = (const lean_object*)&lp_choreo_Choreo_scan___closed__121_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "waits"};
static const lean_object* lp_choreo_Choreo_scan___closed__122 = (const lean_object*)&lp_choreo_Choreo_scan___closed__122_value;
static const lean_string_object lp_choreo_Choreo_scan___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "offstage"};
static const lean_object* lp_choreo_Choreo_scan___closed__123 = (const lean_object*)&lp_choreo_Choreo_scan___closed__123_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_genreOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "House"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__0_value),((lean_object*)(((size_t)(120) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__1 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__1_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Lo-fi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__2 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__2_value),((lean_object*)(((size_t)(80) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__3 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__3_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Hip-hop"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__4 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__4_value),((lean_object*)(((size_t)(92) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__5 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__5_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Afrobeat"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__6 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__6_value),((lean_object*)(((size_t)(108) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__7 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__7_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Strings"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__8 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__8_value),((lean_object*)(((size_t)(84) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__9 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__9_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Cinematic"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__10 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__10_value),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__11 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__11_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Jazz"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__12 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__12_value),((lean_object*)(((size_t)(116) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__13 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__13_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Latin"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__14 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__14_value),((lean_object*)(((size_t)(104) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__15 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__15_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Bollywood fusion"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__16 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__16_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__17 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__17_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Raas"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__18 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__18_value),((lean_object*)(((size_t)(126) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__19 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__19_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "South Indian fusion"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__20 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__20_value),((lean_object*)(((size_t)(104) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__21 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__21_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Kuthu"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__22 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__22_value),((lean_object*)(((size_t)(140) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__23 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__23_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Rajasthani folk"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__24 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__24_value),((lean_object*)(((size_t)(104) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__25 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__25_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "trap"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__26 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__26_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lofi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__27 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__27_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "chill"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__28 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__28_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "afrobeats"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__29 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__29_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hip"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__30 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__30_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hiphop"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__31 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__31_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "waltz"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__32 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__32_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "afro"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__33 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__33_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "afrobeat"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__34 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__34_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "epic"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__35 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__35_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ballet"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__36 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__36_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "classical"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__37 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__37_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cinematic"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__38 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__38_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "orchestral"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__39 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__39_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Contemporary"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__40 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__40_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__40_value),((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__41 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__41_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "musical"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__42 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__42_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "contemporary"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__43 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__43_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "lyrical"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__44 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__44_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "broadway"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__45 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__45_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "K-pop"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__46 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__46_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__46_value),((lean_object*)(((size_t)(128) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__47 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__47_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bachata"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__48 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__48_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "merengue"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__49 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__49_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kpop"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__50 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__50_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__51 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__51_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pop"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__52 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__52_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "salsa"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__53 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__53_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "latin"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__54 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__54_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Kathak"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__55 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__55_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__55_value),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__56 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__56_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fusion"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__57 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__57_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mashup"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__58 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__58_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "kathak"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__59 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__59_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tatkar"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__60 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__60_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dandiya"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__61 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__61_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bollywood"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__62 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__62_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "filmi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__63 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__63_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "raas"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__64 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__64_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "garba"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__65 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__65_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bhangra"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__66 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__66_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__66_value),((lean_object*)(((size_t)(132) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__67 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__67_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "kollywood"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__68 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__68_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tollywood"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__69 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__69_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "kummi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__70 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__70_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "kolattam"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__71 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__71_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "adavu"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__72 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__72_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tamil"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__73 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__73_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "telugu"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__74 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__74_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "kannada"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__75 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__75_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "malayalam"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__76 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__76_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "south"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__77 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__77_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bhangra"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__78 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__78_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dhol"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__79 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__79_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dappan"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__80 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__80_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "parai"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__81 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__81_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "bharatanatyam"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__82 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__82_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "carnatic"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__83 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__83_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "kuthu"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__84 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__84_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "koothu"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__85 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__85_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Odissi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__86 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__86_value;
static const lean_ctor_object lp_choreo_Choreo_genreOf___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__86_value),((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_genreOf___closed__87 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__87_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rajasthani"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__88 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__88_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "odissi"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__89 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__89_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "chauka"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__90 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__90_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ghoomar"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__91 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__91_value;
static const lean_string_object lp_choreo_Choreo_genreOf___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "kalbelia"};
static const lean_object* lp_choreo_Choreo_genreOf___closed__92 = (const lean_object*)&lp_choreo_Choreo_genreOf___closed__92_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_genreOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_genreOf___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lavani"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__0 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__1 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__0_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__2 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__2_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bihu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__3 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__3_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__4 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__3_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__5 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__90_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__6 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__90_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__6_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__7 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__7_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tribhangi"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__8 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__9 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__9_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__8_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__9_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__10 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__10_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "charleston"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__11 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__12 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__11_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__12_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__13 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__13_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "contraction"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__14 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__15 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__15_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__14_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__15_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__16 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__17 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__17_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__13_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__17_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__18 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__10_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__18_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__19 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__19_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__7_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__19_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__20 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__5_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__21 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__2_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__21_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__22 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__22_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rockStep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__23 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__23_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rock step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__24 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__24_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rock steps"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__25 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__26 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__26_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__24_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__26_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__27 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__27_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__23_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__27_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__28 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__28_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "runningMan"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__29 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__29_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "running man"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__30 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__31 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__31_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__29_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__31_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__32 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__32_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "azonto"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__33 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__33_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__34 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__34_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__33_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__34_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__35 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__35_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "salsaBasic"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__36 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__36_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "salsa basic"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__37 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__37_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "salsa step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__38 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__38_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__39 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__39_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__37_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__39_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__40 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__40_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__36_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__40_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__41 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__41_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "chaCha"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__42 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__42_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "cha cha"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__43 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__43_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "chacha"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__44 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__44_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__45 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__45_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__43_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__45_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__46 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__46_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__42_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__46_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__47 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__47_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__91_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__48 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__48_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__91_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__48_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__49 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__49_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__49_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__22_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__50 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__50_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__47_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__50_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__51 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__51_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__41_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__51_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__52 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__52_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__35_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__52_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__53 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__53_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__32_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__53_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__54 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__54_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__28_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__54_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__55 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__55_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__56 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__56_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__60_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__56_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__57 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__57_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__58 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__58_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__60_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__58_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__59 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__59_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "balance"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__60 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__60_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "balance step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__61 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__61_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 7, .m_data = "balancé"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__62 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__62_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "balance steps"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__63 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__63_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__64 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__64_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__62_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__64_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__65 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__65_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__61_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__65_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__66 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__66_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__60_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__66_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__67 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__67_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "plie"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__68 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__68_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "plié"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__69 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__69_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "plies"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__70 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__70_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__70_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__71 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__71_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__69_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__71_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__72 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__72_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__68_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__72_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__73 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__73_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__68_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__73_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__74 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__74_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "jazzSquare"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__75 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__75_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "jazz square"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__76 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__76_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "jazz squares"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__77 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__77_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__77_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__78 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__78_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__76_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__78_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__79 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__79_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__75_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__79_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__80 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__80_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "twoStep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__81 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__81_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "two step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__82 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__82_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "twostep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__83 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__83_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__83_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__84 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__84_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__82_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__84_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__85 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__85_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__81_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__85_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__86 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__86_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__86_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__55_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__87 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__87_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__80_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__87_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__88 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__88_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__74_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__88_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__89 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__89_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__67_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__89_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__90 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__90_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__59_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__90_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__91 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__91_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__57_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__91_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__92 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__92_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tattaAdavu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__93 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__93_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tatta adavu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__94 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__94_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__94_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__95 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__95_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__93_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__95_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__96 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__96_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "nattaAdavu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__97 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__97_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "natta adavu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__98 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__98_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__98_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__99 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__99_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__97_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__99_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__100 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__100_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "kudittaMettu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__101 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__101_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "kuditta mettu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__102 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__102_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__102_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__103 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__103_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__101_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__103_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__104 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__104_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__70_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__105 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__105_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__70_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__105_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__106 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__106_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__71_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__107 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__107_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__71_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__107_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__108 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__108_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "karagattam"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__109 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__109_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__109_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__110 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__110_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__109_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__110_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__111 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__111_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__111_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__92_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__112 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__112_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__108_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__112_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__113 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__113_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__106_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__113_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__114 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__114_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__104_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__114_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__115 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__115_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__100_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__115_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__116 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__116_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__96_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__116_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__117 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__117_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "filmiBounce"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__118 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__118_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "filmi bounce"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__119 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__119_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__119_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__120 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__120_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__118_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__120_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__121 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__121_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "shimmy"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__122 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__122_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shimmies"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__123 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__123_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__123_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__124 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__124_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__122_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__124_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__125 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__125_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__122_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__125_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__126 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__126_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "kuthuStep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__127 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__127_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "kuthu step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__128 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__128_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "kuthu steps"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__129 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__129_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "koothu step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__130 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__130_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__130_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__131 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__131_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__129_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__131_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__132 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__132_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__128_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__132_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__133 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__133_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__127_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__133_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__134 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__134_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "massWalk"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__135 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__135_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mass walk"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__136 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__136_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__136_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__137 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__137_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__135_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__137_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__138 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__138_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dappan step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__139 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__139_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dappankuthu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__140 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__140_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__140_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__141 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__141_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__139_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__141_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__142 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__142_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__80_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__142_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__143 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__143_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "theenmaar"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__144 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__144_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__144_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__145 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__145_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__144_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__145_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__146 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__146_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__146_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__117_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__147 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__147_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__143_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__147_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__148 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__148_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__138_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__148_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__149 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__149_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__134_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__149_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__150 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__150_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__151_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__126_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__150_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__151 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__151_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__121_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__151_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__152 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__152_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doTaali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__153 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__153_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "do taali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__154 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__154_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "be taali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__155 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__155_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dotaali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__156 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__156_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__156_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__157 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__157_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__155_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__157_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__158 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__158_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__154_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__158_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__159 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__159_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__153_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__159_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__160 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__160_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tranTaali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__161 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__161_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tran taali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__162 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__162_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "trantaali"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__163 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__163_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__164_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__163_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__164 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__164_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__165_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__162_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__164_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__165 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__165_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__166_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__161_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__165_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__166 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__166_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__167_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dodhiyu"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__167 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__167_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__167_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__168 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__168_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__167_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__168_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__169 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__169_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "thumka"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__170 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__170_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__171_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "thumkas"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__171 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__171_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__171_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__172 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__172_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__173_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__170_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__172_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__173 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__173_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__174_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__170_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__173_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__174 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__174_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__175_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "jhatka"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__175 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__175_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__176_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jhatkas"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__176 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__176_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__177_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__176_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__177 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__177_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__178_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__175_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__177_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__178 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__178_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__175_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__178_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__179 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__179_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hookStep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__180 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__180_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hook step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__181 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__181_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__182_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hook steps"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__182 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__182_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__183_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__182_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__183 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__183_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__184_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__181_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__183_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__184 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__184_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__185_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__180_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__184_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__185 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__185_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__186_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__185_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__152_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__186 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__186_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__187_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__179_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__186_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__187 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__187_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__188_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__174_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__187_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__188 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__188_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__189_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__169_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__188_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__189 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__189_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__190_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__166_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__189_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__190 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__190_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__191_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__160_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__190_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__191 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__191_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__192_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dhamaal"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__192 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__192_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__193_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__192_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__193 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__193_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__194_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__192_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__193_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__194 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__194_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__195_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "chaal"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__195 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__195_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__196_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__195_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__196 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__196_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__197_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__195_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__196_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__197 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__197_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__198_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "luddi"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__198 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__198_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__199_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__198_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__199 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__199_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__200_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__198_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__199_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__200 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__200_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__201_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jhummar"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__201 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__201_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__202_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "jhumar"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__202 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__202_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__203_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__202_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__203 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__203_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__204_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__201_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__203_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__204 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__204_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__201_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__204_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__205 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__205_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sammi"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__206 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__206_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__207_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__206_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__207 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__207_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__208_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__206_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__207_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__208 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__208_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__209_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "gidda"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__209 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__209_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__210_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__209_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__210 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__210_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__211_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__209_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__210_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__211 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__211_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__212_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__211_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__191_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__212 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__212_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__213_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__208_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__212_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__213 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__213_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__214_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__205_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__213_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__214 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__214_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__215_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__200_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__214_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__215 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__215_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__216_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__197_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__215_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__216 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__216_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__217_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__194_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__216_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__217 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__217_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__218_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "stepTouch"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__218 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__218_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__219_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "steptouch"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__219 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__219_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__220_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "step touch"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__220 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__220_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__221_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "step touches"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__221 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__221_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__222_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__221_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__222 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__222_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__220_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__222_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__223 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__223_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__224_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__219_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__223_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__224 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__224_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__225_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__218_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__224_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__225 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__225_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__226_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grapevine"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__226 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__226_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__227_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grapevines"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__227 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__227_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__228_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grape vine"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__228 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__228_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__229_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__228_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__229 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__229_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__230_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__227_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__229_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__230 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__230_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__231_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__226_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__230_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__231 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__231_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__232_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__226_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__231_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__232 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__232_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__233_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "box"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__233 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__233_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__234_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "box step"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__234 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__234_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__235_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "box steps"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__235 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__235_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__236_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "boxstep"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__236 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__236_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__237_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__236_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__237 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__237_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__238_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__235_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__237_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__238 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__238_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__239_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__234_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__238_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__239 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__239_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__240_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__233_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__239_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__240 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__240_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__241_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "chasse"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__241 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__241_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__242_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 6, .m_data = "chassé"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__242 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__242_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__243_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "chasses"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__243 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__243_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__244_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__243_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__244 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__244_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__245_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__242_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__244_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__245 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__245_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__246_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__241_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__245_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__246 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__246_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__247_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__241_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__246_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__247 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__247_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__248_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pivot turn"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__248 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__248_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__249_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pivot turns"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__249 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__249_value;
static const lean_string_object lp_choreo_Choreo_stepPhrases___closed__250_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "chaine turn"};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__250 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__250_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__251_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__250_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__251 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__251_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__252_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__249_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__251_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__252 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__252_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__253_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__248_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__252_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__253 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__253_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__254_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__55_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__253_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__254 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__254_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__255_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__254_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__217_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__255 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__255_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__256_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__247_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__255_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__256 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__256_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__257_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__240_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__256_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__257 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__257_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__258_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__232_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__257_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__258 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__258_value;
static const lean_ctor_object lp_choreo_Choreo_stepPhrases___closed__259_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__225_value),((lean_object*)&lp_choreo_Choreo_stepPhrases___closed__258_value)}};
static const lean_object* lp_choreo_Choreo_stepPhrases___closed__259 = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__259_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_stepPhrases = (const lean_object*)&lp_choreo_Choreo_stepPhrases___closed__259_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps_pairs(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps_triples(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readSteps_spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_readSteps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_readSteps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_readGap_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_readGap_go___closed__0;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "metre"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__1 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__1_value;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "meter"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__2 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__2_value;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "metres"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__3 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__3_value;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "meters"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__4 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__4_value;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__5 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__5_value;
static lean_once_cell_t lp_choreo_Choreo_readGap_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_readGap_go___closed__6;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cm"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__7 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__7_value;
static const lean_string_object lp_choreo_Choreo_readGap_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "centim"};
static const lean_object* lp_choreo_Choreo_readGap_go___closed__8 = (const lean_object*)&lp_choreo_Choreo_readGap_go___closed__8_value;
static lean_once_cell_t lp_choreo_Choreo_readGap_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_readGap_go___closed__9;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readGap_go(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readGap(lean_object*);
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fancy"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__0_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "complicated"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__1_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "complex"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__2 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__2_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "intricate"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__3 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__3_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elaborate"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__4 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__4_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "advanced"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__5 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__5_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "spectacular"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__6 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__6_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dazzling"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__7 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__7_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "showstopper"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__8 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__8_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "showstopping"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__9 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__9_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "virtuosic"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__10 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__10_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ambitious"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__11 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__11_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "impressive"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__12 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__12_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "challenging"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__13 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__13_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "difficult"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__14 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__14_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "crazy"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__15 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__15_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insane"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__16 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__16_value;
static const lean_string_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wild"};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__17 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__17_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_genreOf___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__18 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__18_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__17_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__18_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__19 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__19_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__16_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__19_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__20 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__20_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__15_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__20_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__21 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__21_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__14_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__21_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__22 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__22_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__13_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__22_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__23 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__23_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__12_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__23_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__24 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__24_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__11_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__24_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__25 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__25_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__10_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__25_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__26 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__26_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__9_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__26_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__27 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__27_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__8_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__27_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__28 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__28_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__7_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__28_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__29 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__29_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__6_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__29_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__30 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__30_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__5_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__30_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__31 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__31_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__4_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__31_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__32 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__32_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__3_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__32_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__33 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__33_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__2_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__33_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__34 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__34_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__1_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__34_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__35 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__35_value;
static const lean_ctor_object lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__0_value),((lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__35_value)}};
static const lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__36 = (const lean_object*)&lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__36_value;
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_asksForFancy(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_asksForFancy___boxed(lean_object*);
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__0 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__1 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__2 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__3 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__3_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__3_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__4 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__1_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__5 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__1_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__5_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__6 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__6_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__7 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__7_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__7_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__8 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__9 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__9_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__63_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__9_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__10 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__7_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__11 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__11_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__12 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__64_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__13 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__13_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__14 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__14_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__15 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__15_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__15_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__16 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__12_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__16_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__17 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__17_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__18 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__62_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__18_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__19 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__19_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__19_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__20 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__7_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__21 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__21_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__22 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__64_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__22_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__23 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__23_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__62_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__24 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__24_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__25 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__63_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__25_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__26 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__26_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__26_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__27 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__27_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__27_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__28 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__28_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__7_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__28_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__29 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__29_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__30 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__30_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__31 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__31_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__31_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__32 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__32_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__62_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__32_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__33 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__33_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__33_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__34 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__34_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__34_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__35 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__35_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__36 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__37 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__37_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__37_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__38 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__38_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__64_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__38_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__39 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__39_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__39_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__40 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__40_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__40_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__41 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__41_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__41_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__42 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__42_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__42_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__43 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__43_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__44 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__44_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__44_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__45 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__45_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__45_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__46 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__46_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__46_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__47 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__47_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__47_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__48 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__48_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__64_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__48_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__49 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__49_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__31_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__50 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__50_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__50_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__51 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__51_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__51_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__52 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__52_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__52_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__53 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__53_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__12_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__44_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__54 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__54_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__54_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__55 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__55_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__64_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__55_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__56 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__56_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__11_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__56_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__57 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__57_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__57_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__58 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__58_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__58_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__59 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__59_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__59_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__60 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__60_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__63_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__61 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__61_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__61_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__62 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__62_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__62_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__63 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__63_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__62_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__3_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__64 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__64_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__0_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__64_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__65 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__65_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__65_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__66 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__66_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__66_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__67 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__67_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__67_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__68 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__68_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__7_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__68_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__69 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__69_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__69_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__70 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__70_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__61_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__71 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__71_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__71_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__72 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__72_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__62_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__72_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__73 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__73_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__73_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__74 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__74_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__36_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__74_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__75 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__75_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__8_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__75_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__76 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__76_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__11_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__76_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__77 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__77_value;
static const lean_ctor_object lp_choreo_Choreo_movesForGenre___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__10_value),((lean_object*)&lp_choreo_Choreo_movesForGenre___closed__77_value)}};
static const lean_object* lp_choreo_Choreo_movesForGenre___closed__78 = (const lean_object*)&lp_choreo_Choreo_movesForGenre___closed__78_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_movesForGenre(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_movesForGenre___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_parsePlan_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_parsePlan_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_parsePlan_spec__3(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_parsePlan_spec__3___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_parsePlan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "swoop"};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__0 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__0_value;
static const lean_string_object lp_choreo_Choreo_parsePlan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "curve"};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__1 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__1_value;
static const lean_string_object lp_choreo_Choreo_parsePlan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "curved"};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__2 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__2_value;
static const lean_string_object lp_choreo_Choreo_parsePlan___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "curving"};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__3 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__3_value;
static const lean_array_object lp_choreo_Choreo_parsePlan___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__4 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_parsePlan___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_scan___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_parsePlan___closed__5 = (const lean_object*)&lp_choreo_Choreo_parsePlan___closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_parsePlan(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_choreo_Choreo_Side_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_choreo_Choreo_Side_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_choreo_Choreo_Side_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___redArg(lean_object* v_left_22_){
_start:
{
lean_inc(v_left_22_);
return v_left_22_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___redArg___boxed(lean_object* v_left_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_choreo_Choreo_Side_left_elim___redArg(v_left_23_);
lean_dec(v_left_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_left_28_){
_start:
{
lean_inc(v_left_28_);
return v_left_28_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_left_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_left_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_choreo_Choreo_Side_left_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_left_32_);
lean_dec(v_left_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___redArg(lean_object* v_right_35_){
_start:
{
lean_inc(v_right_35_);
return v_right_35_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___redArg___boxed(lean_object* v_right_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_choreo_Choreo_Side_right_elim___redArg(v_right_36_);
lean_dec(v_right_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_right_41_){
_start:
{
lean_inc(v_right_41_);
return v_right_41_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Side_right_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_right_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_choreo_Choreo_Side_right_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_right_45_);
lean_dec(v_right_45_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqSide_beq(uint8_t v_x_48_, uint8_t v_y_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_50_ = lp_choreo_Choreo_Side_ctorIdx(v_x_48_);
v___x_51_ = lp_choreo_Choreo_Side_ctorIdx(v_y_49_);
v___x_52_ = lean_nat_dec_eq(v___x_50_, v___x_51_);
lean_dec(v___x_51_);
lean_dec(v___x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqSide_beq___boxed(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v_x_21__boxed_55_; uint8_t v_y_22__boxed_56_; uint8_t v_res_57_; lean_object* v_r_58_; 
v_x_21__boxed_55_ = lean_unbox(v_x_53_);
v_y_22__boxed_56_ = lean_unbox(v_y_54_);
v_res_57_ = lp_choreo_Choreo_instBEqSide_beq(v_x_21__boxed_55_, v_y_22__boxed_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
static uint8_t _init_lp_choreo_Choreo_instInhabitedSide_default(void){
_start:
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
static uint8_t _init_lp_choreo_Choreo_instInhabitedSide(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprSide_repr___closed__4(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_unsigned_to_nat(2u);
v___x_70_ = lean_nat_to_int(v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprSide_repr___closed__5(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(1u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprSide_repr(uint8_t v_x_73_, lean_object* v_prec_74_){
_start:
{
lean_object* v___y_76_; lean_object* v___y_83_; 
if (v_x_73_ == 0)
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = lean_unsigned_to_nat(1024u);
v___x_90_ = lean_nat_dec_le(v___x_89_, v_prec_74_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_76_ = v___x_91_;
goto v___jp_75_;
}
else
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_76_ = v___x_92_;
goto v___jp_75_;
}
}
else
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(1024u);
v___x_94_ = lean_nat_dec_le(v___x_93_, v_prec_74_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_83_ = v___x_95_;
goto v___jp_82_;
}
else
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_83_ = v___x_96_;
goto v___jp_82_;
}
}
v___jp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_77_ = ((lean_object*)(lp_choreo_Choreo_instReprSide_repr___closed__1));
lean_inc(v___y_76_);
v___x_78_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_78_, 0, v___y_76_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = 0;
v___x_80_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set_uint8(v___x_80_, sizeof(void*)*1, v___x_79_);
v___x_81_ = l_Repr_addAppParen(v___x_80_, v_prec_74_);
return v___x_81_;
}
v___jp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_84_ = ((lean_object*)(lp_choreo_Choreo_instReprSide_repr___closed__3));
lean_inc(v___y_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___y_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = 0;
v___x_87_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*1, v___x_86_);
v___x_88_ = l_Repr_addAppParen(v___x_87_, v_prec_74_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprSide_repr___boxed(lean_object* v_x_97_, lean_object* v_prec_98_){
_start:
{
uint8_t v_x_117__boxed_99_; lean_object* v_res_100_; 
v_x_117__boxed_99_ = lean_unbox(v_x_97_);
v_res_100_ = lp_choreo_Choreo_instReprSide_repr(v_x_117__boxed_99_, v_prec_98_);
lean_dec(v_prec_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorIdx(lean_object* v_x_103_){
_start:
{
switch(lean_obj_tag(v_x_103_))
{
case 0:
{
lean_object* v___x_104_; 
v___x_104_ = lean_unsigned_to_nat(0u);
return v___x_104_;
}
case 1:
{
lean_object* v___x_105_; 
v___x_105_ = lean_unsigned_to_nat(1u);
return v___x_105_;
}
case 2:
{
lean_object* v___x_106_; 
v___x_106_ = lean_unsigned_to_nat(2u);
return v___x_106_;
}
case 3:
{
lean_object* v___x_107_; 
v___x_107_ = lean_unsigned_to_nat(3u);
return v___x_107_;
}
case 4:
{
lean_object* v___x_108_; 
v___x_108_ = lean_unsigned_to_nat(4u);
return v___x_108_;
}
case 5:
{
lean_object* v___x_109_; 
v___x_109_ = lean_unsigned_to_nat(5u);
return v___x_109_;
}
case 6:
{
lean_object* v___x_110_; 
v___x_110_ = lean_unsigned_to_nat(6u);
return v___x_110_;
}
case 7:
{
lean_object* v___x_111_; 
v___x_111_ = lean_unsigned_to_nat(7u);
return v___x_111_;
}
case 8:
{
lean_object* v___x_112_; 
v___x_112_ = lean_unsigned_to_nat(8u);
return v___x_112_;
}
case 9:
{
lean_object* v___x_113_; 
v___x_113_ = lean_unsigned_to_nat(9u);
return v___x_113_;
}
default: 
{
lean_object* v___x_114_; 
v___x_114_ = lean_unsigned_to_nat(10u);
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorIdx___boxed(lean_object* v_x_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_choreo_Choreo_Shape_ctorIdx(v_x_115_);
lean_dec(v_x_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim___redArg(lean_object* v_t_117_, lean_object* v_k_118_){
_start:
{
if (lean_obj_tag(v_t_117_) == 0)
{
lean_object* v_cols_119_; lean_object* v_rows_120_; lean_object* v___x_121_; 
v_cols_119_ = lean_ctor_get(v_t_117_, 0);
lean_inc(v_cols_119_);
v_rows_120_ = lean_ctor_get(v_t_117_, 1);
lean_inc(v_rows_120_);
lean_dec_ref_known(v_t_117_, 2);
v___x_121_ = lean_apply_2(v_k_118_, v_cols_119_, v_rows_120_);
return v___x_121_;
}
else
{
lean_dec(v_t_117_);
return v_k_118_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim(lean_object* v_motive_122_, lean_object* v_ctorIdx_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_k_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_124_, v_k_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_ctorElim___boxed(lean_object* v_motive_128_, lean_object* v_ctorIdx_129_, lean_object* v_t_130_, lean_object* v_h_131_, lean_object* v_k_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = lp_choreo_Choreo_Shape_ctorElim(v_motive_128_, v_ctorIdx_129_, v_t_130_, v_h_131_, v_k_132_);
lean_dec(v_ctorIdx_129_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_grid_elim___redArg(lean_object* v_t_134_, lean_object* v_grid_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_134_, v_grid_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_grid_elim(lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_grid_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_138_, v_grid_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_line_elim___redArg(lean_object* v_t_142_, lean_object* v_line_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_142_, v_line_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_line_elim(lean_object* v_motive_145_, lean_object* v_t_146_, lean_object* v_h_147_, lean_object* v_line_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_146_, v_line_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diagonal_elim___redArg(lean_object* v_t_150_, lean_object* v_diagonal_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_150_, v_diagonal_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diagonal_elim(lean_object* v_motive_153_, lean_object* v_t_154_, lean_object* v_h_155_, lean_object* v_diagonal_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_154_, v_diagonal_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_circle_elim___redArg(lean_object* v_t_158_, lean_object* v_circle_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_158_, v_circle_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_circle_elim(lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_circle_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_162_, v_circle_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_vee_elim___redArg(lean_object* v_t_166_, lean_object* v_vee_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_166_, v_vee_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_vee_elim(lean_object* v_motive_169_, lean_object* v_t_170_, lean_object* v_h_171_, lean_object* v_vee_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_170_, v_vee_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diamond_elim___redArg(lean_object* v_t_174_, lean_object* v_diamond_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_174_, v_diamond_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_diamond_elim(lean_object* v_motive_177_, lean_object* v_t_178_, lean_object* v_h_179_, lean_object* v_diamond_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_178_, v_diamond_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_windows_elim___redArg(lean_object* v_t_182_, lean_object* v_windows_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_182_, v_windows_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_windows_elim(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_windows_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_186_, v_windows_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_rings_elim___redArg(lean_object* v_t_190_, lean_object* v_rings_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_190_, v_rings_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_rings_elim(lean_object* v_motive_193_, lean_object* v_t_194_, lean_object* v_h_195_, lean_object* v_rings_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_194_, v_rings_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_square_elim___redArg(lean_object* v_t_198_, lean_object* v_square_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_198_, v_square_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_square_elim(lean_object* v_motive_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_square_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_202_, v_square_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_cross_elim___redArg(lean_object* v_t_206_, lean_object* v_cross_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_206_, v_cross_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_cross_elim(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_cross_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_210_, v_cross_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_spiral_elim___redArg(lean_object* v_t_214_, lean_object* v_spiral_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_214_, v_spiral_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_spiral_elim(lean_object* v_motive_217_, lean_object* v_t_218_, lean_object* v_h_219_, lean_object* v_spiral_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lp_choreo_Choreo_Shape_ctorElim___redArg(v_t_218_, v_spiral_220_);
return v___x_221_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqShape_beq(lean_object* v_x_222_, lean_object* v_x_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v_decide_226_; 
v___x_224_ = lp_choreo_Choreo_Shape_ctorIdx(v_x_222_);
v___x_225_ = lp_choreo_Choreo_Shape_ctorIdx(v_x_223_);
v_decide_226_ = lean_nat_dec_eq(v___x_224_, v___x_225_);
lean_dec(v___x_225_);
lean_dec(v___x_224_);
if (v_decide_226_ == 0)
{
return v_decide_226_;
}
else
{
if (lean_obj_tag(v_x_222_) == 0)
{
lean_object* v_cols_227_; lean_object* v_rows_228_; lean_object* v_cols_229_; lean_object* v_rows_230_; uint8_t v___x_231_; 
v_cols_227_ = lean_ctor_get(v_x_222_, 0);
v_rows_228_ = lean_ctor_get(v_x_222_, 1);
v_cols_229_ = lean_ctor_get(v_x_223_, 0);
v_rows_230_ = lean_ctor_get(v_x_223_, 1);
v___x_231_ = lean_nat_dec_eq(v_cols_227_, v_cols_229_);
if (v___x_231_ == 0)
{
return v___x_231_;
}
else
{
uint8_t v___x_232_; 
v___x_232_ = lean_nat_dec_eq(v_rows_228_, v_rows_230_);
return v___x_232_;
}
}
else
{
return v_decide_226_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqShape_beq___boxed(lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
uint8_t v_res_235_; lean_object* v_r_236_; 
v_res_235_ = lp_choreo_Choreo_instBEqShape_beq(v_x_233_, v_x_234_);
lean_dec(v_x_234_);
lean_dec(v_x_233_);
v_r_236_ = lean_box(v_res_235_);
return v_r_236_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprShape_repr(lean_object* v_x_279_, lean_object* v_prec_280_){
_start:
{
lean_object* v___y_282_; lean_object* v___y_289_; lean_object* v___y_296_; lean_object* v___y_303_; lean_object* v___y_310_; lean_object* v___y_317_; lean_object* v___y_324_; lean_object* v___y_331_; lean_object* v___y_338_; lean_object* v___y_345_; 
switch(lean_obj_tag(v_x_279_))
{
case 0:
{
lean_object* v_cols_351_; lean_object* v_rows_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_377_; 
v_cols_351_ = lean_ctor_get(v_x_279_, 0);
v_rows_352_ = lean_ctor_get(v_x_279_, 1);
v_isSharedCheck_377_ = !lean_is_exclusive(v_x_279_);
if (v_isSharedCheck_377_ == 0)
{
v___x_354_ = v_x_279_;
v_isShared_355_ = v_isSharedCheck_377_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_rows_352_);
lean_inc(v_cols_351_);
lean_dec(v_x_279_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_377_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___y_357_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_unsigned_to_nat(1024u);
v___x_374_ = lean_nat_dec_le(v___x_373_, v_prec_280_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_357_ = v___x_375_;
goto v___jp_356_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_357_ = v___x_376_;
goto v___jp_356_;
}
v___jp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_358_ = lean_box(1);
v___x_359_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__22));
v___x_360_ = l_Nat_reprFast(v_cols_351_);
v___x_361_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 5);
lean_ctor_set(v___x_354_, 1, v___x_361_);
lean_ctor_set(v___x_354_, 0, v___x_359_);
v___x_363_ = v___x_354_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v___x_361_);
v___x_363_ = v_reuseFailAlloc_372_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v___x_358_);
v___x_365_ = l_Nat_reprFast(v_rows_352_);
v___x_366_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
v___x_367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_364_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
lean_inc(v___y_357_);
v___x_368_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_368_, 0, v___y_357_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = 0;
v___x_370_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_370_, 0, v___x_368_);
lean_ctor_set_uint8(v___x_370_, sizeof(void*)*1, v___x_369_);
v___x_371_ = l_Repr_addAppParen(v___x_370_, v_prec_280_);
return v___x_371_;
}
}
}
}
case 1:
{
lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(1024u);
v___x_379_ = lean_nat_dec_le(v___x_378_, v_prec_280_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; 
v___x_380_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_282_ = v___x_380_;
goto v___jp_281_;
}
else
{
lean_object* v___x_381_; 
v___x_381_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_282_ = v___x_381_;
goto v___jp_281_;
}
}
case 2:
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = lean_unsigned_to_nat(1024u);
v___x_383_ = lean_nat_dec_le(v___x_382_, v_prec_280_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; 
v___x_384_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_289_ = v___x_384_;
goto v___jp_288_;
}
else
{
lean_object* v___x_385_; 
v___x_385_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_289_ = v___x_385_;
goto v___jp_288_;
}
}
case 3:
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = lean_unsigned_to_nat(1024u);
v___x_387_ = lean_nat_dec_le(v___x_386_, v_prec_280_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
v___x_388_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_296_ = v___x_388_;
goto v___jp_295_;
}
else
{
lean_object* v___x_389_; 
v___x_389_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_296_ = v___x_389_;
goto v___jp_295_;
}
}
case 4:
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = lean_unsigned_to_nat(1024u);
v___x_391_ = lean_nat_dec_le(v___x_390_, v_prec_280_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_303_ = v___x_392_;
goto v___jp_302_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_303_ = v___x_393_;
goto v___jp_302_;
}
}
case 5:
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1024u);
v___x_395_ = lean_nat_dec_le(v___x_394_, v_prec_280_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
v___x_396_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_310_ = v___x_396_;
goto v___jp_309_;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_310_ = v___x_397_;
goto v___jp_309_;
}
}
case 6:
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = lean_unsigned_to_nat(1024u);
v___x_399_ = lean_nat_dec_le(v___x_398_, v_prec_280_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
v___x_400_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_317_ = v___x_400_;
goto v___jp_316_;
}
else
{
lean_object* v___x_401_; 
v___x_401_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_317_ = v___x_401_;
goto v___jp_316_;
}
}
case 7:
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(1024u);
v___x_403_ = lean_nat_dec_le(v___x_402_, v_prec_280_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; 
v___x_404_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_324_ = v___x_404_;
goto v___jp_323_;
}
else
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_324_ = v___x_405_;
goto v___jp_323_;
}
}
case 8:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(1024u);
v___x_407_ = lean_nat_dec_le(v___x_406_, v_prec_280_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; 
v___x_408_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_331_ = v___x_408_;
goto v___jp_330_;
}
else
{
lean_object* v___x_409_; 
v___x_409_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_331_ = v___x_409_;
goto v___jp_330_;
}
}
case 9:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(1024u);
v___x_411_ = lean_nat_dec_le(v___x_410_, v_prec_280_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; 
v___x_412_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_338_ = v___x_412_;
goto v___jp_337_;
}
else
{
lean_object* v___x_413_; 
v___x_413_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_338_ = v___x_413_;
goto v___jp_337_;
}
}
default: 
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(1024u);
v___x_415_ = lean_nat_dec_le(v___x_414_, v_prec_280_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
v___x_416_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_345_ = v___x_416_;
goto v___jp_344_;
}
else
{
lean_object* v___x_417_; 
v___x_417_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_345_ = v___x_417_;
goto v___jp_344_;
}
}
}
v___jp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_283_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__1));
lean_inc(v___y_282_);
v___x_284_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_284_, 0, v___y_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = 0;
v___x_286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set_uint8(v___x_286_, sizeof(void*)*1, v___x_285_);
v___x_287_ = l_Repr_addAppParen(v___x_286_, v_prec_280_);
return v___x_287_;
}
v___jp_288_:
{
lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_290_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__3));
lean_inc(v___y_289_);
v___x_291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_291_, 0, v___y_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = 0;
v___x_293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set_uint8(v___x_293_, sizeof(void*)*1, v___x_292_);
v___x_294_ = l_Repr_addAppParen(v___x_293_, v_prec_280_);
return v___x_294_;
}
v___jp_295_:
{
lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_297_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__5));
lean_inc(v___y_296_);
v___x_298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_298_, 0, v___y_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = 0;
v___x_300_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set_uint8(v___x_300_, sizeof(void*)*1, v___x_299_);
v___x_301_ = l_Repr_addAppParen(v___x_300_, v_prec_280_);
return v___x_301_;
}
v___jp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_304_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__7));
lean_inc(v___y_303_);
v___x_305_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_305_, 0, v___y_303_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = 0;
v___x_307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*1, v___x_306_);
v___x_308_ = l_Repr_addAppParen(v___x_307_, v_prec_280_);
return v___x_308_;
}
v___jp_309_:
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_311_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__9));
lean_inc(v___y_310_);
v___x_312_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_312_, 0, v___y_310_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = 0;
v___x_314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_314_, 0, v___x_312_);
lean_ctor_set_uint8(v___x_314_, sizeof(void*)*1, v___x_313_);
v___x_315_ = l_Repr_addAppParen(v___x_314_, v_prec_280_);
return v___x_315_;
}
v___jp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_318_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__11));
lean_inc(v___y_317_);
v___x_319_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_319_, 0, v___y_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = 0;
v___x_321_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*1, v___x_320_);
v___x_322_ = l_Repr_addAppParen(v___x_321_, v_prec_280_);
return v___x_322_;
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_325_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__13));
lean_inc(v___y_324_);
v___x_326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_326_, 0, v___y_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = 0;
v___x_328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*1, v___x_327_);
v___x_329_ = l_Repr_addAppParen(v___x_328_, v_prec_280_);
return v___x_329_;
}
v___jp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__15));
lean_inc(v___y_331_);
v___x_333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_333_, 0, v___y_331_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = 0;
v___x_335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*1, v___x_334_);
v___x_336_ = l_Repr_addAppParen(v___x_335_, v_prec_280_);
return v___x_336_;
}
v___jp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_339_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__17));
lean_inc(v___y_338_);
v___x_340_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_340_, 0, v___y_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = 0;
v___x_342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_342_, 0, v___x_340_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*1, v___x_341_);
v___x_343_ = l_Repr_addAppParen(v___x_342_, v_prec_280_);
return v___x_343_;
}
v___jp_344_:
{
lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_346_ = ((lean_object*)(lp_choreo_Choreo_instReprShape_repr___closed__19));
lean_inc(v___y_345_);
v___x_347_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_347_, 0, v___y_345_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = 0;
v___x_349_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set_uint8(v___x_349_, sizeof(void*)*1, v___x_348_);
v___x_350_ = l_Repr_addAppParen(v___x_349_, v_prec_280_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprShape_repr___boxed(lean_object* v_x_418_, lean_object* v_prec_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = lp_choreo_Choreo_instReprShape_repr(v_x_418_, v_prec_419_);
lean_dec(v_prec_419_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorIdx(lean_object* v_x_423_){
_start:
{
switch(lean_obj_tag(v_x_423_))
{
case 0:
{
lean_object* v___x_424_; 
v___x_424_ = lean_unsigned_to_nat(0u);
return v___x_424_;
}
case 1:
{
lean_object* v___x_425_; 
v___x_425_ = lean_unsigned_to_nat(1u);
return v___x_425_;
}
case 2:
{
lean_object* v___x_426_; 
v___x_426_ = lean_unsigned_to_nat(2u);
return v___x_426_;
}
case 3:
{
lean_object* v___x_427_; 
v___x_427_ = lean_unsigned_to_nat(3u);
return v___x_427_;
}
case 4:
{
lean_object* v___x_428_; 
v___x_428_ = lean_unsigned_to_nat(4u);
return v___x_428_;
}
case 5:
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(5u);
return v___x_429_;
}
case 6:
{
lean_object* v___x_430_; 
v___x_430_ = lean_unsigned_to_nat(6u);
return v___x_430_;
}
case 7:
{
lean_object* v___x_431_; 
v___x_431_ = lean_unsigned_to_nat(7u);
return v___x_431_;
}
case 8:
{
lean_object* v___x_432_; 
v___x_432_ = lean_unsigned_to_nat(8u);
return v___x_432_;
}
case 9:
{
lean_object* v___x_433_; 
v___x_433_ = lean_unsigned_to_nat(9u);
return v___x_433_;
}
case 10:
{
lean_object* v___x_434_; 
v___x_434_ = lean_unsigned_to_nat(10u);
return v___x_434_;
}
case 11:
{
lean_object* v___x_435_; 
v___x_435_ = lean_unsigned_to_nat(11u);
return v___x_435_;
}
default: 
{
lean_object* v___x_436_; 
v___x_436_ = lean_unsigned_to_nat(12u);
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorIdx___boxed(lean_object* v_x_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = lp_choreo_Choreo_Move_ctorIdx(v_x_437_);
lean_dec(v_x_437_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim___redArg(lean_object* v_t_439_, lean_object* v_k_440_){
_start:
{
switch(lean_obj_tag(v_t_439_))
{
case 0:
{
lean_object* v_shape_441_; lean_object* v___x_442_; 
v_shape_441_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_shape_441_);
lean_dec_ref_known(v_t_439_, 1);
v___x_442_ = lean_apply_1(v_k_440_, v_shape_441_);
return v___x_442_;
}
case 1:
{
lean_object* v_shape_443_; lean_object* v___x_444_; 
v_shape_443_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_shape_443_);
lean_dec_ref_known(v_t_439_, 1);
v___x_444_ = lean_apply_1(v_k_440_, v_shape_443_);
return v___x_444_;
}
case 3:
{
lean_object* v_quarters_445_; uint8_t v_ccw_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_quarters_445_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_quarters_445_);
v_ccw_446_ = lean_ctor_get_uint8(v_t_439_, sizeof(void*)*1);
lean_dec_ref_known(v_t_439_, 1);
v___x_447_ = lean_box(v_ccw_446_);
v___x_448_ = lean_apply_2(v_k_440_, v_quarters_445_, v___x_447_);
return v___x_448_;
}
case 4:
{
lean_object* v_quarters_449_; lean_object* v___x_450_; 
v_quarters_449_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_quarters_449_);
lean_dec_ref_known(v_t_439_, 1);
v___x_450_ = lean_apply_1(v_k_440_, v_quarters_449_);
return v___x_450_;
}
case 5:
{
lean_object* v_rounds_451_; lean_object* v___x_452_; 
v_rounds_451_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_rounds_451_);
lean_dec_ref_known(v_t_439_, 1);
v___x_452_ = lean_apply_1(v_k_440_, v_rounds_451_);
return v___x_452_;
}
case 11:
{
lean_object* v_shape_453_; lean_object* v___x_454_; 
v_shape_453_ = lean_ctor_get(v_t_439_, 0);
lean_inc(v_shape_453_);
lean_dec_ref_known(v_t_439_, 1);
v___x_454_ = lean_apply_1(v_k_440_, v_shape_453_);
return v___x_454_;
}
case 12:
{
uint8_t v_newLines_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_newLines_455_ = lean_ctor_get_uint8(v_t_439_, 0);
lean_dec_ref_known(v_t_439_, 0);
v___x_456_ = lean_box(v_newLines_455_);
v___x_457_ = lean_apply_1(v_k_440_, v___x_456_);
return v___x_457_;
}
default: 
{
lean_dec(v_t_439_);
return v_k_440_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim(lean_object* v_motive_458_, lean_object* v_ctorIdx_459_, lean_object* v_t_460_, lean_object* v_h_461_, lean_object* v_k_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_460_, v_k_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ctorElim___boxed(lean_object* v_motive_464_, lean_object* v_ctorIdx_465_, lean_object* v_t_466_, lean_object* v_h_467_, lean_object* v_k_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = lp_choreo_Choreo_Move_ctorElim(v_motive_464_, v_ctorIdx_465_, v_t_466_, v_h_467_, v_k_468_);
lean_dec(v_ctorIdx_465_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_enter_elim___redArg(lean_object* v_t_470_, lean_object* v_enter_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_470_, v_enter_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_enter_elim(lean_object* v_motive_473_, lean_object* v_t_474_, lean_object* v_h_475_, lean_object* v_enter_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_474_, v_enter_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_form_elim___redArg(lean_object* v_t_478_, lean_object* v_form_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_478_, v_form_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_form_elim(lean_object* v_motive_481_, lean_object* v_t_482_, lean_object* v_h_483_, lean_object* v_form_484_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_482_, v_form_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_flip_elim___redArg(lean_object* v_t_486_, lean_object* v_flip_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_486_, v_flip_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_flip_elim(lean_object* v_motive_489_, lean_object* v_t_490_, lean_object* v_h_491_, lean_object* v_flip_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_490_, v_flip_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_rotate_elim___redArg(lean_object* v_t_494_, lean_object* v_rotate_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_494_, v_rotate_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_rotate_elim(lean_object* v_motive_497_, lean_object* v_t_498_, lean_object* v_h_499_, lean_object* v_rotate_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_498_, v_rotate_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_counterRotate_elim___redArg(lean_object* v_t_502_, lean_object* v_counterRotate_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_502_, v_counterRotate_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_counterRotate_elim(lean_object* v_motive_505_, lean_object* v_t_506_, lean_object* v_h_507_, lean_object* v_counterRotate_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_506_, v_counterRotate_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_weave_elim___redArg(lean_object* v_t_510_, lean_object* v_weave_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_510_, v_weave_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_weave_elim(lean_object* v_motive_513_, lean_object* v_t_514_, lean_object* v_h_515_, lean_object* v_weave_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_514_, v_weave_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ripple_elim___redArg(lean_object* v_t_518_, lean_object* v_ripple_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_518_, v_ripple_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_ripple_elim(lean_object* v_motive_521_, lean_object* v_t_522_, lean_object* v_h_523_, lean_object* v_ripple_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_522_, v_ripple_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_burst_elim___redArg(lean_object* v_t_526_, lean_object* v_burst_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_526_, v_burst_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_burst_elim(lean_object* v_motive_529_, lean_object* v_t_530_, lean_object* v_h_531_, lean_object* v_burst_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_530_, v_burst_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_snake_elim___redArg(lean_object* v_t_534_, lean_object* v_snake_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_534_, v_snake_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_snake_elim(lean_object* v_motive_537_, lean_object* v_t_538_, lean_object* v_h_539_, lean_object* v_snake_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_538_, v_snake_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_zipper_elim___redArg(lean_object* v_t_542_, lean_object* v_zipper_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_542_, v_zipper_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_zipper_elim(lean_object* v_motive_545_, lean_object* v_t_546_, lean_object* v_h_547_, lean_object* v_zipper_548_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_546_, v_zipper_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_exchange_elim___redArg(lean_object* v_t_550_, lean_object* v_exchange_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_550_, v_exchange_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_exchange_elim(lean_object* v_motive_553_, lean_object* v_t_554_, lean_object* v_h_555_, lean_object* v_exchange_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_554_, v_exchange_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_join_elim___redArg(lean_object* v_t_558_, lean_object* v_join_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_558_, v_join_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_join_elim(lean_object* v_motive_561_, lean_object* v_t_562_, lean_object* v_h_563_, lean_object* v_join_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_562_, v_join_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_leave_elim___redArg(lean_object* v_t_566_, lean_object* v_leave_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_566_, v_leave_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Move_leave_elim(lean_object* v_motive_569_, lean_object* v_t_570_, lean_object* v_h_571_, lean_object* v_leave_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lp_choreo_Choreo_Move_ctorElim___redArg(v_t_570_, v_leave_572_);
return v___x_573_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_instBEqMove_beq(lean_object* v_x_574_, lean_object* v_x_575_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v_decide_578_; 
v___x_576_ = lp_choreo_Choreo_Move_ctorIdx(v_x_574_);
v___x_577_ = lp_choreo_Choreo_Move_ctorIdx(v_x_575_);
v_decide_578_ = lean_nat_dec_eq(v___x_576_, v___x_577_);
lean_dec(v___x_577_);
lean_dec(v___x_576_);
if (v_decide_578_ == 0)
{
return v_decide_578_;
}
else
{
switch(lean_obj_tag(v_x_574_))
{
case 0:
{
lean_object* v_shape_579_; lean_object* v_shape_580_; uint8_t v___x_581_; 
v_shape_579_ = lean_ctor_get(v_x_574_, 0);
v_shape_580_ = lean_ctor_get(v_x_575_, 0);
v___x_581_ = lp_choreo_Choreo_instBEqShape_beq(v_shape_579_, v_shape_580_);
return v___x_581_;
}
case 1:
{
lean_object* v_shape_582_; lean_object* v_shape_583_; uint8_t v___x_584_; 
v_shape_582_ = lean_ctor_get(v_x_574_, 0);
v_shape_583_ = lean_ctor_get(v_x_575_, 0);
v___x_584_ = lp_choreo_Choreo_instBEqShape_beq(v_shape_582_, v_shape_583_);
return v___x_584_;
}
case 3:
{
lean_object* v_quarters_585_; uint8_t v_ccw_586_; lean_object* v_quarters_587_; uint8_t v_ccw_588_; uint8_t v___x_589_; 
v_quarters_585_ = lean_ctor_get(v_x_574_, 0);
v_ccw_586_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*1);
v_quarters_587_ = lean_ctor_get(v_x_575_, 0);
v_ccw_588_ = lean_ctor_get_uint8(v_x_575_, sizeof(void*)*1);
v___x_589_ = lean_nat_dec_eq(v_quarters_585_, v_quarters_587_);
if (v___x_589_ == 0)
{
return v___x_589_;
}
else
{
if (v_ccw_588_ == 0)
{
if (v_ccw_586_ == 0)
{
return v___x_589_;
}
else
{
return v_ccw_588_;
}
}
else
{
return v_ccw_586_;
}
}
}
case 4:
{
lean_object* v_quarters_590_; lean_object* v_quarters_591_; uint8_t v___x_592_; 
v_quarters_590_ = lean_ctor_get(v_x_574_, 0);
v_quarters_591_ = lean_ctor_get(v_x_575_, 0);
v___x_592_ = lean_nat_dec_eq(v_quarters_590_, v_quarters_591_);
return v___x_592_;
}
case 5:
{
lean_object* v_rounds_593_; lean_object* v_rounds_594_; uint8_t v___x_595_; 
v_rounds_593_ = lean_ctor_get(v_x_574_, 0);
v_rounds_594_ = lean_ctor_get(v_x_575_, 0);
v___x_595_ = lean_nat_dec_eq(v_rounds_593_, v_rounds_594_);
return v___x_595_;
}
case 11:
{
lean_object* v_shape_596_; lean_object* v_shape_597_; uint8_t v___x_598_; 
v_shape_596_ = lean_ctor_get(v_x_574_, 0);
v_shape_597_ = lean_ctor_get(v_x_575_, 0);
v___x_598_ = lp_choreo_Choreo_instBEqShape_beq(v_shape_596_, v_shape_597_);
return v___x_598_;
}
case 12:
{
uint8_t v_newLines_599_; 
v_newLines_599_ = lean_ctor_get_uint8(v_x_575_, 0);
if (v_newLines_599_ == 0)
{
uint8_t v_newLines_600_; 
v_newLines_600_ = lean_ctor_get_uint8(v_x_574_, 0);
if (v_newLines_600_ == 0)
{
return v_decide_578_;
}
else
{
return v_newLines_599_;
}
}
else
{
uint8_t v_newLines_601_; 
v_newLines_601_ = lean_ctor_get_uint8(v_x_574_, 0);
return v_newLines_601_;
}
}
default: 
{
return v_decide_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instBEqMove_beq___boxed(lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
uint8_t v_res_604_; lean_object* v_r_605_; 
v_res_604_ = lp_choreo_Choreo_instBEqMove_beq(v_x_602_, v_x_603_);
lean_dec(v_x_603_);
lean_dec(v_x_602_);
v_r_605_ = lean_box(v_res_604_);
return v_r_605_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprMove_repr(lean_object* v_x_672_, lean_object* v_prec_673_){
_start:
{
lean_object* v___y_675_; lean_object* v___y_682_; lean_object* v___y_689_; lean_object* v___y_696_; lean_object* v___y_703_; lean_object* v___y_710_; 
switch(lean_obj_tag(v_x_672_))
{
case 0:
{
lean_object* v_shape_716_; lean_object* v___y_718_; lean_object* v___x_727_; uint8_t v___x_728_; 
v_shape_716_ = lean_ctor_get(v_x_672_, 0);
lean_inc(v_shape_716_);
lean_dec_ref_known(v_x_672_, 1);
v___x_727_ = lean_unsigned_to_nat(1024u);
v___x_728_ = lean_nat_dec_le(v___x_727_, v_prec_673_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
v___x_729_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_718_ = v___x_729_;
goto v___jp_717_;
}
else
{
lean_object* v___x_730_; 
v___x_730_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_718_ = v___x_730_;
goto v___jp_717_;
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_719_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__14));
v___x_720_ = lean_unsigned_to_nat(1024u);
v___x_721_ = lp_choreo_Choreo_instReprShape_repr(v_shape_716_, v___x_720_);
v___x_722_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_719_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
lean_inc(v___y_718_);
v___x_723_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_723_, 0, v___y_718_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = 0;
v___x_725_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set_uint8(v___x_725_, sizeof(void*)*1, v___x_724_);
v___x_726_ = l_Repr_addAppParen(v___x_725_, v_prec_673_);
return v___x_726_;
}
}
case 1:
{
lean_object* v_shape_731_; lean_object* v___y_733_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_shape_731_ = lean_ctor_get(v_x_672_, 0);
lean_inc(v_shape_731_);
lean_dec_ref_known(v_x_672_, 1);
v___x_742_ = lean_unsigned_to_nat(1024u);
v___x_743_ = lean_nat_dec_le(v___x_742_, v_prec_673_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; 
v___x_744_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_733_ = v___x_744_;
goto v___jp_732_;
}
else
{
lean_object* v___x_745_; 
v___x_745_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_733_ = v___x_745_;
goto v___jp_732_;
}
v___jp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_734_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__17));
v___x_735_ = lean_unsigned_to_nat(1024u);
v___x_736_ = lp_choreo_Choreo_instReprShape_repr(v_shape_731_, v___x_735_);
v___x_737_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_734_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
lean_inc(v___y_733_);
v___x_738_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_738_, 0, v___y_733_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = 0;
v___x_740_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set_uint8(v___x_740_, sizeof(void*)*1, v___x_739_);
v___x_741_ = l_Repr_addAppParen(v___x_740_, v_prec_673_);
return v___x_741_;
}
}
case 2:
{
lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_746_ = lean_unsigned_to_nat(1024u);
v___x_747_ = lean_nat_dec_le(v___x_746_, v_prec_673_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; 
v___x_748_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_675_ = v___x_748_;
goto v___jp_674_;
}
else
{
lean_object* v___x_749_; 
v___x_749_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_675_ = v___x_749_;
goto v___jp_674_;
}
}
case 3:
{
lean_object* v_quarters_750_; uint8_t v_ccw_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_775_; 
v_quarters_750_ = lean_ctor_get(v_x_672_, 0);
v_ccw_751_ = lean_ctor_get_uint8(v_x_672_, sizeof(void*)*1);
v_isSharedCheck_775_ = !lean_is_exclusive(v_x_672_);
if (v_isSharedCheck_775_ == 0)
{
v___x_753_ = v_x_672_;
v_isShared_754_ = v_isSharedCheck_775_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_quarters_750_);
lean_dec(v_x_672_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_775_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___y_756_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_771_ = lean_unsigned_to_nat(1024u);
v___x_772_ = lean_nat_dec_le(v___x_771_, v_prec_673_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; 
v___x_773_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_756_ = v___x_773_;
goto v___jp_755_;
}
else
{
lean_object* v___x_774_; 
v___x_774_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_756_ = v___x_774_;
goto v___jp_755_;
}
v___jp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; lean_object* v___x_768_; 
v___x_757_ = lean_box(1);
v___x_758_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__20));
v___x_759_ = l_Nat_reprFast(v_quarters_750_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
v___x_761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_758_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_757_);
v___x_763_ = l_Bool_repr___redArg(v_ccw_751_);
v___x_764_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
lean_inc(v___y_756_);
v___x_765_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_765_, 0, v___y_756_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v___x_766_ = 0;
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 6);
lean_ctor_set(v___x_753_, 0, v___x_765_);
v___x_768_ = v___x_753_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_765_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; 
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*1, v___x_766_);
v___x_769_ = l_Repr_addAppParen(v___x_768_, v_prec_673_);
return v___x_769_;
}
}
}
}
case 4:
{
lean_object* v_quarters_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_796_; 
v_quarters_776_ = lean_ctor_get(v_x_672_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v_x_672_);
if (v_isSharedCheck_796_ == 0)
{
v___x_778_ = v_x_672_;
v_isShared_779_ = v_isSharedCheck_796_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_quarters_776_);
lean_dec(v_x_672_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_796_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___y_781_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = lean_unsigned_to_nat(1024u);
v___x_793_ = lean_nat_dec_le(v___x_792_, v_prec_673_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; 
v___x_794_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_781_ = v___x_794_;
goto v___jp_780_;
}
else
{
lean_object* v___x_795_; 
v___x_795_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_781_ = v___x_795_;
goto v___jp_780_;
}
v___jp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_782_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__23));
v___x_783_ = l_Nat_reprFast(v_quarters_776_);
if (v_isShared_779_ == 0)
{
lean_ctor_set_tag(v___x_778_, 3);
lean_ctor_set(v___x_778_, 0, v___x_783_);
v___x_785_ = v___x_778_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_791_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_786_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_782_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
lean_inc(v___y_781_);
v___x_787_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_787_, 0, v___y_781_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = 0;
v___x_789_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_789_, 0, v___x_787_);
lean_ctor_set_uint8(v___x_789_, sizeof(void*)*1, v___x_788_);
v___x_790_ = l_Repr_addAppParen(v___x_789_, v_prec_673_);
return v___x_790_;
}
}
}
}
case 5:
{
lean_object* v_rounds_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_817_; 
v_rounds_797_ = lean_ctor_get(v_x_672_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v_x_672_);
if (v_isSharedCheck_817_ == 0)
{
v___x_799_ = v_x_672_;
v_isShared_800_ = v_isSharedCheck_817_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_rounds_797_);
lean_dec(v_x_672_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_817_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___y_802_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_unsigned_to_nat(1024u);
v___x_814_ = lean_nat_dec_le(v___x_813_, v_prec_673_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
v___x_815_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_802_ = v___x_815_;
goto v___jp_801_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_802_ = v___x_816_;
goto v___jp_801_;
}
v___jp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_806_; 
v___x_803_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__26));
v___x_804_ = l_Nat_reprFast(v_rounds_797_);
if (v_isShared_800_ == 0)
{
lean_ctor_set_tag(v___x_799_, 3);
lean_ctor_set(v___x_799_, 0, v___x_804_);
v___x_806_ = v___x_799_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_804_);
v___x_806_ = v_reuseFailAlloc_812_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_807_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_803_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
lean_inc(v___y_802_);
v___x_808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_808_, 0, v___y_802_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = 0;
v___x_810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*1, v___x_809_);
v___x_811_ = l_Repr_addAppParen(v___x_810_, v_prec_673_);
return v___x_811_;
}
}
}
}
case 6:
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_unsigned_to_nat(1024u);
v___x_819_ = lean_nat_dec_le(v___x_818_, v_prec_673_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
v___x_820_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_682_ = v___x_820_;
goto v___jp_681_;
}
else
{
lean_object* v___x_821_; 
v___x_821_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_682_ = v___x_821_;
goto v___jp_681_;
}
}
case 7:
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_unsigned_to_nat(1024u);
v___x_823_ = lean_nat_dec_le(v___x_822_, v_prec_673_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_689_ = v___x_824_;
goto v___jp_688_;
}
else
{
lean_object* v___x_825_; 
v___x_825_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_689_ = v___x_825_;
goto v___jp_688_;
}
}
case 8:
{
lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(1024u);
v___x_827_ = lean_nat_dec_le(v___x_826_, v_prec_673_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_696_ = v___x_828_;
goto v___jp_695_;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_696_ = v___x_829_;
goto v___jp_695_;
}
}
case 9:
{
lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_830_ = lean_unsigned_to_nat(1024u);
v___x_831_ = lean_nat_dec_le(v___x_830_, v_prec_673_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; 
v___x_832_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_703_ = v___x_832_;
goto v___jp_702_;
}
else
{
lean_object* v___x_833_; 
v___x_833_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_703_ = v___x_833_;
goto v___jp_702_;
}
}
case 10:
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = lean_unsigned_to_nat(1024u);
v___x_835_ = lean_nat_dec_le(v___x_834_, v_prec_673_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; 
v___x_836_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_710_ = v___x_836_;
goto v___jp_709_;
}
else
{
lean_object* v___x_837_; 
v___x_837_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_710_ = v___x_837_;
goto v___jp_709_;
}
}
case 11:
{
lean_object* v_shape_838_; lean_object* v___y_840_; lean_object* v___x_849_; uint8_t v___x_850_; 
v_shape_838_ = lean_ctor_get(v_x_672_, 0);
lean_inc(v_shape_838_);
lean_dec_ref_known(v_x_672_, 1);
v___x_849_ = lean_unsigned_to_nat(1024u);
v___x_850_ = lean_nat_dec_le(v___x_849_, v_prec_673_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
v___x_851_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_840_ = v___x_851_;
goto v___jp_839_;
}
else
{
lean_object* v___x_852_; 
v___x_852_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_840_ = v___x_852_;
goto v___jp_839_;
}
v___jp_839_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_841_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__29));
v___x_842_ = lean_unsigned_to_nat(1024u);
v___x_843_ = lp_choreo_Choreo_instReprShape_repr(v_shape_838_, v___x_842_);
v___x_844_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_841_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
lean_inc(v___y_840_);
v___x_845_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_845_, 0, v___y_840_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v___x_846_ = 0;
v___x_847_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_847_, 0, v___x_845_);
lean_ctor_set_uint8(v___x_847_, sizeof(void*)*1, v___x_846_);
v___x_848_ = l_Repr_addAppParen(v___x_847_, v_prec_673_);
return v___x_848_;
}
}
default: 
{
uint8_t v_newLines_853_; lean_object* v___y_855_; lean_object* v___x_863_; uint8_t v___x_864_; 
v_newLines_853_ = lean_ctor_get_uint8(v_x_672_, 0);
lean_dec_ref_known(v_x_672_, 0);
v___x_863_ = lean_unsigned_to_nat(1024u);
v___x_864_ = lean_nat_dec_le(v___x_863_, v_prec_673_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
v___x_865_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__4, &lp_choreo_Choreo_instReprSide_repr___closed__4_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__4);
v___y_855_ = v___x_865_;
goto v___jp_854_;
}
else
{
lean_object* v___x_866_; 
v___x_866_ = lean_obj_once(&lp_choreo_Choreo_instReprSide_repr___closed__5, &lp_choreo_Choreo_instReprSide_repr___closed__5_once, _init_lp_choreo_Choreo_instReprSide_repr___closed__5);
v___y_855_ = v___x_866_;
goto v___jp_854_;
}
v___jp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_856_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__32));
v___x_857_ = l_Bool_repr___redArg(v_newLines_853_);
v___x_858_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
lean_inc(v___y_855_);
v___x_859_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_859_, 0, v___y_855_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v___x_860_ = 0;
v___x_861_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set_uint8(v___x_861_, sizeof(void*)*1, v___x_860_);
v___x_862_ = l_Repr_addAppParen(v___x_861_, v_prec_673_);
return v___x_862_;
}
}
}
v___jp_674_:
{
lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_676_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__1));
lean_inc(v___y_675_);
v___x_677_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_677_, 0, v___y_675_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = 0;
v___x_679_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_679_, 0, v___x_677_);
lean_ctor_set_uint8(v___x_679_, sizeof(void*)*1, v___x_678_);
v___x_680_ = l_Repr_addAppParen(v___x_679_, v_prec_673_);
return v___x_680_;
}
v___jp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_683_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__3));
lean_inc(v___y_682_);
v___x_684_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_684_, 0, v___y_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = 0;
v___x_686_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*1, v___x_685_);
v___x_687_ = l_Repr_addAppParen(v___x_686_, v_prec_673_);
return v___x_687_;
}
v___jp_688_:
{
lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_690_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__5));
lean_inc(v___y_689_);
v___x_691_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_691_, 0, v___y_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = 0;
v___x_693_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*1, v___x_692_);
v___x_694_ = l_Repr_addAppParen(v___x_693_, v_prec_673_);
return v___x_694_;
}
v___jp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_697_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__7));
lean_inc(v___y_696_);
v___x_698_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_698_, 0, v___y_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = 0;
v___x_700_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set_uint8(v___x_700_, sizeof(void*)*1, v___x_699_);
v___x_701_ = l_Repr_addAppParen(v___x_700_, v_prec_673_);
return v___x_701_;
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_704_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__9));
lean_inc(v___y_703_);
v___x_705_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_705_, 0, v___y_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = 0;
v___x_707_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_707_, 0, v___x_705_);
lean_ctor_set_uint8(v___x_707_, sizeof(void*)*1, v___x_706_);
v___x_708_ = l_Repr_addAppParen(v___x_707_, v_prec_673_);
return v___x_708_;
}
v___jp_709_:
{
lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_711_ = ((lean_object*)(lp_choreo_Choreo_instReprMove_repr___closed__11));
lean_inc(v___y_710_);
v___x_712_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_712_, 0, v___y_710_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = 0;
v___x_714_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*1, v___x_713_);
v___x_715_ = l_Repr_addAppParen(v___x_714_, v_prec_673_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprMove_repr___boxed(lean_object* v_x_867_, lean_object* v_prec_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = lp_choreo_Choreo_instReprMove_repr(v_x_867_, v_prec_868_);
lean_dec(v_prec_868_);
return v_res_869_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPlan_default___closed__1(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = lean_unsigned_to_nat(600u);
v___x_874_ = lean_nat_to_int(v___x_873_);
return v___x_874_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPlan_default___closed__2(void){
_start:
{
uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_875_ = 0;
v___x_876_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPlan_default___closed__1, &lp_choreo_Choreo_instInhabitedPlan_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedPlan_default___closed__1);
v___x_877_ = lean_box(0);
v___x_878_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedPlan_default___closed__0));
v___x_879_ = lean_unsigned_to_nat(0u);
v___x_880_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_880_, 0, v___x_879_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
lean_ctor_set(v___x_880_, 2, v___x_878_);
lean_ctor_set(v___x_880_, 3, v___x_879_);
lean_ctor_set(v___x_880_, 4, v___x_879_);
lean_ctor_set(v___x_880_, 5, v___x_879_);
lean_ctor_set(v___x_880_, 6, v___x_877_);
lean_ctor_set(v___x_880_, 7, v___x_877_);
lean_ctor_set(v___x_880_, 8, v___x_876_);
lean_ctor_set(v___x_880_, 9, v___x_877_);
lean_ctor_set(v___x_880_, 10, v___x_879_);
lean_ctor_set_uint8(v___x_880_, sizeof(void*)*11, v___x_875_);
return v___x_880_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPlan_default(void){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPlan_default___closed__2, &lp_choreo_Choreo_instInhabitedPlan_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedPlan_default___closed__2);
return v___x_881_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPlan(void){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lp_choreo_Choreo_instInhabitedPlan_default;
return v___x_882_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0___lam__0(lean_object* v___y_883_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = lp_choreo_Choreo_instReprMove_repr(v___y_883_, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_886_, lean_object* v_x_887_, lean_object* v_x_888_){
_start:
{
if (lean_obj_tag(v_x_888_) == 0)
{
lean_dec(v_x_886_);
return v_x_887_;
}
else
{
lean_object* v_head_889_; lean_object* v_tail_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_901_; 
v_head_889_ = lean_ctor_get(v_x_888_, 0);
v_tail_890_ = lean_ctor_get(v_x_888_, 1);
v_isSharedCheck_901_ = !lean_is_exclusive(v_x_888_);
if (v_isSharedCheck_901_ == 0)
{
v___x_892_ = v_x_888_;
v_isShared_893_ = v_isSharedCheck_901_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_tail_890_);
lean_inc(v_head_889_);
lean_dec(v_x_888_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_901_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
lean_inc(v_x_886_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 5);
lean_ctor_set(v___x_892_, 1, v_x_886_);
lean_ctor_set(v___x_892_, 0, v_x_887_);
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_x_887_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_x_886_);
v___x_895_ = v_reuseFailAlloc_900_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_897_ = lp_choreo_Choreo_instReprMove_repr(v_head_889_, v___x_896_);
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_895_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v_x_887_ = v___x_898_;
v_x_888_ = v_tail_890_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1(lean_object* v_x_902_, lean_object* v_x_903_, lean_object* v_x_904_){
_start:
{
if (lean_obj_tag(v_x_904_) == 0)
{
lean_dec(v_x_902_);
return v_x_903_;
}
else
{
lean_object* v_head_905_; lean_object* v_tail_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_917_; 
v_head_905_ = lean_ctor_get(v_x_904_, 0);
v_tail_906_ = lean_ctor_get(v_x_904_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v_x_904_);
if (v_isSharedCheck_917_ == 0)
{
v___x_908_ = v_x_904_;
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_tail_906_);
lean_inc(v_head_905_);
lean_dec(v_x_904_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
lean_inc(v_x_902_);
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 5);
lean_ctor_set(v___x_908_, 1, v_x_902_);
lean_ctor_set(v___x_908_, 0, v_x_903_);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_x_903_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_x_902_);
v___x_911_ = v_reuseFailAlloc_916_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lp_choreo_Choreo_instReprMove_repr(v_head_905_, v___x_912_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_911_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lp_choreo_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1_spec__2(v_x_902_, v___x_914_, v_tail_906_);
return v___x_915_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0(lean_object* v_x_918_, lean_object* v_x_919_){
_start:
{
if (lean_obj_tag(v_x_918_) == 0)
{
lean_object* v___x_920_; 
lean_dec(v_x_919_);
v___x_920_ = lean_box(0);
return v___x_920_;
}
else
{
lean_object* v_tail_921_; 
v_tail_921_ = lean_ctor_get(v_x_918_, 1);
if (lean_obj_tag(v_tail_921_) == 0)
{
lean_object* v_head_922_; lean_object* v___x_923_; 
lean_dec(v_x_919_);
v_head_922_ = lean_ctor_get(v_x_918_, 0);
lean_inc(v_head_922_);
lean_dec_ref_known(v_x_918_, 2);
v___x_923_ = lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0___lam__0(v_head_922_);
return v___x_923_;
}
else
{
lean_object* v_head_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_inc(v_tail_921_);
v_head_924_ = lean_ctor_get(v_x_918_, 0);
lean_inc(v_head_924_);
lean_dec_ref_known(v_x_918_, 2);
v___x_925_ = lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0___lam__0(v_head_924_);
v___x_926_ = lp_choreo_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0_spec__1(v_x_919_, v___x_925_, v_tail_921_);
return v___x_926_;
}
}
}
}
static lean_object* _init_lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__2));
v___x_939_ = lean_string_length(v___x_938_);
return v___x_939_;
}
}
static lean_object* _init_lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_obj_once(&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7, &lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7_once, _init_lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__7);
v___x_941_ = lean_nat_to_int(v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg(lean_object* v_a_946_){
_start:
{
if (lean_obj_tag(v_a_946_) == 0)
{
lean_object* v___x_947_; 
v___x_947_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__1));
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; uint8_t v___x_956_; lean_object* v___x_957_; 
v___x_948_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__5));
v___x_949_ = lp_choreo_Std_Format_joinSep___at___00List_repr___at___00Choreo_instReprPlan_repr_spec__0_spec__0(v_a_946_, v___x_948_);
v___x_950_ = lean_obj_once(&lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8, &lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8_once, _init_lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__8);
v___x_951_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__9));
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
lean_ctor_set(v___x_952_, 1, v___x_949_);
v___x_953_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__10));
v___x_954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_950_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = 0;
v___x_957_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*1, v___x_956_);
return v___x_957_;
}
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_unsigned_to_nat(11u);
v___x_972_ = lean_nat_to_int(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = lean_unsigned_to_nat(7u);
v___x_977_ = lean_nat_to_int(v___x_976_);
return v___x_977_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(9u);
v___x_982_ = lean_nat_to_int(v___x_981_);
return v___x_982_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = lean_unsigned_to_nat(5u);
v___x_987_ = lean_nat_to_int(v___x_986_);
return v___x_987_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(8u);
v___x_992_ = lean_nat_to_int(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__0));
v___x_1016_ = lean_string_length(v___x_1015_);
return v___x_1016_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__35);
v___x_1018_ = lean_nat_to_int(v___x_1017_);
return v___x_1018_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_unsigned_to_nat(0u);
v___x_1024_ = lean_nat_to_int(v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr___redArg(lean_object* v_x_1025_){
_start:
{
lean_object* v_seconds_1026_; lean_object* v_bpm_1027_; lean_object* v_genre_1028_; lean_object* v_n_1029_; lean_object* v_left_1030_; lean_object* v_right_1031_; lean_object* v_moves_1032_; lean_object* v_steps_1033_; lean_object* v_gap_1034_; lean_object* v_extra_1035_; uint8_t v_sweep_1036_; lean_object* v_waiting_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___y_1128_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v_seconds_1026_ = lean_ctor_get(v_x_1025_, 0);
lean_inc(v_seconds_1026_);
v_bpm_1027_ = lean_ctor_get(v_x_1025_, 1);
lean_inc(v_bpm_1027_);
v_genre_1028_ = lean_ctor_get(v_x_1025_, 2);
lean_inc_ref(v_genre_1028_);
v_n_1029_ = lean_ctor_get(v_x_1025_, 3);
lean_inc(v_n_1029_);
v_left_1030_ = lean_ctor_get(v_x_1025_, 4);
lean_inc(v_left_1030_);
v_right_1031_ = lean_ctor_get(v_x_1025_, 5);
lean_inc(v_right_1031_);
v_moves_1032_ = lean_ctor_get(v_x_1025_, 6);
lean_inc(v_moves_1032_);
v_steps_1033_ = lean_ctor_get(v_x_1025_, 7);
lean_inc(v_steps_1033_);
v_gap_1034_ = lean_ctor_get(v_x_1025_, 8);
lean_inc(v_gap_1034_);
v_extra_1035_ = lean_ctor_get(v_x_1025_, 9);
lean_inc(v_extra_1035_);
v_sweep_1036_ = lean_ctor_get_uint8(v_x_1025_, sizeof(void*)*11);
v_waiting_1037_ = lean_ctor_get(v_x_1025_, 10);
lean_inc(v_waiting_1037_);
lean_dec_ref(v_x_1025_);
v___x_1038_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__5));
v___x_1039_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__6));
v___x_1040_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__7);
v___x_1041_ = l_Nat_reprFast(v_seconds_1026_);
v___x_1042_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1040_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = 0;
v___x_1045_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set_uint8(v___x_1045_, sizeof(void*)*1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1039_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg___closed__4));
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_box(1);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__9));
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___x_1038_);
v___x_1054_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__10);
v___x_1055_ = l_Nat_reprFast(v_bpm_1027_);
v___x_1056_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1054_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set_uint8(v___x_1058_, sizeof(void*)*1, v___x_1044_);
v___x_1059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1053_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1047_);
v___x_1061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
lean_ctor_set(v___x_1061_, 1, v___x_1049_);
v___x_1062_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__12));
v___x_1063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v___x_1038_);
v___x_1065_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__13);
v___x_1066_ = l_String_quote(v_genre_1028_);
v___x_1067_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1065_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1044_);
v___x_1070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1064_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set(v___x_1071_, 1, v___x_1047_);
v___x_1072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___x_1049_);
v___x_1073_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__15));
v___x_1074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1038_);
v___x_1076_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__16);
v___x_1077_ = l_Nat_reprFast(v_n_1029_);
v___x_1078_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
v___x_1079_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1076_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*1, v___x_1044_);
v___x_1081_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1075_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v___x_1047_);
v___x_1083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v___x_1049_);
v___x_1084_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__18));
v___x_1085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___x_1038_);
v___x_1087_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__19);
v___x_1088_ = l_Nat_reprFast(v_left_1030_);
v___x_1089_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set_uint8(v___x_1091_, sizeof(void*)*1, v___x_1044_);
v___x_1092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1086_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
lean_ctor_set(v___x_1093_, 1, v___x_1047_);
v___x_1094_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v___x_1049_);
v___x_1095_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__21));
v___x_1096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1038_);
v___x_1098_ = l_Nat_reprFast(v_right_1031_);
v___x_1099_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
v___x_1100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1065_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1, v___x_1044_);
v___x_1102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1097_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
lean_ctor_set(v___x_1103_, 1, v___x_1047_);
v___x_1104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v___x_1049_);
v___x_1105_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__23));
v___x_1106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v___x_1038_);
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg(v_moves_1032_);
v___x_1110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1065_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
lean_ctor_set_uint8(v___x_1111_, sizeof(void*)*1, v___x_1044_);
v___x_1112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1107_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v___x_1047_);
v___x_1114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1049_);
v___x_1115_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__25));
v___x_1116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v___x_1038_);
v___x_1118_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_steps_1033_);
v___x_1119_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1065_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set_uint8(v___x_1120_, sizeof(void*)*1, v___x_1044_);
v___x_1121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1117_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
lean_ctor_set(v___x_1122_, 1, v___x_1047_);
v___x_1123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
lean_ctor_set(v___x_1123_, 1, v___x_1049_);
v___x_1124_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__27));
v___x_1125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v___x_1038_);
v___x_1167_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__39);
v___x_1168_ = lean_int_dec_lt(v_gap_1034_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = l_Int_repr(v_gap_1034_);
lean_dec(v_gap_1034_);
v___x_1170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
v___y_1128_ = v___x_1170_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = l_Int_repr(v_gap_1034_);
lean_dec(v_gap_1034_);
v___x_1172_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
v___x_1173_ = l_Repr_addAppParen(v___x_1172_, v___x_1108_);
v___y_1128_ = v___x_1173_;
goto v___jp_1127_;
}
v___jp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1054_);
lean_ctor_set(v___x_1129_, 1, v___y_1128_);
v___x_1130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set_uint8(v___x_1130_, sizeof(void*)*1, v___x_1044_);
v___x_1131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1126_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1047_);
v___x_1133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
lean_ctor_set(v___x_1133_, 1, v___x_1049_);
v___x_1134_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__29));
v___x_1135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
lean_ctor_set(v___x_1136_, 1, v___x_1038_);
v___x_1137_ = lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg(v_extra_1035_);
v___x_1138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1065_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*1, v___x_1044_);
v___x_1140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1136_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v___x_1047_);
v___x_1142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set(v___x_1142_, 1, v___x_1049_);
v___x_1143_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__31));
v___x_1144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set(v___x_1145_, 1, v___x_1038_);
v___x_1146_ = l_Bool_repr___redArg(v_sweep_1036_);
v___x_1147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1065_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*1, v___x_1044_);
v___x_1149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1145_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v___x_1047_);
v___x_1151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
lean_ctor_set(v___x_1151_, 1, v___x_1049_);
v___x_1152_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__33));
v___x_1153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
lean_ctor_set(v___x_1154_, 1, v___x_1038_);
v___x_1155_ = l_Nat_reprFast(v_waiting_1037_);
v___x_1156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
v___x_1157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1040_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
lean_ctor_set_uint8(v___x_1158_, sizeof(void*)*1, v___x_1044_);
v___x_1159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1154_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = lean_obj_once(&lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36, &lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36_once, _init_lp_choreo_Choreo_instReprPlan_repr___redArg___closed__36);
v___x_1161_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__37));
v___x_1162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
lean_ctor_set(v___x_1162_, 1, v___x_1159_);
v___x_1163_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__38));
v___x_1164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
v___x_1165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1160_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
lean_ctor_set_uint8(v___x_1166_, sizeof(void*)*1, v___x_1044_);
return v___x_1166_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr(lean_object* v_x_1174_, lean_object* v_prec_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = lp_choreo_Choreo_instReprPlan_repr___redArg(v_x_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPlan_repr___boxed(lean_object* v_x_1177_, lean_object* v_prec_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = lp_choreo_Choreo_instReprPlan_repr(v_x_1177_, v_prec_1178_);
lean_dec(v_prec_1178_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0(lean_object* v_a_1180_, lean_object* v_n_1181_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___redArg(v_a_1180_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0___boxed(lean_object* v_a_1183_, lean_object* v_n_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = lp_choreo_List_repr___at___00Choreo_instReprPlan_repr_spec__0(v_a_1183_, v_n_1184_);
lean_dec(v_n_1184_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_wordNumber(lean_object* v_x_1249_){
_start:
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__2));
v___x_1255_ = lean_string_dec_eq(v_x_1249_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; uint8_t v___x_1257_; 
v___x_1256_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__3));
v___x_1257_ = lean_string_dec_eq(v_x_1249_, v___x_1256_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__4));
v___x_1259_ = lean_string_dec_eq(v_x_1249_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__5));
v___x_1261_ = lean_string_dec_eq(v_x_1249_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; uint8_t v___x_1263_; 
v___x_1262_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__6));
v___x_1263_ = lean_string_dec_eq(v_x_1249_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__7));
v___x_1265_ = lean_string_dec_eq(v_x_1249_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__8));
v___x_1267_ = lean_string_dec_eq(v_x_1249_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__9));
v___x_1269_ = lean_string_dec_eq(v_x_1249_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__10));
v___x_1271_ = lean_string_dec_eq(v_x_1249_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1272_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__11));
v___x_1273_ = lean_string_dec_eq(v_x_1249_, v___x_1272_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__12));
v___x_1275_ = lean_string_dec_eq(v_x_1249_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__13));
v___x_1277_ = lean_string_dec_eq(v_x_1249_, v___x_1276_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__14));
v___x_1279_ = lean_string_dec_eq(v_x_1249_, v___x_1278_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__15));
v___x_1281_ = lean_string_dec_eq(v_x_1249_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__16));
v___x_1283_ = lean_string_dec_eq(v_x_1249_, v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__17));
v___x_1285_ = lean_string_dec_eq(v_x_1249_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__18));
v___x_1287_ = lean_string_dec_eq(v_x_1249_, v___x_1286_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__19));
v___x_1289_ = lean_string_dec_eq(v_x_1249_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__20));
v___x_1291_ = lean_string_dec_eq(v_x_1249_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__21));
v___x_1293_ = lean_string_dec_eq(v_x_1249_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1294_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__22));
v___x_1295_ = lean_string_dec_eq(v_x_1249_, v___x_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__23));
v___x_1297_ = lean_string_dec_eq(v_x_1249_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__24));
v___x_1299_ = lean_string_dec_eq(v_x_1249_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1300_ = lean_unsigned_to_nat(0u);
v___x_1301_ = lean_string_utf8_byte_size(v_x_1249_);
v___x_1302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1302_, 0, v_x_1249_);
lean_ctor_set(v___x_1302_, 1, v___x_1300_);
lean_ctor_set(v___x_1302_, 2, v___x_1301_);
v___x_1303_ = l_String_Slice_toNat_x3f(v___x_1302_);
lean_dec_ref_known(v___x_1302_, 3);
return v___x_1303_;
}
else
{
lean_object* v___x_1304_; 
lean_dec_ref(v_x_1249_);
v___x_1304_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__25));
return v___x_1304_;
}
}
else
{
lean_object* v___x_1305_; 
lean_dec_ref(v_x_1249_);
v___x_1305_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__26));
return v___x_1305_;
}
}
else
{
lean_object* v___x_1306_; 
lean_dec_ref(v_x_1249_);
v___x_1306_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__27));
return v___x_1306_;
}
}
else
{
lean_object* v___x_1307_; 
lean_dec_ref(v_x_1249_);
v___x_1307_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__28));
return v___x_1307_;
}
}
else
{
lean_object* v___x_1308_; 
lean_dec_ref(v_x_1249_);
v___x_1308_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__29));
return v___x_1308_;
}
}
else
{
lean_object* v___x_1309_; 
lean_dec_ref(v_x_1249_);
v___x_1309_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__30));
return v___x_1309_;
}
}
else
{
lean_object* v___x_1310_; 
lean_dec_ref(v_x_1249_);
v___x_1310_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__31));
return v___x_1310_;
}
}
else
{
lean_object* v___x_1311_; 
lean_dec_ref(v_x_1249_);
v___x_1311_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__32));
return v___x_1311_;
}
}
else
{
lean_object* v___x_1312_; 
lean_dec_ref(v_x_1249_);
v___x_1312_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__33));
return v___x_1312_;
}
}
else
{
lean_object* v___x_1313_; 
lean_dec_ref(v_x_1249_);
v___x_1313_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__34));
return v___x_1313_;
}
}
else
{
lean_object* v___x_1314_; 
lean_dec_ref(v_x_1249_);
v___x_1314_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__35));
return v___x_1314_;
}
}
else
{
lean_object* v___x_1315_; 
lean_dec_ref(v_x_1249_);
v___x_1315_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__36));
return v___x_1315_;
}
}
else
{
lean_object* v___x_1316_; 
lean_dec_ref(v_x_1249_);
v___x_1316_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__37));
return v___x_1316_;
}
}
else
{
lean_object* v___x_1317_; 
lean_dec_ref(v_x_1249_);
v___x_1317_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__38));
return v___x_1317_;
}
}
else
{
lean_object* v___x_1318_; 
lean_dec_ref(v_x_1249_);
v___x_1318_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__39));
return v___x_1318_;
}
}
else
{
lean_object* v___x_1319_; 
lean_dec_ref(v_x_1249_);
v___x_1319_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__40));
return v___x_1319_;
}
}
else
{
lean_object* v___x_1320_; 
lean_dec_ref(v_x_1249_);
v___x_1320_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__41));
return v___x_1320_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1252_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1252_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1252_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1250_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1250_;
}
}
else
{
lean_dec_ref(v_x_1249_);
goto v___jp_1250_;
}
v___jp_1250_:
{
lean_object* v___x_1251_; 
v___x_1251_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__0));
return v___x_1251_;
}
v___jp_1252_:
{
lean_object* v___x_1253_; 
v___x_1253_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__1));
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__1(lean_object* v_s_1321_, lean_object* v_p_1322_){
_start:
{
uint32_t v___y_1324_; lean_object* v___x_1329_; uint8_t v_decide_1330_; 
v___x_1329_ = lean_string_utf8_byte_size(v_s_1321_);
v_decide_1330_ = lean_nat_dec_eq(v_p_1322_, v___x_1329_);
if (v_decide_1330_ == 0)
{
uint32_t v___x_1331_; uint32_t v___x_1332_; uint8_t v___x_1333_; 
v___x_1331_ = lean_string_utf8_get_fast(v_s_1321_, v_p_1322_);
v___x_1332_ = 65;
v___x_1333_ = lean_uint32_dec_le(v___x_1332_, v___x_1331_);
if (v___x_1333_ == 0)
{
v___y_1324_ = v___x_1331_;
goto v___jp_1323_;
}
else
{
uint32_t v___x_1334_; uint8_t v___x_1335_; 
v___x_1334_ = 90;
v___x_1335_ = lean_uint32_dec_le(v___x_1331_, v___x_1334_);
if (v___x_1335_ == 0)
{
v___y_1324_ = v___x_1331_;
goto v___jp_1323_;
}
else
{
uint32_t v___x_1336_; uint32_t v___x_1337_; 
v___x_1336_ = 32;
v___x_1337_ = lean_uint32_add(v___x_1331_, v___x_1336_);
v___y_1324_ = v___x_1337_;
goto v___jp_1323_;
}
}
}
else
{
lean_dec(v_p_1322_);
return v_s_1321_;
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
lean_inc(v_p_1322_);
v___x_1325_ = lean_string_utf8_set(v_s_1321_, v_p_1322_, v___y_1324_);
v___x_1326_ = l_Char_utf8Size(v___y_1324_);
v___x_1327_ = lean_nat_add(v_p_1322_, v___x_1326_);
lean_dec(v___x_1326_);
lean_dec(v_p_1322_);
v_s_1321_ = v___x_1325_;
v_p_1322_ = v___x_1327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_tokenize_spec__0(lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
if (lean_obj_tag(v_a_1338_) == 0)
{
lean_object* v___x_1340_; 
v___x_1340_ = l_List_reverse___redArg(v_a_1339_);
return v___x_1340_;
}
else
{
lean_object* v_head_1341_; lean_object* v_tail_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1353_; 
v_head_1341_ = lean_ctor_get(v_a_1338_, 0);
v_tail_1342_ = lean_ctor_get(v_a_1338_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_a_1338_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1344_ = v_a_1338_;
v_isShared_1345_ = v_isSharedCheck_1353_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_tail_1342_);
lean_inc(v_head_1341_);
lean_dec(v_a_1338_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1353_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; uint8_t v___x_1347_; 
v___x_1346_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedPlan_default___closed__0));
v___x_1347_ = lean_string_dec_eq(v_head_1341_, v___x_1346_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1349_; 
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v_a_1339_);
v___x_1349_ = v___x_1344_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_head_1341_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_a_1339_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v_a_1338_ = v_tail_1342_;
v_a_1339_ = v___x_1349_;
goto _start;
}
}
else
{
lean_del_object(v___x_1344_);
lean_dec(v_head_1341_);
v_a_1338_ = v_tail_1342_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__2(lean_object* v_s_1354_, lean_object* v_p_1355_){
_start:
{
uint32_t v___y_1357_; lean_object* v___x_1362_; uint8_t v_decide_1363_; 
v___x_1362_ = lean_string_utf8_byte_size(v_s_1354_);
v_decide_1363_ = lean_nat_dec_eq(v_p_1355_, v___x_1362_);
if (v_decide_1363_ == 0)
{
uint32_t v___x_1364_; uint32_t v___x_1381_; uint8_t v___x_1382_; 
v___x_1364_ = lean_string_utf8_get_fast(v_s_1354_, v_p_1355_);
v___x_1381_ = 65;
v___x_1382_ = lean_uint32_dec_le(v___x_1381_, v___x_1364_);
if (v___x_1382_ == 0)
{
goto v___jp_1376_;
}
else
{
uint32_t v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = 90;
v___x_1384_ = lean_uint32_dec_le(v___x_1364_, v___x_1383_);
if (v___x_1384_ == 0)
{
goto v___jp_1376_;
}
else
{
v___y_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
v___jp_1365_:
{
uint32_t v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = 58;
v___x_1367_ = lean_uint32_dec_eq(v___x_1364_, v___x_1366_);
if (v___x_1367_ == 0)
{
uint32_t v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = 233;
v___x_1369_ = lean_uint32_dec_eq(v___x_1364_, v___x_1368_);
if (v___x_1369_ == 0)
{
uint32_t v___x_1370_; 
v___x_1370_ = 32;
v___y_1357_ = v___x_1370_;
goto v___jp_1356_;
}
else
{
v___y_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
else
{
v___y_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
v___jp_1371_:
{
uint32_t v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = 48;
v___x_1373_ = lean_uint32_dec_le(v___x_1372_, v___x_1364_);
if (v___x_1373_ == 0)
{
goto v___jp_1365_;
}
else
{
uint32_t v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = 57;
v___x_1375_ = lean_uint32_dec_le(v___x_1364_, v___x_1374_);
if (v___x_1375_ == 0)
{
goto v___jp_1365_;
}
else
{
v___y_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
}
v___jp_1376_:
{
uint32_t v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = 97;
v___x_1378_ = lean_uint32_dec_le(v___x_1377_, v___x_1364_);
if (v___x_1378_ == 0)
{
goto v___jp_1371_;
}
else
{
uint32_t v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = 122;
v___x_1380_ = lean_uint32_dec_le(v___x_1364_, v___x_1379_);
if (v___x_1380_ == 0)
{
goto v___jp_1371_;
}
else
{
v___y_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
}
}
else
{
lean_dec(v_p_1355_);
return v_s_1354_;
}
v___jp_1356_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_inc(v_p_1355_);
v___x_1358_ = lean_string_utf8_set(v_s_1354_, v_p_1355_, v___y_1357_);
v___x_1359_ = l_Char_utf8Size(v___y_1357_);
v___x_1360_ = lean_nat_add(v_p_1355_, v___x_1359_);
lean_dec(v___x_1359_);
lean_dec(v_p_1355_);
v_s_1354_ = v___x_1358_;
v_p_1355_ = v___x_1360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tokenize(lean_object* v_s_1386_){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v_cleaned_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__1(v_s_1386_, v___x_1387_);
v_cleaned_1389_ = lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__2(v___x_1388_, v___x_1387_);
v___x_1390_ = ((lean_object*)(lp_choreo_Choreo_tokenize___closed__0));
v___x_1391_ = lean_box(0);
v___x_1392_ = l_String_splitOnAux(v_cleaned_1389_, v___x_1390_, v___x_1387_, v___x_1387_, v___x_1387_, v___x_1391_);
lean_dec_ref(v_cleaned_1389_);
v___x_1393_ = lp_choreo_List_filterTR_loop___at___00Choreo_tokenize_spec__0(v___x_1392_, v___x_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitBy(lean_object* v_w_1395_){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1396_ = ((lean_object*)(lp_choreo_Choreo_splitBy___closed__0));
v___x_1397_ = lean_unsigned_to_nat(0u);
v___x_1398_ = lean_box(0);
v___x_1399_ = l_String_splitOnAux(v_w_1395_, v___x_1396_, v___x_1397_, v___x_1397_, v___x_1397_, v___x_1398_);
if (lean_obj_tag(v___x_1399_) == 1)
{
lean_object* v_tail_1400_; 
v_tail_1400_ = lean_ctor_get(v___x_1399_, 1);
lean_inc(v_tail_1400_);
if (lean_obj_tag(v_tail_1400_) == 1)
{
lean_object* v_tail_1401_; 
v_tail_1401_ = lean_ctor_get(v_tail_1400_, 1);
if (lean_obj_tag(v_tail_1401_) == 0)
{
lean_object* v_head_1402_; lean_object* v_head_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1427_; 
v_head_1402_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_head_1402_);
lean_dec_ref_known(v___x_1399_, 2);
v_head_1403_ = lean_ctor_get(v_tail_1400_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_tail_1400_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; 
v_unused_1428_ = lean_ctor_get(v_tail_1400_, 1);
lean_dec(v_unused_1428_);
v___x_1405_ = v_tail_1400_;
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_head_1403_);
lean_dec(v_tail_1400_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1407_ = lean_string_utf8_byte_size(v_head_1402_);
v___x_1408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1408_, 0, v_head_1402_);
lean_ctor_set(v___x_1408_, 1, v___x_1397_);
lean_ctor_set(v___x_1408_, 2, v___x_1407_);
v___x_1409_ = l_String_Slice_toNat_x3f(v___x_1408_);
lean_dec_ref_known(v___x_1408_, 3);
if (lean_obj_tag(v___x_1409_) == 1)
{
lean_object* v_val_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_val_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_val_1410_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1411_ = lean_string_utf8_byte_size(v_head_1403_);
v___x_1412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1412_, 0, v_head_1403_);
lean_ctor_set(v___x_1412_, 1, v___x_1397_);
lean_ctor_set(v___x_1412_, 2, v___x_1411_);
v___x_1413_ = l_String_Slice_toNat_x3f(v___x_1412_);
lean_dec_ref_known(v___x_1412_, 3);
if (lean_obj_tag(v___x_1413_) == 1)
{
lean_object* v_val_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1424_; 
v_val_1414_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1416_ = v___x_1413_;
v_isShared_1417_ = v_isSharedCheck_1424_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_val_1414_);
lean_dec(v___x_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1424_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 0);
lean_ctor_set(v___x_1405_, 1, v_val_1414_);
lean_ctor_set(v___x_1405_, 0, v_val_1410_);
v___x_1419_ = v___x_1405_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_val_1410_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_val_1414_);
v___x_1419_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
lean_object* v___x_1421_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1419_);
v___x_1421_ = v___x_1416_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
else
{
lean_object* v___x_1425_; 
lean_dec(v___x_1413_);
lean_dec(v_val_1410_);
lean_del_object(v___x_1405_);
v___x_1425_ = lean_box(0);
return v___x_1425_;
}
}
else
{
lean_object* v___x_1426_; 
lean_dec(v___x_1409_);
lean_del_object(v___x_1405_);
lean_dec(v_head_1403_);
v___x_1426_ = lean_box(0);
return v___x_1426_;
}
}
}
else
{
lean_object* v___x_1429_; 
lean_dec_ref_known(v_tail_1400_, 2);
lean_dec_ref_known(v___x_1399_, 2);
v___x_1429_ = lean_box(0);
return v___x_1429_;
}
}
else
{
lean_object* v___x_1430_; 
lean_dec(v_tail_1400_);
lean_dec_ref_known(v___x_1399_, 2);
v___x_1430_ = lean_box(0);
return v___x_1430_;
}
}
else
{
lean_object* v___x_1431_; 
lean_dec(v___x_1399_);
v___x_1431_ = lean_box(0);
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitBy___boxed(lean_object* v_w_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = lp_choreo_Choreo_splitBy(v_w_1432_);
lean_dec_ref(v_w_1432_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_size(lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 0)
{
lean_object* v_cols_1435_; lean_object* v_rows_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_cols_1435_ = lean_ctor_get(v_x_1434_, 0);
v_rows_1436_ = lean_ctor_get(v_x_1434_, 1);
v___x_1437_ = lean_nat_mul(v_cols_1435_, v_rows_1436_);
v___x_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
else
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_box(0);
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Shape_size___boxed(lean_object* v_x_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = lp_choreo_Choreo_Shape_size(v_x_1440_);
lean_dec(v_x_1440_);
return v_res_1441_;
}
}
static lean_object* _init_lp_choreo_Choreo_readSeconds_go___closed__2(void){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__1));
v___x_1445_ = lean_string_utf8_byte_size(v___x_1444_);
return v___x_1445_;
}
}
static lean_object* _init_lp_choreo_Choreo_readSeconds_go___closed__4(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__3));
v___x_1448_ = lean_string_utf8_byte_size(v___x_1447_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSeconds_go(lean_object* v_a_1449_){
_start:
{
if (lean_obj_tag(v_a_1449_) == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_box(0);
return v___x_1450_;
}
else
{
lean_object* v_tail_1451_; 
v_tail_1451_ = lean_ctor_get(v_a_1449_, 1);
lean_inc(v_tail_1451_);
if (lean_obj_tag(v_tail_1451_) == 0)
{
lean_object* v_head_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_head_1452_ = lean_ctor_get(v_a_1449_, 0);
lean_inc(v_head_1452_);
lean_dec_ref_known(v_a_1449_, 2);
v___x_1453_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__0));
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = l_String_splitOnAux(v_head_1452_, v___x_1453_, v___x_1454_, v___x_1454_, v___x_1454_, v_tail_1451_);
lean_dec(v_head_1452_);
if (lean_obj_tag(v___x_1455_) == 1)
{
lean_object* v_tail_1456_; 
v_tail_1456_ = lean_ctor_get(v___x_1455_, 1);
lean_inc(v_tail_1456_);
if (lean_obj_tag(v_tail_1456_) == 1)
{
lean_object* v_tail_1457_; 
v_tail_1457_ = lean_ctor_get(v_tail_1456_, 1);
if (lean_obj_tag(v_tail_1457_) == 0)
{
lean_object* v_head_1458_; lean_object* v_head_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v_head_1458_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_head_1458_);
lean_dec_ref_known(v___x_1455_, 2);
v_head_1459_ = lean_ctor_get(v_tail_1456_, 0);
lean_inc(v_head_1459_);
lean_dec_ref_known(v_tail_1456_, 2);
v___x_1460_ = lean_string_utf8_byte_size(v_head_1458_);
v___x_1461_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1461_, 0, v_head_1458_);
lean_ctor_set(v___x_1461_, 1, v___x_1454_);
lean_ctor_set(v___x_1461_, 2, v___x_1460_);
v___x_1462_ = l_String_Slice_toNat_x3f(v___x_1461_);
lean_dec_ref_known(v___x_1461_, 3);
if (lean_obj_tag(v___x_1462_) == 1)
{
lean_object* v_val_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = lean_string_utf8_byte_size(v_head_1459_);
v___x_1465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1465_, 0, v_head_1459_);
lean_ctor_set(v___x_1465_, 1, v___x_1454_);
lean_ctor_set(v___x_1465_, 2, v___x_1464_);
v___x_1466_ = l_String_Slice_toNat_x3f(v___x_1465_);
lean_dec_ref_known(v___x_1465_, 3);
if (lean_obj_tag(v___x_1466_) == 1)
{
lean_object* v_val_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1477_; 
v_val_1467_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1469_ = v___x_1466_;
v_isShared_1470_ = v_isSharedCheck_1477_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_val_1467_);
lean_dec(v___x_1466_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1477_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1475_; 
v___x_1471_ = lean_unsigned_to_nat(60u);
v___x_1472_ = lean_nat_mul(v_val_1463_, v___x_1471_);
lean_dec(v_val_1463_);
v___x_1473_ = lean_nat_add(v___x_1472_, v_val_1467_);
lean_dec(v_val_1467_);
lean_dec(v___x_1472_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 0, v___x_1473_);
v___x_1475_ = v___x_1469_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
else
{
lean_object* v___x_1478_; 
lean_dec(v___x_1466_);
lean_dec(v_val_1463_);
v___x_1478_ = lean_box(0);
return v___x_1478_;
}
}
else
{
lean_object* v___x_1479_; 
lean_dec(v___x_1462_);
lean_dec(v_head_1459_);
v___x_1479_ = lean_box(0);
return v___x_1479_;
}
}
else
{
lean_object* v___x_1480_; 
lean_dec_ref_known(v_tail_1456_, 2);
lean_dec_ref_known(v___x_1455_, 2);
v___x_1480_ = lean_box(0);
return v___x_1480_;
}
}
else
{
lean_object* v___x_1481_; 
lean_dec(v_tail_1456_);
lean_dec_ref_known(v___x_1455_, 2);
v___x_1481_ = lean_box(0);
return v___x_1481_;
}
}
else
{
lean_object* v___x_1482_; 
lean_dec(v___x_1455_);
v___x_1482_ = lean_box(0);
return v___x_1482_;
}
}
else
{
lean_object* v_head_1483_; lean_object* v_head_1484_; lean_object* v___x_1485_; 
v_head_1483_ = lean_ctor_get(v_a_1449_, 0);
lean_inc_n(v_head_1483_, 2);
lean_dec_ref_known(v_a_1449_, 2);
v_head_1484_ = lean_ctor_get(v_tail_1451_, 0);
v___x_1485_ = lp_choreo_Choreo_wordNumber(v_head_1483_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1495_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__0));
v___x_1496_ = lean_unsigned_to_nat(0u);
v___x_1497_ = lean_box(0);
v___x_1498_ = l_String_splitOnAux(v_head_1483_, v___x_1495_, v___x_1496_, v___x_1496_, v___x_1496_, v___x_1497_);
lean_dec(v_head_1483_);
if (lean_obj_tag(v___x_1498_) == 1)
{
lean_object* v_tail_1499_; 
v_tail_1499_ = lean_ctor_get(v___x_1498_, 1);
lean_inc(v_tail_1499_);
if (lean_obj_tag(v_tail_1499_) == 1)
{
lean_object* v_tail_1500_; 
v_tail_1500_ = lean_ctor_get(v_tail_1499_, 1);
if (lean_obj_tag(v_tail_1500_) == 0)
{
lean_object* v_head_1501_; lean_object* v_head_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v_head_1501_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_head_1501_);
lean_dec_ref_known(v___x_1498_, 2);
v_head_1502_ = lean_ctor_get(v_tail_1499_, 0);
lean_inc(v_head_1502_);
lean_dec_ref_known(v_tail_1499_, 2);
v___x_1503_ = lean_string_utf8_byte_size(v_head_1501_);
v___x_1504_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1504_, 0, v_head_1501_);
lean_ctor_set(v___x_1504_, 1, v___x_1496_);
lean_ctor_set(v___x_1504_, 2, v___x_1503_);
v___x_1505_ = l_String_Slice_toNat_x3f(v___x_1504_);
lean_dec_ref_known(v___x_1504_, 3);
if (lean_obj_tag(v___x_1505_) == 1)
{
lean_object* v_val_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_val_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_val_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v___x_1507_ = lean_string_utf8_byte_size(v_head_1502_);
v___x_1508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1508_, 0, v_head_1502_);
lean_ctor_set(v___x_1508_, 1, v___x_1496_);
lean_ctor_set(v___x_1508_, 2, v___x_1507_);
v___x_1509_ = l_String_Slice_toNat_x3f(v___x_1508_);
lean_dec_ref_known(v___x_1508_, 3);
if (lean_obj_tag(v___x_1509_) == 1)
{
lean_object* v_val_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref_known(v_tail_1451_, 2);
v_val_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1520_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_val_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1520_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1514_ = lean_unsigned_to_nat(60u);
v___x_1515_ = lean_nat_mul(v_val_1506_, v___x_1514_);
lean_dec(v_val_1506_);
v___x_1516_ = lean_nat_add(v___x_1515_, v_val_1510_);
lean_dec(v_val_1510_);
lean_dec(v___x_1515_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1516_);
v___x_1518_ = v___x_1512_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
else
{
lean_dec(v___x_1509_);
lean_dec(v_val_1506_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
}
else
{
lean_dec(v___x_1505_);
lean_dec(v_head_1502_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
}
else
{
lean_dec_ref_known(v_tail_1499_, 2);
lean_dec_ref_known(v___x_1498_, 2);
v_a_1449_ = v_tail_1451_;
goto _start;
}
}
else
{
lean_dec_ref_known(v___x_1498_, 2);
lean_dec(v_tail_1499_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
}
else
{
lean_dec(v___x_1498_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
}
else
{
lean_object* v_val_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
lean_dec(v_head_1483_);
v_val_1526_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_val_1526_);
v___x_1527_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__3));
v___x_1528_ = lean_string_utf8_byte_size(v_head_1484_);
v___x_1529_ = lean_obj_once(&lp_choreo_Choreo_readSeconds_go___closed__4, &lp_choreo_Choreo_readSeconds_go___closed__4_once, _init_lp_choreo_Choreo_readSeconds_go___closed__4);
v___x_1530_ = lean_nat_dec_le(v___x_1529_, v___x_1528_);
if (v___x_1530_ == 0)
{
lean_dec(v_val_1526_);
goto v___jp_1486_;
}
else
{
lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1531_ = lean_unsigned_to_nat(0u);
v___x_1532_ = lean_string_memcmp(v_head_1484_, v___x_1527_, v___x_1531_, v___x_1531_, v___x_1529_);
if (v___x_1532_ == 0)
{
lean_dec(v_val_1526_);
goto v___jp_1486_;
}
else
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1541_; 
lean_dec_ref_known(v_tail_1451_, 2);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1541_ == 0)
{
lean_object* v_unused_1542_; 
v_unused_1542_ = lean_ctor_get(v___x_1485_, 0);
lean_dec(v_unused_1542_);
v___x_1534_ = v___x_1485_;
v_isShared_1535_ = v_isSharedCheck_1541_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v___x_1485_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1541_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1536_ = lean_unsigned_to_nat(60u);
v___x_1537_ = lean_nat_mul(v_val_1526_, v___x_1536_);
lean_dec(v_val_1526_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1537_);
v___x_1539_ = v___x_1534_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
v___jp_1486_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1487_ = ((lean_object*)(lp_choreo_Choreo_readSeconds_go___closed__1));
v___x_1488_ = lean_string_utf8_byte_size(v_head_1484_);
v___x_1489_ = lean_obj_once(&lp_choreo_Choreo_readSeconds_go___closed__2, &lp_choreo_Choreo_readSeconds_go___closed__2_once, _init_lp_choreo_Choreo_readSeconds_go___closed__2);
v___x_1490_ = lean_nat_dec_le(v___x_1489_, v___x_1488_);
if (v___x_1490_ == 0)
{
lean_dec(v___x_1485_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
else
{
lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1492_ = lean_unsigned_to_nat(0u);
v___x_1493_ = lean_string_memcmp(v_head_1484_, v___x_1487_, v___x_1492_, v___x_1492_, v___x_1489_);
if (v___x_1493_ == 0)
{
lean_dec(v___x_1485_);
v_a_1449_ = v_tail_1451_;
goto _start;
}
else
{
lean_dec_ref_known(v_tail_1451_, 2);
return v___x_1485_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSeconds(lean_object* v_ts_1543_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = lp_choreo_Choreo_readSeconds_go(v_ts_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm_go(lean_object* v_a_1545_){
_start:
{
if (lean_obj_tag(v_a_1545_) == 1)
{
lean_object* v_tail_1546_; 
v_tail_1546_ = lean_ctor_get(v_a_1545_, 1);
if (lean_obj_tag(v_tail_1546_) == 1)
{
lean_object* v_head_1547_; lean_object* v_head_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
v_head_1547_ = lean_ctor_get(v_a_1545_, 0);
v_head_1548_ = lean_ctor_get(v_tail_1546_, 0);
v___x_1549_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__8));
v___x_1550_ = lean_string_dec_eq(v_head_1548_, v___x_1549_);
if (v___x_1550_ == 0)
{
v_a_1545_ = v_tail_1546_;
goto _start;
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = lean_string_utf8_byte_size(v_head_1547_);
lean_inc(v_head_1547_);
v___x_1554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1554_, 0, v_head_1547_);
lean_ctor_set(v___x_1554_, 1, v___x_1552_);
lean_ctor_set(v___x_1554_, 2, v___x_1553_);
v___x_1555_ = l_String_Slice_toNat_x3f(v___x_1554_);
lean_dec_ref_known(v___x_1554_, 3);
return v___x_1555_;
}
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_box(0);
return v___x_1556_;
}
}
else
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_box(0);
return v___x_1557_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm_go___boxed(lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = lp_choreo_Choreo_readBpm_go(v_a_1558_);
lean_dec(v_a_1558_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm(lean_object* v_ts_1560_){
_start:
{
lean_object* v___x_1561_; 
v___x_1561_ = lp_choreo_Choreo_readBpm_go(v_ts_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readBpm___boxed(lean_object* v_ts_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = lp_choreo_Choreo_readBpm(v_ts_1562_);
lean_dec(v_ts_1562_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_countBefore_go(lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
if (lean_obj_tag(v_a_1566_) == 0)
{
lean_object* v___x_1568_; 
lean_dec(v_a_1567_);
v___x_1568_ = lean_box(0);
return v___x_1568_;
}
else
{
lean_object* v_head_1569_; lean_object* v_tail_1570_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_head_1569_ = lean_ctor_get(v_a_1566_, 0);
lean_inc(v_head_1569_);
v_tail_1570_ = lean_ctor_get(v_a_1566_, 1);
lean_inc(v_tail_1570_);
lean_dec_ref_known(v_a_1566_, 2);
v___x_1575_ = lean_unsigned_to_nat(0u);
v___x_1576_ = lean_nat_dec_eq(v_a_1567_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; uint8_t v___x_1578_; 
v___x_1577_ = ((lean_object*)(lp_choreo_Choreo_countBefore_go___closed__0));
v___x_1578_ = lean_string_dec_eq(v_head_1569_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1579_ = ((lean_object*)(lp_choreo_Choreo_countBefore_go___closed__1));
v___x_1580_ = lean_string_dec_eq(v_head_1569_, v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; 
lean_inc(v_head_1569_);
v___x_1581_ = lp_choreo_Choreo_wordNumber(v_head_1569_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_head_1569_);
v___x_1582_ = lean_unsigned_to_nat(1u);
v___x_1583_ = lean_nat_sub(v_a_1567_, v___x_1582_);
lean_dec(v_a_1567_);
v_a_1566_ = v_tail_1570_;
v_a_1567_ = v___x_1583_;
goto _start;
}
else
{
lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1585_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__3));
v___x_1586_ = lean_string_dec_eq(v_head_1569_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = ((lean_object*)(lp_choreo_Choreo_wordNumber___closed__7));
v___x_1588_ = lean_string_dec_eq(v_head_1569_, v___x_1587_);
lean_dec(v_head_1569_);
if (v___x_1588_ == 0)
{
lean_dec(v_tail_1570_);
lean_dec(v_a_1567_);
return v___x_1581_;
}
else
{
lean_dec_ref_known(v___x_1581_, 1);
goto v___jp_1571_;
}
}
else
{
lean_dec_ref_known(v___x_1581_, 1);
lean_dec(v_head_1569_);
goto v___jp_1571_;
}
}
}
else
{
lean_object* v___x_1589_; 
lean_dec(v_tail_1570_);
lean_dec(v_head_1569_);
lean_dec(v_a_1567_);
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
}
else
{
lean_object* v___x_1590_; 
lean_dec(v_tail_1570_);
lean_dec(v_head_1569_);
lean_dec(v_a_1567_);
v___x_1590_ = lean_box(0);
return v___x_1590_;
}
}
else
{
lean_object* v___x_1591_; 
lean_dec(v_tail_1570_);
lean_dec(v_head_1569_);
lean_dec(v_a_1567_);
v___x_1591_ = lean_box(0);
return v___x_1591_;
}
v___jp_1571_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_unsigned_to_nat(1u);
v___x_1573_ = lean_nat_sub(v_a_1567_, v___x_1572_);
lean_dec(v_a_1567_);
v_a_1566_ = v_tail_1570_;
v_a_1567_ = v___x_1573_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_countBefore(lean_object* v_before_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = l_List_reverse___redArg(v_before_1592_);
v___x_1594_ = lean_unsigned_to_nat(8u);
v___x_1595_ = lp_choreo_Choreo_countBefore_go(v___x_1593_, v___x_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0(lean_object* v_x_1602_, lean_object* v_x_1603_){
_start:
{
if (lean_obj_tag(v_x_1602_) == 0)
{
if (lean_obj_tag(v_x_1603_) == 0)
{
uint8_t v___x_1604_; 
v___x_1604_ = 1;
return v___x_1604_;
}
else
{
uint8_t v___x_1605_; 
v___x_1605_ = 0;
return v___x_1605_;
}
}
else
{
if (lean_obj_tag(v_x_1603_) == 0)
{
uint8_t v___x_1606_; 
v___x_1606_ = 0;
return v___x_1606_;
}
else
{
lean_object* v_val_1607_; lean_object* v_val_1608_; uint8_t v___x_1609_; 
v_val_1607_ = lean_ctor_get(v_x_1602_, 0);
v_val_1608_ = lean_ctor_get(v_x_1603_, 0);
v___x_1609_ = lp_choreo_Choreo_instBEqMove_beq(v_val_1607_, v_val_1608_);
return v___x_1609_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0___boxed(lean_object* v_x_1610_, lean_object* v_x_1611_){
_start:
{
uint8_t v_res_1612_; lean_object* v_r_1613_; 
v_res_1612_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0(v_x_1610_, v_x_1611_);
lean_dec(v_x_1611_);
lean_dec(v_x_1610_);
v_r_1613_ = lean_box(v_res_1612_);
return v_r_1613_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
if (lean_obj_tag(v_x_1614_) == 0)
{
if (lean_obj_tag(v_x_1615_) == 0)
{
uint8_t v___x_1616_; 
v___x_1616_ = 1;
return v___x_1616_;
}
else
{
uint8_t v___x_1617_; 
v___x_1617_ = 0;
return v___x_1617_;
}
}
else
{
if (lean_obj_tag(v_x_1615_) == 0)
{
uint8_t v___x_1618_; 
v___x_1618_ = 0;
return v___x_1618_;
}
else
{
lean_object* v_val_1619_; lean_object* v_val_1620_; uint8_t v___x_1621_; 
v_val_1619_ = lean_ctor_get(v_x_1614_, 0);
v_val_1620_ = lean_ctor_get(v_x_1615_, 0);
v___x_1621_ = lean_string_dec_eq(v_val_1619_, v_val_1620_);
return v___x_1621_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2___boxed(lean_object* v_x_1622_, lean_object* v_x_1623_){
_start:
{
uint8_t v_res_1624_; lean_object* v_r_1625_; 
v_res_1624_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v_x_1622_, v_x_1623_);
lean_dec(v_x_1623_);
lean_dec(v_x_1622_);
v_r_1625_ = lean_box(v_res_1624_);
return v_r_1625_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__0(lean_object* v_x_1626_, lean_object* v_m_1627_){
_start:
{
lean_object* v_left_1628_; lean_object* v_right_1629_; lean_object* v_n_1630_; lean_object* v_moves_1631_; lean_object* v_waiting_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1642_; 
v_left_1628_ = lean_ctor_get(v_x_1626_, 0);
v_right_1629_ = lean_ctor_get(v_x_1626_, 1);
v_n_1630_ = lean_ctor_get(v_x_1626_, 2);
v_moves_1631_ = lean_ctor_get(v_x_1626_, 3);
v_waiting_1632_ = lean_ctor_get(v_x_1626_, 4);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_x_1626_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1634_ = v_x_1626_;
v_isShared_1635_ = v_isSharedCheck_1642_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_waiting_1632_);
lean_inc(v_moves_1631_);
lean_inc(v_n_1630_);
lean_inc(v_right_1629_);
lean_inc(v_left_1628_);
lean_dec(v_x_1626_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1642_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1640_; 
v___x_1636_ = lean_box(0);
v___x_1637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1637_, 0, v_m_1627_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = l_List_appendTR___redArg(v_moves_1631_, v___x_1637_);
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 3, v___x_1638_);
v___x_1640_ = v___x_1634_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_left_1628_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_right_1629_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_n_1630_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v___x_1638_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v_waiting_1632_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__1(lean_object* v_x_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = ((lean_object*)(lp_choreo_Choreo_scan___lam__1___closed__0));
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__1___boxed(lean_object* v_x_1649_, lean_object* v_x_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = lp_choreo_Choreo_scan___lam__1(v_x_1649_, v_x_1650_);
lean_dec(v_x_1650_);
lean_dec(v_x_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__2(lean_object* v_x_1652_, lean_object* v_a_1653_, lean_object* v_tail_1654_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = lp_choreo_Choreo_splitBy(v_a_1653_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1658_; 
v___x_1658_ = lp_choreo_Choreo_wordNumber(v_a_1653_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = ((lean_object*)(lp_choreo_Choreo_scan___lam__1___closed__0));
return v___x_1659_;
}
else
{
lean_object* v_val_1660_; lean_object* v___x_1661_; 
v_val_1660_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_val_1660_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1661_ = l_List_getLast_x3f___redArg(v_x_1652_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_dec(v_val_1660_);
goto v___jp_1655_;
}
else
{
lean_object* v_val_1662_; lean_object* v___x_1663_; 
v_val_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = lp_choreo_Choreo_wordNumber(v_val_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_dec(v_val_1660_);
goto v___jp_1655_;
}
else
{
lean_object* v_val_1664_; lean_object* v___x_1665_; 
v_val_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_val_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1665_, 0, v_val_1660_);
lean_ctor_set(v___x_1665_, 1, v_val_1664_);
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_val_1666_; lean_object* v_fst_1667_; lean_object* v_snd_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec_ref(v_a_1653_);
v_val_1666_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_val_1666_);
lean_dec_ref_known(v___x_1657_, 1);
v_fst_1667_ = lean_ctor_get(v_val_1666_, 0);
v_snd_1668_ = lean_ctor_get(v_val_1666_, 1);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_val_1666_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v_val_1666_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_snd_1668_);
lean_inc(v_fst_1667_);
lean_dec(v_val_1666_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_fst_1667_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_snd_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
v___jp_1655_:
{
lean_object* v___x_1656_; 
v___x_1656_ = ((lean_object*)(lp_choreo_Choreo_scan___lam__1___closed__0));
return v___x_1656_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan___lam__2___boxed(lean_object* v_x_1676_, lean_object* v_a_1677_, lean_object* v_tail_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = lp_choreo_Choreo_scan___lam__2(v_x_1676_, v_a_1677_, v_tail_1678_);
lean_dec(v_tail_1678_);
lean_dec(v_x_1676_);
return v_res_1679_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_scan_spec__1(lean_object* v_a_1680_, lean_object* v_x_1681_){
_start:
{
if (lean_obj_tag(v_x_1681_) == 0)
{
uint8_t v___x_1682_; 
v___x_1682_ = 0;
return v___x_1682_;
}
else
{
lean_object* v_head_1683_; lean_object* v_tail_1684_; uint8_t v___x_1685_; 
v_head_1683_ = lean_ctor_get(v_x_1681_, 0);
v_tail_1684_ = lean_ctor_get(v_x_1681_, 1);
v___x_1685_ = lean_string_dec_eq(v_a_1680_, v_head_1683_);
if (v___x_1685_ == 0)
{
v_x_1681_ = v_tail_1684_;
goto _start;
}
else
{
return v___x_1685_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_scan_spec__1___boxed(lean_object* v_a_1687_, lean_object* v_x_1688_){
_start:
{
uint8_t v_res_1689_; lean_object* v_r_1690_; 
v_res_1689_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v_a_1687_, v_x_1688_);
lean_dec(v_x_1688_);
lean_dec_ref(v_a_1687_);
v_r_1690_ = lean_box(v_res_1689_);
return v_r_1690_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_scan(lean_object* v_x_1844_, lean_object* v_x_1845_, lean_object* v_x_1846_, lean_object* v_x_1847_){
_start:
{
lean_object* v_zero_1848_; uint8_t v_isZero_1849_; 
v_zero_1848_ = lean_unsigned_to_nat(0u);
v_isZero_1849_ = lean_nat_dec_eq(v_x_1844_, v_zero_1848_);
if (v_isZero_1849_ == 1)
{
lean_dec(v_x_1846_);
lean_dec(v_x_1845_);
lean_dec(v_x_1844_);
return v_x_1847_;
}
else
{
if (lean_obj_tag(v_x_1846_) == 0)
{
lean_dec(v_x_1845_);
lean_dec(v_x_1844_);
return v_x_1847_;
}
else
{
lean_object* v_head_1850_; lean_object* v_tail_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_2400_; 
v_head_1850_ = lean_ctor_get(v_x_1846_, 0);
v_tail_1851_ = lean_ctor_get(v_x_1846_, 1);
v_isSharedCheck_2400_ = !lean_is_exclusive(v_x_1846_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_1853_ = v_x_1846_;
v_isShared_1854_ = v_isSharedCheck_2400_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_tail_1851_);
lean_inc(v_head_1850_);
lean_dec(v_x_1846_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_2400_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_one_1855_; lean_object* v_n_1856_; lean_object* v_st_x27_1858_; lean_object* v_skip_1859_; uint8_t v___y_1878_; lean_object* v___y_1929_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1939_; lean_object* v___y_2017_; lean_object* v___y_2048_; uint8_t v___y_2049_; uint8_t v___y_2053_; lean_object* v___y_2054_; uint8_t v___y_2055_; lean_object* v___y_2056_; uint8_t v___y_2057_; uint8_t v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; uint8_t v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2073_; uint8_t v___y_2074_; lean_object* v___y_2075_; uint8_t v___y_2076_; lean_object* v___y_2077_; uint8_t v___y_2078_; uint8_t v___y_2082_; lean_object* v___y_2083_; uint8_t v___y_2084_; lean_object* v___y_2085_; uint8_t v___y_2092_; lean_object* v___y_2093_; uint8_t v___y_2094_; uint8_t v___y_2095_; uint8_t v___y_2101_; lean_object* v___y_2102_; uint8_t v___y_2103_; uint8_t v___y_2104_; uint8_t v___y_2111_; lean_object* v___y_2132_; uint8_t v___y_2133_; lean_object* v___x_2146_; uint8_t v___y_2148_; uint8_t v___y_2149_; uint8_t v___y_2157_; uint8_t v___y_2220_; uint8_t v___y_2264_; uint8_t v___y_2265_; uint8_t v___y_2270_; lean_object* v___y_2290_; uint8_t v___y_2291_; lean_object* v___y_2292_; uint8_t v___y_2293_; uint8_t v___y_2294_; uint8_t v___y_2299_; lean_object* v___y_2300_; uint8_t v___y_2301_; lean_object* v___x_2306_; lean_object* v___x_2307_; uint8_t v_isShapeAfterComing_2308_; lean_object* v___y_2312_; uint8_t v___y_2313_; uint8_t v___y_2314_; lean_object* v___y_2341_; uint8_t v___y_2342_; uint8_t v___y_2343_; lean_object* v___x_2392_; uint8_t v___x_2393_; 
v_one_1855_ = lean_unsigned_to_nat(1u);
v_n_1856_ = lean_nat_sub(v_x_1844_, v_one_1855_);
lean_dec(v_x_1844_);
v___x_2146_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__0));
lean_inc(v_tail_1851_);
v___x_2306_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v_one_1855_, v___x_2146_);
v___x_2307_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__96));
v_isShapeAfterComing_2308_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v___x_2306_, v___x_2307_);
lean_dec(v___x_2306_);
v___x_2392_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__121));
v___x_2393_ = lean_string_dec_eq(v_head_1850_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; uint8_t v___x_2395_; 
v___x_2394_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__122));
v___x_2395_ = lean_string_dec_eq(v_head_1850_, v___x_2394_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; uint8_t v___x_2397_; 
v___x_2396_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__32));
v___x_2397_ = lean_string_dec_eq(v_head_1850_, v___x_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; uint8_t v___x_2399_; 
v___x_2398_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__123));
v___x_2399_ = lean_string_dec_eq(v_head_1850_, v___x_2398_);
if (v___x_2399_ == 0)
{
goto v___jp_2346_;
}
else
{
goto v___jp_2373_;
}
}
else
{
goto v___jp_2373_;
}
}
else
{
goto v___jp_2373_;
}
}
else
{
goto v___jp_2373_;
}
v___jp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1860_ = lean_box(0);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 1, v___x_1860_);
v___x_1862_ = v___x_1853_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_head_1850_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1863_ = l_List_appendTR___redArg(v_x_1845_, v___x_1862_);
v___x_1864_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__0));
lean_inc(v_skip_1859_);
lean_inc(v_tail_1851_);
v___x_1865_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v_skip_1859_, v___x_1864_);
v___x_1866_ = l_List_appendTR___redArg(v___x_1863_, v___x_1865_);
v___x_1867_ = l_List_drop___redArg(v_skip_1859_, v_tail_1851_);
lean_dec(v_tail_1851_);
v_x_1844_ = v_n_1856_;
v_x_1845_ = v___x_1866_;
v_x_1846_ = v___x_1867_;
v_x_1847_ = v_st_x27_1858_;
goto _start;
}
}
v___jp_1870_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__1));
v___x_1872_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1871_);
v_st_x27_1858_ = v___x_1872_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1873_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__2));
v___x_1875_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1874_);
v_st_x27_1858_ = v___x_1875_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1876_:
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1877_:
{
if (v___y_1878_ == 0)
{
lean_object* v___x_1879_; lean_object* v___x_1880_; uint8_t v___x_1881_; 
v___x_1879_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_1880_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__3));
v___x_1881_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_1879_, v___x_1880_);
lean_dec(v___x_1879_);
if (v___x_1881_ == 0)
{
goto v___jp_1876_;
}
else
{
goto v___jp_1873_;
}
}
else
{
goto v___jp_1873_;
}
}
v___jp_1882_:
{
lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1883_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__4));
v___x_1884_ = lean_string_dec_eq(v_head_1850_, v___x_1883_);
if (v___x_1884_ == 0)
{
goto v___jp_1876_;
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1886_; uint8_t v___x_1887_; 
v___x_1885_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_1886_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__5));
v___x_1887_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_1885_, v___x_1886_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; uint8_t v___x_1889_; 
v___x_1888_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__6));
v___x_1889_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_1885_, v___x_1888_);
lean_dec(v___x_1885_);
v___y_1878_ = v___x_1889_;
goto v___jp_1877_;
}
else
{
lean_dec(v___x_1885_);
v___y_1878_ = v___x_1887_;
goto v___jp_1877_;
}
}
}
v___jp_1890_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_box(2);
v___x_1892_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1891_);
v_st_x27_1858_ = v___x_1892_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1893_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__7));
v___x_1895_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1894_);
v_st_x27_1858_ = v___x_1895_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1896_:
{
lean_object* v_moves_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; uint8_t v___x_1900_; 
v_moves_1897_ = lean_ctor_get(v_x_1847_, 3);
v___x_1898_ = l_List_getLast_x3f___redArg(v_moves_1897_);
v___x_1899_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__9));
v___x_1900_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0(v___x_1898_, v___x_1899_);
lean_dec(v___x_1898_);
if (v___x_1900_ == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__10));
v___x_1902_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1901_);
v_st_x27_1858_ = v___x_1902_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
else
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
v___jp_1903_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_box(9);
v___x_1905_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1904_);
v_st_x27_1858_ = v___x_1905_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1906_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = lean_box(8);
v___x_1908_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1907_);
v_st_x27_1858_ = v___x_1908_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1909_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_box(7);
v___x_1911_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1910_);
v_st_x27_1858_ = v___x_1911_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1912_:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = lean_box(6);
v___x_1914_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1913_);
v_st_x27_1858_ = v___x_1914_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1915_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__11));
v___x_1917_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1916_);
v_st_x27_1858_ = v___x_1917_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1918_:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__12));
v___x_1920_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1919_);
v_st_x27_1858_ = v___x_1920_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1921_:
{
lean_object* v_moves_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; uint8_t v___x_1926_; 
v_moves_1922_ = lean_ctor_get(v_x_1847_, 3);
v___x_1923_ = l_List_getLast_x3f___redArg(v_moves_1922_);
v___x_1924_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__8));
v___x_1925_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__9));
v___x_1926_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__0(v___x_1923_, v___x_1925_);
lean_dec(v___x_1923_);
if (v___x_1926_ == 0)
{
lean_object* v___x_1927_; 
v___x_1927_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1924_);
v_st_x27_1858_ = v___x_1927_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
else
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
v___jp_1928_:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___y_1929_);
v___x_1931_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1930_);
v_st_x27_1858_ = v___x_1931_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1932_:
{
lean_object* v___x_1933_; 
v___x_1933_ = ((lean_object*)(lp_choreo_Choreo_scan___lam__1___closed__0));
v___y_1929_ = v___x_1933_;
goto v___jp_1928_;
}
v___jp_1934_:
{
lean_object* v___x_1937_; 
v___x_1937_ = lp_choreo_Choreo_scan___lam__2(v_x_1845_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
v___y_1929_ = v___x_1937_;
goto v___jp_1928_;
}
v___jp_1938_:
{
if (lean_obj_tag(v___y_1939_) == 0)
{
lean_object* v___x_1940_; 
v___x_1940_ = l_List_getLast_x3f___redArg(v_x_1845_);
if (lean_obj_tag(v___x_1940_) == 0)
{
goto v___jp_1932_;
}
else
{
lean_object* v_val_1941_; lean_object* v___x_1942_; 
v_val_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_val_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = lp_choreo_Choreo_splitBy(v_val_1941_);
lean_dec(v_val_1941_);
if (lean_obj_tag(v___x_1942_) == 0)
{
goto v___jp_1932_;
}
else
{
lean_object* v_val_1943_; lean_object* v_fst_1944_; lean_object* v_snd_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
v_val_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_val_1943_);
lean_dec_ref_known(v___x_1942_, 1);
v_fst_1944_ = lean_ctor_get(v_val_1943_, 0);
v_snd_1945_ = lean_ctor_get(v_val_1943_, 1);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_val_1943_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v_val_1943_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_snd_1945_);
lean_inc(v_fst_1944_);
lean_dec(v_val_1943_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_fst_1944_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_snd_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
v___y_1929_ = v___x_1950_;
goto v___jp_1928_;
}
}
}
}
}
else
{
lean_object* v_tail_1953_; 
v_tail_1953_ = lean_ctor_get(v___y_1939_, 1);
lean_inc(v_tail_1953_);
if (lean_obj_tag(v_tail_1953_) == 1)
{
lean_object* v_head_1954_; lean_object* v_head_1955_; lean_object* v_tail_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_head_1954_ = lean_ctor_get(v___y_1939_, 0);
lean_inc(v_head_1954_);
lean_dec_ref_known(v___y_1939_, 2);
v_head_1955_ = lean_ctor_get(v_tail_1953_, 0);
v_tail_1956_ = lean_ctor_get(v_tail_1953_, 1);
lean_inc(v_tail_1956_);
v___x_1957_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__13));
v___x_1958_ = lean_string_dec_eq(v_head_1955_, v___x_1957_);
if (v___x_1958_ == 0)
{
lean_dec(v_tail_1956_);
v___y_1935_ = v_head_1954_;
v___y_1936_ = v_tail_1953_;
goto v___jp_1934_;
}
else
{
lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1982_; 
v_isSharedCheck_1982_ = !lean_is_exclusive(v_tail_1953_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; lean_object* v_unused_1984_; 
v_unused_1983_ = lean_ctor_get(v_tail_1953_, 1);
lean_dec(v_unused_1983_);
v_unused_1984_ = lean_ctor_get(v_tail_1953_, 0);
lean_dec(v_unused_1984_);
v___x_1960_ = v_tail_1953_;
v_isShared_1961_ = v_isSharedCheck_1982_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v_tail_1953_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1982_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
if (lean_obj_tag(v_tail_1956_) == 1)
{
lean_object* v_head_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1976_; 
lean_del_object(v___x_1960_);
v_head_1962_ = lean_ctor_get(v_tail_1956_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_tail_1956_);
if (v_isSharedCheck_1976_ == 0)
{
lean_object* v_unused_1977_; 
v_unused_1977_ = lean_ctor_get(v_tail_1956_, 1);
lean_dec(v_unused_1977_);
v___x_1964_ = v_tail_1956_;
v_isShared_1965_ = v_isSharedCheck_1976_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_head_1962_);
lean_dec(v_tail_1956_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1976_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; 
v___x_1966_ = lp_choreo_Choreo_wordNumber(v_head_1954_);
if (lean_obj_tag(v___x_1966_) == 1)
{
lean_object* v_val_1967_; lean_object* v___x_1968_; 
v_val_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_val_1967_);
v___x_1968_ = lp_choreo_Choreo_wordNumber(v_head_1962_);
if (lean_obj_tag(v___x_1968_) == 1)
{
lean_object* v_val_1969_; lean_object* v___x_1971_; 
lean_dec_ref_known(v___x_1966_, 1);
v_val_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_val_1969_);
lean_dec_ref_known(v___x_1968_, 1);
if (v_isShared_1965_ == 0)
{
lean_ctor_set_tag(v___x_1964_, 0);
lean_ctor_set(v___x_1964_, 1, v_val_1969_);
lean_ctor_set(v___x_1964_, 0, v_val_1967_);
v___x_1971_ = v___x_1964_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_val_1967_);
lean_ctor_set(v_reuseFailAlloc_1972_, 1, v_val_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
v___y_1929_ = v___x_1971_;
goto v___jp_1928_;
}
}
else
{
lean_object* v___x_1973_; 
lean_dec(v_val_1967_);
lean_del_object(v___x_1964_);
v___x_1973_ = lp_choreo_Choreo_scan___lam__1(v___x_1966_, v___x_1968_);
lean_dec(v___x_1968_);
lean_dec_ref_known(v___x_1966_, 1);
v___y_1929_ = v___x_1973_;
goto v___jp_1928_;
}
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
lean_del_object(v___x_1964_);
v___x_1974_ = lp_choreo_Choreo_wordNumber(v_head_1962_);
v___x_1975_ = lp_choreo_Choreo_scan___lam__1(v___x_1966_, v___x_1974_);
lean_dec(v___x_1974_);
lean_dec(v___x_1966_);
v___y_1929_ = v___x_1975_;
goto v___jp_1928_;
}
}
}
else
{
lean_object* v___x_1979_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1957_);
v___x_1979_ = v___x_1960_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v_tail_1956_);
v___x_1979_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1980_; 
v___x_1980_ = lp_choreo_Choreo_scan___lam__2(v_x_1845_, v_head_1954_, v___x_1979_);
lean_dec_ref(v___x_1979_);
v___y_1929_ = v___x_1980_;
goto v___jp_1928_;
}
}
}
}
}
else
{
lean_object* v_head_1985_; 
v_head_1985_ = lean_ctor_get(v___y_1939_, 0);
lean_inc(v_head_1985_);
lean_dec_ref_known(v___y_1939_, 2);
v___y_1935_ = v_head_1985_;
v___y_1936_ = v_tail_1953_;
goto v___jp_1934_;
}
}
}
v___jp_1986_:
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1987_:
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1988_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__14));
v___x_1990_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1989_);
v_st_x27_1858_ = v___x_1990_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1991_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = lean_box(10);
v___x_1993_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_1992_);
v_st_x27_1858_ = v___x_1993_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_1994_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v_near_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1995_ = lean_unsigned_to_nat(5u);
v___x_1996_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__0));
lean_inc(v_tail_1851_);
v_near_1997_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v___x_1995_, v___x_1996_);
v___x_1998_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__15));
v___x_1999_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_1998_, v_near_1997_);
lean_dec(v_near_1997_);
v___x_2000_ = lean_alloc_ctor(12, 0, 1);
lean_ctor_set_uint8(v___x_2000_, 0, v___x_1999_);
v___x_2001_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2000_);
v_st_x27_1858_ = v___x_2001_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_2002_:
{
lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2003_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__16));
v___x_2004_ = lean_string_dec_eq(v_head_1850_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_2005_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__17));
v___x_2006_ = lean_string_dec_eq(v_head_1850_, v___x_2005_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; uint8_t v___x_2008_; 
v___x_2007_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__18));
v___x_2008_ = lean_string_dec_eq(v_head_1850_, v___x_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; uint8_t v___x_2010_; 
v___x_2009_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__19));
v___x_2010_ = lean_string_dec_eq(v_head_1850_, v___x_2009_);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__20));
v___x_2012_ = lean_string_dec_eq(v_head_1850_, v___x_2011_);
if (v___x_2012_ == 0)
{
goto v___jp_1882_;
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2013_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_2014_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__22));
v___x_2015_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2013_, v___x_2014_);
lean_dec(v___x_2013_);
if (v___x_2015_ == 0)
{
goto v___jp_1882_;
}
else
{
goto v___jp_1994_;
}
}
}
else
{
goto v___jp_1994_;
}
}
else
{
goto v___jp_1994_;
}
}
else
{
goto v___jp_1994_;
}
}
else
{
goto v___jp_1994_;
}
}
v___jp_2016_:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2018_ = l_List_head_x3f___redArg(v_tail_1851_);
v___x_2019_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__23));
v___x_2020_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2018_, v___x_2019_);
lean_dec(v___x_2018_);
if (v___x_2020_ == 0)
{
lean_object* v_left_2021_; lean_object* v_right_2022_; lean_object* v_n_2023_; lean_object* v_moves_2024_; lean_object* v_waiting_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2033_; 
v_left_2021_ = lean_ctor_get(v_x_1847_, 0);
v_right_2022_ = lean_ctor_get(v_x_1847_, 1);
v_n_2023_ = lean_ctor_get(v_x_1847_, 2);
v_moves_2024_ = lean_ctor_get(v_x_1847_, 3);
v_waiting_2025_ = lean_ctor_get(v_x_1847_, 4);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2027_ = v_x_1847_;
v_isShared_2028_ = v_isSharedCheck_2033_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_waiting_2025_);
lean_inc(v_moves_2024_);
lean_inc(v_n_2023_);
lean_inc(v_right_2022_);
lean_inc(v_left_2021_);
lean_dec(v_x_1847_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2033_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2031_; 
v___x_2029_ = lean_nat_add(v_right_2022_, v___y_2017_);
lean_dec(v___y_2017_);
lean_dec(v_right_2022_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 1, v___x_2029_);
v___x_2031_ = v___x_2027_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_left_2021_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2032_, 2, v_n_2023_);
lean_ctor_set(v_reuseFailAlloc_2032_, 3, v_moves_2024_);
lean_ctor_set(v_reuseFailAlloc_2032_, 4, v_waiting_2025_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
v_st_x27_1858_ = v___x_2031_;
v_skip_1859_ = v_one_1855_;
goto v___jp_1857_;
}
}
}
else
{
lean_object* v_left_2034_; lean_object* v_right_2035_; lean_object* v_n_2036_; lean_object* v_moves_2037_; lean_object* v_waiting_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2046_; 
v_left_2034_ = lean_ctor_get(v_x_1847_, 0);
v_right_2035_ = lean_ctor_get(v_x_1847_, 1);
v_n_2036_ = lean_ctor_get(v_x_1847_, 2);
v_moves_2037_ = lean_ctor_get(v_x_1847_, 3);
v_waiting_2038_ = lean_ctor_get(v_x_1847_, 4);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2040_ = v_x_1847_;
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_waiting_2038_);
lean_inc(v_moves_2037_);
lean_inc(v_n_2036_);
lean_inc(v_right_2035_);
lean_inc(v_left_2034_);
lean_dec(v_x_1847_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2042_ = lean_nat_add(v_left_2034_, v___y_2017_);
lean_dec(v___y_2017_);
lean_dec(v_left_2034_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2042_);
v___x_2044_ = v___x_2040_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v_right_2035_);
lean_ctor_set(v_reuseFailAlloc_2045_, 2, v_n_2036_);
lean_ctor_set(v_reuseFailAlloc_2045_, 3, v_moves_2037_);
lean_ctor_set(v_reuseFailAlloc_2045_, 4, v_waiting_2038_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v_st_x27_1858_ = v___x_2044_;
v_skip_1859_ = v_one_1855_;
goto v___jp_1857_;
}
}
}
}
v___jp_2047_:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2050_, 0, v___y_2048_);
lean_ctor_set_uint8(v___x_2050_, sizeof(void*)*1, v___y_2049_);
v___x_2051_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2050_);
v_st_x27_1858_ = v___x_2051_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
v___jp_2052_:
{
if (v___y_2057_ == 0)
{
lean_object* v___x_2058_; uint8_t v___x_2059_; 
v___x_2058_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__24));
v___x_2059_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2058_, v___y_2054_);
lean_dec(v___y_2054_);
if (v___x_2059_ == 0)
{
v___y_2048_ = v___y_2056_;
v___y_2049_ = v___y_2053_;
goto v___jp_2047_;
}
else
{
v___y_2048_ = v___y_2056_;
v___y_2049_ = v___y_2057_;
goto v___jp_2047_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_dec(v___y_2054_);
v___x_2060_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2060_, 0, v___y_2056_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*1, v___y_2055_);
v___x_2061_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2060_);
v_st_x27_1858_ = v___x_2061_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
v___jp_2062_:
{
lean_object* v___x_2068_; uint8_t v___x_2069_; 
v___x_2068_ = l_List_head_x3f___redArg(v___y_2065_);
v___x_2069_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2068_, v___y_2064_);
lean_dec(v___x_2068_);
if (v___x_2069_ == 0)
{
v___y_2053_ = v___y_2063_;
v___y_2054_ = v___y_2065_;
v___y_2055_ = v___y_2066_;
v___y_2056_ = v___y_2067_;
v___y_2057_ = v___x_2069_;
goto v___jp_2052_;
}
else
{
lean_object* v___x_2070_; uint8_t v___x_2071_; 
v___x_2070_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__24));
v___x_2071_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2070_, v___y_2065_);
v___y_2053_ = v___y_2063_;
v___y_2054_ = v___y_2065_;
v___y_2055_ = v___y_2066_;
v___y_2056_ = v___y_2067_;
v___y_2057_ = v___x_2071_;
goto v___jp_2052_;
}
}
v___jp_2072_:
{
if (v___y_2078_ == 0)
{
v___y_2063_ = v___y_2074_;
v___y_2064_ = v___y_2073_;
v___y_2065_ = v___y_2075_;
v___y_2066_ = v___y_2076_;
v___y_2067_ = v___y_2077_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
lean_dec(v___y_2075_);
v___x_2079_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___y_2077_);
v___x_2080_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2079_);
v_st_x27_1858_ = v___x_2080_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
v___jp_2081_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; 
v___x_2086_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_2087_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__26));
v___x_2088_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2086_, v___x_2087_);
lean_dec(v___x_2086_);
if (v___x_2088_ == 0)
{
v___y_2073_ = v___x_2087_;
v___y_2074_ = v___y_2082_;
v___y_2075_ = v___y_2083_;
v___y_2076_ = v___y_2084_;
v___y_2077_ = v___y_2085_;
v___y_2078_ = v___x_2088_;
goto v___jp_2072_;
}
else
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__24));
v___x_2090_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2089_, v___y_2083_);
if (v___x_2090_ == 0)
{
v___y_2073_ = v___x_2087_;
v___y_2074_ = v___y_2082_;
v___y_2075_ = v___y_2083_;
v___y_2076_ = v___y_2084_;
v___y_2077_ = v___y_2085_;
v___y_2078_ = v___y_2082_;
goto v___jp_2072_;
}
else
{
v___y_2063_ = v___y_2082_;
v___y_2064_ = v___x_2087_;
v___y_2065_ = v___y_2083_;
v___y_2066_ = v___y_2084_;
v___y_2067_ = v___y_2085_;
goto v___jp_2062_;
}
}
}
v___jp_2091_:
{
if (v___y_2095_ == 0)
{
lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2096_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__27));
v___x_2097_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2096_, v___y_2093_);
if (v___x_2097_ == 0)
{
v___y_2082_ = v___y_2092_;
v___y_2083_ = v___y_2093_;
v___y_2084_ = v___y_2094_;
v___y_2085_ = v_one_1855_;
goto v___jp_2081_;
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_unsigned_to_nat(3u);
v___y_2082_ = v___y_2092_;
v___y_2083_ = v___y_2093_;
v___y_2084_ = v___y_2094_;
v___y_2085_ = v___x_2098_;
goto v___jp_2081_;
}
}
else
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_unsigned_to_nat(4u);
v___y_2082_ = v___y_2092_;
v___y_2083_ = v___y_2093_;
v___y_2084_ = v___y_2094_;
v___y_2085_ = v___x_2099_;
goto v___jp_2081_;
}
}
v___jp_2100_:
{
if (v___y_2104_ == 0)
{
lean_object* v___x_2105_; uint8_t v___x_2106_; 
v___x_2105_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__28));
v___x_2106_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2105_, v___y_2102_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; uint8_t v___x_2108_; 
v___x_2107_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__29));
v___x_2108_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2107_, v___y_2102_);
v___y_2092_ = v___y_2101_;
v___y_2093_ = v___y_2102_;
v___y_2094_ = v___y_2103_;
v___y_2095_ = v___x_2108_;
goto v___jp_2091_;
}
else
{
v___y_2092_ = v___y_2101_;
v___y_2093_ = v___y_2102_;
v___y_2094_ = v___y_2103_;
v___y_2095_ = v___x_2106_;
goto v___jp_2091_;
}
}
else
{
lean_object* v___x_2109_; 
v___x_2109_ = lean_unsigned_to_nat(2u);
v___y_2082_ = v___y_2101_;
v___y_2083_ = v___y_2102_;
v___y_2084_ = v___y_2103_;
v___y_2085_ = v___x_2109_;
goto v___jp_2081_;
}
}
v___jp_2110_:
{
lean_object* v_left_2112_; lean_object* v_right_2113_; lean_object* v_n_2114_; lean_object* v_moves_2115_; lean_object* v_waiting_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2130_; 
v_left_2112_ = lean_ctor_get(v_x_1847_, 0);
v_right_2113_ = lean_ctor_get(v_x_1847_, 1);
v_n_2114_ = lean_ctor_get(v_x_1847_, 2);
v_moves_2115_ = lean_ctor_get(v_x_1847_, 3);
v_waiting_2116_ = lean_ctor_get(v_x_1847_, 4);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2118_ = v_x_1847_;
v_isShared_2119_ = v_isSharedCheck_2130_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_waiting_2116_);
lean_inc(v_moves_2115_);
lean_inc(v_n_2114_);
lean_inc(v_right_2113_);
lean_inc(v_left_2112_);
lean_dec(v_x_1847_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2130_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2120_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__1));
v___x_2121_ = lean_unsigned_to_nat(2u);
v___x_2122_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
lean_ctor_set_uint8(v___x_2122_, sizeof(void*)*1, v___y_2111_);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2120_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = l_List_appendTR___redArg(v_moves_2115_, v___x_2125_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 3, v___x_2126_);
v___x_2128_ = v___x_2118_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_left_2112_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_right_2113_);
lean_ctor_set(v_reuseFailAlloc_2129_, 2, v_n_2114_);
lean_ctor_set(v_reuseFailAlloc_2129_, 3, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2129_, 4, v_waiting_2116_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
v_st_x27_1858_ = v___x_2128_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
}
v___jp_2131_:
{
if (v___y_2133_ == 0)
{
lean_dec(v___y_2132_);
goto v___jp_1986_;
}
else
{
lean_object* v_left_2134_; lean_object* v_right_2135_; lean_object* v_moves_2136_; lean_object* v_waiting_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
v_left_2134_ = lean_ctor_get(v_x_1847_, 0);
v_right_2135_ = lean_ctor_get(v_x_1847_, 1);
v_moves_2136_ = lean_ctor_get(v_x_1847_, 3);
v_waiting_2137_ = lean_ctor_get(v_x_1847_, 4);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_2144_ == 0)
{
lean_object* v_unused_2145_; 
v_unused_2145_ = lean_ctor_get(v_x_1847_, 2);
lean_dec(v_unused_2145_);
v___x_2139_ = v_x_1847_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_waiting_2137_);
lean_inc(v_moves_2136_);
lean_inc(v_right_2135_);
lean_inc(v_left_2134_);
lean_dec(v_x_1847_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 2, v___y_2132_);
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_left_2134_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v_right_2135_);
lean_ctor_set(v_reuseFailAlloc_2143_, 2, v___y_2132_);
lean_ctor_set(v_reuseFailAlloc_2143_, 3, v_moves_2136_);
lean_ctor_set(v_reuseFailAlloc_2143_, 4, v_waiting_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
v_st_x27_1858_ = v___x_2142_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
}
}
v___jp_2147_:
{
lean_object* v___x_2150_; lean_object* v_near_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2150_ = lean_unsigned_to_nat(6u);
lean_inc(v_tail_1851_);
v_near_2151_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v___x_2150_, v___x_2146_);
v___x_2152_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__30));
v___x_2153_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2152_, v_near_2151_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2154_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__31));
v___x_2155_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2154_, v_near_2151_);
v___y_2101_ = v___y_2149_;
v___y_2102_ = v_near_2151_;
v___y_2103_ = v___y_2148_;
v___y_2104_ = v___x_2155_;
goto v___jp_2100_;
}
else
{
v___y_2101_ = v___y_2149_;
v___y_2102_ = v_near_2151_;
v___y_2103_ = v___y_2148_;
v___y_2104_ = v___x_2153_;
goto v___jp_2100_;
}
}
v___jp_2156_:
{
lean_object* v___x_2158_; uint8_t v___x_2159_; 
v___x_2158_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__32));
v___x_2159_ = lean_string_dec_eq(v_head_1850_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__33));
v___x_2161_ = lean_string_dec_eq(v_head_1850_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; uint8_t v___x_2163_; 
v___x_2162_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__34));
v___x_2163_ = lean_string_dec_eq(v_head_1850_, v___x_2162_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; uint8_t v___x_2165_; 
v___x_2164_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__35));
v___x_2165_ = lean_string_dec_eq(v_head_1850_, v___x_2164_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; uint8_t v___x_2167_; 
v___x_2166_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__36));
v___x_2167_ = lean_string_dec_eq(v_head_1850_, v___x_2166_);
if (v___x_2167_ == 0)
{
lean_object* v___x_2168_; uint8_t v___x_2169_; 
v___x_2168_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__37));
v___x_2169_ = lean_string_dec_eq(v_head_1850_, v___x_2168_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; uint8_t v___x_2171_; 
v___x_2170_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__38));
v___x_2171_ = lean_string_dec_eq(v_head_1850_, v___x_2170_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; uint8_t v___x_2173_; 
v___x_2172_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__39));
v___x_2173_ = lean_string_dec_eq(v_head_1850_, v___x_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2174_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__40));
v___x_2175_ = lean_string_dec_eq(v_head_1850_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; uint8_t v___x_2177_; 
v___x_2176_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__41));
v___x_2177_ = lean_string_dec_eq(v_head_1850_, v___x_2176_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; uint8_t v___x_2179_; 
v___x_2178_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__42));
v___x_2179_ = lean_string_dec_eq(v_head_1850_, v___x_2178_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; uint8_t v___x_2181_; 
v___x_2180_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__43));
v___x_2181_ = lean_string_dec_eq(v_head_1850_, v___x_2180_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2182_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__44));
v___x_2183_ = lean_string_dec_eq(v_head_1850_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; uint8_t v___x_2185_; 
v___x_2184_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__45));
v___x_2185_ = lean_string_dec_eq(v_head_1850_, v___x_2184_);
if (v___x_2185_ == 0)
{
lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2186_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__46));
v___x_2187_ = lean_string_dec_eq(v_head_1850_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; uint8_t v___x_2189_; 
v___x_2188_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__47));
v___x_2189_ = lean_string_dec_eq(v_head_1850_, v___x_2188_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2190_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__48));
v___x_2191_ = lean_string_dec_eq(v_head_1850_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2192_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__49));
v___x_2193_ = lean_string_dec_eq(v_head_1850_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__50));
v___x_2195_ = lean_string_dec_eq(v_head_1850_, v___x_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; uint8_t v___x_2197_; 
v___x_2196_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__51));
v___x_2197_ = lean_string_dec_eq(v_head_1850_, v___x_2196_);
if (v___x_2197_ == 0)
{
lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2198_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__52));
v___x_2199_ = lean_string_dec_eq(v_head_1850_, v___x_2198_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; uint8_t v___x_2201_; 
v___x_2200_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__53));
v___x_2201_ = lean_string_dec_eq(v_head_1850_, v___x_2200_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; uint8_t v___x_2203_; 
v___x_2202_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__54));
v___x_2203_ = lean_string_dec_eq(v_head_1850_, v___x_2202_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__55));
v___x_2205_ = lean_string_dec_eq(v_head_1850_, v___x_2204_);
if (v___x_2205_ == 0)
{
goto v___jp_2002_;
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2206_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_2207_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__57));
v___x_2208_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2206_, v___x_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; uint8_t v___x_2210_; 
v___x_2209_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__59));
v___x_2210_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2206_, v___x_2209_);
if (v___x_2210_ == 0)
{
lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2211_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__61));
v___x_2212_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2206_, v___x_2211_);
lean_dec(v___x_2206_);
if (v___x_2212_ == 0)
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2205_;
goto v___jp_2147_;
}
else
{
goto v___jp_2002_;
}
}
else
{
lean_dec(v___x_2206_);
goto v___jp_2002_;
}
}
else
{
lean_dec(v___x_2206_);
goto v___jp_2002_;
}
}
}
else
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2203_;
goto v___jp_2147_;
}
}
else
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2201_;
goto v___jp_2147_;
}
}
else
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2199_;
goto v___jp_2147_;
}
}
else
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2197_;
goto v___jp_2147_;
}
}
else
{
v___y_2148_ = v___y_2157_;
v___y_2149_ = v___x_2195_;
goto v___jp_2147_;
}
}
else
{
goto v___jp_1890_;
}
}
else
{
goto v___jp_1890_;
}
}
else
{
goto v___jp_1890_;
}
}
else
{
goto v___jp_1890_;
}
}
else
{
goto v___jp_1893_;
}
}
else
{
goto v___jp_1893_;
}
}
else
{
goto v___jp_1893_;
}
}
else
{
goto v___jp_1893_;
}
}
else
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__62));
v___x_2214_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2213_);
v_st_x27_1858_ = v___x_2214_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
else
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__63));
v___x_2216_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2215_);
v_st_x27_1858_ = v___x_2216_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__64));
v___x_2218_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2217_);
v_st_x27_1858_ = v___x_2218_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
else
{
goto v___jp_1896_;
}
}
else
{
goto v___jp_1896_;
}
}
else
{
goto v___jp_1903_;
}
}
else
{
goto v___jp_1903_;
}
}
else
{
goto v___jp_1903_;
}
}
else
{
goto v___jp_1903_;
}
}
else
{
goto v___jp_1903_;
}
}
v___jp_2219_:
{
lean_object* v___x_2221_; uint8_t v___x_2222_; 
v___x_2221_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__65));
v___x_2222_ = lean_string_dec_eq(v_head_1850_, v___x_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; uint8_t v___x_2224_; 
v___x_2223_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__66));
v___x_2224_ = lean_string_dec_eq(v_head_1850_, v___x_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__67));
v___x_2226_ = lean_string_dec_eq(v_head_1850_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; uint8_t v___x_2228_; 
v___x_2227_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__68));
v___x_2228_ = lean_string_dec_eq(v_head_1850_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2229_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__69));
v___x_2230_ = lean_string_dec_eq(v_head_1850_, v___x_2229_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__70));
v___x_2232_ = lean_string_dec_eq(v_head_1850_, v___x_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__71));
v___x_2234_ = lean_string_dec_eq(v_head_1850_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__72));
v___x_2236_ = lean_string_dec_eq(v_head_1850_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__73));
v___x_2238_ = lean_string_dec_eq(v_head_1850_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2239_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__74));
v___x_2240_ = lean_string_dec_eq(v_head_1850_, v___x_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2241_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__75));
v___x_2242_ = lean_string_dec_eq(v_head_1850_, v___x_2241_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2243_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__76));
v___x_2244_ = lean_string_dec_eq(v_head_1850_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2245_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__77));
v___x_2246_ = lean_string_dec_eq(v_head_1850_, v___x_2245_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2247_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__78));
v___x_2248_ = lean_string_dec_eq(v_head_1850_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2249_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__79));
v___x_2250_ = lean_string_dec_eq(v_head_1850_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
v___x_2251_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__80));
v___x_2252_ = lean_string_dec_eq(v_head_1850_, v___x_2251_);
if (v___x_2252_ == 0)
{
lean_object* v___x_2253_; uint8_t v___x_2254_; 
v___x_2253_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__81));
v___x_2254_ = lean_string_dec_eq(v_head_1850_, v___x_2253_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; uint8_t v___x_2256_; 
v___x_2255_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__82));
v___x_2256_ = lean_string_dec_eq(v_head_1850_, v___x_2255_);
if (v___x_2256_ == 0)
{
lean_object* v___x_2257_; uint8_t v___x_2258_; 
v___x_2257_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__83));
v___x_2258_ = lean_string_dec_eq(v_head_1850_, v___x_2257_);
if (v___x_2258_ == 0)
{
v___y_2157_ = v___y_2220_;
goto v___jp_2156_;
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2259_ = lean_unsigned_to_nat(2u);
lean_inc(v_tail_1851_);
v___x_2260_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v___x_2259_, v___x_2146_);
v___x_2261_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__84));
v___x_2262_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2261_, v___x_2260_);
lean_dec(v___x_2260_);
if (v___x_2262_ == 0)
{
v___y_2157_ = v___y_2220_;
goto v___jp_2156_;
}
else
{
goto v___jp_1906_;
}
}
}
else
{
goto v___jp_1906_;
}
}
else
{
goto v___jp_1906_;
}
}
else
{
goto v___jp_1906_;
}
}
else
{
goto v___jp_1909_;
}
}
else
{
goto v___jp_1909_;
}
}
else
{
goto v___jp_1909_;
}
}
else
{
goto v___jp_1909_;
}
}
else
{
goto v___jp_1909_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1912_;
}
}
else
{
goto v___jp_1915_;
}
}
else
{
goto v___jp_1915_;
}
}
else
{
goto v___jp_1915_;
}
}
else
{
goto v___jp_1915_;
}
}
v___jp_2263_:
{
if (v___y_2265_ == 0)
{
lean_object* v___x_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2266_ = l_List_head_x3f___redArg(v_tail_1851_);
v___x_2267_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__86));
v___x_2268_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2266_, v___x_2267_);
lean_dec(v___x_2266_);
if (v___x_2268_ == 0)
{
v___y_2220_ = v___y_2264_;
goto v___jp_2219_;
}
else
{
goto v___jp_1870_;
}
}
else
{
goto v___jp_1870_;
}
}
v___jp_2269_:
{
lean_object* v___x_2271_; uint8_t v___x_2272_; 
v___x_2271_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__87));
v___x_2272_ = lean_string_dec_eq(v_head_1850_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__88));
v___x_2274_ = lean_string_dec_eq(v_head_1850_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; uint8_t v___x_2276_; 
v___x_2275_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__89));
v___x_2276_ = lean_string_dec_eq(v_head_1850_, v___x_2275_);
if (v___x_2276_ == 0)
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__90));
v___x_2278_ = lean_string_dec_eq(v_head_1850_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2279_; uint8_t v___x_2280_; 
v___x_2279_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__91));
v___x_2280_ = lean_string_dec_eq(v_head_1850_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; uint8_t v___x_2282_; 
v___x_2281_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__92));
v___x_2282_ = lean_string_dec_eq(v_head_1850_, v___x_2281_);
if (v___x_2282_ == 0)
{
v___y_2220_ = v___y_2270_;
goto v___jp_2219_;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; uint8_t v___x_2285_; 
v___x_2283_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_2284_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__3));
v___x_2285_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2283_, v___x_2284_);
lean_dec(v___x_2283_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; lean_object* v___x_2287_; uint8_t v___x_2288_; 
v___x_2286_ = l_List_head_x3f___redArg(v_tail_1851_);
v___x_2287_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__94));
v___x_2288_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2286_, v___x_2287_);
lean_dec(v___x_2286_);
v___y_2264_ = v___y_2270_;
v___y_2265_ = v___x_2288_;
goto v___jp_2263_;
}
else
{
v___y_2264_ = v___y_2270_;
v___y_2265_ = v___x_2285_;
goto v___jp_2263_;
}
}
}
else
{
v___y_2111_ = v___y_2270_;
goto v___jp_2110_;
}
}
else
{
v___y_2111_ = v___y_2270_;
goto v___jp_2110_;
}
}
else
{
goto v___jp_1918_;
}
}
else
{
goto v___jp_1918_;
}
}
else
{
goto v___jp_1918_;
}
}
v___jp_2289_:
{
if (v___y_2294_ == 0)
{
lean_dec(v___y_2290_);
goto v___jp_1986_;
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2296_; uint8_t v___x_2297_; 
v___x_2295_ = lean_unsigned_to_nat(4u);
lean_inc(v_tail_1851_);
v___x_2296_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1851_, v_tail_1851_, v___x_2295_, v___x_2146_);
v___x_2297_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___y_2292_, v___x_2296_);
lean_dec(v___x_2296_);
if (v___x_2297_ == 0)
{
v___y_2132_ = v___y_2290_;
v___y_2133_ = v___y_2293_;
goto v___jp_2131_;
}
else
{
v___y_2132_ = v___y_2290_;
v___y_2133_ = v___y_2291_;
goto v___jp_2131_;
}
}
}
v___jp_2298_:
{
lean_object* v___x_2302_; 
v___x_2302_ = l_List_getLast_x3f___redArg(v_x_1845_);
if (lean_obj_tag(v___x_2302_) == 0)
{
goto v___jp_1987_;
}
else
{
lean_object* v_val_2303_; lean_object* v___x_2304_; 
v_val_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_val_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v___x_2304_ = lp_choreo_Choreo_wordNumber(v_val_2303_);
if (lean_obj_tag(v___x_2304_) == 0)
{
goto v___jp_1987_;
}
else
{
lean_object* v_n_2305_; 
v_n_2305_ = lean_ctor_get(v_x_1847_, 2);
if (lean_obj_tag(v_n_2305_) == 0)
{
v___y_2290_ = v___x_2304_;
v___y_2291_ = v___y_2299_;
v___y_2292_ = v___y_2300_;
v___y_2293_ = v___y_2301_;
v___y_2294_ = v___y_2301_;
goto v___jp_2289_;
}
else
{
v___y_2290_ = v___x_2304_;
v___y_2291_ = v___y_2299_;
v___y_2292_ = v___y_2300_;
v___y_2293_ = v___y_2301_;
v___y_2294_ = v___y_2299_;
goto v___jp_2289_;
}
}
}
}
v___jp_2309_:
{
if (v_isShapeAfterComing_2308_ == 0)
{
lean_inc(v_tail_1851_);
v___y_1939_ = v_tail_1851_;
goto v___jp_1938_;
}
else
{
lean_object* v___x_2310_; 
v___x_2310_ = l_List_drop___redArg(v_one_1855_, v_tail_1851_);
v___y_1939_ = v___x_2310_;
goto v___jp_1938_;
}
}
v___jp_2311_:
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__97));
v___x_2316_ = lean_string_dec_eq(v_head_1850_, v___x_2315_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2317_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__98));
v___x_2318_ = lean_string_dec_eq(v_head_1850_, v___x_2317_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; uint8_t v___x_2320_; 
v___x_2319_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__99));
v___x_2320_ = lean_string_dec_eq(v_head_1850_, v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2321_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__100));
v___x_2322_ = lean_string_dec_eq(v_head_1850_, v___x_2321_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; uint8_t v___x_2324_; 
v___x_2323_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__101));
v___x_2324_ = lean_string_dec_eq(v_head_1850_, v___x_2323_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; uint8_t v___x_2326_; 
v___x_2325_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__102));
v___x_2326_ = lean_string_dec_eq(v_head_1850_, v___x_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; uint8_t v___x_2328_; 
v___x_2327_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__103));
v___x_2328_ = lean_string_dec_eq(v_head_1850_, v___x_2327_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2329_; uint8_t v___x_2330_; 
v___x_2329_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__104));
v___x_2330_ = lean_string_dec_eq(v_head_1850_, v___x_2329_);
if (v___x_2330_ == 0)
{
lean_object* v___x_2331_; uint8_t v___x_2332_; 
v___x_2331_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__105));
v___x_2332_ = lean_string_dec_eq(v_head_1850_, v___x_2331_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2333_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__106));
v___x_2334_ = lean_string_dec_eq(v_head_1850_, v___x_2333_);
if (v___x_2334_ == 0)
{
v___y_2270_ = v___y_2313_;
goto v___jp_2269_;
}
else
{
lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v___x_2335_ = l_List_getLast_x3f___redArg(v_x_1845_);
v___x_2336_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__108));
v___x_2337_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2335_, v___x_2336_);
lean_dec(v___x_2335_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2338_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__109));
v___x_2339_ = lp_choreo_Choreo_scan___lam__0(v_x_1847_, v___x_2338_);
v_st_x27_1858_ = v___x_2339_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
else
{
v___y_2270_ = v___y_2313_;
goto v___jp_2269_;
}
}
}
else
{
goto v___jp_1921_;
}
}
else
{
goto v___jp_1921_;
}
}
else
{
goto v___jp_1921_;
}
}
else
{
goto v___jp_2309_;
}
}
else
{
goto v___jp_2309_;
}
}
else
{
goto v___jp_2309_;
}
}
else
{
v___y_2299_ = v___y_2314_;
v___y_2300_ = v___y_2312_;
v___y_2301_ = v___x_2320_;
goto v___jp_2298_;
}
}
else
{
v___y_2299_ = v___y_2314_;
v___y_2300_ = v___y_2312_;
v___y_2301_ = v___x_2318_;
goto v___jp_2298_;
}
}
else
{
v___y_2299_ = v___y_2314_;
v___y_2300_ = v___y_2312_;
v___y_2301_ = v___x_2316_;
goto v___jp_2298_;
}
}
v___jp_2340_:
{
if (v___y_2343_ == 0)
{
v___y_2312_ = v___y_2341_;
v___y_2313_ = v___y_2342_;
v___y_2314_ = v___y_2343_;
goto v___jp_2311_;
}
else
{
lean_object* v___x_2344_; 
lean_inc(v_x_1845_);
v___x_2344_ = lp_choreo_Choreo_countBefore(v_x_1845_);
if (lean_obj_tag(v___x_2344_) == 0)
{
v___y_2017_ = v_zero_1848_;
goto v___jp_2016_;
}
else
{
lean_object* v_val_2345_; 
v_val_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_val_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v___y_2017_ = v_val_2345_;
goto v___jp_2016_;
}
}
}
v___jp_2346_:
{
lean_object* v___x_2347_; uint8_t v___x_2348_; 
v___x_2347_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__110));
v___x_2348_ = lean_string_dec_eq(v_head_1850_, v___x_2347_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; uint8_t v___x_2350_; 
v___x_2349_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__111));
v___x_2350_ = lean_string_dec_eq(v_head_1850_, v___x_2349_);
if (v___x_2350_ == 0)
{
lean_object* v___x_2351_; uint8_t v___x_2352_; 
v___x_2351_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__112));
v___x_2352_ = lean_string_dec_eq(v_head_1850_, v___x_2351_);
if (v___x_2352_ == 0)
{
lean_object* v___x_2353_; uint8_t v___x_2354_; 
v___x_2353_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__113));
v___x_2354_ = lean_string_dec_eq(v_head_1850_, v___x_2353_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2355_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__114));
v___x_2356_ = lean_string_dec_eq(v_head_1850_, v___x_2355_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__115));
v___x_2358_ = lean_string_dec_eq(v_head_1850_, v___x_2357_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__116));
v___x_2360_ = lean_string_dec_eq(v_head_1850_, v___x_2359_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__117));
v___x_2362_ = lean_string_dec_eq(v_head_1850_, v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2363_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__118));
v___x_2364_ = lean_string_dec_eq(v_head_1850_, v___x_2363_);
if (v___x_2364_ == 0)
{
uint8_t v___x_2365_; lean_object* v___x_2366_; uint8_t v___x_2367_; 
v___x_2365_ = 1;
v___x_2366_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__119));
v___x_2367_ = lean_string_dec_eq(v_head_1850_, v___x_2366_);
if (v___x_2367_ == 0)
{
v___y_2312_ = v___x_2366_;
v___y_2313_ = v___x_2365_;
v___y_2314_ = v___x_2367_;
goto v___jp_2311_;
}
else
{
lean_object* v___x_2368_; lean_object* v___x_2369_; uint8_t v___x_2370_; 
v___x_2368_ = l_List_head_x3f___redArg(v_tail_1851_);
v___x_2369_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__23));
v___x_2370_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2368_, v___x_2369_);
if (v___x_2370_ == 0)
{
lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___x_2371_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__120));
v___x_2372_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2368_, v___x_2371_);
lean_dec(v___x_2368_);
v___y_2341_ = v___x_2366_;
v___y_2342_ = v___x_2365_;
v___y_2343_ = v___x_2372_;
goto v___jp_2340_;
}
else
{
lean_dec(v___x_2368_);
v___y_2341_ = v___x_2366_;
v___y_2342_ = v___x_2365_;
v___y_2343_ = v___x_2370_;
goto v___jp_2340_;
}
}
}
else
{
goto v___jp_1988_;
}
}
else
{
goto v___jp_1988_;
}
}
else
{
goto v___jp_1988_;
}
}
else
{
goto v___jp_1991_;
}
}
else
{
goto v___jp_1991_;
}
}
else
{
goto v___jp_1991_;
}
}
else
{
goto v___jp_1991_;
}
}
else
{
goto v___jp_1991_;
}
}
else
{
goto v___jp_1991_;
}
}
v___jp_2373_:
{
lean_object* v_waiting_2374_; 
v_waiting_2374_ = lean_ctor_get(v_x_1847_, 4);
if (lean_obj_tag(v_waiting_2374_) == 0)
{
lean_object* v_left_2375_; lean_object* v_right_2376_; lean_object* v_n_2377_; lean_object* v_moves_2378_; lean_object* v___x_2379_; 
v_left_2375_ = lean_ctor_get(v_x_1847_, 0);
v_right_2376_ = lean_ctor_get(v_x_1847_, 1);
v_n_2377_ = lean_ctor_get(v_x_1847_, 2);
v_moves_2378_ = lean_ctor_get(v_x_1847_, 3);
lean_inc(v_x_1845_);
v___x_2379_ = lp_choreo_Choreo_countBefore(v_x_1845_);
if (lean_obj_tag(v___x_2379_) == 0)
{
v_st_x27_1858_ = v_x_1847_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
else
{
lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
lean_inc(v_moves_2378_);
lean_inc(v_n_2377_);
lean_inc(v_right_2376_);
lean_inc(v_left_2375_);
v_isSharedCheck_2386_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_2386_ == 0)
{
lean_object* v_unused_2387_; lean_object* v_unused_2388_; lean_object* v_unused_2389_; lean_object* v_unused_2390_; lean_object* v_unused_2391_; 
v_unused_2387_ = lean_ctor_get(v_x_1847_, 4);
lean_dec(v_unused_2387_);
v_unused_2388_ = lean_ctor_get(v_x_1847_, 3);
lean_dec(v_unused_2388_);
v_unused_2389_ = lean_ctor_get(v_x_1847_, 2);
lean_dec(v_unused_2389_);
v_unused_2390_ = lean_ctor_get(v_x_1847_, 1);
lean_dec(v_unused_2390_);
v_unused_2391_ = lean_ctor_get(v_x_1847_, 0);
lean_dec(v_unused_2391_);
v___x_2381_ = v_x_1847_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_dec(v_x_1847_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 4, v___x_2379_);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_left_2375_);
lean_ctor_set(v_reuseFailAlloc_2385_, 1, v_right_2376_);
lean_ctor_set(v_reuseFailAlloc_2385_, 2, v_n_2377_);
lean_ctor_set(v_reuseFailAlloc_2385_, 3, v_moves_2378_);
lean_ctor_set(v_reuseFailAlloc_2385_, 4, v___x_2379_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
v_st_x27_1858_ = v___x_2384_;
v_skip_1859_ = v_zero_1848_;
goto v___jp_1857_;
}
}
}
}
else
{
goto v___jp_2346_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_genreOf(lean_object* v_ts_2530_){
_start:
{
uint8_t v___y_2532_; uint8_t v___y_2558_; uint8_t v___y_2566_; uint8_t v___y_2574_; uint8_t v___y_2582_; uint8_t v___y_2590_; uint8_t v___y_2597_; uint8_t v___y_2605_; uint8_t v___y_2612_; uint8_t v___y_2624_; uint8_t v___y_2631_; uint8_t v___y_2641_; uint8_t v___y_2649_; uint8_t v___y_2656_; uint8_t v___y_2682_; uint8_t v___y_2692_; uint8_t v___y_2699_; lean_object* v___x_2706_; uint8_t v___x_2707_; 
v___x_2706_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__91));
v___x_2707_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2706_, v_ts_2530_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; uint8_t v___x_2709_; 
v___x_2708_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__92));
v___x_2709_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2708_, v_ts_2530_);
v___y_2699_ = v___x_2709_;
goto v___jp_2698_;
}
else
{
v___y_2699_ = v___x_2707_;
goto v___jp_2698_;
}
v___jp_2531_:
{
if (v___y_2532_ == 0)
{
lean_object* v___x_2533_; 
v___x_2533_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__1));
return v___x_2533_;
}
else
{
lean_object* v___x_2534_; 
v___x_2534_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__3));
return v___x_2534_;
}
}
v___jp_2535_:
{
lean_object* v___x_2536_; 
v___x_2536_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__5));
return v___x_2536_;
}
v___jp_2537_:
{
lean_object* v___x_2538_; 
v___x_2538_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__7));
return v___x_2538_;
}
v___jp_2539_:
{
lean_object* v___x_2540_; 
v___x_2540_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__9));
return v___x_2540_;
}
v___jp_2541_:
{
lean_object* v___x_2542_; 
v___x_2542_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__11));
return v___x_2542_;
}
v___jp_2543_:
{
lean_object* v___x_2544_; 
v___x_2544_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__13));
return v___x_2544_;
}
v___jp_2545_:
{
lean_object* v___x_2546_; 
v___x_2546_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__15));
return v___x_2546_;
}
v___jp_2547_:
{
lean_object* v___x_2548_; 
v___x_2548_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__17));
return v___x_2548_;
}
v___jp_2549_:
{
lean_object* v___x_2550_; 
v___x_2550_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__19));
return v___x_2550_;
}
v___jp_2551_:
{
lean_object* v___x_2552_; 
v___x_2552_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__21));
return v___x_2552_;
}
v___jp_2553_:
{
lean_object* v___x_2554_; 
v___x_2554_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__23));
return v___x_2554_;
}
v___jp_2555_:
{
lean_object* v___x_2556_; 
v___x_2556_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__25));
return v___x_2556_;
}
v___jp_2557_:
{
if (v___y_2558_ == 0)
{
lean_object* v___x_2559_; uint8_t v___x_2560_; 
v___x_2559_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__26));
v___x_2560_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2559_, v_ts_2530_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; uint8_t v___x_2562_; 
v___x_2561_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__27));
v___x_2562_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2561_, v_ts_2530_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2563_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__28));
v___x_2564_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2563_, v_ts_2530_);
v___y_2532_ = v___x_2564_;
goto v___jp_2531_;
}
else
{
v___y_2532_ = v___x_2562_;
goto v___jp_2531_;
}
}
else
{
goto v___jp_2535_;
}
}
else
{
goto v___jp_2535_;
}
}
v___jp_2565_:
{
if (v___y_2566_ == 0)
{
lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2567_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__29));
v___x_2568_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2567_, v_ts_2530_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; uint8_t v___x_2570_; 
v___x_2569_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__30));
v___x_2570_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2569_, v_ts_2530_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; uint8_t v___x_2572_; 
v___x_2571_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__31));
v___x_2572_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2571_, v_ts_2530_);
v___y_2558_ = v___x_2572_;
goto v___jp_2557_;
}
else
{
v___y_2558_ = v___x_2570_;
goto v___jp_2557_;
}
}
else
{
goto v___jp_2537_;
}
}
else
{
goto v___jp_2537_;
}
}
v___jp_2573_:
{
if (v___y_2574_ == 0)
{
lean_object* v___x_2575_; uint8_t v___x_2576_; 
v___x_2575_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__32));
v___x_2576_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2575_, v_ts_2530_);
if (v___x_2576_ == 0)
{
lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2577_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__33));
v___x_2578_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2577_, v_ts_2530_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2579_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__34));
v___x_2580_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2579_, v_ts_2530_);
v___y_2566_ = v___x_2580_;
goto v___jp_2565_;
}
else
{
v___y_2566_ = v___x_2578_;
goto v___jp_2565_;
}
}
else
{
goto v___jp_2539_;
}
}
else
{
goto v___jp_2539_;
}
}
v___jp_2581_:
{
if (v___y_2582_ == 0)
{
lean_object* v___x_2583_; uint8_t v___x_2584_; 
v___x_2583_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__35));
v___x_2584_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2583_, v_ts_2530_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; uint8_t v___x_2586_; 
v___x_2585_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__36));
v___x_2586_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2585_, v_ts_2530_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2587_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__37));
v___x_2588_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2587_, v_ts_2530_);
v___y_2574_ = v___x_2588_;
goto v___jp_2573_;
}
else
{
v___y_2574_ = v___x_2586_;
goto v___jp_2573_;
}
}
else
{
goto v___jp_2541_;
}
}
else
{
goto v___jp_2541_;
}
}
v___jp_2589_:
{
if (v___y_2590_ == 0)
{
lean_object* v___x_2591_; uint8_t v___x_2592_; 
v___x_2591_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__38));
v___x_2592_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2591_, v_ts_2530_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; uint8_t v___x_2594_; 
v___x_2593_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__39));
v___x_2594_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2593_, v_ts_2530_);
v___y_2582_ = v___x_2594_;
goto v___jp_2581_;
}
else
{
v___y_2582_ = v___x_2592_;
goto v___jp_2581_;
}
}
else
{
lean_object* v___x_2595_; 
v___x_2595_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__41));
return v___x_2595_;
}
}
v___jp_2596_:
{
if (v___y_2597_ == 0)
{
lean_object* v___x_2598_; uint8_t v___x_2599_; 
v___x_2598_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__42));
v___x_2599_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2598_, v_ts_2530_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; uint8_t v___x_2601_; 
v___x_2600_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__43));
v___x_2601_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2600_, v_ts_2530_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; uint8_t v___x_2603_; 
v___x_2602_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__44));
v___x_2603_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2602_, v_ts_2530_);
v___y_2590_ = v___x_2603_;
goto v___jp_2589_;
}
else
{
v___y_2590_ = v___x_2601_;
goto v___jp_2589_;
}
}
else
{
goto v___jp_2543_;
}
}
else
{
goto v___jp_2543_;
}
}
v___jp_2604_:
{
if (v___y_2605_ == 0)
{
lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2606_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__107));
v___x_2607_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2606_, v_ts_2530_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2608_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__45));
v___x_2609_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2608_, v_ts_2530_);
v___y_2597_ = v___x_2609_;
goto v___jp_2596_;
}
else
{
v___y_2597_ = v___x_2607_;
goto v___jp_2596_;
}
}
else
{
lean_object* v___x_2610_; 
v___x_2610_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__47));
return v___x_2610_;
}
}
v___jp_2611_:
{
if (v___y_2612_ == 0)
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__48));
v___x_2614_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2613_, v_ts_2530_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2615_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__49));
v___x_2616_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2615_, v_ts_2530_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; uint8_t v___x_2618_; 
v___x_2617_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__50));
v___x_2618_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2617_, v_ts_2530_);
if (v___x_2618_ == 0)
{
lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2619_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__51));
v___x_2620_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2619_, v_ts_2530_);
if (v___x_2620_ == 0)
{
v___y_2605_ = v___x_2616_;
goto v___jp_2604_;
}
else
{
lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2621_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__52));
v___x_2622_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2621_, v_ts_2530_);
v___y_2605_ = v___x_2622_;
goto v___jp_2604_;
}
}
else
{
v___y_2605_ = v___x_2618_;
goto v___jp_2604_;
}
}
else
{
goto v___jp_2545_;
}
}
else
{
goto v___jp_2545_;
}
}
else
{
goto v___jp_2545_;
}
}
v___jp_2623_:
{
if (v___y_2624_ == 0)
{
lean_object* v___x_2625_; uint8_t v___x_2626_; 
v___x_2625_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__53));
v___x_2626_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2625_, v_ts_2530_);
if (v___x_2626_ == 0)
{
lean_object* v___x_2627_; uint8_t v___x_2628_; 
v___x_2627_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__54));
v___x_2628_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2627_, v_ts_2530_);
v___y_2612_ = v___x_2628_;
goto v___jp_2611_;
}
else
{
v___y_2612_ = v___x_2626_;
goto v___jp_2611_;
}
}
else
{
lean_object* v___x_2629_; 
v___x_2629_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__56));
return v___x_2629_;
}
}
v___jp_2630_:
{
if (v___y_2631_ == 0)
{
lean_object* v___x_2632_; uint8_t v___x_2633_; 
v___x_2632_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__57));
v___x_2633_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2632_, v_ts_2530_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__58));
v___x_2635_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2634_, v_ts_2530_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2636_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__59));
v___x_2637_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2636_, v_ts_2530_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; uint8_t v___x_2639_; 
v___x_2638_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__60));
v___x_2639_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2638_, v_ts_2530_);
v___y_2624_ = v___x_2639_;
goto v___jp_2623_;
}
else
{
v___y_2624_ = v___x_2637_;
goto v___jp_2623_;
}
}
else
{
goto v___jp_2547_;
}
}
else
{
goto v___jp_2547_;
}
}
else
{
goto v___jp_2547_;
}
}
v___jp_2640_:
{
if (v___y_2641_ == 0)
{
lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2642_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__61));
v___x_2643_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2642_, v_ts_2530_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; uint8_t v___x_2645_; 
v___x_2644_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__62));
v___x_2645_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2644_, v_ts_2530_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2646_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__63));
v___x_2647_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2646_, v_ts_2530_);
v___y_2631_ = v___x_2647_;
goto v___jp_2630_;
}
else
{
v___y_2631_ = v___x_2645_;
goto v___jp_2630_;
}
}
else
{
goto v___jp_2549_;
}
}
else
{
goto v___jp_2549_;
}
}
v___jp_2648_:
{
if (v___y_2649_ == 0)
{
lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___x_2650_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__64));
v___x_2651_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2650_, v_ts_2530_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2652_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__65));
v___x_2653_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2652_, v_ts_2530_);
v___y_2641_ = v___x_2653_;
goto v___jp_2640_;
}
else
{
v___y_2641_ = v___x_2651_;
goto v___jp_2640_;
}
}
else
{
lean_object* v___x_2654_; 
v___x_2654_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__67));
return v___x_2654_;
}
}
v___jp_2655_:
{
if (v___y_2656_ == 0)
{
lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2657_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__68));
v___x_2658_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2657_, v_ts_2530_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; uint8_t v___x_2660_; 
v___x_2659_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__69));
v___x_2660_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2659_, v_ts_2530_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; uint8_t v___x_2662_; 
v___x_2661_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__70));
v___x_2662_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2661_, v_ts_2530_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; uint8_t v___x_2664_; 
v___x_2663_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__71));
v___x_2664_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2663_, v_ts_2530_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; uint8_t v___x_2666_; 
v___x_2665_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__72));
v___x_2666_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2665_, v_ts_2530_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
v___x_2667_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__73));
v___x_2668_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2667_, v_ts_2530_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; uint8_t v___x_2670_; 
v___x_2669_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__74));
v___x_2670_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2669_, v_ts_2530_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; uint8_t v___x_2672_; 
v___x_2671_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__75));
v___x_2672_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2671_, v_ts_2530_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; uint8_t v___x_2674_; 
v___x_2673_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__76));
v___x_2674_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2673_, v_ts_2530_);
if (v___x_2674_ == 0)
{
lean_object* v___x_2675_; uint8_t v___x_2676_; 
v___x_2675_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__77));
v___x_2676_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2675_, v_ts_2530_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; uint8_t v___x_2678_; 
v___x_2677_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__78));
v___x_2678_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2677_, v_ts_2530_);
if (v___x_2678_ == 0)
{
lean_object* v___x_2679_; uint8_t v___x_2680_; 
v___x_2679_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__79));
v___x_2680_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2679_, v_ts_2530_);
v___y_2649_ = v___x_2680_;
goto v___jp_2648_;
}
else
{
v___y_2649_ = v___x_2678_;
goto v___jp_2648_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
else
{
goto v___jp_2551_;
}
}
v___jp_2681_:
{
if (v___y_2682_ == 0)
{
lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2683_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__80));
v___x_2684_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2683_, v_ts_2530_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2685_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__81));
v___x_2686_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2685_, v_ts_2530_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; uint8_t v___x_2688_; 
v___x_2687_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__82));
v___x_2688_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2687_, v_ts_2530_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; uint8_t v___x_2690_; 
v___x_2689_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__83));
v___x_2690_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2689_, v_ts_2530_);
v___y_2656_ = v___x_2690_;
goto v___jp_2655_;
}
else
{
v___y_2656_ = v___x_2688_;
goto v___jp_2655_;
}
}
else
{
goto v___jp_2553_;
}
}
else
{
goto v___jp_2553_;
}
}
else
{
goto v___jp_2553_;
}
}
v___jp_2691_:
{
if (v___y_2692_ == 0)
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__84));
v___x_2694_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2693_, v_ts_2530_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__85));
v___x_2696_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2695_, v_ts_2530_);
v___y_2682_ = v___x_2696_;
goto v___jp_2681_;
}
else
{
v___y_2682_ = v___x_2694_;
goto v___jp_2681_;
}
}
else
{
lean_object* v___x_2697_; 
v___x_2697_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__87));
return v___x_2697_;
}
}
v___jp_2698_:
{
if (v___y_2699_ == 0)
{
lean_object* v___x_2700_; uint8_t v___x_2701_; 
v___x_2700_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__88));
v___x_2701_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2700_, v_ts_2530_);
if (v___x_2701_ == 0)
{
lean_object* v___x_2702_; uint8_t v___x_2703_; 
v___x_2702_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__89));
v___x_2703_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2702_, v_ts_2530_);
if (v___x_2703_ == 0)
{
lean_object* v___x_2704_; uint8_t v___x_2705_; 
v___x_2704_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__90));
v___x_2705_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2704_, v_ts_2530_);
v___y_2692_ = v___x_2705_;
goto v___jp_2691_;
}
else
{
v___y_2692_ = v___x_2703_;
goto v___jp_2691_;
}
}
else
{
goto v___jp_2555_;
}
}
else
{
goto v___jp_2555_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_genreOf___boxed(lean_object* v_ts_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = lp_choreo_Choreo_genreOf(v_ts_2710_);
lean_dec(v_ts_2710_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps_pairs(lean_object* v_a_3315_){
_start:
{
if (lean_obj_tag(v_a_3315_) == 1)
{
lean_object* v_tail_3316_; 
v_tail_3316_ = lean_ctor_get(v_a_3315_, 1);
lean_inc(v_tail_3316_);
if (lean_obj_tag(v_tail_3316_) == 1)
{
lean_object* v_head_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3329_; 
v_head_3317_ = lean_ctor_get(v_a_3315_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_a_3315_);
if (v_isSharedCheck_3329_ == 0)
{
lean_object* v_unused_3330_; 
v_unused_3330_ = lean_ctor_get(v_a_3315_, 1);
lean_dec(v_unused_3330_);
v___x_3319_ = v_a_3315_;
v_isShared_3320_ = v_isSharedCheck_3329_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_head_3317_);
lean_dec(v_a_3315_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3329_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v_head_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3327_; 
v_head_3321_ = lean_ctor_get(v_tail_3316_, 0);
v___x_3322_ = ((lean_object*)(lp_choreo_Choreo_tokenize___closed__0));
v___x_3323_ = lean_string_append(v_head_3317_, v___x_3322_);
v___x_3324_ = lean_string_append(v___x_3323_, v_head_3321_);
v___x_3325_ = lp_choreo_Choreo_readSteps_pairs(v_tail_3316_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 1, v___x_3325_);
lean_ctor_set(v___x_3319_, 0, v___x_3324_);
v___x_3327_ = v___x_3319_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
else
{
lean_object* v___x_3331_; 
lean_dec(v_tail_3316_);
lean_dec_ref_known(v_a_3315_, 2);
v___x_3331_ = lean_box(0);
return v___x_3331_;
}
}
else
{
lean_object* v___x_3332_; 
lean_dec(v_a_3315_);
v___x_3332_ = lean_box(0);
return v___x_3332_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps_triples(lean_object* v_a_3333_){
_start:
{
if (lean_obj_tag(v_a_3333_) == 1)
{
lean_object* v_tail_3334_; 
v_tail_3334_ = lean_ctor_get(v_a_3333_, 1);
lean_inc(v_tail_3334_);
if (lean_obj_tag(v_tail_3334_) == 1)
{
lean_object* v_tail_3335_; 
v_tail_3335_ = lean_ctor_get(v_tail_3334_, 1);
lean_inc(v_tail_3335_);
if (lean_obj_tag(v_tail_3335_) == 1)
{
lean_object* v_head_3336_; lean_object* v_head_3337_; lean_object* v_head_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3351_; 
v_head_3336_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_head_3336_);
lean_dec_ref_known(v_a_3333_, 2);
v_head_3337_ = lean_ctor_get(v_tail_3334_, 0);
v_head_3338_ = lean_ctor_get(v_tail_3335_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_tail_3335_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; 
v_unused_3352_ = lean_ctor_get(v_tail_3335_, 1);
lean_dec(v_unused_3352_);
v___x_3340_ = v_tail_3335_;
v_isShared_3341_ = v_isSharedCheck_3351_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_head_3338_);
lean_dec(v_tail_3335_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3351_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3349_; 
v___x_3342_ = ((lean_object*)(lp_choreo_Choreo_tokenize___closed__0));
v___x_3343_ = lean_string_append(v_head_3336_, v___x_3342_);
v___x_3344_ = lean_string_append(v___x_3343_, v_head_3337_);
v___x_3345_ = lean_string_append(v___x_3344_, v___x_3342_);
v___x_3346_ = lean_string_append(v___x_3345_, v_head_3338_);
lean_dec(v_head_3338_);
v___x_3347_ = lp_choreo_Choreo_readSteps_triples(v_tail_3334_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 1, v___x_3347_);
lean_ctor_set(v___x_3340_, 0, v___x_3346_);
v___x_3349_ = v___x_3340_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v___x_3346_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v___x_3347_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
else
{
lean_object* v___x_3353_; 
lean_dec(v_tail_3335_);
lean_dec_ref_known(v_tail_3334_, 2);
lean_dec_ref_known(v_a_3333_, 2);
v___x_3353_ = lean_box(0);
return v___x_3353_;
}
}
else
{
lean_object* v___x_3354_; 
lean_dec_ref_known(v_a_3333_, 2);
lean_dec(v_tail_3334_);
v___x_3354_ = lean_box(0);
return v___x_3354_;
}
}
else
{
lean_object* v___x_3355_; 
lean_dec(v_a_3333_);
v___x_3355_ = lean_box(0);
return v___x_3355_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readSteps_spec__2(lean_object* v_a_3356_, lean_object* v_a_3357_){
_start:
{
if (lean_obj_tag(v_a_3356_) == 0)
{
lean_object* v___x_3358_; 
v___x_3358_ = l_List_reverse___redArg(v_a_3357_);
return v___x_3358_;
}
else
{
lean_object* v_head_3359_; lean_object* v_tail_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3369_; 
v_head_3359_ = lean_ctor_get(v_a_3356_, 0);
v_tail_3360_ = lean_ctor_get(v_a_3356_, 1);
v_isSharedCheck_3369_ = !lean_is_exclusive(v_a_3356_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3362_ = v_a_3356_;
v_isShared_3363_ = v_isSharedCheck_3369_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_tail_3360_);
lean_inc(v_head_3359_);
lean_dec(v_a_3356_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3369_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v_fst_3364_; lean_object* v___x_3366_; 
v_fst_3364_ = lean_ctor_get(v_head_3359_, 0);
lean_inc(v_fst_3364_);
lean_dec(v_head_3359_);
if (v_isShared_3363_ == 0)
{
lean_ctor_set(v___x_3362_, 1, v_a_3357_);
lean_ctor_set(v___x_3362_, 0, v_fst_3364_);
v___x_3366_ = v___x_3362_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_fst_3364_);
lean_ctor_set(v_reuseFailAlloc_3368_, 1, v_a_3357_);
v___x_3366_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
v_a_3356_ = v_tail_3360_;
v_a_3357_ = v___x_3366_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_readSteps_spec__0(lean_object* v_phrases_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
uint8_t v___x_3372_; 
v___x_3372_ = 0;
return v___x_3372_;
}
else
{
lean_object* v_head_3373_; lean_object* v_tail_3374_; uint8_t v___x_3375_; 
v_head_3373_ = lean_ctor_get(v_x_3371_, 0);
v_tail_3374_ = lean_ctor_get(v_x_3371_, 1);
v___x_3375_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v_head_3373_, v_phrases_3370_);
if (v___x_3375_ == 0)
{
v_x_3371_ = v_tail_3374_;
goto _start;
}
else
{
return v___x_3375_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_readSteps_spec__0___boxed(lean_object* v_phrases_3377_, lean_object* v_x_3378_){
_start:
{
uint8_t v_res_3379_; lean_object* v_r_3380_; 
v_res_3379_ = lp_choreo_List_any___at___00Choreo_readSteps_spec__0(v_phrases_3377_, v_x_3378_);
lean_dec(v_x_3378_);
lean_dec(v_phrases_3377_);
v_r_3380_ = lean_box(v_res_3379_);
return v_r_3380_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1(lean_object* v_phrases_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_){
_start:
{
if (lean_obj_tag(v_a_3382_) == 0)
{
lean_object* v___x_3384_; 
v___x_3384_ = l_List_reverse___redArg(v_a_3383_);
return v___x_3384_;
}
else
{
lean_object* v_head_3385_; lean_object* v_tail_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3397_; 
v_head_3385_ = lean_ctor_get(v_a_3382_, 0);
v_tail_3386_ = lean_ctor_get(v_a_3382_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_a_3382_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3388_ = v_a_3382_;
v_isShared_3389_ = v_isSharedCheck_3397_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_tail_3386_);
lean_inc(v_head_3385_);
lean_dec(v_a_3382_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3397_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v_snd_3390_; uint8_t v___x_3391_; 
v_snd_3390_ = lean_ctor_get(v_head_3385_, 1);
v___x_3391_ = lp_choreo_List_any___at___00Choreo_readSteps_spec__0(v_phrases_3381_, v_snd_3390_);
if (v___x_3391_ == 0)
{
lean_del_object(v___x_3388_);
lean_dec(v_head_3385_);
v_a_3382_ = v_tail_3386_;
goto _start;
}
else
{
lean_object* v___x_3394_; 
if (v_isShared_3389_ == 0)
{
lean_ctor_set(v___x_3388_, 1, v_a_3383_);
v___x_3394_ = v___x_3388_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_head_3385_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_a_3383_);
v___x_3394_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
v_a_3382_ = v_tail_3386_;
v_a_3383_ = v___x_3394_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1___boxed(lean_object* v_phrases_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1(v_phrases_3398_, v_a_3399_, v_a_3400_);
lean_dec(v_phrases_3398_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readSteps(lean_object* v_ts_3402_){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v_phrases_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
lean_inc_n(v_ts_3402_, 2);
v___x_3403_ = lp_choreo_Choreo_readSteps_pairs(v_ts_3402_);
v___x_3404_ = l_List_appendTR___redArg(v_ts_3402_, v___x_3403_);
v___x_3405_ = lp_choreo_Choreo_readSteps_triples(v_ts_3402_);
v_phrases_3406_ = l_List_appendTR___redArg(v___x_3404_, v___x_3405_);
v___x_3407_ = ((lean_object*)(lp_choreo_Choreo_stepPhrases));
v___x_3408_ = lean_box(0);
v___x_3409_ = lp_choreo_List_filterTR_loop___at___00Choreo_readSteps_spec__1(v_phrases_3406_, v___x_3407_, v___x_3408_);
lean_dec(v_phrases_3406_);
v___x_3410_ = lp_choreo_List_mapTR_loop___at___00Choreo_readSteps_spec__2(v___x_3409_, v___x_3408_);
return v___x_3410_;
}
}
static lean_object* _init_lp_choreo_Choreo_readGap_go___closed__0(void){
_start:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3411_ = lean_unsigned_to_nat(1000u);
v___x_3412_ = lean_nat_to_int(v___x_3411_);
return v___x_3412_;
}
}
static lean_object* _init_lp_choreo_Choreo_readGap_go___closed__6(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_unsigned_to_nat(10u);
v___x_3419_ = lean_nat_to_int(v___x_3418_);
return v___x_3419_;
}
}
static lean_object* _init_lp_choreo_Choreo_readGap_go___closed__9(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__8));
v___x_3423_ = lean_string_utf8_byte_size(v___x_3422_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readGap_go(lean_object* v_a_3424_){
_start:
{
if (lean_obj_tag(v_a_3424_) == 1)
{
lean_object* v_tail_3425_; 
v_tail_3425_ = lean_ctor_get(v_a_3424_, 1);
lean_inc(v_tail_3425_);
if (lean_obj_tag(v_tail_3425_) == 1)
{
lean_object* v_head_3426_; lean_object* v_head_3427_; lean_object* v___x_3428_; 
v_head_3426_ = lean_ctor_get(v_a_3424_, 0);
lean_inc(v_head_3426_);
lean_dec_ref_known(v_a_3424_, 2);
v_head_3427_ = lean_ctor_get(v_tail_3425_, 0);
v___x_3428_ = lp_choreo_Choreo_wordNumber(v_head_3426_);
if (lean_obj_tag(v___x_3428_) == 0)
{
v_a_3424_ = v_tail_3425_;
goto _start;
}
else
{
lean_object* v_val_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3466_; 
v_val_3430_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3432_ = v___x_3428_;
v_isShared_3433_ = v_isSharedCheck_3466_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_val_3430_);
lean_dec(v___x_3428_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3466_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3458_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__7));
v___x_3459_ = lean_string_dec_eq(v_head_3427_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; uint8_t v___x_3463_; 
v___x_3460_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__8));
v___x_3461_ = lean_string_utf8_byte_size(v_head_3427_);
v___x_3462_ = lean_obj_once(&lp_choreo_Choreo_readGap_go___closed__9, &lp_choreo_Choreo_readGap_go___closed__9_once, _init_lp_choreo_Choreo_readGap_go___closed__9);
v___x_3463_ = lean_nat_dec_le(v___x_3462_, v___x_3461_);
if (v___x_3463_ == 0)
{
goto v___jp_3441_;
}
else
{
lean_object* v___x_3464_; uint8_t v___x_3465_; 
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = lean_string_memcmp(v_head_3427_, v___x_3460_, v___x_3464_, v___x_3464_, v___x_3462_);
if (v___x_3465_ == 0)
{
goto v___jp_3441_;
}
else
{
lean_del_object(v___x_3432_);
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3453_;
}
}
}
else
{
lean_del_object(v___x_3432_);
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3453_;
}
v___jp_3434_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3439_; 
v___x_3435_ = lean_nat_to_int(v_val_3430_);
v___x_3436_ = lean_obj_once(&lp_choreo_Choreo_readGap_go___closed__0, &lp_choreo_Choreo_readGap_go___closed__0_once, _init_lp_choreo_Choreo_readGap_go___closed__0);
v___x_3437_ = lean_int_mul(v___x_3435_, v___x_3436_);
lean_dec(v___x_3435_);
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3437_);
v___x_3439_ = v___x_3432_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v___x_3437_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
v___jp_3441_:
{
lean_object* v___x_3442_; uint8_t v___x_3443_; 
v___x_3442_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__1));
v___x_3443_ = lean_string_dec_eq(v_head_3427_, v___x_3442_);
if (v___x_3443_ == 0)
{
lean_object* v___x_3444_; uint8_t v___x_3445_; 
v___x_3444_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__2));
v___x_3445_ = lean_string_dec_eq(v_head_3427_, v___x_3444_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3446_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__3));
v___x_3447_ = lean_string_dec_eq(v_head_3427_, v___x_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; uint8_t v___x_3449_; 
v___x_3448_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__4));
v___x_3449_ = lean_string_dec_eq(v_head_3427_, v___x_3448_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; uint8_t v___x_3451_; 
v___x_3450_ = ((lean_object*)(lp_choreo_Choreo_readGap_go___closed__5));
v___x_3451_ = lean_string_dec_eq(v_head_3427_, v___x_3450_);
if (v___x_3451_ == 0)
{
lean_del_object(v___x_3432_);
lean_dec(v_val_3430_);
v_a_3424_ = v_tail_3425_;
goto _start;
}
else
{
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3434_;
}
}
else
{
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3434_;
}
}
else
{
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3434_;
}
}
else
{
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3434_;
}
}
else
{
lean_dec_ref_known(v_tail_3425_, 2);
goto v___jp_3434_;
}
}
v___jp_3453_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3454_ = lean_nat_to_int(v_val_3430_);
v___x_3455_ = lean_obj_once(&lp_choreo_Choreo_readGap_go___closed__6, &lp_choreo_Choreo_readGap_go___closed__6_once, _init_lp_choreo_Choreo_readGap_go___closed__6);
v___x_3456_ = lean_int_mul(v___x_3454_, v___x_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
return v___x_3457_;
}
}
}
}
else
{
lean_object* v___x_3467_; 
lean_dec(v_tail_3425_);
lean_dec_ref_known(v_a_3424_, 2);
v___x_3467_ = lean_box(0);
return v___x_3467_;
}
}
else
{
lean_object* v___x_3468_; 
lean_dec(v_a_3424_);
v___x_3468_ = lean_box(0);
return v___x_3468_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readGap(lean_object* v_ts_3469_){
_start:
{
lean_object* v___x_3470_; 
v___x_3470_ = lp_choreo_Choreo_readGap_go(v_ts_3469_);
return v___x_3470_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0(lean_object* v_x_3546_){
_start:
{
if (lean_obj_tag(v_x_3546_) == 0)
{
uint8_t v___x_3547_; 
v___x_3547_ = 0;
return v___x_3547_;
}
else
{
lean_object* v_head_3548_; lean_object* v_tail_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
v_head_3548_ = lean_ctor_get(v_x_3546_, 0);
v_tail_3549_ = lean_ctor_get(v_x_3546_, 1);
v___x_3550_ = ((lean_object*)(lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__36));
v___x_3551_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v_head_3548_, v___x_3550_);
if (v___x_3551_ == 0)
{
v_x_3546_ = v_tail_3549_;
goto _start;
}
else
{
return v___x_3551_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___boxed(lean_object* v_x_3553_){
_start:
{
uint8_t v_res_3554_; lean_object* v_r_3555_; 
v_res_3554_ = lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0(v_x_3553_);
lean_dec(v_x_3553_);
v_r_3555_ = lean_box(v_res_3554_);
return v_r_3555_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_asksForFancy(lean_object* v_ts_3556_){
_start:
{
uint8_t v___x_3557_; 
v___x_3557_ = lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0(v_ts_3556_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_asksForFancy___boxed(lean_object* v_ts_3558_){
_start:
{
uint8_t v_res_3559_; lean_object* v_r_3560_; 
v_res_3559_ = lp_choreo_Choreo_asksForFancy(v_ts_3558_);
lean_dec(v_ts_3558_);
v_r_3560_ = lean_box(v_res_3559_);
return v_r_3560_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_movesForGenre(lean_object* v_x_3796_){
_start:
{
lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3797_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__18));
v___x_3798_ = lean_string_dec_eq(v_x_3796_, v___x_3797_);
if (v___x_3798_ == 0)
{
lean_object* v___x_3799_; uint8_t v___x_3800_; 
v___x_3799_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__66));
v___x_3800_ = lean_string_dec_eq(v_x_3796_, v___x_3799_);
if (v___x_3800_ == 0)
{
lean_object* v___x_3801_; uint8_t v___x_3802_; 
v___x_3801_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__22));
v___x_3802_ = lean_string_dec_eq(v_x_3796_, v___x_3801_);
if (v___x_3802_ == 0)
{
lean_object* v___x_3803_; uint8_t v___x_3804_; 
v___x_3803_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__20));
v___x_3804_ = lean_string_dec_eq(v_x_3796_, v___x_3803_);
if (v___x_3804_ == 0)
{
lean_object* v___x_3805_; uint8_t v___x_3806_; 
v___x_3805_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__24));
v___x_3806_ = lean_string_dec_eq(v_x_3796_, v___x_3805_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; uint8_t v___x_3808_; 
v___x_3807_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__86));
v___x_3808_ = lean_string_dec_eq(v_x_3796_, v___x_3807_);
if (v___x_3808_ == 0)
{
lean_object* v___x_3809_; uint8_t v___x_3810_; 
v___x_3809_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__55));
v___x_3810_ = lean_string_dec_eq(v_x_3796_, v___x_3809_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; uint8_t v___x_3812_; 
v___x_3811_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__14));
v___x_3812_ = lean_string_dec_eq(v_x_3796_, v___x_3811_);
if (v___x_3812_ == 0)
{
lean_object* v___x_3813_; uint8_t v___x_3814_; 
v___x_3813_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__46));
v___x_3814_ = lean_string_dec_eq(v_x_3796_, v___x_3813_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; uint8_t v___x_3816_; 
v___x_3815_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__12));
v___x_3816_ = lean_string_dec_eq(v_x_3796_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; uint8_t v___x_3818_; 
v___x_3817_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__40));
v___x_3818_ = lean_string_dec_eq(v_x_3796_, v___x_3817_);
if (v___x_3818_ == 0)
{
lean_object* v___x_3819_; uint8_t v___x_3820_; 
v___x_3819_ = ((lean_object*)(lp_choreo_Choreo_genreOf___closed__16));
v___x_3820_ = lean_string_dec_eq(v_x_3796_, v___x_3819_);
if (v___x_3820_ == 0)
{
lean_object* v___x_3821_; 
v___x_3821_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__10));
return v___x_3821_;
}
else
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3822_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__62));
v___x_3823_ = lean_box(9);
v___x_3824_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__12));
v___x_3825_ = lean_box(7);
v___x_3826_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__1));
v___x_3827_ = lean_unsigned_to_nat(1u);
v___x_3828_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
lean_ctor_set_uint8(v___x_3828_, sizeof(void*)*1, v___x_3820_);
v___x_3829_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__12));
v___x_3830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3828_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3826_);
lean_ctor_set(v___x_3831_, 1, v___x_3830_);
v___x_3832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3825_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3824_);
lean_ctor_set(v___x_3833_, 1, v___x_3832_);
v___x_3834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3823_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3822_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
return v___x_3835_;
}
}
else
{
lean_object* v___x_3836_; 
v___x_3836_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__17));
return v___x_3836_;
}
}
else
{
lean_object* v___x_3837_; 
v___x_3837_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__23));
return v___x_3837_;
}
}
else
{
lean_object* v___x_3838_; 
v___x_3838_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__29));
return v___x_3838_;
}
}
else
{
lean_object* v___x_3839_; 
v___x_3839_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__35));
return v___x_3839_;
}
}
else
{
lean_object* v___x_3840_; 
v___x_3840_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__43));
return v___x_3840_;
}
}
else
{
lean_object* v___x_3841_; 
v___x_3841_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__49));
return v___x_3841_;
}
}
else
{
lean_object* v___x_3842_; 
v___x_3842_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__53));
return v___x_3842_;
}
}
else
{
lean_object* v___x_3843_; 
v___x_3843_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__60));
return v___x_3843_;
}
}
else
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3844_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__7));
v___x_3845_ = lean_box(7);
v___x_3846_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__1));
v___x_3847_ = lean_unsigned_to_nat(2u);
v___x_3848_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
lean_ctor_set_uint8(v___x_3848_, sizeof(void*)*1, v___x_3802_);
v___x_3849_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__63));
v___x_3850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3848_);
lean_ctor_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3846_);
lean_ctor_set(v___x_3851_, 1, v___x_3850_);
v___x_3852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3845_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
v___x_3853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3844_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
return v___x_3853_;
}
}
else
{
lean_object* v___x_3854_; 
v___x_3854_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__70));
return v___x_3854_;
}
}
else
{
lean_object* v___x_3855_; 
v___x_3855_ = ((lean_object*)(lp_choreo_Choreo_movesForGenre___closed__78));
return v___x_3855_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_movesForGenre___boxed(lean_object* v_x_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = lp_choreo_Choreo_movesForGenre(v_x_3856_);
lean_dec_ref(v_x_3856_);
return v_res_3857_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0(lean_object* v_a_3858_, lean_object* v_x_3859_){
_start:
{
if (lean_obj_tag(v_x_3859_) == 0)
{
uint8_t v___x_3860_; 
v___x_3860_ = 0;
return v___x_3860_;
}
else
{
lean_object* v_head_3861_; lean_object* v_tail_3862_; uint8_t v___x_3863_; 
v_head_3861_ = lean_ctor_get(v_x_3859_, 0);
v_tail_3862_ = lean_ctor_get(v_x_3859_, 1);
v___x_3863_ = lp_choreo_Choreo_instBEqMove_beq(v_a_3858_, v_head_3861_);
if (v___x_3863_ == 0)
{
v_x_3859_ = v_tail_3862_;
goto _start;
}
else
{
return v___x_3863_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0___boxed(lean_object* v_a_3865_, lean_object* v_x_3866_){
_start:
{
uint8_t v_res_3867_; lean_object* v_r_3868_; 
v_res_3867_ = lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0(v_a_3865_, v_x_3866_);
lean_dec(v_x_3866_);
lean_dec(v_a_3865_);
v_r_3868_ = lean_box(v_res_3867_);
return v_r_3868_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2(lean_object* v___y_3869_, lean_object* v_snd_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_){
_start:
{
if (lean_obj_tag(v_a_3871_) == 0)
{
lean_object* v___x_3873_; 
v___x_3873_ = l_List_reverse___redArg(v_a_3872_);
return v___x_3873_;
}
else
{
lean_object* v_head_3874_; lean_object* v_tail_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3889_; 
v_head_3874_ = lean_ctor_get(v_a_3871_, 0);
v_tail_3875_ = lean_ctor_get(v_a_3871_, 1);
v_isSharedCheck_3889_ = !lean_is_exclusive(v_a_3871_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3877_ = v_a_3871_;
v_isShared_3878_ = v_isSharedCheck_3889_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_tail_3875_);
lean_inc(v_head_3874_);
lean_dec(v_a_3871_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3889_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
if (lean_obj_tag(v_head_3874_) == 9)
{
lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3884_ = lean_unsigned_to_nat(10u);
v___x_3885_ = lean_nat_dec_le(v___y_3869_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_del_object(v___x_3877_);
v_a_3871_ = v_tail_3875_;
goto _start;
}
else
{
goto v___jp_3879_;
}
}
else
{
uint8_t v___x_3887_; 
v___x_3887_ = lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0(v_head_3874_, v_snd_3870_);
if (v___x_3887_ == 0)
{
goto v___jp_3879_;
}
else
{
lean_del_object(v___x_3877_);
lean_dec(v_head_3874_);
v_a_3871_ = v_tail_3875_;
goto _start;
}
}
v___jp_3879_:
{
lean_object* v___x_3881_; 
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 1, v_a_3872_);
v___x_3881_ = v___x_3877_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v_head_3874_);
lean_ctor_set(v_reuseFailAlloc_3883_, 1, v_a_3872_);
v___x_3881_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
v_a_3871_ = v_tail_3875_;
v_a_3872_ = v___x_3881_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2___boxed(lean_object* v___y_3890_, lean_object* v_snd_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_){
_start:
{
lean_object* v_res_3894_; 
v_res_3894_ = lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2(v___y_3890_, v_snd_3891_, v_a_3892_, v_a_3893_);
lean_dec(v_snd_3891_);
lean_dec(v___y_3890_);
return v_res_3894_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_parsePlan_spec__1(lean_object* v_x_3895_){
_start:
{
if (lean_obj_tag(v_x_3895_) == 0)
{
uint8_t v___x_3896_; 
v___x_3896_ = 0;
return v___x_3896_;
}
else
{
lean_object* v_head_3897_; 
v_head_3897_ = lean_ctor_get(v_x_3895_, 0);
if (lean_obj_tag(v_head_3897_) == 12)
{
uint8_t v___x_3898_; 
v___x_3898_ = 1;
return v___x_3898_;
}
else
{
lean_object* v_tail_3899_; 
v_tail_3899_ = lean_ctor_get(v_x_3895_, 1);
v_x_3895_ = v_tail_3899_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_parsePlan_spec__1___boxed(lean_object* v_x_3901_){
_start:
{
uint8_t v_res_3902_; lean_object* v_r_3903_; 
v_res_3902_ = lp_choreo_List_any___at___00Choreo_parsePlan_spec__1(v_x_3901_);
lean_dec(v_x_3901_);
v_r_3903_ = lean_box(v_res_3902_);
return v_r_3903_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4(lean_object* v_x_3904_){
_start:
{
if (lean_obj_tag(v_x_3904_) == 0)
{
lean_object* v___x_3905_; 
v___x_3905_ = lean_box(0);
return v___x_3905_;
}
else
{
lean_object* v_head_3906_; 
v_head_3906_ = lean_ctor_get(v_x_3904_, 0);
if (lean_obj_tag(v_head_3906_) == 1)
{
lean_object* v_tail_3907_; lean_object* v_shape_3908_; lean_object* v___x_3909_; 
v_tail_3907_ = lean_ctor_get(v_x_3904_, 1);
v_shape_3908_ = lean_ctor_get(v_head_3906_, 0);
v___x_3909_ = lp_choreo_Choreo_Shape_size(v_shape_3908_);
if (lean_obj_tag(v___x_3909_) == 0)
{
v_x_3904_ = v_tail_3907_;
goto _start;
}
else
{
return v___x_3909_;
}
}
else
{
lean_object* v_tail_3911_; 
v_tail_3911_ = lean_ctor_get(v_x_3904_, 1);
v_x_3904_ = v_tail_3911_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4___boxed(lean_object* v_x_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4(v_x_3913_);
lean_dec(v_x_3913_);
return v_res_3914_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_parsePlan_spec__3(lean_object* v_x_3915_){
_start:
{
if (lean_obj_tag(v_x_3915_) == 0)
{
uint8_t v___x_3916_; 
v___x_3916_ = 0;
return v___x_3916_;
}
else
{
lean_object* v_head_3917_; 
v_head_3917_ = lean_ctor_get(v_x_3915_, 0);
if (lean_obj_tag(v_head_3917_) == 11)
{
uint8_t v___x_3918_; 
v___x_3918_ = 1;
return v___x_3918_;
}
else
{
lean_object* v_tail_3919_; 
v_tail_3919_ = lean_ctor_get(v_x_3915_, 1);
v_x_3915_ = v_tail_3919_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_parsePlan_spec__3___boxed(lean_object* v_x_3921_){
_start:
{
uint8_t v_res_3922_; lean_object* v_r_3923_; 
v_res_3922_ = lp_choreo_List_any___at___00Choreo_parsePlan_spec__3(v_x_3921_);
lean_dec(v_x_3921_);
v_r_3923_ = lean_box(v_res_3922_);
return v_r_3923_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_parsePlan(lean_object* v_text_3933_){
_start:
{
lean_object* v_ts_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v_fst_3939_; lean_object* v_snd_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_4320_; 
v_ts_3934_ = lp_choreo_Choreo_tokenize(v_text_3933_);
v___x_3935_ = lean_unsigned_to_nat(0u);
v___x_3936_ = lean_box(0);
v___x_3937_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedScan_default___closed__0));
v___x_3938_ = lp_choreo_Choreo_genreOf(v_ts_3934_);
v_fst_3939_ = lean_ctor_get(v___x_3938_, 0);
v_snd_3940_ = lean_ctor_get(v___x_3938_, 1);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_3942_ = v___x_3938_;
v_isShared_3943_ = v_isSharedCheck_4320_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_snd_3940_);
lean_inc(v_fst_3939_);
lean_dec(v___x_3938_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_4320_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___y_3945_; lean_object* v___y_3946_; lean_object* v___y_3947_; uint8_t v___y_3948_; lean_object* v___y_3949_; lean_object* v___y_3950_; lean_object* v___y_3951_; lean_object* v___y_3952_; lean_object* v___y_3953_; lean_object* v___y_3954_; lean_object* v___y_3955_; lean_object* v___y_3973_; lean_object* v___y_3974_; lean_object* v___y_3975_; uint8_t v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; lean_object* v___y_3980_; lean_object* v___y_3981_; lean_object* v___y_3982_; lean_object* v___y_3983_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; uint8_t v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; uint8_t v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; uint8_t v___y_4027_; lean_object* v___y_4032_; uint8_t v___y_4033_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; uint8_t v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4039_; lean_object* v___y_4040_; lean_object* v___y_4042_; uint8_t v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; lean_object* v___y_4047_; lean_object* v___y_4048_; lean_object* v___y_4049_; uint8_t v___y_4050_; lean_object* v___y_4051_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___y_4056_; uint8_t v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; uint8_t v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4093_; uint8_t v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; uint8_t v___y_4102_; uint8_t v___y_4103_; lean_object* v___y_4111_; uint8_t v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4114_; uint8_t v___y_4115_; uint8_t v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; uint8_t v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4129_; uint8_t v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; uint8_t v___y_4134_; uint8_t v___y_4135_; lean_object* v___y_4136_; uint8_t v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; lean_object* v___y_4143_; uint8_t v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; uint8_t v___y_4147_; uint8_t v___y_4148_; uint8_t v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; uint8_t v___y_4153_; lean_object* v___y_4154_; lean_object* v___y_4157_; uint8_t v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; uint8_t v___y_4161_; uint8_t v___y_4162_; uint8_t v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; uint8_t v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; uint8_t v___y_4169_; lean_object* v___y_4172_; uint8_t v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; uint8_t v___y_4176_; uint8_t v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; uint8_t v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4187_; lean_object* v___y_4188_; uint8_t v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; uint8_t v___y_4192_; uint8_t v___y_4193_; lean_object* v___y_4194_; uint8_t v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___x_4199_; lean_object* v_st_4200_; lean_object* v_left_4201_; lean_object* v_right_4202_; lean_object* v_n_4203_; lean_object* v_moves_4204_; lean_object* v_waiting_4205_; lean_object* v___y_4207_; uint8_t v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; uint8_t v___y_4211_; lean_object* v___y_4212_; uint8_t v___y_4213_; lean_object* v___y_4214_; uint8_t v___y_4215_; lean_object* v___y_4222_; uint8_t v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; uint8_t v___y_4228_; uint8_t v___y_4229_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; uint8_t v___y_4235_; lean_object* v___y_4236_; uint8_t v___y_4237_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; uint8_t v___y_4246_; uint8_t v___y_4247_; uint8_t v___y_4248_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v_fst_4269_; lean_object* v_cols_4270_; lean_object* v_rows_4271_; lean_object* v_snd_4272_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v_fst_4291_; lean_object* v_snd_4292_; lean_object* v_n0_4299_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4311_; uint8_t v___x_4315_; 
v___x_4053_ = l_List_lengthTR___redArg(v_ts_3934_);
v___x_4054_ = lean_unsigned_to_nat(1u);
v___x_4199_ = lean_nat_add(v___x_4053_, v___x_4054_);
lean_dec(v___x_4053_);
lean_inc(v_ts_3934_);
v_st_4200_ = lp_choreo_Choreo_scan(v___x_4199_, v___x_3936_, v_ts_3934_, v___x_3937_);
v_left_4201_ = lean_ctor_get(v_st_4200_, 0);
lean_inc(v_left_4201_);
v_right_4202_ = lean_ctor_get(v_st_4200_, 1);
lean_inc(v_right_4202_);
v_n_4203_ = lean_ctor_get(v_st_4200_, 2);
lean_inc(v_n_4203_);
v_moves_4204_ = lean_ctor_get(v_st_4200_, 3);
lean_inc(v_moves_4204_);
v_waiting_4205_ = lean_ctor_get(v_st_4200_, 4);
lean_inc(v_waiting_4205_);
lean_dec_ref(v_st_4200_);
v_n0_4299_ = lean_nat_add(v_left_4201_, v_right_4202_);
v___x_4315_ = lean_nat_dec_lt(v___x_3935_, v_n0_4299_);
if (v___x_4315_ == 0)
{
if (lean_obj_tag(v_n_4203_) == 0)
{
lean_object* v_shapeSize_4316_; 
v_shapeSize_4316_ = lp_choreo_List_findSome_x3f___at___00Choreo_parsePlan_spec__4(v_moves_4204_);
if (lean_obj_tag(v_shapeSize_4316_) == 0)
{
lean_object* v___x_4317_; 
v___x_4317_ = lean_unsigned_to_nat(8u);
v___y_4311_ = v___x_4317_;
goto v___jp_4310_;
}
else
{
lean_object* v_val_4318_; 
v_val_4318_ = lean_ctor_get(v_shapeSize_4316_, 0);
lean_inc(v_val_4318_);
lean_dec_ref_known(v_shapeSize_4316_, 1);
v___y_4311_ = v_val_4318_;
goto v___jp_4310_;
}
}
else
{
lean_object* v_val_4319_; 
v_val_4319_ = lean_ctor_get(v_n_4203_, 0);
lean_inc(v_val_4319_);
lean_dec_ref_known(v_n_4203_, 1);
v___y_4311_ = v_val_4319_;
goto v___jp_4310_;
}
}
else
{
lean_dec(v_n_4203_);
lean_inc(v_n0_4299_);
v___y_4311_ = v_n0_4299_;
goto v___jp_4310_;
}
v___jp_3944_:
{
if (v___y_3948_ == 0)
{
lean_object* v___x_3956_; uint8_t v___x_3957_; 
v___x_3956_ = ((lean_object*)(lp_choreo_Choreo_instReprPlan_repr___redArg___closed__30));
v___x_3957_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_3956_, v_ts_3934_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; uint8_t v___x_3959_; 
v___x_3958_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__0));
v___x_3959_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_3958_, v_ts_3934_);
if (v___x_3959_ == 0)
{
lean_object* v___x_3960_; uint8_t v___x_3961_; 
v___x_3960_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__1));
v___x_3961_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_3960_, v_ts_3934_);
if (v___x_3961_ == 0)
{
lean_object* v___x_3962_; uint8_t v___x_3963_; 
v___x_3962_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__2));
v___x_3963_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_3962_, v_ts_3934_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3964_; uint8_t v___x_3965_; lean_object* v___x_3966_; 
v___x_3964_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__3));
v___x_3965_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_3964_, v_ts_3934_);
lean_dec(v_ts_3934_);
v___x_3966_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3966_, 0, v___y_3952_);
lean_ctor_set(v___x_3966_, 1, v___y_3947_);
lean_ctor_set(v___x_3966_, 2, v_fst_3939_);
lean_ctor_set(v___x_3966_, 3, v___y_3951_);
lean_ctor_set(v___x_3966_, 4, v___y_3946_);
lean_ctor_set(v___x_3966_, 5, v___y_3954_);
lean_ctor_set(v___x_3966_, 6, v___y_3945_);
lean_ctor_set(v___x_3966_, 7, v___y_3950_);
lean_ctor_set(v___x_3966_, 8, v___y_3955_);
lean_ctor_set(v___x_3966_, 9, v___y_3949_);
lean_ctor_set(v___x_3966_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3966_, sizeof(void*)*11, v___x_3965_);
return v___x_3966_;
}
else
{
lean_object* v___x_3967_; 
lean_dec(v_ts_3934_);
v___x_3967_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3967_, 0, v___y_3952_);
lean_ctor_set(v___x_3967_, 1, v___y_3947_);
lean_ctor_set(v___x_3967_, 2, v_fst_3939_);
lean_ctor_set(v___x_3967_, 3, v___y_3951_);
lean_ctor_set(v___x_3967_, 4, v___y_3946_);
lean_ctor_set(v___x_3967_, 5, v___y_3954_);
lean_ctor_set(v___x_3967_, 6, v___y_3945_);
lean_ctor_set(v___x_3967_, 7, v___y_3950_);
lean_ctor_set(v___x_3967_, 8, v___y_3955_);
lean_ctor_set(v___x_3967_, 9, v___y_3949_);
lean_ctor_set(v___x_3967_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3967_, sizeof(void*)*11, v___x_3963_);
return v___x_3967_;
}
}
else
{
lean_object* v___x_3968_; 
lean_dec(v_ts_3934_);
v___x_3968_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3968_, 0, v___y_3952_);
lean_ctor_set(v___x_3968_, 1, v___y_3947_);
lean_ctor_set(v___x_3968_, 2, v_fst_3939_);
lean_ctor_set(v___x_3968_, 3, v___y_3951_);
lean_ctor_set(v___x_3968_, 4, v___y_3946_);
lean_ctor_set(v___x_3968_, 5, v___y_3954_);
lean_ctor_set(v___x_3968_, 6, v___y_3945_);
lean_ctor_set(v___x_3968_, 7, v___y_3950_);
lean_ctor_set(v___x_3968_, 8, v___y_3955_);
lean_ctor_set(v___x_3968_, 9, v___y_3949_);
lean_ctor_set(v___x_3968_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3968_, sizeof(void*)*11, v___x_3961_);
return v___x_3968_;
}
}
else
{
lean_object* v___x_3969_; 
lean_dec(v_ts_3934_);
v___x_3969_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3969_, 0, v___y_3952_);
lean_ctor_set(v___x_3969_, 1, v___y_3947_);
lean_ctor_set(v___x_3969_, 2, v_fst_3939_);
lean_ctor_set(v___x_3969_, 3, v___y_3951_);
lean_ctor_set(v___x_3969_, 4, v___y_3946_);
lean_ctor_set(v___x_3969_, 5, v___y_3954_);
lean_ctor_set(v___x_3969_, 6, v___y_3945_);
lean_ctor_set(v___x_3969_, 7, v___y_3950_);
lean_ctor_set(v___x_3969_, 8, v___y_3955_);
lean_ctor_set(v___x_3969_, 9, v___y_3949_);
lean_ctor_set(v___x_3969_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3969_, sizeof(void*)*11, v___x_3959_);
return v___x_3969_;
}
}
else
{
lean_object* v___x_3970_; 
lean_dec(v_ts_3934_);
v___x_3970_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3970_, 0, v___y_3952_);
lean_ctor_set(v___x_3970_, 1, v___y_3947_);
lean_ctor_set(v___x_3970_, 2, v_fst_3939_);
lean_ctor_set(v___x_3970_, 3, v___y_3951_);
lean_ctor_set(v___x_3970_, 4, v___y_3946_);
lean_ctor_set(v___x_3970_, 5, v___y_3954_);
lean_ctor_set(v___x_3970_, 6, v___y_3945_);
lean_ctor_set(v___x_3970_, 7, v___y_3950_);
lean_ctor_set(v___x_3970_, 8, v___y_3955_);
lean_ctor_set(v___x_3970_, 9, v___y_3949_);
lean_ctor_set(v___x_3970_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3970_, sizeof(void*)*11, v___x_3957_);
return v___x_3970_;
}
}
else
{
lean_object* v___x_3971_; 
lean_dec(v_ts_3934_);
v___x_3971_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_3971_, 0, v___y_3952_);
lean_ctor_set(v___x_3971_, 1, v___y_3947_);
lean_ctor_set(v___x_3971_, 2, v_fst_3939_);
lean_ctor_set(v___x_3971_, 3, v___y_3951_);
lean_ctor_set(v___x_3971_, 4, v___y_3946_);
lean_ctor_set(v___x_3971_, 5, v___y_3954_);
lean_ctor_set(v___x_3971_, 6, v___y_3945_);
lean_ctor_set(v___x_3971_, 7, v___y_3950_);
lean_ctor_set(v___x_3971_, 8, v___y_3955_);
lean_ctor_set(v___x_3971_, 9, v___y_3949_);
lean_ctor_set(v___x_3971_, 10, v___y_3953_);
lean_ctor_set_uint8(v___x_3971_, sizeof(void*)*11, v___y_3948_);
return v___x_3971_;
}
}
v___jp_3972_:
{
lean_object* v___x_3984_; lean_object* v___x_3986_; 
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v___y_3975_);
if (v_isShared_3943_ == 0)
{
lean_ctor_set_tag(v___x_3942_, 1);
lean_ctor_set(v___x_3942_, 1, v___y_3973_);
lean_ctor_set(v___x_3942_, 0, v___x_3984_);
v___x_3986_ = v___x_3942_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v___y_3973_);
v___x_3986_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3987_ = l_List_appendTR___redArg(v___x_3986_, v___y_3978_);
lean_inc_n(v_ts_3934_, 2);
v___x_3988_ = lp_choreo_Choreo_readSteps(v_ts_3934_);
v___x_3989_ = lp_choreo_Choreo_readGap_go(v_ts_3934_);
if (lean_obj_tag(v___x_3989_) == 0)
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPlan_default___closed__1, &lp_choreo_Choreo_instInhabitedPlan_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedPlan_default___closed__1);
v___y_3945_ = v___x_3987_;
v___y_3946_ = v___y_3974_;
v___y_3947_ = v___y_3983_;
v___y_3948_ = v___y_3976_;
v___y_3949_ = v___y_3977_;
v___y_3950_ = v___x_3988_;
v___y_3951_ = v___y_3979_;
v___y_3952_ = v___y_3980_;
v___y_3953_ = v___y_3982_;
v___y_3954_ = v___y_3981_;
v___y_3955_ = v___x_3990_;
goto v___jp_3944_;
}
else
{
lean_object* v_val_3991_; 
v_val_3991_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_val_3991_);
lean_dec_ref_known(v___x_3989_, 1);
v___y_3945_ = v___x_3987_;
v___y_3946_ = v___y_3974_;
v___y_3947_ = v___y_3983_;
v___y_3948_ = v___y_3976_;
v___y_3949_ = v___y_3977_;
v___y_3950_ = v___x_3988_;
v___y_3951_ = v___y_3979_;
v___y_3952_ = v___y_3980_;
v___y_3953_ = v___y_3982_;
v___y_3954_ = v___y_3981_;
v___y_3955_ = v_val_3991_;
goto v___jp_3944_;
}
}
}
v___jp_3993_:
{
lean_object* v___x_4004_; 
v___x_4004_ = lp_choreo_Choreo_readBpm_go(v_ts_3934_);
if (lean_obj_tag(v___x_4004_) == 0)
{
v___y_3973_ = v___y_3994_;
v___y_3974_ = v___y_3996_;
v___y_3975_ = v___y_3995_;
v___y_3976_ = v___y_3997_;
v___y_3977_ = v___y_3998_;
v___y_3978_ = v___y_3999_;
v___y_3979_ = v___y_4000_;
v___y_3980_ = v___y_4003_;
v___y_3981_ = v___y_4002_;
v___y_3982_ = v___y_4001_;
v___y_3983_ = v_snd_3940_;
goto v___jp_3972_;
}
else
{
lean_object* v_val_4005_; 
lean_dec(v_snd_3940_);
v_val_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_val_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v___y_3973_ = v___y_3994_;
v___y_3974_ = v___y_3996_;
v___y_3975_ = v___y_3995_;
v___y_3976_ = v___y_3997_;
v___y_3977_ = v___y_3998_;
v___y_3978_ = v___y_3999_;
v___y_3979_ = v___y_4000_;
v___y_3980_ = v___y_4003_;
v___y_3981_ = v___y_4002_;
v___y_3982_ = v___y_4001_;
v___y_3983_ = v_val_4005_;
goto v___jp_3972_;
}
}
v___jp_4006_:
{
lean_object* v___x_4016_; 
lean_inc(v_ts_3934_);
v___x_4016_ = lp_choreo_Choreo_readSeconds_go(v_ts_3934_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_unsigned_to_nat(60u);
v___y_3994_ = v___y_4007_;
v___y_3995_ = v___y_4009_;
v___y_3996_ = v___y_4008_;
v___y_3997_ = v___y_4010_;
v___y_3998_ = v___y_4011_;
v___y_3999_ = v___y_4015_;
v___y_4000_ = v___y_4012_;
v___y_4001_ = v___y_4014_;
v___y_4002_ = v___y_4013_;
v___y_4003_ = v___x_4017_;
goto v___jp_3993_;
}
else
{
lean_object* v_val_4018_; 
v_val_4018_ = lean_ctor_get(v___x_4016_, 0);
lean_inc(v_val_4018_);
lean_dec_ref_known(v___x_4016_, 1);
v___y_3994_ = v___y_4007_;
v___y_3995_ = v___y_4009_;
v___y_3996_ = v___y_4008_;
v___y_3997_ = v___y_4010_;
v___y_3998_ = v___y_4011_;
v___y_3999_ = v___y_4015_;
v___y_4000_ = v___y_4012_;
v___y_4001_ = v___y_4014_;
v___y_4002_ = v___y_4013_;
v___y_4003_ = v_val_4018_;
goto v___jp_3993_;
}
}
v___jp_4019_:
{
uint8_t v___x_4028_; 
v___x_4028_ = lp_choreo_List_any___at___00Choreo_parsePlan_spec__1(v___y_4020_);
if (v___x_4028_ == 0)
{
lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4029_ = lean_alloc_ctor(12, 0, 1);
lean_ctor_set_uint8(v___x_4029_, 0, v___x_4028_);
v___x_4030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4029_);
lean_ctor_set(v___x_4030_, 1, v___x_3936_);
v___y_4007_ = v___y_4020_;
v___y_4008_ = v___y_4022_;
v___y_4009_ = v___y_4021_;
v___y_4010_ = v___y_4027_;
v___y_4011_ = v___y_4023_;
v___y_4012_ = v___y_4024_;
v___y_4013_ = v___y_4026_;
v___y_4014_ = v___y_4025_;
v___y_4015_ = v___x_4030_;
goto v___jp_4006_;
}
else
{
v___y_4007_ = v___y_4020_;
v___y_4008_ = v___y_4022_;
v___y_4009_ = v___y_4021_;
v___y_4010_ = v___y_4027_;
v___y_4011_ = v___y_4023_;
v___y_4012_ = v___y_4024_;
v___y_4013_ = v___y_4026_;
v___y_4014_ = v___y_4025_;
v___y_4015_ = v___x_3936_;
goto v___jp_4006_;
}
}
v___jp_4031_:
{
if (v___y_4037_ == 0)
{
if (v___y_4033_ == 0)
{
v___y_4007_ = v___y_4032_;
v___y_4008_ = v___y_4034_;
v___y_4009_ = v___y_4035_;
v___y_4010_ = v___y_4033_;
v___y_4011_ = v___y_4040_;
v___y_4012_ = v___y_4036_;
v___y_4013_ = v___y_4038_;
v___y_4014_ = v___y_4039_;
v___y_4015_ = v___x_3936_;
goto v___jp_4006_;
}
else
{
v___y_4020_ = v___y_4032_;
v___y_4021_ = v___y_4035_;
v___y_4022_ = v___y_4034_;
v___y_4023_ = v___y_4040_;
v___y_4024_ = v___y_4036_;
v___y_4025_ = v___y_4039_;
v___y_4026_ = v___y_4038_;
v___y_4027_ = v___y_4033_;
goto v___jp_4019_;
}
}
else
{
v___y_4020_ = v___y_4032_;
v___y_4021_ = v___y_4035_;
v___y_4022_ = v___y_4034_;
v___y_4023_ = v___y_4040_;
v___y_4024_ = v___y_4036_;
v___y_4025_ = v___y_4039_;
v___y_4026_ = v___y_4038_;
v___y_4027_ = v___y_4037_;
goto v___jp_4019_;
}
}
v___jp_4041_:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_List_appendTR___redArg(v___y_4051_, v___y_4046_);
v___y_4032_ = v___y_4042_;
v___y_4033_ = v___y_4043_;
v___y_4034_ = v___y_4045_;
v___y_4035_ = v___y_4044_;
v___y_4036_ = v___y_4047_;
v___y_4037_ = v___y_4050_;
v___y_4038_ = v___y_4049_;
v___y_4039_ = v___y_4048_;
v___y_4040_ = v___x_4052_;
goto v___jp_4031_;
}
v___jp_4055_:
{
if (lean_obj_tag(v___y_4060_) == 1)
{
lean_object* v_tail_4066_; 
v_tail_4066_ = lean_ctor_get(v___y_4060_, 1);
lean_inc(v_tail_4066_);
if (lean_obj_tag(v_tail_4066_) == 1)
{
lean_object* v_tail_4067_; 
v_tail_4067_ = lean_ctor_get(v_tail_4066_, 1);
if (lean_obj_tag(v_tail_4067_) == 0)
{
lean_object* v_head_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4090_; 
v_head_4068_ = lean_ctor_get(v___y_4060_, 0);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___y_4060_);
if (v_isSharedCheck_4090_ == 0)
{
lean_object* v_unused_4091_; 
v_unused_4091_ = lean_ctor_get(v___y_4060_, 1);
lean_dec(v_unused_4091_);
v___x_4070_ = v___y_4060_;
v_isShared_4071_ = v_isSharedCheck_4090_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_head_4068_);
lean_dec(v___y_4060_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4090_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v_head_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4088_; 
v_head_4072_ = lean_ctor_get(v_tail_4066_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v_tail_4066_);
if (v_isSharedCheck_4088_ == 0)
{
lean_object* v_unused_4089_; 
v_unused_4089_ = lean_ctor_get(v_tail_4066_, 1);
lean_dec(v_unused_4089_);
v___x_4074_ = v_tail_4066_;
v_isShared_4075_ = v_isSharedCheck_4088_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_head_4072_);
lean_dec(v_tail_4066_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4088_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
lean_ctor_set(v___x_4074_, 1, v___x_3936_);
lean_ctor_set(v___x_4074_, 0, v_head_4068_);
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_head_4068_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v___x_3936_);
v___x_4077_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4082_; 
v___x_4078_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__4));
lean_inc(v___y_4065_);
v___x_4079_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_4065_, v___y_4065_, v___x_4054_, v___x_4078_);
v___x_4080_ = l_List_appendTR___redArg(v___x_4077_, v___x_4079_);
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 1, v___x_3936_);
lean_ctor_set(v___x_4070_, 0, v_head_4072_);
v___x_4082_ = v___x_4070_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_head_4072_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v___x_3936_);
v___x_4082_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4083_ = l_List_appendTR___redArg(v___x_4080_, v___x_4082_);
v___x_4084_ = l_List_drop___redArg(v___x_4054_, v___y_4065_);
lean_dec(v___y_4065_);
v___x_4085_ = l_List_appendTR___redArg(v___x_4083_, v___x_4084_);
v___y_4032_ = v___y_4056_;
v___y_4033_ = v___y_4057_;
v___y_4034_ = v___y_4058_;
v___y_4035_ = v___y_4059_;
v___y_4036_ = v___y_4061_;
v___y_4037_ = v___y_4062_;
v___y_4038_ = v___y_4063_;
v___y_4039_ = v___y_4064_;
v___y_4040_ = v___x_4085_;
goto v___jp_4031_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_tail_4066_, 2);
v___y_4042_ = v___y_4056_;
v___y_4043_ = v___y_4057_;
v___y_4044_ = v___y_4059_;
v___y_4045_ = v___y_4058_;
v___y_4046_ = v___y_4065_;
v___y_4047_ = v___y_4061_;
v___y_4048_ = v___y_4064_;
v___y_4049_ = v___y_4063_;
v___y_4050_ = v___y_4062_;
v___y_4051_ = v___y_4060_;
goto v___jp_4041_;
}
}
else
{
lean_dec(v_tail_4066_);
v___y_4042_ = v___y_4056_;
v___y_4043_ = v___y_4057_;
v___y_4044_ = v___y_4059_;
v___y_4045_ = v___y_4058_;
v___y_4046_ = v___y_4065_;
v___y_4047_ = v___y_4061_;
v___y_4048_ = v___y_4064_;
v___y_4049_ = v___y_4063_;
v___y_4050_ = v___y_4062_;
v___y_4051_ = v___y_4060_;
goto v___jp_4041_;
}
}
else
{
v___y_4042_ = v___y_4056_;
v___y_4043_ = v___y_4057_;
v___y_4044_ = v___y_4059_;
v___y_4045_ = v___y_4058_;
v___y_4046_ = v___y_4065_;
v___y_4047_ = v___y_4061_;
v___y_4048_ = v___y_4064_;
v___y_4049_ = v___y_4063_;
v___y_4050_ = v___y_4062_;
v___y_4051_ = v___y_4060_;
goto v___jp_4041_;
}
}
v___jp_4092_:
{
if (v___y_4103_ == 0)
{
if (v___y_4102_ == 0)
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4104_ = lean_unsigned_to_nat(4u);
v___x_4105_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__4));
lean_inc(v___y_4099_);
v___x_4106_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_4099_, v___y_4099_, v___x_4104_, v___x_4105_);
lean_dec(v___y_4099_);
v___y_4056_ = v___y_4093_;
v___y_4057_ = v___y_4094_;
v___y_4058_ = v___y_4096_;
v___y_4059_ = v___y_4095_;
v___y_4060_ = v___y_4097_;
v___y_4061_ = v___y_4098_;
v___y_4062_ = v___y_4102_;
v___y_4063_ = v___y_4101_;
v___y_4064_ = v___y_4100_;
v___y_4065_ = v___x_4106_;
goto v___jp_4055_;
}
else
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4107_ = lean_unsigned_to_nat(7u);
v___x_4108_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__4));
lean_inc(v___y_4099_);
v___x_4109_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_4099_, v___y_4099_, v___x_4107_, v___x_4108_);
lean_dec(v___y_4099_);
v___y_4056_ = v___y_4093_;
v___y_4057_ = v___y_4094_;
v___y_4058_ = v___y_4096_;
v___y_4059_ = v___y_4095_;
v___y_4060_ = v___y_4097_;
v___y_4061_ = v___y_4098_;
v___y_4062_ = v___y_4102_;
v___y_4063_ = v___y_4101_;
v___y_4064_ = v___y_4100_;
v___y_4065_ = v___x_4109_;
goto v___jp_4055_;
}
}
else
{
v___y_4056_ = v___y_4093_;
v___y_4057_ = v___y_4094_;
v___y_4058_ = v___y_4096_;
v___y_4059_ = v___y_4095_;
v___y_4060_ = v___y_4097_;
v___y_4061_ = v___y_4098_;
v___y_4062_ = v___y_4102_;
v___y_4063_ = v___y_4101_;
v___y_4064_ = v___y_4100_;
v___y_4065_ = v___y_4099_;
goto v___jp_4055_;
}
}
v___jp_4110_:
{
if (v___y_4115_ == 0)
{
v___y_4056_ = v___y_4111_;
v___y_4057_ = v___y_4112_;
v___y_4058_ = v___y_4114_;
v___y_4059_ = v___y_4113_;
v___y_4060_ = v___y_4121_;
v___y_4061_ = v___y_4117_;
v___y_4062_ = v___y_4120_;
v___y_4063_ = v___y_4119_;
v___y_4064_ = v___y_4118_;
v___y_4065_ = v___x_3936_;
goto v___jp_4055_;
}
else
{
if (v___y_4116_ == 0)
{
v___y_4056_ = v___y_4111_;
v___y_4057_ = v___y_4112_;
v___y_4058_ = v___y_4114_;
v___y_4059_ = v___y_4113_;
v___y_4060_ = v___y_4121_;
v___y_4061_ = v___y_4117_;
v___y_4062_ = v___y_4120_;
v___y_4063_ = v___y_4119_;
v___y_4064_ = v___y_4118_;
v___y_4065_ = v___x_3936_;
goto v___jp_4055_;
}
else
{
lean_object* v___x_4122_; lean_object* v_all_4123_; lean_object* v___x_4124_; uint8_t v___x_4125_; 
v___x_4122_ = lp_choreo_Choreo_movesForGenre(v_fst_3939_);
v_all_4123_ = lp_choreo_List_filterTR_loop___at___00Choreo_parsePlan_spec__2(v___y_4117_, v___y_4111_, v___x_4122_, v___x_3936_);
v___x_4124_ = ((lean_object*)(lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__8));
v___x_4125_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_4124_, v_ts_3934_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; uint8_t v___x_4127_; 
v___x_4126_ = ((lean_object*)(lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0___closed__0));
v___x_4127_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_4126_, v_ts_3934_);
v___y_4093_ = v___y_4111_;
v___y_4094_ = v___y_4112_;
v___y_4095_ = v___y_4113_;
v___y_4096_ = v___y_4114_;
v___y_4097_ = v___y_4121_;
v___y_4098_ = v___y_4117_;
v___y_4099_ = v_all_4123_;
v___y_4100_ = v___y_4118_;
v___y_4101_ = v___y_4119_;
v___y_4102_ = v___y_4120_;
v___y_4103_ = v___x_4127_;
goto v___jp_4092_;
}
else
{
v___y_4093_ = v___y_4111_;
v___y_4094_ = v___y_4112_;
v___y_4095_ = v___y_4113_;
v___y_4096_ = v___y_4114_;
v___y_4097_ = v___y_4121_;
v___y_4098_ = v___y_4117_;
v___y_4099_ = v_all_4123_;
v___y_4100_ = v___y_4118_;
v___y_4101_ = v___y_4119_;
v___y_4102_ = v___y_4120_;
v___y_4103_ = v___x_4125_;
goto v___jp_4092_;
}
}
}
}
v___jp_4128_:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_List_appendTR___redArg(v___y_4133_, v___y_4140_);
v___y_4111_ = v___y_4129_;
v___y_4112_ = v___y_4130_;
v___y_4113_ = v___y_4132_;
v___y_4114_ = v___y_4131_;
v___y_4115_ = v___y_4134_;
v___y_4116_ = v___y_4135_;
v___y_4117_ = v___y_4136_;
v___y_4118_ = v___y_4139_;
v___y_4119_ = v___y_4138_;
v___y_4120_ = v___y_4137_;
v___y_4121_ = v___x_4141_;
goto v___jp_4110_;
}
v___jp_4142_:
{
if (v___y_4147_ == 0)
{
lean_object* v___x_4155_; 
v___x_4155_ = ((lean_object*)(lp_choreo_Choreo_parsePlan___closed__5));
v___y_4129_ = v___y_4143_;
v___y_4130_ = v___y_4144_;
v___y_4131_ = v___y_4146_;
v___y_4132_ = v___y_4145_;
v___y_4133_ = v___y_4154_;
v___y_4134_ = v___y_4148_;
v___y_4135_ = v___y_4149_;
v___y_4136_ = v___y_4150_;
v___y_4137_ = v___y_4153_;
v___y_4138_ = v___y_4152_;
v___y_4139_ = v___y_4151_;
v___y_4140_ = v___x_4155_;
goto v___jp_4128_;
}
else
{
v___y_4129_ = v___y_4143_;
v___y_4130_ = v___y_4144_;
v___y_4131_ = v___y_4146_;
v___y_4132_ = v___y_4145_;
v___y_4133_ = v___y_4154_;
v___y_4134_ = v___y_4148_;
v___y_4135_ = v___y_4149_;
v___y_4136_ = v___y_4150_;
v___y_4137_ = v___y_4153_;
v___y_4138_ = v___y_4152_;
v___y_4139_ = v___y_4151_;
v___y_4140_ = v___x_3936_;
goto v___jp_4128_;
}
}
v___jp_4156_:
{
if (v___y_4169_ == 0)
{
lean_object* v___x_4170_; 
lean_inc(v___y_4165_);
v___x_4170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4170_, 0, v___y_4165_);
lean_ctor_set(v___x_4170_, 1, v___x_3936_);
v___y_4143_ = v___y_4157_;
v___y_4144_ = v___y_4158_;
v___y_4145_ = v___y_4160_;
v___y_4146_ = v___y_4159_;
v___y_4147_ = v___y_4161_;
v___y_4148_ = v___y_4162_;
v___y_4149_ = v___y_4163_;
v___y_4150_ = v___y_4164_;
v___y_4151_ = v___y_4168_;
v___y_4152_ = v___y_4167_;
v___y_4153_ = v___y_4166_;
v___y_4154_ = v___x_4170_;
goto v___jp_4142_;
}
else
{
v___y_4143_ = v___y_4157_;
v___y_4144_ = v___y_4158_;
v___y_4145_ = v___y_4160_;
v___y_4146_ = v___y_4159_;
v___y_4147_ = v___y_4161_;
v___y_4148_ = v___y_4162_;
v___y_4149_ = v___y_4163_;
v___y_4150_ = v___y_4164_;
v___y_4151_ = v___y_4168_;
v___y_4152_ = v___y_4167_;
v___y_4153_ = v___y_4166_;
v___y_4154_ = v___x_3936_;
goto v___jp_4142_;
}
}
v___jp_4171_:
{
uint8_t v___x_4182_; 
v___x_4182_ = lean_nat_dec_eq(v___y_4181_, v___x_3935_);
if (v___x_4182_ == 0)
{
uint8_t v_namesJoin_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_namesJoin_4183_ = lp_choreo_List_any___at___00Choreo_parsePlan_spec__3(v___y_4172_);
v___x_4184_ = lean_box(10);
v___x_4185_ = lp_choreo_List_elem___at___00Choreo_parsePlan_spec__0(v___x_4184_, v___y_4172_);
if (v___x_4185_ == 0)
{
v___y_4157_ = v___y_4172_;
v___y_4158_ = v___y_4173_;
v___y_4159_ = v___y_4175_;
v___y_4160_ = v___y_4174_;
v___y_4161_ = v_namesJoin_4183_;
v___y_4162_ = v___y_4176_;
v___y_4163_ = v___y_4177_;
v___y_4164_ = v___y_4178_;
v___y_4165_ = v___x_4184_;
v___y_4166_ = v___y_4180_;
v___y_4167_ = v___y_4179_;
v___y_4168_ = v___y_4181_;
v___y_4169_ = v_namesJoin_4183_;
goto v___jp_4156_;
}
else
{
v___y_4157_ = v___y_4172_;
v___y_4158_ = v___y_4173_;
v___y_4159_ = v___y_4175_;
v___y_4160_ = v___y_4174_;
v___y_4161_ = v_namesJoin_4183_;
v___y_4162_ = v___y_4176_;
v___y_4163_ = v___y_4177_;
v___y_4164_ = v___y_4178_;
v___y_4165_ = v___x_4184_;
v___y_4166_ = v___y_4180_;
v___y_4167_ = v___y_4179_;
v___y_4168_ = v___y_4181_;
v___y_4169_ = v___x_4185_;
goto v___jp_4156_;
}
}
else
{
v___y_4111_ = v___y_4172_;
v___y_4112_ = v___y_4173_;
v___y_4113_ = v___y_4174_;
v___y_4114_ = v___y_4175_;
v___y_4115_ = v___y_4176_;
v___y_4116_ = v___y_4177_;
v___y_4117_ = v___y_4178_;
v___y_4118_ = v___y_4181_;
v___y_4119_ = v___y_4179_;
v___y_4120_ = v___y_4180_;
v___y_4121_ = v___x_3936_;
goto v___jp_4110_;
}
}
v___jp_4186_:
{
uint8_t v___x_4198_; 
v___x_4198_ = lean_nat_dec_le(v___y_4188_, v___y_4197_);
if (v___x_4198_ == 0)
{
lean_dec(v___y_4188_);
v___y_4172_ = v___y_4187_;
v___y_4173_ = v___y_4189_;
v___y_4174_ = v___y_4191_;
v___y_4175_ = v___y_4190_;
v___y_4176_ = v___y_4192_;
v___y_4177_ = v___y_4193_;
v___y_4178_ = v___y_4194_;
v___y_4179_ = v___y_4196_;
v___y_4180_ = v___y_4195_;
v___y_4181_ = v___y_4197_;
goto v___jp_4171_;
}
else
{
lean_dec(v___y_4197_);
v___y_4172_ = v___y_4187_;
v___y_4173_ = v___y_4189_;
v___y_4174_ = v___y_4191_;
v___y_4175_ = v___y_4190_;
v___y_4176_ = v___y_4192_;
v___y_4177_ = v___y_4193_;
v___y_4178_ = v___y_4194_;
v___y_4179_ = v___y_4196_;
v___y_4180_ = v___y_4195_;
v___y_4181_ = v___y_4188_;
goto v___jp_4171_;
}
}
v___jp_4206_:
{
lean_object* v___x_4216_; 
v___x_4216_ = lean_nat_sub(v___y_4212_, v___x_4054_);
if (lean_obj_tag(v_waiting_4205_) == 0)
{
if (v___y_4215_ == 0)
{
v___y_4187_ = v___y_4207_;
v___y_4188_ = v___x_4216_;
v___y_4189_ = v___y_4208_;
v___y_4190_ = v___y_4209_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4215_;
v___y_4194_ = v___y_4212_;
v___y_4195_ = v___y_4213_;
v___y_4196_ = v___y_4214_;
v___y_4197_ = v___x_3935_;
goto v___jp_4186_;
}
else
{
if (v___y_4211_ == 0)
{
v___y_4187_ = v___y_4207_;
v___y_4188_ = v___x_4216_;
v___y_4189_ = v___y_4208_;
v___y_4190_ = v___y_4209_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4215_;
v___y_4194_ = v___y_4212_;
v___y_4195_ = v___y_4213_;
v___y_4196_ = v___y_4214_;
v___y_4197_ = v___x_3935_;
goto v___jp_4186_;
}
else
{
lean_object* v___x_4217_; uint8_t v___x_4218_; 
v___x_4217_ = lean_unsigned_to_nat(6u);
v___x_4218_ = lean_nat_dec_le(v___x_4217_, v___y_4212_);
if (v___x_4218_ == 0)
{
v___y_4187_ = v___y_4207_;
v___y_4188_ = v___x_4216_;
v___y_4189_ = v___y_4208_;
v___y_4190_ = v___y_4209_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4215_;
v___y_4194_ = v___y_4212_;
v___y_4195_ = v___y_4213_;
v___y_4196_ = v___y_4214_;
v___y_4197_ = v___x_3935_;
goto v___jp_4186_;
}
else
{
lean_object* v___x_4219_; 
v___x_4219_ = lean_nat_shiftr(v___y_4212_, v___x_4054_);
v___y_4187_ = v___y_4207_;
v___y_4188_ = v___x_4216_;
v___y_4189_ = v___y_4208_;
v___y_4190_ = v___y_4209_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4215_;
v___y_4194_ = v___y_4212_;
v___y_4195_ = v___y_4213_;
v___y_4196_ = v___y_4214_;
v___y_4197_ = v___x_4219_;
goto v___jp_4186_;
}
}
}
}
else
{
lean_object* v_val_4220_; 
v_val_4220_ = lean_ctor_get(v_waiting_4205_, 0);
lean_inc(v_val_4220_);
lean_dec_ref_known(v_waiting_4205_, 1);
v___y_4187_ = v___y_4207_;
v___y_4188_ = v___x_4216_;
v___y_4189_ = v___y_4208_;
v___y_4190_ = v___y_4209_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4215_;
v___y_4194_ = v___y_4212_;
v___y_4195_ = v___y_4213_;
v___y_4196_ = v___y_4214_;
v___y_4197_ = v_val_4220_;
goto v___jp_4186_;
}
}
v___jp_4221_:
{
if (v___y_4228_ == 0)
{
v___y_4207_ = v___y_4222_;
v___y_4208_ = v___y_4223_;
v___y_4209_ = v___y_4225_;
v___y_4210_ = v___y_4224_;
v___y_4211_ = v___y_4229_;
v___y_4212_ = v___y_4226_;
v___y_4213_ = v___y_4228_;
v___y_4214_ = v___y_4227_;
v___y_4215_ = v___y_4223_;
goto v___jp_4206_;
}
else
{
v___y_4207_ = v___y_4222_;
v___y_4208_ = v___y_4223_;
v___y_4209_ = v___y_4225_;
v___y_4210_ = v___y_4224_;
v___y_4211_ = v___y_4229_;
v___y_4212_ = v___y_4226_;
v___y_4213_ = v___y_4228_;
v___y_4214_ = v___y_4227_;
v___y_4215_ = v___y_4228_;
goto v___jp_4206_;
}
}
v___jp_4230_:
{
uint8_t v___x_4238_; 
v___x_4238_ = lean_nat_dec_lt(v___x_3935_, v___y_4232_);
if (v___x_4238_ == 0)
{
v___y_4222_ = v___y_4231_;
v___y_4223_ = v___y_4237_;
v___y_4224_ = v___y_4233_;
v___y_4225_ = v___y_4232_;
v___y_4226_ = v___y_4234_;
v___y_4227_ = v___y_4236_;
v___y_4228_ = v___y_4235_;
v___y_4229_ = v___x_4238_;
goto v___jp_4221_;
}
else
{
uint8_t v___x_4239_; 
v___x_4239_ = lean_nat_dec_lt(v___x_3935_, v___y_4236_);
v___y_4222_ = v___y_4231_;
v___y_4223_ = v___y_4237_;
v___y_4224_ = v___y_4233_;
v___y_4225_ = v___y_4232_;
v___y_4226_ = v___y_4234_;
v___y_4227_ = v___y_4236_;
v___y_4228_ = v___y_4235_;
v___y_4229_ = v___x_4239_;
goto v___jp_4221_;
}
}
v___jp_4240_:
{
if (v___y_4248_ == 0)
{
lean_object* v___x_4249_; uint8_t v___x_4250_; 
v___x_4249_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__100));
v___x_4250_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_4249_, v_ts_3934_);
if (v___x_4250_ == 0)
{
v___y_4231_ = v___y_4241_;
v___y_4232_ = v___y_4243_;
v___y_4233_ = v___y_4242_;
v___y_4234_ = v___y_4244_;
v___y_4235_ = v___y_4246_;
v___y_4236_ = v___y_4245_;
v___y_4237_ = v___y_4247_;
goto v___jp_4230_;
}
else
{
v___y_4231_ = v___y_4241_;
v___y_4232_ = v___y_4243_;
v___y_4233_ = v___y_4242_;
v___y_4234_ = v___y_4244_;
v___y_4235_ = v___y_4246_;
v___y_4236_ = v___y_4245_;
v___y_4237_ = v___y_4248_;
goto v___jp_4230_;
}
}
else
{
uint8_t v___x_4251_; 
v___x_4251_ = 0;
v___y_4231_ = v___y_4241_;
v___y_4232_ = v___y_4243_;
v___y_4233_ = v___y_4242_;
v___y_4234_ = v___y_4244_;
v___y_4235_ = v___y_4246_;
v___y_4236_ = v___y_4245_;
v___y_4237_ = v___x_4251_;
goto v___jp_4230_;
}
}
v___jp_4252_:
{
uint8_t v_fancy_4258_; uint8_t v___x_4259_; 
v_fancy_4258_ = lp_choreo_List_any___at___00Choreo_asksForFancy_spec__0(v_ts_3934_);
v___x_4259_ = l_List_isEmpty___redArg(v___y_4253_);
if (v___x_4259_ == 0)
{
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4254_;
v___y_4233_ = v___y_4257_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v_fancy_4258_;
v___y_4236_ = v___y_4256_;
v___y_4237_ = v___x_4259_;
goto v___jp_4230_;
}
else
{
lean_object* v___x_4260_; uint8_t v___x_4261_; 
v___x_4260_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__37));
v___x_4261_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_4260_, v_ts_3934_);
if (v___x_4261_ == 0)
{
lean_object* v___x_4262_; uint8_t v___x_4263_; 
v___x_4262_ = ((lean_object*)(lp_choreo_Choreo_scan___closed__4));
v___x_4263_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_4262_, v_ts_3934_);
v___y_4241_ = v___y_4253_;
v___y_4242_ = v___y_4257_;
v___y_4243_ = v___y_4254_;
v___y_4244_ = v___y_4255_;
v___y_4245_ = v___y_4256_;
v___y_4246_ = v_fancy_4258_;
v___y_4247_ = v___x_4259_;
v___y_4248_ = v___x_4263_;
goto v___jp_4240_;
}
else
{
v___y_4241_ = v___y_4253_;
v___y_4242_ = v___y_4257_;
v___y_4243_ = v___y_4254_;
v___y_4244_ = v___y_4255_;
v___y_4245_ = v___y_4256_;
v___y_4246_ = v_fancy_4258_;
v___y_4247_ = v___x_4259_;
v___y_4248_ = v___x_4261_;
goto v___jp_4240_;
}
}
}
v___jp_4264_:
{
lean_object* v___x_4273_; uint8_t v___x_4274_; 
v___x_4273_ = lean_nat_mul(v_cols_4270_, v_rows_4271_);
lean_dec(v_rows_4271_);
lean_dec(v_cols_4270_);
v___x_4274_ = lean_nat_dec_eq(v___x_4273_, v___y_4266_);
lean_dec(v___x_4273_);
if (v___x_4274_ == 0)
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; uint8_t v___x_4278_; 
lean_dec(v_fst_4269_);
v___x_4275_ = lean_nat_shiftr(v___y_4266_, v___x_4054_);
v___x_4276_ = lean_nat_mod(v___y_4266_, v___y_4267_);
v___x_4277_ = lean_nat_add(v___x_4275_, v___x_4276_);
lean_dec(v___x_4275_);
v___x_4278_ = lean_nat_dec_eq(v___x_4276_, v___x_3935_);
lean_dec(v___x_4276_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; 
lean_dec(v___y_4267_);
v___x_4279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4277_);
lean_ctor_set(v___x_4279_, 1, v___x_4054_);
v___y_4253_ = v_snd_4272_;
v___y_4254_ = v___y_4265_;
v___y_4255_ = v___y_4266_;
v___y_4256_ = v___y_4268_;
v___y_4257_ = v___x_4279_;
goto v___jp_4252_;
}
else
{
lean_object* v___x_4280_; 
v___x_4280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4277_);
lean_ctor_set(v___x_4280_, 1, v___y_4267_);
v___y_4253_ = v_snd_4272_;
v___y_4254_ = v___y_4265_;
v___y_4255_ = v___y_4266_;
v___y_4256_ = v___y_4268_;
v___y_4257_ = v___x_4280_;
goto v___jp_4252_;
}
}
else
{
lean_dec(v___y_4267_);
v___y_4253_ = v_snd_4272_;
v___y_4254_ = v___y_4265_;
v___y_4255_ = v___y_4266_;
v___y_4256_ = v___y_4268_;
v___y_4257_ = v_fst_4269_;
goto v___jp_4252_;
}
}
v___jp_4281_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4286_ = lean_nat_shiftr(v___y_4283_, v___x_4054_);
lean_inc_n(v___y_4284_, 2);
lean_inc(v___x_4286_);
v___x_4287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
lean_ctor_set(v___x_4287_, 1, v___y_4284_);
v___y_4265_ = v___y_4282_;
v___y_4266_ = v___y_4283_;
v___y_4267_ = v___y_4284_;
v___y_4268_ = v___y_4285_;
v_fst_4269_ = v___x_4287_;
v_cols_4270_ = v___x_4286_;
v_rows_4271_ = v___y_4284_;
v_snd_4272_ = v_moves_4204_;
goto v___jp_4264_;
}
v___jp_4288_:
{
if (lean_obj_tag(v_moves_4204_) == 1)
{
lean_object* v_head_4293_; 
v_head_4293_ = lean_ctor_get(v_moves_4204_, 0);
if (lean_obj_tag(v_head_4293_) == 1)
{
lean_object* v_shape_4294_; 
v_shape_4294_ = lean_ctor_get(v_head_4293_, 0);
lean_inc(v_shape_4294_);
if (lean_obj_tag(v_shape_4294_) == 0)
{
lean_object* v_tail_4295_; lean_object* v_cols_4296_; lean_object* v_rows_4297_; 
v_tail_4295_ = lean_ctor_get(v_moves_4204_, 1);
lean_inc(v_tail_4295_);
lean_dec_ref_known(v_moves_4204_, 2);
v_cols_4296_ = lean_ctor_get(v_shape_4294_, 0);
lean_inc(v_cols_4296_);
v_rows_4297_ = lean_ctor_get(v_shape_4294_, 1);
lean_inc(v_rows_4297_);
v___y_4265_ = v_fst_4291_;
v___y_4266_ = v___y_4289_;
v___y_4267_ = v___y_4290_;
v___y_4268_ = v_snd_4292_;
v_fst_4269_ = v_shape_4294_;
v_cols_4270_ = v_cols_4296_;
v_rows_4271_ = v_rows_4297_;
v_snd_4272_ = v_tail_4295_;
goto v___jp_4264_;
}
else
{
lean_object* v_tail_4298_; 
lean_dec(v___y_4290_);
v_tail_4298_ = lean_ctor_get(v_moves_4204_, 1);
lean_inc(v_tail_4298_);
lean_dec_ref_known(v_moves_4204_, 2);
v___y_4253_ = v_tail_4298_;
v___y_4254_ = v_fst_4291_;
v___y_4255_ = v___y_4289_;
v___y_4256_ = v_snd_4292_;
v___y_4257_ = v_shape_4294_;
goto v___jp_4252_;
}
}
else
{
v___y_4282_ = v_fst_4291_;
v___y_4283_ = v___y_4289_;
v___y_4284_ = v___y_4290_;
v___y_4285_ = v_snd_4292_;
goto v___jp_4281_;
}
}
else
{
v___y_4282_ = v_fst_4291_;
v___y_4283_ = v___y_4289_;
v___y_4284_ = v___y_4290_;
v___y_4285_ = v_snd_4292_;
goto v___jp_4281_;
}
}
v___jp_4300_:
{
uint8_t v___x_4303_; 
v___x_4303_ = lean_nat_dec_eq(v_n0_4299_, v___y_4302_);
lean_dec(v_n0_4299_);
if (v___x_4303_ == 0)
{
lean_object* v___x_4304_; lean_object* v___x_4305_; 
lean_dec(v_right_4202_);
lean_dec(v_left_4201_);
v___x_4304_ = lean_nat_shiftr(v___y_4302_, v___x_4054_);
v___x_4305_ = lean_nat_sub(v___y_4302_, v___x_4304_);
v___y_4289_ = v___y_4302_;
v___y_4290_ = v___y_4301_;
v_fst_4291_ = v___x_4304_;
v_snd_4292_ = v___x_4305_;
goto v___jp_4288_;
}
else
{
v___y_4289_ = v___y_4302_;
v___y_4290_ = v___y_4301_;
v_fst_4291_ = v_left_4201_;
v_snd_4292_ = v_right_4202_;
goto v___jp_4288_;
}
}
v___jp_4306_:
{
uint8_t v___x_4309_; 
v___x_4309_ = lean_nat_dec_le(v___y_4307_, v___y_4308_);
if (v___x_4309_ == 0)
{
lean_dec(v___y_4308_);
lean_inc(v___y_4307_);
v___y_4301_ = v___y_4307_;
v___y_4302_ = v___y_4307_;
goto v___jp_4300_;
}
else
{
v___y_4301_ = v___y_4307_;
v___y_4302_ = v___y_4308_;
goto v___jp_4300_;
}
}
v___jp_4310_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; uint8_t v___x_4314_; 
v___x_4312_ = lean_unsigned_to_nat(2u);
v___x_4313_ = lean_unsigned_to_nat(16u);
v___x_4314_ = lean_nat_dec_le(v___y_4311_, v___x_4313_);
if (v___x_4314_ == 0)
{
lean_dec(v___y_4311_);
v___y_4307_ = v___x_4312_;
v___y_4308_ = v___x_4313_;
goto v___jp_4306_;
}
else
{
v___y_4307_ = v___x_4312_;
v___y_4308_ = v___y_4311_;
goto v___jp_4306_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Prompt(uint8_t builtin) {
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
lp_choreo_Choreo_instInhabitedSide_default = _init_lp_choreo_Choreo_instInhabitedSide_default();
lp_choreo_Choreo_instInhabitedSide = _init_lp_choreo_Choreo_instInhabitedSide();
lp_choreo_Choreo_instInhabitedPlan_default = _init_lp_choreo_Choreo_instInhabitedPlan_default();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedPlan_default);
lp_choreo_Choreo_instInhabitedPlan = _init_lp_choreo_Choreo_instInhabitedPlan();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedPlan);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
