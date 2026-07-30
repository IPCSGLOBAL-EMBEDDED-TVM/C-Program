// Author : Adhith D John

#include <stdio.h>

int main()
{
    int rows, i, j;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
            printf(" ");

        ch = 'A';

        for(j = 1; j <= i; j++)
            printf("%c", ch++);

        ch -= 2;

        while(ch >= 'A')
            printf("%c", ch--);

        printf("\n");
    }

    return 0;
}