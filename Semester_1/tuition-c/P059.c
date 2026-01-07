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

/* Write a program to find the sum of array elements using following fuctions
    int array_sum(int a[], int n);
    void get_data(int a[], int n);
    voidd dispaly(int a[], int n);
*/
/* Author - Amit Dutta, Date - 29th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int array_sum(int[], int);
void get_data(int[], int);
void display(int[], int);

int main()
{
    int size, arr[20];
    printf("How many element do you want to add (Max: 20): ");
    scanf("%d", &size);
    if (size < 1 && size > 20)
    {
        printf("\nMax Element count is 20.");
        return 1;
    }
    get_data(arr, size);
    display(arr, size);
    printf("\nSum of the elements is: %d", array_sum(arr, size));
    return 0;
}

void get_data(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element for position %d: ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    int i;
    printf("\nArray: [");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");
}

int array_sum(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}