import Choreo.Planner
import Choreo.Language
import Choreo.Composition
import Lean.Data.Json
/-!
# Compiling a choreography program

Turns the program a person builds into the language of `Choreo.Language`. Not trusted: it only proposes
steps and contracts. `Step.ok` and the composition theorem decide whether they hold.
-/
open Lean

namespace Choreo

def _root_.List.at (s : List Pt) (i : Nat) : Pt := s.getD i default

/-- One operation as the editor stores it. -/
structure SurfaceOp where
  kind : String
  section' : String := ""
  title : String := ""
  shape : String := ""
  counts : Nat := 8
  quarters : Nat := 1
  ccw : Bool := true
  dx : Int := 0
  dy : Int := 0
  num : Int := 1
  den : Int := 1
  step : String := ""
  places : Option State := none
  /-- For a parallel move: the line kept between the groups, and each group's shape. -/
  line : Int := 0
  leftShape : String := "circle"
  rightShape : String := "circle"
  /-- Where this operation came from in the editor, so a result can find its row. -/
  index : Nat := 0
  deriving Inhabited

structure ProgramSpec where
  title : String := ""
  n : Nat := 8
  bpm : Nat := 120
  gap : Int := 600
  genre : String := ""
  start : String := "rows"
  startPlaces : Option State := none
  ops : List SurfaceOp := []
  transform : String := ""
  deriving Inhabited

/-! ## Named formations -/

def evenLanes (n : Nat) (gap : Int) : State :=
  let right := n / 2
  let left := n - right
  let d : Int := max (gap + 100) (min 900 (6000 / (max 1 ((n : Int) - 1))))
  let y0 : Int := 4000 - d * ((n : Int) - 1) / 2
  ((List.range left).map fun (k : Nat) => (⟨-3000, y0 + d * (2 * (k : Int))⟩ : Pt)) ++
  ((List.range right).map fun (k : Nat) => (⟨3000, y0 + d * (2 * (k : Int) + 1)⟩ : Pt))

def arcPlaces (n : Nat) : State :=
  (List.range n).map fun (i : Nat) =>
    let a : Float := 3.14159265358979 * (i.toFloat + 0.5) / n.toFloat
    ⟨(-(4200.0 * a.cos)).toInt64.toInt / 10 * 10, (1800.0 + 3600.0 * a.sin).toInt64.toInt / 10 * 10⟩

/-- Two groups pulled apart to either side, in lanes. -/
def splitPlaces (n : Nat) (gap : Int) : State :=
  (evenLanes n gap).map fun p => ⟨if p.x < 0 then p.x - 1500 else p.x + 1500, p.y⟩

/-- Pairs mirrored across the centre line. -/
def mirroredPlaces (n : Nat) : State :=
  (List.range n).map fun (i : Nat) =>
    let k : Int := (i / 2 : Nat)
    ⟨(if i % 2 == 0 then -1 else 1) * (1000 + k * 800), 2000 + k * 1100⟩

/-- Two parallel lines, half a space apart, so nobody shares a lane with anyone in the other line. -/
def staggeredLines (n : Nat) : State :=
  let back := n / 2
  let front := n - back
  -- the rows spread out as far as the stage allows, for any number of dancers
  let space : Int := min 1800 (6400 / (max 1 (front : Int)))
  let row (count : Nat) (y shift : Int) : State := (List.range count).map fun (k : Nat) =>
    ⟨(2 * (k : Int) + 1 - (count : Int)) * space / 2 + shift, y⟩
  row front 3000 (-space / 4) ++ row back 5000 (space / 4)

def namedPlaces (name : String) (n : Nat) (gap : Int) : State :=
  let shape (s : Shape) := s.formation n |>.slots |>.map slotPt
  match name with
  | "rows" => shape (.grid (n / 2 + n % 2) (if n % 2 == 0 then 2 else 1))
  | "grid" => shape (.grid (n / 2 + n % 2) (if n % 2 == 0 then 2 else 1))
  | "line" => shape .line
  | "diagonal" => shape .diagonal
  | "circle" => shape .circle
  | "wide circle" => ringPoints n centre 3315
  | "rings" => shape .rings
  | "vee" => shape .vee
  | "diamond" => shape .diamond
  | "windows" => shape .windows
  | "square" => shape .square
  | "cross" => shape .cross
  | "spiral" => shape .spiral
  | "lanes" => evenLanes n gap
  | "split" => splitPlaces n gap
  | "arc" => arcPlaces n
  | "symmetric" => mirroredPlaces n
  | "staggered" => staggeredLines n
  | _ => shape .circle

