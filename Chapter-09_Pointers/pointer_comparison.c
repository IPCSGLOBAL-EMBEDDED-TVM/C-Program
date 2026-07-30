#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p1 = &arr[1];
    int *p2 = &arr[3];

    if (p1 < p2)
        printf("p1 points to an earlier element than p2\n");
    else if (p1 > p2)
        printf("p1 points to a later element than p2\n");
    else
        printf("p1 and p2 point to the same element\n");

    printf("Difference between p2 and p1 = %ld elements\n", p2 - p1);

    return 0;
}
