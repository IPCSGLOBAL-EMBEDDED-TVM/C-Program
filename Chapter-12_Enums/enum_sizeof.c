#include <stdio.h>

enum Small { A, B, C };
enum Large { X = 1000000000 };

int main() {
    printf("Size of enum Small = %zu bytes\n", sizeof(enum Small));
    printf("Size of enum Large = %zu bytes\n", sizeof(enum Large));

    printf("\nNote: an enum's underlying type is usually 'int' sized,\n");
    printf("regardless of how small the actual values are.\n");

    return 0;
}
