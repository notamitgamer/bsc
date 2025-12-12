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

/* A position integer is entered through the keyboard. Write a Function
to obtain the prime factors of this number. 
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
factors of 35 are 5 and 7
*/
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap- 8, Page - 144, Qn No.: C(2) */

#include <stdio.h>
#include <math.h>

void findPrimeFactors(int n)
{
    int temp_n = n;

    if (temp_n == 1)
    {
        printf("Prime factors of %d are: None.\n", n);
        return;
    }

    printf("Prime factors of %d are:", n);

    while (temp_n % 2 == 0)
    {
        printf(" %d", 2);
        temp_n = temp_n / 2;
    }

    for (int i = 3; i <= (int)sqrt(temp_n); i = i + 2)
    {
        while (temp_n % i == 0)
        {
            printf(" %d", i);
            temp_n = temp_n / i;
        }
    }

    if (temp_n > 2)
    {
        printf(" %d", temp_n);
    }

    printf("\n");
}

int main()
{
    int n;
    printf("Enter a positive integer to get the prime factors: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (n <= 0)
    {
        printf("Error: Please enter a POSITIVE integer.\n");
        return 1;
    }
    findPrimeFactors(n);
    return 0;
}