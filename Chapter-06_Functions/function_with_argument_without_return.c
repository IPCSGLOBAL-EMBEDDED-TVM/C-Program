#include <stdio.h>

void square(int n)
{
    printf("Square = %d", n * n);
}

int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    square(number);

    return 0;
}