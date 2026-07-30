#include <stdio.h>

struct Flags {
    unsigned int isActive : 1;
    unsigned int isAdmin  : 1;
    unsigned int level    : 4;
};

int main() {
    struct Flags f;

    f.isActive = 1;
    f.isAdmin = 0;
    f.level = 9;

    printf("isActive = %u\n", f.isActive);
    printf("isAdmin  = %u\n", f.isAdmin);
    printf("level    = %u\n", f.level);

    printf("\nSize of struct with bit-fields = %zu bytes\n", sizeof(struct Flags));
    printf("(Bit-fields let you pack small values tightly to save memory)\n");

    return 0;
}
