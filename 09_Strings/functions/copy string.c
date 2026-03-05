/*
WAP: copy string
Date: 01-nov-2025
*/

#include<stdio.h>

int main()
{
	char str[20]="Yuvraj";
	char ptr[20];
	int i;
	
	for(i=0; str[i]!='\0';i++){
		ptr[i]=str[i];
	}
	
	printf("copied string: %s", ptr);
	return 0;
}

