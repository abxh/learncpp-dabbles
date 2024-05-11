#include <iostream>

// relevant page:
// https://www.learncpp.com/cpp-tutorial/constexpr-and-consteval-functions/

constexpr int square(int x) {
    return x * x;
}

constexpr int hash_twoletter(const char* s) {
    return s[0] + s[1];
}

int main(void) {
    char a[square(3)];
    std::cout << "sizeof(a[square(3)]) = " << sizeof(a) << "\n"; // 9

    char s[3] = "ab";
    switch (hash_twoletter(s)) {
    case hash_twoletter("aa"):
        std::cout << "failure!\n";
        break;
    case hash_twoletter("ab"):
        std::cout << "success!\n";
        break;
    default:
        std::cout << "failure!\n";
        break;
    }

    return 0;
}
