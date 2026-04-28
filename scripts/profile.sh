#!/usr/bin/env bash
# Build bench-vcdiff, run it under perf, and emit a top-30 report.
#
# Usage:
#   scripts/profile.sh [workload]
#     workload: "decode" (default) | "encode" | "all"
#
# Output:
#   planning/profile-<date>-<workload>.txt
set -euo pipefail

PROJ_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$PROJ_ROOT"

WORKLOAD="${1:-decode}"
DATE="$(date +%Y%m%d-%H%M%S)"
OUT="$PROJ_ROOT/planning/profile-$DATE-$WORKLOAD.txt"
BIN="$PROJ_ROOT/.lake/build/bin/bench-vcdiff"
PERF_DATA="$(mktemp -t lean-bdiff-perf.XXXXXX.data)"
trap 'rm -f "$PERF_DATA" "$PERF_DATA.old"' EXIT

echo "Building bench-vcdiff..."
lake build bench-vcdiff

if [ ! -x "$BIN" ]; then
  echo "error: $BIN not found after build" >&2
  exit 1
fi

echo "Recording perf profile (workload=$WORKLOAD)..."
perf record -q --call-graph=dwarf -o "$PERF_DATA" -- "$BIN" "$WORKLOAD" >/dev/null

{
  echo "# perf report for bench-vcdiff ($WORKLOAD)"
  echo "# generated $(date -Iseconds)"
  echo "# toolchain: $(cat "$PROJ_ROOT/lean-toolchain")"
  echo "# uname: $(uname -a)"
  echo
  echo "## Top 30 (flat, self time)"
  perf report -i "$PERF_DATA" --stdio --no-children --no-call-graph --sort=symbol -n 2>/dev/null \
    | grep -E '^\s*[0-9]+\.[0-9]+%|^#' | head -60
  echo
  echo "## Top 30 (inclusive, with children)"
  perf report -i "$PERF_DATA" --stdio --children --no-call-graph --sort=symbol -n 2>/dev/null \
    | grep -E '^\s*[0-9]+\.[0-9]+%|^#' | head -60
} > "$OUT"

echo "Wrote $OUT"
