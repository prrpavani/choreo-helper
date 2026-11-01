import Choreo.Planner
/-!
# Routines set out on a grid

The stage is marked in rows A to E and columns 1 to 9, and the wings have marked places too. A scene
says where each dancer is in each frame. As with the planner, nothing here is trusted: it only
proposes paths and rules, and Lean decides whether they hold.
-/
namespace Choreo

def colX (c : Nat) : Int := ((c : Int) - 5) * 1200
def rowY (r : Nat) : Int := 7000 - (r : Int) * 1500
def wingStep : Int := 1200
def wingStart : Int := 6900
def sceneEnvelope : Rect := ⟨-10500, 10500, 0, 8000⟩
def slWingRect : Rect := ⟨6600, 10500, 0, 8000⟩
def srWingRect : Rect := ⟨-10500, -6600, 0, 8000⟩
def Pt.onStage (p : Pt) : Bool := stageRect.xmin ≤ p.x && p.x ≤ stageRect.xmax
def rowLetters : Array String := #["A", "B", "C", "D", "E"]

def rowName (y : Int) : String :=
  match (List.range 5).find? (fun r => rowY r == y) with
  | some r => s!"Row {rowLetters.getD r "?"}"
  | none => "A row"

def colName (x : Int) : String :=
  match (List.range 9).find? (fun c => colX (c + 1) == x) with
  | some c => s!"Column {c + 1}"
  | none => "A column"

/-- Sort dancers by a key, smallest first. -/
def sortBy (key : Nat → Int) (l : List Nat) : List Nat :=
  l.foldr (fun x acc =>
    let (lo, hi) := acc.partition (fun y => key y < key x)
    lo ++ x :: hi) []

def evenStep (coords : List Int) : Option Int :=
  match coords with
  | a :: b :: _ =>
    let step := b - a
    if (coords.zip coords.tail).all (fun (u, v) => v - u == step) && step != 0 then some step else none
  | _ => none

/-- Groups of dancers on stage sharing the same value of `key`. -/
def groupsBy (pos : List Pt) (key : Pt → Int) : List (Int × List Nat) :=
  let on := (List.range pos.length).filter fun i => (pos.getD i default).onStage
  let vals := on.foldl (fun acc i =>
    let v := key (pos.getD i default)
    if acc.contains v then acc else acc ++ [v]) ([] : List Int)
  vals.map fun v => (v, on.filter fun i => key (pos.getD i default) == v)

