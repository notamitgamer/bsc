/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 30 Mar 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a C program to reverse a string using a recursive function. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char [], char *, char *);

int main() {
    char string[101], *p, *start, *end;
    printf("Enter the string (Max: 100 char): ");
    if(fgets(string, sizeof(string), stdin) == NULL) {
        printf("\nError reading input.");
        exit(1);
    }
    p = strchr(string, '\n');
    if(p) *p = '\0';
    printf("Before Reverse: %s", string);
    start = string;
    end = string + strlen(string) - 1;
    reverseString(string, start, end);
    printf("\nAfter reverse:  %s", string);
    return 0;
}

void reverseString(char str[], char *start, char *end) {
    if(start >= end) {
        return;
    }
    char temp;
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
    reverseString(str, start, end);
}
