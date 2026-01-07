/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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