/*
WAP: Length Without Library
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Enter sentence: ");
	scanf("%[^\n]s", str);
	
	int size=0, i=0;
	
	while(str[i]!='\0'){
		size++, i++;
	}
	
	printf("\nThe sentence %s has %d character lenth.", str, size);
	return 0;
}

