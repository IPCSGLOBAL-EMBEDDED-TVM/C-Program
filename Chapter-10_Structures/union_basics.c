#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 3.14;
    printf("data.f = %.2f\n", data.f);

    printf("\nNote: setting data.f overwrote data.i because\n");
    printf("all union members share the same memory location.\n");
    printf("Size of union Data = %zu bytes (size of largest member)\n", sizeof(union Data));

    return 0;
}
