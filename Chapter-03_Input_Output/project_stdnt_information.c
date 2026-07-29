#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float marks;

    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n------ Student Information ------\n");
    printf("Name  : %s", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);

    return 0;
}