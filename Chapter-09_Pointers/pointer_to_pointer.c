#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num = %d\n", num);
    printf("Value via ptr (*ptr) = %d\n", *ptr);
    printf("Value via ptr2 (**ptr2) = %d\n", **ptr2);

    **ptr2 = 99;
    printf("After modifying through double pointer, num = %d\n", num);

    return 0;
}
