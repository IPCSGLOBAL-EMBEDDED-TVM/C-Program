#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int quantity;
    float price;
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Book %d ---\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Quantity: ");
        scanf("%d", &books[i].quantity);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }

    float totalValue = 0;
    printf("\n--- Inventory Report ---\n");
    for (int i = 0; i < n; i++) {
        float value = books[i].quantity * books[i].price;
        printf("%s by %s | Qty: %d | Price: %.2f | Value: %.2f\n",
               books[i].title, books[i].author, books[i].quantity,
               books[i].price, value);
        totalValue += value;
    }
    printf("\nTotal inventory value = %.2f\n", totalValue);

    return 0;
}
