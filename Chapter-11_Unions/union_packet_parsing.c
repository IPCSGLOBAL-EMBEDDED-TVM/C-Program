#include <stdio.h>

/* Simulates viewing raw network packet header bytes both as
   individual fields and as a whole, using a union */

union PacketHeader {
    unsigned char rawBytes[4];
    struct {
        unsigned char version;
        unsigned char headerLength;
        unsigned short totalLength;
    } fields;
};

int main() {
    union PacketHeader header;

    header.rawBytes[0] = 4;
    header.rawBytes[1] = 20;
    header.rawBytes[2] = 0;
    header.rawBytes[3] = 60;

    printf("Raw bytes: %d %d %d %d\n",
           header.rawBytes[0], header.rawBytes[1],
           header.rawBytes[2], header.rawBytes[3]);

    printf("\nInterpreted as fields:\n");
    printf("Version       = %d\n", header.fields.version);
    printf("Header Length = %d\n", header.fields.headerLength);
    printf("Total Length  = %d (depends on system endianness)\n", header.fields.totalLength);

    return 0;
}
