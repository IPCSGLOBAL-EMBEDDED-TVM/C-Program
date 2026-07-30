#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], pattern[500];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter pattern to search: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';

    int n = strlen(text);
    int m = strlen(pattern);
    int matches = 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            printf("Pattern found at index %d\n", i);
            matches++;
        }
    }

    if (matches == 0)
        printf("Pattern not found in text\n");

    return 0;
}
