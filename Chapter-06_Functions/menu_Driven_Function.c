#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }

float divide(int a,int b)
{
    return (float)a/b;
}

int main()
{
    int choice,a,b;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter Choice: ");
    scanf("%d",&choice);

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case 1: printf("Result = %d",add(a,b)); break;
        case 2: printf("Result = %d",sub(a,b)); break;
        case 3: printf("Result = %d",mul(a,b)); break;
        case 4:
            if(b!=0)
                printf("Result = %.2f",divide(a,b));
            else
                printf("Division by Zero");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}