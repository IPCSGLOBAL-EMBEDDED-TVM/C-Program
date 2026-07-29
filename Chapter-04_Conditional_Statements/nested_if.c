#include <stdio.h>

int main()
{
    int age;
    char citizen;

    printf("Enter Age: ");
    scanf("%d",&age);

    printf("Are you an Indian Citizen (Y/N): ");
    scanf(" %c",&citizen);

    if(age>=18)
    {
        if(citizen=='Y' || citizen=='y')
            printf("Eligible to Vote");
        else
            printf("Not an Indian Citizen");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}