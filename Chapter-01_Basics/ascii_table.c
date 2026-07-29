#include <stdio.h>

int main()
{
    int i;

    printf("ASCII Table\n");
    printf("-----------------\n");

    for(i = 32; i <= 126; i++)
    {
        printf("%3d = %c\n", i, i);
    }

    return 0;
}