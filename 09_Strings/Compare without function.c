/*
WAP: Compare with function
Date: 26-oct-2025
*/

#include<stdio.h>

void comp(char str[], char btr[]);

void comp(char str[], char btr[]){
	int i;
	for(i=0; str[i]!='\0' && btr[i]!='\0'; i++){
		if(str[i]!=btr[i]){
			printf("\nThe given sentences are not same!");
			return;
		}
	}
	printf("\nThe given sentences are same!");
	return;
}

int main()
{
	char str[30], btr[30];
	printf("Enter first sentence: ");
	scanf("%s", str);
	printf("Enter second sentence: ");
	scanf("%s", btr);
	
	comp(str, btr);
	return 0;
}

