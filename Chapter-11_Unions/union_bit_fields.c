#include <stdio.h>

union StatusRegister {
    unsigned char raw;
    struct {
        unsigned char carry    : 1;
        unsigned char zero     : 1;
        unsigned char negative : 1;
        unsigned char overflow : 1;
        unsigned char reserved : 4;
    } flags;
};

int main() {
    union StatusRegister reg;
    reg.raw = 0;

    reg.flags.carry = 1;
    reg.flags.zero = 1;

    printf("Raw register value = 0x%02X\n", reg.raw);
    printf("Carry flag    = %d\n", reg.flags.carry);
    printf("Zero flag     = %d\n", reg.flags.zero);
    printf("Negative flag = %d\n", reg.flags.negative);
    printf("Overflow flag = %d\n", reg.flags.overflow);

    return 0;
}
