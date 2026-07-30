#include <stdio.h>

enum Status { PENDING, IN_PROGRESS, COMPLETED, CANCELLED };

const char* statusToString(enum Status s) {
    switch (s) {
        case PENDING: return "Pending";
        case IN_PROGRESS: return "In Progress";
        case COMPLETED: return "Completed";
        case CANCELLED: return "Cancelled";
        default: return "Unknown";
    }
}

enum Status nextStatus(enum Status current) {
    if (current == PENDING) return IN_PROGRESS;
    if (current == IN_PROGRESS) return COMPLETED;
    return current;
}

int main() {
    enum Status task = PENDING;
    printf("Task status: %s\n", statusToString(task));

    task = nextStatus(task);
    printf("Task status: %s\n", statusToString(task));

    task = nextStatus(task);
    printf("Task status: %s\n", statusToString(task));

    return 0;
}
