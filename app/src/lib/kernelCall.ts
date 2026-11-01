export interface KernelAnswer { status: string; report: import('./routine').Report | null; parts: Record<string, boolean>; ms: number }
/** Send a candidate routine through the planner and the kernel. Only the kernel's answer counts. */
export async function judge(body: object, signal?: AbortSignal): Promise<KernelAnswer> {
  const res = await fetch('/api/compose', { method: 'POST', signal, body: JSON.stringify(body) })
  const reader = res.body!.getReader(), dec = new TextDecoder()
  let buf = ''; const out: KernelAnswer = { status: 'error', report: null, parts: {}, ms: 0 }
  for (;;) {
    const { done, value } = await reader.read()
    if (done) break
    buf += dec.decode(value, { stream: true })
    const lines = buf.split('\n'); buf = lines.pop()!
    for (const l of lines) {
      if (!l.trim()) continue
      const m = JSON.parse(l)
      if (m.type === 'report') out.report = m.report
      if (m.type === 'done') { out.status = m.status; out.parts = m.parts ?? {}; out.ms = m.ms ?? 0 }
    }
  }
  return out
}
