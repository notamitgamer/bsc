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

/* If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(b) */

#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Please enter the age of Ram, Shyam and Ajay : ");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram == shyam || ram == ajay || shyam == ajay)
        printf("\nThree must have different age.");
    if (ram < shyam && ram < ajay)
        printf("\nRam is the youngest. Age : %d", ram);
    if (shyam < ram && shyam < ajay)
        printf("\nShyam is the youngest. Age : %d", shyam);
    if (ajay < ram && ajay < shyam)
        printf("\nAjay is the youngest. Age : %d", ajay);
    return 0;
}