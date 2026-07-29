#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    do
    {
        printf("Guess the Number: ");
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High\n");
        else if(guess < secret)
            printf("Too Low\n");

    } while(guess != secret);

    printf("Congratulations! Correct Guess.");

    return 0;
}