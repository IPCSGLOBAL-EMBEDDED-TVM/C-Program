#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += a[i][i];
        secondaryDiagonalSum += a[i][n - i - 1];
    }

    printf("Primary diagonal sum = %d\n", primaryDiagonalSum);
    printf("Secondary diagonal sum = %d\n", secondaryDiagonalSum);

    return 0;
}