/-- A group's shape in its own half of the stage. -/
def halfPlaces (name : String) (ids : List Nat) (cx : Int) : List (Nat × Pt) :=
  let k := ids.length
  let at' (i : Nat) : Int × Int :=
    match name with
    | "line" => (cx, 4000 + (2 * (i : Int) + 1 - (k : Int)) * 500)
    | "rows" => (cx + (if i % 2 == 0 then -500 else 500), 4000 + (2 * ((i / 2 : Nat) : Int) + 1 - ((k + 1) / 2 : Nat)) * 650)
    | _ =>
      let a := 6.28318530718 * i.toFloat / (max 1 k).toFloat
      (cx + (1400.0 * a.cos).toInt64.toInt, 4000 + (1400.0 * a.sin).toInt64.toInt)
  ids.zipIdx.map fun (d, i) => (d, ⟨(at' i).1, (at' i).2⟩)

def placesWith (n : Nat) (l : List (Nat × Pt)) (s : State) : State :=
  (List.range n).map fun i => match l.find? (·.1 == i) with
    | some (_, p) => p
    | none => s.at i

/-! ## Compiling -/

structure CStep where
  name : String
  sectionName : String
  surface : Nat
  kind : String
  label : String
  step : Step
  requiresText : String
  ensuresText : String
  before : State
  after : State
  /-- The operation in the movement algebra, if this step is one: it moves the formation as a whole. -/
  algebra : Option Algebra.TOp := none

instance : Inhabited CStep := ⟨{ name := "", sectionName := "", surface := 0, kind := "", label := "", step := { op := .slide [] 0 }, requiresText := "", ensuresText := "", before := [], after := [] }⟩

structure CState where
  pos : State
  steps : List CStep := []

def groupsOf (s : State) (n : Nat) : List Nat × List Nat :=
  ((List.range n).filter fun i => (s.at i).x < 0, (List.range n).filter fun i => (s.at i).x ≥ 0)

def assignTo (from' places : State) : State :=
  let idx := improveAssign from' places 6 (List.range from'.length)
  idx.map fun k => places.getD k default

