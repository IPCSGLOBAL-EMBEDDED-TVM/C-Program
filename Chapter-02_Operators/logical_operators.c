#include <stdio.h>

int main()
{
    int age = 22;
    int citizen = 1;

    printf("AND  : %d\n", age >= 18 && citizen);
    printf("OR   : %d\n", age < 18 || citizen);
    printf("NOT  : %d\n", !citizen);

    return 0;
}