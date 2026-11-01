import Choreo.Demo
import Choreo.Recipes
import Choreo.Tolerance
import Choreo.Transforms
/-!
# The statements Comparator judges

Read these to know what is claimed. The proofs live in `Solution.lean`; Comparator confirms that
they prove exactly these statements, using only the three standard axioms.
-/
open Choreo Generated
attribute [local instance] Lean.Grind.Semiring.natCast Lean.Grind.Ring.intCast

/-- Whenever the checker passes, the routine is safe and does what was asked. This covers every
    routine, at every instant, in every ordered number system. -/
theorem Final.checker_is_sound {r : Routine} {asks : List Ask} (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases)
    (ha : asks.all (Ask.check r) = true) (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K r asks := sorry

/-- Passing through a gap is safe, for any positions. This is why the flip works. -/
theorem Final.passing_through_a_gap_is_safe {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {a₁ b₁ a₂ b₂ : Pt} {g d : Int} (hs : a₁.x = a₂.x + g) (he : b₁.x = b₂.x + g)
    (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) : ((d : Int) : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t := sorry

/-- Swapping places along one line collides, for any positions. -/
theorem Final.swapping_along_a_line_always_collides {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] (a b : Pt) (h : a.x = b.x) :
    dist2 (easePath a b) (easePath b a) (1 / 2 : K) = 0 := sorry

/-- The three parts compose into the whole-routine statement. -/
theorem Final.parts_compose {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) (hs : MusicalityProved r)
    (hf : FormationProved K r asks) : Verified K r asks := sorry

/-- A transition follows from its own checks and phase proofs. -/
theorem Final.transition_valid {r : Routine} {tr : Transition} (hc : Transition.check r tr = true) (hp : AllChecked r.cfg (Transition.segment r tr))
    (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : TransitionValid K r tr := sorry

/-- The routine from demo-request.json is safe and does what was asked. -/
theorem Final.demo_routine_verified (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]
    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K routine asks := sorry

/-- Walking the two lines straight through each other is unsafe. -/
theorem Final.naive_flip_is_unsafe : ¬ PhaseSpec Rat idea0Cfg idea0 := sorry

/-- If each real point stays within `e` of its planned point, a gap of `D` shrinks by at most `2e`, for any positions. -/
theorem Final.drift_keeps_gap {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {px py qx qy ax ay bx by' D e : K} (he : 0 < e) (hD : 2 * e ≤ D) (hpos : 0 < D) (hgap : D ^ 2 ≤ (px - qx) ^ 2 + (py - qy) ^ 2) (ha : (ax - px) ^ 2 + (ay - py) ^ 2 ≤ e ^ 2) (hb : (bx - qx) ^ 2 + (by' - qy) ^ 2 ≤ e ^ 2) : (D - 2 * e) ^ 2 ≤ (ax - bx) ^ 2 + (ay - by') ^ 2 := sorry

/-- **Composition.** `{P} A {Q}` and `{Q} B {R}` give `{P} A; B {R}`. -/
theorem Final.composition {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {c : Config} {P Q R : State → Prop} {a b : Prog} (ha : Triple K c P a Q) (hb : Triple K c Q b R) : Triple K c P (.seq a b) R := sorry

/-- **A contract holds of the real trajectories.** If a step's contract is met, it runs safely and keeps its promise. -/
theorem Final.step_contract {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {st : Step} {c : Config} {a : State} (h : st.ok c a = true) : Triple K c (· = a) (.step st) (fun s' => s' = st.op.next c.n a ∧ st.ensures.holds s' = true) := sorry
