use std::env;
use std::path::PathBuf;
use std::process::Command;

fn lean_sysroot() -> PathBuf {
    // Try LEAN_SYSROOT env var first, then ask elan
    if let Ok(s) = env::var("LEAN_SYSROOT") {
        return PathBuf::from(s);
    }
    let output = Command::new("lean")
        .arg("--print-prefix")
        .output()
        .expect("failed to run `lean --print-prefix` — is Lean installed?");
    PathBuf::from(String::from_utf8(output.stdout).unwrap().trim())
}

fn main() {
    let sysroot = lean_sysroot();
    let lean_include = sysroot.join("include");
    let lean_lib = sysroot.join("lib").join("lean");

    let csrc = PathBuf::from(env::var("CARGO_MANIFEST_DIR").unwrap()).join("csrc");

    let c_files = [
        "Ffi/Export.c",
        "LeanBdiff/Vcdiff/Encoder.c",
        "LeanBdiff/Vcdiff/Decoder.c",
        "LeanBdiff/Vcdiff/Defs.c",
        "LeanBdiff/Vcdiff/Varint.c",
        "LeanBdiff/Vcdiff/CodeTable.c",
        "LeanBdiff/Vcdiff/AddressCache.c",
    ];

    let mut build = cc::Build::new();
    build.include(&lean_include);
    // Lean C output expects GNU C extensions
    build.flag_if_supported("-std=gnu11");
    build.flag_if_supported("-Wno-unused-parameter");
    build.flag_if_supported("-Wno-unused-label");
    build.flag_if_supported("-Wno-unused-but-set-variable");

    for f in &c_files {
        build.file(csrc.join(f));
    }
    // Shim for Lean inline functions
    build.file(csrc.join("shim.c"));

    build.compile("lean_bdiff_c");

    // Link the Lean runtime (static)
    println!("cargo:rustc-link-search=native={}", lean_lib.display());
    println!("cargo:rustc-link-lib=static=leanrt");
    println!("cargo:rustc-link-lib=static=Init");
    // Lean runtime dependencies
    let toolchain_lib = sysroot.join("lib");
    println!("cargo:rustc-link-search=native={}", toolchain_lib.display());
    println!("cargo:rustc-link-lib=static=uv");
    println!("cargo:rustc-link-lib=dylib=gmp");
    // Lean uses C++ internally — set rpath so libc++.so is found at runtime
    println!("cargo:rustc-link-lib=c++");
    println!("cargo:rustc-link-lib=c++abi");
    println!(
        "cargo:rustc-link-arg=-Wl,-rpath,{}",
        toolchain_lib.display()
    );

    // Rerun if C sources change
    for f in &c_files {
        println!("cargo:rerun-if-changed=csrc/{}", f);
    }
    println!("cargo:rerun-if-env-changed=LEAN_SYSROOT");
}
