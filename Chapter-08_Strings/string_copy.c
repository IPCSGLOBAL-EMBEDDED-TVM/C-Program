#include <stdio.h>
#include <string.h>

int main() {
    char source[1000], destination[1000];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';

    int i;
    for (i = 0; source[i] != '\0'; i++)
        destination[i] = source[i];
    destination[i] = '\0';

    printf("Copied string: %s\n", destination);
    return 0;
}
