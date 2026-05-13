---
label: assignment-p-12_v2.c
description: "C program source code for assignment-p-12_v2.c"
---

# `assignment-p-12_v2.c`

## Problem Statement
!!!
Write a C program that takes multiple integers as command-line arguments and finds the maximum and minimum value among them.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 06 Feb 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-12_v2.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-12_v2.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    max_val = atoi(argv[1]);
    min_val = atoi(argv[1]);
    for (i = 2; i < argc; i++)
    {
        current_val = atoi(argv[i]);

        if (current_val > max_val)
        {
            max_val = current_val;
        }
        if (current_val < min_val)
        {
            min_val = current_val;
        }
    }
    printf("The maximum value is: %d\n", max_val);
    printf("The minimum value is: %d\n", min_val);
    return 0;
}
```
