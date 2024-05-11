
// https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/

// Best practice:
// Prefer list initialization, even for empty variables.
// The article goes into why.

int main(void) {
    // no initialization:
    int a;

    // copy initialization:
    int b = 5;

    // direct initialization:
    int c(6);

    // ---------------- C++11--------------------
    // list initialization:
    int d{7};

    // copy list initializaiton
    int e = {8};

    // empty list initialization:
    int f{};
}

int f(int x, int y) {
    int z{x + y}; // possible to do this

    return z;
}
