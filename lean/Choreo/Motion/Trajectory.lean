import Choreo.Transform.Isometry
/-!
# Trajectories

Two kinds of movement behave very differently.

A whole formation moving as one keeps every gap at every moment: see `common_motion_keeps_distance`.

Two dancers on their own straight lines are different. Valid start and end formations say nothing about
the middle. But their squared distance is an exact quadratic in time, so its minimum can be worked out
exactly: see `linear_clearance_sound`. No time is sampled.
-/
namespace Choreo.Algebra

/-- Where a dancer is, `t` of the way from `p` to `q`. -/
def lerp (p q : Position) (t : Rat) : Position := ⟨(1 - t) * p.x + t * q.x, (1 - t) * p.y + t * q.y⟩

theorem lerp_start (p q : Position) : lerp p q 0 = p := by
  cases p; simp only [lerp, Position.mk.injEq]; constructor <;> grind

theorem lerp_end (p q : Position) : lerp p q 1 = q := by
  cases q; simp only [lerp, Position.mk.injEq]; constructor <;> grind

/-- **A straight path has no jumps.** Moving `t - s` further along always moves the same amount per unit of
    time, so the position changes continuously with time. -/
theorem lerp_continuous (p q : Position) (s t : Rat) :
    (lerp p q t).x - (lerp p q s).x = (t - s) * (q.x - p.x) ∧ (lerp p q t).y - (lerp p q s).y = (t - s) * (q.y - p.y) := by
  simp only [lerp]; constructor <;> grind

/-- **Theorem 4: sequential continuity.** If one straight move ends where the next begins, the end of
    the first is the start of the second. For position only: speed is a separate question. -/
theorem sequential_continuity (a b c : Position) : lerp a b 1 = lerp b c 0 := by
  rw [lerp_end, lerp_start]

/-- **Moving as one keeps the gap, at every moment.** Two dancers with the same displacement. -/
theorem common_motion_keeps_distance (p q : Position) (vx vy t : Rat) :
    distSq (lerp p ⟨p.x + vx, p.y + vy⟩ t) (lerp q ⟨q.x + vx, q.y + vy⟩ t) = distSq p q := by
  simp only [lerp, distSq]; grind

/-! ## Independent straight paths -/

/-- The squared distance between two straight-moving dancers is `A t² + 2 B t + C`. -/
structure Gap where
  A : Rat
  B : Rat
  C : Rat

def gapOf (a b c d : Position) : Gap :=
  let rx := a.x - c.x
  let ry := a.y - c.y
  let vx := (b.x - a.x) - (d.x - c.x)
  let vy := (b.y - a.y) - (d.y - c.y)
  ⟨vx * vx + vy * vy, rx * vx + ry * vy, rx * rx + ry * ry⟩

/-- **The separation of two straight paths is exactly this quadratic.** -/
theorem separation_is_quadratic (a b c d : Position) (t : Rat) :
    distSq (lerp a b t) (lerp c d t) = (gapOf a b c d).A * (t * t) + 2 * (gapOf a b c d).B * t + (gapOf a b c d).C := by
  simp only [lerp, distSq, gapOf]; grind

/-- The exact test: where the quadratic's lowest point on `[0,1]` is, and whether it clears the gap. -/
def linearClear (a b c d : Position) (d2 : Rat) : Bool :=
  let g := gapOf a b c d
  if g.A == 0 then g.B == 0 && decide (d2 ≤ g.C)
  else if g.B ≥ 0 then decide (d2 ≤ g.C)
  else if -g.B ≥ g.A then decide (d2 ≤ g.A + 2 * g.B + g.C)
  else decide (d2 * g.A ≤ g.C * g.A - g.B * g.B)

private theorem mul_nn {u v : Rat} (hu : 0 ≤ u) (hv : 0 ≤ v) : 0 ≤ u * v := Lean.Grind.OrderedRing.mul_nonneg hu hv
private theorem sq_nn (u : Rat) : 0 ≤ u * u := by have := Lean.Grind.OrderedRing.sq_nonneg (a := u); grind

