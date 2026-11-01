import Choreo.Routine
/-!
# What the choreographer asked for

`RoutineSpec` says a routine is safe. It says nothing about whether the routine is the one you
asked for: an empty stage is safe too. This file adds that second half.

An `Ask` is one thing the choreographer requested, such as "these dancers start in the stage left
wing" or "these two lines trade places". `Ask.Holds` says what each one means, in terms of where
dancers really are. `Verified` joins the two halves. It is the statement the app proves.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

/-- `member` stays exactly `(dx, dy)` away from `leader`. -/
structure Link where
  leader : Nat
  member : Nat
  dx : Int
  dy : Int

/-- One thing the choreographer asked for. `k` is the number of the phase it talks about. -/
inductive Ask where
  /-- These dancers begin phase `k` inside `box` (for example, a wing). -/
  | startsIn (k : Nat) (dancers : List Nat) (box : Rect)
  /-- These dancers finish phase `k` inside `box`. -/
  | endsIn (k : Nat) (dancers : List Nat) (box : Rect)
  /-- All dancers stay inside `box` for the whole of phase `k`. -/
  | staysIn (k : Nat) (box : Rect)
  /-- Phase `k` ends with every dancer on their own place in the shape `f`. -/
  | forms (k : Nat) (f : Formation) (assign : List Nat)
  /-- From the start of phase `k₀` to the end of phase `k₁`, each dancer keeps the same side-to-side
      position and moves to the mirror image front-to-back: `y` becomes `mirror - y`. -/
  | flips (k₀ k₁ : Nat) (dancers : List Nat) (mirror : Int)
  /-- Throughout phase `k`, each linked pair holds its exact offset, so the group keeps its shape. -/
  | keepsShape (k : Nat) (links : List Link)
  /-- Throughout phase `k`, these dancers stay exactly on the circle around `(cx, cy)`. -/
  | staysOnCircle (k : Nat) (dancers : List Nat) (cx cy r2 : Int)
  /-- Throughout phase `k`, these dancers form a straight, evenly spaced line: each one is exactly
      `(dx, dy)` from the one before. -/
  | keepsLine (k : Nat) (dancers : List Nat) (dx dy : Int)
  /-- Phase `k` ends with these dancers in a straight, evenly spaced line. -/
  | endsInLine (k : Nat) (dancers : List Nat) (dx dy : Int)
  /-- Phase `k` ends with the shape mirror-symmetric: in each listed pair, one dancer is the mirror
      image of the other across the upstage-downstage line `x = mirror / 2`. -/
  | endsMirrored (k : Nat) (pairs : List (Nat × Nat)) (mirror : Int)

/-- Requests about moving around the stage. Everything else is about where dancers are. -/
def Ask.isMovement : Ask → Bool
  | .staysIn .. => true
  | _ => false

/-- Each dancer in a list, paired with the next one. -/
def nextPairs (ds : List Nat) : List (Nat × Nat) := ds.zip ds.tail

