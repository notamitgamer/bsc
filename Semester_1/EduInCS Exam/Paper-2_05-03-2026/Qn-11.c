/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Mar 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a program to explain, how an array of stucture can you defined and accessed. */

#include <stdio.h>
#include <string.h>

// 1. Defining the Structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // 2. Defining an Array of Structures
    // This creates 'n' blocks of memory, each large enough to hold a Student
    struct Student s[n];

    // 3. Accessing members to STORE data
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo); // Using dot (.) operator with index [i]
        
        printf("Name: ");
        getchar(); // To clear the newline character from buffer
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // Safe newline removal

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // 4. Accessing members to DISPLAY data
    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\tMarks\n");
    for (i = 0; i < n; i++) {
        // Accessing using s[i].member
        printf("%d\t%-15s\t%.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}