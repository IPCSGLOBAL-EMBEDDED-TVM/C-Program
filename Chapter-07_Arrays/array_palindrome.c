#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int isPalindrome = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Array is a palindrome\n");
    else
        printf("Array is not a palindrome\n");

    return 0;
}
