#include <stdio.h>
#include <string.h>

int main() {
    char str1[500], str2[500];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i < len2; i++)
        str1[len1 + i] = str2[i];
    str1[len1 + len2] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
