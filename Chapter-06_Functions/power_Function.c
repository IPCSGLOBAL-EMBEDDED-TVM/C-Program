#include <stdio.h>

int power(int base, int exponent)
{
    int i, result = 1;

    for (i = 1; i <= exponent; i++)
        result *= base;

    return result;
}

int main()
{
    int b, e;

    printf("Enter Base and Exponent: ");
    scanf("%d%d", &b, &e);

    printf("Result = %d", power(b, e));

    return 0;
}