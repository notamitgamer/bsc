// 5. Write a function that checks whether a given string is a Palindrome or not.

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