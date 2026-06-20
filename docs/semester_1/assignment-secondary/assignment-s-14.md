---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-14.c'
description: 'Write a menu-driven program to perform the following string operations: a. Show address of each character b. Concatenate two strings without using strcat() c. Concatenate two strings using strcat() d. Compare two strings e. Find string length using pointers f. Convert lowercase to uppercase g. Convert uppercase to lowercase h. Count number of vowels i. Reverse the string'
source: 'semester_1/assignment-secondary/assignment-s-14.c'
---

# assignment-s-14.c

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 20 Dec 2025
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
Write a menu-driven program to perform the following string operations: a. Show address of each character b. Concatenate two strings without using strcat() c. Concatenate two strings using strcat() d. Compare two strings e. Find string length using pointers f. Convert lowercase to uppercase g. Convert uppercase to lowercase h. Count number of vowels i. Reverse the string
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-14.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-14.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
```c [assignment-s-14.c]
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void address_char(char *);
void concat_manual(char[], char[]);
void concat_strcat(char[], char[]);
int string_cmp(char *, char *);
int string_len(char *);
void ltou(char[]);
void utol(char[]);
int vowel_count(char[]);
void reverse(char[]);

int main()
{
    char str1[100], str2[100], choice;
    int result_cmp;

    printf("Enter first string (Max: 100 character): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    // this will replace the enter (\n) used in the end to null

    printf("Enter second string (Max: 100 character): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    while (1)
    {
        printf("\n\n\n    ========== MENU ==========\n"
               "a. Show address of each character\n"
               "b. Concatenate two strings without using strcat()\n"
               "c. Concatenate two strings using strcat()\n"
               "d. Compare two strings\n"
               "e. Find string length using pointers\n"
               "f. Convert lowercase to uppercase\n"
               "g. Convert uppercase to lowercase\n"
               "h. Count number of vowels\n"
               "i. Reverse the string\n"
               "1. Change input strings\n"
               "0. Exit\n");
        printf("\nEnter your choice: ");
        scanf(" %c", &choice);
        choice = tolower(choice);

        switch (choice)
        {
        case '1':
            while (getchar() != '\n')
                ;
            printf("Enter first string (Max: 100 character): ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string (Max: 100 character): ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            break;
        case '0':
            printf("\n\n\nExiting program...\n\n");
            return 0;

        case 'a':
            printf("\n --- Show address of each character ---\n");
            printf("\nSrting 1: ");
            address_char(str1);
            printf("\nString 2: ");
            address_char(str2);
            break;
        case 'b':
            printf("\n --- Concatenate two strings without using strcat() ---\n");
            printf("\nResult: ");
            concat_manual(str1, str2);
            break;
        case 'c':
            printf("\n --- Concatenate two strings using strcat() ---\n");
            printf("\nResult: ");
            concat_strcat(str1, str2);
            break;
        case 'd':
            printf("\n --- Compare two strings ---\n");
            result_cmp = string_cmp(str1, str2);
            if (result_cmp == 0)
            {
                printf("\nString 1 = String 2");
                break;
            }
            else if (result_cmp > 0)
            {
                printf("\nString 1 > String 2");
                break;
            }
            else
            {
                printf("\nString 1 < String 2");
                break;
            }
        case 'e':
            printf("\n --- Find string length using pointers ---\n");
            printf("\nLength of the String_1: %d", string_len(str1));
            printf("\nLength of the String_2: %d", string_len(str2));
            break;
        case 'f':
            printf("\n --- Convert lowercase to uppercase ---\n");
            printf("\nString 1: ");
            ltou(str1);
            printf("\nString 2: ");
            ltou(str2);
            break;
        case 'g':
            printf("\n --- Convert uppercase to lowercase ---\n");
            printf("\nString 1: ");
            utol(str1);
            printf("\nString 2: ");
            utol(str2);
            break;
        case 'h':
            printf("\n --- Count number of vowels ---\n");
            printf("\nString 1: %d", vowel_count(str1));
            printf("\nString 2: %d", vowel_count(str2));
            break;
        case 'i':
            printf("\n --- Reverse the string ---\n");
            printf("\nString 1: ");
            reverse(str1);
            printf("\nString 2: ");
            reverse(str2);
            break;
        default:
            printf("\nWrong choice. Try again...\n");
        }
    }
}

void address_char(char *str)
{
    printf("\nCharacter | Memory Address");
    printf("\n--------- | --------------");

    while (*str != '\0')
    {
        printf("\n    %-6c| %p", *str, (void *)str);
        str++;
    }
}

void concat_manual(char str1[], char str2[])
{
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char result[size1 + size2 + 1];
    int i = 0, j;

    j = 0;
    while (str1[j] != '\0')
    {
        result[i] = str1[j];
        i++;
        j++;
    }

    j = 0;
    while (str2[j] != '\0')
    {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
    printf("%s\n", result);
}

void concat_strcat(char str1[], char str2[])
{
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char result[size1 + size2 + 1];

    result[0] = '\0';
    strcat(result, str1);
    strcat(result, str2);

    printf("%s\n", result);
}

int string_cmp(char *str1, char *str2)
{
    // written based on strcmp()
    while (*str1 != '\0' && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int string_len(char *str)
{
    char *end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - str;
}

void ltou(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", toupper(str[i]));
    }
}

void utol(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", tolower(str[i]));
    }
}

int vowel_count(char str[])
{
    int i, vowel = 0;
    char character;
    for (i = 0; str[i] != '\0'; i++)
    {
        character = tolower(str[i]);
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            vowel++;
        }
    }
    return vowel;
}

void reverse(char str[])
{
    int len = strlen(str);
    char result[len + 1];
    char *start = result;
    char *end = result + len - 1;
    char temp;

    result[0] = '\0';
    strcat(result, str);

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("%s\n", result);
}
```
