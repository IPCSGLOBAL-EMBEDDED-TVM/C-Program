#include <stdio.h>
#include <string.h>

enum Color { RED, GREEN, BLUE, UNKNOWN_COLOR };

enum Color stringToColor(const char *str) {
    if (strcmp(str, "red") == 0) return RED;
    if (strcmp(str, "green") == 0) return GREEN;
    if (strcmp(str, "blue") == 0) return BLUE;
    return UNKNOWN_COLOR;
}

int main() {
    char input[20];
    printf("Enter a color name (red/green/blue): ");
    scanf("%19s", input);

    enum Color c = stringToColor(input);

    switch (c) {
        case RED: printf("You entered Red\n"); break;
        case GREEN: printf("You entered Green\n"); break;
        case BLUE: printf("You entered Blue\n"); break;
        default: printf("Unrecognized color\n");
    }

    return 0;
}
