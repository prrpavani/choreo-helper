import Choreo.Language
/-!
# Transformations of choreography

General results, for any positions. These are what let a choreographer mirror, turn, shift or reverse
work already proved and know which guarantees carry over without being rediscovered.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false

namespace Choreo

/-- Turn a point a quarter turn about `c`. -/
def Pt.quarterTurn (c p : Pt) : Pt := c.quarter p true

/-- Scale a point about `c` by a whole number. -/
def Pt.scaleAbout (c : Pt) (k : Int) (p : Pt) : Pt := ⟨c.x + k * (p.x - c.x), c.y + k * (p.y - c.y)⟩

/-- **A mirror never changes a gap.** -/
theorem mirror_keeps_gap (p q : Pt) : gapSq' ⟨-p.x, p.y⟩ ⟨-q.x, q.y⟩ = gapSq' p q := by
  simp only [gapSq', Int.pow_succ, Int.pow_zero]; grind

/-- **A translation never changes a gap.** -/
theorem translate_keeps_gap (p q : Pt) (a b : Int) :
    gapSq' ⟨p.x + a, p.y + b⟩ ⟨q.x + a, q.y + b⟩ = gapSq' p q := by
  simp only [gapSq', Int.pow_succ, Int.pow_zero]; grind

/-- **A quarter turn never changes a gap.** So neither does any whole number of them. -/
theorem quarter_keeps_gap (c p q : Pt) (ccw : Bool) : gapSq' (c.quarter p ccw) (c.quarter q ccw) = gapSq' p q := by
  cases ccw <;> simp only [Pt.quarter, gapSq', Int.pow_succ, Int.pow_zero, if_true, if_false, Bool.false_eq_true] <;> grind

/-- **Scaling multiplies every gap by the same amount.** Squared, that factor is `k²`. So scaling up can
    never bring anyone closer, and scaling down shows exactly how much room is left. -/
theorem scale_multiplies_gap (c p q : Pt) (k : Int) :
    gapSq' (c.scaleAbout k p) (c.scaleAbout k q) = k ^ 2 * gapSq' p q := by
  simp only [Pt.scaleAbout, gapSq', Int.pow_succ, Int.pow_zero]; grind

/-- **Two groups in separate lanes stay in separate lanes under a mirror**, because a mirror doesn't
    change how far upstage anyone stands. -/
theorem mirror_keeps_twoGroups {A B : List Nat} {d : Int} {s : State}
    (h : (Pred.twoGroups A B d).holds s = true) (s' : State)
    (hy : ∀ i, (s'.at i).y = (s.at i).y) : (Pred.twoGroups A B d).holds s' = true := by
  simpa only [Pred.holds, hy] using h

/-- **The slide rule survives a mirror.** Mirror the positions and the moves of any pair that passes the
    rule, and they still pass. So a mirrored exchange needs no new argument for its safety. -/
theorem slide_rule_mirror {d : Int} {a b : Pt} {da db : Int × Int} (h : slidePairOk d a b da db = true) :
    slidePairOk d ⟨-a.x, a.y⟩ ⟨-b.x, b.y⟩ (-da.1, da.2) (-db.1, db.2) = true := by
  have g := mirror_keeps_gap a b
  simp only [slidePairOk, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq, Prod.mk.injEq, Prod.ext_iff] at h ⊢
  rw [g]
  grind

section Paths
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

private theorem easeShare_flip (t : K) : easeShare (1 - t) = 1 - easeShare t := by
  simp only [easeShare, Semiring.pow_succ, Semiring.pow_zero]; grind

/-- **A mirrored move keeps every distance, at every moment.** -/
theorem mirror_keeps_distance (a b c d : Pt) (t : K) :
    dist2 (easePath ⟨-a.x, a.y⟩ ⟨-b.x, b.y⟩) (easePath ⟨-c.x, c.y⟩ ⟨-d.x, d.y⟩) t = dist2 (easePath a b) (easePath c d) t := by
  simp only [dist2, ease_x, ease_y, Ring.intCast_neg]; grind

/-- **A translated move keeps every distance, at every moment.** -/
theorem translate_keeps_distance (a b c d : Pt) (u v : Int) (t : K) :
    dist2 (easePath ⟨a.x + u, a.y + v⟩ ⟨b.x + u, b.y + v⟩) (easePath ⟨c.x + u, c.y + v⟩ ⟨d.x + u, d.y + v⟩) t
      = dist2 (easePath a b) (easePath c d) t := by
  simp only [dist2, ease_x, ease_y, Ring.intCast_add]; grind

/-- **Played backwards, a move has the same distances, in reverse order.** The gap at time `t` of the
    reversed move is the gap at `1 - t` of the original. So minimum separation carries over to any
    reversed section. Where it starts and ends changes, so those still need checking. -/
theorem reverse_keeps_distance (a b c d : Pt) (t : K) :
    dist2 (easePath b a) (easePath d c) t = dist2 (easePath a b) (easePath c d) (1 - t) := by
  simp only [dist2, ease_x, ease_y, easeShare_flip]; grind

end Paths

end Choreo
