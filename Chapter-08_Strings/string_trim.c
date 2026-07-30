#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string (with leading/trailing spaces): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int start = 0, end = strlen(str) - 1;

    while (str[start] == ' ')
        start++;
    while (end > start && str[end] == ' ')
        end--;

    char result[1000];
    int j = 0;
    for (int i = start; i <= end; i++)
        result[j++] = str[i];
    result[j] = '\0';

    printf("Trimmed string: \"%s\"\n", result);
    return 0;
}
