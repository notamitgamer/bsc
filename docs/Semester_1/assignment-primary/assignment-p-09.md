# `assignment-p-09.c`

## Problem Statement
!!!
Write a C program that includes a user-defined function named setBit with the signature int setBit(int num, int position);. The function should set the bit at the specified position (0-indexed) to 1 and return the modified number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-09.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-09.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int setBit(int, int);

int main()
{
    int num, position;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the postion where you want to set the bit (0-indexed): ");
    scanf("%d", &position);
    printf("\nModified number= %d", setBit(num, position));
    return 0;
}

int setBit(int num, int position)
{
    int mask = 1 << position;
    return num | mask;
}
```
