#include <iostream>

// relevant article with a lot more info:
// https://www.learncpp.com/cpp-tutorial/const-class-objects-and-const-member-functions/

class A {
    int x_private {1};
public:
    int x() {
        std::cout << "non const function member called\n";
        return x_private;
    }
    int x() const {
        std::cout << "const function member called\n";
        return x_private;
    }
};

int main() {
    const A a1{};
    A a2{};

    a1.x();
    a2.x();

    // one caveat to note is that const objects cannot call non-const function members.
    // if the non-const function member isn't defined, then bad luck.

    return 0;
}
