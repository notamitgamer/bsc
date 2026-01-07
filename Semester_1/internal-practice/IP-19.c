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

/* Write a C program that includes a user-defined function named binarySearch with the
signature int binarySearch(int arr[], int size, int target);. The function should perform a
binary search on a sorted array of integers and return the index of the target element if
found, and -1 otherwise. */

#include <stdio.h>

int inputArray(int[], int);
// void sortArray(int[], int);
int binarySearch(int[], int, int);

int main()
{
    int size;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    int arr[size];
    int target = inputArray(arr, size);
    // sortArray(arr, size); // If needed
    int index = binarySearch(arr, size, target);
    if (index != -1)
    {
        printf("\nElement %d is found at index %d.", target, index);
    }
    else
    {
        printf("\nElement %d is not found.", target);
    }
    return 0;
}

int inputArray(int arr[], int size)
{
    int i, target;
    for (i = 0; i < size; i++)
    {
        printf("Enter element for position %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the target element: ");
    scanf("%d", &target);
    return target;
}

/* void sortArray(int arr[], int size)
{    
    // using Bubble Sort...

    int tempArr[size], i, j, temp;
    printf("\nBefore Sorting:\n[");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nAfter Sorting:\n[");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
*/

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
    }
    return -1;
}