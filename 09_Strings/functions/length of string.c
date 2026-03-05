/*
WAP: length of string
Date: 01-nov-2025
*/

#include<stdio.h>

int main()
{
	char str[]="Yuvraj kumar";
	int i, len=0;
	
	for(i=0; str[i]!='\0'; i++){
		len++;
	}
	
	printf("Length of string: %d", len);
	return 0;
}

