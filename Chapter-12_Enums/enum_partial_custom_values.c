#include <stdio.h>

/* When only some constants are given values, later ones increment from
   the last assigned value */
enum Level { LOW = 1, MEDIUM, HIGH, CRITICAL = 10, EXTREME };

int main() {
    printf("LOW      = %d\n", LOW);
    printf("MEDIUM   = %d\n", MEDIUM);
    printf("HIGH     = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
    printf("EXTREME  = %d\n", EXTREME);

    return 0;
}
