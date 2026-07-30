#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Accessing using array notation:\n");
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    printf("\nAccessing using pointer notation:\n");
    for (int i = 0; i < 5; i++)
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));

    printf("\nNote: arr itself acts as a constant pointer to arr[0]\n");
    printf("arr == &arr[0]: %s\n", (arr == &arr[0]) ? "true" : "false");

    return 0;
}
