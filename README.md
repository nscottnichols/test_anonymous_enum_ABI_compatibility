# test_anonymous_enum_ABI_compatibility

Minimal examples showing how adding a **tag** to an anonymous `enum` affects ABI:

- **1-c-abi-stable** — C only: library built with anonymous enum, app with tagged enum.  
  Result: **links & runs** (no name mangling in C).

- **2-cpp-abi-break** — C++ API where the enum appears in the signature.  
  Result: **link fails** (different mangled names due to type change).

- **3-c-or-cpp-safe-boundary** — C or C++ implementation, but the exported API has **C linkage**.  
  Result: **stable** (symbol name not mangled with enum type).

## How to try it

Each subfolder has its own `Makefile`.

```sh
cd 1-c-abi-stable && make clean && make run && cd ..
cd 2-cpp-abi-break && make clean ; make || true ; cd ..
cd 3-c-or-cpp-safe-boundary && make clean && make run && cd ..
```

In `2-cpp-abi-break`, you should see a linker error (expected).

