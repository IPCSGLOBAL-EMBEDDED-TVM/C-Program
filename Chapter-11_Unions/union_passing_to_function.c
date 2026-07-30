#include <stdio.h>

union Number {
    int i;
    float f;
};

void printAsInt(union Number n) {
    printf("As int: %d\n", n.i);
}

void tryToModify(union Number n) {
    n.i = 999;
}

int main() {
    union Number num;
    num.i = 42;

    printAsInt(num);

    tryToModify(num);
    printf("After tryToModify (pass by value), unchanged: ");
    printAsInt(num);

    return 0;
}
