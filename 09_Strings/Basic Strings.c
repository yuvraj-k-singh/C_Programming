/*
WAP: Basic Strings
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>                 

int main()
{
   	//char str[]={'H', 'E', 'L', 'L', '0'};   Basic declaration
	//char str[]="Hello!";   double quotation declaration
	char name[20];
	
	printf("Enter the name of student: ");
	//scanf("%s", name);     only take single word as input not sentence
	//scanf("%[^\n]s", name);    can take entire sentense as input
	fgets(name, sizeof(name), stdin);  //best way to take string as input
	
	printf("The sentence entered was: %s", name);
	return 0;
}

