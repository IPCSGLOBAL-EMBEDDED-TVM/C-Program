#include <stdio.h>

enum TrafficLight { RED_LIGHT, YELLOW_LIGHT, GREEN_LIGHT };

enum TrafficLight nextLight(enum TrafficLight current) {
    switch (current) {
        case RED_LIGHT: return GREEN_LIGHT;
        case GREEN_LIGHT: return YELLOW_LIGHT;
        case YELLOW_LIGHT: return RED_LIGHT;
        default: return RED_LIGHT;
    }
}

const char* lightName(enum TrafficLight light) {
    switch (light) {
        case RED_LIGHT: return "RED";
        case YELLOW_LIGHT: return "YELLOW";
        case GREEN_LIGHT: return "GREEN";
        default: return "UNKNOWN";
    }
}

int main() {
    enum TrafficLight light = RED_LIGHT;

    printf("Simulating traffic light cycle:\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\n", lightName(light));
        light = nextLight(light);
    }

    return 0;
}