section Spec
variable (K : Type) [Field K] [LE K] [LT K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- The point `(x, y)` is inside the rectangle. -/
def InBox (b : Rect) (x y : K) : Prop :=
  ((b.xmin : Int) : K) ≤ x ∧ x ≤ ((b.xmax : Int) : K) ∧ ((b.ymin : Int) : K) ≤ y ∧ y ≤ ((b.ymax : Int) : K)

/-- What each request means. Every case requires the phase to exist, so a request about a
    missing phase is false, not true by default. -/
def Ask.Holds (r : Routine) : Ask → Prop
  | .startsIn k ds b => ∃ ph, r.phases[k]? = some ph ∧ ∀ i, i ∈ ds → i < r.cfg.n ∧
      InBox K b ((ph.path i).x (0 : K)) ((ph.path i).y (0 : K))
  | .endsIn k ds b => ∃ ph, r.phases[k]? = some ph ∧ ∀ i, i ∈ ds → i < r.cfg.n ∧
      InBox K b ((ph.path i).x (1 : K)) ((ph.path i).y (1 : K))
  | .staysIn k b => ∃ ph, r.phases[k]? = some ph ∧ ∀ i, i < r.cfg.n → ∀ t : K, 0 ≤ t → t ≤ 1 →
      InBox K b ((ph.path i).x t) ((ph.path i).y t)
  | .forms k f assign => ∃ ph, r.phases[k]? = some ph ∧
      f.wellFormed = true ∧ f.slots.length = r.cfg.n ∧ assign.isPerm (List.range r.cfg.n) = true ∧
      ∀ i, i < r.cfg.n →
        (ph.path i).x (1 : K) = (((f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩).x : Int) : K) /
          (((f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩).w : Int) : K) ∧
        (ph.path i).y (1 : K) = (((f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩).y : Int) : K) /
          (((f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩).w : Int) : K)
  | .flips k₀ k₁ ds m => ∃ a b, r.phases[k₀]? = some a ∧ r.phases[k₁]? = some b ∧
      ∀ i, i ∈ ds → i < r.cfg.n ∧
        (b.path i).x (1 : K) = (a.path i).x (0 : K) ∧
        (b.path i).y (1 : K) = ((m : Int) : K) - (a.path i).y (0 : K)
  | .keepsShape k ls => ∃ ph, r.phases[k]? = some ph ∧ ∀ l, l ∈ ls → l.leader < r.cfg.n ∧ l.member < r.cfg.n ∧ ∀ t : K, 0 ≤ t → t ≤ 1 →
      (ph.path l.member).x t - (ph.path l.leader).x t = ((l.dx : Int) : K) ∧
      (ph.path l.member).y t - (ph.path l.leader).y t = ((l.dy : Int) : K)
  | .staysOnCircle k ds cx cy r2 => ∃ ph, r.phases[k]? = some ph ∧ ∀ i, i ∈ ds → ∀ t : K, 0 ≤ t → t ≤ 1 →
      ((ph.path i).x t - ((cx : Int) : K)) ^ 2 + ((ph.path i).y t - ((cy : Int) : K)) ^ 2 = ((r2 : Int) : K)

  | .keepsLine k ds dx dy => ∃ ph, r.phases[k]? = some ph ∧ 2 ≤ ds.length ∧ ∀ p, p ∈ nextPairs ds →
      p.1 < r.cfg.n ∧ p.2 < r.cfg.n ∧ ∀ t : K, 0 ≤ t → t ≤ 1 →
        (ph.path p.2).x t - (ph.path p.1).x t = ((dx : Int) : K) ∧
        (ph.path p.2).y t - (ph.path p.1).y t = ((dy : Int) : K)
  | .endsInLine k ds dx dy => ∃ ph, r.phases[k]? = some ph ∧ 2 ≤ ds.length ∧ ∀ p, p ∈ nextPairs ds →
      p.1 < r.cfg.n ∧ p.2 < r.cfg.n ∧
        (ph.path p.2).x (1 : K) - (ph.path p.1).x (1 : K) = ((dx : Int) : K) ∧
        (ph.path p.2).y (1 : K) - (ph.path p.1).y (1 : K) = ((dy : Int) : K)
  | .endsMirrored k ps m => ∃ ph, r.phases[k]? = some ph ∧ ∀ p, p ∈ ps →
      p.1 < r.cfg.n ∧ p.2 < r.cfg.n ∧
        (ph.path p.1).x (1 : K) + (ph.path p.2).x (1 : K) = ((m : Int) : K) ∧
        (ph.path p.1).y (1 : K) = (ph.path p.2).y (1 : K)

/-- **The statement the app proves.** The routine is safe, and it does what was asked. -/
structure Verified (r : Routine) (asks : List Ask) : Prop where
  safe : RoutineSpec K r
  asked : ∀ a, a ∈ asks → Ask.Holds K r a

end Spec

theorem allChecked_nil {c : Config} : AllChecked c [] := True.intro

theorem allChecked_cons {c : Config} {p : Phase} {ps : List Phase}
    (h : Phase.check c p = true) (t : AllChecked c ps) : AllChecked c (p :: ps) := ⟨h, t⟩

/-! ## The executable test -/

def Path.startInBox (p : Path) (b : Rect) : Bool :=
  p.wf && decide (b.xmin * Poly.first p.W ≤ Poly.first p.X) && decide (Poly.first p.X ≤ b.xmax * Poly.first p.W) &&
    decide (b.ymin * Poly.first p.W ≤ Poly.first p.Y) && decide (Poly.first p.Y ≤ b.ymax * Poly.first p.W)

def Path.endInBox (p : Path) (b : Rect) : Bool :=
  p.wf && decide (b.xmin * Poly.last p.W ≤ Poly.last p.X) && decide (Poly.last p.X ≤ b.xmax * Poly.last p.W) &&
    decide (b.ymin * Poly.last p.W ≤ Poly.last p.Y) && decide (Poly.last p.Y ≤ b.ymax * Poly.last p.W)

def flipOk (a b : Path) (m : Int) : Bool :=
  a.wf && b.wf &&
  (Poly.last b.X * Poly.first a.W == Poly.first a.X * Poly.last b.W) &&
  (Poly.last b.Y * Poly.first a.W == (m * Poly.first a.W - Poly.first a.Y) * Poly.last b.W)

def Link.check (ph : Phase) (l : Link) : Bool :=
  let a := ph.path l.member
  let b := ph.path l.leader
  a.wf && b.wf && (a.W == b.W) && (Poly.sub a.X b.X == Poly.scale l.dx a.W) &&
    (Poly.sub a.Y b.Y == Poly.scale l.dy a.W)

/-- `b` ends exactly `(dx, dy)` from `a`. -/
def endOffsetOk (a b : Path) (dx dy : Int) : Bool :=
  a.wf && b.wf &&
  (Poly.last b.X * Poly.last a.W - Poly.last a.X * Poly.last b.W == dx * Poly.last a.W * Poly.last b.W) &&
  (Poly.last b.Y * Poly.last a.W - Poly.last a.Y * Poly.last b.W == dy * Poly.last a.W * Poly.last b.W)

/-- `b` ends at the mirror image of `a`. -/
def endMirrorOk (a b : Path) (m : Int) : Bool :=
  a.wf && b.wf &&
  (Poly.last a.X * Poly.last b.W + Poly.last b.X * Poly.last a.W == m * Poly.last a.W * Poly.last b.W) &&
  (Poly.last a.Y * Poly.last b.W == Poly.last b.Y * Poly.last a.W)

/-- The two rectangles are the same. -/
def Rect.same (a b : Rect) : Bool :=
  (a.xmin == b.xmin) && (a.xmax == b.xmax) && (a.ymin == b.ymin) && (a.ymax == b.ymax)

def Ask.check (r : Routine) : Ask → Bool
  | .startsIn k ds b => match r.phases[k]? with
    | some ph => ds.all fun i => decide (i < r.cfg.n) && (ph.path i).startInBox b
    | none => false
  | .endsIn k ds b => match r.phases[k]? with
    | some ph => ds.all fun i => decide (i < r.cfg.n) && (ph.path i).endInBox b
    | none => false
  | .staysIn k b => match r.phases[k]? with
    | some ph => ph.bounds.same b
    | none => false
  | .forms k f assign => match r.phases[k]? with
    | some ph =>
      f.wellFormed && (f.slots.length == r.cfg.n) && assign.isPerm (List.range r.cfg.n) &&
      (List.range r.cfg.n).all fun i =>
        (ph.path i).wf && decide (0 < (f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩).w) &&
        (ph.path i).reachesSlot (f.slots.getD (assign.getD i 0) ⟨0, 0, 1⟩)
    | none => false
  | .flips k₀ k₁ ds m => match r.phases[k₀]?, r.phases[k₁]? with
    | some a, some b => ds.all fun i => decide (i < r.cfg.n) && flipOk (a.path i) (b.path i) m
    | _, _ => false
  | .keepsShape k ls => match r.phases[k]? with
    | some ph => ls.all fun l => decide (l.leader < r.cfg.n) && decide (l.member < r.cfg.n) && Link.check ph l
    | none => false
  | .staysOnCircle k ds cx cy r2 => match r.phases[k]? with
    | some ph => ds.all fun i => (ph.path i).wf && Poly.allZero (orbitPoly (ph.path i) cx cy r2)
    | none => false
  | .keepsLine k ds dx dy => match r.phases[k]? with
    | some ph => decide (2 ≤ ds.length) && (nextPairs ds).all fun p =>
        decide (p.1 < r.cfg.n) && decide (p.2 < r.cfg.n) && Link.check ph ⟨p.1, p.2, dx, dy⟩
    | none => false
  | .endsInLine k ds dx dy => match r.phases[k]? with
    | some ph => decide (2 ≤ ds.length) && (nextPairs ds).all fun p =>
        decide (p.1 < r.cfg.n) && decide (p.2 < r.cfg.n) && endOffsetOk (ph.path p.1) (ph.path p.2) dx dy
    | none => false
  | .endsMirrored k ps m => match r.phases[k]? with
    | some ph => ps.all fun p =>
        decide (p.1 < r.cfg.n) && decide (p.2 < r.cfg.n) && endMirrorOk (ph.path p.1) (ph.path p.2) m
    | none => false

/-! ## Soundness -/

section Proofs
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem frac_ge {c a w : Int} (hw : (0 : K) < (w : K)) (h : c * w ≤ a) : (c : K) ≤ (a : K) / (w : K) := by
  apply le_div_of_mul_le hw
  have := intCast_le (K := K) h
  rw [Ring.intCast_mul] at this
  grind

theorem frac_le {c a w : Int} (hw : (0 : K) < (w : K)) (h : a ≤ c * w) : (a : K) / (w : K) ≤ (c : K) := by
  apply div_le_of_le_mul hw
  have := intCast_le (K := K) h
  rw [Ring.intCast_mul] at this
  grind

theorem startInBox_sound {p : Path} {b : Rect} (h : p.startInBox b = true) :
    InBox K b (p.x (0 : K)) (p.y (0 : K)) := by
  simp only [Path.startInBox, Bool.and_eq_true, decide_eq_true_eq] at h
  obtain ⟨⟨⟨⟨wf, a⟩, c⟩, d⟩, e⟩ := h
  have hw := first_W_pos (K := K) wf
  rw [InBox, x_at_zero, y_at_zero]
  exact ⟨frac_ge hw a, frac_le hw c, frac_ge hw d, frac_le hw e⟩

theorem endInBox_sound {p : Path} {b : Rect} (h : p.endInBox b = true) :
    InBox K b (p.x (1 : K)) (p.y (1 : K)) := by
  simp only [Path.endInBox, Bool.and_eq_true, decide_eq_true_eq] at h
  obtain ⟨⟨⟨⟨wf, a⟩, c⟩, d⟩, e⟩ := h
  have hw := last_W_pos (K := K) wf
  rw [InBox, x_at_one, y_at_one]
  exact ⟨frac_ge hw a, frac_le hw c, frac_ge hw d, frac_le hw e⟩

theorem flipOk_sound {a b : Path} {m : Int} (h : flipOk a b m = true) :
    b.x (1 : K) = a.x (0 : K) ∧ b.y (1 : K) = (m : K) - a.y (0 : K) := by
  simp only [flipOk, Bool.and_eq_true, beq_iff_eq] at h
  obtain ⟨⟨⟨wa, wb⟩, ex⟩, ey⟩ := h
  have pa := first_W_pos (K := K) wa
  have pb := last_W_pos (K := K) wb
  have na : (Poly.first a.W : K) ≠ 0 := by grind
  have nb : (Poly.last b.W : K) ≠ 0 := by grind
  have ex' := cast_mul_eq (K := K) ex
  have ey' := cast_mul_eq (K := K) ey
  rw [Ring.intCast_sub, Ring.intCast_mul] at ey'
  rw [x_at_one, x_at_zero, y_at_one, y_at_zero]
  constructor
  · exact frac_eq nb na ex'
  · grind

theorem endOffset_sound {a b : Path} {dx dy : Int} (h : endOffsetOk a b dx dy = true) :
    b.x (1 : K) - a.x (1 : K) = (dx : K) ∧ b.y (1 : K) - a.y (1 : K) = (dy : K) := by
  simp only [endOffsetOk, Bool.and_eq_true, beq_iff_eq] at h
  obtain ⟨⟨⟨wa, wb⟩, ex⟩, ey⟩ := h
  have pa := last_W_pos (K := K) wa
  have pb := last_W_pos (K := K) wb
  have na : (Poly.last a.W : K) ≠ 0 := by grind
  have nb : (Poly.last b.W : K) ≠ 0 := by grind
  have ex' := congrArg (fun z : Int => (z : K)) ex
  have ey' := congrArg (fun z : Int => (z : K)) ey
  simp only [Ring.intCast_sub, Ring.intCast_mul] at ex' ey'
  rw [x_at_one, x_at_one, y_at_one, y_at_one]
  constructor <;> grind

theorem endMirror_sound {a b : Path} {m : Int} (h : endMirrorOk a b m = true) :
    a.x (1 : K) + b.x (1 : K) = (m : K) ∧ a.y (1 : K) = b.y (1 : K) := by
  simp only [endMirrorOk, Bool.and_eq_true, beq_iff_eq] at h
  obtain ⟨⟨⟨wa, wb⟩, ex⟩, ey⟩ := h
  have pa := last_W_pos (K := K) wa
  have pb := last_W_pos (K := K) wb
  have na : (Poly.last a.W : K) ≠ 0 := by grind
  have nb : (Poly.last b.W : K) ≠ 0 := by grind
  have ex' := congrArg (fun z : Int => (z : K)) ex
  have ey' := congrArg (fun z : Int => (z : K)) ey
  simp only [Ring.intCast_add, Ring.intCast_mul] at ex' ey'
  rw [x_at_one, x_at_one, y_at_one, y_at_one]
  constructor <;> grind

theorem Link.sound {ph : Phase} {l : Link} (h : Link.check ph l = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (ph.path l.member).x t - (ph.path l.leader).x t = (l.dx : K) ∧
    (ph.path l.member).y t - (ph.path l.leader).y t = (l.dy : K) := by
  simp only [Link.check, Bool.and_eq_true, beq_iff_eq] at h
  obtain ⟨⟨⟨⟨wa, wb⟩, hw⟩, hx⟩, hy⟩ := h
  exact offset_diff wa wb hw hx hy h0 h1

/-- **When a phase happens doesn't change whether it passes.** Two phases with the same paths and the
    same length get the same answer, so a repeated move needs checking only once. -/
theorem Phase.check_shift {c : Config} {ph ph' : Phase}
    (hp : ph'.paths = ph.paths) (hb : ph'.bounds = ph.bounds) (hc : ph'.certs = ph.certs)
    (hr : ph'.rigid = ph.rigid) (ho : ph'.orbits = ph.orbits) (ht : ph'.target = ph.target)
    (hd : ph'.t1 - ph'.t0 = ph.t1 - ph.t0) (h : Phase.check c ph = true) : Phase.check c ph' = true := by
  have e : Phase.check c ph' = Phase.check c ph := by
    simp only [Phase.check, Phase.checkPaths, Phase.checkClear, Phase.pairCert, Phase.path, Phase.checkInvariants,
      Phase.checkTarget, Config.durNum, hp, hb, hc, hr, ho, ht, hd]
  rw [e]; exact h

theorem Ask.sound {r : Routine} {a : Ask} (hs : a.isMovement = true → ∀ ph, ph ∈ r.phases → PhaseSpec K r.cfg ph)
    (h : a.check r = true) : Ask.Holds K r a := by
  cases a with
  | startsIn k ds b =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [List.all_eq_true, Bool.and_eq_true, decide_eq_true_eq] at h
      exact ⟨ph, hph, fun i hi => ⟨(h i hi).1, startInBox_sound (h i hi).2⟩⟩
    · cases h
  | endsIn k ds b =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [List.all_eq_true, Bool.and_eq_true, decide_eq_true_eq] at h
      exact ⟨ph, hph, fun i hi => ⟨(h i hi).1, endInBox_sound (h i hi).2⟩⟩
    · cases h
  | staysIn k b =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [Rect.same, Bool.and_eq_true, beq_iff_eq] at h
      obtain ⟨⟨⟨h1', h2'⟩, h3'⟩, h4'⟩ := h
      refine ⟨ph, hph, fun i hi t h0 h1 => ?_⟩
      have hmem : ph ∈ r.phases := List.mem_of_getElem? hph
      obtain ⟨a, c, d, e⟩ := (hs rfl ph hmem).onStage i hi t h0 h1
      rw [InBox, ← h1', ← h2', ← h3', ← h4']
      exact ⟨a, c, d, e⟩
    · cases h
  | forms k f assign =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [Bool.and_eq_true, List.all_eq_true, List.mem_range, decide_eq_true_eq, beq_iff_eq] at h
      obtain ⟨⟨⟨hwf, hlen⟩, hperm⟩, hall⟩ := h
      refine ⟨ph, hph, hwf, hlen, hperm, fun i hi => ?_⟩
      obtain ⟨⟨wp, hpos⟩, hreach⟩ := hall i hi
      exact reaches_sound wp hpos hreach
    · cases h
  | flips k₀ k₁ ds m =>
    simp only [Ask.check] at h
    split at h
    · rename_i a b ha hb
      simp only [List.all_eq_true, Bool.and_eq_true, decide_eq_true_eq] at h
      exact ⟨a, b, ha, hb, fun i hi => ⟨(h i hi).1, flipOk_sound (h i hi).2⟩⟩
    · cases h
  | keepsShape k ls =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [List.all_eq_true, Bool.and_eq_true, decide_eq_true_eq] at h
      exact ⟨ph, hph, fun l hl => ⟨(h l hl).1.1, (h l hl).1.2, fun t h0 h1 => Link.sound (h l hl).2 h0 h1⟩⟩
    · cases h
  | staysOnCircle k ds cx cy r2 =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [List.all_eq_true, Bool.and_eq_true] at h
      exact ⟨ph, hph, fun i hi t h0 h1 => orbit_sound (h i hi).1 (h i hi).2 h0 h1⟩
    · cases h
  | keepsLine k ds dx dy =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [Bool.and_eq_true, decide_eq_true_eq, List.all_eq_true] at h
      exact ⟨ph, hph, h.1, fun p hp => ⟨(h.2 p hp).1.1, (h.2 p hp).1.2, fun t h0 h1 => Link.sound (h.2 p hp).2 h0 h1⟩⟩
    · cases h
  | endsInLine k ds dx dy =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [Bool.and_eq_true, decide_eq_true_eq, List.all_eq_true] at h
      exact ⟨ph, hph, h.1, fun p hp => ⟨(h.2 p hp).1.1, (h.2 p hp).1.2, endOffset_sound (h.2 p hp).2⟩⟩
    · cases h
  | endsMirrored k ps m =>
    simp only [Ask.check] at h
    split at h
    · rename_i ph hph
      simp only [Bool.and_eq_true, decide_eq_true_eq, List.all_eq_true] at h
      exact ⟨ph, hph, fun p hp => ⟨(h p hp).1.1, (h p hp).1.2, endMirror_sound (h p hp).2⟩⟩
    · cases h

/-- **Main theorem.** If the global checks, the per-phase checks and the request checks all pass,
    the routine is safe and does what was asked, at every instant, in every ordered field. -/
theorem Routine.verified {r : Routine} {asks : List Ask}
    (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases) (ha : asks.all (Ask.check r) = true)
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    Verified K r asks := by
  have safe := Routine.sound hg hp K
  refine ⟨safe, fun a hm => ?_⟩
  simp only [List.all_eq_true] at ha
  exact Ask.sound (fun _ => safe.phases) (ha a hm)

end Proofs

/-! ## Proving a formation is broken -/

/-- The whole-number test: in phase `ph`, dancer `b` does not end `(dx, dy)` from dancer `a`. -/
def lineBrokenAt (c : Config) (ph : Phase) (a b : Nat) (dx dy : Int) : Bool :=
  decide (a < c.n) && decide (b < c.n) && (ph.path a).wf && (ph.path b).wf && !endOffsetOk (ph.path a) (ph.path b) dx dy

/-- **A formation out of line is provably broken.** One pair at the wrong offset is enough to make
    the line request false. -/
theorem refute_line {r : Routine} {k : Nat} {ds : List Nat} {dx dy : Int} {ph : Phase} {a b : Nat}
    (hph : r.phases[k]? = some ph) (hm : (a, b) ∈ nextPairs ds) (h : lineBrokenAt r.cfg ph a b dx dy = true) :
    ¬ Ask.Holds Rat r (.endsInLine k ds dx dy) := by
  simp only [lineBrokenAt, Bool.and_eq_true, decide_eq_true_eq, Bool.not_eq_true'] at h
  obtain ⟨⟨⟨⟨_, _⟩, wa⟩, wb⟩, bad⟩ := h
  rintro ⟨ph', hph', _, hall⟩
  rw [hph] at hph'
  cases hph'
  obtain ⟨_, _, ex, ey⟩ := hall (a, b) hm
  have pa := last_W_pos (K := Rat) wa
  have pb := last_W_pos (K := Rat) wb
  have na : ((Poly.last (ph.path a).W : Int) : Rat) ≠ 0 := by grind
  have nb : ((Poly.last (ph.path b).W : Int) : Rat) ≠ 0 := by grind
  rw [x_at_one, x_at_one] at ex
  rw [y_at_one, y_at_one] at ey
  have cx : Poly.last (ph.path b).X * Poly.last (ph.path a).W - Poly.last (ph.path a).X * Poly.last (ph.path b).W
      = dx * Poly.last (ph.path a).W * Poly.last (ph.path b).W := by
    have e : (((Poly.last (ph.path b).X * Poly.last (ph.path a).W - Poly.last (ph.path a).X * Poly.last (ph.path b).W : Int)) : Rat)
        = ((dx * Poly.last (ph.path a).W * Poly.last (ph.path b).W : Int) : Rat) := by
      simp only [Ring.intCast_sub, Ring.intCast_mul]
      grind
    exact_mod_cast e
  have cy : Poly.last (ph.path b).Y * Poly.last (ph.path a).W - Poly.last (ph.path a).Y * Poly.last (ph.path b).W
      = dy * Poly.last (ph.path a).W * Poly.last (ph.path b).W := by
    have e : (((Poly.last (ph.path b).Y * Poly.last (ph.path a).W - Poly.last (ph.path a).Y * Poly.last (ph.path b).W : Int)) : Rat)
        = ((dy * Poly.last (ph.path a).W * Poly.last (ph.path b).W : Int) : Rat) := by
      simp only [Ring.intCast_sub, Ring.intCast_mul]
      grind
    exact_mod_cast e
  simp [endOffsetOk, wa, wb, cx, cy] at bad

end Choreo
