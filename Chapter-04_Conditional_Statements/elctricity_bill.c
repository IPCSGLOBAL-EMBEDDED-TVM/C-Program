#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter Units Consumed: ");
    scanf("%d",&units);

    if(units<=100)
        bill=units*1.5;
    else if(units<=200)
        bill=150+(units-100)*2;
    else
        bill=350+(units-200)*3;

    printf("Electricity Bill = %.2f",bill);

    return 0;
}