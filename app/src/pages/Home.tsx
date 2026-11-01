import { routineById } from '../data/catalog'
import { FormationArt } from '../ui/Art'
import { useProgress } from '../ui/Cards'

export function Footer() {
  return <footer className="footer"><div className="wrap">
    <b>A love letter to the circuit.</b> To the Bollywood fusion teams, the bhangra and raas lines, the kuthu and South Indian sets, and everyone in the Desi Dance Network community: the captains counting at midnight in a borrowed studio, and the dancers who know exactly what it costs when two people want the same eight inches of floor.
    <small>An independent project, not affiliated with or endorsed by any circuit, competition or team. All routines and artwork here are original.</small>
  </div></footer>
}
export function Promises() {
  return <div className="promises">
    <div className="promise"><b>01</b><div className="h3">No collisions</div><p>Nobody gets closer than the gap you set, at any moment, on stage or crossing from the wings. Not at the frames you checked: at every instant.</p></div>
    <div className="promise"><b>02</b><div className="h3">In bounds</div><p>Everyone stays on the stage or in the wings, the whole way through.</p></div>
    <div className="promise"><b>03</b><div className="h3">Under the speed limit</div><p>Nobody has to move faster than the limit to get where they are going.</p></div>
    <div className="promise"><b>04</b><div className="h3">No jumps</div><p>Each move starts where the last one ended, at the same speed. Nobody teleports.</p></div>
    <div className="promise"><b>05</b><div className="h3">Forgiving</div><p>Real dancers drift. If everyone stays within the allowance you set, nobody gets hit, in every possible performance.</p></div>
  </div>
}
export function Home() {
  useProgress()
  const hero = routineById('midnight-in-motion')!
  return <div className="page">
    <section className="hero-home">
      <div className="hero-art"><FormationArt routine={hero} wide /></div>
      <div className="wrap hero-text">
        <div className="eyebrow">For the Bollywood fusion circuit</div>
        <h1 className="big">Describe the set.<br /><em>Nobody collides.</em></h1>
        <p className="lead">Describe the piece you see in your head. Choreo sets it out, with dancers coming on and going off, and Lean proves that nobody runs into anybody, even when real dancers drift off their marks.</p>
        <div className="hero-actions"><a className="btn primary large" href="#/create/new">Start a routine</a><a className="btn large" href="#/explore">See the Library</a></div>
      </div>
    </section>
    <div className="wrap"><section className="block">
      <div className="sec-head"><h2 className="h2">What Lean proves</h2></div>
      <Promises />
    </section></div>
    <Footer />
  </div>
}
