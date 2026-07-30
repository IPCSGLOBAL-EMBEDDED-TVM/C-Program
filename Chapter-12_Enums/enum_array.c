#include <stdio.h>

enum Direction { NORTH, EAST, SOUTH, WEST };

int main() {
    enum Direction path[] = {NORTH, EAST, EAST, SOUTH, WEST};
    int n = 5;

    const char *names[] = {"North", "East", "South", "West"};

    printf("Path taken:\n");
    for (int i = 0; i < n; i++)
        printf("Step %d: %s\n", i + 1, names[path[i]]);

    return 0;
}
