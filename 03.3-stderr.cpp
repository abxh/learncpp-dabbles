#include <iostream>

int f(void) {
    std::cerr << "f called\n";

    return 5;
}

int main(void) {
    std::cerr << "main called\n";
    std::cout << f << "\n";

    return 0;
}
