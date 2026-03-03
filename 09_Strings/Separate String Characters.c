/*
WAP: Separate String Characters
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Enter sentence: ");
	scanf("%[^\n]s", str);
	
	int i=0;
	
	while(str[i]!='\0'){
		printf("%c ", str[i]);
		i++;
	}
	
	return 0;
}

