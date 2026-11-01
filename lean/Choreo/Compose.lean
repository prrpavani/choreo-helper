import Choreo.Intent
/-!
# Three parts, one proof

A choreographer asks three things. Are my dancers in the right places? Can they move as planned? Does it
happen on the music? This file gives each its own statement, each proved separately, so a routine can
pass one and fail another. `Verified.of_parts` shows that together they give the whole-routine statement.

It also states what a transition guarantees: one complete move from a known formation to another.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

/-! ## The checks -/

/-- Everything about movement that spans phases: they tile the timeline, meet each other, and stay in
    the outer area. -/
def Routine.checkMovement (r : Routine) : Bool :=
  r.cfg.wf && !r.phases.isEmpty && chainFrom 0 r.phases r.cfg.total && joins r.cfg r.phases &&
    r.phases.all (fun ph => ph.bounds.within r.cfg.stage)

/-- Every phase is on the beat, and the routine lasts the length it claims. -/
def Routine.checkMusic (r : Routine) : Bool :=
  r.phases.all (fun ph => (ph.t0 % r.cfg.ticksPerBeat == 0) && (ph.t1 % r.cfg.ticksPerBeat == 0)) &&
    (r.cfg.total * 60 * r.cfg.bpmDen == r.cfg.seconds * r.cfg.bpmNum * r.cfg.ticksPerBeat)

section Spec
variable (K : Type) [Field K] [LE K] [LT K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- **Movement.** At every instant: no two dancers too close, everyone in bounds, under the speed limit,
    with position and velocity matching where phases meet, and any stage-only requests met. -/
structure MovementProved (r : Routine) (asks : List Ask) : Prop where
  phases : ∀ ph, ph ∈ r.phases → PhaseSpec K r.cfg ph
  noCollision : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) →
    ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T ∧ ∀ i j, i < r.cfg.n → j < r.cfg.n → i ≠ j →
      ((r.cfg.dmin : Int) : K) ^ 2 ≤ dist2 (ph.path i) (ph.path j) (ph.localTime T)
  onStage : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) →
    ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T ∧ ∀ i, i < r.cfg.n →
      ((r.cfg.stage.xmin : Int) : K) ≤ (ph.path i).x (ph.localTime T) ∧
      (ph.path i).x (ph.localTime T) ≤ ((r.cfg.stage.xmax : Int) : K) ∧
      ((r.cfg.stage.ymin : Int) : K) ≤ (ph.path i).y (ph.localTime T) ∧
      (ph.path i).y (ph.localTime T) ≤ ((r.cfg.stage.ymax : Int) : K)
  continuous : ∀ pre a b post, r.phases = pre ++ a :: b :: post →
    a.t1 = b.t0 ∧ ∀ i, i < r.cfg.n →
      (a.path i).x (1 : K) = (b.path i).x (0 : K) ∧
      (a.path i).y (1 : K) = (b.path i).y (0 : K) ∧
      (a.path i).vx (1 : K) * ((b.ticks : Int) : K) = (b.path i).vx (0 : K) * ((a.ticks : Int) : K) ∧
      (a.path i).vy (1 : K) * ((b.ticks : Int) : K) = (b.path i).vy (0 : K) * ((a.ticks : Int) : K)
  stageRequests : ∀ a, a ∈ asks → a.isMovement = true → Ask.Holds K r a

/-- **Formation.** Every request about where dancers are and what shape they hold. -/
def FormationProved (r : Routine) (asks : List Ask) : Prop :=
  ∀ a, a ∈ asks → a.isMovement = false → Ask.Holds K r a

end Spec

/-- **Musicality.** Every phase starts and ends exactly on a beat, and the length is exact. -/
structure MusicalityProved (r : Routine) : Prop where
  onBeat : ∀ ph, ph ∈ r.phases → ph.t0 % r.cfg.ticksPerBeat = 0 ∧ ph.t1 % r.cfg.ticksPerBeat = 0
  duration : r.cfg.total * 60 * r.cfg.bpmDen = r.cfg.seconds * r.cfg.bpmNum * r.cfg.ticksPerBeat

/-- One complete move: phases `first` to `last`, from one set of positions to another. -/
structure Transition where
  first : Nat
  last : Nat
  start : List Slot
  finish : List Slot

def Transition.count (tr : Transition) : Nat := tr.last + 1 - tr.first

