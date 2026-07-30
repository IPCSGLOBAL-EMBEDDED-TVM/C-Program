#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], sub[500];
    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    int strLen = strlen(str);
    int subLen = strlen(sub);
    int found = -1;

    for (int i = 0; i <= strLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (j == subLen) {
            found = i;
            break;
        }
    }

    if (found == -1)
        printf("Substring not found\n");
    else
        printf("Substring found at index %d\n", found);

    return 0;
}
