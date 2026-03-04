/*
WAP: Concat string
Date: 01-nov-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100]="yuvraj love ";
	char ptr[100]="payal";
	int i=strlen(str), j;
	
	for(j=0; ptr[j]!='\0'; i++, j++){
		str[i] = ptr[j];
	}
	
	str[i]='\0';
	
	printf("Concat string: %s", str);
	
	return 0;
}

