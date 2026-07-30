#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    /* Method 1: initialize at declaration */
    struct Point p1 = {10, 20};

    /* Method 2: designated initializers */
    struct Point p2 = {.x = 30, .y = 40};

    /* Method 3: assign members individually */
    struct Point p3;
    p3.x = 50;
    p3.y = 60;

    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);
    printf("p3 = (%d, %d)\n", p3.x, p3.y);

    return 0;
}
