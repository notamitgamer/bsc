/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
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