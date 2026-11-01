import Choreo.Recipes
/-!
# The rotation the app actually plays

`Choreo.Transform.Rotation` proves that rotations keep distances. This file proves it of `rotatePath`, the
exact function that produces the arcs on stage: the two dancers' distance at every moment equals their
distance at the start. So a turning formation needs no pair-by-pair check.
-/
open Lean.Grind Std
set_option linter.unusedSectionVars false
namespace Choreo
section
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- Squared distance between two whole-number points. -/
def gapSq' (a b : Pt) : Int := (a.x - b.x) ^ 2 + (a.y - b.y) ^ 2

private abbrev QP : Poly := [1, 3, 3, 1]
private abbrev PP : Poly := [0, 0, 3, 1]

private def rq (t : K) : K := ev QP (1 - t) t
private def rp (t : K) : K := ev PP (1 - t) t
private def rw' (t : K) : K := rq t * rq t + rp t * rp t
private def ra (t : K) : K := rq t * rq t - rp t * rp t
private def rb (t : K) : K := ((2 : Int) : K) * (rp t * rq t)

private theorem W_ev (t : K) : ev (Poly.add (Poly.mul QP QP) (Poly.mul PP PP)) (1 - t) t = rw' t := by
  rw [ev_add _ _ (by decide), ev_mul _ _ _ _ (by decide), ev_mul _ _ _ _ (by decide)]; rfl
private theorem A_ev (t : K) : ev (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP)) (1 - t) t = ra t := by
  rw [ev_sub _ _ (by decide), ev_mul _ _ _ _ (by decide), ev_mul _ _ _ _ (by decide)]; rfl
private theorem B_ev (t : K) : ev (Poly.scale 2 (Poly.mul PP QP)) (1 - t) t = rb t := by
  rw [ev_scale, ev_mul _ _ _ _ (by decide)]; rfl

private theorem rW_pos {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) : 0 < rw' t := by
  have hs : 0 ≤ 1 - t := by grind
  have := ev_pos (K := K) (p := Poly.add (Poly.mul QP QP) (Poly.mul PP PP)) (by decide) (by decide) hs h0 (by grind)
  rw [W_ev] at this; exact this

private theorem pyth (t : K) : ra t * ra t + rb t * rb t = rw' t * rw' t := by
  simp only [ra, rb, rw', Ring.intCast_ofNat]; grind

private theorem len7 : (Poly.mul QP QP).length = 7 := by decide
private theorem lenW : (Poly.add (Poly.mul QP QP) (Poly.mul PP PP)).length = 7 := by decide
private theorem lenA : (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP)).length = 7 := by decide
private theorem lenB : (Poly.scale 2 (Poly.mul PP QP)).length = 7 := by decide

private theorem sW (c : Int) : (Poly.scale c (Poly.add (Poly.mul QP QP) (Poly.mul PP PP))).length = 7 := by rw [length_scale, lenW]
private theorem sA (c : Int) : (Poly.scale c (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP))).length = 7 := by rw [length_scale, lenA]
private theorem sB (c : Int) : (Poly.scale c (Poly.scale 2 (Poly.mul PP QP))).length = 7 := by rw [length_scale, lenB]

/-- Numerator of a coordinate: `u · W + v · A + w · B`. -/
private theorem ev_combo (u v w : Int) (t : K) :
    ev (Poly.add (Poly.scale u (Poly.add (Poly.mul QP QP) (Poly.mul PP PP)))
        (Poly.sub (Poly.scale v (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP))) (Poly.scale w (Poly.scale 2 (Poly.mul PP QP))))) (1 - t) t
      = (u : K) * rw' t + (v : K) * ra t - (w : K) * rb t := by
  rw [ev_add _ _ (by rw [sW, length_sub _ _ ((sA v).trans (sB w).symm), sA]),
    ev_sub _ _ ((sA v).trans (sB w).symm), ev_scale u, ev_scale v, ev_scale w, W_ev, A_ev, B_ev]
  grind

private theorem ev_combo' (u v w : Int) (t : K) :
    ev (Poly.add (Poly.scale u (Poly.add (Poly.mul QP QP) (Poly.mul PP PP)))
        (Poly.add (Poly.scale v (Poly.scale 2 (Poly.mul PP QP))) (Poly.scale w (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP))))) (1 - t) t
      = (u : K) * rw' t + (v : K) * rb t + (w : K) * ra t := by
  rw [ev_add _ _ (by rw [sW, length_add _ _ ((sB v).trans (sA w).symm), sB]),
    ev_add _ _ ((sB v).trans (sA w).symm), ev_scale u, ev_scale v, ev_scale w, W_ev, A_ev, B_ev]
  grind

