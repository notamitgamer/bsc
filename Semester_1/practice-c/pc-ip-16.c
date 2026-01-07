/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
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

/*
 * Question 16:
 * Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.
 */

#include <stdio.h>
#include <math.h>

int isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("\nInput %d is a Armstrong number.", num);
    }
    else
    {
        printf("\nInput %d is not a Armstrong number.", num);
    }
    return 0;
}

int isArmstrong(int num)
{
    int temp = num;
    int power = 0;
    int result = 0;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        result += (int)pow((temp % 10), power);
        temp /= 10;
    }
    return result == num;
}