/-- The phases this transition covers. -/
def Transition.segment (r : Routine) (tr : Transition) : List Phase := (r.phases.drop tr.first).take tr.count

section TransitionSpec
variable (K : Type) [Field K] [LE K] [LT K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- **What a verified transition guarantees.** All its phases exist. Every dancer starts where the start
    says and ends where the finish says. At every moment in between the phase rules hold (spacing, bounds,
    speed). Phases inside the transition meet with matching position and velocity, and all land on beats. -/
structure TransitionValid (r : Routine) (tr : Transition) : Prop where
  complete : 0 < tr.count ∧ (Transition.segment r tr).length = tr.count
  starts : ∃ a, (Transition.segment r tr).head? = some a ∧ tr.start.length = r.cfg.n ∧ ∀ i, i < r.cfg.n →
    (a.path i).x (0 : K) = (((tr.start.getD i ⟨0, 0, 1⟩).x : Int) : K) / (((tr.start.getD i ⟨0, 0, 1⟩).w : Int) : K) ∧
    (a.path i).y (0 : K) = (((tr.start.getD i ⟨0, 0, 1⟩).y : Int) : K) / (((tr.start.getD i ⟨0, 0, 1⟩).w : Int) : K)
  finishes : ∃ z, (Transition.segment r tr).getLast? = some z ∧ tr.finish.length = r.cfg.n ∧ ∀ i, i < r.cfg.n →
    (z.path i).x (1 : K) = (((tr.finish.getD i ⟨0, 0, 1⟩).x : Int) : K) / (((tr.finish.getD i ⟨0, 0, 1⟩).w : Int) : K) ∧
    (z.path i).y (1 : K) = (((tr.finish.getD i ⟨0, 0, 1⟩).y : Int) : K) / (((tr.finish.getD i ⟨0, 0, 1⟩).w : Int) : K)
  safe : ∀ ph, ph ∈ Transition.segment r tr → PhaseSpec K r.cfg ph
  continuous : ∀ pre a b post, Transition.segment r tr = pre ++ a :: b :: post →
    a.t1 = b.t0 ∧ ∀ i, i < r.cfg.n →
      (a.path i).x (1 : K) = (b.path i).x (0 : K) ∧ (a.path i).y (1 : K) = (b.path i).y (0 : K) ∧
      (a.path i).vx (1 : K) * ((b.ticks : Int) : K) = (b.path i).vx (0 : K) * ((a.ticks : Int) : K) ∧
      (a.path i).vy (1 : K) * ((b.ticks : Int) : K) = (b.path i).vy (0 : K) * ((a.ticks : Int) : K)
  onBeat : ∀ ph, ph ∈ Transition.segment r tr → ph.t0 % r.cfg.ticksPerBeat = 0 ∧ ph.t1 % r.cfg.ticksPerBeat = 0

end TransitionSpec

/-- The dancer starts exactly on this slot. -/
def Path.startsAtSlot (p : Path) (s : Slot) : Bool :=
  (Poly.first p.X * s.w == s.x * Poly.first p.W) && (Poly.first p.Y * s.w == s.y * Poly.first p.W)

/-- Everything about a transition except the phase checks, which are proved phase by phase. -/
def Transition.check (r : Routine) (tr : Transition) : Bool :=
  let seg := Transition.segment r tr
  decide (0 < tr.count) && (seg.length == tr.count) && (tr.start.length == r.cfg.n) && (tr.finish.length == r.cfg.n) &&
  (match seg.head? with
    | some a => (List.range r.cfg.n).all fun i =>
        (a.path i).wf && decide (0 < (tr.start.getD i ⟨0, 0, 1⟩).w) && (a.path i).startsAtSlot (tr.start.getD i ⟨0, 0, 1⟩)
    | none => false) &&
  (match seg.getLast? with
    | some z => (List.range r.cfg.n).all fun i =>
        (z.path i).wf && decide (0 < (tr.finish.getD i ⟨0, 0, 1⟩).w) && (z.path i).reachesSlot (tr.finish.getD i ⟨0, 0, 1⟩)
    | none => false) &&
  joins r.cfg seg &&
  seg.all (fun ph => (ph.t0 % r.cfg.ticksPerBeat == 0) && (ph.t1 % r.cfg.ticksPerBeat == 0))

/-! ## Proofs -/

section Proofs
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- **From safe phases to a safe routine.** However the phases are known to be safe, that fact, the joins
    and the timeline give the guarantee over the whole routine. -/
theorem movement_of_specs {r : Routine} {asks : List Ask} (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
    (hm : r.checkMovement = true) (hspec : ∀ ph, ph ∈ r.phases → PhaseSpec K r.cfg ph)
    (ha : asks.all (fun a => !a.isMovement || a.check r) = true) :
    MovementProved K r asks := by
  simp only [Routine.checkMovement, Bool.and_eq_true, Bool.not_eq_true', List.isEmpty_eq_false_iff,
    List.all_eq_true] at hm
  obtain ⟨⟨⟨⟨hwf, hne⟩, hchain⟩, hjoin⟩, hwithin⟩ := hm
  have hlt := chain_lt r.phases 0 r.cfg.total hchain
  have cover : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) → ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T := by
    intro T h0 h1
    refine chain_covers r.phases 0 r.cfg.total hne hchain ?_ h1
    have : (((0 : Nat) : Int) : K) = 0 := by simp only [Int.natCast_zero, Ring.intCast_zero]
    rw [this]; exact h0
  refine ⟨hspec, ?_, ?_, ?_, ?_⟩
  · intro T h0 h1
    obtain ⟨ph, hmem, hact⟩ := cover T h0 h1
    obtain ⟨l0, l1⟩ := localTime_mem (hlt ph hmem) hact
    exact ⟨ph, hmem, hact, fun i j hi hj hij => (hspec ph hmem).noCollision i j hi hj hij _ l0 l1⟩
  · intro T h0 h1
    obtain ⟨ph, hmem, hact⟩ := cover T h0 h1
    obtain ⟨l0, l1⟩ := localTime_mem (hlt ph hmem) hact
    refine ⟨ph, hmem, hact, fun i hi => ?_⟩
    obtain ⟨a, b, c, d⟩ := (hspec ph hmem).onStage i hi _ l0 l1
    have hin := hwithin ph hmem
    simp only [Rect.within, Bool.and_eq_true, decide_eq_true_eq] at hin
    obtain ⟨⟨⟨w1, w2⟩, w3⟩, w4⟩ := hin
    have q1 := intCast_le (K := K) w1
    have q2 := intCast_le (K := K) w2
    have q3 := intCast_le (K := K) w3
    have q4 := intCast_le (K := K) w4
    exact ⟨Std.IsPreorder.le_trans _ _ _ q1 a, Std.IsPreorder.le_trans _ _ _ b q2,
      Std.IsPreorder.le_trans _ _ _ q3 c, Std.IsPreorder.le_trans _ _ _ d q4⟩
  · intro pre a b post hsplit
    rw [hsplit] at hjoin
    have hj := joins_sound pre a b post hjoin
    simp only [joinOk, Bool.and_eq_true, beq_iff_eq, List.all_eq_true, List.mem_range] at hj
    exact ⟨hj.1, fun i hi => joinPath_sound (hj.2 i hi)⟩
  · intro a hmem hmove
    simp only [List.all_eq_true, Bool.or_eq_true, Bool.not_eq_true'] at ha
    cases ha a hmem with
    | inl h => simp [hmove] at h
    | inr h => exact Ask.sound (fun _ => hspec) h

/-- **The movement part.** The phase proofs, the joins and the stage requests give the movement guarantee. -/
theorem movement_part {r : Routine} {asks : List Ask} (hm : r.checkMovement = true) (hp : AllChecked r.cfg r.phases)
    (ha : asks.all (fun a => !a.isMovement || a.check r) = true)
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    MovementProved K r asks :=
  movement_of_specs K hm (fun ph hmem => Phase.sound (allChecked_mem hp ph hmem) K) ha

/-- **The musicality part.** -/
theorem musicality_part {r : Routine} (h : r.checkMusic = true) : MusicalityProved r := by
  simp only [Routine.checkMusic, Bool.and_eq_true, List.all_eq_true, beq_iff_eq] at h
  exact ⟨h.1, h.2⟩

/-- **Failing the music check really means the music is wrong.** The check is exact, not cautious. -/
theorem not_musicality {r : Routine} (h : r.checkMusic = false) : ¬ MusicalityProved r := by
  intro hm
  have : r.checkMusic = true := by
    simp only [Routine.checkMusic, Bool.and_eq_true, List.all_eq_true, beq_iff_eq]
    exact ⟨hm.onBeat, hm.duration⟩
  simp [this] at h

/-- **The formation part.** It needs nothing about movement, so it stands even if movement fails. -/
theorem formation_part {r : Routine} {asks : List Ask} (ha : asks.all (fun a => a.isMovement || a.check r) = true)
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    FormationProved K r asks := by
  intro a hmem hmove
  simp only [List.all_eq_true, Bool.or_eq_true] at ha
  cases ha a hmem with
  | inl h => simp [hmove] at h
  | inr h => exact Ask.sound (fun hb => by simp [hmove] at hb) h

/-- **Whole-routine composition.** Movement, musicality and formation together give the full statement:
    the routine is safe, and it does what was asked. -/
theorem Verified.of_parts {r : Routine} {asks : List Ask}
    (hm : MovementProved K r asks) (hs : MusicalityProved r) (hf : FormationProved K r asks) : Verified K r asks := by
  refine ⟨⟨hm.phases, hm.noCollision, hm.onStage, hm.continuous, hs.onBeat, hs.duration⟩, fun a hmem => ?_⟩
  cases hb : a.isMovement with
  | true => exact hm.stageRequests a hmem hb
  | false => exact hf a hmem hb

theorem frac_first {p : Path} {s : Slot} (hp : p.wf = true) (hs : 0 < s.w) (h : p.startsAtSlot s = true) :
    p.x (0 : K) = (s.x : K) / (s.w : K) ∧ p.y (0 : K) = (s.y : K) / (s.w : K) := by
  simp only [Path.startsAtSlot, Bool.and_eq_true, beq_iff_eq] at h
  have hw := first_W_pos (K := K) hp
  have hw' : (s.w : K) ≠ 0 := by
    have := OrderedRing.pos_intCast_of_pos (R := K) s.w hs
    grind
  have hne : (Poly.first p.W : K) ≠ 0 := by grind
  rw [x_at_zero, y_at_zero]
  exact ⟨frac_eq hne hw' (cast_mul_eq h.1), frac_eq hne hw' (cast_mul_eq h.2)⟩

theorem allChecked_mem' {c : Config} {ps : List Phase} (h : AllChecked c ps) (ph : Phase) (hm : ph ∈ ps) :
    Phase.check c ph = true := allChecked_mem h ph hm

/-- **A transition composes its phase proofs.** The phase proofs of just the phases it covers, with the
    checks at its start, its finish and its joins, give the transition guarantee. It needs nothing from
    the rest of the routine, so one bad move elsewhere doesn't undo it. -/
theorem Transition.valid {r : Routine} {tr : Transition} (hc : Transition.check r tr = true)
    (hp : AllChecked r.cfg (Transition.segment r tr))
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    TransitionValid K r tr := by
  simp only [Transition.check, Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq] at hc
  obtain ⟨⟨⟨⟨⟨⟨⟨h0, hlen⟩, hsl⟩, hfl⟩, hstart⟩, hend⟩, hjoin⟩, hbeat⟩ := hc
  refine ⟨⟨h0, hlen⟩, ?_, ?_, fun ph hm => Phase.sound (allChecked_mem' hp ph hm) K, ?_, ?_⟩
  · split at hstart
    · rename_i a ha
      simp only [List.all_eq_true, List.mem_range, Bool.and_eq_true, decide_eq_true_eq] at hstart
      refine ⟨a, ha, hsl, fun i hi => ?_⟩
      obtain ⟨⟨wp, hpos⟩, hs⟩ := hstart i hi
      exact frac_first wp hpos hs
    · cases hstart
  · split at hend
    · rename_i z hz
      simp only [List.all_eq_true, List.mem_range, Bool.and_eq_true, decide_eq_true_eq] at hend
      refine ⟨z, hz, hfl, fun i hi => ?_⟩
      obtain ⟨⟨wp, hpos⟩, hs⟩ := hend i hi
      exact reaches_sound wp hpos hs
    · cases hend
  · intro pre a b post hsplit
    rw [hsplit] at hjoin
    have hj := joins_sound pre a b post hjoin
    simp only [joinOk, Bool.and_eq_true, beq_iff_eq, List.all_eq_true, List.mem_range] at hj
    exact ⟨hj.1, fun i hi => joinPath_sound (hj.2 i hi)⟩
  · simpa only [List.all_eq_true, Bool.and_eq_true, beq_iff_eq] using hbeat

end Proofs
end Choreo
