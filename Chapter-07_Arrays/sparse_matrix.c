#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    int zeroCount = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] == 0)
                zeroCount++;

    int totalElements = rows * cols;

    if (zeroCount > totalElements / 2)
        printf("Matrix is sparse (zero elements = %d out of %d)\n", zeroCount, totalElements);
    else
        printf("Matrix is not sparse (zero elements = %d out of %d)\n", zeroCount, totalElements);

    printf("\nSparse matrix representation (row, col, value):\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] != 0)
                printf("%d %d %d\n", i, j, a[i][j]);

    return 0;
}
