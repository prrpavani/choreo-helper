import { Component, ReactNode } from 'react'
import { createRoot } from 'react-dom/client'
import '@fontsource/anton/400.css'
import '@fontsource-variable/manrope'
import '@fontsource/jetbrains-mono/400.css'
import './styles.css'
import { Shell } from './Shell'

/** If something in the interface fails, say so and offer a way back, instead of a blank page. */
class Boundary extends Component<{ children: ReactNode }, { failed: boolean }> {
  state = { failed: false }
  static getDerivedStateFromError() { return { failed: true } }
  render() {
    if (!this.state.failed) return this.props.children
    return <div className="landing"><div className="hero"><h1 style={{ fontSize: 40 }}>Something went wrong on this page.</h1>
      <p className="lede">The proofs are unaffected, because Lean checks them separately. Reloading brings the app back.</p>
      <button className="btn primary" onClick={() => location.reload()}>Reload</button></div></div>
  }
}
// #/fresh starts the demo clean: no saved progress, team names or records in this browser
if (location.hash === '#/fresh') {
  try { localStorage.clear() } catch { /* nothing stored to clear */ }
  history.replaceState(null, '', '#/create')
}
createRoot(document.getElementById('root')!).render(<Boundary><Shell /></Boundary>)
