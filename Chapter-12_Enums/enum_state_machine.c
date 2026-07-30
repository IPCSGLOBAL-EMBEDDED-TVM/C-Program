#include <stdio.h>
#include <string.h>

enum State { IDLE, RUNNING, PAUSED, STOPPED };

const char* stateName(enum State s) {
    switch (s) {
        case IDLE: return "IDLE";
        case RUNNING: return "RUNNING";
        case PAUSED: return "PAUSED";
        case STOPPED: return "STOPPED";
        default: return "UNKNOWN";
    }
}

enum State handleEvent(enum State current, const char *event) {
    if (current == IDLE && strcmp(event, "start") == 0) return RUNNING;
    if (current == RUNNING && strcmp(event, "pause") == 0) return PAUSED;
    if (current == PAUSED && strcmp(event, "resume") == 0) return RUNNING;
    if ((current == RUNNING || current == PAUSED) && strcmp(event, "stop") == 0) return STOPPED;
    return current;
}

int main() {
    enum State machine = IDLE;
    const char *events[] = {"start", "pause", "resume", "stop"};

    printf("Initial state: %s\n", stateName(machine));

    for (int i = 0; i < 4; i++) {
        machine = handleEvent(machine, events[i]);
        printf("After event '%s': %s\n", events[i], stateName(machine));
    }

    return 0;
}
