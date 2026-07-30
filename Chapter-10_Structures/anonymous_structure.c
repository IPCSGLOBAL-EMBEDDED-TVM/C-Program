#include <stdio.h>

struct Rectangle {
    struct {
        int x;
        int y;
    } topLeft;

    struct {
        int width;
        int height;
    };
};

int main() {
    struct Rectangle rect;

    rect.topLeft.x = 0;
    rect.topLeft.y = 0;
    rect.width = 100;
    rect.height = 50;

    printf("Top-left corner : (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Width  : %d\n", rect.width);
    printf("Height : %d\n", rect.height);

    printf("\nArea = %d\n", rect.width * rect.height);

    return 0;
}
