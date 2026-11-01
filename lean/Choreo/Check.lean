import Choreo.Model
/-!
# The checker, and its soundness theorem

`Phase.check` is an executable Boolean test on exact integers. `Phase.sound` proves that
when it returns `true` the semantic specification `PhaseSpec` holds in every ordered field.
Generated routine files then only need the kernel to evaluate `Phase.check`.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false

namespace Choreo

/-! ## Polynomials the checker computes -/

def Path.wf (p : Path) : Bool :=
  decide (2 ≤ p.X.length) && (p.Y.length == p.X.length) && (p.W.length == p.X.length) &&
    Poly.allPos p.W

/-- `xₐ - x_b` over the common denominator `wwPoly a b`. Two paths with the same denominator
    need no multiplying, which keeps the degree (and the kernel's work) low. -/
def dxPoly (a b : Path) : Poly :=
  if a.W == b.W then Poly.sub a.X b.X else Poly.sub (Poly.mul a.X b.W) (Poly.mul b.X a.W)
def dyPoly (a b : Path) : Poly :=
  if a.W == b.W then Poly.sub a.Y b.Y else Poly.sub (Poly.mul a.Y b.W) (Poly.mul b.Y a.W)
def wwPoly (a b : Path) : Poly := if a.W == b.W then a.W else Poly.mul a.W b.W

/-- `(Δx)² + (Δy)² - d²·(wₐ·w_b)²`, whose sign decides clearance. -/
def clearPoly (a b : Path) (d : Int) : Poly :=
  Poly.sub
    (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b)) (Poly.mul (dyPoly a b) (dyPoly a b)))
    (Poly.scale (d * d) (Poly.mul (wwPoly a b) (wwPoly a b)))

def sepPoly (a b : Path) (d : Int) (xAxis positive : Bool) : Poly :=
  let D := if xAxis then dxPoly a b else dyPoly a b
  Poly.sub (if positive then D else Poly.neg D) (Poly.scale d (wwPoly a b))

def rigidPoly (a b : Path) (num den : Int) : Poly :=
  Poly.sub
    (Poly.scale den
      (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b)) (Poly.mul (dyPoly a b) (dyPoly a b))))
    (Poly.scale num (Poly.mul (wwPoly a b) (wwPoly a b)))

def Cert.check (ct : Cert) (a b : Path) (d : Int) : Bool :=
  match ct with
  | .sep xAxis positive depth => Poly.bern depth (sepPoly a b d xAxis positive)
  | .bern depth => Poly.bern depth (clearPoly a b d)
  | .offset cx cy =>
    (a.W == b.W) && (Poly.sub a.X b.X == Poly.scale cx a.W) &&
      (Poly.sub a.Y b.Y == Poly.scale cy a.W) && decide (d * d ≤ cx * cx + cy * cy)
  | .fixed num => Poly.allZero (rigidPoly a b num 1) && decide (d * d ≤ num)

def lowerPoly (N W : Poly) (c : Int) : Poly := Poly.sub N (Poly.scale c W)
def upperPoly (N W : Poly) (c : Int) : Poly := Poly.sub (Poly.scale c W) N

/-- How many times the stage and speed checks may split the time interval. Splitting only
    happens when the plain coefficient test fails, so a larger limit costs nothing on easy paths. -/
def splitLimit : Nat := 5

def Path.inRect (p : Path) (r : Rect) : Bool :=
  Poly.bern splitLimit (lowerPoly p.X p.W r.xmin) && Poly.bern splitLimit (upperPoly p.X p.W r.xmax) &&
  Poly.bern splitLimit (lowerPoly p.Y p.W r.ymin) && Poly.bern splitLimit (upperPoly p.Y p.W r.ymax)

def vNum (N W : Poly) : Poly :=
  Poly.sub (Poly.mul (Poly.deriv N) W) (Poly.mul N (Poly.deriv W))

