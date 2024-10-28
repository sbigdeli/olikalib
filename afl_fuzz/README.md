1. Ställ in miljövariablen CC/CXX till afl-clang-fast++
export CC=afl-clang-fast++
export CXX=afl-clang-fast++

2. bazel build //:fuzz_target --extra_toolchains=//toolchain2:cc_toolchain_for_linux_x86_64_afl

3. afl-fuzz -i input_corpus -o fuzz_output -- ./bazel-bin/fuzz_target

4. AdressSanitizer - "-fsanitize=address",  # Gör programmet mycket långsammare pga en overhead funktion
