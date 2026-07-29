#include <stdio.h>

int main()
{
    int a = 10;

// short hand operators normally u can use it for reduce the program length

    a += 5;
    printf("+= %d\n", a);

    a -= 2;
    printf("-= %d\n", a);

    a *= 3;
    printf("*= %d\n", a);

    a /= 2;
    printf("/= %d\n", a);

    a %= 4;
    printf("%%= %d\n", a);

    return 0;
}