#include <stdio.h>

union MultiType {
    short s;
    int i;
    long l;
    float f;
    double d;
};

int main() {
    union MultiType m;

    m.s = 100;
    printf("As short  : %d (size %zu bytes)\n", m.s, sizeof(m.s));

    m.i = 100000;
    printf("As int    : %d (size %zu bytes)\n", m.i, sizeof(m.i));

    m.l = 1000000L;
    printf("As long   : %ld (size %zu bytes)\n", m.l, sizeof(m.l));

    m.f = 3.14f;
    printf("As float  : %.2f (size %zu bytes)\n", m.f, sizeof(m.f));

    m.d = 2.718281828;
    printf("As double : %.9f (size %zu bytes)\n", m.d, sizeof(m.d));

    printf("\nUnion total size = %zu bytes (matches largest member)\n", sizeof(union MultiType));

    return 0;
}
