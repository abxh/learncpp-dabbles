#include <cstdint>
#include <iostream>

// https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/

// note:
// printing it out, doesn't seem to give me the result i expect. hmm.

int main(void) {
    // int8_t and uint8_t is typedef to char.. because of a
    // vague specification

    std::int8_t inp{}; // also applies to uint8_t
    char inp1{};

    std::cout << "Enter a 8-bit integer:\n";
    std::cin >> inp;
    std::cout << "input printed normally: " << inp << "\n";
    std::cout << "input printed as int8_t explicitly: " << static_cast<int8_t>(inp) << "\n";
    std::cout << "input printed as char   explicitly: " << static_cast<char>(inp) << "\n";

    std::cout << "Enter a ASCII character\n";
    std::cin >> inp1;
    std::cout << "input printed normally: " << inp1 << "\n";
    std::cout << "input printed as int8_t explicitly: " << static_cast<int8_t>(inp1) << "\n";
    std::cout << "input printed as char   explicitly: " << static_cast<char>(inp1) << "\n";
}
