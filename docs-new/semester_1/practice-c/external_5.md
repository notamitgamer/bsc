---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> external_5.c'
description: 'C program — external_5.c'
---

# external_5.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/external_5.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/external_5.c)

```c [external_5.c]
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalindrome(char []);

int main() {
    char str[50];
    printf("Enter the string (upto 50 char): ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
    if(isPalindrome(str)) printf("\n\"%s\" is palindrome.", str);
    else printf("\n\"%s\" is not palindrome.", str);
    return 0;
}

int isPalindrome(char str[]) {
    int len = strlen(str);
    int start = 0, end = len - 1;
    while(start < end) {
        if(tolower(*(str + start)) != tolower(*(str + end))) return 0;
        start++;
        end--;
    }
    return 1;
}
```
