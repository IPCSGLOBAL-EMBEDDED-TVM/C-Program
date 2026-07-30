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

    int found = 0;
    for (int i = 0; i < rows; i++) {
        int minVal = a[i][0];
        int minCol = 0;
        for (int j = 1; j < cols; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minCol = j;
            }
        }

        int isMax = 1;
        for (int k = 0; k < rows; k++) {
            if (a[k][minCol] > minVal) {
                isMax = 0;
                break;
            }
        }

        if (isMax) {
            printf("Saddle point found: %d at position (%d, %d)\n", minVal, i, minCol);
            found = 1;
        }
    }

    if (!found)
        printf("No saddle point exists in the matrix\n");

    return 0;
}
