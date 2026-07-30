#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(struct Date d) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d.month < 1 || d.month > 12)
        return 0;

    int maxDay = daysInMonth[d.month - 1];
    if (d.month == 2 && isLeapYear(d.year))
        maxDay = 29;

    return (d.day >= 1 && d.day <= maxDay);
}

void printDate(struct Date d) {
    printf("%02d/%02d/%04d\n", d.day, d.month, d.year);
}

int main() {
    struct Date d1 = {29, 2, 2024};
    struct Date d2 = {31, 4, 2023};

    printf("Date 1: ");
    printDate(d1);
    printf("Valid? %s\n\n", isValidDate(d1) ? "Yes" : "No");

    printf("Date 2: ");
    printDate(d2);
    printf("Valid? %s\n", isValidDate(d2) ? "Yes" : "No");

    return 0;
}
