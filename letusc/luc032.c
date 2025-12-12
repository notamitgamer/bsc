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

/* Write a program to recieve an integer and find its octal equivalent.
(Hint : To obtain octal equivalent of an integer, Divide it continuously
by 8 till dividend does not become zero, then write the remainders
obtained in reverse derection.) */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(e) */

// using array

#include <stdio.h>
int main()
{
    int octal[20], decimal, index = 0, temp, rem;
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    temp = decimal;
    while (temp != 0)
    {
        rem = temp % 8;
        temp = temp / 8;
        octal[index] = rem;
        index++;
    }
    printf("\nDeciaml %d to octal : ", decimal);
    while ((index - 1) >= 0)
    {
        printf("%d", octal[index - 1]);
        index--;
    }
    return 0;
}