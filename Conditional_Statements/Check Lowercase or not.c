/*
WAP: whether a character is lowercase or not
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	char value;
	printf("Enter the character: ");
	scanf("%c", &value);
	printf("The character entered by the user is %c and its ASCII value is %d\n", value, value);
	
	if(value>=97 && value<=122){
		printf("The value entered by the user is lower case!");
	}
	else{
		printf("The value entered by the user is Upper case!");
	}
	return 0;
}
