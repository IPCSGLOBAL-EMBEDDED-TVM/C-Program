#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;
};

void calculateSalary(struct Employee *e) {
    e->netSalary = e->basicSalary + e->allowances - e->deductions;
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        getchar();

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("Allowances: ");
        scanf("%f", &employees[i].allowances);
        printf("Deductions: ");
        scanf("%f", &employees[i].deductions);
        getchar();

        calculateSalary(&employees[i]);
    }

    printf("\n%-6s %-20s %-12s\n", "ID", "Name", "Net Salary");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-20s %-12.2f\n",
               employees[i].id, employees[i].name, employees[i].netSalary);
    }

    return 0;
}
