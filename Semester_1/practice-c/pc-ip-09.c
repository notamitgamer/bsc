/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*
 * Question 9:
 * Write a program to find the sum of n elements entered by the user. Use dynamic memory allocation (malloc() or calloc()).
 */

#include <stdio.h>
#include <stdlib.h>

void inputArray(double[], int);
void printArray(double[], int);
double sum(double[], int);

int main()
{
    int n;
    double *arr = NULL;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL)
    {
        printf("\nMemory allocation failed.");
        return 1;
    }
    inputArray(arr, n);
    printf("\nGiven Array: ");
    printArray(arr, n);
    printf("\nSum of the elements of the array: %g", sum(arr, n));
    free(arr);
    return 0;
}

void inputArray(double arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

void printArray(double arr[], int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%g", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}

double sum(double arr[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}