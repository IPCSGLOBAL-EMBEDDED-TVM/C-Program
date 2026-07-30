#include <stdio.h>

union Inner {
    int i;
    float f;
};

struct Outer {
    char label[20];
    union Inner value;
};

union Combo {
    struct Outer outerData;
    double rawDouble;
};

int main() {
    union Combo c;

    /* Use it as struct Outer */
    for (int k = 0; k < 20; k++) c.outerData.label[k] = 0;
    c.outerData.label[0] = 'X';
    c.outerData.value.i = 77;

    printf("Label first char: %c\n", c.outerData.label[0]);
    printf("Value as int: %d\n", c.outerData.value.i);

    /* Reuse the same memory as a double */
    c.rawDouble = 3.14159;
    printf("\nAfter reassigning as double: %.5f\n", c.rawDouble);

    return 0;
}
