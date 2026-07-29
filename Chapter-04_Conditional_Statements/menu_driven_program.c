#include <stdio.h>

int main()
{
    int choice,a,b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d",&choice);

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case 1:
            printf("Result = %d",a+b);
            break;

        case 2:
            printf("Result = %d",a-b);
            break;

        case 3:
            printf("Result = %d",a*b);
            break;

        case 4:
            if(b!=0)
                printf("Result = %.2f",(float)a/b);
            else
                printf("Division by Zero");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}