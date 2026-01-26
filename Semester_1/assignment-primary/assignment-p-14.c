/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a C program that opens its own source code file, reads its contents, and then prints
the contents to the console. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *code;
    int character, len_upto_dot;
    char *FILENAME;
    char *dot;

    FILENAME = strdup(argv[0]);

    if (FILENAME == NULL)
    {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    dot = strrchr(FILENAME, '.');

    if (dot != NULL)
    {
        len_upto_dot = dot - FILENAME;
        FILENAME[len_upto_dot] = '\0';
    }

    strcat(FILENAME, ".c");

    code = fopen(FILENAME, "r");

    if (code == NULL)
    {
        printf("\nCould not open the source file: %s", FILENAME);
        printf("\nPlease ensure the source file is in the same directory as the executable.\n");
        free(FILENAME);
        return 1;
    }

    printf("\nReading file: %s", FILENAME);
    printf("\n========== %s ==========\n\n", FILENAME);

    while ((character = fgetc(code)) != EOF)
    {
        putchar(character);
    }

    printf("\n\n========== End of %s ==========\n", FILENAME);

    fclose(code);
    free(FILENAME);

    return 0;
}