#include <stdio.h>

union Overlap {
    int wholeNumber;
    struct {
        char byte0;
        char byte1;
        char byte2;
        char byte3;
    } bytes;
};

int main() {
    union Overlap u;
    u.wholeNumber = 0x04030201;

    printf("wholeNumber = 0x%08X\n", u.wholeNumber);
    printf("Individual bytes (may vary by system endianness):\n");
    printf("byte0 = 0x%02X\n", (unsigned char)u.bytes.byte0);
    printf("byte1 = 0x%02X\n", (unsigned char)u.bytes.byte1);
    printf("byte2 = 0x%02X\n", (unsigned char)u.bytes.byte2);
    printf("byte3 = 0x%02X\n", (unsigned char)u.bytes.byte3);

    printf("\nModifying byte0 through the struct view:\n");
    u.bytes.byte0 = 0x00;
    printf("wholeNumber is now = 0x%08X\n", u.wholeNumber);

    return 0;
}
