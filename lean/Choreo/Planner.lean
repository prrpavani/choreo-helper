import Choreo.Build
import Choreo.Prompt
/-!
# The planner

Proposes a routine, asks the checker, and revises when the checker says no. Each rejected idea
is kept, so the app can show what Lean turned down and why.
-/
namespace Choreo

/-! ## Stage geometry. `x` grows towards stage left; `y` grows upstage, away from the audience. -/
def stageRect : Rect := ⟨-6000, 6000, 0, 8000⟩
def dminMM : Int := 600
def vmaxMM : Int := 3500
def colGap : Int := 1800
def rowGap : Int := 2000
def centre : Pt := ⟨0, 4000⟩

structure Draft where
  label : String
  kind : String
  paths : List Path
  bounds : Rect
  beats : Nat
  rigid : List RigidPair := []
  orbits : List Orbit := []
  dmin : Int := dminMM
  /-- The style of travel, so an edited routine can keep it. -/
  way : String := "walk"
  /-- False when dancers do different things, so the shape does not hold. -/
  unison : Bool := true

instance : Inhabited Draft := ⟨{ label := "", kind := "", paths := [], bounds := ⟨0, 0, 0, 0⟩, beats := 0 }⟩

/-- A request, in plain words and as a Lean statement, with phases counted from the move's start. -/
structure AskDraft where
  text : String
  group : String
  make : Nat → Ask

structure Rejected where
  title : String
  why : String
  draft : Draft
  problems : List Problem
  /-- The phase of the routine where this idea would have started. -/
  startPhase : Nat := 0

structure Override where
  move : Nat
  dancer : Nat
  x : Int
  y : Int
  deriving Inhabited

structure PlanState where
  pos : List Pt
  phases : List Draft := []
  asks : List (String × String × Ask) := []
  rejected : List Rejected := []
  /-- For moves a person can edit: the move's number and the phase in which it lands. -/
  keys : List (Nat × Nat) := []
  /-- The routine as formations: where everyone stands, how they travel, and for how many counts. -/
  frames : List (List Pt) := []
  ways : List String := []
  moveBeats : List Nat := []
  holdBeats : List Nat := []
  landing : List Nat := []
  /-- The dancers on stage, or about to come on. The others wait in the wings. -/
  active : List Nat := []
  deriving Inhabited

abbrev Names := Nat → String

/-! ## Shapes -/

/-- The integer points on the circle of radius 2210 nearest to `n` even angles. This radius has
    many exact whole-number points, so the circle needs no rounding. -/
def ringPoints (n : Nat) (c : Pt) (r : Int) (turn : Float := 0.0) : List Pt :=
  let lattice : List (Int × Int) := (List.range (2 * r.toNat + 1)).flatMap fun (k : Nat) =>
    let x : Int := (k : Int) - r
    let y2 := r * r - x * x
    let root : Nat := Nat.sqrt y2.toNat
    if ((root : Int) * root) == y2 then [(x, (root : Int)), (x, -(root : Int))] else []
  (List.range n).map fun i =>
    let a : Float := 2.0 * 3.14159265358979 * i.toFloat / n.toFloat + 3.14159265358979 / 2.0 + turn
    let tx := Float.ofInt r * a.cos
    let ty := Float.ofInt r * a.sin
    let score (q : Int × Int) : Float :=
      let dx := Float.ofInt q.1 - tx
      let dy := Float.ofInt q.2 - ty
      dx * dx + dy * dy
    let best := lattice.foldl (fun acc q => if score q < score acc then q else acc) (r, 0)
    ⟨c.x + best.1, c.y + best.2⟩

def circlePoints (n : Nat) (c : Pt) : List Pt := ringPoints n c 2210

/-- The side-to-side and front-to-back spacing that fits a grid on the stage. -/
def gridGaps (cols rows : Nat) : Int × Int :=
  (min colGap (11000 / (max 1 ((cols : Int) - 1))), min rowGap (7000 / (max 1 ((rows : Int) - 1))))

def gridOrigin (cols rows : Nat) (c : Pt) : Pt :=
  let (gx, gy) := gridGaps cols rows
  ⟨c.x - ((cols : Int) - 1) * gx / 2, c.y + ((rows : Int) - 1) * gy / 2⟩

def Shape.formation (s : Shape) (n : Nat) : Formation :=
  match s with
  | .grid cols rows =>
    let o := gridOrigin cols rows centre
    let (gx, gy) := gridGaps cols rows
    .grid o.x o.y gx (-gy) rows cols
  | .line =>
    let gap : Int := min 1500 (11000 / (max 1 ((n : Int) - 1)))
    .line (centre.x - ((n : Int) - 1) * gap / 2) centre.y gap 0 n
  | .diagonal =>
    let gx : Int := min 1300 (10000 / (max 1 ((n : Int) - 1)))
    let gy : Int := min 800 (7000 / (max 1 ((n : Int) - 1)))
    .line (centre.x - ((n : Int) - 1) * gx / 2) (centre.y - ((n : Int) - 1) * gy / 2) gx gy n
  | .circle =>
    .circle centre.x centre.y 2210 ((circlePoints n centre).map fun p => ⟨p.x, p.y, 1⟩)
  | .vee =>
    let arm : Int := max 1 (((n : Int) + 1) / 2 - 1)
    let dx : Int := min 1100 (5400 / arm)
    let dy : Int := min 1100 (5400 / arm)
    .free ((List.range n).map fun i =>
      let side : Int := if i % 2 == 0 then 1 else -1
      let k : Int := ((i + 1) / 2 : Nat)
      ⟨side * k * dx, 2000 + k * dy, 1⟩)
  | .rings =>
    let inner := n / 2
    .free ((ringPoints inner centre 1105 ++ ringPoints (n - inner) centre 3315 (3.14159265358979 / (n - inner).toFloat)).map fun p => ⟨p.x, p.y, 1⟩)
  | .square =>
    let places : List (Int × Int) := [(-1800, 1800), (0, 1800), (1800, 1800), (1800, 0), (1800, -1800), (0, -1800), (-1800, -1800), (-1800, 0)]
    .free ((places.take n).map fun (x, y) => ⟨centre.x + x, centre.y + y, 1⟩)
  | .cross =>
    let arm := (n + 3) / 4
    let dx : Int := min 1300 (5000 / (max 1 (arm : Int)))
    let dy : Int := min 1300 (3600 / (max 1 (arm : Int)))
    .free ((List.range n).map fun i =>
      let k : Int := (i / 4 + 1 : Nat)
      match i % 4 with
      | 0 => ⟨k * dx, 4000, 1⟩
      | 1 => ⟨0, 4000 + k * dy, 1⟩
      | 2 => ⟨-k * dx, 4000, 1⟩
      | _ => ⟨0, 4000 - k * dy, 1⟩)
  | .spiral =>
    .free ((List.range n).map fun i =>
      let share := i.toFloat / (max 1 (n - 1)).toFloat
      let r := 900.0 + 2700.0 * share
      let a := 2.4 * i.toFloat
      ⟨centre.x + (r * a.cos).toInt64.toInt, centre.y + (r * a.sin).toInt64.toInt, 1⟩)
  | .windows =>
    let front := n / 2
    let back := n - front
    let row (count : Nat) (y : Int) (shift : Int) : List Slot := (List.range count).map fun (k : Nat) =>
      ⟨(2 * (k : Int) + 1 - (count : Int)) * colGap / 2 + shift, y, 1⟩
    .free (row back 5000 0 ++ row front 3000 (if back == front then colGap / 2 else 0))
  | .diamond =>
    let ring := n
    .free ((List.range ring).map fun i =>
      let c : Int := (i / 4 + 1 : Nat)
      let r := c * 1500
      match i % 4 with
      | 0 => ⟨r, 4000, 1⟩
      | 1 => ⟨0, 4000 + r * 2 / 3, 1⟩
      | 2 => ⟨-r, 4000, 1⟩
      | _ => ⟨0, 4000 - r * 2 / 3, 1⟩)

def Shape.name : Shape → String
  | .grid c r => s!"grid of {c} by {r}"
  | .line => "single line"
  | .diagonal => "diagonal line"
  | .circle => "circle"
  | .vee => "V shape"
  | .diamond => "diamond"
  | .windows => "windows formation"
  | .rings => "pair of rings"
  | .square => "square"
  | .cross => "cross"
  | .spiral => "spiral"

def slotPt (s : Slot) : Pt := ⟨s.x / s.w, s.y / s.w⟩

/-! ## Choosing who goes where -/

def distSq (a b : Pt) : Int := (a.x - b.x) ^ 2 + (a.y - b.y) ^ 2

/-- Swap pairs of destinations while that shortens total squared travel. Straight paths chosen
    this way tend not to cross. The checker decides whether they really are safe. -/
def improveAssign (starts targets : List Pt) (rounds : Nat) (assign : List Nat) : List Nat := Id.run do
  let mut a := assign.toArray
  let n := a.size
  for _ in List.range rounds do
    for i in List.range n do
      for j in List.range n do
        if i < j then
          let ai := a[i]!; let aj := a[j]!
          let si := starts.getD i default; let sj := starts.getD j default
          let ti := targets.getD ai default; let tj := targets.getD aj default
          if distSq si tj + distSq sj ti < distSq si ti + distSq sj tj then
            a := (a.set! i aj).set! j ai
  return a.toList

