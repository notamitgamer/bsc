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

/* Write a C program that includes a user-defined function named isArmstrong with the 
signature int isArmstrong(int num);. An Armstrong number is a number that is equal to 
the sum of its own digits each raised to the power of the number of digits. For example, 
153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153 */

#include <stdio.h>
#include <math.h>

int isArmstrong(int);
int count(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
    {
        printf("\nInput %d is a Armstrong Number.", n);
    }
    else
    {
        printf("\nInput %d is Not a Armstrong Number.", n);
    }

    return 0;
}

int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int isArmstrong(int n)
{
    if (n < 0)
        return 0; 
    if (n == 0)
        return 1;

    int power = count(n);
    int temp = n;
    int checker = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        checker = checker + (int)round(pow(digit, power));
        temp = temp / 10;
    }
    return n == checker;
}
