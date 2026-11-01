import Choreo.Sound
/-!
# Whole routines

`RoutineSpec` is the top-level statement: over the *global* timeline, at every instant `T`,
no two dancers are closer than `dmin`, everyone is on stage, and consecutive phases meet
with the same position and velocity.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

/-! ## Executable checks that span several phases -/

def Rect.within (r o : Rect) : Bool :=
  decide (o.xmin ≤ r.xmin) && decide (r.xmax ≤ o.xmax) &&
  decide (o.ymin ≤ r.ymin) && decide (r.ymax ≤ o.ymax)

/-- Do the end of `a` and the start of `b` agree in position and in real-time velocity? -/
def joinPath (a b : Path) (da db : Int) : Bool :=
  a.wf && b.wf &&
  (Poly.last a.X * Poly.first b.W == Poly.first b.X * Poly.last a.W) &&
  (Poly.last a.Y * Poly.first b.W == Poly.first b.Y * Poly.last a.W) &&
  (Poly.last (vNum a.X a.W) * (Poly.first b.W * Poly.first b.W) * db
    == Poly.first (vNum b.X b.W) * (Poly.last a.W * Poly.last a.W) * da) &&
  (Poly.last (vNum a.Y a.W) * (Poly.first b.W * Poly.first b.W) * db
    == Poly.first (vNum b.Y b.W) * (Poly.last a.W * Poly.last a.W) * da)

def Phase.ticks (ph : Phase) : Int := (ph.t1 : Int) - (ph.t0 : Int)

def joinOk (c : Config) (p q : Phase) : Bool :=
  (p.t1 == q.t0) && (List.range c.n).all fun i =>
    joinPath (p.path i) (q.path i) p.ticks q.ticks

def joins (c : Config) : List Phase → Bool
  | [] => true
  | [_] => true
  | p :: q :: r => joinOk c p q && joins c (q :: r)

/-- Consecutive phases tile `[cur, tot]` in order, with no gaps. -/
def chainFrom : Nat → List Phase → Nat → Bool
  | cur, [], tot => cur == tot
  | cur, p :: ps, tot => (p.t0 == cur) && decide (p.t0 < p.t1) && chainFrom p.t1 ps tot

def phaseMeta (c : Config) (ph : Phase) : Bool :=
  (ph.t0 % c.ticksPerBeat == 0) && (ph.t1 % c.ticksPerBeat == 0) && ph.bounds.within c.stage

/-- Everything about a routine except the per-phase checks, which are proved separately so
    that editing one phase only re-proves that phase. -/
def Routine.checkGlobal (r : Routine) : Bool :=
  r.cfg.wf && !r.phases.isEmpty && chainFrom 0 r.phases r.cfg.total && joins r.cfg r.phases &&
  r.phases.all (phaseMeta r.cfg) &&
  (r.cfg.total * 60 * r.cfg.bpmDen == r.cfg.seconds * r.cfg.bpmNum * r.cfg.ticksPerBeat)

/-- Proofs that every phase passed `Phase.check`. -/
def AllChecked (c : Config) : List Phase → Prop
  | [] => True
  | p :: ps => Phase.check c p = true ∧ AllChecked c ps

/-! ## The top-level specification -/

