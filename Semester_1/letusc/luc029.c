/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to print out all Armstrong numbers between 100
and 500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(b) */

#include <stdio.h>
#include <math.h>
int main()
{
    int num = 100, temp1, temp2, res;
    printf("Armstrong numbers between 100 and 500 :");
    while (num <= 500)
    {
        temp1 = num;
        res = 0;
        while (temp1 != 0)
        {
            temp2 = temp1 % 10;
            res = res + pow(temp2, 3);
            temp1 = temp1 / 10;
        }
        if (num == res)
            printf("  %d", num);
        num++;
    }
    return 0;
}