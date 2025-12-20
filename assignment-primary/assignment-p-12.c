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

/* Write a C program that takes multiple integers as command-line arguments and finds the
maximum and minimum value among them. */

#include <stdio.h>
#include <stdlib.h>

// use atoi()

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    char *endptr;
    long first_arg_val;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    first_arg_val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || argv[1] == endptr)
    {
        printf("Error: Argument '%s' is not a valid integer.\n", argv[1]);
        return 1;
    }
    max_val = (int)first_arg_val;
    min_val = (int)first_arg_val;
    for (i = 2; i < argc; i++)
    {
        long val = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || argv[i] == endptr)
        {
            printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
            return 1;
        }
        current_val = (int)val;
        if (current_val > max_val)
        {
            max_val = current_val;
        }
        if (current_val < min_val)
        {
            min_val = current_val;
        }
    }
    printf("The maximum value is: %d\n", max_val);
    printf("The minimum value is: %d\n", min_val);
    return 0;
}