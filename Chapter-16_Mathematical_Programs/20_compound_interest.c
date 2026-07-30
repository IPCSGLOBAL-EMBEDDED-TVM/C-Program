// Author : Adhith D John

#include <stdio.h>
#include <math.h>

int main()
{
    double p,r,t,amount,ci;

    printf("Enter Principal Amount : ");
    scanf("%lf",&p);

    printf("Enter Rate : ");
    scanf("%lf",&r);

    printf("Enter Time (Years) : ");
    scanf("%lf",&t);

    amount = p * pow((1 + r/100), t);
    ci = amount - p;

    printf("Compound Interest = %.2lf\n",ci);
    printf("Total Amount = %.2lf\n",amount);

    return 0;
}