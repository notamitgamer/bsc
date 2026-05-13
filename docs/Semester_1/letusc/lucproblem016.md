# `lucproblem016.c`

## Problem Statement
!!!
Figure 9.4 shows three memory locations and values stored in them. Write a program to declare  variables that implement the relationship shown. How will you print the values and addresses shown in the figure? On which machine the program should be executed to get such addresses? Figure 9.4: value: 3.14, memory_address: 7fff9489c79c value: 7fff9489c7a0, memory_address: 7fff4fd134b8 value: 7fff9489c79c,  memory_address: 7fff9489c7a0
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem016.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem016.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    float a = 3.14;
    float *c = &a;
    float **b = &c;

    printf("Location 1 (Variable a):\n");
    printf("Value: %g\n", a);
    printf("Address: %p\n", (void *)&a);
    printf("------------------------------\n");

    printf("Location 3 (Variable c: float *):\n");
    printf("Value (Address stored): %p\n", (void *)c);
    printf("Address of c itself: %p\n", (void *)&c);
    printf("Value pointed to (*c): %g\n", *c);
    printf("------------------------------\n");

    printf("Location 2 (Variable b: float **):\n");
    printf("Value (Address stored): %p\n", (void *)b);
    printf("Address of b itself: %p\n", (void *)&b);
    printf("Value pointed to (*b): %p\n", (void *)*b);
    printf("Value pointed to (**b): %g\n", **b);
    printf("------------------------------\n");

    return 0;
}
```
