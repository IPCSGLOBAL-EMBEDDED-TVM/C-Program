#include <stdio.h>

/* Before C99's <stdbool.h>, programmers simulated booleans using enums */
enum Boolean { FALSE, TRUE };

enum Boolean isEven(int num) {
    return (num % 2 == 0) ? TRUE : FALSE;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    enum Boolean result = isEven(num);

    if (result == TRUE)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    return 0;
}