def compileOp (sp : ProgramSpec) (st : CState) (o : SurfaceOp) : CState :=
  let n := sp.n
  let s := st.pos
  let gap := sp.gap
  let add (name kind label : String) (step : Step) (rq en : String) (st : CState) (algebra : Option Algebra.TOp := none) : CState :=
    let next := step.op.next n st.pos
    { pos := next, steps := st.steps ++ [{ name, sectionName := o.section', surface := o.index, kind, label, step, requiresText := rq, ensuresText := en, before := st.pos, after := next, algebra }] }
  let uniform (dx dy : Int) : List (Int × Int) := (List.range n).map fun _ => (dx, dy)
  let shown (fallback : String) := if o.title.isEmpty then fallback else o.title
  match o.kind with
  | "move" =>
    let target := match o.places with
      | some p => p
      | none =>
        -- two dancers trade places: both formations are fine, and the walk between them is not
        if o.shape == "trade" then s.zipIdx.map fun (p, i) => if i == 0 then s.at 1 else if i == 1 then s.at 0 else p
        else assignTo s (namedPlaces o.shape n gap)
    let isCircle := o.shape == "circle" || o.shape == "wide circle"
    let r2 := distSq (target.at 0) centre
    let en : Pred := if o.places.isNone && isCircle then .onCircle (List.range n) centre.x centre.y r2 else .isAt target
    add (shown s!"Move to {o.shape}") "form" (shown s!"Move to {o.shape}")
      { op := .move target o.counts, ensures := en }
      "Dancers are on their own paths, so every pair must stay apart the whole way. Lean works out each pair's exact closest point."
      (if o.places.isNone && isCircle then "Everyone stands exactly on one circle." else s!"Everyone stands on their place in the {o.shape}.") st
  | "rotate" =>
    (List.range o.quarters).foldl (fun (st : CState) _ =>
      add (shown s!"Rotate {o.quarters * 90}°") "rotate" (shown "Rotate")
        { op := .turn centre o.ccw o.counts, requires := .separated n gap }
        s!"Everyone is at least {gap / 10} cm apart to begin with."
        "Every gap stays exactly as it was, at every moment of the turn, and each dancer stays on their own circle." st
        (if o.ccw then some (.rotate centre.x centre.y 1) else some (.rotate centre.x centre.y 3))) st
  | "translate" =>
    add (shown "Move everyone together") "form" (shown "Translate")
      { op := .slide (uniform o.dx o.dy) o.counts, requires := .separated n gap }
      s!"Everyone is at least {gap / 10} cm apart to begin with."
      "Every gap stays exactly as it was, at every moment." st (some (.translate o.dx o.dy))
  | "exchange" =>
    let (a, b) := groupsOf s n
    let dist : Int := (s.at (b.headD 0)).x - (s.at (a.headD 0)).x
    let ds := (List.range n).map fun i => if a.contains i then (dist, (0 : Int)) else (-dist, (0 : Int))
    add (shown "Exchange groups") "swap" (shown "Exchange groups")
      { op := .slide ds o.counts, requires := .twoGroups a b gap, ensures := .twoGroups a b gap }
      s!"Two groups in separate lanes: every member of one is at least {gap / 10} cm upstage or downstage of every member of the other."
      "The groups have traded sides, still in their lanes. Nobody meets anybody on the way." st
  | "wait" =>
    add (shown "Hold") "hold" "Hold" { op := .slide (uniform 0 0) o.counts, requires := .separated n gap }
      s!"Everyone is at least {gap / 10} cm apart." "Nobody moves." st (some (.translate 0 0))
  | "step" =>
    let moves := stepMoves o.step
    let title := stepTitle o.step
    let (st, _) := moves.foldl (fun (acc : CState × Nat) m =>
      let (st, _) := acc
      (add (shown title) "hold" title { op := .slide (uniform m.1 m.2.1) m.2.2, requires := .separated n gap }
        s!"Everyone is at least {gap / 10} cm apart." "They dance in unison, so every gap stays exactly as it was." st (some (.translate m.1 m.2.1)), 0)) (st, 0)
    st
  | "mirror" =>
    -- everyone walks straight across, so anyone crossing paths needs their own lane
    let (l, r) := groupsOf s n
    let ds := (List.range n).map fun i => (-2 * (s.at i).x, (0 : Int))
    add (shown "Mirror") "flip" (shown "Mirror")
      { op := .slide ds o.counts, requires := .twoGroups l r gap, ensures := .twoGroups l r gap }
      s!"Dancers crossing to the other side each have their own lane: at least {gap / 10} cm upstage or downstage of anyone crossing the other way."
      "Everyone stands at the mirror image of where they began. Every gap in the formation is what it was." st (some (.reflectV 0))
  | "scale" =>
    let target := (List.range n).map fun i =>
      let p := s.at i
      (⟨centre.x + (p.x - centre.x) * o.num / max 1 o.den, centre.y + (p.y - centre.y) * o.num / max 1 o.den⟩ : Pt)
    add (shown "Scale") "burst" (shown "Scale") { op := .move target o.counts, ensures := .isAt target }
      "Every pair must stay apart the whole way. Lean works out each pair's exact closest point."
      "Every gap has grown or shrunk by the same factor." st
  | "parallel" =>
    let (l, r) := groupsOf s n
    -- each group takes the places nearest it, so its own paths needn't cross
    let inGroup (g : List Nat) (name : String) (cx : Int) : List (Nat × Pt) :=
      let places := (halfPlaces name g cx).map (·.2)
      let idx := improveAssign (g.map s.at) places 6 (List.range g.length)
      g.zipIdx.map fun (d, k) => (d, places.getD (idx.getD k 0) default)
    let target := placesWith n (inGroup l o.leftShape (o.line - 3000) ++ inGroup r o.rightShape (o.line + 3000)) s
    let pre : Pred := .splitAt l r o.line gap
    add (shown "Two groups move at once") "parallel" (shown "Parallel")
      { op := .par l r o.line target o.counts, requires := pre, ensures := .splitAt l r o.line gap }
      s!"A line keeps the two groups apart: everyone on one side, everyone else at least {gap / 10} cm past it."
      "Each group has formed its shape on its own side, on the same count." st
  | _ => st

/-! ## Whole-program transformations -/

def Pt.mapT (t : String) (p : Pt) : Pt :=
  match t with
  | "mirror" => ⟨-p.x, p.y⟩
  | "half" => ⟨-p.x, 8000 - p.y⟩
  | "upstage" => ⟨p.x, p.y + 500⟩
  | _ => p

def Pred.mapT (t : String) : Pred → Pred
  | .isAt places => .isAt (places.map (Pt.mapT t))
  | .onCircle w cx cy r => let c := Pt.mapT t ⟨cx, cy⟩; .onCircle w c.x c.y r
  | .both p q => .both (Pred.mapT t p) (Pred.mapT t q)
  | .splitAt a b line d => if t == "mirror" || t == "half" then .splitAt b a (-line - d) d else .splitAt a b line d
  | p => p

def Op.mapT (t : String) : Op → Op
  | .move target b => .move (target.map (Pt.mapT t)) b
  | .slide ds b => .slide (if t == "mirror" then ds.map (fun d => (-d.1, d.2)) else if t == "half" then ds.map (fun d => (-d.1, -d.2)) else ds) b
  | .turn c ccw b => .turn (Pt.mapT t c) (if t == "mirror" then !ccw else ccw) b
  | .par l r line target b =>
    let tg := target.map (Pt.mapT t)
    if t == "mirror" || t == "half" then .par r l (-line - 600) tg b else .par l r line tg b

def applyTransform (sp : ProgramSpec) (t : String) (steps : List CStep) : List CStep :=
  if t != "mirror" && t != "half" && t != "upstage" then steps else
  steps.map fun c =>
    let before := c.before.map (Pt.mapT t)
    { c with before, after := c.after.map (Pt.mapT t),
             step := { op := Op.mapT t c.step.op,
                       requires := Pred.mapT t c.step.requires, ensures := Pred.mapT t c.step.ensures } }

/-- Play the program backwards: each step runs from where it ended to where it began. -/
def reverseSteps (sp : ProgramSpec) (steps : List CStep) : List CStep :=
  steps.reverse.map fun c =>
    let op : Op := match c.step.op with
      | .move _ b => .move c.before b
      | .slide ds b => .slide (ds.map fun d => (-d.1, -d.2)) b
      | .turn cen ccw b => .turn cen (!ccw) b
      | .par l r line _ b => .par l r line c.before b
    -- a reversed step keeps its requirement only if that is still true where it now starts
    { c with before := c.after, after := c.before, name := s!"{c.name}, reversed", step := { op, requires := c.step.ensures, ensures := c.step.requires } }

/-! ## Building the routine -/

/-- Why a requirement isn't met, in plain words, naming dancers. -/
def Pred.whyNot (names : Names) (s : State) : Pred → String
  | .twoGroups a b d =>
    let bad := a.findSome? fun x => (b.find? fun y => !(decide (d ≤ (s.at x).y - (s.at y).y) || decide (d ≤ (s.at y).y - (s.at x).y))).map (x, ·)
    match bad with
    | some (x, y) => s!"{names x} and {names y} are in different groups but only {((s.at x).y - (s.at y).y).natAbs / 10} cm apart front to back, so they don't have separate lanes"
    | none => "The two groups are not in separate lanes"
  | .splitAt a b line d =>
    match a.find? (fun x => !decide ((s.at x).x ≤ line)), b.find? (fun y => !decide (line + d ≤ (s.at y).x)) with
    | some x, _ => s!"{names x} is on the wrong side of the line between the groups"
    | _, some y => s!"{names y} is too close to the line between the groups"
    | _, _ => "The groups are not on their own sides"
  | .separated n d =>
    let pairs := (List.range n).flatMap fun i => (List.range i).map (i, ·)
    match pairs.find? (fun (i, j) => !decide (d * d ≤ gapSq' (s.at i) (s.at j))) with
    | some (i, j) => s!"{names i} and {names j} start closer than {d / 10} cm"
    | none => "Dancers start too close"
  | _ => "The state before this step doesn't meet its requirement"

def buildProgram (sp : ProgramSpec) (_names : Names) : Built × List CStep :=
  let start : State := match sp.startPlaces with
    | some p => p
    | none => namedPlaces sp.start sp.n sp.gap
  let compiled := (sp.ops.foldl (compileOp sp) { pos := start }).steps
  let steps :=
    if sp.transform == "reverse" then reverseSteps sp compiled
    else applyTransform sp sp.transform compiled
  let steps := if sp.transform.isEmpty then steps else steps.map fun c => { c with algebra := none }
  let beats := (steps.map (·.step.op.beats)).foldl (· + ·) 0
  let seconds := max 1 ((beats * 60 + sp.bpm / 2) / max 1 sp.bpm)
  let every := steps.flatMap (fun c => c.before ++ c.after) ++ (if steps.isEmpty then start else [])
  let wide : Int := every.foldl (fun m p => max m p.x.natAbs) (6000 : Nat)
  let env : Rect := ⟨-(wide + 500), wide + 500, 0, 8000⟩
  let cfg : Config :=
    { n := sp.n, dmin := sp.gap, vmax := vmaxMM, stage := env, ticksPerBeat := 4,
      bpmNum := beats * 60, bpmDen := seconds, total := beats * 4, seconds }
  let drafts : List Draft := steps.map fun c =>
    { label := c.label, kind := c.kind, beats := c.step.op.beats, bounds := env, dmin := sp.gap,
      paths := (List.range sp.n).map (c.step.op.pathOf sp.n c.before) }
  let (phases, _) := drafts.foldl (fun (acc, t) d => (acc ++ [d.toPhase sp.n t], t + d.beats * 4)) (([] : List Phase), 0)
  -- after a whole-routine transformation, the routine starts where its first step starts
  let first := match steps.head? with
    | some c => c.before
    | none => start
  let frames := first :: (steps.map (·.after))
  let plan : Plan := { seconds, bpm := (beats * 60) / max 1 seconds, genre := if sp.genre.isEmpty then "Cinematic" else sp.genre,
                       n := sp.n, left := 0, right := 0, moves := [], gap := sp.gap }
  let built : Built :=
    { plan, routine := ⟨cfg, phases⟩, labels := drafts.map fun d => (d.label, d.kind), asks := [], rejected := [], keys := [], error := none,
      heard := (steps.map (·.name)).foldl (fun acc x => if acc.getLast? == some x then acc else acc ++ [x]) [],
      derived := some { frames, rules := [], holds := [], moves := steps.map (·.step.op.beats), seconds, genre := plan.genre,
                        landing := (List.range steps.length) } }
  -- when every movement can run, the routine's safety comes from the movements, with no separate check
  let rec allOk : List CStep → State → Bool
    | [], _ => true
    | c :: cs, cur => c.step.op.enabled cfg cur && allOk cs c.after
  ({ built with structural := !steps.isEmpty && allOk steps first }, steps)

/-! ## Reading a program from the editor -/

def jsonState (j : Json) : Option State :=
  match j with
  | .arr ps => some (ps.toList.filterMap fun p => match p with
      | .arr #[x, y] => match x.getInt?, y.getInt? with
        | .ok a, .ok b => some ⟨a, b⟩
        | _, _ => none
      | _ => none)
  | _ => none

partial def readOps (sectionName : String) (next : Nat → Nat) (j : Json) : List SurfaceOp :=
  match j with
  | .arr items => items.toList.zipIdx.flatMap fun (o, k) =>
    let str (f : String) (d : String := "") := (o.getObjValAs? String f).toOption.getD d
    let nat (f : String) (d : Nat) := (o.getObjValAs? Nat f).toOption.getD d
    let int (f : String) (d : Int) := (o.getObjValAs? Int f).toOption.getD d
    let sec := str "section" sectionName
    let kind := str "kind"
    if kind == "repeat" then
      let times := nat "times" 2
      let inner := match o.getObjVal? "ops" with
        | .ok ops => readOps sec next ops
        | _ => []
      (List.range times).flatMap fun _ => inner.map fun x => { x with index := nat "index" (next k) }
    else
      [{ kind, section' := sec, title := str "title", shape := str "shape", counts := nat "counts" 8,
         quarters := nat "quarters" 1, ccw := (o.getObjValAs? Bool "ccw").toOption.getD true,
         dx := int "dx" 0, dy := int "dy" 0, num := int "num" 1, den := int "den" 1, step := str "step",
         places := (o.getObjVal? "places").toOption.bind jsonState, line := int "line" 0,
         leftShape := str "leftShape" "circle", rightShape := str "rightShape" "circle",
         index := nat "index" (next k) }]
  | _ => []

def readProgram (j : Json) : Option ProgramSpec :=
  match j.getObjVal? "program" with
  | .ok p =>
    let sections := match p.getObjVal? "sections" with
      | .ok (.arr ss) => ss.toList
      | _ => []
    let (ops, _) := sections.foldl (fun (acc : List SurfaceOp × Nat) sec =>
      let (all, base) := acc
      let name := (sec.getObjValAs? String "name").toOption.getD ""
      let raw := match sec.getObjVal? "ops" with
        | .ok o => o
        | _ => Json.arr #[]
      let got := readOps name (· + base) raw
      (all ++ got, base + (match raw with | .arr a => a.size | _ => 0))) ([], 0)
    some { title := (p.getObjValAs? String "title").toOption.getD "", n := (p.getObjValAs? Nat "n").toOption.getD 8,
           bpm := (p.getObjValAs? Nat "bpm").toOption.getD 120, gap := (p.getObjValAs? Int "gap").toOption.getD 600,
           genre := (p.getObjValAs? String "genre").toOption.getD "", start := (p.getObjValAs? String "start").toOption.getD "rows",
           startPlaces := (p.getObjVal? "startPlaces").toOption.bind jsonState, ops,
           transform := (j.getObjValAs? String "transform").toOption.getD "" }
  | _ => none

end Choreo
