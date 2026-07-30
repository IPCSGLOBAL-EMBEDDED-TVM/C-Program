// Author : Adhith D John

#include <stdio.h>

int main()
{
    int n, i;
    float capacitor, total = 0;

    printf("Enter Number of Capacitors : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Capacitor %d (uF): ", i);
        scanf("%f", &capacitor);

        total += capacitor;
    }

    printf("Equivalent Parallel Capacitance = %.2f uF\n", total);

    return 0;
}