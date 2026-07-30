#include <stdio.h>

union Sample {
    char c;
    int i;
    double d;
};

int main() {
    printf("Size of char   = %zu bytes\n", sizeof(char));
    printf("Size of int    = %zu bytes\n", sizeof(int));
    printf("Size of double = %zu bytes\n", sizeof(double));

    printf("\nSize of union Sample = %zu bytes\n", sizeof(union Sample));
    printf("(A union's size equals the size of its largest member,\n");
    printf(" possibly rounded up for alignment.)\n");

    return 0;
}
