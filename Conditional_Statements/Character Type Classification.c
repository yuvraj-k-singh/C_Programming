/*
WAP: Character Type Classification
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the value of character: ");
	scanf("%c", &ch);
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
		printf("The given character %c is alphabet", ch);
	} else if(ch>=48 && ch<=57){
		printf("The given character %c is numberical", ch);
	} else{
		printf("The given character %c is special character", ch);
	}
	return 0;
}

