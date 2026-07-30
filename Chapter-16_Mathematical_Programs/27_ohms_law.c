// Author : Adhith D John

#include <stdio.h>

int main()
{
    float V, I, R;

    printf("Enter Voltage (V): ");
    scanf("%f", &V);

    printf("Enter Resistance (Ohms): ");
    scanf("%f", &R);

    if (R == 0)
    {
        printf("Resistance cannot be zero.\n");
        return 1;
    }

    I = V / R;

    printf("Current = %.2f A\n", I);

    return 0;
}