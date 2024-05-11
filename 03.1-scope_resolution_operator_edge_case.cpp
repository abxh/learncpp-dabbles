// Relevant:
// https://www.learncpp.com/cpp-tutorial/naming-collisions-and-an-introduction-to-namespaces/

// '::' with no left operand assumes the global namespace.

#include <iostream>

void hello() {
    std::cout << "Hello!\n";
}

int main(void) {
    ::hello();
    return 0;
}
