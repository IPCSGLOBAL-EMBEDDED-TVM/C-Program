#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main() {
    enum Color c = GREEN;

    switch (c) {
        case RED:
            printf("Color is Red\n");
            break;
        case GREEN:
            printf("Color is Green\n");
            break;
        case BLUE:
            printf("Color is Blue\n");
            break;
        case YELLOW:
            printf("Color is Yellow\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}
