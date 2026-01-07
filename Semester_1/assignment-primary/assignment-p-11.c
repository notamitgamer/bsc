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

struct Student
{
    int rollNumber;
    char name[50];
    int marks;
};

void inputStudent(struct Student *, int);
void displayStudent(struct Student);

int main()
{
    struct Student studentDetails[10];
    int i, inputCount;
    printf("How many student details you want to add (Max: 10): ");
    if (scanf("%d", &inputCount) != 1 || inputCount < 1 || inputCount > 10)
    {
        printf("\nInvalid Input.");
        return 1;
    }
    for (i = 0; i < inputCount; i++)
    {
        inputStudent(&studentDetails[i], i + 1);
    }
    printf("\n=== Student Details ===\n");
    for (i = 0; i < inputCount; i++)
    {
        displayStudent(studentDetails[i]);
    }
    return 0;
}

void inputStudent(struct Student *std, int stdNum)
{
    printf("\n- Enter details of Student %d -", stdNum);
    printf("\nEnter the Roll Number: ");
    scanf("%d", &std->rollNumber);
    while (getchar() != '\n')
        ; 
    printf("Enter the Name: ");
    fgets(std->name, sizeof(std->name), stdin);
    printf("Enter the Marks: ");
    scanf("%d", &std->marks);
}

void displayStudent(struct Student std)
{
    printf("\n\nRoll Number: %d", std.rollNumber);
    printf("\nName       : %s", std.name);
    printf("Marks      : %d", std.marks);
}