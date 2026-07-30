#include <stdio.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

const char* monthName(enum Month m) {
    const char *names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return names[m];
}

int main() {
    enum Month current = JUL;

    printf("Current month: %s\n", monthName(current));

    printf("\nAll months:\n");
    for (int i = JAN; i <= DEC; i++)
        printf("%d: %s\n", i + 1, monthName((enum Month)i));

    return 0;
}
