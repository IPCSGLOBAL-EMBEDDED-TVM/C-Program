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

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations of each other\n");
        return 0;
    }

    char combined[1000];
    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL)
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    return 0;
}
