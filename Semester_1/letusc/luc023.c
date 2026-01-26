/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Using conditional operators determine :
    (1) Whether the character entered through the keyboard is a
        lower case alphabet or not.
    (2) Whether a character entered through the keyboard is a special
        symbol or not. */
/* Author - Amit Dutta, Date - 5th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 72, Qn No.: E(a) */

#include <stdio.h>
int main()
{
    char inp;
    printf("Enter the character : ");
    scanf("%c", &inp);
    printf("\nInput Character '%c' is %s a LOWER CASE ALPHABET.", inp, 
        (inp >= 'a' && inp <= 'z') ? "" : "NOT");
    printf("\nInput Character '%c' is %s a SPECIAL SYMBOL.", inp, 
        (inp >= 'a' && inp <= 'z' || inp >= 'A' && inp <= 'Z' 
            || inp >= '0' && inp <= '9') ? "NOT" : "");
    return 0;
}