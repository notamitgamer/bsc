/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to store roll no, name and marks of 5 students then print it. use structure */

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