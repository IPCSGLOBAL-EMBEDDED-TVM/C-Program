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

    printf("Row-wise sums:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
            rowSum += a[i][j];
        printf("Row %d sum = %d\n", i, rowSum);
    }

    printf("Column-wise sums:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++)
            colSum += a[i][j];
        printf("Column %d sum = %d\n", j, colSum);
    }

    return 0;
}
