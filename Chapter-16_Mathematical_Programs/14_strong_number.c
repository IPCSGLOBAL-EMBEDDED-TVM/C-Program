// Author : Adhith D John

#include <stdio.h>

int main()
{
    int number, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d",&number);

    original = number;

    while(number != 0)
    {
        int fact = 1;

        digit = number % 10;

        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;

        number /= 10;
    }

    if(sum == original)
        printf("%d is a Strong Number\n", original);
    else
        printf("%d is not a Strong Number\n", original);

    return 0;
}