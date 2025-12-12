/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
 */

/* Write a C program that reads a sequence of integers from a file named 'input.txt'. This
program should segregate the odd numbers from the even numbers and store the odd
numbers in a new file named 'ODDFile.txt' while storing the even numbers in another file
named 'EVENFile.txt' */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "input.txt"
#define ODDFILE "ODDFile.txt"
#define EVENFILE "EVENFile.txt"

int main()
{
    FILE *numbers = NULL;
    FILE *oddfile = NULL;
    FILE *evenfile = NULL;
    int num;
    numbers = fopen(FILENAME, "r");
    if (numbers == NULL)
    {
        printf("\nCould not open the file: %s", FILENAME);
        free(numbers);
        return 1;
    }
    oddfile = fopen(ODDFILE, "w");
    if (oddfile == NULL)
    {
        printf("\nCould not open the file: %s", ODDFILE);
        free(oddfile);
        return 1;
    }
    evenfile = fopen(EVENFILE, "w");
    if (evenfile == NULL)
    {
        printf("\nCould not open the file: %s", EVENFILE);
        free(evenfile);
        return 1;
    }
    while (fscanf(numbers, "%d", &num) == 1)
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
    printf("\nSuccessfully processed numbers from %s.\n", FILENAME);
    printf("Odd numbers written to %s.\n", ODDFILE);
    printf("Even numbers written to %s.\n", EVENFILE);

    fclose(numbers);
    fclose(oddfile);
    fclose(evenfile);
    
    return 0;
}