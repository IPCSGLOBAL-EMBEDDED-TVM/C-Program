#include <stdio.h>

union Value {
    int i;
    float f;
};

union Value makeIntValue(int x) {
    union Value v;
    v.i = x;
    return v;
}

union Value makeFloatValue(float x) {
    union Value v;
    v.f = x;
    return v;
}

int main() {
    union Value a = makeIntValue(25);
    union Value b = makeFloatValue(3.5f);

    printf("a.i = %d\n", a.i);
    printf("b.f = %.2f\n", b.f);

    return 0;
}
