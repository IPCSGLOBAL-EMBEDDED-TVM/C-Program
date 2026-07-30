#include <stdio.h>

int main() {
    int a = 10, b = 20;

    /* Pointer to const int: value cannot change through pointer, pointer can be reassigned */
    const int *ptr1 = &a;
    printf("Pointer to const int, value = %d\n", *ptr1);
    ptr1 = &b;
    printf("Reassigned pointer to const int, value = %d\n", *ptr1);

    /* Const pointer to int: pointer cannot be reassigned, but value can change */
    int c = 30;
    int *const ptr2 = &c;
    *ptr2 = 40;
    printf("Const pointer to int, value after modification = %d\n", *ptr2);

    /* Const pointer to const int: neither pointer nor value can change */
    int d = 50;
    const int *const ptr3 = &d;
    printf("Const pointer to const int, value = %d\n", *ptr3);

    return 0;
}
