#include <stdio.h>

int main() {
    int num = 5;
    int *p1 = &num;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("num   = %d\n", num);
    printf("*p1   = %d\n", *p1);
    printf("**p2  = %d\n", **p2);
    printf("***p3 = %d\n", ***p3);

    ***p3 = 100;
    printf("After modification through triple pointer, num = %d\n", num);

    return 0;
}
