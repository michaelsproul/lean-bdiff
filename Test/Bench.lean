/-
  Benchmark harness for VCDIFF encoder/decoder.

  Reports median of N iterations (default N=5). CLI:
    bench-vcdiff                        -- all workloads, default iters
    bench-vcdiff decode                 -- case01 decode only
    bench-vcdiff encode                 -- 1MB synthetic + case01 encode
    bench-vcdiff case01-encode          -- just case01 encode
    bench-vcdiff case01-decode          -- alias for decode
    bench-vcdiff synthetic              -- 1MB synthetic encode+decode
  All forms accept a trailing integer N for iteration count, e.g.
    bench-vcdiff decode 9
-/
import LeanBdiff.Vcdiff

open LeanBdiff.Vcdiff

-- Generate pseudo-random bytes from a seed
def genData (size : Nat) (seed : UInt32) : ByteArray := Id.run do
  let mut arr := ByteArray.empty
  let mut s := seed
  for _ in [:size] do
    s := s * 1103515245 + 12345
    arr := arr.push (s >>> 16).toUInt8
  arr

@[noinline] def doEncode (source target : ByteArray) : IO ByteArray :=
  pure (Encoder.encode source target)

@[noinline] def doDecode (patch source : ByteArray) : IO (Except DecodeError ByteArray) :=
  pure (match Decoder.decode patch source with
    | .ok r => .ok r
    | .error e => .error e)

@[noinline] def doAdler32 (data : ByteArray) : IO UInt32 :=
  pure (Decoder.adler32 data)

