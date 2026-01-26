/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(f) */

#include <stdio.h>
int main()
{
    int choice = 1, set_of_numbers[30], num, index = -1;
    while (choice == 1)
    {
        printf("\nEnter the number (Type any character and press Enter to finish.) : ");
        choice = scanf("%d", &num); // Checking whether the user has input any characters
        if (choice != 1)
        {
            // If the user inputs any characters, then choice = 0, it means he doesn't want to give any more input;
            choice = 0;
            printf("\nCharacter received. Stopping input...\n");
            break;
        }
        index++;
        set_of_numbers[index] = num;
    }
    int max = set_of_numbers[0], min = set_of_numbers[0];
    while (index >= 0)
    {
        if (max < set_of_numbers[index])
            max = set_of_numbers[index];
        if (min > set_of_numbers[index])
            min = set_of_numbers[index];
        index--;
    }
    int range = max - min;
    printf("\nBiggest number in the set  : %d", max);
    printf("\nSmallest number in the set : %d", min);
    printf("\nRange : %d", range);
    return 0;
}