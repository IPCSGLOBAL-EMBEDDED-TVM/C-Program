#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks[5];
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Kiran");

    printf("Enter 5 subject marks for %s: ", s1.name);
    for (int i = 0; i < 5; i++)
        scanf("%d", &s1.marks[i]);

    int total = 0;
    for (int i = 0; i < 5; i++)
        total += s1.marks[i];

    printf("Student: %s\n", s1.name);
    printf("Marks: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", s1.marks[i]);
    printf("\n");
    printf("Total = %d, Average = %.2f\n", total, total / 5.0);

    return 0;
}
