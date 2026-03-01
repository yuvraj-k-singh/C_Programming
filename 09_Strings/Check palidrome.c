/*
WAP: Check palidrome
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>

void is_pali(char str[]);

void is_pali(char str[]){
	int i, j=strlen(str)-1;
	for(i=0; i<j; i++, j--){
		if(str[i]!=str[j]){
			printf("\nThe given sentense '%s', is not palindrome!", str);
			return 0;
		}
	}
	printf("\nThe given sentense '%s', is palindrome!", str);
	return;
}


int main()
{
	char str[50];
	printf("Enter sentence: ");
	scanf("%[^\n]s", str);

	is_pali(str);
	return 0;
}

