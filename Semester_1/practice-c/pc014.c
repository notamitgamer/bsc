/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 30 Mar 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a c program that defines a structure Student with the following members: roll (int), name (string), and marks (float).
 Do the below: 
  * Create an array to store details for 3 students.
  * Read the details for these 3 student from a file named students.txt. (Assume the file contains data in the format: Roll Name Marks).
  * Implement a recursive function float calculateTotal(struct Student arr[], int n) to calculate the sum of marks of all students in the array.
  * Display each student's details and the total marks calculated by the recursive function. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FILENAME "students.txt"

typedef struct Student {
    int roll;
    char name[20];
    float marks;
} Stu;

void printDetails(Stu *, int);
float calculateTotal(struct Student [], int);

int main() {
    FILE *input = NULL;
    Stu stu[3]; 
    int i = 0;

    input = fopen(FILENAME, "r");
    if(input == NULL) {
        printf("\nError opening file %s. Please try again.", FILENAME);
        exit(1);
    }

    while(i < 3 && (fscanf(input, "%d %s %f", &stu[i].roll, &stu[i].name, &stu[i].marks) == 3)) i++;
    printDetails(stu, 3);
    printf("\n\nTotal Marks: %g", calculateTotal(stu, 3));
}

float calculateTotal(struct Student stu[], int n) {
    if(n == 0) {
        return stu[n].marks;
    }
    float total = stu[n].marks;
    return total + calculateTotal(stu, n-1);
}

void printDetails(Stu *stu, int n) {
    int i;
    printf("\n== Student Details ==");
    for(i = 0; i < n; i++) {
        printf("\nStudent Roll:  %d"
               "\nStudent Name:  %s"
               "\nStudent Marks: %g\n",
               stu[i].roll, stu[i].name, stu[i].marks);
    }
}