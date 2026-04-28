//! In-process comparison of xdelta3 (C, via xdelta3-rs static link) vs lean-bdiff
//! (Lean 4, via FFI). Eliminates process-launch and file-I/O from measurements.
//!
//! Run from the repo root:
//!   cd rust && cargo run --release --bin bench-compare --features bench -- <mode> [iters]
//!
//! Modes: all | case01-encode | case01-decode | synthetic
//! Default iters: 5 (plus 1 warmup per measurement)
//!
//! xdelta3 is invoked with XD3_COMPLEVEL_6 to match the CLI default
//! (`xdelta3 -e` uses level 6; `xd3_encode_memory` with flags=0 uses level 3).

use std::env;
use std::fs;
use std::path::Path;
use std::time::Instant;

// Re-declare the symbols from libxdelta3.a (linked via the xdelta3 crate's build.rs).
// The `xdelta3` crate's `binding` module is private, so we can't access them through
// the crate, but the symbols are still in the final binary.
extern "C" {
    fn xd3_encode_memory(
        input: *const u8,
        input_size: usize,
        source: *const u8,
        source_size: usize,
        output_buffer: *mut u8,
        output_size: *mut usize,
        avail_output: usize,
        flags: i32,
    ) -> i32;
    fn xd3_decode_memory(
        input: *const u8,
        input_size: usize,
        source: *const u8,
        source_size: usize,
        output_buffer: *mut u8,
        output_size: *mut usize,
        avail_output: usize,
        flags: i32,
    ) -> i32;
}

const XD3_COMPLEVEL_6: i32 = 6 << 20;

// Keep the `xdelta3` crate depended on so cargo links libxdelta3.a.
// We import a symbol just to force the link edge.
#[allow(dead_code)]
fn _ensure_xdelta3_linked() {
    let _ = xdelta3::encode(&[0], &[0]);
}

fn xd3_encode(input: &[u8], src: &[u8]) -> Vec<u8> {
    let estimated = (input.len() + src.len()) * 2 + 1024;
    let mut out = Vec::with_capacity(estimated);
    let mut avail_output: usize = 0;
    let result = unsafe {
        xd3_encode_memory(
            input.as_ptr(),
            input.len(),
            src.as_ptr(),
            src.len(),
            out.as_mut_ptr(),
            &mut avail_output,
            estimated,
            XD3_COMPLEVEL_6,
        )
    };
    if result != 0 {
        panic!("xd3_encode_memory failed: code {}", result);
    }
    unsafe { out.set_len(avail_output) };
    out
}

fn xd3_decode(input: &[u8], src: &[u8], target_size_hint: usize) -> Vec<u8> {
    let estimated = target_size_hint.max(input.len() * 4 + 1024);
    let mut out = Vec::with_capacity(estimated);
    let mut avail_output: usize = 0;
    let result = unsafe {
        xd3_decode_memory(
            input.as_ptr(),
            input.len(),
            src.as_ptr(),
            src.len(),
            out.as_mut_ptr(),
            &mut avail_output,
            estimated,
            0,
        )
    };
    if result != 0 {
        panic!("xd3_decode_memory failed: code {}", result);
    }
    unsafe { out.set_len(avail_output) };
    out
}

// --- Timing ---

fn time_once<F, T>(mut f: F) -> (u128, T)
where
    F: FnMut() -> T,
{
    let t0 = Instant::now();
    let r = f();
    (t0.elapsed().as_nanos(), r)
}

fn time_median<F, T>(iters: usize, mut f: F) -> (u128, T)
where
    F: FnMut() -> T,
{
    // warmup
    let (_, _) = time_once(&mut f);
    let mut samples = Vec::with_capacity(iters);
    let mut last = f();
    for _ in 0..iters {
        let (ns, r) = time_once(&mut f);
        samples.push(ns);
        last = r;
    }
    samples.sort_unstable();
    (samples[samples.len() / 2], last)
}

fn fmt_ms(ns: u128) -> String {
    let us = ns / 1000;
    let ms = us / 1000;
    let frac = us % 1000;
    format!("{}.{:03}ms", ms, frac)
}

// --- Synthetic data generation (matches Test/Bench.lean's genData). ---

fn gen_data(size: usize, seed: u32) -> Vec<u8> {
    let mut out = vec![0u8; size];
    let mut s: u32 = seed;
    for b in out.iter_mut() {
        s = s.wrapping_mul(1103515245).wrapping_add(12345);
        *b = ((s >> 16) & 0xFF) as u8;
    }
    out
}

fn synthetic_inputs() -> (Vec<u8>, Vec<u8>) {
    let size = 1_000_000;
    let src = gen_data(size, 42);
    let base = gen_data(size, 42);
    let mut tgt = base.clone();
    for i in (0..size).step_by(10) {
        tgt[i] = tgt[i].wrapping_add(1);
    }
    (src, tgt)
}

// --- Workloads ---

