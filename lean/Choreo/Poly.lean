/-!
# Polynomials in the homogeneous Bernstein basis

A list of integers `[b₀, …, bₙ]` denotes the homogeneous form

    b₀·sⁿ + b₁·sⁿ⁻¹·t + … + bₙ·tⁿ

and a trajectory coordinate is that form read at `s = 1 - t`.  Three things make this
the right representation for choreography:

* multiplying forms is plain convolution, so `dist²` of two paths needs no binomials;
* if every coefficient is non-negative the form is non-negative wherever `s, t ≥ 0`;
* the bound can be tightened by bisecting the time interval.

Everything is stated over an arbitrary ordered field `K`, so it applies to ℚ and to ℝ.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false
set_option linter.unusedSimpArgs false

namespace Choreo

abbrev Poly := List Int

/-! ## Executable operations on integer coefficients

These are structurally recursive so the kernel can evaluate them directly. -/

def Poly.add : Poly → Poly → Poly
  | a :: as, b :: bs => (a + b) :: Poly.add as bs
  | [], q => q
  | p, [] => p

def Poly.scale (c : Int) : Poly → Poly
  | [] => []
  | a :: as => (c * a) :: Poly.scale c as

def Poly.neg (p : Poly) : Poly := Poly.scale (-1) p

def Poly.sub (p q : Poly) : Poly := Poly.add p (Poly.neg q)

def Poly.zeros : Nat → Poly
  | 0 => []
  | n + 1 => 0 :: Poly.zeros n

/-- Multiply by `s^k`: the form gains `k` trailing zero coefficients. -/
def Poly.shiftS (p : Poly) (k : Nat) : Poly := p ++ Poly.zeros k

def Poly.mul : Poly → Poly → Poly
  | [], _ => []
  | [a], q => Poly.scale a q
  | a :: b :: bs, q =>
    Poly.add (Poly.shiftS (Poly.scale a q) (b :: bs).length) (0 :: Poly.mul (b :: bs) q)

def Poly.pow (p : Poly) : Nat → Poly
  | 0 => [1]
  | n + 1 => Poly.mul p (Poly.pow p n)

/-- `p(a·σ + b·τ, c·σ + d·τ)` as a form in `σ, τ`. -/
def Poly.subst (l r : Poly) : Poly → Poly
  | [] => []
  | [a] => [a]
  | a :: b :: bs =>
    Poly.add (Poly.scale a (Poly.pow l (b :: bs).length)) (Poly.mul r (Poly.subst l r (b :: bs)))

/-- Coefficients of `p` on the left half of the interval: `s := 2σ + τ, t := τ`. -/
def Poly.left (p : Poly) : Poly := Poly.subst [2, 1] [0, 1] p
/-- Coefficients of `p` on the right half of the interval: `s := σ, t := σ + 2τ`. -/
def Poly.right (p : Poly) : Poly := Poly.subst [1, 0] [1, 2] p

def Poly.allNonneg : Poly → Bool
  | [] => true
  | a :: as => decide (0 ≤ a) && Poly.allNonneg as

def Poly.allPos : Poly → Bool
  | [] => true
  | a :: as => decide (0 < a) && Poly.allPos as

def Poly.allZero : Poly → Bool
  | [] => true
  | a :: as => decide (a = 0) && Poly.allZero as

/-- Non-negativity on `s, t ≥ 0`: read the coefficients, bisecting up to `d` times. -/
def Poly.bern : Nat → Poly → Bool
  | 0, p => Poly.allNonneg p
  | d + 1, p => Poly.allNonneg p || (Poly.bern d (Poly.left p) && Poly.bern d (Poly.right p))

/-! ## Semantics -/

