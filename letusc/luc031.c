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

/* Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(d) */

#include <stdio.h>
int main()
{
    int choice = 1, num, positive_count = 0, negative_count = 0, zero_count = 0;
    while (choice == 1)
    {
        printf("\nEnter the number (Type any character and press Enter to finish.) : ");
        choice = scanf("%d", &num); // Checking whether the user has input any characters
        if (choice == 1)
        {
            printf("Number recorded : %d", num);
            if (num < 0)
                negative_count++;
            else if (num > 0)
                positive_count++;
            else if (num == 0)
                zero_count++;
        }
        else 
        {
        // If the user inputs any characters, then choice = 0, it means he doesn't want to give any more input;
            choice = 0;
            printf("\nCharacter received. Stopping input...\n");
        }
    }
    // Display the final results
    printf("\n====================================\n");
    printf("   Analysis Complete\n");
    printf("====================================\n");
    printf("Positive numbers entered: %d\n", positive_count);
    printf("Negative numbers entered: %d\n", negative_count);
    printf("Zeroes entered:           %d\n", zero_count);
    printf("Total numbers recorded:   %d\n", positive_count + negative_count + zero_count);
    printf("====================================\n");
}