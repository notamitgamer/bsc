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

/* Write a C program that defines an array of integers, and includes a user-defined function
named reverseArray with the signature void reverseArray(int arr[], int size);. The function
should reverse the elements of the array. */

#include <stdio.h>

void inputArray(int[], int);
void reverseArray(int[], int);

int main()
{
    int size;
    printf("How many element do you want to add: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    reverseArray(arr, size);
    return 0;
}

void inputArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void reverseArray(int arr[], int size)
{
    int i, j, temp;
    printf("\nBefore Reverse: \n");
    for (i = 0; i < size; i++)
    {
        printf("Position: %d, Value: %d\n", i, arr[i]);
    }
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\nAfter Reverse: \n");
    for (i = 0; i < size; i++)
    {
        printf("Position: %d, Value: %d\n", i, arr[i]);
    }
}