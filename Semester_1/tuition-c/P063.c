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

/* Write a C program to find all Niven in an array. Define a user-defined function int isNiven(int num)
that returns 1 if the numbers is a Niven number, otherwise returns 0. A Niven number (also known as a
Harshad Number) is an integer that is divisible by the sum of its digits. */

#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
int isNiven(int);

int main()
{
    int n, *arr, i;
    printf("How many element do you want to enter: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    inputarr(arr, n);
    for (i = 0; i < n; i++)
    {
        if (isNiven(arr[i]))
        {
            printf("\n%d is a Niven number.", arr[i]);
        }
        else
        {
            printf("\n%d is a NOT Niven number.", arr[i]);
        }
    }
    free(arr);
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int isNiven(int num)
{
    int i, sum = 0, temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}