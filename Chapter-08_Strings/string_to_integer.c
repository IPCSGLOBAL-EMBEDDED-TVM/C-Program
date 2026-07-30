#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a numeric string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0, sign = 1, number = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    } else if (str[0] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            number = number * 10 + (str[i] - '0');
    }

    number *= sign;
    printf("Converted integer = %d\n", number);
    return 0;
}
