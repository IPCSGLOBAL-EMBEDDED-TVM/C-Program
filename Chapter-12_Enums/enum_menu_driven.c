#include <stdio.h>

enum MenuOption {
    ADD_ITEM = 1,
    VIEW_ITEMS = 2,
    DELETE_ITEM = 3,
    EXIT_PROGRAM = 4
};

int main() {
    int choice;

    printf("--- Menu ---\n");
    printf("%d. Add Item\n", ADD_ITEM);
    printf("%d. View Items\n", VIEW_ITEMS);
    printf("%d. Delete Item\n", DELETE_ITEM);
    printf("%d. Exit\n", EXIT_PROGRAM);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch ((enum MenuOption)choice) {
        case ADD_ITEM:
            printf("Adding a new item...\n");
            break;
        case VIEW_ITEMS:
            printf("Displaying all items...\n");
            break;
        case DELETE_ITEM:
            printf("Deleting an item...\n");
            break;
        case EXIT_PROGRAM:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
