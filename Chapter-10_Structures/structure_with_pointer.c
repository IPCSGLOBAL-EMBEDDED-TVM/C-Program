#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    float price;
};

int main() {
    struct Book b1;
    struct Book *ptr = &b1;

    strcpy(ptr->title, "The C Programming Language");
    ptr->price = 499.50;

    printf("Book Title : %s\n", ptr->title);
    printf("Book Price : %.2f\n", ptr->price);

    printf("\nAccessing the same members using (*ptr).member syntax:\n");
    printf("Title: %s, Price: %.2f\n", (*ptr).title, (*ptr).price);

    return 0;
}
