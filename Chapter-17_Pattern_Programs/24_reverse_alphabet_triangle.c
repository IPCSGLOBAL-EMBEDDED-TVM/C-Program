// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}