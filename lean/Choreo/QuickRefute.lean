import Choreo.Refute
/-!
# Fast refutation

`refute_collision` asks the kernel to do exact fraction arithmetic, which is slow. This version
reaches the same conclusion using whole numbers only: at time `a / b`, it evaluates the same
clearance form that the checker uses, and looks at the sign.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

/-- `ev`, on whole numbers. -/
def evI : Poly → Int → Int → Int
  | [], _, _ => 0
  | b :: bs, s, t => b * s ^ bs.length + t * evI bs s t

section
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem intCast_pow' (s : Int) (n : Nat) : ((s ^ n : Int) : K) = (s : K) ^ n := by
  induction n with
  | zero =>
    simp only [Int.pow_zero, Semiring.pow_zero, Ring.intCast_one]
  | succ n ih =>
    rw [Int.pow_succ, Ring.intCast_mul, ih, Semiring.pow_succ]

theorem evI_cast (p : Poly) (s t : Int) : ((evI p s t : Int) : K) = ev p (s : K) (t : K) := by
  induction p with
  | nil => simp only [evI, ev_nil, Ring.intCast_zero]
  | cons b bs ih =>
    simp only [evI, ev_cons]
    rw [Ring.intCast_add, Ring.intCast_mul, Ring.intCast_mul, intCast_pow', ih]

theorem mul_pow' (s r : K) (n : Nat) : (s * r) ^ n = s ^ n * r ^ n := by
  induction n with
  | zero => simp only [Semiring.pow_zero]; grind
  | succ n ih => simp only [Semiring.pow_succ, ih]; grind

/-- Scaling both arguments of a form scales its value by a power, because a form is homogeneous. -/
theorem ev_scale_args (p : Poly) (hp : p ≠ []) (s t r : K) :
    ev p (s * r) (t * r) = r ^ (p.length - 1) * ev p s t := by
  induction p with
  | nil => contradiction
  | cons b bs ih =>
    cases bs with
    | nil =>
      simp only [ev_cons, ev_nil, List.length_nil, List.length_cons, Semiring.pow_zero]
      grind
    | cons c cs =>
      have ih' := ih (by simp)
      simp only [List.length_cons, Nat.add_sub_cancel] at ih' ⊢
      rw [ev_cons b, ev_cons b, ih', mul_pow']
      simp only [List.length_cons, Semiring.pow_succ]
      grind

theorem dist2_lt_of_clear_neg {a b : Path} (ha : a.wf = true) (hb : b.wf = true) {d : Int} {t : K}
    (h0 : 0 ≤ t) (h1 : t ≤ 1) (h : ev (clearPoly a b d) (1 - t) t < 0) :
    dist2 a b t < (d : K) ^ 2 := by
  obtain ⟨ex, ey⟩ := dist2_eq ha hb h0 h1
  have hv := ww_pos ha hb h0 h1
  have hne : ev (wwPoly a b) (1 - t) t ≠ 0 := by grind
  obtain ⟨_, hev⟩ := clearPoly_ev (K := K) ha hb d (1 - t) t
  rw [hev] at h
  simp only [dist2, ex, ey]
  generalize ev (dxPoly a b) (1 - t) t = Dx at *
  generalize ev (dyPoly a b) (1 - t) t = Dy at *
  generalize ev (wwPoly a b) (1 - t) t = v at *
  have hv2 : 0 < v * v := OrderedRing.mul_pos hv hv
  have hinv : 0 < (v * v)⁻¹ := inv_pos' hv2
  have := OrderedRing.mul_lt_mul_of_pos_right h hinv
  have hvv : v * v ≠ 0 := by grind
  have e : ((Dx * Dx + Dy * Dy) - (d : K) * d * (v * v)) * (v * v)⁻¹
      = (Dx / v) ^ 2 + (Dy / v) ^ 2 - (d : K) ^ 2 := by
    have c : (v * v) * (v * v)⁻¹ = 1 := Field.mul_inv_cancel hvv
    rw [Field.div_eq_mul_inv, Field.div_eq_mul_inv]
    grind
  grind

end

/-- The whole-number test: dancers `i` and `j`, at time `a / b` of phase `ph`, are too close. -/
def quickCollision (c : Config) (ph : Phase) (i j : Nat) (a b : Int) : Bool :=
  decide (i < c.n) && decide (j < c.n) && (i != j) && decide (0 ≤ a) && decide (a ≤ b) && decide (0 < b) &&
    (ph.path i).wf && (ph.path j).wf &&
    decide (evI (clearPoly (ph.path i) (ph.path j) c.dmin) (b - a) a < 0)

/-- **A phase with a collision is unsafe.** If the whole-number test finds dancers too close at one
    concrete time, then the phase breaks its specification. -/
theorem refute_quick {c : Config} {ph : Phase} {i j : Nat} {a b : Int}
    (h : quickCollision c ph i j a b = true) : ¬ PhaseSpec Rat c ph := by
  simp only [quickCollision, Bool.and_eq_true, decide_eq_true_eq, bne_iff_ne] at h
  obtain ⟨⟨⟨⟨⟨⟨⟨⟨hi, hj⟩, hne⟩, ha⟩, hab⟩, hb⟩, wi⟩, wj⟩, hneg⟩ := h
  intro spec
  have hbR : (0 : Rat) < (b : Rat) := by exact_mod_cast hb
  have hbn : (b : Rat) ≠ 0 := by grind
  let r : Rat := (b : Rat)⁻¹
  have hr : 0 < r := inv_pos' hbR
  let t : Rat := (a : Rat) * r
  have hbr : (b : Rat) * r = 1 := Field.mul_inv_cancel hbn
  have ha0 : (0 : Rat) ≤ (a : Rat) := by exact_mod_cast ha
  have h0 : 0 ≤ t := OrderedRing.mul_nonneg ha0 (Std.le_of_lt hr)
  have hd : (0 : Rat) ≤ ((b - a : Int) : Rat) := by
    apply OrderedRing.nonneg_intCast_of_nonneg; omega
  have hsub : ((b - a : Int) : Rat) * r = 1 - t := by
    rw [Ring.intCast_sub]
    show ((b : Rat) - (a : Rat)) * r = 1 - (a : Rat) * r
    grind
  have h1 : t ≤ 1 := by
    have := OrderedRing.mul_nonneg hd (Std.le_of_lt hr)
    rw [hsub] at this
    grind
  have hL : clearPoly (ph.path i) (ph.path j) c.dmin ≠ [] := (clearPoly_ev (K := Rat) wi wj c.dmin 0 0).1
  have key := ev_scale_args (K := Rat) _ hL ((b - a : Int) : Rat) (a : Rat) r
  rw [hsub] at key
  have hev : ev (clearPoly (ph.path i) (ph.path j) c.dmin) (1 - t) t < 0 := by
    show ev _ (1 - t) ((a : Rat) * r) < 0
    rw [key, ← evI_cast]
    have hneg' : ((evI (clearPoly (ph.path i) (ph.path j) c.dmin) (b - a) a : Int) : Rat) < 0 := by
      exact_mod_cast hneg
    have hp := pow_pos' hr ((clearPoly (ph.path i) (ph.path j) c.dmin).length - 1)
    exact OrderedRing.mul_neg_of_pos_of_neg hp hneg'
  have lt := dist2_lt_of_clear_neg wi wj h0 h1 hev
  have ge := spec.noCollision i j hi hj hne t h0 h1
  exact absurd lt (by grind)

end Choreo
