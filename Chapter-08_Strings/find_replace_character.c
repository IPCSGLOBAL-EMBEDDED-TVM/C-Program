#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to replace: ");
    scanf("%c", &oldChar);
    printf("Enter new character: ");
    scanf(" %c", &newChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar)
            str[i] = newChar;
    }

    printf("Updated string: %s\n", str);
    return 0;
}
