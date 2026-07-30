#include <stdio.h>

enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    printf("Enum constants get sequential integer values starting from 0 by default:\n\n");

    printf("SUNDAY    = %d\n", SUNDAY);
    printf("MONDAY    = %d\n", MONDAY);
    printf("TUESDAY   = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY  = %d\n", THURSDAY);
    printf("FRIDAY    = %d\n", FRIDAY);
    printf("SATURDAY  = %d\n", SATURDAY);

    return 0;
}
