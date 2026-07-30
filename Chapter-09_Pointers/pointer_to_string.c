#include <stdio.h>

int main() {
    char *str = "Hello, Pointers!";

    printf("String using pointer: %s\n", str);

    printf("Characters accessed via pointer:\n");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", *(str + i));
    printf("\n");

    return 0;
}
