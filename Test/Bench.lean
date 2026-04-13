/-
  Simple benchmark for VCDIFF encoder/decoder performance.
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

def bench (name : String) (srcSize tgtSize : Nat) (modRate : Nat) : IO Unit := do
  let source := genData srcSize 42
  let mut target := ByteArray.empty
  let base := genData tgtSize 42
  for i in [:tgtSize] do
    if modRate > 0 && i % modRate == 0 then
      target := target.push ((base[i]!.toNat + 1) % 256).toUInt8
    else
      target := target.push base[i]!

  -- Write to temp files to ensure data is materialized
  IO.FS.writeBinFile "/tmp/bench_src" source
  IO.FS.writeBinFile "/tmp/bench_tgt" target
  let src ← IO.FS.readBinFile "/tmp/bench_src"
  let tgt ← IO.FS.readBinFile "/tmp/bench_tgt"

  -- Encode
  let encStart ← IO.monoNanosNow
  let patch ← doEncode src tgt
  let encStop ← IO.monoNanosNow
  let encMs := (encStop - encStart) / 1000000

  -- Decode
  let decStart ← IO.monoNanosNow
  let decoded ← doDecode patch src
  let decStop ← IO.monoNanosNow
  let decMs := (decStop - decStart) / 1000000

  let patchSize := patch.size
  let ratio := if tgtSize > 0 then (patchSize * 100) / tgtSize else 0
  match decoded with
  | .ok r =>
    if r == tgt then
      IO.println s!"{name}: encode {encMs}ms, decode {decMs}ms, patch {patchSize}B ({ratio}%)"
    else
      IO.println s!"{name}: MISMATCH! decoded {r.size}B vs target {tgtSize}B"
  | .error e =>
    IO.println s!"{name}: DECODE ERROR: {e}"

-- Count instruction types from instruction section
def countInstructions (instSec : ByteArray) : IO Unit := do
  let mut pos := 0
  let mut adds : Nat := 0
  let mut copies : Nat := 0
  let mut runs : Nat := 0
  let mut doubles : Nat := 0
  let mut opcodes : Nat := 0
  while pos < instSec.size do
    let opcode := instSec[pos]!
    pos := pos + 1
    opcodes := opcodes + 1
    let entry := CodeTable.lookup opcode
    match entry.inst1.type with
    | .add => adds := adds + 1
    | .copy _ => copies := copies + 1
    | .run => runs := runs + 1
    | .noop => pure ()
    if entry.inst1.size == 0 && entry.inst1.type != .noop then
      while pos < instSec.size && (instSec[pos]! &&& 0x80 != 0) do
        pos := pos + 1
      if pos < instSec.size then pos := pos + 1
    match entry.inst2.type with
    | .add => adds := adds + 1; doubles := doubles + 1
    | .copy _ => copies := copies + 1; doubles := doubles + 1
    | .run => runs := runs + 1; doubles := doubles + 1
    | .noop => pure ()
    if entry.inst2.size == 0 && entry.inst2.type != .noop then
      while pos < instSec.size && (instSec[pos]! &&& 0x80 != 0) do
        pos := pos + 1
      if pos < instSec.size then pos := pos + 1
  IO.println s!"  opcodes={opcodes} ADDs={adds} COPYs={copies} RUNs={runs} doubles={doubles}"

def benchDecodeFile (name : String) (srcPath diffPath tgtPath : String)
    (iters : Nat := 1) : IO Unit := do
  let source ← IO.FS.readBinFile srcPath
  let diff ← IO.FS.readBinFile diffPath
  let expected ← IO.FS.readBinFile tgtPath
  IO.println s!"{name}: source {source.size}B, diff {diff.size}B, target {expected.size}B"

  -- Warmup
  let _ ← doDecode diff source
  let _ ← doAdler32 expected

  -- Benchmark adler32 alone on the target
  let adlerStart ← IO.monoNanosNow
  let mut adlerSum : UInt32 := 0
  for _ in [:iters * 3] do
    adlerSum ← doAdler32 expected
  let adlerStop ← IO.monoNanosNow
  let adlerMs := (adlerStop - adlerStart) / 1000000 / (iters * 3)
  -- Force use of adlerSum to prevent elimination
  if adlerSum == 0 then IO.println "  (adler32 zero — unexpected)"

  -- Benchmark decode
  let start ← IO.monoNanosNow
  let mut lastResult := Except.ok ByteArray.empty
  for _ in [:iters] do
    lastResult ← doDecode diff source
  let stop ← IO.monoNanosNow
  let totalMs := (stop - start) / 1000000
  let avgMs := totalMs / iters

  -- Count windows and sections for profiling
  let parseResult := Decoder.parseHeader ⟨diff, 0⟩
  let windowInfo ← match parseResult with
    | .ok (_, c) =>
      match Decoder.parseWindow c with
      | .ok (win, _) => pure s!"instSec={win.instSection.size}B dataSec={win.dataSection.size}B addrSec={win.addrSection.size}B tgtLen={win.targetLen}"
      | .error _ => pure "parse error"
    | .error _ => pure "header error"

  match lastResult with
  | .ok r =>
    if r == expected then
      IO.println s!"  decode: {avgMs}ms avg ({iters} iters, {totalMs}ms total), adler32: {adlerMs}ms"
      IO.println s!"  {windowInfo}"
      match parseResult with
      | .ok (_, c) =>
        match Decoder.parseWindow c with
        | .ok (win, _) => countInstructions win.instSection
        | .error _ => pure ()
      | .error _ => pure ()
    else
      IO.println s!"  MISMATCH! decoded {r.size}B vs expected {expected.size}B"
  | .error e =>
    IO.println s!"  DECODE ERROR: {e}"

def main (args : List String) : IO Unit := do
  let mode := args.head?.getD "all"

  if mode == "decode" || mode == "all" then
    IO.println "VCDIFF Decode Benchmark"
    IO.println "======================="
    IO.println ""

    benchDecodeFile "case01"
      "test-data/case01/source_state_bytes.bin"
      "test-data/case01/state_diff_bytes.bin"
      "test-data/case01/target_state_bytes.bin"
      3

    IO.println ""

  if mode == "encode" || mode == "all" then
    IO.println "VCDIFF Encode+Decode Benchmark"
    IO.println "=============================="
    IO.println ""

    bench "1MB   10% mod" 1000000 1000000 10

    IO.println ""

  IO.println "Done."
