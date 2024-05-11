#include <iostream>

// typeid operator:
// https://en.cppreference.com/w/cpp/language/typeid

// print type name:
// https://stackoverflow.com/a/81886

int main(void) {
    bool a = true;
    std::cout << "typeid(unsigned char).name() = " << typeid(unsigned char).name() << "\n";
    std::cout << "typeid(char).name() = " << typeid(char).name() << "\n";
    std::cout << "typeid(bool).name() = " << typeid(bool).name() << "\n";
    std::cout << "typeid(a).name() = " << typeid(a).name() << "\n";
    std::cout << "typeid(a).hashcode() = " << typeid(a).hash_code() << "\n";

    std::cout << "true: " << true << "\n";

    std::cout << std::boolalpha;

    std::cout << "true /w boolalpha: " << true << "\n";

    std::cout << std::noboolalpha;

    std::cout << "true /w noboolalpha: " << true << "\n";

    bool b = false;
    std::cout << "Enter bool value (" << '"' << "true/" << '"' << "false" << '"' << ")\n";
    std::cin >> std::boolalpha;
    std::cin >> b;
    std::cout << b;
}
