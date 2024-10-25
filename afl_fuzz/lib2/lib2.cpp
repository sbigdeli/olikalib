#include "lib2.h"
#include <algorithm>

std::string reverse_string(const std::string &s) {
    std::string reversed = s;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string to_uppercase(const std::string &s) {
    std::string upper = s;
    std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    return upper;
}
