// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter tree height: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j < rows; j++)
            printf(" ");

        printf("*\n");
    }

    return 0;
}