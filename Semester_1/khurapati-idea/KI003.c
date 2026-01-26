/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 24 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Bubble sort (with swap) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inputarr(int **, int);
void display(int[], int);
int asort(int *, int);
int dsort(int *, int);

int main()
{
    int *arr = NULL, n, choice;
    do
    {
        printf("\nEnter element count: ");
        if (scanf("%d", &n) != 1 || n < 1)
        {
            printf("\nERROR: Invalid element count!!! Try again...");
        }
        else
        {
            break;
        }
    } while (true);
    inputarr(&arr, n);

    while (true)
    {
        printf("\n1. Sort in Ascending Order."
               "\n2. Sort in Descending Order"
               "\n3. Change Input"
               "\n0. Exit"
               "\nYour choice: ");
        do
        {
            if (scanf("%d", &choice) != 1)
            {
                printf("\nInvalid Choice!!! Try again...");
                while (getchar() != '\n')
                    ;
            }
            else
            {
                break;
            }
        } while (true);

        switch (choice)
        {
        case 1:
            printf("\n === Selected Mode: Ascending Order ===\n");
            if (!asort(arr, n))
            {
                printf("\nElements are already sorted.\n");
                display(arr, n);
            }
            printf("\n");
            break;
        case 2:
            printf("\n === Selected Mode: Descending Order ===\n");
            if (!dsort(arr, n))
            {
                printf("\nElements are already sorted.\n");
                display(arr, n);
            }
            printf("\n");
            break;
        case 3:
            do
            {
                printf("\nEnter element count: ");
                if (scanf("%d", &n) != 1 || n < 1)
                {
                    printf("\nERROR: Invalid element count!!! Try again...");
                }
                else
                {
                    break;
                }
            } while (true);
            free(arr);
            inputarr(&arr, n);
            break;
        case 0:
            printf("\nExiting Program...\n");
            free(arr);
            return 0;
        default:
            printf("\nInvalid Choice!!! Try again...");
        }
    }
}

void inputarr(int **arr, int n)
{
    int i;
    if (n < 1)
    {
        printf("\nInvalid element number.");
        return;
    }
    *arr = (int *)malloc(n * sizeof(int));
    if (*arr == NULL)
    {
        printf("\nERROR: Memory Allocation falied.\nExiting Program...\n");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &((*arr)[i]));
    }
}

void display(int arr[], int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}

int asort(int *arr, int n)
{
    bool isSwaped = true;
    int i, j, tempNum, swapCount = 0;
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("\nERROR: Memory Allocation falied.\nExiting Program...\n");
        free(arr);
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        temp[i] = *(arr + i);
    }
    for (i = 0; i < n - 1 && isSwaped == true; i++)
    {
        isSwaped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                tempNum = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tempNum;
                isSwaped = true;
                swapCount++;
            }
        }
    }
    if (swapCount > 0)
    {
        display(temp, n);
    }
    free(temp);
    return swapCount;
}

int dsort(int *arr, int n)
{
    bool isSwaped = true;
    int i, j, tempNum, swapCount = 0;
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("\nERROR: Memory Allocation falied.\nExiting Program...\n");
        free(arr);
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        temp[i] = *(arr + i);
    }
    for (i = 0; i < n - 1 && isSwaped == true; i++)
    {
        isSwaped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (temp[j] < temp[j + 1])
            {
                tempNum = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tempNum;
                isSwaped = true;
                swapCount++;
            }
        }
    }
    if (swapCount > 0)
    {
        display(temp, n);
    }
    free(temp);
    return swapCount;
}