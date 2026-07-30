#include <stdio.h>

int isPresent(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Union: ");
    for (int i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    for (int i = 0; i < n2; i++) {
        if (!isPresent(arr1, n1, arr2[i]))
            printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Intersection: ");
    for (int i = 0; i < n1; i++) {
        if (isPresent(arr2, n2, arr1[i]))
            printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}
