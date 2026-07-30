// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, smallest;

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
    }

    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Smallest Element = %d\n", smallest);

    free(arr);

    return 0;
}