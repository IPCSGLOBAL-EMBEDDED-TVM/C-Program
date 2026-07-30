// Author : Adhith D John

#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter odd size: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size; j++)
        {
            if(i == (size + 1) / 2 || j == (size + 1) / 2)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}