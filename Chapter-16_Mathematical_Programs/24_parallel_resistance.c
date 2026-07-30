// Author : Adhith D John

#include <stdio.h>

int main()
{
    float r1, r2, rp;

    printf("Enter R1 and R2 : ");
    scanf("%f%f", &r1, &r2);

    rp = (r1 * r2) / (r1 + r2);

    printf("Equivalent Parallel Resistance = %.2f Ohms\n", rp);

    return 0;
}