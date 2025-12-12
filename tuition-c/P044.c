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

/* Write a program to input a number and check whether the
number is Pronic number or not.
    Pronic Number: The number which is the product of two numbers
                   which is the product of two consecutive integer.
                   Ex: 20 = 4 * 5
*/
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

// using boolean...
/*
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, iterationIndex;
    bool isPronic = false;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nYou have to enter a number, not an character or symbol.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    for (iterationIndex = 1; iterationIndex <= num / 2; iterationIndex++)
    {
        if (iterationIndex * (iterationIndex + 1) == num)
        {
            printf("\nInput %d is a Pronic Number.", num);
            isPronic = true;
            break;
        }
    }
    if(!isPronic)
    {
        printf("\nInput %d is not a Pronic Number.", num);
    }
    return 0;
}
*/

// using direct return method (more efficient and generally preferred)...

#include <stdio.h>
#include <math.h>

int main()
{
    int num, iterationIndex, iterationLimit;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nYou have to enter a number, not an character or symbol.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    iterationLimit = (int)sqrt(num);
    for (iterationIndex = 1; iterationIndex <= iterationLimit; iterationIndex++)
    {
        if (iterationIndex * (iterationIndex + 1) == num)
        {
            printf("\nInput %d is a Pronic Number.", num);
            return 0;
        }
    }
    printf("\nInput %d is not a Pronic Number.", num);
    return 0;
}