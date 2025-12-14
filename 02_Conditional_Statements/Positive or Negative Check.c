/*
WAP: whether a given number is positive or negative
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	if(a>=0){
		printf("Enter the value of a is postive");
	}
	else{
		printf("Enter the value of a is negative");
	}
	return 0;
}

