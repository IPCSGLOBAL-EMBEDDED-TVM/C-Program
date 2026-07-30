// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size;

    printf("Enter maximum string length: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc((size + 1) * sizeof(char));

    if (str == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, size + 1, stdin);

    printf("\nEntered String:\n%s", str);

    free(str);

    return 0;
}