/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to copy the contents of a text file to another file, after removing all
white spaces (spaces, tabs, newlines). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEW_FILE_PREFIX "cleaned_"

int cleaning(FILE *);

int main()
{
    char filename[50];
    char *newFilename = NULL;
    FILE *givenFile = NULL;
    FILE *cleanedFile = NULL;
    int len, temp;

    printf("Enter the filename (Max: 50 character): ");
    fgets(filename, sizeof(filename), stdin);
    len = strlen(filename);
    if (filename[len - 1] == '\n')
    {
        filename[len - 1] = '\0';
    }

    givenFile = fopen(filename, "r");
    if (givenFile == NULL)
    {
        printf("\nCouldn't opened the file \"%s\""
               "\nPlease ensure that \"%s\" is in the same folder.",
               filename, filename);
        return 1;
    }

    len += strlen(NEW_FILE_PREFIX);
    newFilename = (char *)malloc((len + 1) * sizeof(char));
    if (newFilename == NULL)
    {
        printf("\nMemory allocation failed.");
        fclose(givenFile);
        return 1;
    }
    newFilename[0] = '\0';
    strcat(newFilename, NEW_FILE_PREFIX);
    strcat(newFilename, filename);

    cleanedFile = fopen(newFilename, "w");
    if (cleanedFile == NULL)
    {
        printf("\nCUnable to create the file \"%s\"", newFilename);
        free(newFilename);
        return 1;
    }

    while ((temp = fgetc(givenFile)) != EOF)
    {
        if (temp != ' ' && temp != '\n' && temp != '\t')
        {
            fputc(temp, cleanedFile);
        }
    }

    printf("\nSuccessfully cleaned: \"%s\"", filename);
    printf("\nGenerated file: \"%s\"", newFilename);

    fclose(givenFile);
    fclose(cleanedFile);
    free(newFilename);

    return 0;
}