#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside Function\n");
    printf("a = %d b = %d\n", a, b);
}

int main()
{
    int a = 10, b = 20;

    swap(a, b);

    printf("Outside Function\n");
    printf("a = %d b = %d\n", a, b);

    return 0;
}