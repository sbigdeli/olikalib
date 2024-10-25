#include <iostream>
#include "lib1/lib1.h"
#include "lib2/lib2.h"
#include "lib3/lib3.h"
#include "lib4/lib4.h"
#include "lib5/lib5.h"

int main() {
    std::cout << "FakeProduct Running!" << std::endl;

    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;

    std::string reversed = reverse_string("Hello");
    std::cout << "Reversed: " << reversed << std::endl;

    write_to_file("output.txt", "Hello, File!");
    std::cout << "File content: " << read_from_file("output.txt") << std::endl;

    send_data("Hello Network!");
    std::cout << "Received: " << receive_data() << std::endl;

    std::string secret = encrypt("Secret Message");
    std::cout << "Encrypted: " << secret << std::endl;
    std::cout << "Decrypted: " << decrypt(secret) << std::endl;

    return 0;
}
