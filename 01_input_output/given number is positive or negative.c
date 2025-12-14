/*
WAP: to check whether a given number is positive or negative
Date: 03-june-25
*/

#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value of the element: ");
	scanf("%d", &a);
	
	if(a>=0)
	{
		printf("The given value is positive!");
	}
	else{
		printf("The given value is negative!");
	}
	return 0;
}

