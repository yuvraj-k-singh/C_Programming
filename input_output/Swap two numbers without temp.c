/*
WAP: Swap of the two number without using third variable
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	printf("Before swap the value of a and b is: %d and %d\n", a,b);
	
	//swapping of two numbers without using third variable
	a=a+b;
	b=a-b;
	a=a-b;	
	
	printf("After swap the value of a and b is: %d and %d", a,b);
	return 0;
}

