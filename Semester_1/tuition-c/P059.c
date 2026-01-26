/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a program to find the sum of array elements using following fuctions
    int array_sum(int a[], int n);
    void get_data(int a[], int n);
    void dispaly(int a[], int n);
*/

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