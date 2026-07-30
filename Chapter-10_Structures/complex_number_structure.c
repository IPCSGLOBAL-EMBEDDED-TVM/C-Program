#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

void printComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    struct Complex c1 = {3, 4};
    struct Complex c2 = {1, 2};

    printf("c1 = ");
    printComplex(c1);
    printf("c2 = ");
    printComplex(c2);

    printf("Sum        = ");
    printComplex(addComplex(c1, c2));

    printf("Difference = ");
    printComplex(subtractComplex(c1, c2));

    printf("Product    = ");
    printComplex(multiplyComplex(c1, c2));

    return 0;
}
