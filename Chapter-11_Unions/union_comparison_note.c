#include <stdio.h>
#include <string.h>

union Data {
    int i;
    char c;
};

int compareUnions(union Data a, union Data b) {
    /* Unions cannot be compared directly with ==, so we compare
       their raw memory using memcmp, or compare specific members
       if we know which member is currently meaningful */
    return memcmp(&a, &b, sizeof(union Data)) == 0;
}

int main() {
    union Data d1, d2;
    d1.i = 500;
    d2.i = 500;

    if (compareUnions(d1, d2))
        printf("d1 and d2 have identical memory contents\n");
    else
        printf("d1 and d2 differ\n");

    d2.i = 600;
    if (compareUnions(d1, d2))
        printf("d1 and d2 have identical memory contents\n");
    else
        printf("d1 and d2 differ\n");

    return 0;
}
