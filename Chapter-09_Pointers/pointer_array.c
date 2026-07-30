#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arrOfPointers[3];

    arrOfPointers[0] = &a;
    arrOfPointers[1] = &b;
    arrOfPointers[2] = &c;

    printf("Values accessed through an array of pointers:\n");
    for (int i = 0; i < 3; i++)
        printf("*arrOfPointers[%d] = %d\n", i, *arrOfPointers[i]);

    return 0;
}
