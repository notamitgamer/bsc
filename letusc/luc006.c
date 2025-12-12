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

/* Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the distance
(D) between them in nautical miles. The formula for distance in nautical
miles is :
    D = 3963 cos^-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2 - G1))
*/
/* Author - Amit Dutta, Date - 29th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn no.: G(c) */

#include <stdio.h>
#include <math.h>
int main()
{
    double l1, l2, g1, g2, d;
    printf("Enter the Latitude in 'L1, L2' format : ");
    scanf("%lf, %lf", &l1, &l2);
    printf("Enter the Longitude in 'G1, G2' format : ");
    scanf("%lf, %lf", &g1, &g2);
    // Converting degree to radian because function from math.h use radian not degree
    l1 = l1 * (M_PI / 180);
    l2 = l2 * (M_PI / 180);
    g1 = g1 * (M_PI / 180);
    g2 = g2 * (M_PI / 180);
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance in nautical miles : %g", d);
    return 0;
}