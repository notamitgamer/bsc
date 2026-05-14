---
title: apc-prac-006.c
description: "C program source code for apc-prac-006.c"
---

# `apc-prac-006.c`


!!! abstract "Problem Statement"
    WAP that accept seconds as input and represent it an hours, minutes and seconds.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-006.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-006.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
int main()
{
    int sec, hours, minutes, temp;
    printf("Enter the no of seconds : ");
    scanf("%d", &sec);
    temp = sec;
    hours = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    sec = sec % 60;
    printf("\n%d Seconds = %d Hours, %d Minutes, %d Seconds.", temp, hours, minutes, sec);
    return 0;
}
```
