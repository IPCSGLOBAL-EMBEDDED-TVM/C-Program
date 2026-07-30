#include <stdio.h>

int main() {
    char *fruits[] = {"Apple", "Banana", "Cherry", "Mango", "Orange"};
    int n = 5;

    printf("Array of pointers to strings:\n");
    for (int i = 0; i < n; i++)
        printf("fruits[%d] = %s\n", i, fruits[i]);

    return 0;
}
