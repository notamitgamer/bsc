/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 14 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
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