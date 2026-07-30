// Author : Adhith D John

#include <stdio.h>

int main()
{
    int a,b,temp;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    return 0;
}