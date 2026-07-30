#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operation)(int, int);
    int x = 10, y = 5;

    operation = add;
    printf("Addition: %d\n", operation(x, y));

    operation = subtract;
    printf("Subtraction: %d\n", operation(x, y));

    operation = multiply;
    printf("Multiplication: %d\n", operation(x, y));

    return 0;
}
