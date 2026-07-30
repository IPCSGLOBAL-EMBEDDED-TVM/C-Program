// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, newSize, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &newSize);

    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    if (newSize > n)
    {
        printf("Enter %d additional elements:\n", newSize - n);

        for (i = n; i < newSize; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }

    printf("\nArray Elements:\n");

    for (i = 0; i < newSize; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}