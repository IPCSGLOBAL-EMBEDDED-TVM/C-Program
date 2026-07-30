#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point createPoint(int x, int y) {
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}

struct Point addPoints(struct Point p1, struct Point p2) {
    struct Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

int main() {
    struct Point p1 = createPoint(10, 20);
    struct Point p2 = createPoint(5, 15);

    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    struct Point sum = addPoints(p1, p2);
    printf("Sum  = (%d, %d)\n", sum.x, sum.y);

    return 0;
}
