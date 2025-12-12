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

/* WAP to calculate and display the maturity amount
taking the sum and number of days as input.
    No. of Days         Rate of Interest
    Upto 180 days       5.5 %
    181 to 364 days     7.5 %
    exact 365 days      9.0 %
    more than 365 days  8.5 %
*/
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    double nod, amt, s, i;
    printf("Enter the amount and the time in days : ");
    scanf("%lf %lf", &s, &nod);
    if (nod <= 180)
        i = (s * 5.5 * (nod / 365)) / 100;
    else if (nod > 180.0 && nod <= 364.0)
        i = (s * 7.5 * (nod / 365)) / 100;
    else if (nod == 365.0)
        i = (s * 9.0 * 1) / 100;
    else if (nod > 365.0)
        i = (s * 8.5 * (nod / 365)) / 100;
    amt = s + i;
    printf("Amount to be paid : %g", amt);
    return 0;
}