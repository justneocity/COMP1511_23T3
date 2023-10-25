#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct book with fields title author and year
struct book {
    char title[100];
    char author[100];
    int year;
};

void modify_book(struct book *book);

int main() {
    // decalre a book variable of type struct book
    struct book book;

    // initialise struct fields 
    // using strcpy since you cannot directly assign strings (as they are arrays)
    // strcpy basically goes through char array and copies each character
    strcpy(book.title, "To Kill a Mockingbird");
    strcpy(book.author, "Harper Lee");
    book.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    // update book
    modify_book(&book);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    return 0;
}

void modify_book(struct book *book) {
    // *book.year <-- is the same as --> *(book.year) 
    // CORRECT IS: (*book).year
    (*book).year = 1925; 
    strcpy(book->title, "The Great Gatsby");
    strcpy(book->author, "F. Scott Fitzgerald");
}