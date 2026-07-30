#include <stdio.h>

struct MyStruct {
    int i;
    float f;
    char c;
};

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    printf("Size of struct (members stored separately) = %zu bytes\n", sizeof(struct MyStruct));
    printf("Size of union (members share same memory)   = %zu bytes\n", sizeof(union MyUnion));

    struct MyStruct s = {10, 3.14, 'A'};
    union MyUnion u;
    u.i = 10;

    printf("\nIn struct, all members hold independent values:\n");
    printf("s.i = %d, s.f = %.2f, s.c = %c\n", s.i, s.f, s.c);

    printf("\nIn union, only the last assigned member holds a valid value:\n");
    printf("u.i = %d\n", u.i);

    return 0;
}
