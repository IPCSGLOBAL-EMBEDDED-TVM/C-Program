#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos;
    printf("Enter position to delete (0-indexed): ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
