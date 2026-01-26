/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to input a number and check whether it is Disarium Number or not.
    Note : A number is said to Disarium if sum of its digit powered by with their
    respective position is equal to the original number. */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int main()
{
    int num, res = 0, temp, position = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        position++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        res += (int)pow(temp % 10, position);
        position--;
        temp /= 10;
    }
    if (res == num)
        printf("\nInput %d is a Disarium Number.", num);
    else
        printf("\nInput %d is Not a Disarium Number.", num);
    return 0;
}