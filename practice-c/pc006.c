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

/* Prime number check */
/* Author - Amit Dutta, Date - 03rd NOVEMBER, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, temp;
    printf("Enter the number : ");
    if(scanf("%d", &num) != 1) {
        printf("Only postive number allowed.");
        return 1;
    }
    if(num <= 0) {
        printf("\nOnly potive number are allowed.");
        return 1;
    }
    if(num == 1) {
        printf("\nInput 1 is not a prime number.");
        return 0;
    }
    if(num == 2) {
        printf("\nInput 2 is a prime number.");
        return 0;
    }
    if(num % 2 == 0) {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    temp = (int)sqrt(num);
    for (i = 3; i <= temp; i += 2)
    {
        if (num % i == 0)
        {
            printf("\nInput %d is not a prime number.", num);
            return 0;
        }
    }
    printf("\nInput %d is a prime number.", num);
    return 0;
}