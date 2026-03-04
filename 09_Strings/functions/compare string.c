/*
WAP: compare string
Date: 01-nov-2025
*/

#include<stdio.h>

int main()
{
	char str[20]="payal";
	char ptr[20]="payal";
	int i;
	
	for(i=0; str[i]!='\0' && ptr[i]!='\0'; i++){
		if(str[i]!=ptr[i]){
			printf("Strings are not equal!");
			break;
		}
	}
	
	printf("Strings are equal!");
	return 0;
}

