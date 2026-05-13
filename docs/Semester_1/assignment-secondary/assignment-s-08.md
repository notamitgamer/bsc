---
label: assignment-s-08.c
description: "C program source code for assignment-s-08.c"
---

# `assignment-s-08.c`

## Problem Statement
!!!
Write a program that counts the number of occurrences of each alphabet (A-Z, a-z) in the text entered using Command-Line Arguments.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-08.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-08.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int target[2], i, j, count[2], len;
    for (target[0] = 'A', target[1] = 'a'; target[0] <= 'Z', target[1] <= 'z'; target[0]++, target[1]++)
    {
        count[0] = 0;
        count[1] = 0;
        for (i = 1; i < argc; i++)
        {
            len = strlen(argv[i]);
            for (j = 0; j < len; j++)
            {
                if (argv[i][j] == target[0])
                {
                    count[0]++;
                }
                if (argv[i][j] == target[1])
                {
                    count[1]++;
                }
            }
        }
        if (count[0])
        {
            printf("\n\"%c\" found %d times.", target[0], count[0]);
        }
        if (count[1])
        {
            printf("\n\"%c\" found %d times.", target[1], count[1]);
        }
    }
    return 0;
}
```
