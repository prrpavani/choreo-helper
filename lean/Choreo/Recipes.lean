import Choreo.Build
/-!
# Rules that hold for every routine

The rest of the project checks one routine at a time. These theorems are about the planner's own
moves, for any positions at all. They explain why its fixes work, so nobody has to take the checker's
word for it. The names say what each one means.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

section
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- The share of a move completed at time `t`. It goes smoothly from 0 to 1. -/
def easeShare (t : K) : K := 3 * t ^ 2 - 2 * t ^ 3

theorem ease_weight (t : K) : ev ([1, 3, 3, 1] : Poly) (1 - t) t = 1 := by
  simp only [ev_cons, ev_nil, List.length_cons, List.length_nil, Ring.intCast_one, Ring.intCast_ofNat,
    Semiring.pow_succ, Semiring.pow_zero]
  grind

theorem ease_coord (u v : Int) (t : K) :
    ev ([u, 3 * u, 3 * v, v] : Poly) (1 - t) t = (u : K) + ((v : K) - (u : K)) * easeShare t := by
  simp only [ev_cons, ev_nil, List.length_cons, List.length_nil, Ring.intCast_mul, Ring.intCast_ofNat,
    Semiring.pow_succ, Semiring.pow_zero, easeShare]
  grind

theorem ease_x (a b : Pt) (t : K) :
    (easePath a b).x t = (a.x : K) + ((b.x : K) - (a.x : K)) * easeShare t := by
  simp only [Path.x, easePath, ease_weight, ease_coord]
  grind

theorem ease_y (a b : Pt) (t : K) :
    (easePath a b).y t = (a.y : K) + ((b.y : K) - (a.y : K)) * easeShare t := by
  simp only [Path.y, easePath, ease_weight, ease_coord]
  grind

/-- **A move goes where it says.** Every eased move starts at its start and ends at its end. -/
theorem move_starts_and_ends_where_planned (a b : Pt) :
    (easePath a b).x (0 : K) = (a.x : K) ∧ (easePath a b).y (0 : K) = (a.y : K) ∧
    (easePath a b).x (1 : K) = (b.x : K) ∧ (easePath a b).y (1 : K) = (b.y : K) := by
  simp only [ease_x, ease_y, easeShare, Semiring.pow_succ, Semiring.pow_zero]
  refine ⟨?_, ?_, ?_, ?_⟩ <;> grind

/-- **The whole formation moving together keeps its shape.** If two dancers shift by the same amount,
    the gap between them is the same at every moment, whatever the shift is. -/
theorem moving_together_keeps_the_gap (a b : Pt) (dx dy : Int) (t : K) :
    (easePath ⟨a.x + dx, a.y + dy⟩ ⟨b.x + dx, b.y + dy⟩ |>.x t) = (easePath a b).x t + (dx : K) ∧
    (easePath ⟨a.x + dx, a.y + dy⟩ ⟨b.x + dx, b.y + dy⟩ |>.y t) = (easePath a b).y t + (dy : K) := by
  simp only [ease_x, ease_y, Ring.intCast_add]
  constructor <;> grind

/-- **Passing through a gap is always safe.** This is why the flip works. If two dancers keep a
    side-to-side gap `g` of at least `d`, they can never come closer than `d`, no matter how they move
    front-to-back. So once the lines are slid half a space apart, they can walk through each other. -/
