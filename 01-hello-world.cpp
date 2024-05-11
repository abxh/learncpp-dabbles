#include <iostream>

// relevant articles where below questions are answered:
// https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
// https://www.learncpp.com/cpp-tutorial/naming-collisions-and-an-introduction-to-namespaces/

// Why <iostream.h> might not have instead been chosen?
// https://www.quora.com/Why-dont-C-standard-headers-names-end-with-h-or-hpp

// :: is the scope resolution operator
// https://stackoverflow.com/questions/15649580/using-scope-resolution-operator-in-c

// std is a namespace.
// cin, cout are magic classes.

// '\n' vs std::endl
// https://stackoverflow.com/a/214076

// `<<` is thought of as (alternatively) "insertion" operator.

int main(void) {
    std::cout << "Hello World!" "\n";

    return 0;
}
