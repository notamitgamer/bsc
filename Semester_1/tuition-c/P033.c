/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate the sum of even digits and odd digits. Number will be provided by user. */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
int main()
{
    int inp, odd = 0, even = 0, temp;
    printf("Enter the number : ");
    scanf("%d", &inp);
    temp = inp;
    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
            even += temp % 10;
        else
            odd += temp % 10;
        temp /= 10;
    }
    printf("\nSum of even : %d"
           "\nSum of odd : %d",
           even, odd);
    return 0;
}