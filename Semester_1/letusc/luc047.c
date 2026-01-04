/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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