//============================================================================
// Author      : Adhith D John
// Program     : Token Pasting Operator
//============================================================================

#include <stdio.h>

#define CONCAT(a,b) a##b

int main()
{
    int number = 100;

    printf("%d\n", CONCAT(num,ber));

    return 0;
}