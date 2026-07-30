#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operations[3])(int, int) = {add, subtract, multiply};
    const char *names[3] = {"Addition", "Subtraction", "Multiplication"};

    int x = 20, y = 8;
    for (int i = 0; i < 3; i++)
        printf("%s: %d\n", names[i], operations[i](x, y));

    return 0;
}
