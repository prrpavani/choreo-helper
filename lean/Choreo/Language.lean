import Choreo.Recipes
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

def gapSq' (a b : Pt) : Int := (a.x - b.x) ^ 2 + (a.y - b.y) ^ 2

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
  /-- Everyone walks to these places. Safety is established by Lean's checker on the actual paths. -/
  | move (target : State) (beats : Nat) (certs : List Cert)
  /-- Everyone turns a quarter about `centre`, on an exact arc. -/
  | turn (centre : Pt) (ccw : Bool) (beats : Nat) (certs : List Cert) (orbits : List Orbit)
  /-- Each dancer shifts by their own amount. Safety follows from a rule about the starting places,
      with no checking of curves. Translation, group exchange and steps in unison are all slides. -/
  | slide (deltas : List (Int × Int)) (beats : Nat)
  /-- Two groups move at once, each in its own part of the stage. Each group is checked on its own, and
      the groups can't meet because a line stays between them, so no pair across groups is examined. -/
  | par (left right : List Nat) (line : Int) (target : State) (beats : Nat) (certs : List Cert)

def Pt.quarter (c a : Pt) (ccw : Bool) : Pt :=
  let dx := a.x - c.x
  let dy := a.y - c.y
  if ccw then ⟨c.x - dy, c.y + dx⟩ else ⟨c.x + dy, c.y - dx⟩

def Op.beats : Op → Nat
  | .move _ b _ | .turn _ _ b _ _ | .slide _ b | .par _ _ _ _ b _ => b

/-- Where the dancers stand after the movement. -/
def Op.next (op : Op) (n : Nat) (s : State) : State :=
  match op with
  | .move target _ _ | .par _ _ _ target _ _ => target
  | .turn c ccw _ _ _ => (List.range n).map fun i => c.quarter (s.at i) ccw
  | .slide ds _ => (List.range n).map fun i =>
      let d := ds.getD i (0, 0)
      ⟨(s.at i).x + d.1, (s.at i).y + d.2⟩

/-- The path dancer `i` takes. -/
def Op.pathOf (op : Op) (n : Nat) (s : State) (i : Nat) : Path :=
  match op with
  | .turn c ccw _ _ _ => rotatePath c (s.at i) ccw
  | _ => easePath (s.at i) ((op.next n s).at i)

def Op.certs : Op → List Cert
  | .move _ _ cs | .turn _ _ _ cs _ | .par _ _ _ _ _ cs => cs
  | .slide _ _ => []

def Op.orbits : Op → List Orbit
  | .turn _ _ _ _ os => os
  | _ => []

/-- The movement as one timed phase, starting at tick `t`. -/
def Op.phase (op : Op) (c : Config) (t : Nat) (s : State) : Phase :=
  { t0 := t, t1 := t + op.beats * c.ticksPerBeat,
    paths := (List.range c.n).map (op.pathOf c.n s), bounds := c.stage, certs := op.certs,
    rigid := [], orbits := op.orbits, target := none }

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

/-- Two dancers in the same group use the checker. Across the two groups, the line does the work. -/
def parClear (c : Config) (ph : Phase) (left right : List Nat) (line : Int) (s target : State) : Bool :=
  (List.range c.n).all fun i => (List.range i).all fun j =>
    if (left.contains i && left.contains j) || (right.contains i && right.contains j) then
      (ph.pairCert i j).check (ph.path i) (ph.path j) c.dmin
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
  | .move .. | .turn .. => Phase.check c ph
  | .slide ds _ => c.wf && Phase.checkPaths c ph && slideClear c s ds
  | .par left right line target _ _ =>
    c.wf && Phase.checkPaths c ph && parClear c ph left right line s target

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
  a.t0 == b.t0 && a.t1 == b.t1 && (List.range n).all fun i =>
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

/-- Parallel groups are safe: within a group by its own check, across groups by the line. -/
theorem par_spec {c : Config} {L R : List Nat} {line : Int} {target : State} {b t : Nat} {cs : List Cert} {s : State}
    (hd : 0 ≤ c.dmin)
    (hp : Phase.checkPaths c ((Op.par L R line target b cs).phase c t s) = true)
    (hc : parClear c ((Op.par L R line target b cs).phase c t s) L R line s target = true) :
    PhaseSpec K c ((Op.par L R line target b cs).phase c t s) := by
  have hp' := hp
  refine PhaseSpec.of_clear hp rfl rfl rfl ?_
  simp only [Phase.checkPaths, List.all_eq_true, List.mem_range, Bool.and_eq_true] at hp'
  simp only [parClear, List.all_eq_true, List.mem_range] at hc
  -- one ordered pair at a time
  have key : ∀ i j, i < c.n → j < i → ∀ u : K, 0 ≤ u → u ≤ 1 →
      ((c.dmin : Int) : K) ^ 2 ≤ dist2 (((Op.par L R line target b cs).phase c t s).path i) (((Op.par L R line target b cs).phase c t s).path j) u := by
    intro i j hi hj u h0 h1
    have hjn : j < c.n := by omega
    have w := hc i hi j hj
    split at w
    · exact Cert.sound hd (hp' i hi).1.1 (hp' j hjn).1.1 w h0 h1
    · split at w
      · simp only [Bool.and_eq_true, decide_eq_true_eq] at w
        obtain ⟨⟨⟨a1, a2⟩, a3⟩, a4⟩ := w
        simp only [Op.path_phase hi, Op.path_phase hjn, Op.pathOf, Op.next]
        exact par_pair_safe hd a1 a2 a3 a4 h0 h1
      · split at w
        · simp only [Bool.and_eq_true, decide_eq_true_eq] at w
          obtain ⟨⟨⟨a1, a2⟩, a3⟩, a4⟩ := w
          simp only [Op.path_phase hi, Op.path_phase hjn, Op.pathOf, Op.next]
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
  | move target b cs =>
    exact Phase.sound (Phase.check_shift (ph := Op.phase (.move target b cs) c 0 s) (ph' := Op.phase (.move target b cs) c t s) rfl rfl rfl rfl rfl rfl (by simp [Op.phase]) hrest) K
  | turn cen ccw b cs os =>
    exact Phase.sound (Phase.check_shift (ph := Op.phase (.turn cen ccw b cs os) c 0 s) (ph' := Op.phase (.turn cen ccw b cs os) c t s) rfl rfl rfl rfl rfl rfl (by simp [Op.phase]) hrest) K
  | slide ds b =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨w, p⟩, cl⟩ := hrest
    exact slide_spec (wfd w) (Op.checkPaths_shift _ c t s p) cl
  | par L R line target b cs =>
    simp only [Bool.and_eq_true] at hrest
    obtain ⟨⟨w, p⟩, cl⟩ := hrest
    refine par_spec (wfd w) (Op.checkPaths_shift _ c t s p) ?_
    have ee : parClear c ((Op.par L R line target b cs).phase c t s) L R line s target
        = parClear c ((Op.par L R line target b cs).phase c 0 s) L R line s target := by
      simp only [parClear, Phase.pairCert, Phase.path, Op.phase]
    rw [ee]; exact cl

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

end Semantics

/-- **A broken link is not a collision.** If a step's requirement is false in the state the previous
    step leaves, its contract isn't met, whatever the dancers' paths would do. -/
theorem Step.not_ok_of_requires {st : Step} {c : Config} {s : State} (h : st.requires.holds s = false) :
    st.ok c s = false := by
  simp [Step.ok, h]

end Choreo
