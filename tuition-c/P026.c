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

/* WAP to input sum (p), rate of interest (r), time (t) and type of interest
('s' for simple interest amd 'c' for compound interest). Calculate and display
the interest earned
    si = (p * r * t) / 100
    compoundInterest = p * ((1 + r / 100)^t - 1)
*/
/* Author - Amit Dutta, Date - 8th OCT, 2025 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double principalAmount, rateOfInterest, timePeriod, simpleInterest, compoundInterest;
    char mode;
    printf("Enter the principle amount, Rate of interest, Time : ");
    scanf("%lf %lf %lf", &principalAmount, &rateOfInterest, &timePeriod);
    printf("\nEnter the mode ('s' : simple interest, 'c' : compound interest) : ");
    scanf(" %c", &mode);
    mode = tolower(mode);
    switch (mode)
    {
    case 's':
        simpleInterest = (principalAmount * rateOfInterest * timePeriod) / 100;
        printf("\nSimple Interest : %g", simpleInterest);
        break;
    case 'c':
        compoundInterest = principalAmount * (pow((1 + rateOfInterest / 100), timePeriod) - 1);
        printf("\nCompound Interest : %g", compoundInterest);
        break;
    default:
        printf("\nInvalid Input");
        return 1;
    }
    return 0;
}