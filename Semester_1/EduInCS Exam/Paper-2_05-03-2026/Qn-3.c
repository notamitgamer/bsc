/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Mar 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 */

/* Write a program to search an element from an array using linear
search technique using malloc() and free() for memory allocation
and deallocation. */

#include <stdio.h>
#include <stdlib.h>

int inputArray(int[], int);
int linearSearch(int[], int, int);

int main()
{
    int size, *arr = NULL;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed! Exiting...\n");
        return 1;
    }
    int target = inputArray(arr, size);
    int index = linearSearch(arr, size, target);
    if (index != -1)
    {
        printf("\nElement %d is found at index %d.", target, index);
    }
    else
    {
        printf("\nElement %d is not found.", target);
    }
    free(arr);
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

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}