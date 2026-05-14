/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 31 Mar 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a c program that records book data from user and stores them in to a file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define FILENAME "Library.txt"

typedef struct Book
{
    int id;
    char title[20];
    char author[20];
}Book;

void dataInput(Book *, int);
void displayData(Book *, int);
bool writeLog(Book *, int);

int main()
{
    Book book[3];
    int choice;

    printf("== Enter the data ==");
    dataInput(book, 3);
    printf("\n\n Data enetered by the user ==");
    displayData(book, 3);
    
    if (writeLog(book, 3))
    {
        printf("\n\nSuccessfully written the log into \"%s\"", FILENAME);
        return 0;
    } else
    {
        printf("\nError writing log.");
        return 1;
    }
}

void dataInput(Book *book, int n)
{
    int i;
    char *p;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Book ID: ");
        if (scanf("%d", &book[i].id) != 1)
        {
            printf("\nError reading bookID.");
            exit(1);
        }
        while (getchar() != '\n')
            ;

        printf("Enter the Book Title: ");
        if (fgets(book[i].title, sizeof(book[i].title), stdin) == NULL)
        {
            printf("\nError reading title.");
            exit(1);
        }
        p = strchr(book[i].title, '\n');
        if (p)
            *p = '\0';

        printf("Enter the Book Author: ");
        if (fgets(book[i].author, sizeof(book[i].author), stdin) == NULL)
        {
            printf("\nError reading Author.");
            exit(1);
        }
        p = strchr(book[i].author, '\n');
        if (p)
            *p = '\0';
    }
}

void displayData(Book *book, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n\nBook ID: %d"
               "\nBook Title: %s"
               "\nBook Author: %s",
               book[i].id, book[i].title, book[i].author);
    }
}

bool writeLog(Book *book, int n)
{
    int i;
    FILE *output = NULL;
    output = fopen(FILENAME, "w");
    if (output == NULL)
    {
        printf("\n\nError writing file \"%s\"", FILENAME);
        return false;
    }
    for (i = 0; i < n; i++)
    {
        fprintf(output, "%d \'%s\' \'%s\'\n", book[i].id, book[i].title, book[i].author
    }
    fclose(output);
    return true;
}
