/*
WAP: Check palindrome
Date: 26-oct-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	printf("Enter sentence: ");
	scanf("%s", str);
	
	int i, j=strlen(str)-1;
	for(i=0; i<j; i++, j--){
		if(str[i]!=str[j]){
			printf("The given '%s' sentence is not palindrome!", str);
			return 0;
		}
	}
	
	printf("The given '%s' sentence is palindrome!", str);
	return 0;
}

