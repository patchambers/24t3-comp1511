// This program demonstrates the -> syntax for struct pointers
// Pat Chambers (z5264081), 23/10/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    int year;
};

void modify_book(struct book *book);

int main(void) {
    struct book book;

    strcpy(book.title, "To Kill a Mockingbird");
    strcpy(book.author, "Harper Lee");
    book.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    modify_book(&book);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    return 0;
}

// Change a struct book in main by accessing it through a struct book pointer
void modify_book(struct book *book) {
    // These 2 lines are equivalent:
    // (*book).year = 1925;
    // book->year = 1925;

    book->year = 1925;
    strncpy(book->title, "The Great Gatsby", 100);
    strncpy(book->author, "F. Scott Fitzgerald", 100);
}
