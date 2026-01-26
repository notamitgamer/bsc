/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 13 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* write a C program to count the occurrences of a given element in an array using a user-defined
function. Create a function int count_occurrences(int arr[], int n, int target) that countts how
many times target appears in the array. */

#include <stdio.h>

int count_occurrences(int[], int, int);
void inputarr(int[], int);

int main()
{
    int n, arr[20], target, found;
    printf("Enter the n (Max: 20): ");
    scanf("%d", &n);
    inputarr(arr, n);
    printf("Enter the target: ");
    scanf("%d", &target);
    found = count_occurrences(arr, n, target);
    if (found)
    {
        printf("\n%d found %d times.", target, found);
    }
    else
    {
        printf("\n%d is not found.", target);
    }
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int count_occurrences(int arr[], int n, int target)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}