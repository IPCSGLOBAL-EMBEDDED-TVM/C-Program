#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char result[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            result[j++] = str[i];
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);
    return 0;
}
