#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n",
               students[i].name, students[i].rollNo, students[i].marks);
    }

    return 0;
}
