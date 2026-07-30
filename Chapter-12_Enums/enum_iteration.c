#include <stdio.h>

enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, DAY_COUNT };

const char* dayName(enum Weekday d) {
    const char *names[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    return names[d];
}

int main() {
    printf("Iterating through all days of the week:\n");

    for (enum Weekday d = SUNDAY; d < DAY_COUNT; d++)
        printf("%s\n", dayName(d));

    return 0;
}
