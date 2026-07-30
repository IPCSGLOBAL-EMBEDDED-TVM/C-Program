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

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    printf("Spiral order traversal: ");
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
    printf("\n");

    return 0;
}
