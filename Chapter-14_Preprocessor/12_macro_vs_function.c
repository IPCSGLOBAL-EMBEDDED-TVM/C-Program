//============================================================================
// Author      : Adhith D John
// Program     : Multiline Macro
//============================================================================

#include <stdio.h>

#define DISPLAY() \
printf("Welcome\n"); \
printf("C Programming\n");

int main()
{
    DISPLAY();

    return 0;
}