/-- `num·W⁴ - den·(Vx² + Vy²)·(s+t)²`, non-negative exactly when the speed bound holds. -/
def speedPolyFull (p : Path) (num den : Int) : Poly :=
  let vx := vNum p.X p.W
  let vy := vNum p.Y p.W
  let w2 := Poly.mul p.W p.W
  Poly.sub
    (Poly.scale num (Poly.mul w2 w2))
    (Poly.scale den (Poly.mul [1, 2, 1] (Poly.add (Poly.mul vx vx) (Poly.mul vy vy))))

/-- When the denominator is constant in time the quotient rule drops a term:
    `num·W² - den·(X′² + Y′²)·(s+t)²`. -/
def speedPolyConst (p : Path) (num den : Int) : Poly :=
  let vx := Poly.deriv p.X
  let vy := Poly.deriv p.Y
  Poly.sub
    (Poly.scale num (Poly.mul p.W p.W))
    (Poly.scale den (Poly.mul [1, 2, 1] (Poly.add (Poly.mul vx vx) (Poly.mul vy vy))))

def speedPoly (p : Path) (num den : Int) : Poly :=
  if Poly.allZero (Poly.deriv p.W) then speedPolyConst p num den else speedPolyFull p num den

def orbitPoly (p : Path) (cx cy r2 : Int) : Poly :=
  let u := Poly.sub p.X (Poly.scale cx p.W)
  let v := Poly.sub p.Y (Poly.scale cy p.W)
  Poly.sub (Poly.add (Poly.mul u u) (Poly.mul v v)) (Poly.scale r2 (Poly.mul p.W p.W))

/-- Coefficient at `t = 0`. -/
def Poly.first : Poly → Int
  | [] => 0
  | a :: _ => a

/-- Coefficient at `t = 1`. -/
def Poly.last : Poly → Int
  | [] => 0
  | [a] => a
  | _ :: b :: bs => Poly.last (b :: bs)

def Path.reachesSlot (p : Path) (s : Slot) : Bool :=
  (Poly.last p.X * s.w == s.x * Poly.last p.W) && (Poly.last p.Y * s.w == s.y * Poly.last p.W)

/-! ## The phase checker -/

def Config.wf (c : Config) : Bool :=
  decide (0 ≤ c.dmin) && decide (0 < c.bpmNum) && decide (0 < c.bpmDen) &&
    decide (0 < c.ticksPerBeat)

def Phase.pairCert (ph : Phase) (i j : Nat) : Cert :=
  ph.certs.getD (i * (i - 1) / 2 + j) (.bern 4)

def Phase.checkClear (c : Config) (ph : Phase) : Bool :=
  (List.range c.n).all fun i =>
    (List.range i).all fun j => (ph.pairCert i j).check (ph.path i) (ph.path j) c.dmin

def Phase.checkPaths (c : Config) (ph : Phase) : Bool :=
  (List.range c.n).all fun i =>
    (ph.path i).wf && (ph.path i).inRect ph.bounds &&
    Poly.bern splitLimit (speedPoly (ph.path i)
      (c.vmax * c.vmax * (c.durNum ph * c.durNum ph)) (c.durDen * c.durDen))

def Phase.checkInvariants (ph : Phase) : Bool :=
  ph.rigid.all (fun r => Poly.allZero (rigidPoly (ph.path r.i) (ph.path r.j) r.num r.den) &&
      (ph.path r.i).wf && (ph.path r.j).wf && decide (r.den ≠ 0)) &&
  ph.orbits.all (fun o => Poly.allZero (orbitPoly (ph.path o.i) o.cx o.cy o.r2) &&
      (ph.path o.i).wf)

def Phase.checkTarget (c : Config) (ph : Phase) : Bool :=
  match ph.target with
  | none => true
  | some tg =>
    tg.formation.wellFormed && (tg.formation.slots.length == c.n) &&
    tg.assign.isPerm (List.range c.n) &&
    (List.range c.n).all fun i =>
      (ph.path i).wf &&
      decide (0 < (tg.formation.slots.getD (tg.assign.getD i 0) ⟨0, 0, 1⟩).w) &&
      (ph.path i).reachesSlot (tg.formation.slots.getD (tg.assign.getD i 0) ⟨0, 0, 1⟩)

