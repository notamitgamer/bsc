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

/* Write a fuction to calculate the average of an array */
/* Author: Amit Dutta, Date: 26-11-2025 */

#include <stdio.h>

double average(int []);

int main()
{
    int marks[10], i;
    printf("\nEnter 10 numbers: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nAverage = %g", average(marks));
    return 0;
}

double average(int marks[10])
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
        sum += marks[i];
    return sum / 10.0;
}
