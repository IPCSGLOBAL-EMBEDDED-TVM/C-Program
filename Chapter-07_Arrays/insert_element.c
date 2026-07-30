#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, value;
    printf("Enter position to insert (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
