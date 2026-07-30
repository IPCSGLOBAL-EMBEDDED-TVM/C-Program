#include <stdio.h>

typedef union {
    int i;
    float f;
    char str[20];
} Variant;

int main() {
    Variant v;

    v.i = 42;
    printf("v.i = %d\n", v.i);

    v.f = 9.81f;
    printf("v.f = %.2f\n", v.f);

    /* typedef removes the need to write 'union' before the type name */
    Variant v2;
    v2.i = 7;
    printf("v2.i = %d\n", v2.i);

    return 0;
}
