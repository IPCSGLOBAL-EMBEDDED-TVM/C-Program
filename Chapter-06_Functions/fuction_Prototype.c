#include <stdio.h>

int multiply(int, int);

int main()
{
    int a = 5, b = 10;

    printf("Product = %d", multiply(a, b));

    return 0;
}

int multiply(int x, int y)
{
    return x * y;
}