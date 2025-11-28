/* Write a C program that includes a user-defined function named findLargest with the
signature int findLargest(int arr[], int size);. The function should take an array of integers
and its size, and return the largest element in the array. */

#include <stdio.h>

void inputArray(int[], int);
int findLargest(int[], int);

int main()
{
    int size;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    printf("\nLargest Element is: %d", findLargest(arr, size));
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

int findLargest(int arr[], int size)
{
    int largest = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}