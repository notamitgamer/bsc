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

/* WAP to input the distance covered and calculate
the amount to be paid by the passanger.
    Distance        Rate
    =<5KM           RS 90
    next 10KM       RS 20/KM
    next 10KM       RS 10/KM
    more than 25KM  RS 9/KM
*/
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    double dis, amt;
    printf("Enter the distance : ");
    scanf("%lf", &dis);
    if (dis <= 5.0)
        amt = 90.0;
    else if (dis > 5.0 && dis <= 15.0)
        amt = 90.0 + (dis - 5.0) * 20;
    else if (dis > 15.0 && dis <= 25.0)
        amt = 90.0 + 200.0 + (dis - 15.0) * 10;
    else if (dis > 25.0)
        amt = 90.0 + 200.0 + 100.0 + (dis - 25.0) * 9;
    printf("\nAmount to be paid : %g", amt);
    return 0;
}