/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to input a number and check whether the
number is Pronic number or not.
    Pronic Number: The number which is the product of two numbers
                   which is the product of two consecutive integer.
                   Ex: 20 = 4 * 5
*/
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

// using boolean...
/*
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, iterationIndex;
    bool isPronic = false;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nYou have to enter a number, not an character or symbol.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    for (iterationIndex = 1; iterationIndex <= num / 2; iterationIndex++)
    {
        if (iterationIndex * (iterationIndex + 1) == num)
        {
            printf("\nInput %d is a Pronic Number.", num);
            isPronic = true;
            break;
        }
    }
    if(!isPronic)
    {
        printf("\nInput %d is not a Pronic Number.", num);
    }
    return 0;
}
*/

// using direct return method (more efficient and generally preferred)...

#include <stdio.h>
#include <math.h>

int main()
{
    int num, iterationIndex, iterationLimit;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nYou have to enter a number, not an character or symbol.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    iterationLimit = (int)sqrt(num);
    for (iterationIndex = 1; iterationIndex <= iterationLimit; iterationIndex++)
    {
        if (iterationIndex * (iterationIndex + 1) == num)
        {
            printf("\nInput %d is a Pronic Number.", num);
            return 0;
        }
    }
    printf("\nInput %d is not a Pronic Number.", num);
    return 0;
}