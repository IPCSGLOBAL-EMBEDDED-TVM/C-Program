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

    int i = 0, result = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (result == 0 && str1[i] != str2[i])
        result = str1[i] - str2[i];

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("String 1 is less than String 2\n");
    else
        printf("String 1 is greater than String 2\n");

    return 0;
}
