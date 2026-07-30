#include <stdio.h>

void increment(int *num) {
    (*num)++;
}

void doubleValue(int *num) {
    *num = *num * 2;
}

int main() {
    int value = 10;
    printf("Original value = %d\n", value);

    increment(&value);
    printf("After increment (pass by reference) = %d\n", value);

    doubleValue(&value);
    printf("After doubling (pass by reference) = %d\n", value);

    return 0;
}
