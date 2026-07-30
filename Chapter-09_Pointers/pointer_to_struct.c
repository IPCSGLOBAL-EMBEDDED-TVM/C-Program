#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;

    strcpy(ptr->name, "Ravi");
    ptr->age = 20;
    ptr->marks = 88.5;

    printf("Name  = %s\n", ptr->name);
    printf("Age   = %d\n", ptr->age);
    printf("Marks = %.2f\n", ptr->marks);

    printf("\n(Note: ptr->age is shorthand for (*ptr).age)\n");
    printf("Using (*ptr).age = %d\n", (*ptr).age);

    return 0;
}
