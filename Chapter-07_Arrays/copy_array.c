#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], copy[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        copy[i] = arr[i];

    printf("Copied array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", copy[i]);
    printf("\n");

    return 0;
}
