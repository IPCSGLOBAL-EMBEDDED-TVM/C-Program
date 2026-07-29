#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)
        printf("%d is Smallest",a);
    else if(b<c)
        printf("%d is Smallest",b);
    else
        printf("%d is Smallest",c);

    return 0;
}