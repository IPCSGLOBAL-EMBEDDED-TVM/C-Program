#include <stdio.h>

union IPv4Address {
    unsigned int fullAddress;
    unsigned char octets[4];
};

int main() {
    union IPv4Address ip;

    /* Manually set each octet: 192.168.1.10 */
    ip.octets[0] = 192;
    ip.octets[1] = 168;
    ip.octets[2] = 1;
    ip.octets[3] = 10;

    printf("IP address as octets : %u.%u.%u.%u\n",
           ip.octets[0], ip.octets[1], ip.octets[2], ip.octets[3]);

    printf("IP address as raw 32-bit value: %u\n", ip.fullAddress);

    return 0;
}
