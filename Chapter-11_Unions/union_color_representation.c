#include <stdio.h>

union Color {
    unsigned int rgba;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    } channels;
};

int main() {
    union Color c;

    c.channels.r = 255;
    c.channels.g = 128;
    c.channels.b = 64;
    c.channels.a = 255;

    printf("Color channels: R=%d, G=%d, B=%d, A=%d\n",
           c.channels.r, c.channels.g, c.channels.b, c.channels.a);
    printf("Same color as packed 32-bit value: 0x%08X\n", c.rgba);

    return 0;
}