/-- The whole per-phase test. -/
def Phase.check (c : Config) (ph : Phase) : Bool :=
  c.wf && Phase.checkPaths c ph && Phase.checkClear c ph && Phase.checkInvariants ph &&
    Phase.checkTarget c ph

/-! ## Algebra over the field -/

section Algebra
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem inv_pos' {w : K} (h : 0 < w) : 0 < w⁻¹ := by
  have hne : w ≠ 0 := by grind
  have h1 : w * w⁻¹ = 1 := Field.mul_inv_cancel hne
  cases IsLinearOrder.le_total (0 : K) w⁻¹ with
  | inl hle =>
    by_cases hz : w⁻¹ = 0
    · grind
    · grind
  | inr hle =>
    have := OrderedRing.mul_nonpos_of_nonneg_of_nonpos (Std.le_of_lt h) hle
    have h01 : (0 : K) < 1 := OrderedRing.zero_lt_one
    grind

theorem div_nonneg' {a w : K} (ha : 0 ≤ a) (hw : 0 < w) : 0 ≤ a / w := by
  rw [Field.div_eq_mul_inv]
  exact OrderedRing.mul_nonneg ha (Std.le_of_lt (inv_pos' hw))

theorem le_div_of_mul_le {c a w : K} (hw : 0 < w) (h : 0 ≤ a - c * w) : c ≤ a / w := by
  have hne : w ≠ 0 := by grind
  have e : a / w - c = (a - c * w) / w := by grind
  have := div_nonneg' h hw
  grind

theorem div_le_of_le_mul {c a w : K} (hw : 0 < w) (h : 0 ≤ c * w - a) : a / w ≤ c := by
  have hne : w ≠ 0 := by grind
  have e : c - a / w = (c * w - a) / w := by grind
  have := div_nonneg' h hw
  grind

theorem sq_le_sq_of_le {d u : K} (hd : 0 ≤ d) (h : d ≤ u) : d ^ 2 ≤ u ^ 2 := by
  have h1 : 0 ≤ u - d := by grind
  have h2 : 0 ≤ u + d := by grind
  have := OrderedRing.mul_nonneg h1 h2
  grind

end Algebra

/-! ## Facts about the computed polynomials -/

section Polys
variable {K : Type} [Field K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem Path.wf_spec {p : Path} (h : p.wf = true) :
    2 ≤ p.X.length ∧ p.Y.length = p.X.length ∧ p.W.length = p.X.length ∧
      Poly.allPos p.W = true := by
  simp only [Path.wf, Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq] at h
  exact ⟨h.1.1.1, h.1.1.2, h.1.2, h.2⟩

theorem ne_nil_of_two_le {p : Poly} (h : 2 ≤ p.length) : p ≠ [] := by
  intro e; simp [e] at h

theorem dx_same {a b : Path} (h : a.W = b.W) : dxPoly a b = Poly.sub a.X b.X := by
  simp [dxPoly, h]
theorem dy_same {a b : Path} (h : a.W = b.W) : dyPoly a b = Poly.sub a.Y b.Y := by
  simp [dyPoly, h]
theorem ww_same {a b : Path} (h : a.W = b.W) : wwPoly a b = a.W := by
  simp [wwPoly, h]
theorem dx_diff {a b : Path} (h : a.W ≠ b.W) :
    dxPoly a b = Poly.sub (Poly.mul a.X b.W) (Poly.mul b.X a.W) := by
  simp [dxPoly, h]
theorem dy_diff {a b : Path} (h : a.W ≠ b.W) :
    dyPoly a b = Poly.sub (Poly.mul a.Y b.W) (Poly.mul b.Y a.W) := by
  simp [dyPoly, h]
theorem ww_diff {a b : Path} (h : a.W ≠ b.W) : wwPoly a b = Poly.mul a.W b.W := by
  simp [wwPoly, h]

theorem length_sub (p q : Poly) (h : p.length = q.length) : (Poly.sub p q).length = p.length := by
  simp only [Poly.sub]
  rw [length_add _ _ (by simp only [Poly.neg]; rw [length_scale]; exact h)]

theorem ne_nil_of_length {p : Poly} {n : Nat} (h : p.length = n) (hn : 0 < n) : p ≠ [] := by
  intro e; simp [e] at h; omega

theorem length_ww {a b : Path} (ha : a.wf = true) (hb : b.wf = true) :
    2 ≤ (wwPoly a b).length := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec ha
  obtain ⟨b1, b2, b3, _⟩ := Path.wf_spec hb
  by_cases h : a.W = b.W
  · rw [ww_same h]; omega
  · rw [ww_diff h, length_mul _ _ (ne_nil_of_two_le (by omega))]; omega

theorem length_dx {a b : Path} (ha : a.wf = true) (hb : b.wf = true) :
    (dxPoly a b).length = (wwPoly a b).length := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec ha
  obtain ⟨b1, b2, b3, _⟩ := Path.wf_spec hb
  by_cases h : a.W = b.W
  · rw [dx_same h, ww_same h, length_sub _ _ (by rw [← a3, ← b3, h])]; omega
  · have h1 := length_mul a.X b.W (ne_nil_of_two_le a1)
    have h2 := length_mul b.X a.W (ne_nil_of_two_le b1)
    have h3 := length_mul a.W b.W (ne_nil_of_two_le (by omega))
    rw [dx_diff h, ww_diff h, length_sub _ _ (by omega)]; omega

theorem length_dy {a b : Path} (ha : a.wf = true) (hb : b.wf = true) :
    (dyPoly a b).length = (wwPoly a b).length := by
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec ha
  obtain ⟨b1, b2, b3, _⟩ := Path.wf_spec hb
  by_cases h : a.W = b.W
  · rw [dy_same h, ww_same h, length_sub _ _ (by rw [a2, b2, ← a3, ← b3, h])]; omega
  · have h1 := length_mul a.Y b.W (ne_nil_of_length a2 (by omega))
    have h2 := length_mul b.Y a.W (ne_nil_of_length b2 (by omega))
    have h3 := length_mul a.W b.W (ne_nil_of_two_le (by omega))
    rw [dy_diff h, ww_diff h, length_sub _ _ (by omega)]; omega

theorem ww_ne_nil {a b : Path} (ha : a.wf = true) (hb : b.wf = true) : wwPoly a b ≠ [] :=
  ne_nil_of_length rfl (by have := length_ww ha hb; omega)

/-- Lengths and value of `(Δx)² + (Δy)²`. -/
theorem sumSquares {a b : Path} (ha : a.wf = true) (hb : b.wf = true) (s t : K) :
    (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b)) (Poly.mul (dyPoly a b) (dyPoly a b))).length
      = (Poly.mul (wwPoly a b) (wwPoly a b)).length ∧
    ev (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b)) (Poly.mul (dyPoly a b) (dyPoly a b))) s t
      = ev (dxPoly a b) s t * ev (dxPoly a b) s t + ev (dyPoly a b) s t * ev (dyPoly a b) s t := by
  have lx := length_dx ha hb
  have ly := length_dy ha hb
  have lw := length_ww ha hb
  have nx : dxPoly a b ≠ [] := ne_nil_of_length lx (by omega)
  have ny : dyPoly a b ≠ [] := ne_nil_of_length ly (by omega)
  have nw : wwPoly a b ≠ [] := ww_ne_nil ha hb
  have e1 : (Poly.mul (dxPoly a b) (dxPoly a b)).length
      = (Poly.mul (dyPoly a b) (dyPoly a b)).length := by
    rw [length_mul _ _ nx, length_mul _ _ ny]; omega
  constructor
  · rw [length_add _ _ e1, length_mul _ _ nx, length_mul _ _ nw]; omega
  · rw [ev_add _ _ e1, ev_mul _ _ _ _ nx, ev_mul _ _ _ _ ny]

theorem ev_ww {a b : Path} (ha : a.wf = true) (hb : b.wf = true) (s t : K) :
    ev (Poly.mul (wwPoly a b) (wwPoly a b)) s t = ev (wwPoly a b) s t * ev (wwPoly a b) s t :=
  ev_mul _ _ _ _ (ww_ne_nil ha hb)

end Polys
end Choreo
