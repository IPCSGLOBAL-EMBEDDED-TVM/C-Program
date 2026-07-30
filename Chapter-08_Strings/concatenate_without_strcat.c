#include <stdio.h>

int main() {
    char str1[500], str2[500];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    int i = 0;
    while (str1[i] != '\0' && str1[i] != '\n')
        i++;
    str1[i] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int j = 0;
    while (str2[j] != '\0' && str2[j] != '\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
