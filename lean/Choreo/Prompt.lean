/-!
# Reading a request

Turns plain text into a list of moves. Not trusted: the app shows back what it understood, and
the proof is about the routine that was built, stated in those terms.
-/
namespace Choreo

inductive Side where
  | left | right
  deriving BEq, Inhabited, Repr

inductive Shape where
  | grid (cols rows : Nat)
  | line
  | diagonal
  | circle
  | vee
  | diamond
  /-- Two rows offset by half a space, so everyone is seen from the front. -/
  | windows
  /-- A small ring inside a larger one, as when a kolattam circle splits in two. -/
  | rings
  /-- Eight places around the sides of a square, as in a square-dance set. -/
  | square
  /-- Four arms from the centre, like the spokes of a pinwheel. -/
  | cross
  /-- A line winding outward from the centre. -/
  | spiral
  deriving BEq, Inhabited, Repr

inductive Move where
  | enter (shape : Shape)
  | form (shape : Shape)
  | flip
  | rotate (quarters : Nat) (ccw : Bool)
  /-- The inner ring turns one way and the outer ring the other. -/
  | counterRotate (quarters : Nat)
  /-- Neighbours trade places, passing right shoulders, then the next neighbours do. -/
  | weave (rounds : Nat)
  /-- One group after another steps out and back, while the others hold. -/
  | ripple
  /-- Everyone gathers tight at the centre, then bursts back out. -/
  | burst
  /-- Follow the leader along a winding path across the stage, then come home. -/
  | snake
  /-- The two sides open up, then pass through each other in the gaps. -/
  | zipper
  /-- The dancers on stage go off while those waiting in the wings come on and take their places. -/
  | exchange
  /-- Everyone still waiting comes on, and the whole cast forms a shape. -/
  | join (shape : Shape)
  /-- Re-form into new lines, then leave. -/
  | leave (newLines : Bool)
  deriving BEq, Inhabited, Repr

structure Plan where
  seconds : Nat
  bpm : Nat
  genre : String
  n : Nat
  left : Nat
  right : Nat
  moves : List Move
  /-- The steps named in the request, by short name. -/
  steps : List String := []
  /-- The smallest gap allowed between two dancers, in millimetres. -/
  gap : Int := 600
  /-- Moves added when a request asks for something fancy or names no moves. Used while there is time. -/
  extra : List Move := []
  /-- Shape changes travel on curves rather than straight lines. -/
  sweep : Bool := false
  /-- How many dancers wait in the wings when the routine starts. -/
  waiting : Nat := 0
  deriving Inhabited, Repr

def wordNumber : String → Option Nat
  | "one" | "a" | "single" => some 1 | "two" | "pair" | "both" => some 2 | "three" => some 3 | "four" => some 4
  | "five" => some 5 | "six" => some 6 | "seven" => some 7 | "eight" => some 8
  | "nine" => some 9 | "ten" => some 10 | "twelve" => some 12 | "sixteen" => some 16
  | "fifteen" => some 15 | "twenty" => some 20 | "thirty" => some 30 | "forty" => some 40
  | "fifty" => some 50 | "sixty" => some 60 | "ninety" => some 90
  | s => s.toNat?

def tokenize (s : String) : List String :=
  let cleaned := s.toLower.map fun c => if c.isAlphanum || c == ':' || c == 'é' then c else ' '
  (cleaned.splitOn " ").filter (· ≠ "")

/-- Numbers like `4x2`. -/
def splitBy (w : String) : Option (Nat × Nat) :=
  match w.splitOn "x" with
  | [a, b] => match a.toNat?, b.toNat? with
    | some x, some y => some (x, y)
    | _, _ => none
  | _ => none

def Shape.size : Shape → Option Nat
  | .grid c r => some (c * r)
  | _ => none

/-- Length of the routine: `five minute`, `90 seconds`, `1:30`. -/
def readSeconds (ts : List String) : Option Nat :=
  let rec go : List String → Option Nat
    | [] => none
    | a :: b :: rest =>
      match wordNumber a with
      | some k =>
        if b.startsWith "min" then some (k * 60)
        else if b.startsWith "sec" then some k
        else go (b :: rest)
      | none =>
        match a.splitOn ":" with
        | [m, s] => match m.toNat?, s.toNat? with
          | some m, some s => some (m * 60 + s)
          | _, _ => go (b :: rest)
        | _ => go (b :: rest)
    | [a] => match a.splitOn ":" with
      | [m, s] => match m.toNat?, s.toNat? with
        | some m, some s => some (m * 60 + s)
        | _, _ => none
      | _ => none
  go ts