/-- The rules that are true of a frame: straight rows and columns, and left-right symmetry. -/
def rulesOfFrame (f : Nat) (pos : List Pt) : List Rule :=
  let at' (i : Nat) := pos.getD i default
  let rows := (groupsBy pos (·.y)).filterMap fun (y, g) =>
    if g.length < 3 then none else
    let ordered := sortBy (fun i => (at' i).x) g
    match evenStep (ordered.map fun i => (at' i).x) with
    | some step => some { name := rowName y, kind := "line", frame := f, members := ordered, dx := step, dy := 0, pairs := [], mirror := 0 }
    | none => none
  let cols := (groupsBy pos (·.x)).filterMap fun (x, g) =>
    if g.length < 3 then none else
    let ordered := sortBy (fun i => (at' i).y) g
    match evenStep (ordered.map fun i => (at' i).y) with
    | some step => some { name := colName x, kind := "line", frame := f, members := ordered, dx := 0, dy := step, pairs := [], mirror := 0 }
    | none => none
  let on := (List.range pos.length).filter fun i => (at' i).onStage
  let partner (i : Nat) := on.find? fun j => (at' j).x == -(at' i).x && (at' j).y == (at' i).y
  let pairs := on.filterMap fun i =>
    match partner i with
    | some j => if i ≤ j then some (i, j) else none
    | none => none
  let symmetric := on.length ≥ 2 && on.all (fun i => (partner i).isSome)
  rows ++ cols ++ (if symmetric then [{ name := "Left-right symmetry", kind := "mirror", frame := f, members := [], dx := 0, dy := 0, pairs, mirror := 0 }] else [])

def detectRules (frames : List (List Pt)) : List Rule :=
  frames.zipIdx.flatMap fun (pos, f) => rulesOfFrame f pos

def isStill (a b : List Pt) (i : Nat) : Bool := a.getD i default == b.getD i default

def nameList (names : Names) (l : List Nat) : String :=
  match l with
  | [] => ""
  | [a] => names a
  | _ => ", ".intercalate (l.dropLast.map names) ++ " and " ++ names (l.getLast?.getD 0)

/-- The route from one frame to the next, with what it promises. -/
def transition (names : Names) (n : Nat) (a b : List Pt) (k : Nat) (frameNo : Nat) (pace : Int) (envelope : Rect := sceneEnvelope)
    (slWing : Rect := slWingRect) (srWing : Rect := srWingRect) (way : String := "walk") (gap : Int := dminMM) (bends : List (Nat × Int × Int) := []) :
    List Draft × List (String × String × Ask) :=
  let ids := List.range n
  let offA := ids.filter fun i => !(a.getD i default).onStage
  let offB := ids.filter fun i => !(b.getD i default).onStage
  let entering := offA.filter fun i => (b.getD i default).onStage
  let leaving := offB.filter fun i => (a.getD i default).onStage
  let still := ids.filter fun i => isStill a b i && (a.getD i default).onStage
  let side (l : List Nat) (pos : List Pt) (sl : Bool) := l.filter fun i => (decide ((pos.getD i default).x > 0)) == sl
  let anyOff := !offA.isEmpty || !offB.isEmpty
  let kind := if !entering.isEmpty then "enter" else if !leaving.isEmpty then "exit" else "form"
  let label := if !entering.isEmpty then s!"{nameList names entering} {if entering.length == 1 then "comes" else "come"} in" else if !leaving.isEmpty then s!"{nameList names leaving} {if leaving.length == 1 then "leaves" else "leave"}" else s!"Move to formation {frameNo}"
  let bounds := if anyOff then envelope else stageRect
  let d : Draft :=
    { label, kind, bounds,
      paths := (a.zip b).map fun (p, q) => easePath p q,
      beats := beatsFor (maxDist a b) pace 120 16 }
  let plain : List Draft := if way == "walk" then [d] else wayDrafts way a b pace 120 bounds gap label kind
  -- a path shaped by hand: the dancer passes through the chosen point, and the move takes as long as that needs
  let ds : List Draft := match plain, bends with
    | [one], _ :: _ =>
      let far := bends.foldl (fun m (i, x, y) =>
        let p : Pt := ⟨x, y⟩
        max m (isqrt (distSq (a.getD i default) p) + isqrt (distSq p (b.getD i default)))) 0
      [{ one with
          beats := max one.beats (beatsFor far pace 120 8)
          paths := one.paths.zipIdx.map fun (path, i) =>
            match bends.find? (·.1 == i) with
            | some (_, x, y) => curvePath (a.getD i default) ⟨x, y⟩ (b.getD i default) bounds
            | none => path }]
    | l, _ => l
  let k' := k + ds.length - 1
  let target := b
  let asks : List (String × String × Ask) :=
    (let g := side entering a true
     if g.isEmpty then [] else
     [("start", s!"{nameList names g} {if g.length == 1 then "starts" else "start"} offstage in the stage left wing", .startsIn k g slWing),
      ("shape", s!"{nameList names g} {if g.length == 1 then "comes" else "come"} in and {if g.length == 1 then "lands" else "land"} on stage", .endsIn k' g stageRect)]) ++
    (let g := side entering a false
     if g.isEmpty then [] else
     [("start", s!"{nameList names g} {if g.length == 1 then "starts" else "start"} offstage in the stage right wing", .startsIn k g srWing),
      ("shape", s!"{nameList names g} {if g.length == 1 then "comes" else "come"} in and {if g.length == 1 then "lands" else "land"} on stage", .endsIn k' g stageRect)]) ++
    (let g := side leaving b true
     if g.isEmpty then [] else [("end", s!"{nameList names g} {if g.length == 1 then "finishes" else "finish"} offstage in the stage left wing", .endsIn k' g slWing)]) ++
    (let g := side leaving b false
     if g.isEmpty then [] else [("end", s!"{nameList names g} {if g.length == 1 then "finishes" else "finish"} offstage in the stage right wing", .endsIn k' g srWing)]) ++
    [("shape", s!"Everyone lands on their place in formation {frameNo}", .forms k' (.free (target.map fun p => ⟨p.x, p.y, 1⟩)) ids)] ++
    (if way == "walk" && still.length ≥ 2 && still.length < n then
      [("shape", s!"{nameList names still} hold their exact shape while the others move", .keepsShape k (linksFor still a))]
     else []) ++
    (if anyOff then [] else (List.range ds.length).map fun j => ("stage", "Everyone stays on stage", .staysIn (k + j) stageRect))
  (ds, asks)

/-- What each rule promises while its frame is held, and across the next move if its dancers stay. -/
def ruleAsks (r : Rule) (holdPhase : Option Nat) (landing : Option Nat) (next : Option (Nat × List Pt × List Pt)) : List (String × String × Ask) :=
  if r.kind == "mirror" then
    (landing.map (fun k => ("shape", s!"{r.name}: every dancer has a partner at their mirror image", Ask.endsMirrored k r.pairs r.mirror))).toList ++
    (if landing.isNone then (holdPhase.map (fun k => ("shape", s!"{r.name}: every dancer has a partner at their mirror image", Ask.endsMirrored k r.pairs r.mirror))).toList else [])
  else
    (landing.map (fun k => ("shape", s!"{r.name} lands straight and evenly spaced", Ask.endsInLine k r.members r.dx r.dy))).toList ++
    (holdPhase.map (fun k => ("shape", s!"{r.name} stays straight and evenly spaced while held", Ask.keepsLine k r.members r.dx r.dy))).toList ++
    (match next with
     | some (k, a, b) =>
       if r.members.all (isStill a b) then
         [("shape", s!"{r.name} stays straight and evenly spaced while the others move", Ask.keepsLine k r.members r.dx r.dy)]
       else []
     | none => [])

/-- How long the music runs for a scene, in beats: one minute at 120 beats per minute. -/
def sceneBeats : Nat := 120

def buildScene (sc : Scene) (names : Names) (steps : List String := []) (gap : Int := dminMM) : Built :=
  let n := (sc.frames.headD []).length
  let steps := if steps.isEmpty then stepsForGenre sc.genre else steps
  let frames := sc.frames
  let frameAt (f : Nat) := frames.getD f []
  let timed := !sc.moves.isEmpty
  -- wide wings: a routine from a prompt can line its dancers up further off than the marked places
  let wide : Int := frames.foldl (fun m f => f.foldl (fun m p => max m p.x.natAbs) m) (10500 : Nat)
  let envelope : Rect := ⟨-wide, wide, 0, 8000⟩
  let slWing : Rect := ⟨6600, wide, 0, 8000⟩
  let srWing : Rect := ⟨-wide, -6600, 0, 8000⟩
  let wayOf (f : Nat) : String := sc.ways.getD f "walk"
  let bendsOf (f : Nat) : List (Nat × Int × Int) := (sc.bends.filter (·.1 == f)).map (·.2)
  let sumBeats (ds : List Draft) : Nat := (ds.map (·.beats)).foldl (· + ·) 0
  -- share a move's counts across its parts, keeping their proportions
  let fit (f : Nat) (ds : List Draft) : List Draft :=
    -- a bent path may need longer than the counts it was given
    let want := max (sc.moves.getD f (sumBeats ds)) (if (bendsOf f).isEmpty then 0 else sumBeats ds)
    let current := sumBeats ds
    if !timed || want == current || current == 0 || want < ds.length then ds else
    let scaled := ds.map fun d => { d with beats := max 1 (d.beats * want / current) }
    let others := sumBeats scaled.dropLast
    match scaled.getLast? with
    | some l => if want > others then scaled.dropLast ++ [{ l with beats := want - others }] else scaled
    | none => scaled
  let moveDrafts (f : Nat) := fit f (transition names n (frameAt f) (frameAt (f + 1)) 0 (f + 2) 1500 envelope slWing srWing (wayOf f) gap (bendsOf f)).1
  let moved := ((List.range (frames.length - 1)).map fun f => sumBeats (moveDrafts f)).foldl (· + ·) 0
  let spare := if sceneBeats > moved then sceneBeats - moved else 8 * frames.length
  let each := spare / frames.length / 8 * 8
  let lastHold := spare - each * (frames.length - 1)
  -- hold and dance in frame f, then move to frame f + 1
  let built := (List.range frames.length).foldl (fun (acc : List Draft × List (String × String × Ask) × List (Nat × Nat)) f =>
    let (ds, asks, keys) := acc
    let pos := frameAt f
    let landing : Option Nat := if f == 0 then none else some (ds.length - 1)
    let keys := keys ++ [(f, landing.getD 0)]
    let beats := if timed then sc.holds.getD f 0 else if f + 1 == frames.length then lastHold else each
    let holds := stepDrafts pos steps beats Pt.onStage
    let onNow := (List.range n).filter fun i => (pos.getD i default).onStage
    let holdIxs := (List.range holds.length).map (· + ds.length)
    let shapeAsks : List (String × String × Ask) := holdIxs.flatMap fun k =>
      if onNow.length ≥ 2 then [("shape", "While dancing in place, everyone on stage keeps their exact shape", .keepsShape k (linksFor onNow pos))] else []
    let next := if f + 1 < frames.length && wayOf f == "walk" then some (ds.length + holds.length, pos, frameAt (f + 1)) else none
    let rules := sc.rules.filter (·.frame == f)
    let ruleList := rules.flatMap fun r =>
      -- a mirror is only claimed where the step has come home: at the end of the last phase of the hold
      (ruleAsks r (if r.kind == "mirror" then holdIxs.getLast? else holdIxs.head?) landing next) ++
      (if r.kind == "line" then (holdIxs.drop 1).map fun k => ("shape", s!"{r.name} stays straight and evenly spaced while held", Ask.keepsLine k r.members r.dx r.dy) else [])
    -- the first formation is a real request too: everyone has to be on their own mark
    let firstMarks : List (String × String × Ask) :=
      match (if f == 0 then holdIxs.getLast? else none) with
      | some k => [("shape", "Everyone starts on their place in formation 1", .forms k (.free (pos.map fun p => ⟨p.x, p.y, 1⟩)) (List.range n))]
      | none => []
    let ds' := ds ++ holds
    let asks' := asks ++ firstMarks ++ shapeAsks ++ ruleList
    if f + 1 < frames.length then
      let (d, more) := transition names n pos (frameAt (f + 1)) ds'.length (f + 2) 1500 envelope slWing srWing (wayOf f) gap (bendsOf f)
      (ds' ++ fit f d, asks' ++ more, keys)
    else (ds', asks', keys)) ([], [], [])
  let (ds, asks, keys) := built
  let ds := ds.map fun (d : Draft) => { d with dmin := gap }
  let (phases, _) := ds.foldl (fun (acc, t) d =>
    (acc ++ [d.toPhase n t], t + d.beats * 4)) (([] : List Phase), 0)
  let total := (ds.map (·.beats)).foldl (· + ·) 0
  let seconds := if sc.seconds > 0 then sc.seconds else total / 2
  let cfg : Config :=
    { n, dmin := gap, vmax := vmaxMM, stage := envelope, ticksPerBeat := 4,
      bpmNum := total * 60, bpmDen := max 1 seconds, total := total * 4, seconds }
  let leftCount := ((frames.headD []).filter fun p => p.x > stageRect.xmax).length
  let rightCount := ((frames.headD []).filter fun p => p.x < stageRect.xmin).length
  let plan : Plan := { seconds, bpm := (total * 60) / max 1 seconds, genre := if sc.genre.isEmpty then "Bollywood fusion" else sc.genre, n, left := leftCount, right := rightCount, moves := [], steps, gap }
  let heard := (ds.filter (·.kind != "hold")).map (·.label)
  { plan, routine := ⟨cfg, phases⟩, labels := ds.map fun d => (d.label, d.kind), asks, rejected := [],
    keys, error := none, scene := some sc, heard }

/-! ## Reading a scene from a request -/

structure Clause where
  count : Nat
  /-- `on`, `left`, `right` -/
  place : String
  row : Option Nat

def rowOfLetter (s : String) : Option Nat :=
  match s with
  | "a" => some 0 | "b" => some 1 | "c" => some 2 | "d" => some 3 | "e" => some 4
  | _ => none

def readClause (words : List String) : Option Clause :=
  let rec rowAfter : List String → Option Nat
    | "row" :: w :: _ => rowOfLetter w
    | _ :: rest => rowAfter rest
    | [] => none
  let rec hasPair : List String → String → String → Bool
    | a :: b :: rest, x, y => (a == x && b == y) || hasPair (b :: rest) x y
    | _, _, _ => false
  let count := (words.findSome? fun w => if w == "a" then none else wordNumber w).getD 0
  let place :=
    if hasPair words "stage" "left" then "left"
    else if hasPair words "stage" "right" then "right"
    else if words.contains "onstage" || hasPair words "on" "stage" then "on"
    else ""
  if place == "" && (rowAfter words).isNone then none
  else some ⟨count, place, rowAfter words⟩

/-- A request is about a scene if it talks about being offstage or on stage, or names a row. -/
def looksLikeScene (ts : List String) : Bool :=
  ts.contains "row"

/-- Evenly spread columns for `k` dancers. -/
def spreadCols (k : Nat) : List Nat :=
  match k with
  | 0 => []
  | 1 => [5]
  | 2 => [4, 6]
  | 3 => [3, 5, 7]
  | 4 => [2, 4, 6, 8]
  | 5 => [1, 3, 5, 7, 9]
  | 6 => [2, 3, 4, 6, 7, 8]
  | 7 => [2, 3, 4, 5, 6, 7, 8]
  | 8 => [1, 2, 3, 4, 6, 7, 8, 9]
  | _ => List.range' 1 9

def splitClauses (text : String) : List (List String) :=
  let marked := text.toLower.map fun c => if c == '.' || c == ',' || c == ';' then '|' else c
  let parts := (marked.splitOn "|").flatMap fun p => (p.splitOn " then ").flatMap fun q => q.splitOn " and "
  (parts.map tokenize).filter (!·.isEmpty)

/-- Build a two-frame scene from a request such as "four dancers onstage in row B, two from stage left
    and two from stage right come in to row D". -/
def parseScene (text : String) : Option Scene :=
  if !looksLikeScene (tokenize text) then none else
  let clauses := (splitClauses text).filterMap readClause
  -- a clause with no count just gives a row to the clause before it
  let groups := clauses.filter (fun c => c.count > 0 && c.place != "")
  let lastRow := (clauses.reverse.findSome? (·.row)).getD 3
  let onGroups := groups.filter (·.place == "on")
  let inGroups := groups.filter (·.place != "on")
  if groups.isEmpty || groups.foldl (fun t c => t + c.count) 0 > 16 then none else
  let onPlaced : List Pt := onGroups.flatMap fun g =>
    let r := g.row.getD 1
    (spreadCols g.count).map fun c => ⟨colX c, rowY r⟩
  -- entering dancers: everyone headed for a row shares it, left group on the stage left side
  let targets := inGroups.foldl (fun acc g => if acc.contains (g.row.getD lastRow) then acc else acc ++ [g.row.getD lastRow]) ([] : List Nat)
  let placeIn (r : Nat) : List (String × Pt × Pt) :=
    let gs := inGroups.filter (fun g => g.row.getD lastRow == r)
    let leftN := (gs.filter (·.place == "left")).foldl (fun t g => t + g.count) 0
    let rightN := (gs.filter (·.place == "right")).foldl (fun t g => t + g.count) 0
    let taken := (onPlaced.filter (·.y == rowY r)).map (·.x)
    let cols := if taken.isEmpty then spreadCols (leftN + rightN)
      else ((List.range' 1 9).filter fun c => !taken.contains (colX c)).take (leftN + rightN)
    let rightCols := cols.take rightN
    let leftCols := cols.drop rightN
    (leftCols.zipIdx.map fun (c, k) => ("left", (⟨wingStart + (k : Int) * wingStep, rowY r⟩ : Pt), (⟨colX c, rowY r⟩ : Pt))) ++
    ((rightCols.reverse).zipIdx.map fun (c, k) => ("right", (⟨-(wingStart + (k : Int) * wingStep), rowY r⟩ : Pt), (⟨colX c, rowY r⟩ : Pt)))
  let entering := targets.flatMap placeIn
  let f0 := onPlaced ++ entering.map (·.2.1)
  let f1 := onPlaced ++ entering.map (·.2.2)
  let frames := [f0, f1]
  some { frames, rules := detectRules frames }

end Choreo
