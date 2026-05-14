/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 */

/* Write a C program that reads a sequence of integers from a file named 'input.txt'. This
program should segregate the odd numbers from the even numbers and store the odd
numbers in a new file named 'ODDFile.txt' while storing the even numbers in another file
named 'EVENFile.txt' */

#include <stdio.h>

#define FILENAME "input.txt"
#define ODDFILE "ODDFile.txt"
#define EVENFILE "EVENFile.txt"

int main()
{
    FILE *input = NULL;
    FILE *oddfile = NULL;
    FILE *evenfile = NULL;
    int num;

    input = fopen(FILENAME, "r");
    if (input == NULL)
    {
        printf("\nCould not open the file: %s", FILENAME);
        return 1;
    }

    oddfile = fopen(ODDFILE, "w");
    if (oddfile == NULL)
    {
        printf("\nCould not open the file: %s", ODDFILE);
        return 1;
    }

    evenfile = fopen(EVENFILE, "w");
    if (evenfile == NULL)
    {
        printf("\nCould not open the file: %s", EVENFILE);
        return 1;
    }

    while (fscanf(input, "%d", &num) == 1)
    {
        if (num % 2 == 0)
        {
            fprintf(evenfile, "%d ", num);
        }
        else
        {
            fprintf(oddfile, "%d ", num);
        }
    }
    
    printf("Successfully processed numbers from %s.\n", FILENAME);
    printf("Odd numbers written to %s.\n", ODDFILE);
    printf("Even numbers written to %s.\n", EVENFILE);

    fclose(input);
    fclose(oddfile);
    fclose(evenfile);
    
    return 0;
}