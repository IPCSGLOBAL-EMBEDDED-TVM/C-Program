#include <stdio.h>

union Item {
    int intValue;
    float floatValue;
};

int main() {
    union Item items[3];

    items[0].intValue = 10;
    items[1].floatValue = 2.5f;
    items[2].intValue = 99;

    printf("items[0].intValue   = %d\n", items[0].intValue);
    printf("items[1].floatValue = %.2f\n", items[1].floatValue);
    printf("items[2].intValue   = %d\n", items[2].intValue);

    return 0;
}
