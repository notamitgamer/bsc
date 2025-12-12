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

/* Write a function that receives integers and returns the sum, average
and standard deviation of these numbers. Call this function from main()
and print the result in main() */
/* Author - Amit Dutta, Date - 23th November, 2025 */
/* Let Us C, Chap - 9, Page 159, Problem 9.1 */

#include <stdio.h>
#include <math.h>

void stats(double *, double *, double *);

int main()
{
    double sum, average, standardDeviation;
    stats(&sum, &average, &standardDeviation);

    printf("\n--- Stats ---"
           "\nSum: %g"
           "\nAverage: %g"
           "\nStandard Deviation: %g",
           sum, average, standardDeviation);
    return 0;
}

void stats(double *sum, double *average, double *standardDeviation)
{
    int n;
    printf("How many numbers you want to give input: ");
    scanf("%d", &n);

    double inputNumber[n];
    int i;

    printf("\n--- Enter Numbers ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &inputNumber[i]);
    }

    double tempSum = 0;
    for (i = 0; i < n; i++)
        tempSum += inputNumber[i];

    double tempAverage = tempSum / n;

    double tempStandardDeviation = 0.0;

    if (n > 1)
    {
        double tempSumation = 0;
        for (i = 0; i < n; i++)
            tempSumation += pow((inputNumber[i] - tempAverage), 2.0);

        tempStandardDeviation = sqrt(tempSumation / (n - 1));
    }

    *sum = tempSum;
    *average = tempAverage;
    *standardDeviation = tempStandardDeviation;
}