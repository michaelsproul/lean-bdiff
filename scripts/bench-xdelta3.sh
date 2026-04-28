#!/usr/bin/env bash
# Benchmark xdelta3 reference implementation for comparison with lean-bdiff.
#
# Usage:
#   scripts/bench-xdelta3.sh [iters]
#
# Emits one result block per workload with median elapsed seconds, RSS, output size.
set -euo pipefail

PROJ_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$PROJ_ROOT"

ITERS="${1:-5}"
TMP="$(mktemp -d)"
trap 'rm -rf "$TMP"' EXIT

XD3="/usr/bin/xdelta3"
TIME="/usr/bin/time"

# case01 inputs
CASE01_SRC="test-data/case01/source_state_bytes.bin"
CASE01_TGT="test-data/case01/target_state_bytes.bin"

# Synthetic 1MB 10%-mod — same generator as Test/Bench.lean synthetic case.
gen_synth() {
  python3 - <<'PY' "$TMP/synth_src.bin" "$TMP/synth_tgt.bin"
import sys, struct
src_path, tgt_path = sys.argv[1], sys.argv[2]
size = 1_000_000
seed = 42
def gen(size, seed):
    buf = bytearray(size)
    s = seed & 0xFFFFFFFF
    for i in range(size):
        s = (s * 1103515245 + 12345) & 0xFFFFFFFF
        buf[i] = (s >> 16) & 0xFF
    return bytes(buf)
src = gen(size, 42)
base = gen(size, 42)
tgt = bytearray(base)
for i in range(0, size, 10):
    tgt[i] = (tgt[i] + 1) & 0xFF
open(src_path, 'wb').write(src)
open(tgt_path, 'wb').write(bytes(tgt))
PY
}

# median_of "cmd args..." -- run cmd ITERS+1 times, ignore warmup, median elapsed ms.
# Prints:   elapsed_ms_median max_rss_kb_median
median_of() {
  local samples_ms=()
  local samples_rss=()
  # Warmup
  "$@" >/dev/null 2>&1 || true
  for _ in $(seq 1 "$ITERS"); do
    local t0 t1
    # Use a simpler wall-clock via date +%s%N, plus RSS from /usr/bin/time.
    local rss_file="$TMP/rss"
    t0=$(date +%s%N)
    "$TIME" -f '%M' -o "$rss_file" "$@" >/dev/null 2>&1
    t1=$(date +%s%N)
    samples_ms+=($(( (t1 - t0) / 1000000 )))
    samples_rss+=($(cat "$rss_file"))
  done
  local ms_sorted
  ms_sorted=$(printf '%s\n' "${samples_ms[@]}" | sort -n)
  local rss_sorted
  rss_sorted=$(printf '%s\n' "${samples_rss[@]}" | sort -n)
  local mid=$(( ITERS / 2 ))
  local ms_med rss_med
  ms_med=$(echo "$ms_sorted" | sed -n "$((mid+1))p")
  rss_med=$(echo "$rss_sorted" | sed -n "$((mid+1))p")
  echo "$ms_med $rss_med"
}

echo "=== xdelta3 reference benchmark (iters=$ITERS) ==="
echo "xdelta3: $($XD3 -V | head -1)"
echo

# --- case01 encode ---
echo "case01 encode:"
ENC_OUT="$TMP/case01.vcdiff"
rm -f "$ENC_OUT"
read -r enc_ms enc_rss <<<"$(median_of "$XD3" -e -S none -f -s "$CASE01_SRC" "$CASE01_TGT" "$ENC_OUT")"
enc_size=$(stat -c%s "$ENC_OUT")
tgt_size=$(stat -c%s "$CASE01_TGT")
ratio=$(( enc_size * 100 / tgt_size ))
echo "  encode ${enc_ms}ms median, RSS ${enc_rss}KB, patch ${enc_size}B (${ratio}%)"

# --- case01 decode (using the repo's reference state_diff_bytes.bin) ---
echo "case01 decode (repo diff):"
CASE01_DIFF="test-data/case01/state_diff_bytes.bin"
DEC_OUT="$TMP/case01.decoded"
read -r dec_ms dec_rss <<<"$(median_of "$XD3" -d -S none -f -s "$CASE01_SRC" "$CASE01_DIFF" "$DEC_OUT")"
if cmp -s "$DEC_OUT" "$CASE01_TGT"; then
  match="OK"
else
  match="MISMATCH"
fi
echo "  decode ${dec_ms}ms median, RSS ${dec_rss}KB, roundtrip $match"

# --- case01 decode (using xdelta3's own just-encoded diff, so sizes line up 1:1 for ratio comparison) ---
echo "case01 decode (xdelta3's own diff):"
read -r dec2_ms dec2_rss <<<"$(median_of "$XD3" -d -S none -f -s "$CASE01_SRC" "$ENC_OUT" "$DEC_OUT")"
if cmp -s "$DEC_OUT" "$CASE01_TGT"; then
  match="OK"
else
  match="MISMATCH"
fi
echo "  decode ${dec2_ms}ms median, RSS ${dec2_rss}KB, roundtrip $match"
echo

# --- synthetic 1MB ---
gen_synth
SYN_ENC="$TMP/synth.vcdiff"
SYN_DEC="$TMP/synth.decoded"

echo "synthetic 1MB 10%mod encode:"
rm -f "$SYN_ENC"
read -r syn_enc_ms syn_enc_rss <<<"$(median_of "$XD3" -e -S none -f -s "$TMP/synth_src.bin" "$TMP/synth_tgt.bin" "$SYN_ENC")"
syn_enc_size=$(stat -c%s "$SYN_ENC")
syn_tgt_size=$(stat -c%s "$TMP/synth_tgt.bin")
syn_ratio=$(( syn_enc_size * 100 / syn_tgt_size ))
echo "  encode ${syn_enc_ms}ms median, RSS ${syn_enc_rss}KB, patch ${syn_enc_size}B (${syn_ratio}%)"

echo "synthetic 1MB 10%mod decode:"
read -r syn_dec_ms syn_dec_rss <<<"$(median_of "$XD3" -d -S none -f -s "$TMP/synth_src.bin" "$SYN_ENC" "$SYN_DEC")"
if cmp -s "$SYN_DEC" "$TMP/synth_tgt.bin"; then
  match="OK"
else
  match="MISMATCH"
fi
echo "  decode ${syn_dec_ms}ms median, RSS ${syn_dec_rss}KB, roundtrip $match"
