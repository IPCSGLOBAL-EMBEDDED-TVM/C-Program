#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int upper = 0, lower = 0, digits = 0, special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != ' ')
            special++;
    }

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
