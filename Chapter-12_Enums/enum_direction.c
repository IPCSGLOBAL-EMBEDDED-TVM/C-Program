#include <stdio.h>

enum Direction { NORTH, EAST, SOUTH, WEST };

const char* directionName(enum Direction d) {
    const char *names[] = {"North", "East", "South", "West"};
    return names[d];
}

enum Direction turnRight(enum Direction current) {
    return (current + 1) % 4;
}

enum Direction turnLeft(enum Direction current) {
    return (current + 3) % 4;
}

int main() {
    enum Direction facing = NORTH;

    printf("Starting direction: %s\n", directionName(facing));

    facing = turnRight(facing);
    printf("After turning right: %s\n", directionName(facing));

    facing = turnRight(facing);
    printf("After turning right again: %s\n", directionName(facing));

    facing = turnLeft(facing);
    printf("After turning left: %s\n", directionName(facing));

    return 0;
}
