1. Ställ in miljövariablen CC/CXX till afl-clang-fast++
export CC=afl-clang-fast++
export CXX=afl-clang-fast++

2. CXX=afl-clang-fast++ bazel build //:fuzz_target

3. afl-fuzz -i /home/sbigdeli/Desktop/olikalib/input_corpus -o fuzz_output -- ./bazel-bin/fuzz_target

4. AdressSanitizer - "-fsanitize=address",  # Gör programmet mycket långsammare pga en overhead funktion

5. Se skillnaden i speeden genom att göra följande:
