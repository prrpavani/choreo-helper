// Everything the planner understands. Each `word` is a phrase Lean's prompt reader recognises.
export interface MoveWord { id: string; title: string; text: string; kind: 'shape' | 'travel'; phrase: string; hear: RegExp }
export const MOVES: MoveWord[] = [
  { id: 'grid', title: 'Grid', text: 'Rows and columns', kind: 'shape', phrase: 'a grid', hear: /\b(grid|block|rows)\b/ },
  { id: 'line', title: 'Single line', text: 'Everyone in one row', kind: 'shape', phrase: 'a single line', hear: /\b(single|one|a) line\b/ },
  { id: 'diagonal', title: 'Diagonal', text: 'A line corner to corner', kind: 'shape', phrase: 'a diagonal', hear: /\bdiagonal\b/ },
  { id: 'circle', title: 'Circle', text: 'One ring', kind: 'shape', phrase: 'a circle', hear: /\b(circle|ring)\b/ },
  { id: 'rings', title: 'Double ring', text: 'A ring inside a ring', kind: 'shape', phrase: 'two concentric circles', hear: /\b(concentric|double ring|two rings|two circles|rings)\b/ },
  { id: 'vee', title: 'V', text: 'A wedge to the audience', kind: 'shape', phrase: 'a V', hear: /\b(vee|wedge|chevron|v shape|a v)\b/ },
  { id: 'diamond', title: 'Diamond', text: 'Four points', kind: 'shape', phrase: 'a diamond', hear: /\bdiamond\b/ },
  { id: 'windows', title: 'Windows', text: 'Staggered rows, every face seen', kind: 'shape', phrase: 'windows', hear: /\bwindows\b/ },
  { id: 'square', title: 'Square', text: 'Eight places, like a square-dance set', kind: 'shape', phrase: 'a square', hear: /\bsquare\b(?! dance)/ },
  { id: 'cross', title: 'Cross', text: 'Four arms from the centre', kind: 'shape', phrase: 'a cross', hear: /\ba cross\b|\bcross (shape|formation)\b/ },
  { id: 'spiral', title: 'Spiral', text: 'A line winding out from the centre', kind: 'shape', phrase: 'a spiral', hear: /\b(spiral|swirl|whirlpool)\b/ },
  { id: 'exchange', title: 'Cast change', text: 'Those on stage go off while those waiting come on', kind: 'travel', phrase: 'exchange', hear: /\b(exchange|substitut\w*|relay|cast change|replace|swap the cast)\b/ },
  { id: 'join', title: 'The rest come on', text: 'Everyone still waiting joins, and the whole cast forms a shape', kind: 'travel', phrase: 'join', hear: /\b(join|joins|the rest come)\b/ },
  { id: 'weave', title: 'Weave', text: 'Neighbours trade places, passing right shoulders', kind: 'travel', phrase: 'weave', hear: /\b(weave|weaves|weaving|chain)\b/ },
  { id: 'ripple', title: 'Ripple', text: 'One group after another steps out and back', kind: 'travel', phrase: 'ripple', hear: /\b(ripple|ripples|wave|waves|canon|cascade)\b/ },
  { id: 'burst', title: 'Burst', text: 'Gather tight at the centre, then burst out', kind: 'travel', phrase: 'burst', hear: /\b(burst|bursts|explode|explodes|starburst)\b/ },
  { id: 'snake', title: 'Snake', text: 'Follow the leader along a winding path', kind: 'travel', phrase: 'snake', hear: /\b(snake|serpentine|conga|follow the leader)\b/ },
  { id: 'zipper', title: 'Zipper', text: 'Two sides pass through each other in the gaps', kind: 'travel', phrase: 'zipper', hear: /\b(zipper|interlock|interlocking|comb|crossover)\b/ },
  { id: 'flip', title: 'Line flip', text: 'Front and back lines trade places', kind: 'travel', phrase: 'flip lines', hear: /\b(flip|flips|swap lines|trade lines)\b/ },
  { id: 'rotate', title: 'Half turn', text: 'The whole shape turns half way round', kind: 'travel', phrase: 'rotate 180 degrees', hear: /\b(rotate|rotates|revolve|half turn)\b/ },
  { id: 'counter', title: 'Counter-rotate', text: 'Inner ring one way, outer ring the other', kind: 'travel', phrase: 'counter rotate 90 degrees', hear: /\bcounter[- ]?rotat/ },
  { id: 'pinwheel', title: 'Pinwheel', text: 'A cross that turns on the spot', kind: 'travel', phrase: 'pinwheel', hear: /\b(pinwheel|spokes)\b/ },
]
export interface StepWord { title: string; word: string }
// Every step here has its own movement on the 3D figures: see views/stepPose.ts
export const STEP_GROUPS: { style: string; steps: StepWord[] }[] = [
  { style: "Bhangra and Punjabi folk", steps: [['Dhamaal', 'dhamaal'], ['Chaal', 'chaal'], ['Luddi', 'luddi'], ['Jhummar', 'jhummar'], ['Sammi', 'sammi'], ['Gidda', 'gidda']].map(([title, word]) => ({ title, word })) },
  { style: "Raas and garba", steps: [['Be taali', 'be taali'], ['Tran taali', 'tran taali'], ['Dodhiyu', 'dodhiyu']].map(([title, word]) => ({ title, word })) },
  { style: "Bollywood", steps: [['Thumka', 'thumka'], ['Jhatka', 'jhatka'], ['Hook step', 'hook step'], ['Filmi bounce', 'filmi bounce'], ['Shimmy', 'shimmy']].map(([title, word]) => ({ title, word })) },
  { style: "Kuthu and Telugu", steps: [['Kuthu step', 'kuthu step'], ['Mass walk', 'mass walk'], ['Dappan step', 'dappan step'], ['Theenmaar', 'theenmaar']].map(([title, word]) => ({ title, word })) },
  { style: "South Indian", steps: [['Tatta adavu', 'tatta adavu'], ['Natta adavu', 'natta adavu'], ['Kuditta mettu', 'kuditta mettu'], ['Kummi', 'kummi'], ['Kolattam', 'kolattam'], ['Karagattam', 'karagattam']].map(([title, word]) => ({ title, word })) },
  { style: "Kathak and Odissi", steps: [['Tatkar', 'tatkar'], ['Chakkar', 'chakkar'], ['Chauka', 'chauka'], ['Tribhangi', 'tribhangi']].map(([title, word]) => ({ title, word })) },
  { style: "Folk", steps: [['Ghoomar', 'ghoomar'], ['Lavani', 'lavani'], ['Bihu', 'bihu']].map(([title, word]) => ({ title, word })) },
  { style: "Hip-hop and Afro", steps: [['Two-step', 'two step'], ['Rock step', 'rock step'], ['Running man', 'running man'], ['Azonto', 'azonto']].map(([title, word]) => ({ title, word })) },
  { style: "Latin and swing", steps: [['Salsa basic', 'salsa basic'], ['Cha-cha', 'cha cha'], ['Charleston', 'charleston']].map(([title, word]) => ({ title, word })) },
  { style: "Ballet, jazz, contemporary", steps: [['Balancé', 'balance step'], ['Plié', 'plie'], ['Chassé', 'chasse'], ['Jazz square', 'jazz square'], ['Contraction', 'contraction']].map(([title, word]) => ({ title, word })) },
  { style: "Basics", steps: [['Step-touch', 'step touch'], ['Grapevine', 'grapevine'], ['Box step', 'box step'], ['Pivot turn', 'pivot turn']].map(([title, word]) => ({ title, word })) },
]
export const ALL_STEPS: StepWord[] = STEP_GROUPS.flatMap(g => g.steps)
export const STYLE_NAMES = ['Raas', 'Bhangra', 'Bollywood fusion', 'Kuthu', 'South Indian fusion', 'Kathak', 'Odissi', 'Rajasthani folk', 'Hip-hop', 'K-pop', 'Afrobeat', 'Latin', 'Jazz', 'Contemporary', 'Ballet', 'Cinematic', 'House']
const STYLE_HEAR: [RegExp, string][] = [
  [/\b(raas|garba|dandiya|navratri)\b/, 'Raas'], [/\bbhangra|dhol\b/, 'Bhangra'], [/\b(kuthu|koothu|dappan|parai)\b/, 'Kuthu'],
  [/\b(bharatanatyam|carnatic|kollywood|tollywood|kummi|kolattam|adavu|tamil|telugu|kannada|malayalam|south indian)\b/, 'South Indian fusion'],
  [/\b(bollywood|filmi|mashup|fusion|wedding|sangeet|baraat)\b/, 'Bollywood fusion'], [/\b(kathak|tatkar)\b/, 'Kathak'], [/\b(odissi|chauka)\b/, 'Odissi'], [/\b(ghoomar|kalbelia|rajasthani)\b/, 'Rajasthani folk'], [/\b(salsa|latin|bachata|merengue)\b/, 'Latin'], [/\bk ?pop\b/, 'K-pop'], [/\b(jazz|broadway|musical theatre)\b/, 'Jazz'], [/\b(contemporary|lyrical)\b/, 'Contemporary'], [/\b(hip ?hop|trap)\b/, 'Hip-hop'], [/\bafro/, 'Afrobeat'],
  [/\b(cinematic|orchestral)\b/, 'Cinematic'], [/\b(ballet|classical|waltz)\b/, 'Ballet'], [/\bhouse\b/, 'House'],
]
export const styleIn = (t: string) => STYLE_HEAR.find(([r]) => r.test(t))?.[1] ?? null
