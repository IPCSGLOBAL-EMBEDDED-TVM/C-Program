// Author : Adhith D John

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter value: ");
    scanf("%d", &n);

    int size = 2 * n - 1;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            int min = i;

            if(j < min)
                min = j;
            if(size - i - 1 < min)
                min = size - i - 1;
            if(size - j - 1 < min)
                min = size - j - 1;

            printf("%d ", n - min);
        }

        printf("\n");
    }

    return 0;
}