#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    printf("Identity matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
