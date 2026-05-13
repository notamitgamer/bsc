# `pc-ip-09.c`

## Problem Statement
!!!
Question 9: Write a program to find the sum of n elements entered by the user. Use dynamic memory allocation (malloc() or calloc()).
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-09.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-09.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
```
