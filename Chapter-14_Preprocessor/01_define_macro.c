//============================================================================
// Author      : Adhith D John
// Repository  : C Programming Master Repository
// Chapter     : Chapter 14 - Preprocessor
// Program     : Define Macro
// Description : Demonstrates simple macro definition.
//============================================================================

#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius = 5.0;

    printf("Area = %.2f\n", PI * radius * radius);

    return 0;
}