/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
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