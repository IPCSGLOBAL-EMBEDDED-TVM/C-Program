#include <stdio.h>
#include <string.h>

enum Department { HR, ENGINEERING, SALES, MARKETING };

struct Employee {
    char name[50];
    enum Department dept;
};

const char* departmentName(enum Department d) {
    switch (d) {
        case HR: return "HR";
        case ENGINEERING: return "Engineering";
        case SALES: return "Sales";
        case MARKETING: return "Marketing";
        default: return "Unknown";
    }
}

int main() {
    struct Employee emp1;
    strcpy(emp1.name, "Neha");
    emp1.dept = ENGINEERING;

    printf("Employee: %s\n", emp1.name);
    printf("Department: %s\n", departmentName(emp1.dept));

    return 0;
}
