#include "Scripts\images.hpp"
#include "Scripts\videos.hpp"
#include "Scripts\sounds.hpp"
#include <iostream>
#include <string>
#include <fstream>

void printf(std::string str, bool endl) {
    if (endl) {
        std::cout << str << std::endl;
    } else if (!endl) {
        std::cout << str;
    }
}

int in_int() {
    int rslt = (int)nullptr;
    std::cin >> rslt;
    return rslt;
}

std::string in_str() {
    std::string rslt = nullptr;
    std::cin >> rslt;
    return rslt;
}

int main() {
    printf("What is the name of your project: ", false);
    std::string name = in_str();
    std::string app_name = name + ".dol";
}
