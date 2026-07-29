#include <stdio.h>

int main()
{
    int num = 10;
    float pi = 3.14f;
    double value = 12345.6789;
    char letter = 'C';

    printf("Integer : %d\n", num);
    printf("Float   : %.2f\n", pi);
    printf("Double  : %.4lf\n", value);
    printf("Char    : %c\n", letter);

    return 0;
}