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

/* Write a function that reverses the elements of an array in place, using only a single
pointer argument, and return void. */

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int *arr;
};

void inputarr(int[], int);
void display(int[], int);
void reverse(struct Array *);

int main()
{
    struct Array array;
    printf("How many element do you want to add: ");
    scanf("%d", &array.size);
    array.arr = (int *)malloc((array.size) * sizeof(int));
    inputarr(array.arr, array.size);
    printf("\n=== Before Reverse ===\n");
    display(array.arr, array.size);
    reverse(&array);
    printf("\n\n=== After Reverse ===\n");
    display(array.arr, array.size);
    free(array.arr);
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

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nIndex: %-2d | Value: %-5d | Address: %p", i, arr[i], (void *)&arr[i]);
    }
}

void reverse(struct Array *array)
{
    int *start = array->arr;
    int *end = array->arr + (array->size - 1);
    while (start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
}