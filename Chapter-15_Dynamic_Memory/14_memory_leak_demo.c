// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(100 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    printf("Memory Allocated Successfully.\n");

    printf("Freeing allocated memory...\n");

    free(ptr);

    ptr = NULL;

    printf("Memory Released Successfully.\n");

    return 0;
}

/*Note: This demonstrates the correct way to avoid memory leaks by calling free().
Intentionally leaking memory is generally not good practice for example code.*/