#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Using pointer arithmetic to traverse array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p   Value: %d\n", (void *)(ptr + i), *(ptr + i));
    }

    printf("\nAfter ptr++, ptr now points to value: %d\n", *(++ptr));
    printf("After ptr += 2, ptr now points to value: %d\n", *(ptr += 2));

    return 0;
}
