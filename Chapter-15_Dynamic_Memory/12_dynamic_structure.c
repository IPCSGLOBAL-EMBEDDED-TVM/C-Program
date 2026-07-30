// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student *student;

    student = (struct Student *)malloc(sizeof(struct Student));

    if (student == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    printf("Enter Roll Number : ");
    scanf("%d", &student->roll);

    getchar();

    printf("Enter Name : ");
    fgets(student->name, sizeof(student->name), stdin);

    printf("Enter Marks : ");
    scanf("%f", &student->marks);

    printf("\nStudent Details\n");
    printf("-----------------------\n");
    printf("Roll No : %d\n", student->roll);
    printf("Name    : %s", student->name);
    printf("Marks   : %.2f\n", student->marks);

    free(student);

    return 0;
}