/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to calculate overtime pay of 10 employees. Overtime is
paid at the rate of Rs. 120.00 per hour for every hour worked above 40
hours. Assume that employees do not work for fractional part of an hour. */
/* ONLY WHILE LOOP ALLOWED */
/* Let Us C, Chap - 5, Page - 83, Problem 5.1 */

#include <stdio.h>
#include <conio.h>
int main()
{
    int working_hour, i = 1;
    double pay;
    while (i <= 10)
    {
        printf("Enter the working hour for the employee no. %d : ", i);
        if (scanf("%d", &working_hour) != 1)
        {
            printf("\n\tPlease enter a number as woking hour.\n\n");
            while (getchar() != '\n')
                ;
            // above line discard the input characters untill getchar() reaches the new line character.
            /* if I do not discard the input, after 'continue;' statement that input will be again taken 
            by scanf (In the line 17). It will be a infinite loop of error. */
            continue;
        }
        // checking overtime
        if (working_hour > 40)
        {
            pay = (working_hour - 40) * 120.00;
            printf("\n\tOvertime working hours of Employee %d : %d", i, (working_hour - 40));
            printf("\n\tPay of the overtime for Employee %d   : Rs. %.2f\n\n", i, pay);
        }
        else
            printf("\n\tEmployee %d did not work any overtime.\n\n", i);
        i++; // changing to next employee
    }
}