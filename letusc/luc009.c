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

/* Two numbers are input through the keyboard into two locations
C and D. Write a program to interchange the contents of C and D. */
/* Author - Amit Dutta, Date - 30th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(d) */

#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter the two number A and B : ");
    scanf("%lf %lf", &a, &b);
    printf("\nBefore Interchange : ");
    printf("\nA = %g (Memory location = %p)", a, &a);
    printf("\nB = %g (Memory location = %p)", b, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Interchange :");
    printf("\nA = %g (Memory location = %p)", a, &a);
    printf("\nB = %g (Memory location = %p)", b, &b);
    return 0;
}