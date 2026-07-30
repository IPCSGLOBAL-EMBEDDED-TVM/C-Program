#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int *ptr = arr;

    printf("Initial value pointed to: %d\n", *ptr);

    ptr++;
    printf("After ptr++: %d\n", *ptr);

    ptr += 2;
    printf("After ptr += 2: %d\n", *ptr);

    ptr--;
    printf("After ptr--: %d\n", *ptr);

    printf("\nPointer arithmetic accounts for data type size.\n");
    printf("Each increment moves by %zu bytes for an int pointer.\n", sizeof(int));

    return 0;
}
