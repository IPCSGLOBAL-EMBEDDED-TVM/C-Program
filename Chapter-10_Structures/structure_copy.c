#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {5, 10};
    struct Point p2;

    /* Direct structure assignment copies all members */
    p2 = p1;

    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    p2.x = 100;
    printf("\nAfter modifying p2.x, p1 is unaffected:\n");
    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    return 0;
}
