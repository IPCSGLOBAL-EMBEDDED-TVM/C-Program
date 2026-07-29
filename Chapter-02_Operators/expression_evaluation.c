#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    int c = 3;

    int result = a + b * c - (a % b);

    printf("Expression Result = %d\n", result);

    return 0;
}