// Author : Adhith D John

#include <stdio.h>

int main()
{
    int decimal;
    int binary[32];
    int i = 0;

    printf("Enter Decimal Number: ");
    scanf("%d",&decimal);

    if(decimal == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while(decimal > 0)
    {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary = ");

    while(i--)
    {
        printf("%d",binary[i]);
    }

    printf("\n");

    return 0;
}