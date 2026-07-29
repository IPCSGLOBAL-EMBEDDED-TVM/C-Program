#include <stdio.h>

int main()
{
    int result;

    result = 10 + 5 * 2;

    printf("Result = %d\n", result);

    result = (10 + 5) * 2;

    printf("With Parentheses = %d\n", result);

    return 0;
}