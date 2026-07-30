#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    getchar();

    struct Contact contacts[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of contact %d: ", i + 1);
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';

        printf("Enter phone number: ");
        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';
    }

    char searchName[50];
    printf("\nEnter name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Found! %s's phone number is %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found\n");

    return 0;
}
