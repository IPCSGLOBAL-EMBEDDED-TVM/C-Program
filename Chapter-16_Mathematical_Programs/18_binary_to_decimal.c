// Author : Adhith D John

#include <stdio.h>

int main()
{
    long long binary;
    int decimal = 0;
    int base = 1;
    int digit;

    printf("Enter Binary Number: ");
    scanf("%lld",&binary);

    while(binary > 0)
    {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal = %d\n",decimal);

    return 0;
}