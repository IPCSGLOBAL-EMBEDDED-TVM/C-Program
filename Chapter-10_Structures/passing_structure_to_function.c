#include <stdio.h>

struct Point {
    int x;
    int y;
};

void printPoint(struct Point p) {
    printf("Point = (%d, %d)\n", p.x, p.y);
}

void tryToModify(struct Point p) {
    p.x = 999;
    p.y = 999;
}

int main() {
    struct Point p1 = {15, 25};

    printPoint(p1);

    tryToModify(p1);
    printf("After tryToModify (pass by value), p1 is unchanged:\n");
    printPoint(p1);

    return 0;
}
