#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char words[100][100];
    int wordCount = 0;
    int idx = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            words[wordCount][idx] = '\0';
            wordCount++;
            idx = 0;
        } else {
            words[wordCount][idx++] = str[i];
        }
    }

    printf("Reversed words order: ");
    for (int i = wordCount - 1; i >= 0; i--)
        printf("%s ", words[i]);
    printf("\n");

    return 0;
}
