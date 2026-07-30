#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *ptr = arr;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Sum of dynamically allocated array = %d\n", sum);

    free(arr);
    return 0;
}
