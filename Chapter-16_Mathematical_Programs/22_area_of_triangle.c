// Author : Adhith D John

#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter Base and Height : ");
    scanf("%f%f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of Triangle = %.2f\n", area);

    return 0;
}