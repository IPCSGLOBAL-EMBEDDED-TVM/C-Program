// Author : Adhith D John

#include <stdio.h>

int main()
{
    int size;
    int i, j;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size; j++)
        {
            if(i == 1 || i == size || j == 1 || j == size)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}