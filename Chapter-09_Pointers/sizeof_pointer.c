#include <stdio.h>

int main() {
    int a = 10;
    char c = 'x';
    double d = 3.14;

    int *ip = &a;
    char *cp = &c;
    double *dp = &d;

    printf("Size of int pointer = %zu bytes\n", sizeof(ip));
    printf("Size of char pointer = %zu bytes\n", sizeof(cp));
    printf("Size of double pointer = %zu bytes\n", sizeof(dp));
    printf("(All pointer sizes are equal since they all store addresses)\n");

    return 0;
}
