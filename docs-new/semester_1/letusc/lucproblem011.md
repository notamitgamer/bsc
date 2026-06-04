---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem011.c'
description: 'Write a menu driven program which has following options : 1. Factorial of a number 2. Prime or not 3. Odd or even 4. Exit Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the ''Exit'' option the program should continue work.'
---

# lucproblem011.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a menu driven program which has following options : 1. Factorial of a number 2. Prime or not 3. Odd or even 4. Exit Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the 'Exit' option the program should continue work.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem011.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem011.c)

```c [lucproblem011.c]
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to clear the input buffer after scanf to prevent issues in the next input.
void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// Calculates the factorial of the input number.
void factorial(int num)
{
    // Factorial is not defined for negative numbers.
    if (num < 0)
    {
        printf("\nFactorial is not defined for negative numbers.");
        return;
    }
    // Checks for input over 20 to prevent long long integer overflow (20! is max safe).
    if (num > 20)
    {
        printf("\nFactorial of %d is too large to calculate (max safe integer factorial is 20!).", num);
        return;
    }
    long long fact = 1;
    // Calculate factorial iteratively.
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("\nFactorial of %d = %lld", num, fact);
    return;
}

// Checks if the input number is a prime number.
void prime(int num)
{
    // Handle special cases: 1 and 2.
    if (num == 1)
    {
        printf("\nInput 1 is NOT a PRIME NUMBER.");
        return;
    }
    else if (num == 2)
    {
        printf("\nInput 2 is a PRIME NUMBER. (Fact : 2 is only even prime number)");
        return;
    }
    // Exclude all other even numbers.
    if (num % 2 == 0)
    {
        printf("\nInput %d is NOT a PRIME NUMBER.", num);
        return;
    }
    // Optimization: Only check divisors up to the square root of num.
    int endCheckDigit = sqrt(num);
    bool isPrime = true;
    // Check only odd divisors (i += 2) starting from 3.
    for (int i = 3; i <= endCheckDigit; i += 2)
    {
        if (num % i == 0)
        {
            printf("\nInput %d is NOT a PRIME NUMBER.", num);
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        printf("\nInput %d is a PRIME NUMBER.", num);
        return;
    }
}

// Checks if the input number is odd or even.
void oddoreven(int num)
{
    // A number is even if it is perfectly divisible by 2.
    if (num % 2 == 0)
    {
        printf("\nInput %d is a EVEN NUMBER.", num);
        return;
    }
    else
    {
        printf("\nInput %d is a ODD NUMBER.", num);
        return;
    }
}

// Main function: displays the menu and controls program flow.
int main()
{
    int choice, num;
    // Infinite loop ensures the menu reappears after every operation until 'Exit' is chosen.
    while (1)
    {
        // Display menu options.
        printf("\n\n===== MENU ====="
               "\n1. Factorial of a number"
               "\n2. Prime or not"
               "\n3. Odd or Even"
               "\n4. Exit");
        printf("\nEnter your choice : ");

        // Input validation for menu choice.
        if (scanf("%d", &choice) != 1)
        {
            printf("\nPlease enter a number.");
            clearInputBuffer();
            continue;
        }
        clearInputBuffer();

        // Handle menu selection using switch-case.
        switch (choice)
        {
        case 1:
            printf("\n=== FACTORIAL OF A NUMBER ===");
            printf("\nEnter the number : ");
            // Input validation for the number to be factored.
            if (scanf("%d", &num) != 1)
            {
                printf("\nPlease enter a number.");
                clearInputBuffer();
                continue;
            }
            clearInputBuffer();
            factorial(num);
            break;
        case 2:
            printf("\n=== PRIME OR NOT ===");
            printf("\nEnter the number : ");
            // Input validation for the number to be checked.
            if (scanf("%d", &num) != 1)
            {
                printf("\nPlease enter a number.");
                clearInputBuffer();
                continue;
            }
            clearInputBuffer();
            // Require a non-negative, non-zero number for prime check.
            if (num < 0)
            {
                printf("\nPlease enter a postive number.");
                continue;
            }
            else if (num == 0)
            {
                printf("\nPlease enter a non-zero number.");
                continue;
            }
            prime(num);
            break;
        case 3:
            printf("\n=== ODD OR EVEN ===");
            printf("\nEnter the number : ");
            // Input validation for the number to be checked.
            if (scanf("%d", &num) != 1)
            {
                printf("\nPlease enter a number.");
                clearInputBuffer();
                continue;
            }
            clearInputBuffer();
            oddoreven(num);
            break;
        case 4:
            // Exit the program cleanly.
            printf("\nExiting the program.\n\nSAYONARA...\n\n");
            exit(0);
        default:
            // Handle invalid menu choice input.
            printf("\nPlease enter a valid choice.");
            break;
        }
    }
}
```
