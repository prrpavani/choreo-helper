import Choreo.Emit
import Choreo.Scene
import Choreo.Stress
open Lean Choreo

def dancerNames : Array String :=
  #["Ana", "Ben", "Cleo", "Dev", "Esi", "Finn", "Gia", "Hugo", "Ines", "Jae", "Kai", "Lena", "Milo", "Noor", "Omar", "Pia"]

def Main.nameOf (i : Nat) : String := dancerNames.getD i s!"Dancer {i + 1}"

def readOverrides (j : Json) : List Override :=
  match j.getObjVal? "overrides" with
  | .ok (.arr xs) => xs.toList.filterMap fun o =>
    match o.getObjValAs? Nat "move", o.getObjValAs? Nat "dancer", o.getObjValAs? Int "x", o.getObjValAs? Int "y" with
    | .ok m, .ok d, .ok x, .ok y => some ⟨m, d, x, y⟩
    | _, _, _, _ => none
  | _ => []

/-- A scene sent by the grid editor. With no rules listed, they are worked out from the frames. -/
def readScene (j : Json) : Option Scene :=
  match j.getObjVal? "scene" with
  | .ok sc =>
    match sc.getObjVal? "frames" with
    | .ok (.arr fs) =>
      let frames : List (List Pt) := fs.toList.map fun f =>
        match f with
        | .arr ps => ps.toList.filterMap fun p =>
          match p with
          | .arr #[x, y] => match x.getInt?, y.getInt? with
            | .ok a, .ok b => some ⟨a, b⟩
            | _, _ => none
          | _ => none
        | _ => []
      let rules : List Rule :=
        match sc.getObjVal? "rules" with
        | .ok (.arr rs) => rs.toList.filterMap fun u =>
          match u.getObjValAs? String "name", u.getObjValAs? String "kind", u.getObjValAs? Nat "frame" with
          | .ok n, .ok k, .ok f =>
            let nums (key : String) : List Nat := (u.getObjValAs? (List Nat) key).toOption.getD []
            let prs : List (Nat × Nat) := ((u.getObjValAs? (List (List Nat)) "pairs").toOption.getD []).filterMap fun
              | [a, b] => some (a, b)
              | _ => none
            let int (key : String) : Int := (u.getObjValAs? Int key).toOption.getD 0
            some { name := n, kind := k, frame := f, members := nums "members", dx := int "dx", dy := int "dy", pairs := prs, mirror := int "mirror" }
          | _, _, _ => none
        | _ => detectRules frames
      let nums (key : String) : List Nat := (sc.getObjValAs? (List Nat) key).toOption.getD []
      let ways : List String := (sc.getObjValAs? (List String) "ways").toOption.getD []
      let bends : List (Nat × Nat × Int × Int) :=
        ((sc.getObjValAs? (List (List Int)) "bends").toOption.getD []).filterMap fun
          | [f, i, x, y] => some (f.toNat, i.toNat, x, y)
          | _ => none
      if frames.isEmpty then none else some { bends, frames, rules, holds := nums "holds", moves := nums "moves", seconds := (sc.getObjValAs? Nat "seconds").toOption.getD 0, ways, genre := (sc.getObjValAs? String "genre").toOption.getD "" }
    | _ => none
  | _ => none

/-- Build the routine a request describes. -/
def namesOf (j : Json) (i : Nat) : String :=
  let team : Array String := ((j.getObjValAs? (List String) "names").toOption.getD []).toArray
  match team[i]? with
  | some n => if n.isEmpty then Main.nameOf i else n
  | none => Main.nameOf i

def builtOf (j : Json) : Built × (Nat → String) :=
  let prompt := (j.getObjValAs? String "prompt").toOption.getD ""
  -- a team's own names, when it has given them
  let team : Array String := ((j.getObjValAs? (List String) "names").toOption.getD []).toArray
  let nameOf (i : Nat) : String := match team[i]? with
    | some n => if n.isEmpty then Main.nameOf i else n
    | none => Main.nameOf i
  let plan := parsePlan prompt
  -- a person's song sets the tempo and the length
  let plan := match j.getObjValAs? Nat "bpm", j.getObjValAs? Nat "seconds" with
    | .ok b, .ok sec => { plan with bpm := b, seconds := sec, genre := "Your song" }
    | _, _ => plan
  -- a gap chosen in the app wins over one named in the words
  let plan := match j.getObjValAs? Int "gap" with
    | .ok g => { plan with gap := g }
    | _ => plan
  let steps := if plan.steps.isEmpty then stepsForGenre plan.genre else plan.steps
  let built :=
    match readScene j with
    | some sc => buildScene sc nameOf steps plan.gap
    | none =>
      match parseScene prompt with
      | some sc => buildScene sc nameOf steps plan.gap
      | none => buildPlan plan nameOf (readOverrides j)
  -- the app's claim is about movement: where dancers end up and how they meet the music are not proof obligations
  let drift : Int := (j.getObjValAs? Int "drift").toOption.getD 0
  ({ built with asks := built.asks.filter (·.2.2.isMovement), drift }, nameOf)

/-- `choreo compose <request.json> <proof.lean>`: build a routine, write its proof file, print JSON. -/
def main : List String → IO UInt32
  | ["compose", reqPath, proofPath] => do
    let j ← IO.ofExcept (Json.parse (← IO.FS.readFile reqPath))
    match readProgram j with
    | some sp =>
      let nm := namesOf j
      let (built, steps) := buildProgram sp nm
      let start := match steps.head? with
        | some c => c.before
        | none => []
      IO.FS.writeFile proofPath (proofSource built steps start)
      IO.println (report built nm proofPath steps start).compress
      return 0
    | none =>
    let (built, nm) := builtOf j
    IO.FS.writeFile proofPath (proofSource built)
    IO.println (report built nm proofPath).compress
    return 0
  | ["stress", reqPath, stem] => do
    let j ← IO.ofExcept (Json.parse (← IO.FS.readFile reqPath))
    let (built, _) := builtOf j
    let ms := mutationsOf built
    for (m, k) in ms.zipIdx do
      IO.FS.writeFile s!"{stem}_{k}.lean" (stressSource m k)
    IO.println (stressJson ms).compress
    return 0
  | ["demo", reqPath, dataPath, proofPath] => do
    let text ← IO.FS.readFile reqPath
    let j ← IO.ofExcept (Json.parse text)
    let prompt := (j.getObjValAs? String "prompt").toOption.getD ""
    let built := buildPlan (parsePlan prompt) Main.nameOf []
    IO.FS.writeFile dataPath (demoData built)
    IO.FS.writeFile proofPath (demoProofs built)
    return 0
  | _ => do
    IO.eprintln "usage: choreo compose <request.json> <proof.lean>"
    return 1
