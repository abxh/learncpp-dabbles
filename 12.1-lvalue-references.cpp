#include <iostream>

// lvalue vs rvalue:
// https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/

// relevant article:
// https://www.learncpp.com/cpp-tutorial/lvalue-references/

int main(void) {
    int x = 1;
    int& x_ref = x; // lvalue reference to x
    int* ptr = &x;  // pointer to x

    x_ref = 2;                                              // x_ref (x) <- 2
    std::cout << "x: " << x << " x_ref: " << x_ref << "\n"; // 2 2

    *ptr = 3;                                               // *ptr <- 3
    std::cout << "x: " << x << " x_ref: " << x_ref << "\n"; // 3 3

    // pointers (containing memory addresses) can change what they point to:
    int y{4};
    ptr = &y;
    *ptr = 4;

    // references cannot. they work sort of like aliases.
    x_ref = y;                                              // sets x to y
    std::cout << "x: " << x << " x_ref: " << x_ref << "\n"; // 4 4

    return 0;
}
