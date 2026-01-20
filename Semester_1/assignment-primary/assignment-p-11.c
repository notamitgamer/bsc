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

/* Write a C program that defines a structure Student containing the attributes rollNumber,
name, and marks. Include a user-defined function named displayStudent with the
signature void displayStudent(struct Student s);. The function should display the details
of a student. */

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
    
    printf("Enter the Name: ");
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
