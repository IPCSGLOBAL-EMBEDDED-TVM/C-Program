#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar();
    }

    /* Sort by marks in descending order using bubble sort */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\n--- Students Sorted by Marks (Descending) ---\n");
    for (int i = 0; i < n; i++)
        printf("%s : %.2f\n", students[i].name, students[i].marks);

    return 0;
}
