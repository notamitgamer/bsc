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

/* Armstrong number check only for three digit */
/* Author - Amit Dutta, Date - 03rd NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int num, temp1, armstrongCheck = 0;
    printf("Enter a three digit number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly positive number allowed.");
        return 1;
    }
    if (num < 100 || num > 999)
    {
        printf("\nOnly Three digit postive number allowed.");
        return 1;
    }
    temp1 = num;
    while (temp1 > 0)
    {
        armstrongCheck += (temp1 % 10) * (temp1 % 10) * (temp1 % 10);
        temp1 /= 10;
    }
    if (armstrongCheck == num)
        printf("\nInput %d is a armstrong number.", num);
    else
        printf("\nInput %d is not a armstrong number.", num);
    return 0;
}