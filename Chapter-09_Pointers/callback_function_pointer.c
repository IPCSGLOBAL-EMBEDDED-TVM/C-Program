#include <stdio.h>

void processArray(int arr[], int n, void (*callback)(int)) {
    for (int i = 0; i < n; i++)
        callback(arr[i]);
}

void printSquare(int num) {
    printf("Square of %d = %d\n", num, num * num);
}

void printDouble(int num) {
    printf("Double of %d = %d\n", num, num * 2);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Using printSquare callback:\n");
    processArray(arr, n, printSquare);

    printf("\nUsing printDouble callback:\n");
    processArray(arr, n, printDouble);

    return 0;
}
