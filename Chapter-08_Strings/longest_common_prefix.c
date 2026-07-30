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

    char prefix[100];
    strcpy(prefix, words[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] != '\0' && words[i][j] != '\0' && prefix[j] == words[i][j])
            j++;
        prefix[j] = '\0';
    }

    if (strlen(prefix) == 0)
        printf("No common prefix found\n");
    else
        printf("Longest common prefix: %s\n", prefix);

    return 0;
}
