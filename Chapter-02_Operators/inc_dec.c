#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial = %d\n", a);
    printf("Post Increment = %d\n", a++);
    printf("After Post Increment = %d\n", a);

    printf("Pre Increment = %d\n", ++a);

    printf("Post Decrement = %d\n", a--);
    printf("After Post Decrement = %d\n", a);

    printf("Pre Decrement = %d\n", --a);

    return 0;
}