import Choreo.Compose
/-!
# Forgiveness: what happens when real dancers drift

A proof about planned paths says nothing about a person who is a little late or a little off their mark.
These theorems cover that. If a routine keeps everyone `B + 2e` apart, then in *any* real performance
where each dancer stays within `e` of their planned position, everyone stays `B` apart. The performance
can be any function at all, so this covers infinitely many performances, which no simulation can try.
-/
open Lean.Grind Std

namespace Choreo

section
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

private theorem sq_nn (a : K) : 0 ≤ a ^ 2 := OrderedRing.sq_nonneg (a := a)
private theorem mul_nn {a b : K} (ha : 0 ≤ a) (hb : 0 ≤ b) : 0 ≤ a * b := OrderedRing.mul_nonneg ha hb

private theorem nonneg_of_mul {a b : K} (ha : 0 < a) (h : 0 ≤ a * b) : 0 ≤ b := by
  apply Classical.byContradiction; intro hn
  have hb : b < 0 := by grind
  have := OrderedRing.mul_lt_mul_of_pos_left hb ha
  grind

/-- The core of the argument, with `U = |u|²`, `W = |w|²` and `S = u·w`. -/
private theorem core {U W S D E : K} (hE : 0 < E) (hD : E ≤ D) (hDp : 0 < D)
    (hU : D ^ 2 ≤ U) (hW : W ≤ E ^ 2)
    (hc : 0 ≤ E ^ 2 * U + 2 * E * D * S + D ^ 2 * W) : (D - E) ^ 2 ≤ U + 2 * S + W := by
  have hED : 0 < E * D := OrderedRing.mul_pos hE hDp
  have h1 : 0 ≤ (D - E) * E * (U - D ^ 2) := mul_nn (mul_nn (by grind) (by grind)) (by grind)
  have h2 : 0 ≤ (D - E) * D * (E ^ 2 - W) := mul_nn (mul_nn (by grind) (by grind)) (by grind)
  have key : 0 ≤ (E * D) * (U + 2 * S + W - (D - E) ^ 2) := by
    have : (E * D) * (U + 2 * S + W - (D - E) ^ 2) = (E ^ 2 * U + 2 * E * D * S + D ^ 2 * W) + (D - E) * E * (U - D ^ 2) + (D - E) * D * (E ^ 2 - W) := by grind
    rw [this]; grind
  have := nonneg_of_mul hED key
  grind

/-- If two planned points are at least `D` apart, and each real point is within `e` of its planned
    point, the real points are at least `D - 2e` apart. Everything is squared, so no roots are needed. -/