def beatsFor (distance : Int) (pace : Int) (bpm : Nat) (minBeats : Nat) : Nat :=
  -- peak speed of the ease is 1.5 times the average
  let seconds10 := (distance * 15) / pace
  let beats := ((seconds10.toNat * bpm) / 600) + 1
  let b := max beats minBeats
  (b + 3) / 4 * 4

def isqrt (x : Int) : Int := (Nat.sqrt x.toNat : Int)

def maxDist (a b : List Pt) : Int :=
  (a.zip b).foldl (fun m p => max m (isqrt (distSq p.1 p.2))) 0

def linksFor (group : List Nat) (pos : List Pt) : List Link :=
  match group with
  | [] => []
  | l :: rest =>
    let lp := pos.getD l default
    rest.map fun m =>
      let mp := pos.getD m default
      ⟨l, m, mp.x - lp.x, mp.y - lp.y⟩

def probeConfig (n : Nat) (bounds : Rect) (bpm : Nat) (d : Int := dminMM) : Config :=
  { n, dmin := d, vmax := vmaxMM, stage := bounds, ticksPerBeat := 4, bpmNum := bpm, bpmDen := 1,
    total := 0, seconds := 0 }

def Draft.toPhase (d : Draft) (n : Nat) (t0 : Nat) : Phase :=
  { t0, t1 := t0 + d.beats * 4, paths := d.paths, bounds := d.bounds,
    certs := chooseCerts n d.paths d.dmin, rigid := d.rigid, orbits := d.orbits, target := none }

def Draft.problems (d : Draft) (n : Nat) (bpm : Nat) : List Problem :=
  let c := probeConfig n d.bounds bpm d.dmin
  let ph := d.toPhase n 0
  if Phase.check c ph then [] else
  match Phase.diagnose c 0 ph with
  | [] => [.other 0 "a shape or path check failed"]
  | ps => ps

def problemText (names : Names) : Problem → String
  | .collision _ i j _ => s!"{names i} and {names j} come too close to each other"
  | .offStage _ i _ => s!"{names i} would step outside the allowed area"
  | .tooFast _ i => s!"{names i} would have to move faster than the speed limit"
  | .unproved _ i j => s!"Lean couldn't confirm {names i} and {names j} keep their distance"
  | .other _ w => w

/-- Try each idea in order and keep the first that passes. Rejected ideas are recorded. -/
def chooseIdea (n bpm : Nat) (names : Names) (st : PlanState) (gap : Int)
    (ideas : List (String × List Draft)) : PlanState × List Draft × Nat :=
  let ideas := ideas.map fun (t, ds) => (t, ds.map fun (d : Draft) => { d with dmin := gap })
  let rec go (st : PlanState) (index : Nat) : List (String × List Draft) → PlanState × List Draft × Nat
    | [] => (st, [], 0)
    | [(_, ds)] => (st, ds, index)
    | (title, ds) :: rest =>
      let bad := ds.findSome? fun d =>
        match d.problems n bpm with
        | [] => none
        | ps => some (d, ps)
      match bad with
      | none => (st, ds, index)
      | some (d, ps) =>
        let why := (ps.head?.map (problemText names)).getD ""
        go { st with rejected := st.rejected ++ [{ title, why, draft := d, problems := ps, startPhase := st.phases.length }] } (index + 1) rest
  go st 0 ideas

/-! ## Ways of travelling between two formations

Every way takes any two formations, so the same travel works for a routine from a prompt and one built by
hand. A way only proposes paths. Whether they are safe is still for the checker to say. -/

def Path.startPt (p : Path) : Pt :=
  let w := Poly.first p.W
  if w == 0 then ⟨0, 0⟩ else ⟨Poly.first p.X / w, Poly.first p.Y / w⟩

def stillPath (a : Pt) : Path := curvePath a a a ⟨a.x, a.x, a.y, a.y⟩

/-- Travel from `a` to `b` on a curve, bending `off` millimetres to the mover's right at the halfway point.
    Two dancers trading places this way pass right shoulder to right shoulder. -/
def bendPath (a b : Pt) (off : Int) (bounds : Rect) : Path :=
  let dx := b.x - a.x
  let dy := b.y - a.y
  let d := isqrt (dx * dx + dy * dy)
  if d == 0 then stillPath a else
  curvePath a ⟨(a.x + b.x) / 2 + dy * off / d, (a.y + b.y) / 2 - dx * off / d⟩ b bounds

/-- A step out and back within one phase. -/
def hopPath (a : Pt) (dy : Int) (bounds : Rect) : Path :=
  curvePath a ⟨a.x, a.y + dy⟩ a bounds

def rotPt (c a : Pt) (ccw : Bool) : Pt :=
  let dx := a.x - c.x
  let dy := a.y - c.y
  if ccw then ⟨c.x - dy, c.y + dx⟩ else ⟨c.x + dy, c.y - dx⟩

/-- Sort a list by a key, smallest first. -/
def sortBy' (key : Nat → Int) (l : List Nat) : List Nat :=
  l.foldr (fun x acc =>
    let (lo, hi) := acc.partition (fun y => key y < key x)
    lo ++ x :: hi) []

/-- Quarter turns about a centre, one dancer at a time. -/
def rotN (c p : Pt) (ccw : Bool) : Nat → Pt
  | 0 => p
  | k + 1 => rotPt c (rotN c p ccw k) ccw

/-- Split a list into runs of at most `k`. -/
def chunks {α} (k : Nat) (l : List α) : List (List α) :=
  (List.range ((l.length + k - 1) / max 1 k)).map fun i => (l.drop (i * k)).take k

/-- The winding route of a follow-the-leader, back and forth across the stage. -/
def snakeTrail : List Pt :=
  let row (y : Int) (back : Bool) : List Pt :=
    let line : List Pt := (List.range 7).map fun (k : Nat) => ⟨-4800 + (k : Int) * 1600, y⟩
    if back then line.reverse else line
  row 2000 false ++ row 4000 true ++ row 6000 false

/-- Where a follow-the-leader from these places ends, so the next move can start there. -/
def snakeEnd (a : List Pt) : List Pt :=
  let n := a.length
  let moves : Nat := min 4 (snakeTrail.length - min n snakeTrail.length)
  if n + moves > snakeTrail.length then a else
  let places := improveAssign a (snakeTrail.take n) 6 (List.range n)
  places.map fun p => snakeTrail.getD (p + moves) default

/-- The ways a person can choose, in plain words. -/
def wayNames : List String := ["walk", "sweep", "orbit", "canon", "burst", "snake", "zipper", "flip"]

