#include <cstdint>
#include <iostream>

int main(void) {
    std::int_fast32_t a{};
    std::int_fast64_t b{};
    
    std::cout << "sizeof(int_fast32_t): " << sizeof(a) << " bytes\n";
    std::cout << "sizeof(int_fast64_t): " << sizeof(b) << " bytes\n";

    std::int_least8_t c{};
    std::uint_least8_t d{};

    std::cout << "sizeof(int_least8_t): " << sizeof(c) << " bytes\n";
    std::cout << "sizeof(uint_least8_t): " << sizeof(d) << " bytes\n";

    return 0;
}
