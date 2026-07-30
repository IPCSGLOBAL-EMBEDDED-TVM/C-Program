#include <stdio.h>

enum Level { LEVEL_1, LEVEL_2, LEVEL_3, LEVEL_4, LEVEL_5 };

int main() {
    enum Level current = LEVEL_2;

    printf("Current level = %d\n", current);

    /* Enum variables can be incremented like integers in C */
    current++;
    printf("After leveling up, current level = %d\n", current);

    int next = current + 1;
    printf("Next level after that would be = %d\n", next);

    return 0;
}
