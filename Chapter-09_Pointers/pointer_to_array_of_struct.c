#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
};

int main() {
    struct Employee employees[3] = {
        {"Alice", 101},
        {"Bob", 102},
        {"Charlie", 103}
    };

    struct Employee *ptr = employees;

    printf("Employee details using pointer:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", (ptr + i)->id, (ptr + i)->name);
    }

    return 0;
}
