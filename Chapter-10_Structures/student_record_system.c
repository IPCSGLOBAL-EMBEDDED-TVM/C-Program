#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float total;
    float average;
};

void calculateResult(struct Student *s) {
    s->total = s->marks[0] + s->marks[1] + s->marks[2];
    s->average = s->total / 3;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].rollNo);
        getchar();

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter marks for 3 subjects: ");
        for (int j = 0; j < 3; j++)
            scanf("%f", &students[i].marks[j]);
        getchar();

        calculateResult(&students[i]);
    }

    printf("\n%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Total", "Average");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f\n",
               students[i].rollNo, students[i].name,
               students[i].total, students[i].average);
    }

    return 0;
}
