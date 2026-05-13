# `APC-PRAC-033.c`

## Problem Statement
!!!
Print the factorial of the digits off a number
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-033.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-033.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Only non-negetive number is allowed.");
        return 1;
    }
    temp = n;
    while (temp > 0)
    {
        printf("\nFactorial of %d: %d", temp % 10, factorial(temp % 10));
        temp /= 10;
    }
    return 0;
}
```
