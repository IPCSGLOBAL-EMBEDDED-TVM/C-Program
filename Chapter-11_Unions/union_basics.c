#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;

    data.i = 65;
    printf("data.i = %d\n", data.i);

    data.c = 'A';
    printf("data.c = %c\n", data.c);

    printf("\nNote: all members of a union share the same memory location,\n");
    printf("so setting one member overwrites the others.\n");

    return 0;
}
