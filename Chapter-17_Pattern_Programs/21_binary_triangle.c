// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;
    int number = 1;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", number++);
        }

        printf("\n");
    }

    return 0;
}