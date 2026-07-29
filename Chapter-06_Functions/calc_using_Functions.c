#include <stdio.h>

float add(float a,float b){ return a+b; }
float sub(float a,float b){ return a-b; }
float mul(float a,float b){ return a*b; }
float div(float a,float b){ return a/b; }

int main()
{
    float a,b;
    char op;

    printf("Enter Expression (Example: 5 + 3): ");
    scanf("%f %c %f",&a,&op,&b);

    switch(op)
    {
        case '+': printf("%.2f",add(a,b)); break;
        case '-': printf("%.2f",sub(a,b)); break;
        case '*': printf("%.2f",mul(a,b)); break;
        case '/':
            if(b!=0)
                printf("%.2f",div(a,b));
            else
                printf("Division by Zero");
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}