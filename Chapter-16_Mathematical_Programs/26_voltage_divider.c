// Author : Adhith D John

#include <stdio.h>

int main()
{
    float total, known, unknown;

    printf("Enter Total Series Resistance : ");
    scanf("%f", &total);

    printf("Enter Known Resistance : ");
    scanf("%f", &known);

    unknown = total - known;

    printf("Unknown Resistance = %.2f Ohms\n", unknown);

    return 0;
}