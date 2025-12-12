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

/* Write a program to input a new element at a specific position of an array.
    a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3
*/
/* Author: Amit Dutta, Date: 18-11-2025 */

#include <stdio.h>

int main()
{
    int a[8] = {4, 5, 2, 10, 6, 9, 8};
    int i;

    printf("Elemnts of the array:  ");
    for (i = 0; i <= 6; i++)
        printf("%d  ", a[i]);

    printf("\nMethod 1:  ");
    for (i = 7; i >= 4; i--)
        a[i] = a[i - 1];
    a[3] = 7;
    for (i = 0; i <= 7; i++)
        printf("%d  ", a[i]);

    // another method
    printf("\nMethod 2:  ");
    int b[8] = {4, 5, 2, 10, 6, 9, 8};
    int temp1 = 7;
    for (i = 3; i <= 7; i++)
    {
        int temp2 = b[i];
        b[i] = temp1;
        temp1 = temp2;
    }
    for (i = 0; i <= 7; i++)
        printf("%d  ", b[i]);

    return 0;
}