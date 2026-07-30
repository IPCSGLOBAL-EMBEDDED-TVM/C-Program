#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int arePointsEqual(struct Point p1, struct Point p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = {10, 20};
    struct Point p3 = {5, 15};

    /* Note: structures cannot be compared directly with == in C,
       so we compare member by member using a helper function */

    if (arePointsEqual(p1, p2))
        printf("p1 and p2 are equal\n");
    else
        printf("p1 and p2 are not equal\n");

    if (arePointsEqual(p1, p3))
        printf("p1 and p3 are equal\n");
    else
        printf("p1 and p3 are not equal\n");

    return 0;
}
