/*
WAP: String functions
Date: 01-nov-2025
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="yuvraj";
	char ptr[20];
	
	int size = strlen(str);        //used to count no of elements exclude null character.
	printf("size: %d\n", size);
	
	strcpy(ptr, str);              //used to copy string str in ptr.
	printf("copy string: %s\n", ptr);
	
	if(strcmp(str, ptr)==0){      //used to compare two string.
		printf("string equal!\n");
	} else printf("string not equal!\n");
	
	strcat(str, ptr);             //used to concat(add) two strings ptr in str.
	printf("concat string: %s\n", str);
	 
	strrev(ptr);                  //used to reverse string
	printf("reverse string: %s\n", ptr);
	
	strupr(ptr);                  //used Converts string to uppercase
	printf("Upper case string: %s\n", ptr);
	
	strlwr(ptr);                  //used to Converts string to lowercase
	printf("Lower case string: %s\n", ptr);
	return 0;
}

