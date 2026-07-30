#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n')
        length++;

    printf("Length of string = %d\n", length);
    return 0;
}
