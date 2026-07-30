// Author : Adhith D John

#include <stdio.h>

int main()
{
    int base, power, i;
    long long result = 1;

    printf("Enter Base and Power: ");
    scanf("%d%d",&base,&power);

    for(i = 1; i <= power; i++)
    {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, power, result);

    return 0;
}