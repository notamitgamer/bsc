/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/assignment-secondary
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program using a function to compute and display all factors of a given number. */

#include <stdio.h>
#include <stdlib.h>

void display_factors(int);

int main()
{
    int num, i;
    printf("Please enter the number to get the factors from it : ");
    scanf("%d", &num);
    display_factors(num);
    return 0;
}

void display_factors(int num) {
    int temp = abs(num);
    int i;

    if (temp == 0)
    {
        printf("\n0 has infinitely many factors (all integers).");
        exit(1);
    }

    printf("\nThe factors of ' %d ' is :- ", num);
    printf("\nPositive : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", i);
    printf("\nNegative : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", -i);
}