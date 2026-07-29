#include <stdio.h>

int gcd(int a,int b)
{
    while(b)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    printf("LCM = %d",lcm(a,b));

    return 0;
}