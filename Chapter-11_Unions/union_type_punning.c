#include <stdio.h>

union FloatBits {
    float f;
    unsigned int bits;
};

int main() {
    union FloatBits fb;
    fb.f = 1.5f;

    printf("Float value       = %f\n", fb.f);
    printf("Raw bit pattern   = 0x%08X\n", fb.bits);

    printf("\nThis technique (type punning) lets you inspect the\n");
    printf("underlying bit representation of a floating-point value.\n");

    return 0;
}
