#include <stdio.h>
#include <stdlib.h>

int* createArray(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = (i + 1) * 10;
    return arr;
}

int main() {
    int n = 5;
    int *arr = createArray(n);

    printf("Array returned from function: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
