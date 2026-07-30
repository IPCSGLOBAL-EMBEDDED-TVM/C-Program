#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[500], str2[500];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int freq1[256] = {0}, freq2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        freq1[(unsigned char)tolower(str1[i])]++;

    for (int i = 0; str2[i] != '\0'; i++)
        freq2[(unsigned char)tolower(str2[i])]++;

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams\n");
    else
        printf("The strings are not anagrams\n");

    return 0;
}
