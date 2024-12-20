// Program to demonstrate the use of struct keyword (and structures)

#include <stdio.h>

// Defining a structure
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// main function
int main()
{
    // Declara book1 of type struct Books
    struct Books book1;

    // book1 specification
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    // Print book1 information
    printf("Book 1 title: %s\n", book1.title);
    printf("Book 1 author: %s\n", book1.author);
    printf("Book 1 subject: %s\n", book1.subject);
    printf("Book 1 book_id: %d\n", book1.book_id);

    return 0;
}