#include "lib5.h"

std::string encrypt(const std::string &data) {
    std::string encrypted = data; // Enkel simulering av kryptering
    for (char &c : encrypted) {
        c += 1; // Enkel rotation av tecken
    }
    return encrypted;
}

std::string decrypt(const std::string &data) {
    std::string decrypted = data; // Enkel simulering av dekryptering
    for (char &c : decrypted) {
        c -= 1; // Enkel rotation av tecken
    }
    return decrypted;
}
