/*
WAP: pointer as string
Date: 01-nov-2025
*/

#include<stdio.h>

int main()
{
//	char str[]="Yuvraj";                  //normal initialisation of string.
//	char *ptr="Payal";                    //direct initialisation using pointer.
	
//	char str[] = "Yuvraj";     
//	char *ptr = str;                     //pointer pointing to string first element(str[0]).
	
//	printf("string: %s\n", str);
//	printf("pointer: %s", ptr);
	
	/* IMPORTANT:
	In normal initialisation, we can modify individual characters but not entire string
	In direct initialisation, we can modify entire string but not individual characters.
	*/
	
//	*ptr = 'P';                    //modified first character 'Y' with 'P'.
//	printf("string: %s\n", str);


	char *ptr = "Yuvraj";
	printf("Before: %s\n", ptr);
	ptr = "Payal";
	printf("After: %s", ptr);
	return 0;
}

