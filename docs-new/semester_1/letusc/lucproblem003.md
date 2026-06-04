---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem003.c'
description: 'If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127'
---

# lucproblem003.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem003.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem003.c)

```c [lucproblem003.c]
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
