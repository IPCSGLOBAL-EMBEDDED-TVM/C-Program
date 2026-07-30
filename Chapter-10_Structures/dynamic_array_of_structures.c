#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    getchar();

    struct Product *products = (struct Product *)malloc(n * sizeof(struct Product));

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of product %d: ", i + 1);
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';

        printf("Enter price of product %d: ", i + 1);
        scanf("%f", &products[i].price);
        getchar();
    }

    printf("\n--- Product List ---\n");
    float total = 0;
    for (int i = 0; i < n; i++) {
        printf("%s : %.2f\n", products[i].name, products[i].price);
        total += products[i].price;
    }
    printf("Total price of all products = %.2f\n", total);

    free(products);
    return 0;
}
