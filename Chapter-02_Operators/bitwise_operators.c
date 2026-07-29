#include <stdio.h>

int main()
{
    int a = 12;
    int b = 10;

    printf("AND = %d\n", a & b);
    printf("OR  = %d\n", a | b);
    printf("XOR = %d\n", a ^ b);
    printf("NOT a = %d\n", ~a);

    return 0;
}