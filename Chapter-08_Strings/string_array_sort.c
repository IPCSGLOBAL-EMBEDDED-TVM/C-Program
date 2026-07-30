#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char words[100][100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}
