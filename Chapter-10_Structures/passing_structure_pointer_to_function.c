#include <stdio.h>

struct Point {
    int x;
    int y;
};

void modifyPoint(struct Point *p) {
    p->x = 999;
    p->y = 999;
}

int main() {
    struct Point p1 = {15, 25};

    printf("Before modification: (%d, %d)\n", p1.x, p1.y);

    modifyPoint(&p1);

    printf("After modification (pass by pointer): (%d, %d)\n", p1.x, p1.y);

    return 0;
}
