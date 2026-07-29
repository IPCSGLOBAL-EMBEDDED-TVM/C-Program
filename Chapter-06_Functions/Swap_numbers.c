#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("After Swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}