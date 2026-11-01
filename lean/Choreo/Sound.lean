import Choreo.Check
/-!
# Soundness: `Phase.check c ph = true` implies `PhaseSpec K c ph` for every ordered field `K`.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

section
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem one_sub_nonneg {t : K} (h : t ≤ 1) : 0 ≤ 1 - t := by grind

theorem W_pos {p : Path} (hp : p.wf = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    0 < ev p.W (1 - t) t := by
  obtain ⟨a1, a2, a3, a4⟩ := Path.wf_spec hp
  have hne : p.W ≠ [] := ne_nil_of_length a3 (by omega)
  refine ev_pos hne a4 (one_sub_nonneg h1) h0 ?_
  have h01 : (0 : K) < 1 := OrderedRing.zero_lt_one
  by_cases ht : 0 < t
  · exact Or.inr ht
  · left
    have : t = 0 := by grind
    grind

theorem sub_div_eq {xa wa xb wb : K} (ha : wa ≠ 0) (hb : wb ≠ 0) :
    xa / wa - xb / wb = (xa * wb - xb * wa) / (wa * wb) := by
  grind

theorem clear_alg {Dx Dy v d : K} (hv : 0 < v)
    (h : 0 ≤ (Dx * Dx + Dy * Dy) - d * d * (v * v)) :
    d ^ 2 ≤ (Dx / v) ^ 2 + (Dy / v) ^ 2 := by
  have hne : v ≠ 0 := by grind
  have hv2 : 0 < v * v := OrderedRing.mul_pos hv hv
  have hd := div_nonneg' h hv2
  have e : ((Dx * Dx + Dy * Dy) - d * d * (v * v)) / (v * v)
      = (Dx / v) ^ 2 + (Dy / v) ^ 2 - d ^ 2 := by
    grind
  grind

theorem sq_add_nonneg (u w : K) : u ^ 2 ≤ u ^ 2 + w ^ 2 := by
  have := OrderedRing.sq_nonneg (a := w)
  grind

theorem neg_div_sq (a v : K) : ((-a) / v) ^ 2 = (a / v) ^ 2 := by grind

theorem ww_pos {a b : Path} (ha : a.wf = true) (hb : b.wf = true) {t : K}
    (h0 : 0 ≤ t) (h1 : t ≤ 1) : 0 < ev (wwPoly a b) (1 - t) t := by
  by_cases h : a.W = b.W
  · rw [ww_same h]; exact W_pos ha h0 h1
  · obtain ⟨_, _, a3, _⟩ := Path.wf_spec ha
    obtain ⟨b1, _, b3, _⟩ := Path.wf_spec hb
    rw [ww_diff h, ev_mul _ _ _ _ (ne_nil_of_two_le (by omega))]
    exact OrderedRing.mul_pos (W_pos ha h0 h1) (W_pos hb h0 h1)

theorem dist2_eq {a b : Path} (ha : a.wf = true) (hb : b.wf = true) {t : K}
    (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    a.x t - b.x t = ev (dxPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t ∧
    a.y t - b.y t = ev (dyPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t := by
  have wa := W_pos ha h0 h1
  have wb := W_pos hb h0 h1
  have na : ev a.W (1 - t) t ≠ 0 := by grind
  have nb : ev b.W (1 - t) t ≠ 0 := by grind
  obtain ⟨a1, a2, a3, _⟩ := Path.wf_spec ha
  obtain ⟨b1, b2, b3, _⟩ := Path.wf_spec hb
  by_cases h : a.W = b.W
  · rw [dx_same h, dy_same h, ww_same h, ev_sub _ _ (by rw [← a3, ← b3, h]),
      ev_sub _ _ (by rw [a2, b2, ← a3, ← b3, h])]
    simp only [Path.x, Path.y, ← h]
    constructor <;> grind
  · have nbw : b.W ≠ [] := ne_nil_of_two_le (by omega)
    have l1 := length_mul a.X b.W (ne_nil_of_two_le a1)
    have l2 := length_mul b.X a.W (ne_nil_of_two_le b1)
    have l3 := length_mul a.Y b.W (ne_nil_of_length a2 (by omega))
    have l4 := length_mul b.Y a.W (ne_nil_of_length b2 (by omega))
    rw [dx_diff h, dy_diff h, ww_diff h, ev_sub _ _ (by omega), ev_sub _ _ (by omega),
      ev_mul _ _ _ _ nbw, ev_mul _ _ _ _ nbw, ev_mul _ _ _ _ (ne_nil_of_two_le (by omega)),
      ev_mul _ _ _ _ (ne_nil_of_two_le (by omega)), ev_mul _ _ _ _ (ne_nil_of_two_le (by omega))]
    simp only [Path.x, Path.y]
    exact ⟨sub_div_eq na nb, sub_div_eq na nb⟩

theorem clearPoly_ev {a b : Path} (ha : a.wf = true) (hb : b.wf = true) (d : Int) (s t : K) :
    (clearPoly a b d) ≠ [] ∧
    ev (clearPoly a b d) s t =
      (ev (dxPoly a b) s t * ev (dxPoly a b) s t + ev (dyPoly a b) s t * ev (dyPoly a b) s t)
        - (d : K) * d * (ev (wwPoly a b) s t * ev (wwPoly a b) s t) := by
  have ⟨l, e⟩ := sumSquares ha hb s t
  have hlen : (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b)) (Poly.mul (dyPoly a b) (dyPoly a b))).length
      = (Poly.scale (d * d) (Poly.mul (wwPoly a b) (wwPoly a b))).length := by
    rw [length_scale]; exact l
  have lw := length_ww ha hb
  have nw : wwPoly a b ≠ [] := ww_ne_nil ha hb
  constructor
  · intro hc
    have hl2 : (clearPoly a b d).length = (Poly.mul (wwPoly a b) (wwPoly a b)).length := by
      simp only [clearPoly, Poly.sub]
      rw [length_add _ _ (by simp only [Poly.neg, length_scale]; exact l), l]
    rw [hc, length_mul _ _ nw] at hl2
    simp only [List.length_nil] at hl2
    omega
  · simp only [clearPoly]
    rw [ev_sub _ _ hlen, e, ev_scale, ev_ww ha hb s t, Ring.intCast_mul]

theorem sepPoly_ev {a b : Path} (ha : a.wf = true) (hb : b.wf = true) (d : Int) (xAxis pos : Bool)
    (s t : K) :
    sepPoly a b d xAxis pos ≠ [] ∧
    ev (sepPoly a b d xAxis pos) s t =
      (if pos then (if xAxis then ev (dxPoly a b) s t else ev (dyPoly a b) s t)
       else -(if xAxis then ev (dxPoly a b) s t else ev (dyPoly a b) s t))
        - (d : K) * ev (wwPoly a b) s t := by
  have lw := length_ww ha hb
  have lx := length_dx ha hb
  have ly := length_dy ha hb
  have common : ∀ D : Poly, D.length = (wwPoly a b).length →
      (Poly.sub D (Poly.scale d (wwPoly a b))) ≠ [] ∧
      ev (Poly.sub D (Poly.scale d (wwPoly a b))) s t = ev D s t - (d : K) * ev (wwPoly a b) s t := by
    intro D hD
    have hl : D.length = (Poly.scale d (wwPoly a b)).length := by rw [length_scale]; exact hD
    constructor
    · intro hc
      have : (Poly.sub D (Poly.scale d (wwPoly a b))).length = D.length := length_sub _ _ hl
      rw [hc] at this
      simp only [List.length_nil] at this
      omega
    · rw [ev_sub _ _ hl, ev_scale]
  cases xAxis <;> cases pos <;> simp only [sepPoly, ite_true, ite_false, Bool.false_eq_true, ↓reduceIte]
  · have hl : (Poly.neg (dyPoly a b)).length = (wwPoly a b).length := by
      simp only [Poly.neg]; rw [length_scale]; omega
    have := common _ hl
    exact ⟨this.1, by rw [this.2, ev_neg]⟩
  · have := common (dyPoly a b) (by omega)
    exact this
  · have hl : (Poly.neg (dxPoly a b)).length = (wwPoly a b).length := by
      simp only [Poly.neg]; rw [length_scale]; omega
    have := common _ hl
    exact ⟨this.1, by rw [this.2, ev_neg]⟩
  · have := common (dxPoly a b) (by omega)
    exact this

theorem intCast_le {a b : Int} (h : a ≤ b) : (a : K) ≤ (b : K) := by
  have := OrderedRing.nonneg_intCast_of_nonneg (R := K) (b - a) (by omega)
  rw [Ring.intCast_sub] at this
  grind

theorem intCast_lt {a b : Int} (h : a < b) : (a : K) < (b : K) := by
  have := OrderedRing.pos_intCast_of_pos (R := K) (b - a) (by omega)
  rw [Ring.intCast_sub] at this
  grind

/-- Two dancers holding a constant offset are exactly that far apart at every instant. -/
theorem offset_diff {a b : Path} (ha : a.wf = true) (hb : b.wf = true) {cx cy : Int}
    (hw : a.W = b.W) (hx : Poly.sub a.X b.X = Poly.scale cx a.W)
    (hy : Poly.sub a.Y b.Y = Poly.scale cy a.W) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    a.x t - b.x t = (cx : K) ∧ a.y t - b.y t = (cy : K) := by
  obtain ⟨ex, ey⟩ := dist2_eq ha hb h0 h1
  have wa := W_pos ha h0 h1
  have na : ev a.W (1 - t) t ≠ 0 := by grind
  rw [dx_same hw, ww_same hw, hx, ev_scale] at ex
  rw [dy_same hw, ww_same hw, hy, ev_scale] at ey
  rw [ex, ey]
  constructor <;> grind

theorem rigid_sound {a b : Path} {num den : Int} (ha : a.wf = true) (hb : b.wf = true)
    (h : Poly.allZero (rigidPoly a b num den) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (den : K) * dist2 a b t = (num : K) := by
  obtain ⟨ex, ey⟩ := dist2_eq ha hb h0 h1
  have hv := ww_pos ha hb h0 h1
  have hne : ev (wwPoly a b) (1 - t) t ≠ 0 := by grind
  have z := ev_eq_zero (K := K) h (1 - t) t
  obtain ⟨l, e⟩ := sumSquares (K := K) ha hb (1 - t) t
  have hlen : (Poly.scale den (Poly.add (Poly.mul (dxPoly a b) (dxPoly a b))
      (Poly.mul (dyPoly a b) (dyPoly a b)))).length
      = (Poly.scale num (Poly.mul (wwPoly a b) (wwPoly a b))).length := by
    rw [length_scale, length_scale]; exact l
  simp only [rigidPoly] at z
  rw [ev_sub _ _ hlen, ev_scale, ev_scale, e, ev_ww ha hb (1 - t) t] at z
  simp only [dist2, ex, ey]
  grind

/-- A clearance certificate that checks out guarantees the separation. -/
theorem Cert.sound {ct : Cert} {a b : Path} {d : Int} (hd : 0 ≤ d)
    (ha : a.wf = true) (hb : b.wf = true) (hc : ct.check a b d = true)
    {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) : (d : K) ^ 2 ≤ dist2 a b t := by
  have hs := one_sub_nonneg h1
  obtain ⟨ex, ey⟩ := dist2_eq ha hb h0 h1
  have hv := ww_pos ha hb h0 h1
  have hdK : 0 ≤ (d : K) := OrderedRing.nonneg_intCast_of_nonneg d hd
  cases ct with
  | bern depth =>
    simp only [dist2, ex, ey]
    simp only [Cert.check] at hc
    obtain ⟨hne, hev⟩ := clearPoly_ev (K := K) ha hb d (1 - t) t
    have := bern_sound hne hc hs h0
    rw [hev] at this
    exact clear_alg hv this
  | sep xAxis pos depth =>
    simp only [dist2, ex, ey]
    simp only [Cert.check] at hc
    obtain ⟨hne, hev⟩ := sepPoly_ev (K := K) ha hb d xAxis pos (1 - t) t
    have := bern_sound hne hc hs h0
    rw [hev] at this
    cases xAxis <;> cases pos <;>
      simp only [ite_true, ite_false, Bool.false_eq_true, ↓reduceIte] at this
    · have h2 := sq_le_sq_of_le hdK (le_div_of_mul_le hv this)
      have h3 := sq_add_nonneg (ev (dyPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
        (ev (dxPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
      rw [neg_div_sq] at h2
      grind
    · have h2 := sq_le_sq_of_le hdK (le_div_of_mul_le hv this)
      have h3 := sq_add_nonneg (ev (dyPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
        (ev (dxPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
      grind
    · have h2 := sq_le_sq_of_le hdK (le_div_of_mul_le hv this)
      have h3 := sq_add_nonneg (ev (dxPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
        (ev (dyPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
      rw [neg_div_sq] at h2
      grind
    · have h2 := sq_le_sq_of_le hdK (le_div_of_mul_le hv this)
      have h3 := sq_add_nonneg (ev (dxPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
        (ev (dyPoly a b) (1 - t) t / ev (wwPoly a b) (1 - t) t)
      grind
  | offset cx cy =>
    simp only [Cert.check, Bool.and_eq_true, beq_iff_eq, decide_eq_true_eq] at hc
    obtain ⟨⟨⟨hw, hx⟩, hy⟩, hle⟩ := hc
    obtain ⟨dx, dy⟩ := offset_diff (K := K) ha hb hw hx hy h0 h1
    simp only [dist2, dx, dy]
    have := intCast_le (K := K) hle
    simp only [Ring.intCast_add, Ring.intCast_mul] at this
    grind
  | fixed num =>
    simp only [Cert.check, Bool.and_eq_true, decide_eq_true_eq] at hc
    obtain ⟨hz, hle⟩ := hc
    have hr := rigid_sound (K := K) ha hb hz h0 h1
    have := intCast_le (K := K) hle
    simp only [Ring.intCast_mul, Ring.intCast_one] at this hr
    grind

theorem dist2_comm (a b : Path) (t : K) : dist2 a b t = dist2 b a t := by
  simp only [dist2]; grind

/-! ### Stage -/

theorem lower_sound {N W : Poly} {c : Int} (hl : N.length = W.length) (hne : W ≠ [])
    {d : Nat} (h : Poly.bern d (lowerPoly N W c) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1)
    (hw : 0 < ev W (1 - t) t) : (c : K) ≤ ev N (1 - t) t / ev W (1 - t) t := by
  have hl' : N.length = (Poly.scale c W).length := by rw [length_scale]; exact hl
  have hne' : lowerPoly N W c ≠ [] := by
    intro e
    have : (lowerPoly N W c).length = N.length := by
      simp only [lowerPoly, Poly.sub]
      rw [length_add _ _ (by simp only [Poly.neg]; rw [length_scale]; exact hl')]
    rw [e] at this
    cases W <;> simp_all
  have := bern_sound hne' h (one_sub_nonneg h1) h0
  simp only [lowerPoly] at this
  rw [ev_sub _ _ hl', ev_scale] at this
  exact le_div_of_mul_le hw this

theorem upper_sound {N W : Poly} {c : Int} (hl : N.length = W.length) (hne : W ≠ [])
    {d : Nat} (h : Poly.bern d (upperPoly N W c) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1)
    (hw : 0 < ev W (1 - t) t) : ev N (1 - t) t / ev W (1 - t) t ≤ (c : K) := by
  have hl' : (Poly.scale c W).length = N.length := by rw [length_scale]; exact hl.symm
  have hne' : upperPoly N W c ≠ [] := by
    intro e
    have : (upperPoly N W c).length = W.length := by
      simp only [upperPoly, Poly.sub]
      rw [length_add _ _ (by simp only [Poly.neg, length_scale]; exact hl.symm), length_scale]
    rw [e] at this
    cases W <;> simp_all
  have := bern_sound hne' h (one_sub_nonneg h1) h0
  simp only [upperPoly] at this
  rw [ev_sub _ _ hl', ev_scale] at this
  exact div_le_of_le_mul hw this

theorem inRect_sound {p : Path} {r : Rect} (hp : p.wf = true) (h : p.inRect r = true)
    {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (r.xmin : K) ≤ p.x t ∧ p.x t ≤ (r.xmax : K) ∧ (r.ymin : K) ≤ p.y t ∧ p.y t ≤ (r.ymax : K) := by
  obtain ⟨a1, a2, a3, a4⟩ := Path.wf_spec hp
  have hW := W_pos hp h0 h1
  have hne : p.W ≠ [] := ne_nil_of_length a3 (by omega)
  simp only [Path.inRect, Bool.and_eq_true] at h
  obtain ⟨⟨⟨hxl, hxu⟩, hyl⟩, hyu⟩ := h
  exact ⟨lower_sound a3.symm hne hxl h0 h1 hW, upper_sound a3.symm hne hxu h0 h1 hW,
    lower_sound (by omega) hne hyl h0 h1 hW, upper_sound (by omega) hne hyu h0 h1 hW⟩

/-! ### Speed -/

theorem length_deriv (p : Poly) (h : p ≠ []) : (Poly.deriv p).length = p.length - 1 := by
  induction p with
  | nil => contradiction
  | cons b bs ih =>
    cases bs with
    | nil => rfl
    | cons c cs =>
      have ih' := ih (by simp)
      have e1 : (c :: cs).length
          = ((-(((c :: cs).length : Nat) : Int) * b) :: Poly.zeros ((c :: cs).length - 1)).length := by
        simp only [List.length_cons, length_zeros]; omega
      have e2 : (Poly.add (c :: cs) ((-(((c :: cs).length : Nat) : Int) * b) :: Poly.zeros ((c :: cs).length - 1))).length
          = (0 :: Poly.deriv (c :: cs)).length := by
        rw [length_add _ _ e1]
        simp only [List.length_cons] at ih' ⊢
        omega
      simp only [Poly.deriv]
      rw [length_add _ _ e2, length_add _ _ e1]
      simp

theorem vNum_spec {N W : Poly} (hl : N.length = W.length) (h2 : 2 ≤ N.length) (s t : K) :
    (vNum N W).length = 2 * N.length - 2 ∧
    ev (vNum N W) s t = ev (Poly.deriv N) s t * ev W s t - ev N s t * ev (Poly.deriv W) s t := by
  have nN : N ≠ [] := ne_nil_of_two_le h2
  have nW : W ≠ [] := ne_nil_of_two_le (by omega)
  have dN := length_deriv N nN
  have dW := length_deriv W nW
  have ndN : Poly.deriv N ≠ [] := ne_nil_of_length dN (by omega)
  have ndW : Poly.deriv W ≠ [] := ne_nil_of_length dW (by omega)
  have l1 := length_mul (Poly.deriv N) W ndN
  have l2 := length_mul N (Poly.deriv W) nN
  have hl' : (Poly.mul (Poly.deriv N) W).length = (Poly.mul N (Poly.deriv W)).length := by omega
  constructor
  · simp only [vNum, Poly.sub]
    rw [length_add _ _ (by simp only [Poly.neg]; rw [length_scale]; exact hl')]
    omega
  · simp only [vNum]
    rw [ev_sub _ _ hl', ev_mul _ _ _ _ nW, ev_mul _ _ _ _ ndW]

theorem speed_alg {Vx Vy W num den : K} (hW : 0 < W)
    (h : 0 ≤ num * (W * W * (W * W)) - den * (Vx * Vx + Vy * Vy)) :
    den * ((Vx / W ^ 2) ^ 2 + (Vy / W ^ 2) ^ 2) ≤ num := by
  have hne : W ≠ 0 := by grind
  have hW2 : 0 < W * W := OrderedRing.mul_pos hW hW
  have hW4 : 0 < W * W * (W * W) := OrderedRing.mul_pos hW2 hW2
  have hd := div_nonneg' h hW4
  have e : (num * (W * W * (W * W)) - den * (Vx * Vx + Vy * Vy)) / (W * W * (W * W))
      = num - den * ((Vx / W ^ 2) ^ 2 + (Vy / W ^ 2) ^ 2) := by
    grind
  grind

theorem speedFull_sound {p : Path} {num den : Int} {d : Nat} (hp : p.wf = true)
    (h : Poly.bern d (speedPolyFull p num den) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (den : K) * p.speed2 t ≤ (num : K) := by
  obtain ⟨a1, a2, a3, a4⟩ := Path.wf_spec hp
  have hW := W_pos hp h0 h1
  have nW : p.W ≠ [] := ne_nil_of_length a3 (by omega)
  have vx := vNum_spec (K := K) a3.symm a1 (1 - t) t
  have vy := vNum_spec (K := K) (N := p.Y) (W := p.W) (by omega) (by omega) (1 - t) t
  have nvx : vNum p.X p.W ≠ [] := ne_nil_of_length vx.1 (by omega)
  have nvy : vNum p.Y p.W ≠ [] := ne_nil_of_length vy.1 (by omega)
  have lxx := length_mul _ (vNum p.X p.W) nvx
  have lyy := length_mul _ (vNum p.Y p.W) nvy
  have l12 : (Poly.mul (vNum p.X p.W) (vNum p.X p.W)).length
      = (Poly.mul (vNum p.Y p.W) (vNum p.Y p.W)).length := by
    rw [lxx, lyy, vx.1, vy.1]; omega
  have lsum := length_add _ _ l12
  have nw2 : Poly.mul p.W p.W ≠ [] := by
    apply ne_nil_of_length (length_mul p.W p.W nW); omega
  have lw2 := length_mul p.W p.W nW
  have lw4 := length_mul _ (Poly.mul p.W p.W) nw2
  have lel := length_mul [1, 2, 1] (Poly.add (Poly.mul (vNum p.X p.W) (vNum p.X p.W))
      (Poly.mul (vNum p.Y p.W) (vNum p.Y p.W))) (by simp)
  have hlen : (Poly.scale num (Poly.mul (Poly.mul p.W p.W) (Poly.mul p.W p.W))).length
      = (Poly.scale den (Poly.mul [1, 2, 1] (Poly.add (Poly.mul (vNum p.X p.W) (vNum p.X p.W))
        (Poly.mul (vNum p.Y p.W) (vNum p.Y p.W))))).length := by
    rw [length_scale, length_scale, lw4, lel, lsum, lxx, vx.1, lw2]
    simp only [List.length_cons, List.length_nil]
    omega
  have nsp : speedPolyFull p num den ≠ [] := by
    intro e
    have : (speedPolyFull p num den).length = (Poly.mul (Poly.mul p.W p.W) (Poly.mul p.W p.W)).length := by
      simp only [speedPolyFull, Poly.sub]
      rw [length_add _ _ (by simp only [Poly.neg, length_scale]; simpa only [length_scale] using hlen), length_scale]
    rw [e, lw4, lw2] at this
    simp only [List.length_nil] at this
    omega
  have hb := bern_sound nsp h (one_sub_nonneg h1) h0
  simp only [speedPolyFull] at hb
  have hne1 : Poly.add (Poly.mul (vNum p.X p.W) (vNum p.X p.W))
      (Poly.mul (vNum p.Y p.W) (vNum p.Y p.W)) ≠ [] := by
    apply ne_nil_of_length lsum
    rw [lxx, vx.1]; omega
  rw [ev_sub _ _ hlen, ev_scale, ev_scale, ev_mul _ _ _ _ nw2, ev_mul _ _ _ _ nW,
    ev_mul _ _ _ _ hne1, ev_add _ _ l12, ev_mul _ _ _ _ nvx, ev_mul _ _ _ _ nvy] at hb
  have e121 : ev [1, 2, 1] (1 - t) t = (1 : K) := by
    simp only [ev_cons, ev_nil, List.length_cons, List.length_nil, Ring.intCast_one,
      Ring.intCast_ofNat]
    grind
  rw [e121, Semiring.one_mul] at hb
  have := speed_alg hW hb
  rw [vx.2, vy.2] at this
  simpa only [Path.speed2, Path.vx, Path.vy] using this

theorem speedConst_alg {Vx Vy N M W num den : K} (hW : 0 < W)
    (h : 0 ≤ num * (W * W) - den * (Vx * Vx + Vy * Vy)) :
    den * (((Vx * W - N * 0) / W ^ 2) ^ 2 + ((Vy * W - M * 0) / W ^ 2) ^ 2) ≤ num := by
  have hne : W ≠ 0 := by grind
  have hW2 : 0 < W * W := OrderedRing.mul_pos hW hW
  have hd := div_nonneg' h hW2
  have e : (num * (W * W) - den * (Vx * Vx + Vy * Vy)) / (W * W)
      = num - den * (((Vx * W - N * 0) / W ^ 2) ^ 2 + ((Vy * W - M * 0) / W ^ 2) ^ 2) := by
    grind
  grind

theorem speedConst_sound {p : Path} {num den : Int} {d : Nat} (hp : p.wf = true)
    (hz : Poly.allZero (Poly.deriv p.W) = true)
    (h : Poly.bern d (speedPolyConst p num den) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (den : K) * p.speed2 t ≤ (num : K) := by
  obtain ⟨a1, a2, a3, a4⟩ := Path.wf_spec hp
  have hW := W_pos hp h0 h1
  have nW : p.W ≠ [] := ne_nil_of_length a3 (by omega)
  have nX : p.X ≠ [] := ne_nil_of_two_le a1
  have nY : p.Y ≠ [] := ne_nil_of_length a2 (by omega)
  have dX := length_deriv p.X nX
  have dY := length_deriv p.Y nY
  have ndX : Poly.deriv p.X ≠ [] := ne_nil_of_length dX (by omega)
  have ndY : Poly.deriv p.Y ≠ [] := ne_nil_of_length dY (by omega)
  have lxx := length_mul _ (Poly.deriv p.X) ndX
  have lyy := length_mul _ (Poly.deriv p.Y) ndY
  have l12 : (Poly.mul (Poly.deriv p.X) (Poly.deriv p.X)).length
      = (Poly.mul (Poly.deriv p.Y) (Poly.deriv p.Y)).length := by
    rw [lxx, lyy, dX, dY]; omega
  have lsum := length_add _ _ l12
  have lw2 := length_mul p.W p.W nW
  have lel := length_mul [1, 2, 1] (Poly.add (Poly.mul (Poly.deriv p.X) (Poly.deriv p.X))
      (Poly.mul (Poly.deriv p.Y) (Poly.deriv p.Y))) (by simp)
  have hlen : (Poly.scale num (Poly.mul p.W p.W)).length
      = (Poly.scale den (Poly.mul [1, 2, 1] (Poly.add (Poly.mul (Poly.deriv p.X) (Poly.deriv p.X))
        (Poly.mul (Poly.deriv p.Y) (Poly.deriv p.Y))))).length := by
    rw [length_scale, length_scale, lw2, lel, lsum, lxx, dX]
    simp only [List.length_cons, List.length_nil]
    omega
  have nsp : speedPolyConst p num den ≠ [] := by
    intro e
    have : (speedPolyConst p num den).length = (Poly.mul p.W p.W).length := by
      simp only [speedPolyConst, Poly.sub]
      rw [length_add _ _ (by simp only [Poly.neg, length_scale]; simpa only [length_scale] using hlen), length_scale]
    rw [e, lw2] at this
    simp only [List.length_nil] at this
    omega
  have hb := bern_sound nsp h (one_sub_nonneg h1) h0
  simp only [speedPolyConst] at hb
  have hne1 : Poly.add (Poly.mul (Poly.deriv p.X) (Poly.deriv p.X))
      (Poly.mul (Poly.deriv p.Y) (Poly.deriv p.Y)) ≠ [] := by
    apply ne_nil_of_length lsum
    rw [lxx, dX]; omega
  rw [ev_sub _ _ hlen, ev_scale, ev_scale, ev_mul _ _ _ _ nW,
    ev_mul _ _ _ _ hne1, ev_add _ _ l12, ev_mul _ _ _ _ ndX, ev_mul _ _ _ _ ndY] at hb
  have e121 : ev [1, 2, 1] (1 - t) t = (1 : K) := by
    simp only [ev_cons, ev_nil, List.length_cons, List.length_nil, Ring.intCast_one,
      Ring.intCast_ofNat]
    grind
  rw [e121, Semiring.one_mul] at hb
  have hz' : ev (Poly.deriv p.W) (1 - t) t = (0 : K) := ev_eq_zero hz _ _
  have := speedConst_alg (N := ev p.X (1 - t) t) (M := ev p.Y (1 - t) t) hW hb
  simp only [Path.speed2, Path.vx, Path.vy, hz']
  exact this

theorem speed_sound {p : Path} {num den : Int} {d : Nat} (hp : p.wf = true)
    (h : Poly.bern d (speedPoly p num den) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (den : K) * p.speed2 t ≤ (num : K) := by
  by_cases hz : Poly.allZero (Poly.deriv p.W) = true
  · simp only [speedPoly, hz, ↓reduceIte] at h
    exact speedConst_sound hp hz h h0 h1
  · simp only [speedPoly, hz, ↓reduceIte] at h
    exact speedFull_sound hp h h0 h1

/-! ### Invariants -/

theorem orbit_sound {p : Path} {cx cy r2 : Int} (hp : p.wf = true)
    (h : Poly.allZero (orbitPoly p cx cy r2) = true) {t : K} (h0 : 0 ≤ t) (h1 : t ≤ 1) :
    (p.x t - (cx : K)) ^ 2 + (p.y t - (cy : K)) ^ 2 = (r2 : K) := by
  obtain ⟨a1, a2, a3, a4⟩ := Path.wf_spec hp
  have hW := W_pos hp h0 h1
  have hne : ev p.W (1 - t) t ≠ 0 := by grind
  have nW : p.W ≠ [] := ne_nil_of_length a3 (by omega)
  have lu : p.X.length = (Poly.scale cx p.W).length := by rw [length_scale]; omega
  have lv : p.Y.length = (Poly.scale cy p.W).length := by rw [length_scale]; omega
  have lU : (Poly.sub p.X (Poly.scale cx p.W)).length = p.X.length := by
    simp only [Poly.sub]
    rw [length_add _ _ (by simp only [Poly.neg]; rw [length_scale]; exact lu)]
  have lV : (Poly.sub p.Y (Poly.scale cy p.W)).length = p.X.length := by
    simp only [Poly.sub]
    rw [length_add _ _ (by simp only [Poly.neg]; rw [length_scale]; exact lv)]
    omega
  have nU : Poly.sub p.X (Poly.scale cx p.W) ≠ [] := ne_nil_of_length lU (by omega)
  have nV : Poly.sub p.Y (Poly.scale cy p.W) ≠ [] := ne_nil_of_length lV (by omega)
  have lUU := length_mul _ (Poly.sub p.X (Poly.scale cx p.W)) nU
  have lVV := length_mul _ (Poly.sub p.Y (Poly.scale cy p.W)) nV
  have lWW := length_mul p.W p.W nW
  have l1 : (Poly.mul (Poly.sub p.X (Poly.scale cx p.W)) (Poly.sub p.X (Poly.scale cx p.W))).length
      = (Poly.mul (Poly.sub p.Y (Poly.scale cy p.W)) (Poly.sub p.Y (Poly.scale cy p.W))).length := by
    omega
  have l2 : (Poly.add (Poly.mul (Poly.sub p.X (Poly.scale cx p.W)) (Poly.sub p.X (Poly.scale cx p.W)))
      (Poly.mul (Poly.sub p.Y (Poly.scale cy p.W)) (Poly.sub p.Y (Poly.scale cy p.W)))).length
      = (Poly.scale r2 (Poly.mul p.W p.W)).length := by
    rw [length_add _ _ l1, length_scale]; omega
  have z := ev_eq_zero (K := K) h (1 - t) t
  simp only [orbitPoly] at z
  rw [ev_sub _ _ l2, ev_add _ _ l1, ev_mul _ _ _ _ nU, ev_mul _ _ _ _ nV, ev_scale,
    ev_mul _ _ _ _ nW, ev_sub _ _ lu, ev_sub _ _ lv, ev_scale, ev_scale] at z
  simp only [Path.x, Path.y]
  grind

/-! ### End points -/

theorem ev_at_zero (p : Poly) : ev p (1 : K) 0 = (Poly.first p : K) := by
  cases p with
  | nil => simp only [ev_nil, Poly.first, Ring.intCast_zero]
  | cons a as =>
    simp only [ev_cons, Poly.first]
    have : (1 : K) ^ as.length = 1 := by
      induction as.length with
      | zero => exact Semiring.pow_zero 1
      | succ n ih => rw [Semiring.pow_succ, ih]; grind
    rw [this]
    grind

theorem ev_at_one (p : Poly) : ev p (0 : K) 1 = (Poly.last p : K) := by
  induction p with
  | nil => simp only [ev_nil, Poly.last, Ring.intCast_zero]
  | cons a as ih =>
    cases as with
    | nil =>
      simp only [ev_cons, ev_nil, Poly.last, List.length_nil, Semiring.pow_zero]
      grind
    | cons b bs =>
      have e : (0 : K) ^ (b :: bs).length = 0 := by
        simp only [List.length_cons]
        rw [Semiring.pow_succ]
        grind
      simp only [Poly.last]
      rw [ev_cons, e, ih]
      grind

theorem x_at_one (p : Path) : p.x (1 : K) = (Poly.last p.X : K) / (Poly.last p.W : K) := by
  have e : (1 : K) - 1 = 0 := by grind
  simp only [Path.x, e, ev_at_one]

theorem y_at_one (p : Path) : p.y (1 : K) = (Poly.last p.Y : K) / (Poly.last p.W : K) := by
  have e : (1 : K) - 1 = 0 := by grind
  simp only [Path.y, e, ev_at_one]

theorem x_at_zero (p : Path) : p.x (0 : K) = (Poly.first p.X : K) / (Poly.first p.W : K) := by
  have e : (1 : K) - 0 = 1 := by grind
  simp only [Path.x, e, ev_at_zero]

theorem y_at_zero (p : Path) : p.y (0 : K) = (Poly.first p.Y : K) / (Poly.first p.W : K) := by
  have e : (1 : K) - 0 = 1 := by grind
  simp only [Path.y, e, ev_at_zero]

theorem frac_eq {a w b v : K} (hw : w ≠ 0) (hv : v ≠ 0) (h : a * v = b * w) : a / w = b / v := by
  grind

theorem cast_mul_eq {a b c d : Int} (h : a * b = c * d) : (a : K) * b = c * d := by
  rw [← Ring.intCast_mul, ← Ring.intCast_mul, h]

theorem last_W_pos {p : Path} (hp : p.wf = true) : 0 < (Poly.last p.W : K) := by
  have h01 : (0 : K) ≤ 1 := OrderedRing.zero_le_one
  have := W_pos (K := K) hp h01 (by grind)
  have e : (1 : K) - 1 = 0 := by grind
  rw [e, ev_at_one] at this
  exact this

theorem first_W_pos {p : Path} (hp : p.wf = true) : 0 < (Poly.first p.W : K) := by
  have h01 : (0 : K) ≤ 1 := OrderedRing.zero_le_one
  have := W_pos (K := K) (t := 0) hp (by grind) h01
  have e : (1 : K) - 0 = 1 := by grind
  rw [e, ev_at_zero] at this
  exact this

theorem reaches_sound {p : Path} {s : Slot} (hp : p.wf = true) (hs : 0 < s.w)
    (h : p.reachesSlot s = true) :
    p.x (1 : K) = (s.x : K) / (s.w : K) ∧ p.y (1 : K) = (s.y : K) / (s.w : K) := by
  simp only [Path.reachesSlot, Bool.and_eq_true, beq_iff_eq] at h
  have hw := last_W_pos (K := K) hp
  have hw' : (s.w : K) ≠ 0 := by
    have := OrderedRing.pos_intCast_of_pos (R := K) s.w hs
    grind
  have hne : (Poly.last p.W : K) ≠ 0 := by grind
  rw [x_at_one, y_at_one]
  exact ⟨frac_eq hne hw' (cast_mul_eq h.1), frac_eq hne hw' (cast_mul_eq h.2)⟩

end

/-! ## Assembling a phase -/

/-- **Soundness.** If the checker accepts a phase, the phase meets its specification in
    every ordered field. -/
theorem Phase.sound {c : Config} {ph : Phase} (h : Phase.check c ph = true)
    (K : Type) [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K] :
    PhaseSpec K c ph := by
  simp only [Phase.check, Bool.and_eq_true] at h
  obtain ⟨⟨⟨⟨hc, hpaths⟩, hclear⟩, hinv⟩, htarget⟩ := h
  simp only [Config.wf, Bool.and_eq_true, decide_eq_true_eq] at hc
  have hd : 0 ≤ c.dmin := hc.1.1.1
  simp only [Phase.checkPaths, List.all_eq_true, List.mem_range, Bool.and_eq_true] at hpaths
  simp only [Phase.checkClear, List.all_eq_true, List.mem_range] at hclear
  simp only [Phase.checkInvariants, Bool.and_eq_true, List.all_eq_true, decide_eq_true_eq] at hinv
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro i j hi hj hij t h0 h1
    have wi := (hpaths i hi).1.1
    have wj := (hpaths j hj).1.1
    cases Nat.lt_or_gt_of_ne hij with
    | inl hlt =>
      rw [dist2_comm]
      exact Cert.sound hd wj wi (hclear j hj i hlt) h0 h1
    | inr hgt =>
      exact Cert.sound hd wi wj (hclear i hi j hgt) h0 h1
  · intro i hi t h0 h1
    exact inRect_sound (hpaths i hi).1.1 (hpaths i hi).1.2 h0 h1
  · intro i hi t h0 h1
    exact speed_sound (hpaths i hi).1.1 (hpaths i hi).2 h0 h1
  · intro r hr t h0 h1
    obtain ⟨⟨⟨z, wa⟩, wb⟩, _⟩ := hinv.1 r hr
    exact rigid_sound wa wb z h0 h1
  · intro o ho t h0 h1
    obtain ⟨z, wa⟩ := hinv.2 o ho
    exact orbit_sound wa z h0 h1
  · intro tg htg
    simp only [Phase.checkTarget, htg, Bool.and_eq_true, List.all_eq_true, List.mem_range,
      decide_eq_true_eq, beq_iff_eq] at htarget
    obtain ⟨⟨⟨hwf, hlen⟩, hperm⟩, hall⟩ := htarget
    refine ⟨hwf, hlen, hperm, ?_⟩
    intro i hi s hs
    obtain ⟨⟨wp, hpos⟩, hreach⟩ := hall i hi
    rw [hs] at hpos hreach
    exact reaches_sound wp hpos hreach

end Choreo
