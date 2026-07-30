#include <stdio.h>

/* Enum declared at global scope, visible throughout the file */
enum GlobalStatus { ACTIVE, INACTIVE };

void showLocalEnum() {
    /* Enum declared inside a function, only visible within this function */
    enum LocalCode { CODE_A, CODE_B, CODE_C };
    enum LocalCode code = CODE_B;
    printf("Local enum value inside function = %d\n", code);
}

int main() {
    enum GlobalStatus status = ACTIVE;
    printf("Global enum value = %d\n", status);

    showLocalEnum();

    return 0;
}
