---
title: assignment-s-01.c
description: "C program source code for assignment-s-01.c"
---

# `assignment-s-01.c`


!!! abstract "Problem Statement"
    Write a program to compute the sum and product of digits of an integer using user defined functions.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-01.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-01.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int sum_of_digits(int);
int product_of_digits(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nSum of digits of %d = %d", num, sum_of_digits(num));
    printf("\nProduct of digits of %d = %d", num, product_of_digits(num));
    return 0;
}

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int product_of_digits(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}
```
