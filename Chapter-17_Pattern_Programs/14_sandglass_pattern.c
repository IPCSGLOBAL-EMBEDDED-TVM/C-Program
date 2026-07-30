// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--)
    {
        for(j = rows; j > i; j--)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    for(i = 2; i <= rows; i++)
    {
        for(j = rows; j > i; j--)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}