/-- Insertion-sort an `Array Nat` (small N, order doesn't matter). -/
def sortNats (xs : Array Nat) : Array Nat := Id.run do
  let mut a := xs
  for i in [1:a.size] do
    let mut j := i
    while j > 0 ∧ a[j-1]! > a[j]! do
      let tmp := a[j-1]!
      a := a.set! (j-1) a[j]!
      a := a.set! j tmp
      j := j - 1
  a

def median (xs : Array Nat) : Nat :=
  let s := sortNats xs
  if s.size == 0 then 0 else s[s.size / 2]!

def mean (xs : Array Nat) : Nat :=
  if xs.size == 0 then 0 else xs.foldl (· + ·) 0 / xs.size

/-- Time `action` once, return elapsed nanoseconds and the result. -/
@[inline] def timeNs (action : IO α) : IO (Nat × α) := do
  let t0 ← IO.monoNanosNow
  let r ← action
  let t1 ← IO.monoNanosNow
  pure (t1 - t0, r)

/-- Run `action` `iters` times (+1 warmup), report median ns. -/
def timeMedian (iters : Nat) (action : IO α) : IO (Nat × α) := do
  -- warmup
  let (_, _) ← timeNs action
  let mut samples : Array Nat := Array.mkEmpty iters
  let mut last ← action
  for _ in [:iters] do
    let (ns, r) ← timeNs action
    samples := samples.push ns
    last := r
  pure (median samples, last)

/-- Format nanoseconds as millis with 3 fractional digits. -/
def fmtTime (ns : Nat) : String :=
  let us := ns / 1000
  let ms := us / 1000
  let frac := us % 1000
  let pad :=
    if frac < 10 then "00"
    else if frac < 100 then "0"
    else ""
  s!"{ms}.{pad}{frac}ms"

-- ## Synthetic encode+decode workload

def benchSynthetic (iters : Nat) : IO Unit := do
  let name := "1MB 10%mod"
  let srcSize := 1_000_000
  let tgtSize := 1_000_000
  let modRate := 10
  let source := genData srcSize 42
  let base := genData tgtSize 42
  let mut target := ByteArray.empty
  for i in [:tgtSize] do
    if modRate > 0 ∧ i % modRate == 0 then
      target := target.push ((base[i]!.toNat + 1) % 256).toUInt8
    else
      target := target.push base[i]!

  IO.FS.writeBinFile "/tmp/bench_src.bin" source
  IO.FS.writeBinFile "/tmp/bench_tgt.bin" target
  let src ← IO.FS.readBinFile "/tmp/bench_src.bin"
  let tgt ← IO.FS.readBinFile "/tmp/bench_tgt.bin"

  let (encNs, patch) ← timeMedian iters (doEncode src tgt)
  let (decNs, decoded) ← timeMedian iters (doDecode patch src)

  IO.FS.writeBinFile "/tmp/bench_patch.bin" patch

  match decoded with
  | .ok r =>
    if r == tgt then
      IO.println s!"{name}: encode {fmtTime encNs} median, decode {fmtTime decNs} median, \
patch {patch.size}B ({(patch.size * 100) / tgtSize}%)  [iters={iters}]"
    else
      IO.println s!"{name}: MISMATCH! decoded {r.size}B vs target {tgtSize}B"
  | .error e =>
    IO.println s!"{name}: DECODE ERROR: {e}"

-- ## case01 decode workload

def benchCase01Decode (iters : Nat) : IO Unit := do
  let srcPath := "test-data/case01/source_state_bytes.bin"
  let diffPath := "test-data/case01/state_diff_bytes.bin"
  let tgtPath := "test-data/case01/target_state_bytes.bin"
  let source ← IO.FS.readBinFile srcPath
  let diff ← IO.FS.readBinFile diffPath
  let expected ← IO.FS.readBinFile tgtPath
  IO.println s!"case01 decode: source {source.size}B, diff {diff.size}B, target {expected.size}B"

  let (decNs, result) ← timeMedian iters (doDecode diff source)
  match result with
  | .ok r =>
    if r == expected then
      IO.println s!"  decode {fmtTime decNs} median  [iters={iters}]"
    else
      IO.println s!"  MISMATCH! decoded {r.size}B vs expected {expected.size}B"
  | .error e =>
    IO.println s!"  DECODE ERROR: {e}"

-- ## case01 encode workload (our encoder producing a patch for the real inputs)

def benchCase01Encode (iters : Nat) : IO Unit := do
  let srcPath := "test-data/case01/source_state_bytes.bin"
  let tgtPath := "test-data/case01/target_state_bytes.bin"
  let source ← IO.FS.readBinFile srcPath
  let target ← IO.FS.readBinFile tgtPath
  IO.println s!"case01 encode: source {source.size}B, target {target.size}B"

  let (encNs, patch) ← timeMedian iters (doEncode source target)
  let ratio := if target.size > 0 then (patch.size * 100) / target.size else 0
  IO.println s!"  encode {fmtTime encNs} median, patch {patch.size}B ({ratio}%)  [iters={iters}]"

  -- Verify roundtrip once
  match Decoder.decode patch source with
  | .ok r =>
    if r == target then
      IO.println "  roundtrip OK"
    else
      IO.println s!"  ROUNDTRIP MISMATCH! decoded {r.size}B vs target {target.size}B"
  | .error e =>
    IO.println s!"  ROUNDTRIP DECODE ERROR: {e}"

-- ## Entry point

def main (args : List String) : IO Unit := do
  -- Parse: <mode> [iters]
  let (mode, iters) := match args with
    | [] => ("all", 5)
    | [m] => (m, 5)
    | m :: n :: _ => (m, n.toNat?.getD 5)

  IO.println s!"=== lean-bdiff benchmark (mode={mode}, iters={iters}) ==="
  IO.println ""

  if mode == "case01-decode" ∨ mode == "decode" ∨ mode == "all" then
    benchCase01Decode iters
    IO.println ""

  if mode == "case01-encode" ∨ mode == "encode" ∨ mode == "all" then
    benchCase01Encode iters
    IO.println ""

  if mode == "synthetic" ∨ mode == "encode" ∨ mode == "all" then
    benchSynthetic iters
    IO.println ""

  IO.println "Done."
