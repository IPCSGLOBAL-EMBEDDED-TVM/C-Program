#include <stdio.h>

enum Priority { LOW, MEDIUM, HIGH, URGENT };

int main() {
    enum Priority task1 = MEDIUM;
    enum Priority task2 = HIGH;

    if (task1 == task2)
        printf("Both tasks have the same priority\n");
    else if (task1 < task2)
        printf("Task 2 has higher priority than Task 1\n");
    else
        printf("Task 1 has higher priority than Task 2\n");

    /* Enums can be compared using relational operators since
       they are internally represented as integers */
    printf("\ntask1 (%d) < task2 (%d): %s\n", task1, task2, (task1 < task2) ? "true" : "false");

    return 0;
}
