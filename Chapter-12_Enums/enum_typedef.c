#include <stdio.h>

typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;

int main() {
    Day today = WEDNESDAY;

    printf("Today's enum value = %d\n", today);

    /* typedef removes the need to write 'enum' before the type name */
    Day tomorrow = THURSDAY;
    printf("Tomorrow's enum value = %d\n", tomorrow);

    return 0;
}
