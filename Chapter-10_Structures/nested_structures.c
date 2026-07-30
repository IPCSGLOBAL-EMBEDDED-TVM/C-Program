#include <stdio.h>
#include <string.h>

struct Address {
    char city[50];
    char state[50];
    int pincode;
};

struct Employee {
    char name[50];
    int id;
    struct Address address;
};

int main() {
    struct Employee emp;

    strcpy(emp.name, "Anita");
    emp.id = 501;
    strcpy(emp.address.city, "Bangalore");
    strcpy(emp.address.state, "Karnataka");
    emp.address.pincode = 560001;

    printf("Employee Name : %s\n", emp.name);
    printf("Employee ID   : %d\n", emp.id);
    printf("City          : %s\n", emp.address.city);
    printf("State         : %s\n", emp.address.state);
    printf("Pincode       : %d\n", emp.address.pincode);

    return 0;
}
