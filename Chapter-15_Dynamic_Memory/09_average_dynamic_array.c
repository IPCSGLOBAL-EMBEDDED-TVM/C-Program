// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, sum = 0;
    float average;

    printf("Enter array size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f\n", average);

    free(arr);

    return 0;
}