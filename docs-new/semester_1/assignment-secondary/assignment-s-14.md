---
title: assignment-s-14.c
description: "C program source code for assignment-s-14.c"
icon: lucide/file-code
---

# `assignment-s-14.c`


!!! abstract "Problem Statement"
    Write a menu-driven program to perform the following string operations: a. Show address of each character b. Concatenate two strings without using strcat() c. Concatenate two strings using strcat() d. Compare two strings e. Find string length using pointers f. Convert lowercase to uppercase g. Convert uppercase to lowercase h. Count number of vowels i. Reverse the string

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 20 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-14.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-14.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
<button class="md-button" type="button" onclick="copyPageUrl()">Copy URL</button>
</div>

> You can print or save this file by opening Raw and using your browser.

<div class="action-buttons-mobile">
<button class="md-button" onclick="openActionSheet()">Actions</button>
</div>

<div class="dd-backdrop" id="actionBackdrop" onclick="closeActionSheet()"></div>
<div class="dd-sheet" id="actionSheet" role="dialog" aria-modal="true" aria-label="Actions">
  <div class="dd-sheet-handle"></div>
  <div class="dd-sheet-title"><span class="ti ti-bolt" aria-hidden="true"></span> Actions</div>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-14.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-14.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-brand-github item-icon" aria-hidden="true"></span>
    <span class="item-label">View on GitHub</span>
  </a>
  <a href="javascript:void(0)" onclick="copyAndClose()">
    <span class="ti ti-copy item-icon" aria-hidden="true"></span>
    <span class="item-label">Copy URL</span>
  </a>
</div>

<script>
function openActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.style.display="block";s.style.display="block";document.body.style.overflow="hidden";requestAnimationFrame(function(){b.classList.add("visible");s.classList.add("visible");});}
function closeActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.classList.remove("visible");s.classList.remove("visible");document.body.style.overflow="";setTimeout(function(){b.style.display="none";s.style.display="none";},300);}
function copyPageUrl(){var btn=document.querySelector(".action-buttons-desktop .md-button:last-child");try{navigator.clipboard.writeText(window.location.href).then(function(){if(btn){var o=btn.textContent;btn.textContent="Copied!";setTimeout(function(){btn.textContent=o;},1800);}}).catch(function(){fallbackCopy();});}catch(e){fallbackCopy();}}
function fallbackCopy(){var ta=document.createElement("textarea");ta.value=window.location.href;ta.style.position="fixed";ta.style.opacity="0";document.body.appendChild(ta);ta.focus();ta.select();try{document.execCommand("copy");}catch(e){}document.body.removeChild(ta);}
function copyAndClose(){closeActionSheet();setTimeout(function(){copyPageUrl();},320);}
</script>

## Source Code
<div data-search-exclude="true">
```c
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
</div>
