cc_library(
    name = "lib1",
    srcs = ["lib1/lib1.cpp"],
    hdrs = ["lib1/lib1.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

cc_library(
    name = "lib2",
    srcs = ["lib2/lib2.cpp"],
    hdrs = ["lib2/lib2.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

cc_library(
    name = "lib3",
    srcs = ["lib3/lib3.cpp"],
    hdrs = ["lib3/lib3.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

cc_library(
    name = "lib4",
    srcs = ["lib4/lib4.cpp"],
    hdrs = ["lib4/lib4.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

cc_library(
    name = "lib5",
    srcs = ["lib5/lib5.cpp"],
    hdrs = ["lib5/lib5.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":lib1",
        ":lib2",
        ":lib3",
        ":lib4",
        ":lib5",
    ],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre backtracing
        "-g",                       # Inkludera debug-information
    ],
)

# Fuzzing-target byggregel
cc_test(
    name = "fuzz_target",
    srcs = ["fuzz_target.cpp"],
    deps = [
        ":lib1",
        ":lib2",
        ":lib3",
        ":lib4",
        ":lib5",
    ],
    copts = [
        "-fsanitize=fuzzer",            # Använd Clang-specifik flagga för fuzzing
        # "-fsanitize=address",           # Aktivera AddressSanitizer
        "-O3",                          # Maximal optimering
        "-fno-omit-frame-pointer",      # För bättre backtracing
        "-g",                           # Inkludera debug-information
    ],
    linkopts = [
        "-fsanitize=fuzzer",            # Länk med Clang för fuzzer
        # "-fsanitize=address",           # Länk med AddressSanitizer
    ],
)
