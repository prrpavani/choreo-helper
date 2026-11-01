import Choreo.RotationPath
/-!
# Choreography as a program

A routine is a program. The state is where every dancer stands. A movement is an operation that
carries one state to another along exact paths. A program is movements composed in sequence.

This file gives that language a meaning:

* `Run` says a list of phases safely carries the dancers from one state to another.
* `Triple` is a Hoare triple: from any state meeting `P`, the program runs safely and ends meeting `Q`.
* `Triple.seq` is the composition rule: `{P} A {Q}` and `{Q} B {R}` give `{P} A; B {R}`.
* `Step.triple` connects each movement's contract to the trajectories that actually play.

Nothing about a particular routine is assumed anywhere in this file.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

/-- Where every dancer stands, by dancer number. -/
abbrev State := List Pt

def State.at (s : State) (i : Nat) : Pt := s.getD i default

/-! ## Claims about a state -/

/-- A claim about where dancers stand. It is data, so the app can show it and Lean can decide it. -/
inductive Pred where
  /-- No claim. -/
  | anything
  /-- Everyone is exactly here. -/
  | isAt (places : State)
  /-- Every pair is at least `d` apart. -/
  | separated (n : Nat) (d : Int)
  /-- These dancers all stand exactly on this circle. -/
  | onCircle (who : List Nat) (cx cy r2 : Int)
  /-- Two groups in separate lanes: every member of `A` is at least `d` upstage or downstage of every
      member of `B`, so the groups can walk through each other. -/
  | twoGroups (A B : List Nat) (d : Int)
  /-- Everyone in `A` is at or left of `line`, and everyone in `B` is at least `d` to its right. -/
  | splitAt (A B : List Nat) (line d : Int)
  /-- Both claims. -/
  | both (p q : Pred)

/-- Whether a claim is true of a state. -/
def Pred.holds : Pred → State → Bool
  | .anything, _ => true
  | .isAt places, s => s == places
  | .separated n d, s =>
    (List.range n).all fun i => (List.range i).all fun j => decide (d * d ≤ gapSq' (s.at i) (s.at j))
  | .onCircle who cx cy r2, s =>
    who.all fun i => decide (((s.at i).x - cx) ^ 2 + ((s.at i).y - cy) ^ 2 = r2)
  | .twoGroups A B d, s =>
    A.all fun a => B.all fun b =>
      decide (d ≤ (s.at a).y - (s.at b).y) || decide (d ≤ (s.at b).y - (s.at a).y)
  | .splitAt A B line d, s =>
    A.all (fun a => decide ((s.at a).x ≤ line)) && B.all (fun b => decide (line + d ≤ (s.at b).x))
  | .both p q, s => p.holds s && q.holds s

/-! ## Operations -/

/-- A movement. Each one says exactly which paths the dancers take. -/
inductive Op where
  /-- Each dancer walks straight to their own place. These are independent paths, so a clash is possible.
      Safety comes from the exact lowest point of each pair's separation: see `linear_pair_safe`. -/
  | move (target : State) (beats : Nat)
  /-- Everyone turns a quarter about `centre`, on an exact arc. Safe by `turning_keeps_the_gap`: if the
      formation starts collision-free, no moment of the turn needs looking at. -/
  | turn (centre : Pt) (ccw : Bool) (beats : Nat)
  /-- Each dancer shifts by their own amount. Safety follows from a rule about the starting places,
      with no checking of curves. Translation, group exchange and steps in unison are all slides. -/
  | slide (deltas : List (Int × Int)) (beats : Nat)
  /-- Two groups move at once, each in its own part of the stage. Pairs in a group use the exact test, and
      the groups can't meet because a line stays between them, so no pair across groups is examined. -/
  | par (left right : List Nat) (line : Int) (target : State) (beats : Nat)

def Pt.quarter (c a : Pt) (ccw : Bool) : Pt :=
  let dx := a.x - c.x
  let dy := a.y - c.y
  if ccw then ⟨c.x - dy, c.y + dx⟩ else ⟨c.x + dy, c.y - dx⟩

def Op.beats : Op → Nat
  | .move _ b | .turn _ _ b | .slide _ b | .par _ _ _ _ b => b

/-- Where the dancers stand after the movement. -/
def Op.next (op : Op) (n : Nat) (s : State) : State :=
  match op with
  | .move target _ | .par _ _ _ target _ => target
  | .turn c ccw _ => (List.range n).map fun i => c.quarter (s.at i) ccw
  | .slide ds _ => (List.range n).map fun i =>
      let d := ds.getD i (0, 0)
      ⟨(s.at i).x + d.1, (s.at i).y + d.2⟩

/-- The path dancer `i` takes. -/
def Op.pathOf (op : Op) (n : Nat) (s : State) (i : Nat) : Path :=
  match op with
  | .turn c ccw _ => rotatePath c (s.at i) ccw
  | _ => easePath (s.at i) ((op.next n s).at i)

/-- The movement as one timed phase, starting at tick `t`. -/
def Op.phase (op : Op) (c : Config) (t : Nat) (s : State) : Phase :=
  { t0 := t, t1 := t + op.beats * c.ticksPerBeat,
    paths := (List.range c.n).map (op.pathOf c.n s), bounds := c.stage, certs := [],
    rigid := [], orbits := [], target := none }

/-! ## When a movement may run -/

/-- The rule that makes a slide safe. Any two dancers either move as one and start far enough apart,
    or keep a whole lane between them for the entire move. -/
def slidePairOk (d : Int) (a b : Pt) (da db : Int × Int) : Bool :=
  (da == db && decide (d * d ≤ gapSq' a b)) ||
  (da.2 == db.2 && (decide (d ≤ a.y - b.y) || decide (d ≤ b.y - a.y))) ||
  (da.1 == db.1 && (decide (d ≤ a.x - b.x) || decide (d ≤ b.x - a.x)))

def slideClear (c : Config) (s : State) (ds : List (Int × Int)) : Bool :=
  (List.range c.n).all fun i => (List.range i).all fun j =>
    slidePairOk c.dmin (s.at i) (s.at j) (ds.getD i (0, 0)) (ds.getD j (0, 0))

/-- How the squared distance between two straight-moving dancers depends on how far along they are: it
    is exactly `A u² + 2 B u + C`, for `u` from 0 to 1. -/
def gapQuad (a b c d : Pt) : Int × Int × Int :=
  let rx := a.x - c.x
  let ry := a.y - c.y
  let vx := (b.x - a.x) - (d.x - c.x)
  let vy := (b.y - a.y) - (d.y - c.y)
  (vx * vx + vy * vy, rx * vx + ry * vy, rx * rx + ry * ry)

/-- The exact test: find where that quadratic is lowest between 0 and 1, and compare it with the gap. -/
def linearPairClear (m : Int) (a b c d : Pt) : Bool :=
  let (A, B, C) := gapQuad a b c d
  if A == 0 then B == 0 && decide (m * m ≤ C)
  else if 0 ≤ B then decide (m * m ≤ C)
  else if A ≤ -B then decide (m * m ≤ A + 2 * B + C)
  else decide (m * m * A ≤ C * A - B * B)

def moveClear (c : Config) (s target : State) : Bool :=
  (List.range c.n).all fun i => (List.range i).all fun j =>
    linearPairClear c.dmin (s.at i) (target.at i) (s.at j) (target.at j)

/-- Two dancers in the same group use the exact test. Across the two groups, the line does the work. -/
def parClear (c : Config) (left right : List Nat) (line : Int) (s target : State) : Bool :=
  (List.range c.n).all fun i => (List.range i).all fun j =>
    if (left.contains i && left.contains j) || (right.contains i && right.contains j) then
      linearPairClear c.dmin (s.at i) (target.at i) (s.at j) (target.at j)
    else if left.contains i && right.contains j then
      decide ((s.at i).x ≤ line) && decide ((target.at i).x ≤ line) &&
        decide (line + c.dmin ≤ (s.at j).x) && decide (line + c.dmin ≤ (target.at j).x)
    else if right.contains i && left.contains j then
      decide ((s.at j).x ≤ line) && decide ((target.at j).x ≤ line) &&
        decide (line + c.dmin ≤ (s.at i).x) && decide (line + c.dmin ≤ (target.at i).x)
    else false

/-- Every dancer starts in `a` and ends in `b`, exactly. -/
def endpointsOk (c : Config) (ph : Phase) (a b : State) : Bool :=
  (List.range c.n).all fun i =>
    (ph.path i).wf && (ph.path i).startsAtSlot ⟨(a.at i).x, (a.at i).y, 1⟩ &&
      (ph.path i).reachesSlot ⟨(b.at i).x, (b.at i).y, 1⟩

/-- Everything a movement needs from the state it starts in. -/
def Op.enabled (op : Op) (c : Config) (s : State) : Bool :=
  let ph := op.phase c 0 s
  endpointsOk c ph s (op.next c.n s) &&
  match op with
  | .move target _ => c.wf && Phase.checkPaths c ph && moveClear c s target
  | .turn .. => c.wf && Phase.checkPaths c ph && (Pred.separated c.n c.dmin).holds s
  | .slide ds _ => c.wf && Phase.checkPaths c ph && slideClear c s ds
  | .par left right line target _ =>
    c.wf && Phase.checkPaths c ph && parClear c left right line s target

/-! ## Programs -/

/-- One movement with its contract: what it requires, and what it promises beyond its own endpoints. -/
structure Step where
  op : Op
  requires : Pred := .anything
  ensures : Pred := .anything

/-- The contract is met by this state: its requirement holds, the movement may run, and its promise is true of the result. -/
def Step.ok (st : Step) (c : Config) (s : State) : Bool :=
  st.requires.holds s && st.op.enabled c s && st.ensures.holds (st.op.next c.n s)

/-- The phases a program plays are the phases of this routine: same times, same paths. -/
def samePhase (n : Nat) (a b : Phase) : Bool :=
  a.t0 == b.t0 && a.t1 == b.t1 &&
  a.bounds.xmin == b.bounds.xmin && a.bounds.xmax == b.bounds.xmax && a.bounds.ymin == b.bounds.ymin && a.bounds.ymax == b.bounds.ymax &&
  b.rigid.isEmpty && b.orbits.isEmpty && b.target.isNone && (List.range n).all fun i =>
    (a.path i).X == (b.path i).X && (a.path i).Y == (b.path i).Y && (a.path i).W == (b.path i).W

def samePhases (n : Nat) : List Phase → List Phase → Bool
  | [], [] => true
  | a :: as, b :: bs => samePhase n a b && samePhases n as bs
  | _, _ => false

/-- A choreography program. -/
inductive Prog where
  | skip
  | step (st : Step)
  | seq (a b : Prog)
  /-- Repeat a section `k` times. -/
  | rep (k : Nat) (p : Prog)

/-- Run the same thing `k` times over, each starting where the last one ended. -/
def repeatRun (f : Nat → State → List Phase × Nat × State) : Nat → Nat → State → List Phase × Nat × State
  | 0, t, s => ([], t, s)
  | k + 1, t, s =>
    let ra := f t s
    let rb := repeatRun f k ra.2.1 ra.2.2
    (ra.1 ++ rb.1, rb.2.1, rb.2.2)

/-- Run a program from tick `t` and state `s`: the phases it plays, the tick it ends on, and where everyone ends. -/
def Prog.exec (c : Config) : Prog → Nat → State → List Phase × Nat × State
  | .skip, t, s => ([], t, s)
  | .step st, t, s => ([st.op.phase c t s], t + st.op.beats * c.ticksPerBeat, st.op.next c.n s)
  | .seq a b, t, s =>
    let ra := Prog.exec c a t s
    let rb := Prog.exec c b ra.2.1 ra.2.2
    (ra.1 ++ rb.1, rb.2.1, rb.2.2)
  | .rep k p, t, s => repeatRun (Prog.exec c p) k t s

section Semantics
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- This phase begins with everyone exactly in state `a`. -/
def StartsAt (K : Type) [Field K] (c : Config) (ph : Phase) (a : State) : Prop :=
  ∀ i, i < c.n → (ph.path i).x (0 : K) = (((a.at i).x : Int) : K) ∧ (ph.path i).y (0 : K) = (((a.at i).y : Int) : K)

/-- This phase ends with everyone exactly in state `b`. -/
def EndsAt (K : Type) [Field K] (c : Config) (ph : Phase) (b : State) : Prop :=
  ∀ i, i < c.n → (ph.path i).x (1 : K) = (((b.at i).x : Int) : K) ∧ (ph.path i).y (1 : K) = (((b.at i).y : Int) : K)

/-- These phases carry the dancers from `a` to `b`: every phase meets the safety specification at
    every moment, and each one begins exactly where the last one ended. -/
inductive Run (K : Type) [Field K] [LE K] [LT K] (c : Config) : State → List Phase → State → Prop where
  | nil (s : State) : Run K c s [] s
  | cons {a b d : State} {ph : Phase} {phs : List Phase} :
      PhaseSpec K c ph → StartsAt K c ph a → EndsAt K c ph b → Run K c b phs d → Run K c a (ph :: phs) d

/-- Safe runs join end to end. -/
theorem Run.append {c : Config} {a b d : State} {xs ys : List Phase}
    (h₁ : Run K c a xs b) (h₂ : Run K c b ys d) : Run K c a (xs ++ ys) d := by
  induction h₁ with
  | nil => exact h₂
  | cons hs hst he _ ih => exact .cons hs hst he (ih h₂)

/-- Every phase of a run meets the safety specification. -/
theorem Run.safe {c : Config} {a b : State} {xs : List Phase} (h : Run K c a xs b) :
    ∀ ph, ph ∈ xs → PhaseSpec K c ph := by
  induction h with
  | nil => intro ph hm; cases hm
  | cons hs _ _ _ ih =>
    intro ph hm
    cases hm with
    | head => exact hs
    | tail _ hm' => exact ih ph hm'

/-- **A Hoare triple for choreography.** From any state meeting `P`, starting at any time, the program
    plays safely from that state, and it finishes in a state meeting `Q`. -/
def Triple (K : Type) [Field K] [LE K] [LT K] (c : Config) (P : State → Prop) (p : Prog) (Q : State → Prop) : Prop :=
  ∀ t s, P s → Run K c s (Prog.exec c p t s).1 (Prog.exec c p t s).2.2 ∧ Q (Prog.exec c p t s).2.2

/-- **The composition theorem.** If `A` takes `P` to `Q`, and `B` takes `Q` to `R`, then `A` followed by
    `B` takes `P` to `R`. Nothing about what `A` and `B` are is needed. -/
theorem Triple.seq {c : Config} {P Q R : State → Prop} {a b : Prog}
    (ha : Triple K c P a Q) (hb : Triple K c Q b R) : Triple K c P (.seq a b) R := by
  intro t s hP
  obtain ⟨ra, hQ⟩ := ha t s hP
  obtain ⟨rb, hR⟩ := hb (Prog.exec c a t s).2.1 _ hQ
  simp only [Prog.exec]
  exact ⟨Run.append ra rb, hR⟩

/-- **The rule of consequence.** A stronger requirement and a weaker promise are always allowed. -/
theorem Triple.consequence {c : Config} {P P' Q Q' : State → Prop} {p : Prog}
    (hP : ∀ s, P' s → P s) (h : Triple K c P p Q) (hQ : ∀ s, Q s → Q' s) : Triple K c P' p Q' :=
  fun t s hs => let r := h t s (hP s hs); ⟨r.1, hQ _ r.2⟩

/-- Doing nothing keeps whatever was true. -/
theorem Triple.skip {c : Config} {P : State → Prop} : Triple K c P .skip P :=
  fun t s hs => by simp only [Prog.exec]; exact ⟨.nil s, hs⟩

/-- **Repetition.** If a section keeps a property true, it keeps it true however many times it repeats. -/
theorem Triple.rep {c : Config} {I : State → Prop} {p : Prog} (k : Nat)
    (h : Triple K c I p I) : Triple K c I (.rep k p) I := by
  intro t s hs
  simp only [Prog.exec]
  induction k generalizing t s with
  | zero => simp only [repeatRun]; exact ⟨.nil s, hs⟩
  | succ k ih =>
    obtain ⟨ra, hI⟩ := h t s hs
    obtain ⟨rb, hI'⟩ := ih (Prog.exec c p t s).2.1 _ hI
    simp only [repeatRun]
    exact ⟨Run.append ra rb, hI'⟩

/-! ## The rules behind slides and parallel moves -/

private theorem easeShare_range {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) : 0 ≤ easeShare t ∧ easeShare t ≤ 1 := by
  have a := OrderedRing.sq_nonneg (a := t)
  have b := OrderedRing.sq_nonneg (a := 1 - t)
  have ma := OrderedRing.mul_nonneg a (show 0 ≤ 3 - 2 * t by grind)
  have mb := OrderedRing.mul_nonneg b (show 0 ≤ 1 + 2 * t by grind)
  simp only [easeShare, Semiring.pow_succ, Semiring.pow_zero] at *
  constructor <;> grind

/-- **Moving as one keeps the gap.** Two dancers shifted by the same amount are the same distance apart
    at every moment as they were at the start. -/
theorem same_shift_same_gap (a b : Pt) (dx dy : Int) (t : K) :
    dist2 (easePath a ⟨a.x + dx, a.y + dy⟩) (easePath b ⟨b.x + dx, b.y + dy⟩) t = ((gapSq' a b : Int) : K) := by
  simp only [dist2, ease_x, ease_y, gapSq', Ring.intCast_add, Ring.intCast_sub, Semiring.pow_succ, Semiring.pow_zero,
    Ring.intCast_mul]
  grind

private theorem dist2_symm (a b : Path) (t : K) : dist2 a b t = dist2 b a t := by
  simp only [dist2]; grind

/-- **The slide rule.** If a pair passes `slidePairOk`, they stay at least `d` apart at every moment of
    the slide, whatever their positions are. No curve is examined. -/
theorem slide_pair_safe {d : Int} (h0 : 0 ≤ d) {a b : Pt} {da db : Int × Int}
    (h : slidePairOk d a b da db = true) (t : K) :
    (d : K) ^ 2 ≤ dist2 (easePath a ⟨a.x + da.1, a.y + da.2⟩) (easePath b ⟨b.x + db.1, b.y + db.2⟩) t := by
  simp only [slidePairOk, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq] at h
  rcases h with (⟨e, hg⟩ | ⟨e, hg⟩) | ⟨e, hg⟩
  · subst e
    rw [same_shift_same_gap]
    have : ((d * d : Int) : K) ≤ ((gapSq' a b : Int) : K) := intCast_le hg
    rw [Ring.intCast_mul] at this
    simp only [Semiring.pow_succ, Semiring.pow_zero]
    grind
  · cases hg with
    | inl hg =>
      exact different_rows_never_clash (g := a.y - b.y) (by grind) (by simp only []; grind) h0 hg t
    | inr hg =>
      rw [dist2_symm]
      exact different_rows_never_clash (g := b.y - a.y) (by grind) (by simp only []; grind) h0 hg t
  · cases hg with
    | inl hg =>
      exact passing_through_a_gap_is_safe (g := a.x - b.x) (by grind) (by simp only []; grind) h0 hg t
    | inr hg =>
      rw [dist2_symm]
      exact passing_through_a_gap_is_safe (g := b.x - a.x) (by grind) (by simp only []; grind) h0 hg t

/-- **The parallel rule.** Two dancers kept on opposite sides of a line, with `d` to spare, can't meet. -/
theorem par_pair_safe {d line : Int} (h0 : 0 ≤ d) {a₁ b₁ a₂ b₂ : Pt}
    (ha₁ : a₁.x ≤ line) (hb₁ : b₁.x ≤ line) (ha₂ : line + d ≤ a₂.x) (hb₂ : line + d ≤ b₂.x)
    {t : K} (h₀ : 0 ≤ t) (h₁ : t ≤ 1) :
    (d : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t :=
  let r := easeShare_range h₀ h₁
  separate_halves_never_clash h0 ha₁ hb₁ ha₂ hb₂ r.1 r.2

/-! ## Independent straight paths: exact collision analysis, with no sampling -/

/-- **The separation of two independently moving dancers is exactly a quadratic** in how far along they
    are, whatever the timing of the move. This is why it can be analysed rather than sampled. -/
theorem separation_is_quadratic_on_stage (a b c d : Pt) (t : K) :
    dist2 (easePath a b) (easePath c d) t =
      (((gapQuad a b c d).1 : Int) : K) * (easeShare t * easeShare t)
        + 2 * (((gapQuad a b c d).2.1 : Int) : K) * easeShare t + (((gapQuad a b c d).2.2 : Int) : K) := by
  simp only [dist2, ease_x, ease_y, gapQuad, Ring.intCast_add, Ring.intCast_sub, Ring.intCast_mul]
  generalize easeShare t = u
  simp only [Semiring.pow_succ, Semiring.pow_zero]
  grind

private theorem qnn {u v : K} (hu : 0 ≤ u) (hv : 0 ≤ v) : 0 ≤ u * v := OrderedRing.mul_nonneg hu hv
private theorem qsq (u : K) : 0 ≤ u * u := by have := OrderedRing.sq_nonneg (a := u); simp only [Semiring.pow_succ, Semiring.pow_zero] at this; grind

/-- **Exact collision analysis is sound.** If the test passes, the two dancers stay at least `m` apart at
    every moment of the move. No time is sampled: the lowest point of the quadratic is worked out exactly. -/
theorem linear_pair_safe {m : Int} {a b c d : Pt} (h : linearPairClear m a b c d = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    ((m : Int) : K) ^ 2 ≤ dist2 (easePath a b) (easePath c d) t := by
  rw [separation_is_quadratic_on_stage]
  obtain ⟨u0, u1⟩ := easeShare_range h0 h1
  generalize easeShare t = u at *
  have hAint : 0 ≤ (gapQuad a b c d).1 := by
    simp only [gapQuad]
    have x := OrderedRing.sq_nonneg (R := Int) (a := (b.x - a.x) - (d.x - c.x))
    have y := OrderedRing.sq_nonneg (R := Int) (a := (b.y - a.y) - (d.y - c.y))
    simp only [Semiring.pow_succ, Semiring.pow_zero] at x y
    grind
  simp only [linearPairClear] at h
  generalize gapQuad a b c d = g at *
  obtain ⟨A, B, C⟩ := g
  simp only at h hAint ⊢
  have hA : (0 : K) ≤ ((A : Int) : K) := OrderedRing.nonneg_intCast_of_nonneg A hAint
  have uu := qsq u
  simp only [Semiring.pow_succ, Semiring.pow_zero]
  split at h
  · rename_i e
    simp only [beq_iff_eq] at e
    simp only [Bool.and_eq_true, beq_iff_eq, decide_eq_true_eq] at h
    obtain ⟨hB, hd⟩ := h
    subst e; subst hB
    have q := intCast_le (K := K) hd
    rw [Ring.intCast_mul] at q
    simp only [Ring.intCast_zero]
    grind
  · rename_i e0
    have hApos : 0 < A := by simp only [beq_iff_eq] at e0; grind
    have hAK : (0 : K) < ((A : Int) : K) := OrderedRing.pos_intCast_of_pos A hApos
    split at h
    · rename_i hB
      simp only [decide_eq_true_eq] at h
      have q := intCast_le (K := K) h
      rw [Ring.intCast_mul] at q
      have m1 := qnn hA uu
      have m2 := qnn (OrderedRing.nonneg_intCast_of_nonneg B hB) u0
      grind
    · split at h
      · rename_i _ hBA
        simp only [decide_eq_true_eq] at h
        have q := intCast_le (K := K) h
        simp only [Ring.intCast_mul, Ring.intCast_add, Ring.intCast_ofNat] at q
        have bq := intCast_le (K := K) hBA
        simp only [Ring.intCast_neg] at bq
        have one : 0 ≤ 1 - u := by grind
        have m := qnn one (show 0 ≤ -2 * ((B : Int) : K) - ((A : Int) : K) * (1 + u) by
          have mm := qnn hA (show 0 ≤ 1 - u by grind)
          grind)
        grind
      · simp only [decide_eq_true_eq] at h
        have q := intCast_le (K := K) h
        simp only [Ring.intCast_mul, Ring.intCast_sub] at q
        have sq := qsq (((A : Int) : K) * u + ((B : Int) : K))
        have key : 0 ≤ ((A : Int) : K) * (((A : Int) : K) * (u * u) + 2 * ((B : Int) : K) * u + ((C : Int) : K) - ((m : Int) : K) * ((m : Int) : K)) := by
          have e : ((A : Int) : K) * (((A : Int) : K) * (u * u) + 2 * ((B : Int) : K) * u + ((C : Int) : K) - ((m : Int) : K) * ((m : Int) : K))
              = (((A : Int) : K) * u + ((B : Int) : K)) * (((A : Int) : K) * u + ((B : Int) : K)) + (((C : Int) : K) * ((A : Int) : K) - ((B : Int) : K) * ((B : Int) : K) - ((m : Int) : K) * ((m : Int) : K) * ((A : Int) : K)) := by grind
          rw [e]; grind
        apply Classical.byContradiction
        intro hn
        have neg : ((A : Int) : K) * (u * u) + 2 * ((B : Int) : K) * u + ((C : Int) : K) - ((m : Int) : K) * ((m : Int) : K) < 0 := by grind
        have := OrderedRing.mul_lt_mul_of_pos_left neg hAK
        grind

/-! ## From a movement's checks to its safety -/

/-- Paths, bounds and speed from the checker, and clearance from any argument at all, give the full specification. -/
theorem PhaseSpec.of_clear {c : Config} {ph : Phase} (hp : Phase.checkPaths c ph = true)
    (hr : ph.rigid = []) (ho : ph.orbits = []) (ht : ph.target = none)
    (hclear : ∀ i j, i < c.n → j < c.n → i ≠ j → ∀ t : K, 0 ≤ t → t ≤ 1 →
      ((c.dmin : Int) : K) ^ 2 ≤ dist2 (ph.path i) (ph.path j) t) : PhaseSpec K c ph := by
  simp only [Phase.checkPaths, List.all_eq_true, List.mem_range, Bool.and_eq_true] at hp
  refine ⟨hclear, ?_, ?_, ?_, ?_, ?_⟩
  · intro i hi t h0 h1
    exact inRect_sound (hp i hi).1.1 (hp i hi).1.2 h0 h1
  · intro i hi t h0 h1
    exact speed_sound (hp i hi).1.1 (hp i hi).2 h0 h1
  · intro r hrm; rw [hr] at hrm; cases hrm
  · intro o hom; rw [ho] at hom; cases hom
  · intro tg h; rw [ht] at h; cases h

theorem Op.path_phase {op : Op} {c : Config} {t : Nat} {s : State} {i : Nat} (hi : i < c.n) :
    (op.phase c t s).path i = op.pathOf c.n s i := by
  simp [Op.phase, Phase.path, List.getD_eq_getElem?_getD, hi]

theorem Op.phase_shift_path (op : Op) (c : Config) (t t' : Nat) (s : State) (i : Nat) :
    (op.phase c t s).path i = (op.phase c t' s).path i := by
  simp only [Op.phase, Phase.path]

/-- When a movement happens doesn't change whether its paths pass. -/
theorem Op.checkPaths_shift (op : Op) (c : Config) (t : Nat) (s : State)
    (h : Phase.checkPaths c (op.phase c 0 s) = true) : Phase.checkPaths c (op.phase c t s) = true := by
  have e : Phase.checkPaths c (op.phase c t s) = Phase.checkPaths c (op.phase c 0 s) := by
    simp only [Phase.checkPaths, Phase.path, Config.durNum, Op.phase, Nat.add_sub_cancel_left, Nat.zero_add, Nat.sub_zero]
  rw [e]; exact h

/-- The endpoint check really does mean each phase starts and ends where it says. -/
theorem endpoints_sound {c : Config} {ph : Phase} {a b : State} (h : endpointsOk c ph a b = true) :
    StartsAt K c ph a ∧ EndsAt K c ph b := by
  simp only [endpointsOk, List.all_eq_true, List.mem_range, Bool.and_eq_true] at h
  have one : ((1 : Int) : K) = 1 := by simp [Ring.intCast_one]
  constructor
  · intro i hi
    obtain ⟨⟨w, st⟩, _⟩ := h i hi
    have r := frac_first (K := K) w (show (0 : Int) < 1 by decide) st
    simp only [one] at r
    constructor <;> grind
  · intro i hi
    obtain ⟨⟨w, _⟩, re⟩ := h i hi
    have r := reaches_sound (K := K) w (show (0 : Int) < 1 by decide) re
    simp only [one] at r
    constructor <;> grind

theorem endpoints_shift {op : Op} {c : Config} {t : Nat} {s a b : State}
    (h : endpointsOk c (op.phase c 0 s) a b = true) : endpointsOk c (op.phase c t s) a b = true := by
  have e : endpointsOk c (op.phase c t s) a b = endpointsOk c (op.phase c 0 s) a b := by
    simp only [endpointsOk, Phase.path, Op.phase]
  rw [e]; exact h

private theorem slide_next_at {ds : List (Int × Int)} {b n : Nat} {s : State} {i : Nat} (hi : i < n) :
    ((Op.slide ds b).next n s).at i = ⟨(s.at i).x + (ds.getD i (0, 0)).1, (s.at i).y + (ds.getD i (0, 0)).2⟩ := by
  simp [Op.next, State.at, List.getD_eq_getElem?_getD, hi]

/-- Slides are safe by the slide rule. -/
theorem slide_spec {c : Config} {ds : List (Int × Int)} {b t : Nat} {s : State} (hd : 0 ≤ c.dmin)
    (hp : Phase.checkPaths c ((Op.slide ds b).phase c t s) = true) (hc : slideClear c s ds = true) :
    PhaseSpec K c ((Op.slide ds b).phase c t s) := by
  refine PhaseSpec.of_clear hp rfl rfl rfl ?_
  intro i j hi hj hij u _ _
  simp only [Op.path_phase hi, Op.path_phase hj, Op.pathOf, slide_next_at hi, slide_next_at hj]
  simp only [slideClear, List.all_eq_true, List.mem_range] at hc
  cases Nat.lt_or_gt_of_ne hij with
  | inl hlt =>
    rw [dist2_symm]
    exact slide_pair_safe hd (hc j hj i hlt) u
  | inr hgt =>
    exact slide_pair_safe hd (hc i hi j hgt) u

/-- Turning is safe by the turning rule: every gap is what it was at the start. -/
theorem turn_spec {c : Config} {cen : Pt} {ccw : Bool} {b t : Nat} {s : State}
    (hp : Phase.checkPaths c ((Op.turn cen ccw b).phase c t s) = true)
    (hs : (Pred.separated c.n c.dmin).holds s = true) :
    PhaseSpec K c ((Op.turn cen ccw b).phase c t s) := by
  refine PhaseSpec.of_clear hp rfl rfl rfl ?_
  intro i j hi hj hij u h0 h1
  simp only [Op.path_phase hi, Op.path_phase hj, Op.pathOf]
  rw [turning_keeps_the_gap _ _ _ _ h0 h1]
  simp only [Pred.holds, List.all_eq_true, List.mem_range, decide_eq_true_eq] at hs
  have key : c.dmin * c.dmin ≤ gapSq' (s.at i) (s.at j) := by
    cases Nat.lt_or_gt_of_ne hij with
    | inl hlt =>
      have := hs j hj i hlt
      have sym : gapSq' (s.at j) (s.at i) = gapSq' (s.at i) (s.at j) := by simp only [gapSq', Int.pow_succ, Int.pow_zero]; grind
      rw [← sym]; exact this
    | inr hgt => exact hs i hi j hgt
  have cast : ((c.dmin * c.dmin : Int) : K) ≤ ((gapSq' (s.at i) (s.at j) : Int) : K) := intCast_le key
  rw [Ring.intCast_mul] at cast
  simp only [Semiring.pow_succ, Semiring.pow_zero]
  grind

/-- Independent moves are safe by the exact test on every pair. -/
theorem move_spec {c : Config} {target : State} {b t : Nat} {s : State}
    (hp : Phase.checkPaths c ((Op.move target b).phase c t s) = true) (hc : moveClear c s target = true) :
    PhaseSpec K c ((Op.move target b).phase c t s) := by
  refine PhaseSpec.of_clear hp rfl rfl rfl ?_
  intro i j hi hj hij u h0 h1
  simp only [Op.path_phase hi, Op.path_phase hj, Op.pathOf, Op.next]
  simp only [moveClear, List.all_eq_true, List.mem_range] at hc
  cases Nat.lt_or_gt_of_ne hij with
  | inl hlt => rw [dist2_symm]; exact linear_pair_safe (hc j hj i hlt) h0 h1
  | inr hgt => exact linear_pair_safe (hc i hi j hgt) h0 h1

/-- Parallel groups are safe: within a group by the exact test, across groups by the line. -/
theorem par_spec {c : Config} {L R : List Nat} {line : Int} {target : State} {b t : Nat} {s : State}
    (hd : 0 ≤ c.dmin)
    (hp : Phase.checkPaths c ((Op.par L R line target b).phase c t s) = true)
    (hc : parClear c L R line s target = true) :
    PhaseSpec K c ((Op.par L R line target b).phase c t s) := by
  refine PhaseSpec.of_clear hp rfl rfl rfl ?_
  simp only [parClear, List.all_eq_true, List.mem_range] at hc
  have key : ∀ i j, i < c.n → j < i → ∀ u : K, 0 ≤ u → u ≤ 1 →
      ((c.dmin : Int) : K) ^ 2 ≤ dist2 (((Op.par L R line target b).phase c t s).path i) (((Op.par L R line target b).phase c t s).path j) u := by
    intro i j hi hj u h0 h1
    have hjn : j < c.n := by omega
    have w := hc i hi j hj
    simp only [Op.path_phase hi, Op.path_phase hjn, Op.pathOf, Op.next]
    split at w
    · exact linear_pair_safe w h0 h1
    · split at w
      · simp only [Bool.and_eq_true, decide_eq_true_eq] at w
        obtain ⟨⟨⟨a1, a2⟩, a3⟩, a4⟩ := w
        exact par_pair_safe hd a1 a2 a3 a4 h0 h1
      · split at w
        · simp only [Bool.and_eq_true, decide_eq_true_eq] at w
          obtain ⟨⟨⟨a1, a2⟩, a3⟩, a4⟩ := w
          rw [dist2_symm]
          exact par_pair_safe hd a1 a2 a3 a4 h0 h1
        · cases w
  intro i j hi hj hij u h0 h1
  cases Nat.lt_or_gt_of_ne hij with
  | inl hlt => rw [dist2_symm]; exact key j i hj hlt u h0 h1
  | inr hgt => exact key i j hi hgt u h0 h1

/-- **Every movement does what its check says.** If a movement is enabled in a state, then at any
    time it is played, it is safe at every moment and goes exactly from that state to the next. -/
theorem Op.sound {op : Op} {c : Config} {s : State} (h : op.enabled c s = true) (t : Nat) :
    PhaseSpec K c (op.phase c t s) ∧ StartsAt K c (op.phase c t s) s ∧ EndsAt K c (op.phase c t s) (op.next c.n s) := by
  simp only [Op.enabled, Bool.and_eq_true] at h
  obtain ⟨he, hrest⟩ := h
  have e := endpoints_sound (K := K) (endpoints_shift (t := t) he)
  refine ⟨?_, e.1, e.2⟩
  have wfd : c.wf = true → 0 ≤ c.dmin := by
    intro w
    simp only [Config.wf, Bool.and_eq_true, decide_eq_true_eq] at w
    exact w.1.1.1
  cases op with
  | move target b =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨_, p⟩, cl⟩ := hrest
    exact move_spec (Op.checkPaths_shift _ c t s p) cl
  | turn cen ccw b =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨_, p⟩, sep⟩ := hrest
    exact turn_spec (Op.checkPaths_shift _ c t s p) sep
  | slide ds b =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨w, p⟩, cl⟩ := hrest
    exact slide_spec (wfd w) (Op.checkPaths_shift _ c t s p) cl
  | par L R line target b =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨w, p⟩, cl⟩ := hrest
    exact par_spec (wfd w) (Op.checkPaths_shift _ c t s p) cl

/-- **A movement's contract.** If the step's contract is met in state `a`, the program consisting of
    that step runs safely from `a`, ends where it says, and its promise is true of the result. -/
theorem Step.triple {st : Step} {c : Config} {a : State} (h : st.ok c a = true) :
    Triple K c (· = a) (.step st) (fun s' => s' = st.op.next c.n a ∧ st.ensures.holds s' = true) := by
  simp only [Step.ok, Bool.and_eq_true] at h
  obtain ⟨⟨_, he⟩, hen⟩ := h
  intro t s hs
  subst hs
  obtain ⟨sp, st', en⟩ := Op.sound (K := K) he t
  simp only [Prog.exec]
  exact ⟨.cons sp st' en (.nil _), by simp [hen]⟩

/-- The form used to chain steps: from exactly `a` to exactly `b`. -/
theorem Step.triple_at {st : Step} {c : Config} {a b : State} (h : st.ok c a = true) (hb : st.op.next c.n a = b) :
    Triple K c (· = a) (.step st) (· = b) :=
  Triple.consequence (fun _ h => h) (Step.triple h) (fun _ h => h.1.trans hb)

/-- Every step can run, whatever each one's contract says about the step before. -/
def Prog.allRun (c : Config) : Prog → Nat → State → Bool
  | .skip, _, _ => true
  | .step st, _, s => st.op.enabled c s
  | .seq a b, t, s =>
    let ra := Prog.exec c a t s
    Prog.allRun c a t s && Prog.allRun c b ra.2.1 ra.2.2
  | .rep _ _, _, _ => false

/-- **The whole program runs safely**, from the safety of its movements. -/
theorem Prog.run_of_allRun {c : Config} {p : Prog} {t : Nat} {s : State} (h : Prog.allRun c p t s = true) :
    Run K c s (Prog.exec c p t s).1 (Prog.exec c p t s).2.2 := by
  induction p generalizing t s with
  | skip => simp only [Prog.exec]; exact .nil s
  | step st =>
    obtain ⟨sp, a, e⟩ := Op.sound (K := K) (show st.op.enabled c s = true from h) t
    simp only [Prog.exec]
    exact .cons sp a e (.nil _)
  | seq a b iha ihb =>
    simp only [Prog.allRun, Bool.and_eq_true] at h
    simp only [Prog.exec]
    exact Run.append (iha h.1) (ihb h.2)
  | rep k q ih => simp [Prog.allRun] at h

/-- Two phases that agree on times, bounds and paths meet the specification together. -/
theorem PhaseSpec.of_same {c : Config} {a b : Phase} (h : samePhase c.n a b = true) (ha : PhaseSpec K c a) : PhaseSpec K c b := by
  simp only [samePhase, Bool.and_eq_true, beq_iff_eq, List.all_eq_true, List.mem_range, List.isEmpty_iff, Option.isNone_iff_eq_none] at h
  obtain ⟨⟨⟨⟨⟨⟨⟨⟨⟨t0, t1⟩, b1⟩, b2⟩, b3⟩, b4⟩, hr⟩, ho⟩, ht⟩, hp⟩ := h
  have path : ∀ i, i < c.n → b.path i = a.path i := by
    intro i hi
    obtain ⟨⟨x, y⟩, w⟩ := hp i hi
    cases hA : a.path i
    cases hB : b.path i
    simp_all
  have dur : c.durNum b = c.durNum a := by simp only [Config.durNum, t0, t1]
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro i j hi hj hij u h0 h1
    rw [path i hi, path j hj]
    exact ha.noCollision i j hi hj hij u h0 h1
  · intro i hi u h0 h1
    rw [path i hi, ← b1, ← b2, ← b3, ← b4]
    exact ha.onStage i hi u h0 h1
  · intro i hi u h0 h1
    rw [path i hi, dur]
    exact ha.speedLimit i hi u h0 h1
  · intro r hm; rw [hr] at hm; cases hm
  · intro o hm; rw [ho] at hm; cases hm
  · intro tg hm; rw [ht] at hm; cases hm

/-- **The routine inherits its safety from its program.** Every phase of a routine that matches a safe run is safe. -/
theorem specs_of_run {c : Config} {xs ys : List Phase} {a b : State} (hr : Run K c a xs b) (h : samePhases c.n xs ys = true) :
    ∀ ph, ph ∈ ys → PhaseSpec K c ph := by
  have safe := Run.safe hr
  clear hr
  induction xs generalizing ys with
  | nil =>
    cases ys with
    | nil => intro ph hm; cases hm
    | cons y ys => simp [samePhases] at h
  | cons x xs ih =>
    cases ys with
    | nil => simp [samePhases] at h
    | cons y ys =>
      simp only [samePhases, Bool.and_eq_true] at h
      intro ph hm
      cases hm with
      | head => exact PhaseSpec.of_same h.1 (safe x (.head _))
      | tail _ hm' => exact ih h.2 (fun p hp => safe p (.tail _ hp)) ph hm'

end Semantics

/-- **A broken link is not a collision.** If a step's requirement is false in the state the previous
    step leaves, its contract isn't met, whatever the dancers' paths would do. -/
theorem Step.not_ok_of_requires {st : Step} {c : Config} {s : State} (h : st.requires.holds s = false) :
    st.ok c s = false := by
  simp [Step.ok, h]

end Choreo
