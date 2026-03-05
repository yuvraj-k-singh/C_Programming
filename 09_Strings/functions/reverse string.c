/*
WAP: reverse string
Date: 01-nov-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="Yuvraj";
	char ptr[20];
	int i, size=strlen(str);
	
	for(i=0; i<size; i++){
		ptr[i] = str[(strlen(str)-1)-i];
	}
	
	printf("reverse string: %s", ptr);
	return 0;
}

