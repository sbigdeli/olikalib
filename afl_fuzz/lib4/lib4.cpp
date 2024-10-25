#include "lib4.h"
#include <iostream>

void send_data(const std::string &data) {
    std::cout << "Sending data: " << data << std::endl;
}

std::string receive_data() {
    std::string data = "Received data";
    return data;
}
