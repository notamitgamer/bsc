/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* A position integer is entered through the keyboard. Write a Function
to obtain the prime factors of this number. 
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
factors of 35 are 5 and 7
*/
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap- 8, Page - 144, Qn No.: C(2) */

#include <stdio.h>
#include <math.h>

void findPrimeFactors(int n)
{
    int temp_n = n;

    if (temp_n == 1)
    {
        printf("Prime factors of %d are: None.\n", n);
        return;
    }

    printf("Prime factors of %d are:", n);

    while (temp_n % 2 == 0)
    {
        printf(" %d", 2);
        temp_n = temp_n / 2;
    }

    for (int i = 3; i <= (int)sqrt(temp_n); i = i + 2)
    {
        while (temp_n % i == 0)
        {
            printf(" %d", i);
            temp_n = temp_n / i;
        }
    }

    if (temp_n > 2)
    {
        printf(" %d", temp_n);
    }

    printf("\n");
}

int main()
{
    int n;
    printf("Enter a positive integer to get the prime factors: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (n <= 0)
    {
        printf("Error: Please enter a POSITIVE integer.\n");
        return 1;
    }
    findPrimeFactors(n);
    return 0;
}