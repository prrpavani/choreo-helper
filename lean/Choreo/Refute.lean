import Choreo.Routine
/-!
# Refutation

A failed `Phase.check` only means "not proved". These theorems go further: given a concrete
rational instant at which a rule is broken, they conclude the specification is *false*.
-/
open Lean.Grind Std

namespace Choreo

/-- A concrete instant at which dancers `i` and `j` are too close. -/
structure Collision (c : Config) (ph : Phase) where
  i : Nat
  j : Nat
  t : Rat

abbrev Collision.valid (w : Collision c ph) : Prop :=
  w.i < c.n ∧ w.j < c.n ∧ w.i ≠ w.j ∧ 0 ≤ w.t ∧ w.t ≤ 1 ∧
    dist2 (ph.path w.i) (ph.path w.j) w.t < ((c.dmin : Int) : Rat) ^ 2

theorem refute_collision {c : Config} {ph : Phase} (w : Collision c ph) (hv : w.valid) :
    ¬ PhaseSpec Rat c ph := by
  intro spec
  obtain ⟨hi, hj, hne, h0, h1, hlt⟩ := hv
  have := spec.noCollision w.i w.j hi hj hne w.t h0 h1
  exact absurd hlt (by grind)

/-- A concrete instant at which dancer `i` is out of bounds. -/
abbrev outOfBounds (ph : Phase) (i : Nat) (t : Rat) : Prop :=
  (ph.path i).x t < ((ph.bounds.xmin : Int) : Rat) ∨ ((ph.bounds.xmax : Int) : Rat) < (ph.path i).x t ∨
  (ph.path i).y t < ((ph.bounds.ymin : Int) : Rat) ∨ ((ph.bounds.ymax : Int) : Rat) < (ph.path i).y t

theorem refute_stage {c : Config} {ph : Phase} {i : Nat} {t : Rat} (hi : i < c.n)
    (h0 : 0 ≤ t) (h1 : t ≤ 1) (h : outOfBounds ph i t) : ¬ PhaseSpec Rat c ph := by
  intro spec
  obtain ⟨a, b, c', d⟩ := spec.onStage i hi t h0 h1
  simp only [outOfBounds] at h
  grind

/-- One unsafe phase makes the whole routine unsafe. -/
theorem refute_routine {r : Routine} {ph : Phase} (hm : ph ∈ r.phases) (h : ¬ PhaseSpec Rat r.cfg ph) :
    ¬ RoutineSpec Rat r := fun spec => h (spec.phases ph hm)

end Choreo