section Spec
variable (K : Type) [Field K] [LE K] [LT K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- What a verified routine guarantees. -/
structure RoutineSpec (r : Routine) : Prop where
  /-- Every phase meets `PhaseSpec`. -/
  phases : ∀ ph, ph ∈ r.phases → PhaseSpec K r.cfg ph
  /-- `∀ T, ∀ i ≠ j, dist(pᵢ(T), pⱼ(T)) ≥ dmin`, over the whole timeline. -/
  noCollision : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) →
    ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T ∧ ∀ i j, i < r.cfg.n → j < r.cfg.n → i ≠ j →
      ((r.cfg.dmin : Int) : K) ^ 2 ≤ dist2 (ph.path i) (ph.path j) (ph.localTime T)
  /-- `∀ T, pᵢ(T) ∈ StageBounds`, over the whole timeline. -/
  onStage : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) →
    ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T ∧ ∀ i, i < r.cfg.n →
      ((r.cfg.stage.xmin : Int) : K) ≤ (ph.path i).x (ph.localTime T) ∧
      (ph.path i).x (ph.localTime T) ≤ ((r.cfg.stage.xmax : Int) : K) ∧
      ((r.cfg.stage.ymin : Int) : K) ≤ (ph.path i).y (ph.localTime T) ∧
      (ph.path i).y (ph.localTime T) ≤ ((r.cfg.stage.ymax : Int) : K)
  /-- **Continuity.** `p₁(t_end) = p₂(t_start)`, and velocities agree, at every join. -/
  continuous : ∀ pre a b post, r.phases = pre ++ a :: b :: post →
    a.t1 = b.t0 ∧ ∀ i, i < r.cfg.n →
      (a.path i).x (1 : K) = (b.path i).x (0 : K) ∧
      (a.path i).y (1 : K) = (b.path i).y (0 : K) ∧
      (a.path i).vx (1 : K) * ((b.ticks : Int) : K) = (b.path i).vx (0 : K) * ((a.ticks : Int) : K) ∧
      (a.path i).vy (1 : K) * ((b.ticks : Int) : K) = (b.path i).vy (0 : K) * ((a.ticks : Int) : K)
  /-- **Music.** Every phase starts and ends exactly on a beat. -/
  onBeat : ∀ ph, ph ∈ r.phases →
    ph.t0 % r.cfg.ticksPerBeat = 0 ∧ ph.t1 % r.cfg.ticksPerBeat = 0
  /-- **Length.** The routine lasts exactly the requested number of seconds. -/
  duration : r.cfg.total * 60 * r.cfg.bpmDen = r.cfg.seconds * r.cfg.bpmNum * r.cfg.ticksPerBeat

end Spec

/-! ## Proofs -/

section Proofs
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem localTime_mem {ph : Phase} {T : K} (hlt : ph.t0 < ph.t1) (h : Phase.Active ph T) :
    0 ≤ ph.localTime T ∧ ph.localTime T ≤ 1 := by
  obtain ⟨h0, h1⟩ := h
  have hD : (0 : K) < (((ph.t1 : Int) - (ph.t0 : Int) : Int) : K) :=
    OrderedRing.pos_intCast_of_pos _ (by omega)
  rw [Ring.intCast_sub] at hD
  have hne : ((ph.t1 : Int) : K) - ((ph.t0 : Int) : K) ≠ 0 := by grind
  simp only [Phase.localTime, Ring.intCast_sub]
  constructor
  · exact div_nonneg' (by grind) hD
  · apply div_le_of_le_mul hD
    grind

theorem chain_covers {T : K} : ∀ (ps : List Phase) (cur tot : Nat),
    ps ≠ [] → chainFrom cur ps tot = true →
    ((cur : Int) : K) ≤ T → T ≤ ((tot : Int) : K) →
    ∃ ph, ph ∈ ps ∧ Phase.Active ph T := by
  intro ps
  induction ps with
  | nil => intro _ _ h; contradiction
  | cons p ps ih =>
    intro cur tot _ hc hl hu
    simp only [chainFrom, Bool.and_eq_true, beq_iff_eq, decide_eq_true_eq] at hc
    obtain ⟨⟨e, _⟩, hr⟩ := hc
    cases ps with
    | nil =>
      simp only [chainFrom, beq_iff_eq] at hr
      exact ⟨p, by simp, by rw [e]; exact hl, by rw [hr]; exact hu⟩
    | cons q qs =>
      cases IsLinearOrder.le_total T ((p.t1 : Int) : K) with
      | inl hle => exact ⟨p, by simp, by rw [e]; exact hl, hle⟩
      | inr hge =>
        obtain ⟨ph, hm, ha⟩ := ih p.t1 tot (by simp) hr hge hu
        exact ⟨ph, List.mem_cons_of_mem _ hm, ha⟩