fn bench_case01_encode(iters: usize) {
    let src = fs::read("test-data/case01/source_state_bytes.bin").expect("read source");
    let tgt = fs::read("test-data/case01/target_state_bytes.bin").expect("read target");

    println!(
        "case01 encode: source {}B, target {}B",
        src.len(),
        tgt.len()
    );

    // xdelta3
    let (xd3_enc_ns, xd3_patch) = time_median(iters, || xd3_encode(&tgt, &src));
    let xd3_dec = xd3_decode(&xd3_patch, &src, tgt.len());
    assert_eq!(xd3_dec, tgt, "xdelta3 roundtrip mismatch");
    println!(
        "  xdelta3 -6:  encode {} median, patch {}B ({}%)",
        fmt_ms(xd3_enc_ns),
        xd3_patch.len(),
        xd3_patch.len() * 100 / tgt.len()
    );

    // lean-bdiff
    let (lb_enc_ns, lb_patch) = time_median(iters, || lean_bdiff::encode(&tgt, &src).unwrap());
    let lb_dec = lean_bdiff::decode(&lb_patch, &src).expect("lean-bdiff roundtrip");
    assert_eq!(lb_dec, tgt, "lean-bdiff roundtrip mismatch");
    println!(
        "  lean-bdiff:  encode {} median, patch {}B ({}%)",
        fmt_ms(lb_enc_ns),
        lb_patch.len(),
        lb_patch.len() * 100 / tgt.len()
    );

    let ratio = lb_enc_ns as f64 / xd3_enc_ns as f64;
    println!("  ratio:       {:.2}x", ratio);
}

fn bench_case01_decode(iters: usize) {
    let src = fs::read("test-data/case01/source_state_bytes.bin").expect("read source");
    let tgt = fs::read("test-data/case01/target_state_bytes.bin").expect("read target");
    let repo_diff =
        fs::read("test-data/case01/state_diff_bytes.bin").expect("read diff");

    println!(
        "case01 decode: source {}B, target {}B, diff {}B",
        src.len(),
        tgt.len(),
        repo_diff.len()
    );

    // xdelta3 on the repo-shipped diff
    let (xd3_dec_ns, xd3_out) =
        time_median(iters, || xd3_decode(&repo_diff, &src, tgt.len()));
    assert_eq!(xd3_out, tgt, "xdelta3 decode mismatch");
    println!("  xdelta3:     decode {} median (repo diff)", fmt_ms(xd3_dec_ns));

    // lean-bdiff on the same diff
    let (lb_dec_ns, lb_out) = time_median(iters, || {
        lean_bdiff::decode(&repo_diff, &src).expect("decode")
    });
    assert_eq!(lb_out, tgt, "lean-bdiff decode mismatch");
    println!("  lean-bdiff:  decode {} median (repo diff)", fmt_ms(lb_dec_ns));

    let ratio = lb_dec_ns as f64 / xd3_dec_ns as f64;
    println!("  ratio:       {:.2}x", ratio);
}

fn bench_synthetic(iters: usize) {
    let (src, tgt) = synthetic_inputs();
    println!("synthetic 1MB 10%mod: source {}B, target {}B", src.len(), tgt.len());

    let (xd3_enc_ns, xd3_patch) = time_median(iters, || xd3_encode(&tgt, &src));
    let (xd3_dec_ns, xd3_out) = time_median(iters, || xd3_decode(&xd3_patch, &src, tgt.len()));
    assert_eq!(xd3_out, tgt, "xdelta3 roundtrip mismatch");
    println!(
        "  xdelta3 -6:  encode {} / decode {}, patch {}B ({}%)",
        fmt_ms(xd3_enc_ns),
        fmt_ms(xd3_dec_ns),
        xd3_patch.len(),
        xd3_patch.len() * 100 / tgt.len()
    );

    let (lb_enc_ns, lb_patch) = time_median(iters, || lean_bdiff::encode(&tgt, &src).unwrap());
    let (lb_dec_ns, lb_out) = time_median(iters, || {
        lean_bdiff::decode(&lb_patch, &src).expect("decode")
    });
    assert_eq!(lb_out, tgt, "lean-bdiff roundtrip mismatch");
    println!(
        "  lean-bdiff:  encode {} / decode {}, patch {}B ({}%)",
        fmt_ms(lb_enc_ns),
        fmt_ms(lb_dec_ns),
        lb_patch.len(),
        lb_patch.len() * 100 / tgt.len()
    );

    println!(
        "  ratio:       encode {:.2}x, decode {:.2}x",
        lb_enc_ns as f64 / xd3_enc_ns as f64,
        lb_dec_ns as f64 / xd3_dec_ns as f64
    );
}

fn main() {
    let args: Vec<String> = env::args().collect();
    let mode = args.get(1).map(|s| s.as_str()).unwrap_or("all");
    let iters: usize = args
        .get(2)
        .and_then(|s| s.parse().ok())
        .unwrap_or(5);

    // Sanity check we're at the right cwd.
    if !Path::new("test-data/case01/source_state_bytes.bin").exists() {
        eprintln!(
            "error: run from the lean-bdiff repo root (missing test-data/case01/*). cwd={:?}",
            env::current_dir().unwrap()
        );
        std::process::exit(1);
    }

    lean_bdiff::init();

    println!(
        "=== bench-compare (mode={}, iters={}, in-process) ===",
        mode, iters
    );
    println!();

    if matches!(mode, "all" | "case01-encode" | "encode") {
        bench_case01_encode(iters);
        println!();
    }
    if matches!(mode, "all" | "case01-decode" | "decode") {
        bench_case01_decode(iters);
        println!();
    }
    if matches!(mode, "all" | "synthetic") {
        bench_synthetic(iters);
        println!();
    }
}
