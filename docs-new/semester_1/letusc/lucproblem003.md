---
title: lucproblem003.c
description: "C program source code for lucproblem003.c"
icon: lucide/file-code
---

# `lucproblem003.c`


!!! abstract "Problem Statement"
    If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem003.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem003.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