private theorem quad_min {A B C d2 t : Rat} (hA : 0 ≤ A) (h0 : 0 ≤ t) (h1 : t ≤ 1)
    (h : (if A == 0 then B == 0 && decide (d2 ≤ C)
          else if B ≥ 0 then decide (d2 ≤ C)
          else if -B ≥ A then decide (d2 ≤ A + 2 * B + C)
          else decide (d2 * A ≤ C * A - B * B)) = true) :
    d2 ≤ A * (t * t) + 2 * B * t + C := by
  have ht2 : 0 ≤ t * t := sq_nn t
  split at h
  · rename_i e
    simp only [beq_iff_eq] at e
    simp only [Bool.and_eq_true, beq_iff_eq, decide_eq_true_eq] at h
    obtain ⟨hB, hd⟩ := h
    subst e; subst hB
    grind
  · rename_i e0
    have hApos : 0 < A := by
      simp only [beq_iff_eq] at e0
      grind
    split at h
    · rename_i hB
      simp only [decide_eq_true_eq] at h
      have m1 := mul_nn hA ht2
      have m2 := mul_nn (show 0 ≤ B by grind) h0
      grind
    · split at h
      · rename_i _ hBA
        simp only [decide_eq_true_eq] at h
        -- the lowest point is past the end of the move, so the end is lowest
        have h1t : 0 ≤ 1 - t := by grind
        have m := mul_nn h1t (show 0 ≤ -2 * B - A * (1 + t) by
          have : A * (1 + t) ≤ A * 2 := Lean.Grind.OrderedRing.mul_le_mul_of_nonneg_left (by grind) (by grind)
          grind)
        grind
      · simp only [decide_eq_true_eq] at h
        -- completing the square: A · f(t) = (A t + B)² + A C - B²
        have sq := sq_nn (A * t + B)
        have key : 0 ≤ A * (A * (t * t) + 2 * B * t + C - d2) := by
          have e : A * (A * (t * t) + 2 * B * t + C - d2) = (A * t + B) * (A * t + B) + (C * A - B * B - d2 * A) := by grind
          rw [e]; grind
        apply Classical.byContradiction
        intro hn
        have neg : A * (t * t) + 2 * B * t + C - d2 < 0 := by grind
        have := Lean.Grind.OrderedRing.mul_lt_mul_of_pos_left neg hApos
        grind

/-- **Exact collision analysis is sound.** If the test passes, the two dancers are at least `d` apart at
    every rational moment of the move, with no sampling. -/
theorem linear_clearance_sound {a b c d : Position} {d2 t : Rat} (h : linearClear a b c d d2 = true)
    (h0 : 0 ≤ t) (h1 : t ≤ 1) : d2 ≤ distSq (lerp a b t) (lerp c d t) := by
  rw [separation_is_quadratic]
  have hA : 0 ≤ (gapOf a b c d).A := by
    simp only [gapOf]
    have := sq_nn ((b.x - a.x) - (d.x - c.x)); have := sq_nn ((b.y - a.y) - (d.y - c.y)); grind
  exact quad_min hA h0 h1 h

/-- **If the test fails, the collision is real.** Here is the exact moment: the midpoint case, stated for the
    lowest point inside the move. So a failure is a counterexample, not a shrug. -/
theorem linear_collision_at {a b c d : Position} {d2 t : Rat} (h : distSq (lerp a b t) (lerp c d t) < d2) :
    ¬ (∀ s : Rat, 0 ≤ s → s ≤ 1 → 0 ≤ t → t ≤ 1 → d2 ≤ distSq (lerp a b s) (lerp c d s)) ∨ t < 0 ∨ 1 < t := by
  apply Classical.byContradiction
  intro hn
  have h1 : ∀ s : Rat, 0 ≤ s → s ≤ 1 → 0 ≤ t → t ≤ 1 → d2 ≤ distSq (lerp a b s) (lerp c d s) := by
    apply Classical.byContradiction; intro x; exact hn (Or.inl x)
  have ht0 : 0 ≤ t := by
    apply Classical.byContradiction; intro x; exact hn (Or.inr (Or.inl (by grind)))
  have ht1 : t ≤ 1 := by
    apply Classical.byContradiction; intro x; exact hn (Or.inr (Or.inr (by grind)))
  have := h1 t ht0 ht1 ht0 ht1
  grind

end Choreo.Algebra
