// Author : Adhith D John

#include <stdio.h>

int main()
{
    int n, i;
    float resistance, total = 0;

    printf("Enter Number of Resistors : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Resistance %d : ", i);
        scanf("%f", &resistance);

        total += resistance;
    }

    printf("Total Series Resistance = %.2f Ohms\n", total);

    return 0;
}