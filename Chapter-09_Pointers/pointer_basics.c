#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value of ptr (address it holds) = %p\n", (void *)ptr);
    printf("Value pointed to by ptr = %d\n", *ptr);

    *ptr = 50;
    printf("After modifying through pointer, num = %d\n", num);

    return 0;
}
