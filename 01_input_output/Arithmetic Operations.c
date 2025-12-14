/*
WAP: Arithmetic Operations
Date: 19-aug-2025
*/

#include<stdio.h>

int main()
{
	int a, b, add, sub, mul, div;
	printf("Enter the first value: ");
	scanf("%d", &a);
	printf("Enter the second value: ");
	scanf("%d", &b);
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	printf("The sum of given two number is %d, subtraction is %d, multiplication is %d, division is %d", add, sub, mul, div);
	return 0;
}

