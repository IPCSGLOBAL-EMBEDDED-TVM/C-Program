// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;
    int value;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        value = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%4d", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}