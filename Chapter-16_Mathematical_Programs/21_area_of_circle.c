// Author : Adhith D John

#include <stdio.h>

#define PI 3.141592653589793

int main()
{
    float radius, area;

    printf("Enter Radius : ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}