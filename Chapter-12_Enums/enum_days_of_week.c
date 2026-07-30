#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int isWeekend(enum Day d) {
    return (d == SUNDAY || d == SATURDAY);
}

int main() {
    enum Day today;
    int choice;

    printf("Enter day number (0=Sunday ... 6=Saturday): ");
    scanf("%d", &choice);
    today = (enum Day)choice;

    if (isWeekend(today))
        printf("It's the weekend!\n");
    else
        printf("It's a weekday.\n");

    return 0;
}
