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

/* Write a program that counts the number of occurrences of each alphabet (A-Z, a-z) in
the text entered using Command-Line Arguments. */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int target[2], i, j, count[2], len;
    for (target[0] = 'A', target[1] = 'a'; target[0] <= 'Z', target[1] <= 'z'; target[0]++, target[1]++)
    {
        count[0] = 0;
        count[1] = 0;
        for (i = 1; i < argc; i++)
        {
            len = strlen(argv[i]);
            for (j = 0; j < len; j++)
            {
                if (argv[i][j] == target[0])
                {
                    count[0]++;
                }
                if (argv[i][j] == target[1])
                {
                    count[1]++;
                }
            }
        }
        if (count[0])
        {
            printf("\n\"%c\" found %d times.", target[0], count[0]);
        }
        if (count[1])
        {
            printf("\n\"%c\" found %d times.", target[1], count[1]);
        }
    }
    return 0;
}