theorem chain_lt : ∀ (ps : List Phase) (cur tot : Nat), chainFrom cur ps tot = true →
    ∀ ph, ph ∈ ps → ph.t0 < ph.t1 := by
  intro ps
  induction ps with
  | nil => intro _ _ _ _ h; cases h
  | cons p ps ih =>
    intro cur tot hc ph hm
    simp only [chainFrom, Bool.and_eq_true, beq_iff_eq, decide_eq_true_eq] at hc
    cases hm with
    | head => exact hc.1.2
    | tail _ hm => exact ih _ _ hc.2 ph hm

theorem allChecked_mem : ∀ {ps : List Phase} {c : Config}, AllChecked c ps → ∀ ph, ph ∈ ps →
    Phase.check c ph = true := by
  intro ps
  induction ps with
  | nil => intro _ _ _ h; cases h
  | cons p ps ih =>
    intro c ha ph hm
    cases hm with
    | head => exact ha.1
    | tail _ hm => exact ih ha.2 ph hm

theorem vx_at_one {p : Path} (hp : p.wf = true) :
    p.vx (1 : K) = (Poly.last (vNum p.X p.W) : K) / ((Poly.last p.W : K)) ^ 2 := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec hp
  have v := vNum_spec (K := K) a3.symm a1 (1 - 1) 1
  have e : (1 : K) - 1 = 0 := by grind
  rw [e] at v
  simp only [Path.vx, e]
  rw [← v.2]
  simp only [ev_at_one]

theorem vy_at_one {p : Path} (hp : p.wf = true) :
    p.vy (1 : K) = (Poly.last (vNum p.Y p.W) : K) / ((Poly.last p.W : K)) ^ 2 := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec hp
  have v := vNum_spec (K := K) (N := p.Y) (W := p.W) (by omega) (by omega) (1 - 1) 1
  have e : (1 : K) - 1 = 0 := by grind
  rw [e] at v
  simp only [Path.vy, e]
  rw [← v.2]
  simp only [ev_at_one]

theorem vx_at_zero {p : Path} (hp : p.wf = true) :
    p.vx (0 : K) = (Poly.first (vNum p.X p.W) : K) / ((Poly.first p.W : K)) ^ 2 := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec hp
  have v := vNum_spec (K := K) a3.symm a1 (1 - 0) 0
  have e : (1 : K) - 0 = 1 := by grind
  rw [e] at v
  simp only [Path.vx, e]
  rw [← v.2]
  simp only [ev_at_zero]

theorem vy_at_zero {p : Path} (hp : p.wf = true) :
    p.vy (0 : K) = (Poly.first (vNum p.Y p.W) : K) / ((Poly.first p.W : K)) ^ 2 := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec hp
  have v := vNum_spec (K := K) (N := p.Y) (W := p.W) (by omega) (by omega) (1 - 0) 0
  have e : (1 : K) - 0 = 1 := by grind
  rw [e] at v
  simp only [Path.vy, e]
  rw [← v.2]
  simp only [ev_at_zero]

theorem vel_join {V U wb wa da db : Int} (hwa : (0 : K) < wa) (hwb : (0 : K) < wb)
    (h : V * (wb * wb) * db = U * (wa * wa) * da) :
    ((V : K) / (wa : K) ^ 2) * (db : K) = ((U : K) / (wb : K) ^ 2) * (da : K) := by
  have ha : (wa : K) ≠ 0 := by grind
  have hb : (wb : K) ≠ 0 := by grind
  have e : (V : K) * ((wb : K) * wb) * db = (U : K) * ((wa : K) * wa) * da := by
    have := congrArg (fun z : Int => (z : K)) h
    simpa only [Ring.intCast_mul] using this
  grind

