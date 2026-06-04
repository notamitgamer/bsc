---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-S-014.c'
description: 'Write a program to store roll no, name and marks of 5 students then print it. use structure'
---

# APC-S-014.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 14 Jan 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to store roll no, name and marks of 5 students then print it. use structure
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-014.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-014.c)

```c [APC-S-014.c]
#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    int i, stu_count = 3;
    struct student s[stu_count];
    for (i = 0; i < stu_count; i++)
    {
        printf("\nEnter the Roll Number: ");
        scanf("%d", &s[i].roll_no);
        getchar();
        printf("Enter the name: ");
        gets(s[i].name);
        printf("Enter the Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n%-10s %-20s %-10s\n", "ROLL", "NAME", "MARKS");
    printf("%-10s %-20s %-10s\n", "====", "====", "=====");
    for (i = 0; i < stu_count; i++)
    {
        printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    return 0;
}
```
