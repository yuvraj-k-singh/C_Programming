/*
WAP: Reverse of string
Date: 25-10-2025
*/

#include<stdio.h>
#include<string.h>

void rev(char str[]){
    //reverse of string
	int i, j=strlen(str)-1;
	for(i=0; i<j; i++, j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return;
}

int main()
{
	char str[50];
	printf("Enter the sentense: ");
	scanf("%[^\n]s", str);
	
	printf("\nSentense before reverse: %s", str);
	
	rev(str);
	
	printf("\nSentence after reverse is: %s", str);
	return 0;
}

