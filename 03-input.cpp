#include <iostream>

// `<<` is thought of as (alternatively) "insertion" operator.
// `>>` is thought of as (alternatively) "extraction" operator.

// The distinction is important for the implemented classes.

// Get used to thinking in objects for c++. You can make the operators do
// whatever you want in your custom classes...

// static_cast v dynamic_cast v regular cast (c like):
// https://stackoverflow.com/questions/28002/regular-cast-vs-static-cast-vs-dynamic-cast/1255015#1255015

int main(void) {
    int x{};
    int y{};

    std::cout << "Triangle Area Calculator.\n"
                 "Base: ";

    // std::cin << x; // wrong
    std::cin >> x;

    std::cout << "Height: ";

    std::cin >> y;

    std::cout << "Area: " << static_cast<float>(x * y) / 2.f << "\n";

    return 0;
}
