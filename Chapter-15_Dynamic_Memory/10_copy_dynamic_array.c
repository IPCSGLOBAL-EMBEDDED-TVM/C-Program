// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *source;
    int *destination;
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    source = (int *)malloc(n * sizeof(int));
    destination = (int *)malloc(n * sizeof(int));

    if (source == NULL || destination == NULL)
    {
        printf("Memory Allocation Failed.\n");

        free(source);
        free(destination);

        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &source[i]);
    }

    for (i = 0; i < n; i++)
    {
        destination[i] = source[i];
    }

    printf("\nCopied Array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", destination[i]);
    }

    printf("\n");

    free(source);
    free(destination);

    return 0;
}