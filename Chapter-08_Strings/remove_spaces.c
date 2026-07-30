#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int j = 0;
    char result[1000];
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';

    printf("String without spaces: %s\n", result);
    return 0;
}
