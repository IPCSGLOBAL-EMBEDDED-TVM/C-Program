// Author : Adhith D John

#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}