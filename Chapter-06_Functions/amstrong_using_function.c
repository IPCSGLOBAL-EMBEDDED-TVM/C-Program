#include <stdio.h>

int armstrong(int n)
{
    int temp=n,sum=0,r;

    while(temp)
    {
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }

    return sum==n;
}

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}