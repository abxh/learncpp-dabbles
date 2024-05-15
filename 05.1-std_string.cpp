
// Revelant article:
// https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/

// std::string is a ``class``. It is different from C-strings.

#include <iostream>

// note:
// Since std::string (seems to) use a dynamic string under the hood,
// you should use std::string_view when passing (sub-)strings to
// methods.
//
// Makes copies of std::string is expensive.

void f(void) {
    using namespace std::string_literals; // for strings ending with s

    std::cout << "Hello "s + "World!"s << "\n"; // string literals ending with s, is string literals.
    std::cout << "type id of string literal \"this\"s: " << typeid("this"s).name() << "\n";
    std::cout << "type id of string literal \"this\": " << typeid("this").name() << "\n";
}

int main(void) {
    f();

    std::cout << "Name?: ";
    std::string s{};
    std::getline(std::cin >> std::ws, s); // input manipulator: ignore ws (whitespace characters)
    std::cout << s << "\n";
    std::cout << "name length: " << s.length() << "\n";

    std::string a{"aaaa"};

    // these do not allocate new memory
    a = "bbbb";
    a = "bbb";

    // this reallocates the memory to a larger size.
    a = "aaaaa";
    a = "aaaaaa";

    std::cout << a << "\n";

    return 0;
}
