#include <stdio.h>

/* Anonymous enums are commonly used to define related integer constants
   when no separate type name is needed */
enum { MAX_USERS = 100, MAX_CONNECTIONS = 50, BUFFER_SIZE = 1024 };

int main() {
    printf("MAX_USERS       = %d\n", MAX_USERS);
    printf("MAX_CONNECTIONS = %d\n", MAX_CONNECTIONS);
    printf("BUFFER_SIZE     = %d\n", BUFFER_SIZE);

    int userCount = 45;
    if (userCount < MAX_USERS)
        printf("\nRoom for %d more users\n", MAX_USERS - userCount);

    return 0;
}
