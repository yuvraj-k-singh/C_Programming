/*
WAP: Count words
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Enter sentence: ");
	scanf("%[^\n]s", str);
	
	int i=0, word=0;
	
	while(str[i]!='\0'){
		if(str[i]==' ' || str[i]=='\t' || str[i]=='\n'){
		    word++;
		}
		i++;
	}
	
	printf("The word contain by sentence '%s' is %d!", str, word+1);
	
	return 0;
}

