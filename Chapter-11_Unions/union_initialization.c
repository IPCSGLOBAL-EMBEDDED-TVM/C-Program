#include <stdio.h>

union Value {
    int i;
    float f;
    char c;
};

int main() {
    /* Without a designator, initializes the FIRST member only */
    union Value v1 = {100};
    printf("v1.i = %d (initialized via first member)\n", v1.i);

    /* Designated initializer lets you pick which member to initialize */
    union Value v2 = {.f = 3.14f};
    printf("v2.f = %.2f (initialized via designated initializer)\n", v2.f);

    union Value v3 = {.c = 'Z'};
    printf("v3.c = %c\n", v3.c);

    return 0;
}
