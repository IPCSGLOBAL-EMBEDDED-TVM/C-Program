#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char target;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to count: ");
    scanf("%c", &target);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target)
            count++;
    }

    printf("'%c' occurs %d times\n", target, count);
    return 0;
}
