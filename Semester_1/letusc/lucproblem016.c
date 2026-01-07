/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Figure 9.4 shows three memory locations and values stored in them.
Write a program to declare  variables that implement the relationship
shown. How will you print the values and addresses shown in the figure?
On which machine the program should be executed to get such addresses?

Figure 9.4:
    value: 3.14, memory_address: 7fff9489c79c
    value: 7fff9489c7a0, memory_address: 7fff4fd134b8
    value: 7fff9489c79c,  memory_address: 7fff9489c7a0
*/
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap - 9, Page 160, Problem 9.3 */

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