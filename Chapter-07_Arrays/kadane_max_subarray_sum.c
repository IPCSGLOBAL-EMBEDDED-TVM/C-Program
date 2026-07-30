#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0], maxEndingHere = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("Maximum subarray sum = %d\n", maxSoFar);
    return 0;
}
