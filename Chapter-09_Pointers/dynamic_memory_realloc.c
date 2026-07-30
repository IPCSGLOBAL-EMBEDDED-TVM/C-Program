#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newSize;
    printf("Enter new size for the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (newSize > n) {
        printf("Enter %d additional elements: ", newSize - n);
        for (int i = n; i < newSize; i++)
            scanf("%d", &arr[i]);
    }

    printf("Array after realloc: ");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
