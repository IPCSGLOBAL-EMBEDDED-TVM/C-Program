#include <stdio.h>

enum Color { RED, GREEN, BLUE };

int main() {
    enum Color favorite = GREEN;

    printf("Value of RED   = %d\n", RED);
    printf("Value of GREEN = %d\n", GREEN);
    printf("Value of BLUE  = %d\n", BLUE);

    printf("\nMy favorite color has enum value = %d\n", favorite);

    if (favorite == GREEN)
        printf("My favorite color is Green\n");

    return 0;
}
