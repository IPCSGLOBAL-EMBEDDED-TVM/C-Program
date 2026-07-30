// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 100;

    printf("Stored Value = %d\n", *ptr);

    free(ptr);

    ptr = NULL;

    if (ptr == NULL)
    {
        printf("Memory released successfully.\n");
    }

    return 0;
}