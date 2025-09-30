/*Write a function that checks whether a given string is Palindrome or not.
Use this function to find whether the string entered by the user is Palindrome or not.*/
// Author - Amit Dutta, Date - 13th SEP, 2025

#include<stdio.h>
#include<string.h>

int isPalindrome(char inp[]) {
	int len = strlen(inp);
	int i = 0; //starting point
	int j = len - 1; //end point
	
	while (i < j) {
		if (inp[i] != inp[j]) {
			return 0;
		}
		i++;
		j--;
	}

	return 1;
}

int main() {
	char inp[20];
	printf("Enter the number : ");
	scanf("%s",inp);
	if (isPalindrome(inp)) printf("\n\nInput '%s' is a Palindrome number.", inp);
	else printf("\n\nInput '%s' is not a Palindrome number.", inp);
	return 0;
}