private theorem ev_combo'' (u v w : Int) (t : K) :
    ev (Poly.sub (Poly.scale u (Poly.add (Poly.mul QP QP) (Poly.mul PP PP)))
        (Poly.add (Poly.scale v (Poly.scale 2 (Poly.mul PP QP))) (Poly.scale w (Poly.sub (Poly.mul QP QP) (Poly.mul PP PP))))) (1 - t) t
      = (u : K) * rw' t - (v : K) * rb t - (w : K) * ra t := by
  rw [ev_sub _ _ (by rw [sW, length_add _ _ ((sB v).trans (sA w).symm), sB]),
    ev_add _ _ ((sB v).trans (sA w).symm), ev_scale u, ev_scale v, ev_scale w, W_ev, A_ev, B_ev]
  grind

/-- Where a turning dancer is, as an exact fraction over the common denominator. -/
theorem turn_position (c a : Pt) (ccw : Bool) (t : K) :
    ∃ (dy : Int), dy = (if ccw then a.y - c.y else c.y - a.y) ∧
    (rotatePath c a ccw).x t = (((c.x : Int) : K) * rw' t + ((a.x - c.x : Int) : K) * ra t - ((dy : Int) : K) * rb t) / rw' t ∧
    (rotatePath c a ccw).y t = (if ccw then ((c.y : Int) : K) * rw' t + ((a.x - c.x : Int) : K) * rb t + ((dy : Int) : K) * ra t
                                 else ((c.y : Int) : K) * rw' t - ((a.x - c.x : Int) : K) * rb t - ((dy : Int) : K) * ra t) / rw' t := by
  refine ⟨_, rfl, ?_, ?_⟩
  · simp only [Path.x, rotatePath]
    rw [W_ev, ev_combo]
  · cases ccw <;> simp only [Path.y, rotatePath, if_true, if_false, Bool.false_eq_true]
    · rw [W_ev, ev_combo'']
    · rw [W_ev, ev_combo']

/-- **Everyone turning together keeps every gap.** At every moment of the arc the app actually plays, the
    distance between two dancers is exactly what it was at the start. No pair is checked. -/
theorem turning_keeps_the_gap (c a b : Pt) (ccw : Bool) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    dist2 (rotatePath c a ccw) (rotatePath c b ccw) t = ((gapSq' a b : Int) : K) := by
  have hw := rW_pos h0 h1
  have hne : rw' t ≠ 0 := by grind
  have py := pyth t
  obtain ⟨_, e1, x1, y1⟩ := turn_position c a ccw t
  obtain ⟨_, e2, x2, y2⟩ := turn_position c b ccw t
  subst e1; subst e2
  simp only [dist2, x1, y1, x2, y2, gapSq', Int.pow_succ, Int.pow_zero]
  generalize rw' t = w at *
  generalize ra t = A at *
  generalize rb t = B at *
  cases ccw <;> simp only [if_true, if_false, Bool.false_eq_true] <;>
    simp only [Ring.intCast_add, Ring.intCast_sub, Ring.intCast_mul, Ring.intCast_one, Semiring.pow_succ, Semiring.pow_zero] <;> grind

/-- **A turning dancer stays on their circle.** Their distance from the centre never changes. -/
theorem turn_stays_on_circle (c a : Pt) (ccw : Bool) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    ((rotatePath c a ccw).x t - ((c.x : Int) : K)) ^ 2 + ((rotatePath c a ccw).y t - ((c.y : Int) : K)) ^ 2 = ((gapSq' a c : Int) : K) := by
  have hw := rW_pos h0 h1
  have hne : rw' t ≠ 0 := by grind
  have py := pyth t
  obtain ⟨_, e1, x1, y1⟩ := turn_position c a ccw t
  subst e1
  simp only [x1, y1, gapSq', Int.pow_succ, Int.pow_zero]
  generalize rw' t = w at *
  generalize ra t = A at *
  generalize rb t = B at *
  cases ccw <;> simp only [if_true, if_false, Bool.false_eq_true] <;>
    simp only [Ring.intCast_add, Ring.intCast_sub, Ring.intCast_mul, Ring.intCast_one, Semiring.pow_succ, Semiring.pow_zero] <;> grind

end
end Choreo
