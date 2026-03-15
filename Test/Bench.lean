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

def bench (name : String) (srcSize tgtSize : Nat) (modRate : Nat) : IO Unit := do
  let source := genData srcSize 42
  let mut target := ByteArray.empty
  let base := genData tgtSize 42
  for i in [:tgtSize] do
    if modRate > 0 && i % modRate == 0 then
      target := target.push ((base[i]!.toNat + 1) % 256).toUInt8
    else
      target := target.push base[i]!

  -- Encode (use ← pure to force evaluation in IO)
  let encStart ← IO.monoNanosNow
  let patch ← pure (Encoder.encode source target)
  let _ ← pure patch.size  -- force
  let encStop ← IO.monoNanosNow
  let encMs := (encStop - encStart) / 1000000

  -- Decode
  let decStart ← IO.monoNanosNow
  let decoded ← pure (Decoder.decode patch source)
  let decStop ← IO.monoNanosNow
  let decMs := (decStop - decStart) / 1000000

  let patchSize := patch.size
  let ratio := if tgtSize > 0 then (patchSize * 100) / tgtSize else 0
  match decoded with
  | .ok r =>
    if r == target then
      IO.println s!"{name}: encode {encMs}ms, decode {decMs}ms, patch {patchSize}B ({ratio}%)"
    else
      IO.println s!"{name}: MISMATCH! decoded {r.size}B vs target {tgtSize}B, patch {patchSize}B"
  | .error e =>
    IO.println s!"{name}: DECODE ERROR: {e}, patch {patchSize}B"

def main : IO Unit := do
  IO.println "VCDIFF Benchmark"
  IO.println "================"
  IO.println ""

  bench "10KB  20% mod" 10000 10000 5
  bench "100KB 10% mod" 100000 100000 10
  bench "100KB 20% mod" 100000 100000 5
  bench "1MB   10% mod" 1000000 1000000 10
  bench "1MB   20% mod" 1000000 1000000 5
  bench "1MB   all new"  0 1000000 0

  IO.println ""
  IO.println "Done."
