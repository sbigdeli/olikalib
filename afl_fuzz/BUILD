# Enskilda bibliotek med optimala copts
cc_library(
    name = "lib1",
    srcs = ["lib1/lib1.cpp"],
    hdrs = ["lib1/lib1.h"],
    copts = [
        "-O3",                      # Maximal optimering
        "-fno-omit-frame-pointer",  # För bättre stackspårning
        "-g",                       # Inkludera debug-info
        "-funroll-loops",           # Unrollar loopar för snabbare körning
        "-march=native",            # Optimering för din maskin
    ],
)

cc_library(
    name = "lib2",
    srcs = ["lib2/lib2.cpp"],
    hdrs = ["lib2/lib2.h"],
    copts = [
        "-O3",
        "-fno-omit-frame-pointer",
        "-g",
        "-funroll-loops",
        "-march=native",
    ],
)

cc_library(
    name = "lib3",
    srcs = ["lib3/lib3.cpp"],
    hdrs = ["lib3/lib3.h"],
    copts = [
        "-O3",
        "-fno-omit-frame-pointer",
        "-g",
        "-funroll-loops",
        "-march=native",
    ],
)

cc_library(
    name = "lib4",
    srcs = ["lib4/lib4.cpp"],
    hdrs = ["lib4/lib4.h"],
    copts = [
        "-O3",
        "-fno-omit-frame-pointer",
        "-g",
        "-funroll-loops",
        "-march=native",
    ],
)

cc_library(
    name = "lib5",
    srcs = ["lib5/lib5.cpp"],
    hdrs = ["lib5/lib5.h"],
    copts = [
        "-O3",
        "-fno-omit-frame-pointer",
        "-g",
        "-funroll-loops",
        "-march=native",
    ],
)

# Skapa huvudprogrammet
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
        "-O3",
        "-fno-omit-frame-pointer",
        "-g",
        "-funroll-loops",
        "-march=native",
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
    copts = [                         # Kompilatoralternativ för fuzzing-testet
        "-fsanitize=fuzzer",          # Aktiverar Clang-stöd för fuzzing
        "-fsanitize=address",         # Aktiverar AddressSanitizer för att hitta minnesfel
        "-O3",                        # Maximal optimering
        "-fno-omit-frame-pointer",    # För bättre stackspårning
        "-g",                         # Inkludera debug-information
        "-funroll-loops",             # Unrollar loopar för snabbare körning
        "-march=native",              # Optimering för din maskin
    ],
    linkopts = [  # Länkalternativ för fuzzing-testet
        "-fsanitize=fuzzer",          # Länk med Clang för fuzzing
        "-fsanitize=address",         # Länk med AddressSanitizer
        "-funroll-loops",             # Unrollar loopar under länkning
        "-march=native",              # Optimering för din maskin
    ],
)
