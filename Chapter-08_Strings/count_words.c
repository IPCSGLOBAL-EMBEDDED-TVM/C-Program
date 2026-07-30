#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int wordCount = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (inWord == 0) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words = %d\n", wordCount);
    return 0;
}
