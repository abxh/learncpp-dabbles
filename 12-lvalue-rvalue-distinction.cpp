#include <iostream>

// Give this a read:
// https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/

int main(void) {
    int i {0};

    // lvalues are implicitly converted to rvalues, if a rvalue is expected
    int j {i};

    // function return values and literals are rvalues, and cannot be modified.
    // because they cannot be identified (and tinkered with). They are temporary (intermediate) values.
    int k {0+0};

    // so you can take the address of lvalues
    // &5 // not allowed
    &i; // allowed

    // read the article for more info
}
