#include "lib3.h"
#include <fstream>

bool write_to_file(const std::string &filename, const std::string &content) {
    std::ofstream outfile(filename);
    if (outfile) {
        outfile << content;
        return true;
    }
    return false;
}

std::string read_from_file(const std::string &filename) {
    std::ifstream infile(filename);
    std::string content((std::istreambuf_iterator<char>(infile)),
                         std::istreambuf_iterator<char>());
    return content;
}
