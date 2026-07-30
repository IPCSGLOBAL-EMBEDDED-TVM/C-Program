#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int daysInMonth(enum Month m, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (m == FEB && isLeap)
        return 29;

    return days[m - 1];
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("\nDays in each month of %d:\n", year);
    for (enum Month m = JAN; m <= DEC; m++)
        printf("Month %2d: %d days\n", m, daysInMonth(m, year));

    return 0;
}
