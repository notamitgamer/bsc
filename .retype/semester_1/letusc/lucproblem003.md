# `lucproblem003.c`

## Problem Statement
!!!
If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem003.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem003.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main()
{
    char inp;
    printf("Enter one character : ");
    scanf(" %c", &inp);
    if (inp >= 64 && inp <= 90)
        printf("\nInput '%c' is a CAPITAL LETTER.", inp);
    if (inp >= 97 && inp <= 122)
        printf("\nInput '%c' is a SMALL CASE LETTER.", inp);
    if (inp >= 48 && inp <= 57)
        printf("\nInput '%c' is a DIGIT.", inp);
    if (inp >= 0 && inp <= 47 || inp >= 58 && inp <= 64 
        || inp >= 91 && inp <= 96 || inp >= 123 && inp <= 127)
        printf("\nInput '%c' is a SPECIAL SYMBOL.", inp);
    return 0;
}
```
