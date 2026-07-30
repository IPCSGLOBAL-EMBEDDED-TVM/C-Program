//============================================================================
// Author      : Adhith D John
// Program     : Macro with Parameter
//============================================================================

#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main()
{
    int num = 8;

    printf("Square = %d\n", SQUARE(num));

    return 0;
}