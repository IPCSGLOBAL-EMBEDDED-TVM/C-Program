// Author : Adhith D John

#include <stdio.h>

int main()
{
    int n, i;
    float capacitor;
    float reciprocal = 0;

    printf("Enter Number of Capacitors : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Capacitor %d (uF): ", i);
        scanf("%f", &capacitor);

        if(capacitor == 0)
        {
            printf("Capacitance cannot be zero.\n");
            return 1;
        }

        reciprocal += 1.0 / capacitor;
    }

    printf("Equivalent Series Capacitance = %.2f uF\n", 1.0 / reciprocal);

    return 0;
}