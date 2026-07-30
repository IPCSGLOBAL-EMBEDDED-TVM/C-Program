// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if((i + j) % 2 == 0)
                printf("* ");
            else
                printf("# ");
        }

        printf("\n");
    }

    return 0;
}