1. Ställ in miljövariablen CC till afl-clang-fast++
export CC=afl-clang-fast++

2. CXX=afl-clang-fast++ bazel build //:fuzz_target

3. afl-fuzz -i /home/sbigdeli/Desktop/olikalib/input_corpus -o fuzz_output -- ./bazel-bin/fuzz_target

4. AdressSanitizer - "-fsanitize=address",  # Gör programmet mycket långsammare pga en overhead funktion

5. Se skillnaden i speeden genom att göra följande:

Kommentera ut detta stycke:
void access_out_of_bounds(const std::vector<int>& arr, size_t index) {
    // Försöker få tillgång till ett element utanför arrayens gränser
    std::cout << arr[index] << std::endl;  // Kommer att krascha om index är utanför arrayens storlek
}


Ta bort kommentarerna och använd detta stycke:
/*void access_out_of_bounds(const std::vector<int>& arr, size_t index) {
    if (index < arr.size()) {  // Kontrollera att index är giltigt
        std::cout << arr[index] << std::endl;
    } else {
        std::cerr << "Index out of bounds: " << index << std::endl;  // Felmeddelande
    }
}
*/