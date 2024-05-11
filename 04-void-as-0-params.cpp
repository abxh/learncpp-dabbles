
// relevant sources:
// https://www.learncpp.com/cpp-tutorial/void/
// https://stackoverflow.com/questions/51032/is-there-a-difference-between-foovoid-and-foo-in-c-or-c
// https://en.cppreference.com/w/c/variadic

extern "C" {

#include <stdarg.h>
#include <stdlib.h>

int f1() { // unspecified number of parameters (below C23)
    return 1;
}

int f2(void) { // no parameters
    return 2;
}

int sum(int count, ...) { // 1 + unspecified number of parameters
    int result = 0;

    va_list args;
    va_start(args, count);

    for (size_t i = 0; i < count; i++) {
        result += va_arg(args, int);
    }

    va_end(args);

    return result;
}
}

#include <iostream>

int f3() { // no parameters
    return 3;
}

int f4(void) { // no parameters
    return 4;
}

int main(void) {
    std::cout << "sum of 1+3+5+7: " << sum(4, 1, 3, 5, 7) << "\n";
    return 0;
}
