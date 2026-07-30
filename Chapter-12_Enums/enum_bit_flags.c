#include <stdio.h>

enum Permission {
    READ    = 1 << 0,  /* 0001 */
    WRITE   = 1 << 1,  /* 0010 */
    EXECUTE = 1 << 2,  /* 0100 */
    DELETE  = 1 << 3   /* 1000 */
};

void printPermissions(int perms) {
    printf("Permissions: ");
    if (perms & READ)    printf("READ ");
    if (perms & WRITE)   printf("WRITE ");
    if (perms & EXECUTE) printf("EXECUTE ");
    if (perms & DELETE)  printf("DELETE ");
    printf("\n");
}

int main() {
    int userPermissions = READ | WRITE;

    printf("Initial permissions:\n");
    printPermissions(userPermissions);

    userPermissions |= EXECUTE;
    printf("\nAfter granting EXECUTE:\n");
    printPermissions(userPermissions);

    userPermissions &= ~WRITE;
    printf("\nAfter revoking WRITE:\n");
    printPermissions(userPermissions);

    return 0;
}
