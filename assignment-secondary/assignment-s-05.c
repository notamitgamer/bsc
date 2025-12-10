/* Write a function to check whether a given string is a palindrome. Use this function to
determine whether an entered string is Palindrome. */

#include <stdio.h>
#include <string.h>

int isPalindrome(char[]);

int main()
{
    char input[100];
    int len;

    printf("Enter the string (Max: 100 Character): ");
    fgets(input, sizeof(input), stdin);
    len = strlen(input);

    if (len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    }

    if (isPalindrome(input))
    {
        printf("\nInput string \"%s\" is Palindrome.", input);
    }
    else
    {
        printf("\nInput string \"%s\" is not Palindrome", input);
    }

    return 0;
}

int isPalindrome(char str[])
{
    char *start = str;
    char *end;
    int len = strlen(str);

    if (len == 0)
    {
        return 1;
    }

    end = str + (len - 1);

    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}