def readBpm (ts : List String) : Option Nat :=
  let rec go : List String → Option Nat
    | a :: b :: rest => if b == "bpm" then a.toNat? else go (b :: rest)
    | _ => none
  go ts

/-- Walk back from a side mention to the nearest count: "four dancers to come from stage left". -/
def countBefore (before : List String) : Option Nat :=
  let rec go : List String → Nat → Option Nat
    | [], _ => none
    | w :: rest, fuel =>
      if fuel == 0 then none
      else if w == "and" || w == "then" then none
      else match wordNumber w with
        | some k => if w == "a" || w == "both" then go rest (fuel - 1) else some k
        | none => go rest (fuel - 1)
  go before.reverse 8

structure Scan where
  left : Nat := 0
  right : Nat := 0
  n : Option Nat := none
  moves : List Move := []
  waiting : Option Nat := none
  deriving Inhabited

/-- Read the words in order, collecting moves in the order they are mentioned. -/
def scan : Nat → List String → List String → Scan → Scan
  | 0, _, _, st => st
  | _, _, [], st => st
  | fuel + 1, seen, w :: rest, st =>
    let next (st' : Scan) (skip : Nat := 0) :=
      scan fuel (seen ++ [w] ++ rest.take skip) (rest.drop skip) st'
    let add (m : Move) : Scan := { st with moves := st.moves ++ [m] }
    let isShapeAfterComing := rest.take 1 == ["of"]
    if (w == "wait" || w == "waits" || w == "waiting" || w == "offstage") && st.waiting.isNone then
      match countBefore seen with
      | some k => next { st with waiting := some k }
      | none => next st
    else if w == "exchange" || w == "substitute" || w == "substitution" || w == "relay" || w == "replace" || w == "replaces" then next (add .exchange)
    else if w == "join" || w == "joins" || w == "rest" then next (add (.join .circle))
    else if w == "stage" && (rest.head? == some "left" || rest.head? == some "right") then
      let k := (countBefore seen).getD 0
      if rest.head? == some "left" then next { st with left := st.left + k } 1
      else next { st with right := st.right + k } 1
    else if w == "dancers" || w == "dancer" || w == "people" then
      match seen.getLast?.bind wordNumber with
      | some k => if st.n.isNone && !(rest.take 4).contains "stage" then next { st with n := some k } else next st
      | none => next st
    else if w == "grid" || w == "rows" || w == "block" then
      -- `grid of four by two`, `4x2 grid`, `two rows of four`
      let afterOf := if isShapeAfterComing then rest.drop 1 else rest
      let shape : Shape :=
        match afterOf with
        | a :: "by" :: b :: _ => match wordNumber a, wordNumber b with
          | some x, some y => .grid x y
          | _, _ => .grid 4 2
        | a :: _ => match splitBy a with
          | some (x, y) => .grid x y
          | none => match wordNumber a with
            | some x => (match seen.getLast?.bind wordNumber with
                | some r => .grid x r
                | none => .grid 4 2)
            | none => .grid 4 2
        | [] => match seen.getLast?.bind splitBy with
          | some (x, y) => .grid x y
          | none => .grid 4 2
      next (add (.form shape))
    else if w == "circles" || w == "rings" || w == "concentric" then
      if st.moves.getLast? == some (.form .rings) then next st else next (add (.form .rings))
    else if w == "square" && seen.getLast? != some "jazz" then next (add (.form .square))
    else if w == "spiral" || w == "swirl" || w == "whirlpool" then next (add (.form .spiral))
    else if w == "pinwheel" || w == "spokes" then
      next { st with moves := st.moves ++ [.form .cross, .rotate 2 true] }
    else if w == "cross" && (seen.getLast? == some "a" || rest.head? == some "shape" || rest.head? == some "formation") then next (add (.form .cross))
    else if w == "weave" || w == "weaves" || w == "weaving" || w == "chain" then next (add (.weave 2))
    else if w == "ripple" || w == "ripples" || w == "wave" || w == "waves" || w == "canon" || w == "cascade" then next (add .ripple)
    else if w == "burst" || w == "bursts" || w == "explode" || w == "explodes" || w == "starburst" then next (add .burst)
    else if w == "snake" || w == "serpentine" || w == "conga" || (w == "follow" && (rest.take 2).contains "leader") then next (add .snake)
    else if w == "zipper" || w == "interlock" || w == "interlocking" || w == "comb" || w == "crossover" then next (add .zipper)
    else if w == "circle" || w == "ring" then
      if st.moves.getLast? == some (.form .rings) then next st else next (add (.form .circle))
    else if w == "diagonal" then next (add (.form .diagonal))
    else if w == "diamond" then next (add (.form .diamond))
    else if w == "windows" then next (add (.form .windows))
    else if w == "v" || w == "vee" || w == "wedge" || w == "chevron" then next (add (.form .vee))
    else if w == "flip" || w == "flips" || w == "swap" || w == "trade" then next (add .flip)
    else if w == "rotate" || w == "rotates" || w == "spin" || w == "spins" || w == "revolve" ||
        (w == "turn" && seen.getLast? != some "pivot" && seen.getLast? != some "chaine" && seen.getLast? != some "chakkar") then
      let near := rest.take 6
      let q := if near.contains "180" || near.contains "half" then 2
        else if near.contains "360" || near.contains "full" then 4
        else if near.contains "270" then 3 else 1
      if seen.getLast? == some "counter" && !near.contains "clockwise" then next (add (.counterRotate q))
      else if near.head? == some "counter" && near.contains "clockwise" then next (add (.rotate q true))
      else next (add (.rotate q (!near.contains "clockwise")))
    else if w == "leave" || w == "leaves" || w == "exit" || w == "exits" || w == "off" && seen.getLast? == some "walk" then
      let near := rest.take 5
      next (add (.leave (near.contains "new")))
    else if w == "line" && (seen.getLast? == some "single" || seen.getLast? == some "one" || seen.getLast? == some "a") then
      next (add (.form .line))
    else next st

def genreOf (ts : List String) : String × Nat :=
  if ts.contains "ghoomar" || ts.contains "kalbelia" || ts.contains "rajasthani" then ("Rajasthani folk", 104)
  else if ts.contains "odissi" || ts.contains "chauka" then ("Odissi", 88)
  else if ts.contains "kuthu" || ts.contains "koothu" || ts.contains "dappan" || ts.contains "parai" then ("Kuthu", 140)
  else if ts.contains "bharatanatyam" || ts.contains "carnatic" || ts.contains "kollywood" || ts.contains "tollywood" ||
      ts.contains "kummi" || ts.contains "kolattam" || ts.contains "adavu" || ts.contains "tamil" || ts.contains "telugu" ||
      ts.contains "kannada" || ts.contains "malayalam" || ts.contains "south" then ("South Indian fusion", 104)
  else if ts.contains "bhangra" || ts.contains "dhol" then ("Bhangra", 132)
  else if ts.contains "raas" || ts.contains "garba" || ts.contains "dandiya" then ("Raas", 126)
  else if ts.contains "bollywood" || ts.contains "filmi" || ts.contains "fusion" || ts.contains "mashup" then ("Bollywood fusion", 112)
  else if ts.contains "kathak" || ts.contains "tatkar" then ("Kathak", 96)
  else if ts.contains "salsa" || ts.contains "latin" || ts.contains "bachata" || ts.contains "merengue" then ("Latin", 104)
  else if ts.contains "kpop" || (ts.contains "k" && ts.contains "pop") then ("K-pop", 128)
  else if ts.contains "jazz" || ts.contains "broadway" || ts.contains "musical" then ("Jazz", 116)
  else if ts.contains "contemporary" || ts.contains "lyrical" then ("Contemporary", 88)
  else if ts.contains "cinematic" || ts.contains "orchestral" || ts.contains "epic" then ("Cinematic", 96)
  else if ts.contains "ballet" || ts.contains "classical" || ts.contains "waltz" then ("Strings", 84)
  else if ts.contains "afro" || ts.contains "afrobeat" || ts.contains "afrobeats" then ("Afrobeat", 108)
  else if ts.contains "hip" || ts.contains "hiphop" || ts.contains "trap" then ("Hip-hop", 92)
  else if ts.contains "lofi" || ts.contains "chill" then ("Lo-fi", 80)
  else ("House", 120)

/-- Every step the planner knows, with the words that name it. -/
def stepPhrases : List (String × List String) :=
  [("stepTouch", ["steptouch", "step touch", "step touches"]), ("grapevine", ["grapevine", "grapevines", "grape vine"]),
   ("box", ["box step", "box steps", "boxstep"]), ("chasse", ["chasse", "chassé", "chasses"]),
   ("turn", ["pivot turn", "pivot turns", "chaine turn"]),
   ("dhamaal", ["dhamaal"]), ("chaal", ["chaal"]), ("luddi", ["luddi"]), ("jhummar", ["jhummar", "jhumar"]),
   ("sammi", ["sammi"]), ("gidda", ["gidda"]),
   ("doTaali", ["do taali", "be taali", "dotaali"]), ("tranTaali", ["tran taali", "trantaali"]),
   ("dodhiyu", ["dodhiyu"]), ("thumka", ["thumka", "thumkas"]), ("jhatka", ["jhatka", "jhatkas"]), ("hookStep", ["hook step", "hook steps"]),
   ("filmiBounce", ["filmi bounce"]), ("shimmy", ["shimmy", "shimmies"]),
   ("kuthuStep", ["kuthu step", "kuthu steps", "koothu step"]), ("massWalk", ["mass walk"]),
   ("dappan", ["dappan step", "dappankuthu"]), ("theenmaar", ["theenmaar"]),
   ("tattaAdavu", ["tatta adavu"]), ("nattaAdavu", ["natta adavu"]), ("kudittaMettu", ["kuditta mettu"]), ("kummi", ["kummi"]), ("kolattam", ["kolattam"]), ("karagattam", ["karagattam"]), ("tatkar", ["tatkar"]), ("chakkar", ["chakkar"]),
   ("balance", ["balance step", "balancé", "balance steps"]), ("plie", ["plie", "plié", "plies"]),
   ("jazzSquare", ["jazz square", "jazz squares"]), ("twoStep", ["two step", "twostep"]), ("rockStep", ["rock step", "rock steps"]), ("runningMan", ["running man"]),
   ("azonto", ["azonto"]), ("salsaBasic", ["salsa basic", "salsa step"]), ("chaCha", ["cha cha", "chacha"]), ("ghoomar", ["ghoomar"]), ("lavani", ["lavani"]), ("bihu", ["bihu"]), ("chauka", ["chauka"]), ("tribhangi", ["tribhangi"]), ("charleston", ["charleston"]), ("contraction", ["contraction"])]

/-- The steps a request names, in the order the vocabulary lists them. -/
def readSteps (ts : List String) : List String :=
  let rec pairs : List String → List String
    | a :: b :: rest => (a ++ " " ++ b) :: pairs (b :: rest)
    | _ => []
  let rec triples : List String → List String
    | a :: b :: c :: rest => (a ++ " " ++ b ++ " " ++ c) :: triples (b :: c :: rest)
    | _ => []
  let phrases := ts ++ pairs ts ++ triples ts
  (stepPhrases.filter fun (_, words) => words.any phrases.contains).map (·.1)

/-- The gap a request asks for: `80 cm apart`, `one metre apart`. -/
def readGap (ts : List String) : Option Int :=
  let rec go : List String → Option Int
    | a :: b :: rest =>
      match wordNumber a with
      | some k =>
        if b == "cm" || b.startsWith "centim" then some ((k : Int) * 10)
        else if b == "metre" || b == "meter" || b == "metres" || b == "meters" || b == "m" then some ((k : Int) * 1000)
        else go (b :: rest)
      | none => go (b :: rest)
    | _ => none
  go ts

/-- Words that ask for an ambitious routine. -/
def asksForFancy (ts : List String) : Bool :=
  ts.any fun w => ["fancy", "complicated", "complex", "intricate", "elaborate", "advanced", "spectacular", "dazzling",
    "showstopper", "showstopping", "virtuosic", "ambitious", "impressive", "challenging", "difficult", "crazy", "insane", "wild", "epic"].contains w

/-- What a style reaches for when it has time: its moves, in order. -/
def movesForGenre : String → List Move
  | "Raas" => [.form .circle, .weave 2, .form .rings, .counterRotate 1, .ripple, .form .windows, .zipper, .burst, .form .diamond, .snake]
  | "Bhangra" => [.flip, .form .vee, .zipper, .burst, .form .circle, .weave 1, .form .windows, .ripple, .snake]
  | "Kuthu" => [.form .vee, .burst, .form .cross, .rotate 2 true, .ripple, .zipper, .form .diamond, .snake]
  | "South Indian fusion" => [.form .rings, .counterRotate 1, .form .circle, .weave 2, .form .diagonal, .ripple, .form .spiral, .burst]
  | "Rajasthani folk" => [.form .circle, .weave 1, .form .rings, .counterRotate 1, .ripple, .form .diamond]
  | "Odissi" => [.form .diagonal, .ripple, .form .circle, .form .rings, .counterRotate 1, .burst]
  | "Kathak" => [.form .circle, .form .rings, .counterRotate 1, .ripple, .form .diagonal, .burst, .form .spiral]
  | "Latin" => [.form .circle, .weave 1, .form .windows, .zipper, .ripple, .form .diamond]
  | "K-pop" => [.form .vee, .ripple, .zipper, .form .diamond, .burst, .form .windows, .snake]
  | "Jazz" => [.form .diagonal, .ripple, .form .vee, .burst, .form .windows, .zipper]
  | "Contemporary" => [.form .spiral, .form .circle, .weave 1, .ripple, .form .diagonal, .snake]
  | "Bollywood fusion" => [.form .windows, .zipper, .form .spiral, .burst, .form .cross, .rotate 1 true, .ripple, .form .vee, .snake]
  | _ => [.form .diamond, .burst, .form .circle, .weave 1, .form .cross, .rotate 1 true, .zipper, .ripple, .snake]

/-- Build a plan from the words. Anything not mentioned gets a sensible default. -/
def parsePlan (text : String) : Plan :=
  let ts := tokenize text
  let st := scan (ts.length + 1) [] ts {}
  let (genre, bpm0) := genreOf ts
  let shapeSize := st.moves.findSome? fun
    | .form s => s.size
    | _ => none
  let n0 := st.left + st.right
  let n := if n0 > 0 then n0 else (st.n <|> shapeSize).getD 8
  let n := max 2 (min n 16)
  let (l, r) := if n0 == n then (st.left, st.right) else (n / 2, n - n / 2)
  -- the first shape is what the entrance lands in
  let (first, others) : Shape × List Move :=
    match st.moves with
    | .form s :: tl => (s, tl)
    | tl => (.grid (n / 2) 2, tl)
  let first := match first with
    | .grid c r' => if c * r' == n then first else .grid (n / 2 + n % 2) (if n % 2 == 0 then 2 else 1)
    | s => s
  let fancy := asksForFancy ts
  let namedNothing := others.isEmpty && !(ts.contains "circle" || ts.contains "line" || ts.contains "grid")
  let wings := l > 0 && r > 0
  let isLeave : Move → Bool := fun | .leave _ => true | _ => false
  -- the zipper needs room for everyone to pass in a gap, so very large casts skip it
  let usable : Move → Bool := fun | .zipper => n ≤ 10 | m => !others.contains m
  let auto := fancy || namedNothing
  -- when nobody says otherwise, an ambitious routine holds half its cast in the wings
  let waiting := min (n - 1) (st.waiting.getD (if auto && wings && n ≥ 6 then n / 2 else 0))
  let namesJoin := others.any fun | .join _ => true | _ => false
  let cast : List Move := if waiting == 0 then [] else
    (if others.contains .exchange || namesJoin then [] else [.exchange]) ++ (if namesJoin then [] else [.join .circle])
  let style :=
    if !wings || !auto then []
    else
      let all := (movesForGenre genre).filter usable
      if ts.contains "showstopper" || ts.contains "fancy" then all
      else if fancy then all.take 7
      else all.take 4
  -- the cast change comes early, so it is always in the routine
  let extra := match cast with
    | [a, b] => [a] ++ style.take 1 ++ [b] ++ style.drop 1
    | l => l ++ style
  let leaves := if (fancy || namedNothing) && !others.any isLeave then [Move.leave false] else []
  { seconds := (readSeconds ts).getD 60
    bpm := (readBpm ts).getD bpm0
    genre, n, left := l, right := r
    moves := .enter first :: others ++ leaves
    steps := readSteps ts
    gap := (readGap ts).getD 600
    extra
    waiting
    sweep := fancy || namedNothing || ts.contains "sweep" || ts.contains "swoop" || ts.contains "curve" || ts.contains "curved" || ts.contains "curving" }

end Choreo
