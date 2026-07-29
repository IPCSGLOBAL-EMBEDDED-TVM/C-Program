#include <stdio.h>

int getNumber()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int value = getNumber();

    printf("Number = %d", value);

    return 0;
}