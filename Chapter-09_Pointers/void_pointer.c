#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';

    void *ptr;

    ptr = &i;
    printf("Value of int via void pointer = %d\n", *(int *)ptr);

    ptr = &f;
    printf("Value of float via void pointer = %.2f\n", *(float *)ptr);

    ptr = &c;
    printf("Value of char via void pointer = %c\n", *(char *)ptr);

    return 0;
}
