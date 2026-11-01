import Choreo.Routine
/-!
# `Poly.deriv` is the derivative

The speed limit is stated with the formal derivative `Poly.deriv`, so it is only meaningful
if that really is the derivative. This file proves the Taylor expansion that characterises it:

    f(t + h) = f(t) + h · f'(t) + h² · g(h)        where g is a polynomial in h

for `f t = ev p (1 - t) t`. No limits are needed: with `g` polynomial, this identity pins
down `f'(t)` in ℝ and in every other ordered field.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

section
variable {K : Type} [Field K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- Polynomial functions: the smallest class containing constants and the identity, closed
    under `+` and `×`. -/
inductive PolyFn : (K → K) → Prop where
  | const (c : K) : PolyFn (fun _ => c)
  | id : PolyFn (fun h => h)
  | add {f g : K → K} : PolyFn f → PolyFn g → PolyFn (fun h => f h + g h)
  | mul {f g : K → K} : PolyFn f → PolyFn g → PolyFn (fun h => f h * g h)

theorem pow_expand (s : K) (m : Nat) :
    ∃ q : K → K, PolyFn q ∧ ∀ h : K,
      (s - h) ^ (m + 1) = s ^ (m + 1) - (((m + 1 : Nat) : Int) : K) * h * s ^ m + h ^ 2 * q h := by
  induction m with
  | zero =>
    refine ⟨fun _ => 0, PolyFn.const 0, fun h => ?_⟩
    have e : (((0 + 1 : Nat) : Int) : K) = 1 := Ring.intCast_one
    rw [e]
    simp only [Nat.zero_add, Semiring.pow_zero, Semiring.pow_succ]
    grind
  | succ m ih =>
    obtain ⟨q, hq, ih⟩ := ih
    have hline : PolyFn (fun h : K => s - h) := by
      have hh : PolyFn (fun h : K => s + -1 * h) :=
        PolyFn.add (PolyFn.const s) (PolyFn.mul (PolyFn.const (-1)) PolyFn.id)
      have e : (fun h : K => s + -1 * h) = (fun h => s - h) := by funext h; grind
      exact e ▸ hh
    refine ⟨fun h => (((m + 1 : Nat) : Int) : K) * s ^ m + q h * (s - h),
      PolyFn.add (PolyFn.const _) (PolyFn.mul hq hline), fun h => ?_⟩
    have e : (((m + 1 + 1 : Nat) : Int) : K) = (((m + 1 : Nat) : Int) : K) + 1 := by
      have : (((m + 1 + 1 : Nat) : Int)) = ((m + 1 : Nat) : Int) + 1 := by omega
      rw [this, Ring.intCast_add, Ring.intCast_one]
    have p : (s - h) ^ (m + 1 + 1) = (s - h) ^ (m + 1) * (s - h) := Semiring.pow_succ _ _
    have p2 : s ^ (m + 1 + 1) = s ^ (m + 1) * s := Semiring.pow_succ _ _
    have p3 : s ^ (m + 1) = s ^ m * s := Semiring.pow_succ _ _
    rw [p, ih h, e, p2]
    grind

/-- Taylor expansion of a form along the line `(s - h, t + h)`. -/
theorem ev_taylor (s t : K) (p : Poly) :
    ∃ g : K → K, PolyFn g ∧ ∀ h : K,
      ev p (s - h) (t + h) = ev p s t + h * ev (Poly.deriv p) s t + h ^ 2 * g h := by
  induction p with
  | nil =>
    refine ⟨fun _ => 0, PolyFn.const 0, fun h => ?_⟩
    simp only [ev_nil, Poly.deriv]
    grind
  | cons b bs ih =>
    cases bs with
    | nil =>
      refine ⟨fun _ => 0, PolyFn.const 0, fun h => ?_⟩
      simp only [ev_cons, ev_nil, Poly.deriv, List.length_nil, Semiring.pow_zero]
      grind
    | cons c cs =>
      obtain ⟨g₁, hg₁, ih⟩ := ih
      obtain ⟨q, hq, hp⟩ := pow_expand s cs.length
      have hmid : PolyFn (fun h : K => (t + h) * g₁ h) :=
        PolyFn.mul (PolyFn.add (PolyFn.const t) PolyFn.id) hg₁
      refine ⟨fun h => (b : K) * q h + ev (Poly.deriv (c :: cs)) s t + (t + h) * g₁ h,
        PolyFn.add (PolyFn.add (PolyFn.mul (PolyFn.const _) hq) (PolyFn.const _)) hmid,
        fun h => ?_⟩
      have lG : (c :: cs).length = cs.length + 1 := rfl
      have e1 : (c :: cs).length
          = ((-(((c :: cs).length : Nat) : Int) * b) :: Poly.zeros ((c :: cs).length - 1)).length := by
        simp only [List.length_cons, length_zeros]; omega
      have dl := length_deriv (c :: cs) (by simp)
      have e2 : (Poly.add (c :: cs)
            ((-(((c :: cs).length : Nat) : Int) * b) :: Poly.zeros ((c :: cs).length - 1))).length
          = (0 :: Poly.deriv (c :: cs)).length := by
        rw [length_add _ _ e1]
        simp only [List.length_cons] at dl ⊢
        omega
      have hder : ev (Poly.deriv (b :: c :: cs)) s t
          = ev (c :: cs) s t
            + (-(((cs.length + 1 : Nat) : Int) : K) * (b : K) * s ^ cs.length)
            + t * ev (Poly.deriv (c :: cs)) s t := by
        simp only [Poly.deriv]
        rw [ev_add _ _ e2, ev_add _ _ e1, ev_cons (-_ * b), ev_cons 0]
        have hz : (Poly.zeros ((c :: cs).length - 1)).length = cs.length := by
          rw [length_zeros]; simp
        rw [hz, ev_zeros, Ring.intCast_zero, Ring.intCast_mul, Ring.intCast_neg]
        simp only [lG]
        grind
      rw [ev_cons b, ev_cons b, hder, lG, hp h, ih h]
      grind

/-- **The formal derivative is the derivative** of `t ↦ ev p (1 - t) t`. -/
theorem deriv_correct (p : Poly) (t : K) :
    ∃ g : K → K, PolyFn g ∧ ∀ h : K,
      ev p (1 - (t + h)) (t + h)
        = ev p (1 - t) t + h * ev (Poly.deriv p) (1 - t) t + h ^ 2 * g h := by
  obtain ⟨g, hg, H⟩ := ev_taylor (1 - t) t p
  refine ⟨g, hg, fun h => ?_⟩
  have e : 1 - (t + h) = (1 - t) - h := by grind
  rw [e]
  exact H h

end
end Choreo
