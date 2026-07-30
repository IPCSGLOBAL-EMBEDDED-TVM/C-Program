#include <stdio.h>

int myStrlen(char *str) {
    int len = 0;
    while (*(str + len) != '\0')
        len++;
    return len;
}

void myStrcpy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void myReverse(char *str) {
    int len = myStrlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char source[] = "Pointers are powerful";
    char destination[100];

    printf("Length using pointer-based function = %d\n", myStrlen(source));

    myStrcpy(destination, source);
    printf("Copied string = %s\n", destination);

    myReverse(destination);
    printf("Reversed string = %s\n", destination);

    return 0;
}
