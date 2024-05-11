// https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/

int main(void) {

    int x{42};
#if 0
    x++;
#endif

    return x;
}
