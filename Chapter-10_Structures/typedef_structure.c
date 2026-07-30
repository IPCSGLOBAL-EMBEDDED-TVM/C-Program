#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1;

    strcpy(p1.name, "Sara");
    p1.age = 28;

    printf("Name : %s\n", p1.name);
    printf("Age  : %d\n", p1.age);

    /* typedef removes the need to write 'struct' before the type name */
    Person p2 = {"Tom", 34};
    printf("\nName : %s\n", p2.name);
    printf("Age  : %d\n", p2.age);

    return 0;
}