theorem drift_keeps_gap {px py qx qy ax ay bx by' D e : K}
    (he : 0 < e) (hD : 2 * e ≤ D) (hpos : 0 < D)
    (hgap : D ^ 2 ≤ (px - qx) ^ 2 + (py - qy) ^ 2)
    (ha : (ax - px) ^ 2 + (ay - py) ^ 2 ≤ e ^ 2)
    (hb : (bx - qx) ^ 2 + (by' - qy) ^ 2 ≤ e ^ 2) :
    (D - 2 * e) ^ 2 ≤ (ax - bx) ^ 2 + (ay - by') ^ 2 := by
  let ux := px - qx; let uy := py - qy
  let wx := (ax - px) - (bx - qx); let wy := (ay - py) - (by' - qy)
  have hE : 0 < 2 * e := by grind
  -- the drift between two dancers is at most twice the drift of one
  have hW : wx ^ 2 + wy ^ 2 ≤ (2 * e) ^ 2 := by
    have s1 := sq_nn ((ax - px) + (bx - qx))
    have s2 := sq_nn ((ay - py) + (by' - qy))
    simp only [wx, wy]; grind
  have hc : 0 ≤ (2 * e) ^ 2 * (ux ^ 2 + uy ^ 2) + 2 * (2 * e) * D * (ux * wx + uy * wy) + D ^ 2 * (wx ^ 2 + wy ^ 2) := by
    have s1 := sq_nn ((2 * e) * ux + D * wx)
    have s2 := sq_nn ((2 * e) * uy + D * wy)
    grind
  have := core (S := ux * wx + uy * wy) hE hD hpos hgap hW hc
  simp only [ux, uy, wx, wy] at this
  grind

/-- In every real performance where each dancer stays within `e` of the plan, every pair stays `B` apart. -/
def Routine.Forgiving (K : Type) [Field K] [LE K] [LT K] (r : Routine) (B e : Int) : Prop :=
  ∀ real : Nat → K → K × K,
    (∀ T : K, ∀ ph, ph ∈ r.phases → Phase.Active ph T → ∀ i, i < r.cfg.n →
      ((real i T).1 - (ph.path i).x (ph.localTime T)) ^ 2 + ((real i T).2 - (ph.path i).y (ph.localTime T)) ^ 2 ≤ ((e : Int) : K) ^ 2) →
    ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) → ∀ i j, i < r.cfg.n → j < r.cfg.n → i ≠ j →
      ((B : Int) : K) ^ 2 ≤ ((real i T).1 - (real j T).1) ^ 2 + ((real i T).2 - (real j T).2) ^ 2

/-- **The forgiving theorem.** Take a routine proved with a gap of `B + 2e`. Let `real i T` be where
    dancer `i` really is at time `T`: any function at all. If every dancer stays within `e` of where
    the plan puts them, then at every moment every pair stays at least `B` apart. -/
theorem Routine.forgiving {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) {B e : Int}
    (hB : 0 < B) (he : 0 < e) (hd : r.cfg.dmin = B + 2 * e) (real : Nat → K → K × K)
    (within : ∀ T : K, ∀ ph, ph ∈ r.phases → Phase.Active ph T → ∀ i, i < r.cfg.n →
      ((real i T).1 - (ph.path i).x (ph.localTime T)) ^ 2 + ((real i T).2 - (ph.path i).y (ph.localTime T)) ^ 2 ≤ ((e : Int) : K) ^ 2)
    (T : K) (h0 : 0 ≤ T) (h1 : T ≤ ((r.cfg.total : Int) : K)) (i j : Nat) (hi : i < r.cfg.n) (hj : j < r.cfg.n) (hne : i ≠ j) :
    ((B : Int) : K) ^ 2 ≤ ((real i T).1 - (real j T).1) ^ 2 + ((real i T).2 - (real j T).2) ^ 2 := by
  obtain ⟨ph, hph, hact, hgap⟩ := hm.noCollision T h0 h1
  have hg := hgap i j hi hj hne
  have hcast : ((r.cfg.dmin : Int) : K) = ((B : Int) : K) + 2 * ((e : Int) : K) := by rw [hd]; grind
  have hBK : (0 : K) < ((B : Int) : K) := OrderedRing.pos_intCast_of_pos (R := K) B hB
  have heK : (0 : K) < ((e : Int) : K) := OrderedRing.pos_intCast_of_pos (R := K) e he
  rw [hcast] at hg
  simp only [dist2] at hg
  have := drift_keeps_gap (D := ((B : Int) : K) + 2 * ((e : Int) : K)) heK (by grind) (by grind) hg (within T ph hph hact i hi) (within T ph hph hact j hj)
  have hs : ((B : Int) : K) + 2 * ((e : Int) : K) - 2 * ((e : Int) : K) = ((B : Int) : K) := by grind
  rw [hs] at this
  exact this

theorem Routine.forgiving_of_movement {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) {B e : Int}
    (hB : 0 < B) (he : 0 < e) (hd : r.cfg.dmin = B + 2 * e) : Routine.Forgiving K r B e :=
  fun real within T h0 h1 i j hi hj hne => Routine.forgiving hm hB he hd real within T h0 h1 i j hi hj hne

/-- The hypothesis can be met: the planned performance itself is within any drift of the plan. -/
theorem planned_is_within {px py e : K} : (px - px) ^ 2 + (py - py) ^ 2 ≤ e ^ 2 := by
  have := sq_nn e
  grind

end

/-- The bound is exact: two dancers 100 apart, each drifting 10 towards the other, end up exactly 80 apart.
    So the theorem can't promise more than it does. -/
example : ((10 : Rat) - 90) ^ 2 + ((0 : Rat) - 0) ^ 2 = ((100 : Rat) - 2 * 10) ^ 2 := by decide +kernel
end Choreo
