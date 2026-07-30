#include <stdio.h>
#include <stddef.h>

int main() {
    int *ptr = NULL;

    if (ptr == NULL)
        printf("Pointer is NULL, it does not point to any valid memory location\n");

    int num = 42;
    ptr = &num;

    if (ptr != NULL)
        printf("Pointer now points to a valid address, value = %d\n", *ptr);

    return 0;
}
