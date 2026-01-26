/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 21 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a program to merge two sorted integer arrays to form a single sorted array. */

#include <stdio.h>
#include <stdlib.h>

void merge(int[], int, int[], int);

int main()
{
    int a[] = {10, 30, 50, 70, 90};
    int b[] = {20, 40, 60, 80, 100};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    merge(a, n1, b, n2);
    return 0;
}

void merge(int a[], int n1, int b[], int n2)
{
    int n = n1 + n2;
    int *c = (int *)malloc(n * sizeof(int));
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        c[k++] = a[i++];
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }
    printf("Merged Array:");
    for (i = 0; i < n; i++)
    {
        printf("  %d", c[i]);
    }
    free(c);
}