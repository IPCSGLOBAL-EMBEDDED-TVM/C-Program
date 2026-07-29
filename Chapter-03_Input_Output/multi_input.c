#include <stdio.h>

int main()
{
    int roll;
    float marks;

    printf("Enter Roll Number and Marks: ");
    scanf("%d %f", &roll, &marks);

    printf("\nRoll Number : %d\n", roll);
    printf("Marks       : %.2f\n", marks);

    return 0;
}