def wayDraftsAll (way : String) (a b : List Pt) (pace : Int) (bpm : Nat) (bounds : Rect) (gap : Int) (label kind : String) : List Draft :=
  let n := a.length
  let ids := List.range n
  let at' (l : List Pt) (i : Nat) := l.getD i default
  let dist := maxDist a b
  let mk (lab knd : String) (beats : Nat) (paths : List Path) : Draft :=
    { label := lab, kind := knd, way, bounds, beats, paths }
  let walk (lab knd : String) (p q : List Pt) (minB : Nat) : Draft :=
    mk lab knd (beatsFor (maxDist p q) pace bpm minB) ((p.zip q).map fun (u, v) => easePath u v)
  -- passing clear of someone needs a bend of at least half the gap
  let offFor (p q : Pt) : Int := max ((gap + 300) / 2) (isqrt (distSq p q) * 3 / 10)
  let sweep (lab knd : String) (p q : List Pt) (minB : Nat) : Draft :=
    let far := (p.zip q).foldl (fun m (u, v) => max m (isqrt (distSq u v) + offFor u v)) 0
    mk lab knd (beatsFor far pace bpm minB) ((p.zip q).map fun (u, v) => bendPath u v (offFor u v) bounds)
  match way with
  | "sweep" => [sweep label kind a b 8]
  | "orbit" =>
    let c := centre
    let found := [1, 2, 3].find? fun q => ids.all fun i =>
      rotN c (at' a i) true q == at' b i || rotN c (at' a i) false q == at' b i
    match found with
    | none => [sweep label "rotate" a b 8]
    | some q =>
      let ccw (i : Nat) := rotN c (at' a i) true q == at' b i
      (List.range q).map fun step =>
        let far := ids.foldl (fun m i => max m (distSq (at' a i) c)) 0
        mk (if q == 1 then label else s!"{label}: quarter {step + 1} of {q}") "rotate" (beatsFor (2 * isqrt far) pace bpm 8)
          (ids.map fun i => rotatePath c (rotN c (at' a i) (ccw i) step) (ccw i))
  | "canon" =>
    let groups := chunks (max 1 ((n + 3) / 4)) (sortBy' (fun i => (at' a i).x) ids)
    let nearest := ids.foldl (fun m i => ids.foldl (fun m' j => if j < i then min m' (isqrt (distSq (at' a i) (at' a j))) else m') m) 100000
    let hop : Int := max 150 (min 700 (nearest - gap - 60))
    if a == b then
      groups.map fun g =>
        mk "One group after another" "canon" 4 (ids.map fun i =>
          let p := at' a i
          if g.contains i then hopPath p (if p.y ≥ 1000 then -hop else hop) bounds else stillPath p)
    else
      groups.zipIdx.map fun (g, k) =>
        let done := (groups.take k).flatten
        let far := g.foldl (fun m i => max m (isqrt (distSq (at' a i) (at' b i)) * 3 / 2)) 0
        mk "One group after another" "canon" (beatsFor far pace bpm 4) (ids.map fun i =>
          if g.contains i then bendPath (at' a i) (at' b i) (offFor (at' a i) (at' b i)) bounds
          else stillPath (if done.contains i then at' b i else at' a i))
  | "burst" =>
    -- everyone moves along their own line through the centre, all in step, so every gap only shrinks and grows
    let onLine := a.map fun p => distSq p centre
    let far := isqrt (onLine.foldl max 1)
    let nearest := ids.foldl (fun m i => ids.foldl (fun m' j => if j < i then min m' (isqrt (distSq (at' a i) (at' a j))) else m') m) 100000
    let scaled (num den : Int) : List Pt := a.map fun p => ⟨centre.x + (p.x - centre.x) * num / den, centre.y + (p.y - centre.y) * num / den⟩
    let tight := scaled (gap + 200) (max (gap + 200) nearest)
    let out := if far * 13 / 10 ≤ 3700 then scaled 13 10 else a
    [walk "Gather tight at the centre" "burst" a tight 8, walk "Burst out" "burst" tight out 4] ++
      (if out == b then [] else [walk "Settle" "burst" out b 4])
  | "snake" =>
    let trail := snakeTrail
    let moves : Nat := min 4 (trail.length - min n trail.length)
    if n + moves > trail.length then [sweep label "snake" a b 8] else
    let places := improveAssign a (trail.take n) 6 ids
    let slotAt (i : Nat) (s : Nat) : Pt := trail.getD (places.getD i 0 + s) default
    let allAt (s : Nat) := ids.map fun i => slotAt i s
    [walk "Fall into line behind the leader" "snake" a (allAt 0) 8] ++
    ((List.range moves).map fun s =>
      mk "Follow the leader" "snake" (beatsFor 2400 pace bpm 4) (ids.map fun i =>
        bendPath (slotAt i s) (slotAt i (s + 1)) (if s % 2 == 0 then 350 else -350) bounds)) ++
    (if allAt moves == b then [] else [walk "Come home from the line" "snake" (allAt moves) b 8])
  | "zipper" =>
    let byX := sortBy' (fun i => (at' a i).x) ids
    let leftSide := byX.take (n / 2)
    let rightSide := byX.drop (n / 2)
    let byY (l : List Nat) := sortBy' (fun i => (at' a i).y) l
    let d : Int := max (gap + 100) (6000 / (max 1 ((n : Int) - 1)))
    let y0 : Int := 4000 - d * ((n : Int) - 1) / 2
    let openAt (flip : Bool) : List Pt := ids.map fun i =>
      let isL := leftSide.contains i
      let g := if isL then byY leftSide else byY rightSide
      let k : Int := (g.idxOf i : Nat)
      let x : Int := if isL != flip then -3000 else 3000
      ⟨x, y0 + d * (2 * k + (if isL then 0 else 1))⟩
    [walk "The two sides open up" "zipper" a (openAt false) 8,
     walk "They pass through each other in the gaps" "zipper" (openAt false) (openAt true) 4,
     walk "They settle on the far side" "zipper" (openAt true) b 8]
  | "flip" =>
    let ys := a.map (·.y)
    let mean : Int := if n == 0 then 0 else ys.foldl (· + ·) 0 / (n : Int)
    let off (i : Nat) : Int := if (at' a i).y > mean then colGap / 4 else -(colGap / 4)
    let slide (l : List Pt) := l.zipIdx.map fun (p, i) => (⟨p.x + off i, p.y⟩ : Pt)
    [walk "Lines slide apart" "flip" a (slide a) 4, walk "Lines pass through each other" "flip" (slide a) (slide b) 8,
     walk "Lines settle" "flip" (slide b) b 4]
  | "staged" =>
    -- whoever is leaving the stage clears it first, then the others come on
    let off (p : Pt) := p.x.natAbs > 6000
    let goers := ids.filter fun i => off (at' b i)
    let mid := ids.map fun i => if goers.contains i then at' b i else at' a i
    let phases := [walk "Clear the stage" kind a mid 8, walk "The others come on" kind mid b 8]
    phases
  | _ => if dist == 0 then [mk label kind 8 (a.map fun p => easePath p p)] else [walk label kind a b 8]

/-- A way of travelling moves the dancers involved. Anyone off stage at both ends just waits. -/
def wayDrafts (way : String) (a b : List Pt) (pace : Int) (bpm : Nat) (bounds : Rect) (gap : Int) (label kind : String) : List Draft :=
  let n := a.length
  let off (p : Pt) := p.x.natAbs > 6000
  let ids := List.range n
  let inPlay := ids.filter fun i => !(off (a.getD i default) && off (b.getD i default) && a.getD i default == b.getD i default)
  if inPlay.length == n || way == "staged" || way == "walk" then wayDraftsAll way a b pace bpm bounds gap label kind else
  let sub (l : List Pt) := inPlay.map fun i => l.getD i default
  (wayDraftsAll way (sub a) (sub b) pace bpm bounds gap label kind).map fun d =>
    { d with bounds, paths := ids.map fun i =>
        match inPlay.idxOf? i with
        | some k => d.paths.getD k Path.rest
        | none => easePath (a.getD i default) (a.getD i default) }

/-! ## Compiling one move -/

structure Ctx where
  n : Nat
  bpm : Nat
  pace : Int
  envelope : Rect
  slWing : Rect
  srWing : Rect
  names : Names
  overrides : List Override
  left : Nat
  right : Nat
  steps : List String
  gap : Int
  sweep : Bool := false

def allDancers (n : Nat) : List Nat := List.range n

def applyOverrides (ctx : Ctx) (moveIx : Nat) (ps : List Pt) : List Pt :=
  ps.zipIdx.map fun (p, i) =>
    match ctx.overrides.find? (fun o => o.move == moveIx && o.dancer == i) with
    | some o => ⟨o.x, o.y⟩
    | none => p

def setAt (l : List Nat) (i v : Nat) : List Nat := l.set i v

def pushAsks (st : PlanState) (base : Nat) (asks : List AskDraft) : PlanState :=
  { st with asks := st.asks ++ asks.map fun a => (a.group, a.text, a.make base) }

def addDrafts (st : PlanState) (ds : List Draft) (asks : List AskDraft) (pos : List Pt) : PlanState :=
  let base := st.phases.length
  let st := pushAsks st base asks
  let beats := (ds.map (·.beats)).foldl (· + ·) 0
  -- keep a record of the routine as formations, so a person can pick it up and edit it
  let st := if st.frames.isEmpty && !ds.isEmpty then
      { st with frames := [(ds.headD default).paths.map Path.startPt], holdBeats := [0], landing := [0] }
    else st
  let st :=
    if ds.any (·.kind != "hold") then
      { st with frames := st.frames ++ [pos], ways := st.ways ++ [(ds.headD default).way], moveBeats := st.moveBeats ++ [beats],
                holdBeats := st.holdBeats ++ [0], landing := st.landing ++ [base + ds.length - 1] }
    else
      { st with holdBeats := (st.holdBeats.dropLast) ++ [st.holdBeats.getLastD 0 + beats] }
  { st with phases := st.phases ++ ds, pos }

/-- After someone drags a dancer, the places they chose become the request. -/
def chosenShape (targets : List Pt) : AskDraft :=
  { text := "Everyone lands on the place you chose", group := "shape",
    make := fun k => .forms k (.free (targets.map fun p => ⟨p.x, p.y, 1⟩)) (List.range targets.length) }

/-- Rows from the left and right groups, sliding in single file from the wings. -/
def compileEnter (ctx : Ctx) (moveIx : Nat) (shape : Shape) (st : PlanState) : PlanState :=
  let n := ctx.n
  let f := shape.formation n
  let slots := f.slots.map slotPt
  let leftIds := List.range ctx.left
  let rightIds := (List.range ctx.right).map (· + ctx.left)
  -- single-file only when each group exactly fills whole rows
  let trains : Bool := match shape with
    | .grid c r => r == 2 && ctx.left == c && ctx.right == c
    | _ => false
  let wingEdge : Int := 6700
  -- any other grid: stage left dancers take the stage left side of each row and enter along it, the same
  -- for stage right. Rows never mix, so nobody has to pass through anyone.
  let isGrid : Bool := match shape with
    | .grid c r => c * r == n && !trains
    | _ => false
  let (starts, assign) : List Pt × List Nat :=
    if isGrid then
      let order := sortBy' (fun k => -(slots.getD k default).x) (List.range n)
      let slSlots := order.take ctx.left
      let srSlots := order.drop ctx.left
      -- each side lines up in its wing in the same order it will land, so nobody overtakes anybody
      let startOf (k : Nat) (isLeft : Bool) : Pt :=
        let p := slots.getD k default
        let sameRow (l : List Nat) := l.filter fun q => (slots.getD q default).y == p.y
        if isLeft then
          let rank := ((sameRow slSlots).filter fun q => (slots.getD q default).x < p.x).length
          ⟨wingEdge + (rank : Int) * colGap, p.y⟩
        else
          let rank := ((sameRow srSlots).filter fun q => (slots.getD q default).x > p.x).length
          ⟨-wingEdge - (rank : Int) * colGap, p.y⟩
      let assignment : List Nat := (List.range n).map fun i =>
        if i < ctx.left then slSlots.getD i 0 else srSlots.getD (i - ctx.left) 0
      (assignment.zipIdx.map (fun (k, i) => startOf k (i < ctx.left)), assignment)
    else if trains then
      let c := ctx.left
      -- the left group takes the upstage row, the right group the downstage row
      let startFor (i : Nat) : Pt :=
        if i < c then
          let s := slots.getD i default
          let lowest := (slots.take c).foldl (fun m p => min m p.x) s.x
          ⟨s.x + (wingEdge - lowest), s.y⟩
        else
          let s := slots.getD i default
          let highest := (slots.drop c).foldl (fun m p => max m p.x) s.x
          ⟨s.x - (wingEdge + highest), s.y⟩
      ((List.range n).map startFor, List.range n)
    else
      let lane (k count : Nat) : Int := 4000 + ((2 * (k : Int) + 1 - (count : Int)) * (min 900 (3700 / (max 1 (count : Int))))) 
      let st0 := (List.range n).map fun i =>
        if i < ctx.left then ⟨wingEdge, lane i ctx.left⟩
        else ⟨-wingEdge, lane (i - ctx.left) ctx.right⟩
      (st0, improveAssign st0 slots 6 (List.range n))
  let targets := applyOverrides ctx moveIx (assign.map fun a => slots.getD a default)
  let edited := ctx.overrides.any (·.move == moveIx)
  let beats := beatsFor (maxDist starts targets) ctx.pace ctx.bpm 16
  let d : Draft := { label := s!"Enter: form a {shape.name}", kind := "enter",
                     paths := (starts.zip targets).map fun (a, b) => easePath a b,
                     bounds := ctx.envelope, beats }
  let asks : List AskDraft :=
    (if ctx.left > 0 then [{ text := s!"{ctx.left} dancers start in the stage left wing", group := "start", make := fun k => .startsIn k leftIds ctx.slWing }] else []) ++
    (if ctx.right > 0 then [{ text := s!"{ctx.right} dancers start in the stage right wing", group := "start", make := fun k => .startsIn k rightIds ctx.srWing }] else []) ++
    [if edited then chosenShape targets else { text := s!"Everyone lands on their own place in a {shape.name}", group := "shape", make := fun k => .forms k f assign }] ++
    (if trains && !edited then
      [{ text := "Each entering line holds its exact shape all the way in", group := "shape", make := fun k => .keepsShape k (linksFor leftIds targets ++ linksFor rightIds targets) }]
     else [])
  addDrafts st [d] asks targets

def compileForm (ctx : Ctx) (moveIx : Nat) (shape : Shape) (st : PlanState) : PlanState :=
  let n := ctx.n
  let f := shape.formation n
  let slots := f.slots.map slotPt
  let identity := List.range n
  let better := improveAssign st.pos slots 6 identity
  let mk (assign : List Nat) : Draft :=
    let targets := applyOverrides ctx moveIx (assign.map fun a => slots.getD a default)
    { label := s!"Form a {shape.name}", kind := "form",
      paths := (st.pos.zip targets).map fun (a, b) => easePath a b, bounds := stageRect,
      beats := beatsFor (maxDist st.pos targets) ctx.pace ctx.bpm 16 }
  let curved (assign : List Nat) : Draft :=
    let targets := applyOverrides ctx moveIx (assign.map fun a => slots.getD a default)
    (wayDrafts "sweep" st.pos targets ctx.pace ctx.bpm stageRect ctx.gap s!"Sweep into a {shape.name}" "form").headD default
  let options : List (String × List Nat × Draft) :=
    (if ctx.sweep then [("Sweep into the new shape along curves", better, curved better)] else []) ++
    (if better == identity then [("Straight to the new shape", identity, mk identity)]
     else [("Everyone walks straight to the place with their own number", identity, mk identity),
           ("Reassign places so paths don't cross", better, mk better)])
  let ideas : List (String × List Draft) := options.map fun (t, _, d) => (t, [d])
  let (st, ds, idx) := chooseIdea n ctx.bpm ctx.names st ctx.gap ideas
  let assign := (options.getD idx default).2.1
  let targets := applyOverrides ctx moveIx (assign.map fun a => slots.getD a default)
  let edited := ctx.overrides.any (·.move == moveIx)
  addDrafts st ds
    [if edited then chosenShape targets else { text := s!"Everyone lands on their own place in a {shape.name}", group := "shape", make := fun k => .forms k f assign },
     { text := "Everyone stays on stage while the shape changes", group := "stage", make := fun k => .staysIn k stageRect }] targets

/-- Trade the front and back lines. The direct idea walks them through each other; the second
    slides the lines half a gap apart first, so each dancer passes through a window. -/
def compileFlip (ctx : Ctx) (st : PlanState) : PlanState :=
  let n := ctx.n
  let ys := st.pos.map (·.y)
  let top := ys.foldl max (ys.headD 0)
  let bot := ys.foldl min (ys.headD 0)
  let mirror := top + bot
  let flipped := st.pos.map fun p => (⟨p.x, mirror - p.y⟩ : Pt)
  let direct : Draft :=
    { label := "Flip lines", kind := "flip", bounds := stageRect,
      paths := (st.pos.zip flipped).map fun (a, b) => easePath a b,
      beats := beatsFor (top - bot) ctx.pace ctx.bpm 16, way := "flip" }
  let shift : Int := colGap / 4
  let upper := (allDancers n).filter fun i => 2 * (st.pos.getD i default).y > mirror
  let lower := (allDancers n).filter fun i => 2 * (st.pos.getD i default).y ≤ mirror
  let isUpper (i : Nat) := upper.contains i
  let off (i : Nat) : Int := if isUpper i then shift else -shift
  let slid := st.pos.zipIdx.map fun (p, i) => (⟨p.x + off i, p.y⟩ : Pt)
  let crossed := slid.map fun p => (⟨p.x, mirror - p.y⟩ : Pt)
  let phaseOf (label : String) (a b : List Pt) (beats : Nat) : Draft :=
    { label, kind := "flip", bounds := stageRect, beats, way := "flip",
      paths := (a.zip b).map fun (p, q) => easePath p q }
  let window := [phaseOf "Flip: lines slide apart" st.pos slid 8,
                 phaseOf "Flip: lines pass through each other" slid crossed direct.beats,
                 phaseOf "Flip: lines settle" crossed flipped 8]
  let (st, ds, _) := chooseIdea n ctx.bpm ctx.names st ctx.gap
    [("Walk the two lines straight through each other", [direct]),
     ("Slide the lines apart so each dancer passes through a gap", window)]
  let groups := linksFor upper st.pos ++ linksFor lower st.pos
  let shapeAsks : List AskDraft :=
    if ds.length == 3 then
      [{ text := "While the lines slide apart, each line keeps its exact shape", group := "shape", make := fun k => .keepsShape k groups },
       { text := "While the lines pass through, each line keeps its exact shape", group := "shape", make := fun k => .keepsShape (k + 1) groups },
       { text := "While the lines settle, each line keeps its exact shape", group := "shape", make := fun k => .keepsShape (k + 2) groups }]
    else []
  let last := ds.length - 1
  addDrafts st ds
    ([{ text := "The lines really trade places: everyone ends at the mirror image of where they began", group := "shape", make := fun k => .flips k (k + last) (allDancers n) mirror }] ++ shapeAsks ++
     ((List.range ds.length).map fun j =>
       { text := "Everyone stays on stage during the flip", group := "stage", make := fun k => .staysIn (k + j) stageRect }))
    flipped

def compileRotate (ctx : Ctx) (quarters : Nat) (ccw : Bool) (st : PlanState) : PlanState :=
  (List.range quarters).foldl (fun st _ =>
    let c := centre
    let next := st.pos.map (rotPt c · ccw)
    let path := st.pos.map (rotatePath c · ccw)
    let r2s := st.pos.map fun p => distSq p c
    let far := r2s.foldl max 0
    let d : Draft :=
      { label := "Rotate a quarter turn", kind := "rotate", way := "orbit", bounds := stageRect, paths := path,
        beats := beatsFor (2 * isqrt far) ctx.pace ctx.bpm 16,
        rigid := (List.range ctx.n).filterMap (fun i =>
          if i == 0 then none else
          some ⟨i, 0, distSq (st.pos.getD i default) (st.pos.getD 0 default), 1⟩),
        orbits := (List.range ctx.n).map fun i => ⟨i, c.x, c.y, r2s.getD i 0⟩ }
    addDrafts st [d]
      ([{ text := "Rotating, every dancer stays exactly the same distance from the centre", group := "shape", make := fun k => .staysOnCircle k (List.range ctx.n) c.x c.y (r2s.headD 0) }].filter
          (fun _ => r2s.all (· == r2s.headD 0)) ++
       [{ text := "Everyone stays on stage during the rotation", group := "stage", make := fun k => .staysIn k stageRect }])
      next) st

/-- The inner ring turns one way and the outer ring the other, each on an exact circle. -/
def compileCounterRotate (ctx : Ctx) (quarters : Nat) (st : PlanState) : PlanState :=
  (List.range quarters).foldl (fun st _ =>
    let c := centre
    let r2s := st.pos.map fun p => distSq p c
    let far := r2s.foldl max 0
    let near := r2s.foldl min far
    let cut := (far + near) / 2
    let inner (i : Nat) := r2s.getD i 0 < cut
    let ids := allDancers ctx.n
    let path := ids.map fun i => rotatePath c (st.pos.getD i default) (inner i)
    let next := ids.map fun i => rotPt c (st.pos.getD i default) (inner i)
    let innerIds := ids.filter inner
    let outerIds := ids.filter (!inner ·)
    let d : Draft :=
      { label := "The rings turn against each other", kind := "rotate", way := "orbit", bounds := stageRect, paths := path,
        beats := beatsFor (2 * isqrt far) ctx.pace ctx.bpm 16,
        orbits := ids.map fun i => ⟨i, c.x, c.y, r2s.getD i 0⟩ }
    let circleAsk (g : List Nat) (t : String) : List AskDraft :=
      if g.isEmpty || !g.all (fun i => r2s.getD i 0 == r2s.getD (g.headD 0) 0) then [] else
      [{ text := t, group := "shape", make := fun k => .staysOnCircle k g c.x c.y (r2s.getD (g.headD 0) 0) }]
    addDrafts st [d]
      (circleAsk innerIds "The inner ring stays exactly round while it turns" ++ circleAsk outerIds "The outer ring stays exactly round while it turns" ++
       [{ text := "Everyone stays on stage while the rings turn", group := "stage", make := fun k => .staysIn k stageRect }])
      next) st

/-- Try a fancy way of travelling. If the checker turns it down, keep the record and stay in place instead. -/
def compileWay (ctx : Ctx) (way title label kind : String) (target : List Pt) (promise : String) (st : PlanState) : PlanState :=
  let ds := wayDrafts way st.pos target ctx.pace ctx.bpm stageRect ctx.gap label kind
  let still : Draft := { label := "Hold", kind := "hold", bounds := stageRect, beats := 8, paths := st.pos.map fun p => easePath p p }
  let (st, chosen, idx) := chooseIdea ctx.n ctx.bpm ctx.names st ctx.gap [(title, ds), ("Hold the shape instead", [still])]
  if idx != 0 then addDrafts st chosen [] st.pos else
  let last := chosen.length - 1
  addDrafts st chosen
    ([{ text := promise, group := "shape", make := fun k => .forms (k + last) (.free (target.map fun p => ⟨p.x, p.y, 1⟩)) (allDancers ctx.n) }] ++
     (List.range chosen.length).map fun j =>
       { text := s!"Everyone stays on stage during this move", group := "stage", make := fun k => .staysIn (k + j) stageRect }) target

/-- Neighbours around the group trade places, then the next neighbours do, each pair passing right shoulders. -/
def compileWeave (ctx : Ctx) (rounds : Nat) (st : PlanState) : PlanState :=
  (List.range (2 * rounds)).foldl (fun st round =>
    let ids := allDancers ctx.n
    let angle (i : Nat) : Int :=
      let p := st.pos.getD i default
      (Float.atan2 (Float.ofInt (p.y - centre.y)) (Float.ofInt (p.x - centre.x)) * 1000.0).toInt64.toInt
    let order := sortBy' angle ids
    let m := order.length
    let turned := if round % 2 == 0 then order else order.drop 1 ++ order.take 1
    let swapped := (List.range (m / 2)).foldl (fun (acc : List Pt) k =>
      let u := turned.getD (2 * k) 0
      let v := turned.getD (2 * k + 1) 0
      (acc.set u (st.pos.getD v default)).set v (st.pos.getD u default)) st.pos
    compileWay ctx "sweep" "Neighbours trade places, passing right shoulders" "Neighbours weave past each other" "weave" swapped
      "Every neighbour pair lands exactly on the other's place" st) st

/-- Re-form into two new upstage-downstage lines, if asked, then each line walks into its wing. -/
def compileLeave (ctx : Ctx) (moveIx : Nat) (newLines : Bool) (st : PlanState) : PlanState :=
  let n := ctx.n
  let st :=
    if newLines then
      let half := n / 2
      let nL := n - half
      let gapFor (count : Nat) : Int := min 1700 (7000 / (max 1 ((count : Int) - 1)))
      let col (x : Int) (count : Nat) : List Pt := (List.range count).map fun (k : Nat) =>
        ⟨x, 4000 + (2 * (k : Int) + 1 - (count : Int)) * gapFor count / 2⟩
      let slots := col (-colGap) half ++ col colGap nL
      let better := improveAssign st.pos slots 6 (List.range n)
      let targets := applyOverrides ctx moveIx (better.map fun a => slots.getD a default)
      let d : Draft :=
        { label := "Re-form into new lines", kind := "form", bounds := stageRect,
          paths := (st.pos.zip targets).map fun (a, b) => easePath a b,
          beats := beatsFor (maxDist st.pos targets) ctx.pace ctx.bpm 16 }
      addDrafts st [d]
        [{ text := s!"Everyone lands in two new lines, each a different mix of dancers", group := "shape", make := fun k => .forms k (.free (slots.map fun p => ⟨p.x, p.y, 1⟩)) better },
         { text := "Everyone stays on stage while the new lines form", group := "stage", make := fun k => .staysIn k stageRect }] targets
    else st
  let leftward := (allDancers n).filter fun i => (st.pos.getD i default).x ≥ 0
  let rightward := (allDancers n).filter fun i => (st.pos.getD i default).x < 0
  let xs (g : List Nat) := g.map fun i => (st.pos.getD i default).x
  let slShift : Int := 6700 - ((xs leftward).foldl min ((xs leftward).headD 0))
  let srShift : Int := -6700 - ((xs rightward).foldl max ((xs rightward).headD 0))
  let ends := st.pos.zipIdx.map fun (p, i) =>
    if leftward.contains i then (⟨p.x + slShift, p.y⟩ : Pt) else ⟨p.x + srShift, p.y⟩
  let d : Draft :=
    { label := if newLines then "Leave in the new lines" else "Leave the stage", kind := "exit", bounds := ctx.envelope,
      paths := (st.pos.zip ends).map fun (a, b) => easePath a b,
      beats := beatsFor (maxDist st.pos ends) ctx.pace ctx.bpm 16 }
  addDrafts st [d]
    [{ text := s!"{leftward.length} dancers finish off stage in the stage left wing", group := "end", make := fun k => .endsIn k leftward ctx.slWing },
     { text := s!"{rightward.length} dancers finish off stage in the stage right wing", group := "end", make := fun k => .endsIn k rightward ctx.srWing },
     { text := "Each line keeps its exact shape on the way off", group := "shape", make := fun k => .keepsShape k (linksFor leftward st.pos ++ linksFor rightward st.pos) }] ends

/-- Run a move for the dancers on stage only. Everyone in the wings stands still, in place, for its whole length. -/
def liftMove (ctx : Ctx) (st : PlanState) (f : Ctx → PlanState → PlanState) : PlanState :=
  let act := st.active
  if act.length == ctx.n then f ctx st else
  let sub : Ctx := { ctx with n := act.length, names := fun i => ctx.names (act.getD i 0), overrides := [],
                              left := (act.filter (· < ctx.left)).length, right := (act.filter (· ≥ ctx.left)).length }
  let out := f sub { pos := act.map fun i => st.pos.getD i default }
  let spread (home : List Pt) (l : List Pt) : List Pt := (List.range ctx.n).map fun i =>
    match act.idxOf? i with
    | some k => l.getD k default
    | none => home.getD i default
  let liftDraft (home : List Pt) (d : Draft) : Draft :=
    { d with bounds := ctx.envelope, rigid := [], orbits := [], paths := (List.range ctx.n).map fun i =>
        match act.idxOf? i with
        | some k => d.paths.getD k Path.rest
        | none => easePath (home.getD i default) (home.getD i default) }
  -- each group of phases the move made stays one group, so it stays one formation
  let lands := out.landing.drop 1
  let (st', _) := (lands.zip (out.frames.drop 1)).foldl (fun (acc : PlanState × Nat) (land, frame) =>
    let (s, from') := acc
    let ds := ((out.phases.drop from').take (land + 1 - from')).map (liftDraft st.pos)
    (addDrafts s ds [] (spread st.pos frame), land + 1)) (st, 0)
  st'

/-- Where someone goes when they leave the stage mid-routine: a column clear of those coming on. -/
def offSpot (far : Int) (side : Int) (rank : Nat) : Pt :=
  ⟨side * (far + ((rank / 4 : Nat) : Int) * 900), 1600 + ((rank % 4 : Nat) : Int) * 1600⟩

/-- Try the ways a group can cross. Lean decides whether they run into each other. -/
def crossIdeas (ctx : Ctx) (a b : List Pt) (label kind : String) : List (String × List Draft) :=
  let via (way : String) := wayDraftsAll way a b ctx.pace ctx.bpm ctx.envelope ctx.gap label kind
  [("Both groups cross at the same moment, straight", via "walk"),
   ("Both groups cross at the same moment, curving past each other", via "sweep"),
   ("Clear the stage first, then the others come on", via "staged")]

/-- The dancers on stage go off while those waiting come on and take their exact places. -/
def compileExchange (ctx : Ctx) (st : PlanState) : PlanState :=
  let ids := allDancers ctx.n
  let act := st.active
  let waiting := ids.filter fun i => !act.contains i
  let k := min act.length waiting.length
  if k == 0 then st else
  let goers := act.take k
  let comers := waiting.take k
  let places := goers.map fun i => st.pos.getD i default
  let assign := improveAssign (comers.map fun i => st.pos.getD i default) places 6 (List.range k)
  -- those leaving take the other wing column from the one the newcomers stand in
  let reach := (comers.map fun i => (st.pos.getD i default).x.natAbs).foldl max 0
  let inner : Int := ctx.envelope.xmax - 1800
  let far : Int := if (reach : Int) ≥ inner + 450 then inner else inner + 900
  let leftGoers := goers.filter fun i => (st.pos.getD i default).x ≥ 0
  let rightGoers := goers.filter fun i => (st.pos.getD i default).x < 0
  let targets := ids.map fun i =>
    match comers.idxOf? i with
    | some c => places.getD (assign.getD c 0) default
    | none =>
      match leftGoers.idxOf? i, rightGoers.idxOf? i with
      | some r, _ => offSpot far 1 r
      | _, some r => offSpot far (-1) r
      | _, _ => st.pos.getD i default
  let (st, ds, _) := chooseIdea ctx.n ctx.bpm ctx.names st ctx.gap (crossIdeas ctx st.pos targets "The cast changes" "exchange")
  let st := addDrafts st ds [] targets
  { st with active := (act.drop k) ++ comers }

/-- Everyone still waiting comes on, and the whole cast forms a shape. -/
def compileJoin (ctx : Ctx) (moveIx : Nat) (shape : Shape) (st : PlanState) : PlanState :=
  let ids := allDancers ctx.n
  let slots := (shape.formation ctx.n).slots.map slotPt
  let assign := improveAssign st.pos slots 6 ids
  let targets := applyOverrides ctx moveIx (assign.map fun a => slots.getD a default)
  let (st, ds, _) := chooseIdea ctx.n ctx.bpm ctx.names st ctx.gap (crossIdeas ctx st.pos targets s!"The rest come on: form a {shape.name}" "enter")
  let st := addDrafts st ds [] targets
  { st with active := ids }

/-! ## Steps

A step is a pattern of small moves on the counts. Because the dancers do it in unison, the shape holds
exactly, and each move starts and ends at rest on a beat, the way a real step lands. -/

/-- How far one step travels, in millimetres. -/
def stepSize : Int := 400

/-- The moves of an 8-count step, each as sideways, upstage and counts. -/
def stepMoves : String → List (Int × Int × Nat)
  | "stepTouch" => [(stepSize, 0, 2), (-stepSize, 0, 2), (-stepSize, 0, 2), (stepSize, 0, 2)]
  | "grapevine" => [(stepSize, 0, 2), (stepSize, 0, 2), (-stepSize, 0, 2), (-stepSize, 0, 2)]
  | "box" => [(0, stepSize, 2), (stepSize, 0, 2), (0, -stepSize, 2), (-stepSize, 0, 2)]
  | "chasse" => [(2 * stepSize, 0, 4), (-2 * stepSize, 0, 4)]
  | "turn" => [(0, 0, 8)]
  | "dhamaal" => [(0, -stepSize, 2), (0, stepSize, 2), (0, -stepSize, 2), (0, stepSize, 2)]
  | "chaal" => [(stepSize, 0, 2), (stepSize, 0, 2), (-stepSize, 0, 2), (-stepSize, 0, 2)]
  | "luddi" => [(stepSize, 0, 4), (-stepSize, 0, 4)]
  | "doTaali" => [(stepSize, 0, 2), (-stepSize, 0, 2), (stepSize, 0, 2), (-stepSize, 0, 2)]
  | "tranTaali" => [(stepSize, 0, 3), (-stepSize, 0, 3), (0, 0, 2)]
  | "thumka" => [(200, 0, 1), (-200, 0, 1), (200, 0, 1), (-200, 0, 1), (-200, 0, 1), (200, 0, 1), (-200, 0, 1), (200, 0, 1)]
  | "jhatka" => [(stepSize, 0, 2), (0, 0, 2), (-stepSize, 0, 2), (0, 0, 2)]
  | "kuthuStep" => [(300, 0, 1), (-300, 0, 1), (300, 0, 1), (-300, 0, 1), (-300, 0, 1), (300, 0, 1), (-300, 0, 1), (300, 0, 1)]
  | "massWalk" => [(0, -stepSize, 2), (0, -stepSize, 2), (0, stepSize, 2), (0, stepSize, 2)]
  | "tattaAdavu" => [(0, 0, 2), (0, 0, 2), (0, 0, 2), (0, 0, 2)]
  | "nattaAdavu" => [(stepSize, 0, 2), (-stepSize, 0, 2), (-stepSize, 0, 2), (stepSize, 0, 2)]
  | "kummi" => [(stepSize, 0, 2), (-stepSize, 0, 2), (0, 0, 2), (0, 0, 2)]
  | "kolattam" => [(stepSize, 0, 3), (-stepSize, 0, 3), (0, 0, 2)]
  | "jhummar" => [(stepSize, 0, 3), (-stepSize, 0, 3), (0, 0, 2)]
  | "sammi" => [(0, 0, 2), (stepSize, 0, 2), (0, 0, 2), (-stepSize, 0, 2)]
  | "gidda" => [(0, stepSize, 2), (0, -stepSize, 2), (stepSize, 0, 2), (-stepSize, 0, 2)]
  | "dodhiyu" => [(stepSize, 0, 2), (stepSize, 0, 2), (stepSize, 0, 2), (-3 * stepSize, 0, 2)]
  | "hookStep" => [(stepSize, 0, 2), (-stepSize, 0, 2), (0, -stepSize, 2), (0, stepSize, 2)]
  | "filmiBounce" => [(0, 200, 1), (0, -200, 1), (0, 200, 1), (0, -200, 1), (0, 200, 1), (0, -200, 1), (0, 200, 1), (0, -200, 1)]
  | "shimmy" => [(150, 0, 1), (-150, 0, 1), (-150, 0, 1), (150, 0, 1), (150, 0, 1), (-150, 0, 1), (-150, 0, 1), (150, 0, 1)]
  | "dappan" => [(300, 0, 1), (-300, 0, 1), (-300, 0, 1), (300, 0, 1), (0, -stepSize, 2), (0, stepSize, 2)]
  | "theenmaar" => [(stepSize, 0, 1), (-stepSize, 0, 1), (0, stepSize, 1), (0, -stepSize, 1), (-stepSize, 0, 1), (stepSize, 0, 1), (0, -stepSize, 1), (0, stepSize, 1)]
  | "kudittaMettu" => [(0, 0, 2), (0, 0, 2), (stepSize, 0, 2), (-stepSize, 0, 2)]
  | "karagattam" => [(stepSize, 0, 4), (-stepSize, 0, 4)]
  | "tatkar" => [(0, 0, 2), (0, 0, 2), (0, 0, 2), (0, 0, 2)]
  | "chakkar" => [(0, 0, 4), (0, 0, 4)]
  | "balance" => [(stepSize, 0, 3), (-stepSize, 0, 3), (0, 0, 2)]
  | "plie" => [(0, 0, 4), (0, 0, 4)]
  | "jazzSquare" => [(stepSize, stepSize, 2), (0, -stepSize, 2), (-stepSize, 0, 2), (0, 0, 2)]
  | "twoStep" => [(stepSize, 0, 2), (-stepSize, 0, 2), (-stepSize, 0, 2), (stepSize, 0, 2)]
  | "rockStep" => [(0, stepSize, 2), (0, -stepSize, 2), (0, -stepSize, 2), (0, stepSize, 2)]
  | "runningMan" => [(0, -stepSize, 2), (0, stepSize, 2), (0, -stepSize, 2), (0, stepSize, 2)]
  | "azonto" => [(stepSize, 0, 2), (0, 0, 2), (-stepSize, 0, 2), (0, 0, 2)]
  | "salsaBasic" => [(0, stepSize, 3), (0, -stepSize, 1), (0, -stepSize, 3), (0, stepSize, 1)]
  | "chaCha" => [(stepSize, 0, 2), (200, 0, 1), (-200, 0, 1), (-stepSize, 0, 2), (0, 0, 2)]
  | "ghoomar" => [(300, 0, 2), (-300, 0, 2), (0, 0, 4)]
  | "lavani" => [(400, 0, 2), (-400, 0, 2), (0, 0, 1), (0, 0, 1), (0, 0, 2)]
  | "bihu" => [(0, 300, 2), (0, -300, 2), (300, 0, 2), (-300, 0, 2)]
  | "chauka" => [(0, 0, 4), (400, 0, 2), (-400, 0, 2)]
  | "tribhangi" => [(300, 0, 4), (-300, 0, 4)]
  | "charleston" => [(0, 400, 2), (0, -400, 2), (0, -400, 2), (0, 400, 2)]
  | "contraction" => [(0, 0, 4), (0, 0, 4)]
  | _ => [(0, 0, 8)]

def stepTitle : String → String
  | "stepTouch" => "Step-touch"
  | "grapevine" => "Grapevine"
  | "box" => "Box step"
  | "chasse" => "Chassé"
  | "turn" => "Pivot turn"
  | "dhamaal" => "Dhamaal"
  | "chaal" => "Chaal"
  | "luddi" => "Luddi"
  | "doTaali" => "Be taali"
  | "tranTaali" => "Tran taali"
  | "thumka" => "Thumka"
  | "jhatka" => "Jhatka"
  | "kuthuStep" => "Kuthu step"
  | "massWalk" => "Mass walk"
  | "tattaAdavu" => "Tatta adavu"
  | "nattaAdavu" => "Natta adavu"
  | "kummi" => "Kummi"
  | "kolattam" => "Kolattam"
  | "jhummar" => "Jhummar"
  | "sammi" => "Sammi"
  | "gidda" => "Gidda"
  | "dodhiyu" => "Dodhiyu"
  | "hookStep" => "Hook step"
  | "filmiBounce" => "Filmi bounce"
  | "shimmy" => "Shimmy"
  | "dappan" => "Dappan step"
  | "theenmaar" => "Theenmaar"
  | "kudittaMettu" => "Kuditta mettu"
  | "karagattam" => "Karagattam"
  | "tatkar" => "Tatkar"
  | "chakkar" => "Chakkar"
  | "balance" => "Balancé"
  | "plie" => "Plié"
  | "jazzSquare" => "Jazz square"
  | "twoStep" => "Two-step"
  | "rockStep" => "Rock step"
  | "runningMan" => "Running man"
  | "azonto" => "Azonto"
  | "salsaBasic" => "Salsa basic"
  | "chaCha" => "Cha-cha"
  | "ghoomar" => "Ghoomar"
  | "lavani" => "Lavani"
  | "bihu" => "Bihu"
  | "chauka" => "Chauka"
  | "tribhangi" => "Tribhangi"
  | "charleston" => "Charleston"
  | "contraction" => "Contraction"
  | _ => "Hold"

def defaultSteps : List String := ["stepTouch", "grapevine", "box", "stepTouch", "chasse", "turn"]

/-- The steps a style reaches for when a request doesn't name any. -/
def stepsForGenre : String → List String
  | "Bhangra" => ["dhamaal", "chaal", "luddi", "jhummar", "sammi", "dhamaal"]
  | "Raas" => ["doTaali", "tranTaali", "dodhiyu", "turn"]
  | "Bollywood fusion" => ["thumka", "hookStep", "jhatka", "shimmy", "filmiBounce", "grapevine"]
  | "Kuthu" => ["kuthuStep", "massWalk", "dappan", "theenmaar", "kuthuStep"]
  | "South Indian fusion" => ["tattaAdavu", "nattaAdavu", "kummi", "kolattam", "karagattam"]
  | "Afrobeat" => ["azonto", "twoStep", "rockStep", "azonto"]
  | "Hip-hop" => ["twoStep", "rockStep", "runningMan", "twoStep"]
  | "Strings" => ["balance", "plie", "contraction", "chasse"]
  | "Kathak" => ["tatkar", "chakkar", "tatkar", "kudittaMettu"]
  | "Rajasthani folk" => ["ghoomar", "lavani", "ghoomar", "turn"]
  | "Odissi" => ["chauka", "tribhangi", "chauka", "turn"]
  | "Latin" => ["salsaBasic", "chaCha", "salsaBasic", "turn"]
  | "K-pop" => ["rockStep", "twoStep", "shimmy", "jhatka"]
  | "Jazz" => ["jazzSquare", "charleston", "jazzSquare", "turn"]
  | "Contemporary" => ["balance", "plie", "contraction", "chasse"]
  | _ => []

/-- Dance in place for `beats` counts. Dancers on stage do the steps; anyone offstage waits. -/
def stepDrafts (home : List Pt) (steps : List String) (beats : Nat) (dancing : Pt → Bool) (opposed : Bool := false) : List Draft := Id.run do
  let vocab := if steps.isEmpty then defaultSteps else steps
  let fits (dx dy : Int) := (home.filter dancing).all fun p =>
    stageRect.xmin ≤ p.x - dx.natAbs && p.x + dx.natAbs ≤ stageRect.xmax && stageRect.ymin ≤ p.y + dy && p.y + dy ≤ stageRect.ymax
  let wide : Int := home.foldl (fun m p => max m p.x.natAbs) (10500 : Nat)
  let bounds : Rect := if home.all dancing then stageRect else ⟨-wide, wide, 0, 8000⟩
  let shift (dx dy : Int) := home.map fun p => if dancing p then (⟨p.x + dx, p.y + dy⟩ : Pt) else p
  -- the two sides of the stage do the step as mirror images, opening and closing
  let shiftOpposed (dx dy : Int) := home.map fun p =>
    if !dancing p then p else (⟨if p.x ≥ 0 then p.x + dx else p.x - dx, p.y + dy⟩ : Pt)
  let mut out : List Draft := []
  for block in List.range (beats / 8) do
    let name := vocab.getD (block % vocab.length) "turn"
    let moves := stepMoves name
    -- check the whole step fits on stage before using it
    let (ok, _) := moves.foldl (fun (acc : Bool × Int × Int) m =>
      let cx := acc.2.1 + m.1
      let cy := acc.2.2 + m.2.1
      (acc.1 && fits cx cy, cx, cy)) (true, 0, 0)
    let title := if ok then stepTitle name else "Hold"
    let moves := if ok then moves else [(0, 0, 8)]
    let mut cx : Int := 0
    let mut cy : Int := 0
    for m in moves do
      let nx := cx + m.1
      let ny := cy + m.2.1
      let mirrored := opposed && block % 2 == 1 && ok
      let (from', to') := if mirrored then (shiftOpposed cx cy, shiftOpposed nx ny) else (shift cx cy, shift nx ny)
      out := out ++ [{ label := title, kind := "hold", bounds, beats := m.2.2, unison := !mirrored,
                       paths := (from'.zip to').map fun (p, q) => easePath p q }]
      cx := nx
      cy := ny
  let rest := beats % 8
  if rest > 0 then
    out := out ++ [{ label := "Hold", kind := "hold", bounds, beats := rest, paths := home.map fun p => easePath p p }]
  return out

/-- Fill time with steps. Everyone keeps their exact place in the shape while they dance. -/
def compileGroove (ctx : Ctx) (beats : Nat) (st : PlanState) : PlanState :=
  if beats == 0 then st else
  let home := st.pos
  let onNow := st.active
  let links := linksFor onNow home
  let dancing (p : Pt) := p.x.natAbs ≤ 6000
  let opposed := stepDrafts home ctx.steps beats dancing true
  let safe := ctx.sweep && opposed.all (fun d => (({ d with dmin := ctx.gap } : Draft).problems ctx.n ctx.bpm).isEmpty)
  let ds := if safe then opposed else stepDrafts home ctx.steps beats dancing
  let asks : List AskDraft := (List.range ds.length).flatMap fun j =>
    (if (ds.getD j default).unison then [{ text := "While dancing in place, the whole formation keeps its exact shape", group := "shape", make := fun k => .keepsShape (k + j) links }] else []) ++
    (if onNow.length == ctx.n then [{ text := "Everyone stays on stage while dancing in place", group := "stage", make := fun k => .staysIn (k + j) stageRect }] else [])
  addDrafts st ds asks home

/-! ## Compiling a plan -/

def compileAll (ctx : Ctx) (moves : List Move) (groove : Nat → Nat) (waiting : Nat := 0) : PlanState :=
  -- those waiting are the last of each side, in the column furthest from the stage
  let wl := min ctx.left (waiting / 2)
  let wr := min ctx.right (waiting - wl)
  let firstLeft := List.range (ctx.left - wl)
  let firstRight := (List.range (ctx.right - wr)).map (· + ctx.left)
  let active := firstLeft ++ firstRight
  let lane (k c : Nat) : Int := 4000 + (2 * (k : Int) + 1 - (c : Int)) * min 800 (3800 / (max 1 (c : Int)))
  let spot (i : Nat) : Pt :=
    if i < ctx.left then ⟨ctx.envelope.xmax - 900, lane (i - (ctx.left - wl)) wl⟩
    else ⟨ctx.envelope.xmin + 900, lane (i - ctx.left - (ctx.right - wr)) wr⟩
  let empty : PlanState := { pos := (List.range ctx.n).map spot, active }
  (moves.zipIdx).foldl (fun st (m, ix) =>
    let st := match m with
      | .enter s => liftMove ctx st (fun c s' => compileEnter c ix s s')
      | .form s => liftMove ctx st (fun c s' => compileForm c ix s s')
      | .flip => liftMove ctx st compileFlip
      | .rotate q ccw => liftMove ctx st (compileRotate · q ccw ·)
      | .counterRotate q => liftMove ctx st (compileCounterRotate · q ·)
      | .weave r => liftMove ctx st (compileWeave · r ·)
      | .ripple => liftMove ctx st fun c s' => compileWay c "canon" "One group after another steps out and back" "Ripple" "canon" s'.pos "Everyone is back on their own place after the ripple" s'
      | .burst => liftMove ctx st fun c s' => compileWay c "burst" "Gather at the centre and burst back out" "Burst" "burst" s'.pos "Everyone is back on their own place after the burst" s'
      | .snake => liftMove ctx st fun c s' => compileWay c "snake" "Follow the leader along a winding path" "Follow the leader" "snake" (snakeEnd s'.pos) "Everyone finishes in line at the end of the winding path" s'
      | .zipper => liftMove ctx st fun c s' => compileWay c "zipper" "The two sides pass through each other in the gaps" "Zipper" "zipper" (s'.pos.map fun p => ⟨-p.x, p.y⟩) "Everyone lands at the mirror image of where they began" s'
      | .exchange => compileExchange ctx st
      | .join s => compileJoin ctx ix s st
      | .leave nl => liftMove ctx st (fun c s' => compileLeave c ix nl s')
    let isKey := match m with
      | .enter _ | .form _ => true
      | _ => false
    let st := if isKey then { st with keys := st.keys ++ [(ix, st.phases.length - 1)] } else st
    match m with
    | .leave _ => st
    | _ => compileGroove ctx (groove ix) st) empty

/-- A geometric rule about a formation, such as a straight row or left-right symmetry. -/
structure Rule where
  name : String
  /-- `line` or `mirror` -/
  kind : String
  /-- which frame it describes -/
  frame : Nat
  /-- for a line: the dancers in order -/
  members : List Nat
  dx : Int
  dy : Int
  /-- for a mirror: the dancers who are each other's mirror image -/
  pairs : List (Nat × Nat)
  mirror : Int
  deriving Inhabited

/-- A routine set out on the grid: where every dancer is in each frame. -/
structure Scene where
  frames : List (List Pt)
  rules : List Rule
  /-- Counts to dance in each frame, and counts for each move. Empty means fill one minute. -/
  holds : List Nat := []
  moves : List Nat := []
  /-- The exact length in seconds, when the counts are given. -/
  seconds : Nat := 0
  /-- How the dancers travel between each formation and the next. Empty means walk. -/
  ways : List String := []
  genre : String := ""
  /-- For a routine from a prompt: the phase in which each formation lands. -/
  landing : List Nat := []
  /-- Paths shaped by hand: on the move after this formation, this dancer passes through this point. -/
  bends : List (Nat × Nat × Int × Int) := []
  deriving Inhabited

structure Built where
  plan : Plan
  routine : Routine
  labels : List (String × String)
  asks : List (String × String × Ask)
  rejected : List Rejected
  keys : List (Nat × Nat)
  error : Option String
  scene : Option Scene := none
  /-- A routine from a prompt, set out as formations, ready to be edited. -/
  derived : Option Scene := none
  heard : List String := []
  /-- The shortest length, in seconds, these moves can fit at the speed limit. -/
  minSeconds : Nat := 0
  /-- Moves the planner wanted to add but left out, for time or for safety. -/
  dropped : List Move := []
  /-- The allowance for mistakes, in millimetres: anyone may drift this far from the plan. -/
  drift : Int := 0

def Plan.exactBeats (p : Plan) : Nat := max 1 ((p.seconds * p.bpm + 30) / 60)

def wingWidth (p : Plan) : Int :=
  let m := max p.left p.right
  (((m : Int) - 1) * colGap + 1200)

def buildPlanOnce (p0 : Plan) (names : Names) (overrides : List Override) : Built :=
  let p1 := if p0.steps.isEmpty then { p0 with steps := stepsForGenre p0.genre } else p0
  let beats := p1.exactBeats
  let wing := wingWidth p1
  let env : Rect := ⟨-6000 - wing, 6000 + wing, 0, 8000⟩
  let ctxFor (pace : Int) : Ctx :=
    { n := p1.n, bpm := p1.bpm, pace, envelope := env,
      slWing := ⟨6600, 6000 + wing, 0, 8000⟩, srWing := ⟨-6000 - wing, -6600, 0, 8000⟩,
      names, overrides, left := p1.left, right := p1.right, steps := p1.steps, gap := p1.gap, sweep := p1.sweep }
  -- add the extra moves in order while there is still room to dance between them
  let isLeave : Move → Bool := fun | .leave _ => true | _ => false
  let withExtra (extra : List Move) : List Move :=
    (p1.moves.filter (!isLeave ·)) ++ extra ++ p1.moves.filter isLeave
  let beatsOf (moves : List Move) : Nat :=
    ((compileAll (ctxFor 2400) moves (fun _ => 0) p1.waiting).phases.map (·.beats)).foldl (· + ·) 0
  let chosenExtra := p1.extra.foldl (fun (acc : List Move) m =>
    let tried := acc ++ [m]
    -- an added move must fit the time, and must not leave the routine unsafe
    let drafts := (compileAll (ctxFor 2400) (withExtra tried) (fun _ => 0) p1.waiting).phases
    let safe := drafts.all fun d => (({ d with dmin := p1.gap } : Draft).problems p1.n p1.bpm).isEmpty
    if safe && beatsOf (withExtra tried) * 10 ≤ beats * 8 then tried else acc) []
  let p := { p1 with moves := withExtra chosenExtra }
  let usedAt (pace : Int) : Nat :=
    ((compileAll (ctxFor pace) p.moves (fun _ => 0) p.waiting).phases.map (·.beats)).foldl (· + ·) 0
  let pace := ([1200, 1800, 2400, 3000].find? (fun v => usedAt v ≤ beats)).getD 3300
  let ctx := ctxFor pace
  let used := usedAt pace
  let gaps := (p.moves.zipIdx.filter fun (m, _) => match m with | .leave _ => false | _ => true).map (·.2)
  let spare := beats - used
  let each := spare / max 1 gaps.length
  let lastGap := gaps.getLast?.getD 0
  let groove (ix : Nat) : Nat :=
    if !gaps.contains ix then 0
    else if ix == lastGap then spare - each * (gaps.length - 1) else each
  let st := compileAll ctx p.moves groove p.waiting
  let st := { st with phases := st.phases.map fun (d : Draft) => { d with dmin := p.gap } }
  let (phases, _) := st.phases.foldl (fun (acc, t) d =>
    (acc ++ [d.toPhase p.n t], t + d.beats * 4)) (([] : List Phase), 0)
  let total := (st.phases.map (·.beats)).foldl (· + ·) 0
  -- the exact tempo that makes the beats fill the requested length
  let cfg : Config :=
    { n := p.n, dmin := p.gap, vmax := vmaxMM, stage := env, ticksPerBeat := 4,
      bpmNum := total * 60, bpmDen := max 1 p.seconds, total := total * 4, seconds := p.seconds }
  let error := if used > beats then
      some s!"These moves need at least {(used * 60) / p.bpm + 1} seconds at the speed limit, but only {p.seconds} were asked for."
    else none
  { plan := p, routine := ⟨cfg, phases⟩, labels := st.phases.map fun d => (d.label, d.kind),
    asks := st.asks, rejected := st.rejected, keys := st.keys, error,
    minSeconds := (usedAt 3300 * 60) / max 1 p.bpm + 1,
    dropped := p1.extra.filter (!chosenExtra.contains ·),
    heard := (st.phases.filter (·.kind != "hold")).foldl (fun (acc : List String) d => if acc.getLast? == some d.label then acc else acc ++ [d.label]) [],
    derived := some { frames := st.frames, rules := [], holds := st.holdBeats, moves := st.moveBeats, seconds := p.seconds,
                      ways := st.ways, genre := p.genre, landing := st.landing } }

/-- Build a routine. If nobody waiting could safely come on, everyone starts on together instead,
    so no dancer spends the whole routine in the wings. -/
def buildPlan (p0 : Plan) (names : Names) (overrides : List Override) : Built :=
  let once := buildPlanOnce p0 names overrides
  let joins := once.plan.moves.any fun | .join _ => true | _ => false
  if p0.waiting > 0 && !joins then
    let isCast : Move → Bool := fun | .join _ | .exchange => true | _ => false
    buildPlanOnce { p0 with waiting := 0, extra := p0.extra.filter (!isCast ·), moves := p0.moves.filter (!isCast ·) } names overrides
  else once

end Choreo
