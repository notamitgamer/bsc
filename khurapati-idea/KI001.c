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

// khurapati idea no. : 1
// Idea : we can use the side effect of printf function to get length of any string or number
// Author - Amit Dutta, Date - 16-10-2025

#include <stdio.h>
int main()
{
    // testing number
    int num, len = -13 /* here minus 13 because we will remove the massage characters in line 10 */;
    printf("Enter a number to get the length : ");
    scanf("%d", &num);
    len += printf("Your input : %d", num); // here the "Your input : ", this 13 characters are extra
    printf("\nLength : %d", len);

    // testing char
    char a[20];
    len = -13;
    while (getchar() != '\n')
        ;
    printf("\nEnter a word to get the length : ");
    scanf("%19s", &a);
    len += printf("Your input : %s", a);  // here the "Your input : ", this 13 characters are extra
    printf("\nLength : %d", len);
    return 0;
}