theorem passing_through_a_gap_is_safe {a₁ b₁ a₂ b₂ : Pt} {g d : Int}
    (hs : a₁.x = a₂.x + g) (he : b₁.x = b₂.x + g) (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) :
    (d : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t := by
  have hx : (easePath a₁ b₁).x t - (easePath a₂ b₂).x t = (g : K) := by
    simp only [ease_x, hs, he, Ring.intCast_add]
    grind
  have hsq := sq_le_sq_of_le (K := K) (d := (d : K)) (u := (g : K))
    (OrderedRing.nonneg_intCast_of_nonneg d h0) (intCast_le hd)
  have hy := OrderedRing.sq_nonneg (a := (easePath a₁ b₁).y t - (easePath a₂ b₂).y t)
  simp only [dist2, hx]
  grind

/-- **Dancers in different rows can never clash.** If two dancers keep a front-to-back gap `g` of at
    least `d`, they can't come closer than `d`, however fast they cross the stage. So a dancer coming
    in from the wings along an empty row is safe from everyone already on stage in other rows. -/
theorem different_rows_never_clash {a₁ b₁ a₂ b₂ : Pt} {g d : Int}
    (hs : a₁.y = a₂.y + g) (he : b₁.y = b₂.y + g) (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) :
    (d : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t := by
  have hy : (easePath a₁ b₁).y t - (easePath a₂ b₂).y t = (g : K) := by
    simp only [ease_y, hs, he, Ring.intCast_add]
    grind
  have hsq := sq_le_sq_of_le (K := K) (d := (d : K)) (u := (g : K))
    (OrderedRing.nonneg_intCast_of_nonneg d h0) (intCast_le hd)
  have hx := OrderedRing.sq_nonneg (a := (easePath a₁ b₁).x t - (easePath a₂ b₂).x t)
  simp only [dist2, hy]
  grind

/-- **Walking straight at each other is always a collision.** Two dancers who swap places along the
    same line meet exactly halfway, at distance zero. This is why the first idea can't work: not just
    in this routine, but in any routine, for any positions. -/
theorem swapping_along_a_line_always_collides (a b : Pt) (h : a.x = b.x) :
    dist2 (easePath a b) (easePath b a) (1 / 2 : K) = 0 := by
  have e : easeShare (1 / 2 : K) = 1 / 2 := by
    simp only [easeShare, Semiring.pow_succ, Semiring.pow_zero]
    grind
  simp only [dist2, ease_x, ease_y, e, h]
  grind

end

/-- Velocity is zero at both ends of a move, so any two moves that meet at a point join smoothly,
    with no sudden jerk. -/
theorem moves_that_meet_join_smoothly (a b c : Pt) (da db : Int) :
    joinPath (easePath a b) (easePath b c) da db = true := by
  simp [joinPath, easePath, Path.wf, vNum, Poly.deriv, Poly.add, Poly.sub, Poly.neg, Poly.scale, Poly.mul,
    Poly.shiftS, Poly.zeros, Poly.last, Poly.first, Poly.allPos]
  try omega

/-! ## Changing a formation without breaking it

These describe what the formation tools in the app do. Each one holds for any positions. -/

/-- Move a position by a fixed amount. -/
def Pt.shift (p : Pt) (dx dy : Int) : Pt := ⟨p.x + dx, p.y + dy⟩
/-- Turn a position half way around the point `c`. -/
def Pt.halfTurn (c p : Pt) : Pt := ⟨2 * c.x - p.x, 2 * c.y - p.y⟩
/-- Reflect a position across the centre line of the stage. -/
def Pt.reflect (p : Pt) : Pt := ⟨-p.x, p.y⟩

/-- `q` is exactly `(dx, dy)` from `p`: one link of a straight, evenly spaced line. -/
def IsStep (p q : Pt) (dx dy : Int) : Prop := q.x - p.x = dx ∧ q.y - p.y = dy
/-- `p` and `q` are mirror images across the line `x = c`. -/
def IsMirror (p q : Pt) (c : Int) : Prop := p.x + q.x = 2 * c ∧ p.y = q.y

/-- **Shifting a whole line keeps it straight and evenly spaced.** -/
theorem shift_keeps_line {p q : Pt} {dx dy a b : Int} (h : IsStep p q dx dy) :
    IsStep (p.shift a b) (q.shift a b) dx dy := by
  simp only [IsStep, Pt.shift] at *; omega

/-- **A half turn keeps a line straight and evenly spaced**, walking it in the other direction. -/
theorem half_turn_keeps_line {c p q : Pt} {dx dy : Int} (h : IsStep p q dx dy) :
    IsStep (c.halfTurn p) (c.halfTurn q) (-dx) (-dy) := by
  simp only [IsStep, Pt.halfTurn] at *; omega

/-- **Reflecting a line keeps it straight and evenly spaced**, with the sideways step reversed. -/
theorem reflect_keeps_line {p q : Pt} {dx dy : Int} (h : IsStep p q dx dy) :
    IsStep p.reflect q.reflect (-dx) dy := by
  simp only [IsStep, Pt.reflect] at *; omega

/-- **Shifting upstage or downstage keeps a left-right mirror.** A sideways shift would move the
    mirror line, so this one is only about front-to-back shifts. -/
theorem shift_upstage_keeps_mirror {p q : Pt} {c b : Int} (h : IsMirror p q c) :
    IsMirror (p.shift 0 b) (q.shift 0 b) c := by
  simp only [IsMirror, Pt.shift] at *; omega

/-- **A half turn around the centre line keeps a left-right mirror.** -/
theorem half_turn_keeps_mirror {p q : Pt} {cy : Int} (h : IsMirror p q 0) :
    IsMirror ((⟨0, cy⟩ : Pt).halfTurn p) ((⟨0, cy⟩ : Pt).halfTurn q) 0 := by
  simp only [IsMirror, Pt.halfTurn] at *; omega

/-- **Reflecting swaps the partners and keeps the mirror.** -/
theorem reflect_keeps_mirror {p q : Pt} (h : IsMirror p q 0) : IsMirror p.reflect q.reflect 0 := by
  simp only [IsMirror, Pt.reflect] at *; omega

/-- The squared distance between two positions. -/
def gapSq (p q : Pt) : Int := (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y)

/-- **Reflecting never changes a gap.** So a mirrored routine needs no new spacing argument. -/
theorem reflect_keeps_gap (p q : Pt) : gapSq p.reflect q.reflect = gapSq p q := by
  simp only [gapSq, Pt.reflect]; grind

/-- **A half turn never changes a gap.** -/
theorem half_turn_keeps_gap (c p q : Pt) : gapSq (c.halfTurn p) (c.halfTurn q) = gapSq p q := by
  simp only [gapSq, Pt.halfTurn]; grind

/-- **Shifting never changes a gap.** -/
theorem shift_keeps_gap (p q : Pt) (a b : Int) : gapSq (p.shift a b) (q.shift a b) = gapSq p q := by
  simp only [gapSq, Pt.shift]; grind

section
attribute [local instance] Semiring.natCast Ring.intCast

/-- **Two routines kept apart can be danced together.** If one dancer stays at or left of a line and the
    other at least `d` to the right of it, for the whole move, they can't get too close. So two routines
    that are safe alone and stay in separate halves of the stage are safe together. -/
theorem separate_halves_never_clash {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
    {a₁ b₁ a₂ b₂ : Pt} {line d : Int} (h0 : 0 ≤ d)
    (ha₁ : a₁.x ≤ line) (hb₁ : b₁.x ≤ line) (ha₂ : line + d ≤ a₂.x) (hb₂ : line + d ≤ b₂.x)
    {t : K} (ht : 0 ≤ easeShare t) (ht1 : easeShare t ≤ 1) :
    (d : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t := by
  have cast {u v : Int} (h : u ≤ v) : (u : K) ≤ (v : K) := intCast_le h
  have l₁ := cast ha₁; have l₂ := cast hb₁; have l₃ := cast ha₂; have l₄ := cast hb₂
  rw [Ring.intCast_add] at l₃ l₄
  have left : (easePath a₁ b₁).x t ≤ ((line : Int) : K) := by
    rw [ease_x]
    have := OrderedRing.mul_nonneg (a := (b₁.x : K) - (line : K) + ((line : K) - (b₁.x : K))) (b := easeShare t) (by grind) ht
    have m1 := OrderedRing.mul_nonneg (a := (line : K) - (a₁.x : K)) (b := 1 - easeShare t) (by grind) (by grind)
    have m2 := OrderedRing.mul_nonneg (a := (line : K) - (b₁.x : K)) (b := easeShare t) (by grind) ht
    grind
  have right : ((line : Int) : K) + (d : K) ≤ (easePath a₂ b₂).x t := by
    rw [ease_x]
    have m1 := OrderedRing.mul_nonneg (a := (a₂.x : K) - ((line : K) + (d : K))) (b := 1 - easeShare t) (by grind) (by grind)
    have m2 := OrderedRing.mul_nonneg (a := (b₂.x : K) - ((line : K) + (d : K))) (b := easeShare t) (by grind) ht
    grind
  have hd : (0 : K) ≤ (d : K) := OrderedRing.nonneg_intCast_of_nonneg d h0
  have gap : (d : K) ≤ (easePath a₂ b₂).x t - (easePath a₁ b₁).x t := by grind
  have hsq := sq_le_sq_of_le hd gap
  have hy := OrderedRing.sq_nonneg (a := (easePath a₁ b₁).y t - (easePath a₂ b₂).y t)
  have swap : ((easePath a₁ b₁).x t - (easePath a₂ b₂).x t) ^ 2 = ((easePath a₂ b₂).x t - (easePath a₁ b₁).x t) ^ 2 := by grind
  simp only [dist2]
  rw [swap]
  grind

end

/-- **Shifting keeps who stands to whose left.** -/
theorem shift_keeps_order {p q : Pt} {a b : Int} (h : p.x < q.x) : (p.shift a b).x < (q.shift a b).x := by
  simp only [Pt.shift]; omega

end Choreo
