#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char longest[100] = "";
    char current[100];
    int idx = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            current[idx] = '\0';
            if (strlen(current) > strlen(longest))
                strcpy(longest, current);
            idx = 0;
        } else {
            current[idx++] = str[i];
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
