import Choreo.Demo
import Choreo.Recipes
import Choreo.Tolerance
import Choreo.Transforms
open Choreo Generated
attribute [local instance] Lean.Grind.Semiring.natCast Lean.Grind.Ring.intCast

theorem ph0_ok : Phase.check cfg ph0 = true := by decide +kernel
theorem ph1_ok : Phase.check cfg ph1 = true := by decide +kernel
theorem ph2_ok : Phase.check cfg ph2 = true := by decide +kernel
theorem ph3_ok : Phase.check cfg ph3 = true := by decide +kernel
theorem ph4_ok : Phase.check cfg ph4 = true := by decide +kernel
theorem ph5_ok : Phase.check cfg ph5 = true := Phase.check_shift (ph := ph1) rfl rfl rfl rfl rfl rfl rfl ph1_ok
theorem ph6_ok : Phase.check cfg ph6 = true := by decide +kernel
theorem ph7_ok : Phase.check cfg ph7 = true := by decide +kernel
theorem ph8_ok : Phase.check cfg ph8 = true := Phase.check_shift (ph := ph2) rfl rfl rfl rfl rfl rfl rfl ph2_ok
theorem ph9_ok : Phase.check cfg ph9 = true := by decide +kernel
theorem ph10_ok : Phase.check cfg ph10 = true := by decide +kernel
theorem ph11_ok : Phase.check cfg ph11 = true := by decide +kernel
theorem ph12_ok : Phase.check cfg ph12 = true := by decide +kernel
theorem ph13_ok : Phase.check cfg ph13 = true := by decide +kernel
theorem ph14_ok : Phase.check cfg ph14 = true := by decide +kernel
theorem ph15_ok : Phase.check cfg ph15 = true := by decide +kernel
theorem ph16_ok : Phase.check cfg ph16 = true := Phase.check_shift (ph := ph12) rfl rfl rfl rfl rfl rfl rfl ph12_ok
theorem ph17_ok : Phase.check cfg ph17 = true := by decide +kernel
theorem ph18_ok : Phase.check cfg ph18 = true := by decide +kernel
theorem ph19_ok : Phase.check cfg ph19 = true := Phase.check_shift (ph := ph13) rfl rfl rfl rfl rfl rfl rfl ph13_ok
theorem ph20_ok : Phase.check cfg ph20 = true := by decide +kernel
theorem ph21_ok : Phase.check cfg ph21 = true := by decide +kernel

/-- Lean's checker is sound: passing it implies safety and the requests. -/
theorem Final.checker_is_sound {r : Routine} {asks : List Ask} (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases)
    (ha : asks.all (Ask.check r) = true) (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K r asks :=
  Routine.verified hg hp ha K

/-- Passing through a gap is safe, for any positions. -/
theorem Final.passing_through_a_gap_is_safe {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {a₁ b₁ a₂ b₂ : Pt} {g d : Int} (hs : a₁.x = a₂.x + g) (he : b₁.x = b₂.x + g)
    (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) : ((d : Int) : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t :=
  Choreo.passing_through_a_gap_is_safe hs he h0 hd t

/-- Swapping places along one line collides, for any positions. -/
theorem Final.swapping_along_a_line_always_collides {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] (a b : Pt) (h : a.x = b.x) :
    dist2 (easePath a b) (easePath b a) (1 / 2 : K) = 0 :=
  Choreo.swapping_along_a_line_always_collides a b h

/-- The three parts compose into the whole-routine statement. -/
theorem Final.parts_compose {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) (hs : MusicalityProved r)
    (hf : FormationProved K r asks) : Verified K r asks :=
  Verified.of_parts hm hs hf

/-- A transition follows from its own checks and phase proofs. -/
theorem Final.transition_valid {r : Routine} {tr : Transition} (hc : Transition.check r tr = true) (hp : AllChecked r.cfg (Transition.segment r tr))
    (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : TransitionValid K r tr :=
  Transition.valid hc hp K

/-- The routine from demo-request.json is safe and does what was asked. -/
theorem Final.demo_routine_verified (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K routine asks :=
  Routine.verified (r := routine) (asks := asks) (by decide +kernel) (allChecked_cons ph0_ok (allChecked_cons ph1_ok (allChecked_cons ph2_ok (allChecked_cons ph3_ok (allChecked_cons ph4_ok (allChecked_cons ph5_ok (allChecked_cons ph6_ok (allChecked_cons ph7_ok (allChecked_cons ph8_ok (allChecked_cons ph9_ok (allChecked_cons ph10_ok (allChecked_cons ph11_ok (allChecked_cons ph12_ok (allChecked_cons ph13_ok (allChecked_cons ph14_ok (allChecked_cons ph15_ok (allChecked_cons ph16_ok (allChecked_cons ph17_ok (allChecked_cons ph18_ok (allChecked_cons ph19_ok (allChecked_cons ph20_ok (allChecked_cons ph21_ok allChecked_nil)))))))))))))))))))))) (by decide +kernel) K

/-- Walking the two lines straight through each other is unsafe. -/
theorem Final.naive_flip_is_unsafe : ¬ PhaseSpec Rat idea0Cfg idea0 :=
  refute_quick (c := idea0Cfg) (ph := idea0) (i := 4) (j := 0) (a := 1) (b := 2) (by decide +kernel)

/-- If each real point stays within `e` of its planned point, a gap of `D` shrinks by at most `2e`, for any positions. -/
theorem Final.drift_keeps_gap {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {px py qx qy ax ay bx by' D e : K} (he : 0 < e) (hD : 2 * e ≤ D) (hpos : 0 < D) (hgap : D ^ 2 ≤ (px - qx) ^ 2 + (py - qy) ^ 2) (ha : (ax - px) ^ 2 + (ay - py) ^ 2 ≤ e ^ 2) (hb : (bx - qx) ^ 2 + (by' - qy) ^ 2 ≤ e ^ 2) : (D - 2 * e) ^ 2 ≤ (ax - bx) ^ 2 + (ay - by') ^ 2 := Choreo.drift_keeps_gap he hD hpos hgap ha hb

/-- **Composition.** `{P} A {Q}` and `{Q} B {R}` give `{P} A; B {R}`. -/
theorem Final.composition {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {c : Config} {P Q R : State → Prop} {a b : Prog} (ha : Triple K c P a Q) (hb : Triple K c Q b R) : Triple K c P (.seq a b) R := Choreo.Triple.seq ha hb

/-- **A contract holds of the real trajectories.** If a step's contract is met, it runs safely and keeps its promise. -/
theorem Final.step_contract {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {st : Step} {c : Config} {a : State} (h : st.ok c a = true) : Triple K c (· = a) (.step st) (fun s' => s' = st.op.next c.n a ∧ st.ensures.holds s' = true) := Choreo.Step.triple h
