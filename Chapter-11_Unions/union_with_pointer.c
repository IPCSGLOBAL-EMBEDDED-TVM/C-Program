#include <stdio.h>

union Data {
    int i;
    char c;
};

int main() {
    union Data data;
    union Data *ptr = &data;

    ptr->i = 1000;
    printf("Accessing union member through pointer: ptr->i = %d\n", ptr->i);

    (*ptr).c = 'Q';
    printf("Accessing union member through pointer: (*ptr).c = %c\n", (*ptr).c);

    return 0;
}
