/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 29 Mar 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a C program that defines a structure named Book with attributes bookID (int),
title (string), and price (float). Include a user-defined function named updatePrice
with the signature: void updatePrice(struct Book *b, float newPrice);
 The program should:
 * Accept details for one book from the user.
 * Display the details before the update.
 * Use the function to update the price of the book.
 * Display the updated details.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book
{
    int bookID;
    float price;
    char title[20];
} Book;

void acceptDetails(Book *);
void displayDetails(Book *);
void updatePrice(struct Book *, float);

int main()
{
    Book book1;
    float newPrice;
    acceptDetails(&book1);
    displayDetails(&book1);
    printf("\n\nEnter the updated price: ");
    if (scanf("%f", &newPrice) != 1)
    {
        printf("\nInvalid Price!");
        exit(1);
    }
    updatePrice(&book1, newPrice);
    displayDetails(&book1);
    return 0;
}

void acceptDetails(Book *book)
{
    char *p;
    printf("\n== Enter details for the book ==\n");
    printf("Enter Book ID:    ");
    if (scanf("%d", &book->bookID) != 1)
    {
        printf("\nInvalid Book ID!");
        exit(1);
    }
    while (getchar() != '\n')
        ;
    printf("Enter Book Title: ");
    if (fgets(book->title, sizeof(book->title), stdin) == NULL)
    {
        printf("\nError reading input!");
        exit(1);
    }
    p = strchr(book->title, '\n');
    if (p)
        *p = '\0';
    printf("Enter Price:      ");
    if (scanf("%f", &book->price) != 1)
    {
        printf("\nInvalid Price!");
        exit(1);
    }
}

void displayDetails(Book *book)
{
    printf("\n== Details of the Book ==");
    printf("\nBook ID:    %d", book->bookID);
    printf("\nBook Title: %s", book->title);
    printf("\nBook Price: %g", book->price);
}

void updatePrice(struct Book *book, float newPrice)
{
    book->price = newPrice;
}