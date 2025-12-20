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

/*
    Write a menu-driven program to perform the following string operations:
        a. Show address of each character
        b. Concatenate two strings without using strcat()
        c. Concatenate two strings using strcat()
        d. Compare two strings
        e. Find string length using pointers
        f. Convert lowercase to uppercase
        g. Convert uppercase to lowercase
        h. Count number of vowels
        i. Reverse the string
*/

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