section Semantics
variable {K : Type} [Field K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- The value of the form `p` at `(s, t)`. -/
def ev (p : Poly) (s t : K) : K :=
  match p with
  | [] => 0
  | b :: bs => (b : K) * s ^ bs.length + t * ev bs s t

@[simp] theorem ev_nil (s t : K) : ev [] s t = 0 := rfl
theorem ev_cons (b : Int) (bs : Poly) (s t : K) :
    ev (b :: bs) s t = (b : K) * s ^ bs.length + t * ev bs s t := rfl

theorem length_add (p q : Poly) (h : p.length = q.length) :
    (Poly.add p q).length = p.length := by
  induction p generalizing q with
  | nil => cases q <;> simp_all [Poly.add]
  | cons a as ih =>
    cases q with
    | nil => simp at h
    | cons b bs => simp_all [Poly.add]

theorem length_scale (c : Int) (p : Poly) : (Poly.scale c p).length = p.length := by
  induction p <;> simp_all [Poly.scale]

theorem length_zeros (k : Nat) : (Poly.zeros k).length = k := by
  induction k <;> simp_all [Poly.zeros]

theorem length_shiftS (p : Poly) (k : Nat) : (Poly.shiftS p k).length = p.length + k := by
  simp [Poly.shiftS, length_zeros]

theorem length_mul (p q : Poly) (hp : p ≠ []) :
    (Poly.mul p q).length = p.length + q.length - 1 := by
  induction p with
  | nil => contradiction
  | cons a as ih =>
    cases as with
    | nil => simp [Poly.mul, length_scale]
    | cons b bs =>
      have ih' := ih (by simp)
      have hl : (Poly.shiftS (Poly.scale a q) (b :: bs).length).length
          = (0 :: Poly.mul (b :: bs) q).length := by
        simp only [length_shiftS, length_scale, List.length_cons, ih']
        omega
      simp only [Poly.mul]
      rw [length_add _ _ hl, length_shiftS, length_scale]
      simp only [List.length_cons]
      omega

theorem ev_add (p q : Poly) (h : p.length = q.length) (s t : K) :
    ev (Poly.add p q) s t = ev p s t + ev q s t := by
  induction p generalizing q with
  | nil =>
    cases q with
    | nil => simp [Poly.add, ev_nil]; grind
    | cons _ _ => simp at h
  | cons a as ih =>
    cases q with
    | nil => simp at h
    | cons b bs =>
      have hl : as.length = bs.length := by simpa using h
      simp only [Poly.add, ev_cons, ih bs hl, length_add as bs hl, Ring.intCast_add, hl]
      grind

theorem ev_scale (c : Int) (p : Poly) (s t : K) :
    ev (Poly.scale c p) s t = (c : K) * ev p s t := by
  induction p with
  | nil => simp [Poly.scale]; grind
  | cons a as ih =>
    simp only [Poly.scale, ev_cons, ih, length_scale, Ring.intCast_mul]
    grind

theorem ev_zeros (k : Nat) (s t : K) : ev (Poly.zeros k) s t = 0 := by
  induction k with
  | zero => rfl
  | succ n ih =>
    simp only [Poly.zeros, ev_cons, ih, Ring.intCast_zero]
    grind

theorem ev_shiftS (p : Poly) (k : Nat) (s t : K) :
    ev (Poly.shiftS p k) s t = s ^ k * ev p s t := by
  induction p with
  | nil => simp [Poly.shiftS, ev_zeros]; grind
  | cons a as ih =>
    have h : ev (as ++ Poly.zeros k) s t = s ^ k * ev as s t := ih
    simp only [Poly.shiftS, List.cons_append, ev_cons, h, List.length_append, length_zeros,
      Semiring.pow_add]
    grind

theorem ev_neg (p : Poly) (s t : K) : ev (Poly.neg p) s t = - ev p s t := by
  simp only [Poly.neg, ev_scale, Ring.intCast_neg, Ring.intCast_one]
  grind

theorem ev_sub (p q : Poly) (h : p.length = q.length) (s t : K) :
    ev (Poly.sub p q) s t = ev p s t - ev q s t := by
  have hl : p.length = (Poly.neg q).length := by simp [Poly.neg, length_scale, h]
  simp only [Poly.sub, ev_add _ _ hl, ev_neg]
  grind

theorem ev_mul (p q : Poly) (s t : K) (hq : q ≠ []) :
    ev (Poly.mul p q) s t = ev p s t * ev q s t := by
  induction p with
  | nil => simp [Poly.mul]; grind
  | cons a as ih =>
    cases as with
    | nil =>
      simp only [Poly.mul, ev_scale, ev_cons, ev_nil, List.length_nil]
      grind
    | cons b bs =>
      have hq' : 0 < q.length := by cases q <;> simp_all
      have hl : (Poly.shiftS (Poly.scale a q) (b :: bs).length).length
          = (0 :: Poly.mul (b :: bs) q).length := by
        simp only [length_shiftS, length_scale, List.length_cons, length_mul (b :: bs) q (by simp)]
        omega
      simp only [Poly.mul]
      rw [ev_add _ _ hl, ev_shiftS, ev_scale, ev_cons 0, ih, ev_cons a]
      simp only [Ring.intCast_zero]
      grind

theorem ev_pow (p : Poly) (n : Nat) (s t : K) (hp : p ≠ []) (hn : p.length = 2) :
    ev (Poly.pow p n) s t = (ev p s t) ^ n ∧ (Poly.pow p n).length = n + 1 := by
  induction n with
  | zero =>
    simp only [Poly.pow, ev_cons, ev_nil, List.length_nil, Ring.intCast_one]
    constructor
    · grind
    · rfl
  | succ n ih =>
    have hne : Poly.pow p n ≠ [] := by
      intro h; have := ih.2; simp [h] at this
    constructor
    · simp only [Poly.pow]
      rw [ev_mul _ _ _ _ hne, ih.1, Semiring.pow_succ]
      grind
    · simp only [Poly.pow]
      rw [length_mul _ _ hp, ih.2, hn]
      omega

theorem subst_spec (l r : Poly) (hl : l.length = 2) (hr : r.length = 2) (p : Poly) (hp : p ≠ [])
    (σ τ : K) :
    ev (Poly.subst l r p) σ τ = ev p (ev l σ τ) (ev r σ τ) ∧
    (Poly.subst l r p).length = p.length := by
  have hlne : l ≠ [] := by intro h; simp [h] at hl
  have hrne : r ≠ [] := by intro h; simp [h] at hr
  induction p with
  | nil => contradiction
  | cons a as ih =>
    cases as with
    | nil =>
      simp only [Poly.subst, ev_cons, ev_nil, List.length_nil]
      constructor
      · grind
      · trivial
    | cons b bs =>
      obtain ⟨ih1, ih2⟩ := ih (by simp)
      have hsne : Poly.subst l r (b :: bs) ≠ [] := by
        intro h; simp [h] at ih2
      have hpw := ev_pow l (b :: bs).length σ τ hlne hl
      have hlen : (Poly.scale a (Poly.pow l (b :: bs).length)).length
          = (Poly.mul r (Poly.subst l r (b :: bs))).length := by
        rw [length_scale, hpw.2, length_mul _ _ hrne, ih2, hr]
        omega
      simp only [Poly.subst]
      constructor
      · rw [ev_add _ _ hlen, ev_scale, hpw.1, ev_mul _ _ _ _ hsne, ih1, ev_cons a]
      · rw [length_add _ _ hlen, length_scale, hpw.2]
        simp

end Semantics

/-! ## Signs -/

section Order
variable {K : Type} [Field K] [LE K] [LT K] [LawfulOrderLT K] [IsLinearOrder K] [OrderedRing K]
attribute [local instance] Semiring.natCast Ring.intCast

theorem pow_nonneg' {a : K} (h : 0 ≤ a) (n : Nat) : 0 ≤ a ^ n := by
  induction n with
  | zero =>
    rw [Semiring.pow_zero]
    exact OrderedRing.zero_le_one
  | succ n ih =>
    rw [Semiring.pow_succ]
    exact OrderedRing.mul_nonneg ih h

theorem pow_pos' {a : K} (h : 0 < a) (n : Nat) : 0 < a ^ n := by
  induction n with
  | zero =>
    rw [Semiring.pow_zero]
    exact OrderedRing.zero_lt_one
  | succ n ih =>
    rw [Semiring.pow_succ]
    exact OrderedRing.mul_pos ih h

/-- **Convex-hull principle.** Non-negative coefficients give a non-negative form. -/
theorem ev_nonneg {p : Poly} (h : Poly.allNonneg p = true) {s t : K} (hs : 0 ≤ s) (ht : 0 ≤ t) :
    0 ≤ ev p s t := by
  induction p with
  | nil => simp only [ev_nil]; grind
  | cons a as ih =>
    simp only [Poly.allNonneg, Bool.and_eq_true, decide_eq_true_eq] at h
    rw [ev_cons]
    have h1 : 0 ≤ (a : K) * s ^ as.length :=
      OrderedRing.mul_nonneg (OrderedRing.nonneg_intCast_of_nonneg a h.1) (pow_nonneg' hs _)
    have h2 : 0 ≤ t * ev as s t := OrderedRing.mul_nonneg ht (ih h.2)
    grind

/-- A form with strictly positive coefficients is strictly positive when `s + t = 1`. -/
theorem ev_pos {p : Poly} (hne : p ≠ []) (h : Poly.allPos p = true) {s t : K}
    (hs : 0 ≤ s) (ht : 0 ≤ t) (hst : 0 < s ∨ 0 < t) : 0 < ev p s t := by
  induction p with
  | nil => contradiction
  | cons a as ih =>
    simp only [Poly.allPos, Bool.and_eq_true, decide_eq_true_eq] at h
    rw [ev_cons]
    have ha : 0 < (a : K) := OrderedRing.pos_intCast_of_pos a h.1
    cases as with
    | nil =>
      simp only [ev_nil, List.length_nil, Semiring.pow_zero]
      grind
    | cons b bs =>
      have ihb : 0 < ev (b :: bs) s t := ih (by simp) h.2
      have hle : (0 : K) ≤ ev (b :: bs) s t := Std.le_of_lt ihb
      cases hst with
      | inl hs' =>
        have h1 := OrderedRing.mul_pos ha (pow_pos' hs' (b :: bs).length)
        have h2 := OrderedRing.mul_nonneg ht hle
        grind
      | inr ht' =>
        have h1 := OrderedRing.mul_nonneg (Std.le_of_lt ha) (pow_nonneg' hs (b :: bs).length)
        have h2 := OrderedRing.mul_pos ht' ihb
        grind

theorem ev_eq_zero {p : Poly} (h : Poly.allZero p = true) (s t : K) : ev p s t = 0 := by
  induction p with
  | nil => rfl
  | cons a as ih =>
    simp only [Poly.allZero, Bool.and_eq_true, decide_eq_true_eq] at h
    rw [ev_cons, ih h.2, h.1, Ring.intCast_zero]
    grind

/-- **Bisection is sound.** If `bern d p` holds, the form is non-negative on the quadrant. -/
theorem bern_sound {d : Nat} {p : Poly} (hne : p ≠ []) (h : Poly.bern d p = true) {s t : K}
    (hs : 0 ≤ s) (ht : 0 ≤ t) : 0 ≤ ev p s t := by
  induction d generalizing p s t with
  | zero => exact ev_nonneg h hs ht
  | succ d ih =>
    simp only [Poly.bern, Bool.or_eq_true, Bool.and_eq_true] at h
    cases h with
    | inl h => exact ev_nonneg h hs ht
    | inr h =>
      have two : (2 : K) ≠ 0 := by grind
      have L := subst_spec (K := K) [2, 1] [0, 1] rfl rfl p hne
      have R := subst_spec (K := K) [1, 0] [1, 2] rfl rfl p hne
      have lenL : (Poly.left p) ≠ [] := by
        intro e
        have := (L (0 : K) 0).2
        simp only [Poly.left] at e
        rw [e] at this
        cases p <;> simp_all
      have lenR : (Poly.right p) ≠ [] := by
        intro e
        have := (R (0 : K) 0).2
        simp only [Poly.right] at e
        rw [e] at this
        cases p <;> simp_all
      cases Std.IsLinearOrder.le_total t s with
      | inl hts =>
        -- left half: τ = t, σ = (s - t) / 2
        have hσ : 0 ≤ (s - t) / 2 := by grind
        have key := (L ((s - t) / 2) t).1
        have e1 : ev [2, 1] ((s - t) / 2) t = s := by
          simp only [ev_cons, ev_nil, List.length_cons, List.length_nil]
          simp only [Ring.intCast_one, Ring.intCast_ofNat]
          grind
        have e2 : ev [0, 1] ((s - t) / 2) t = t := by
          simp only [ev_cons, ev_nil, List.length_cons, List.length_nil]
          simp only [Ring.intCast_one, Ring.intCast_zero]
          grind
        rw [e1, e2] at key
        rw [← key]
        exact ih lenL h.1 hσ ht
      | inr hst =>
        -- right half: σ = s, τ = (t - s) / 2
        have hτ : 0 ≤ (t - s) / 2 := by grind
        have key := (R s ((t - s) / 2)).1
        have e1 : ev [1, 0] s ((t - s) / 2) = s := by
          simp only [ev_cons, ev_nil, List.length_cons, List.length_nil]
          simp only [Ring.intCast_one, Ring.intCast_zero]
          grind
        have e2 : ev [1, 2] s ((t - s) / 2) = t := by
          simp only [ev_cons, ev_nil, List.length_cons, List.length_nil]
          simp only [Ring.intCast_one, Ring.intCast_ofNat]
          grind
        rw [e1, e2] at key
        rw [← key]
        exact ih lenR h.2 hs hτ

end Order
end Choreo
