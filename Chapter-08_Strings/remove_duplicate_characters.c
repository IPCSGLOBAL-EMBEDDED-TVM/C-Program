#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int seen[256] = {0};
    char result[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing duplicate characters: %s\n", result);
    return 0;
}
