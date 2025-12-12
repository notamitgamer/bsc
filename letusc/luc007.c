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

/* Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and is
calculated as per the following formula.
    wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16
Where t is temperature and v is wind velocity. Write a program to receive
values of t and v and calcualate wind-chill factor (wcf). */
/* Author - Amit Dutta, Date - 30th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(d) */

#include <stdio.h>
#include <math.h>
int main()
{
    double t, v, wcf;
    printf("Enter the temperature and velociy of the wind : ");
    scanf("%lf %lf", &t, &v);
    wcf = 35.74 + (0.6215 * t) + (((0.4275 * t) - 35.75) * pow(v, 0.16));
    printf("\nWind-chill factor (wcf) : %g", wcf);
    return 0;
}