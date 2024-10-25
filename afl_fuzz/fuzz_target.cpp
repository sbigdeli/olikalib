#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include "lib1/lib1.h"
#include "lib2/lib2.h"
#include "lib3/lib3.h"
#include "lib4/lib4.h"
#include "lib5/lib5.h"

void log_crash_attempt() {
    std::cerr << "Försöker avrefera en null-pointer..." << std::endl; // Använd std::cerr för felmeddelanden
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size < 1) return 0;

    std::string input(reinterpret_cast<const char*>(data), size);

    // Använd dina bibliotek med fuzzing data
    int sum = add(5, 3);
    // Ta bort onödig I/O

    std::string reversed = reverse_string(input);  
    send_data(reversed);

    if (size >= 2) {
        int a = data[0] % 100;  // Modulus för att få ett tal mellan 0 och 99
        int b = data[1] % 100;
        int result = a + b;  
        // Ta bort onödig I/O
    }

    // Simulera en krasch genom att avreferera en null-pointer om storleken är tillräcklig
    if (size > 10) {
        int* null_ptr = nullptr;  // Skapa en null-pointer
        log_crash_attempt();  // Logga kraschen
        *null_ptr = 42;  // Detta kommer att orsaka en segmentation fault
    }

    return 0;
}
