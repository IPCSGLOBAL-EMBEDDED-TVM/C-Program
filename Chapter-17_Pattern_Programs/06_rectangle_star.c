// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= cols; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}