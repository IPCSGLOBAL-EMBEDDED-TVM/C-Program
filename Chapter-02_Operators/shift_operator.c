#include <stdio.h>

int main()
{
    int x = 8;

    printf("Original = %d\n", x);
    printf("Left Shift  = %d\n", x << 2);
    printf("Right Shift = %d\n", x >> 1);

    return 0;
}