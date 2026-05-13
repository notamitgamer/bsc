# `APC-PRAC-016.c`

## Problem Statement
!!!
Write a program to check palindrome number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-016.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-016.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int num, temp, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == num)
        printf("\nInput %d is a palindrome number.", num);
    else
        printf("\nInput %d is not a palindrome number.", num);
    return 0;
}
```
