---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-p-11.c'
description: 'Write a C program that defines a structure Student containing the attributes rollNumber, name, and marks. Include a user-defined function named displayStudent with the signature void displayStudent(struct Student s);. The function should display the details of a student.'
---

# assignment-p-11.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a C program that defines a structure Student containing the attributes rollNumber, name, and marks. Include a user-defined function named displayStudent with the signature void displayStudent(struct Student s);. The function should display the details of a student.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-11.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-11.c)

```c [assignment-p-11.c]
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

void inputStudent(struct Student *);
void displayStudent(struct Student);

int main()
{
    struct Student *std = NULL;
    int i, n;

    printf("How many student details you want to add : ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("\nInvalid Input.");
        return 1;
    }

    std = (struct Student *)malloc(n * sizeof(struct Student));
    if (std == NULL)
    {
        printf("\nUnable to allocate memory.");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\n- Enter details of Student %d -", i + 1);
        inputStudent(&std[i]);
    }

    printf("\n=== Student Details ===\n");
    for (i = 0; i < n; i++)
    {
        displayStudent(std[i]);
    }

    free(std);
    return 0;
}

void inputStudent(struct Student *std)
{
    int len;

    printf("\nEnter the Roll Number: ");
    scanf("%d", &std->rollNumber);
    getchar();
    
    printf("Enter the Name (Max: 50 character): ");
    fgets(std->name, sizeof(std->name), stdin);
    len = strlen(std->name);
    if (len > 0 && std->name[len - 1] == '\n')
    {
        std->name[len - 1] = '\0';
    }

    printf("Enter the Marks: ");
    scanf("%f", &std->marks);
}

void displayStudent(struct Student std)
{
    printf("\n%-12s : %d", "Roll Number", std.rollNumber);
    printf("\n%-12s : %s", "Name", std.name);
    printf("\n%-12s : %g\n", "Marks", std.marks);
}
```
