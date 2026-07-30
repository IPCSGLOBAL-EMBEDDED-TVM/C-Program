#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    char str[20];
    int i = 0, isNegative = 0;

    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    if (num == 0)
        str[i++] = '0';

    while (num != 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';

    for (int start = 0, end = i - 1; start < end; start++, end--) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }

    printf("Converted string: %s\n", str);
    return 0;
}
