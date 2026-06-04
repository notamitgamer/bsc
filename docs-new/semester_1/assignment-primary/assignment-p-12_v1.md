---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-p-12_v1.c'
description: 'Write a C program that takes multiple integers as command-line arguments and finds the maximum and minimum value among them.'
---

# assignment-p-12_v1.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a C program that takes multiple integers as command-line arguments and finds the maximum and minimum value among them.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-12_v1.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-12_v1.c)

```c [assignment-p-12_v1.c]
#include <stdio.h>
#include <stdlib.h>

// use atoi()

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    char *endptr;
    long first_arg_val;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    first_arg_val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || argv[1] == endptr)
    {
        printf("Error: Argument '%s' is not a valid integer.\n", argv[1]);
        return 1;
    }
    max_val = (int)first_arg_val;
    min_val = (int)first_arg_val;
    for (i = 2; i < argc; i++)
    {
        long val = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || argv[i] == endptr)
        {
            printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
            return 1;
        }
        current_val = (int)val;
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
