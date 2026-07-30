#include <stdio.h>

struct Example1 {
    char c;
    int i;
    char c2;
};

struct Example2 {
    int i;
    char c;
    char c2;
};

int main() {
    printf("Size of Example1 (char, int, char) = %zu bytes\n", sizeof(struct Example1));
    printf("Size of Example2 (int, char, char) = %zu bytes\n", sizeof(struct Example2));

    printf("\nNote: Compilers add padding bytes to align members in memory,\n");
    printf("so the order of members can affect the total structure size.\n");

    return 0;
}
