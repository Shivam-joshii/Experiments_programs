//Book Structure & Function Argument
#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;
    printf("Enter book id, title, author, price:\n");
    scanf("%d", &b1.book_id);
    getchar(); // To consume newline after int input
    fgets(b1.title, 50, stdin);
    fgets(b1.author, 50, stdin);
    scanf("%f", &b1.price);

    printBook(b1);
    return 0;
}