theorem joinPath_sound {a b : Path} {da db : Int} (h : joinPath a b da db = true) :
    a.x (1 : K) = b.x (0 : K) ∧ a.y (1 : K) = b.y (0 : K) ∧
    a.vx (1 : K) * (db : K) = b.vx (0 : K) * (da : K) ∧
    a.vy (1 : K) * (db : K) = b.vy (0 : K) * (da : K) := by
  simp only [joinPath, Bool.and_eq_true, beq_iff_eq] at h
  obtain ⟨⟨⟨⟨⟨wa, wb⟩, ex⟩, ey⟩, vx⟩, vy⟩ := h
  have pa := last_W_pos (K := K) wa
  have pb := first_W_pos (K := K) wb
  have na : (Poly.last a.W : K) ≠ 0 := by grind
  have nb : (Poly.first b.W : K) ≠ 0 := by grind
  refine ⟨?_, ?_, ?_, ?_⟩
  · rw [x_at_one, x_at_zero]; exact frac_eq na nb (cast_mul_eq ex)
  · rw [y_at_one, y_at_zero]; exact frac_eq na nb (cast_mul_eq ey)
  · rw [vx_at_one wa, vx_at_zero wb]; exact vel_join pa pb vx
  · rw [vy_at_one wa, vy_at_zero wb]; exact vel_join pa pb vy

theorem joins_tail {c : Config} (x : Phase) (l : List Phase) (h : joins c (x :: l) = true) :
    joins c l = true := by
  cases l with
  | nil => rfl
  | cons y ys =>
    simp only [joins, Bool.and_eq_true] at h
    exact h.2

theorem joins_sound {c : Config} : ∀ (pre : List Phase) (a b : Phase) (post : List Phase),
    joins c (pre ++ a :: b :: post) = true → joinOk c a b = true := by
  intro pre
  induction pre with
  | nil =>
    intro a b post h
    simp only [List.nil_append, joins, Bool.and_eq_true] at h
    exact h.1
  | cons x xs ih =>
    intro a b post h
    exact ih a b post (joins_tail x _ h)

/-- **Main theorem.** A routine whose global checks pass, and whose phases have all passed
    `Phase.check`, satisfies `RoutineSpec` in every ordered field. -/
theorem Routine.sound {r : Routine} (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases)
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    RoutineSpec K r := by
  simp only [Routine.checkGlobal, Bool.and_eq_true, Bool.not_eq_true', List.isEmpty_eq_false_iff,
    List.all_eq_true, beq_iff_eq] at hg
  obtain ⟨⟨⟨⟨⟨hwf, hne⟩, hchain⟩, hjoin⟩, hmeta⟩, hdur⟩ := hg
  have hspec : ∀ ph, ph ∈ r.phases → PhaseSpec K r.cfg ph :=
    fun ph hm => Phase.sound (allChecked_mem hp ph hm) K
  have hlt := chain_lt r.phases 0 r.cfg.total hchain
  have cover : ∀ T : K, 0 ≤ T → T ≤ ((r.cfg.total : Int) : K) →
      ∃ ph, ph ∈ r.phases ∧ Phase.Active ph T := by
    intro T h0 h1
    refine chain_covers r.phases 0 r.cfg.total hne hchain ?_ h1
    have : (((0 : Nat) : Int) : K) = 0 := by
      simp only [Int.natCast_zero, Ring.intCast_zero]
    rw [this]; exact h0
  refine ⟨hspec, ?_, ?_, ?_, ?_, hdur⟩
  · intro T h0 h1
    obtain ⟨ph, hm, ha⟩ := cover T h0 h1
    obtain ⟨l0, l1⟩ := localTime_mem (hlt ph hm) ha
    exact ⟨ph, hm, ha, fun i j hi hj hij => (hspec ph hm).noCollision i j hi hj hij _ l0 l1⟩
  · intro T h0 h1
    obtain ⟨ph, hm, ha⟩ := cover T h0 h1
    obtain ⟨l0, l1⟩ := localTime_mem (hlt ph hm) ha
    refine ⟨ph, hm, ha, fun i hi => ?_⟩
    obtain ⟨a, b, c, d⟩ := (hspec ph hm).onStage i hi _ l0 l1
    have hmeta' := hmeta ph hm
    simp only [phaseMeta, Bool.and_eq_true, beq_iff_eq, Rect.within, decide_eq_true_eq] at hmeta'
    obtain ⟨_, ⟨⟨⟨w1, w2⟩, w3⟩, w4⟩⟩ := hmeta'
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
  · intro ph hm
    have hmeta' := hmeta ph hm
    simp only [phaseMeta, Bool.and_eq_true, beq_iff_eq] at hmeta'
    exact hmeta'.1

end Proofs
end Choreo
