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

/* Define a function that receives weight of a commodity in kilograms
and returns the equivalent weight in Grams, Tons and pounds. Call
this fuction from main() and print the results in main()
*/
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap- 9, Page - 163, Qn No.: C(b) */

#include <stdio.h>

void convertWeight(double, double *, double *, double *);

int main()
{
    double weightGram, weightPound, weightKG, weightTON;
    printf("Enter the weight of the comodity in Kilogram(s): ");
    scanf("%lf", &weightKG);

    convertWeight(weightKG, &weightGram, &weightPound, &weightTON);
    printf("\n%g Kilogram(s) = %.04f Gram(s)"
           "\n%g Kilogram(s) = %.04f Pound(s)"
           "\n%g Kilogram(s) = %.04f TON(s)",
           weightKG, weightGram, weightKG, weightPound, weightKG, weightTON);
    return 0;
}

void convertWeight(double weightKG, double *weightGram, double *weightPound, double *weightTON)
{
    *weightGram = weightKG * 1000.0;
    *weightPound = weightKG * 2.2046226218;
    *weightTON = weightKG / 1000.0;
}