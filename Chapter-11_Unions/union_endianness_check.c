#include <stdio.h>

union EndianCheck {
    int i;
    char bytes[sizeof(int)];
};

int main() {
    union EndianCheck test;
    test.i = 1;

    printf("Checking system byte order using a union:\n\n");

    if (test.bytes[0] == 1)
        printf("System is Little Endian (least significant byte stored first)\n");
    else
        printf("System is Big Endian (most significant byte stored first)\n");

    printf("\nByte layout of integer 1:\n");
    for (int i = 0; i < (int)sizeof(int); i++)
        printf("byte[%d] = %d\n", i, test.bytes[i]);

    return 0;
}
