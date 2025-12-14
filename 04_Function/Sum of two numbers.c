/*
WAP: Sum of two numbers
Date: 23-aug-2025
*/

#include<stdio.h>

int add(int x, int y);

int add(int x, int y){
	int sum=x+y;
	return sum;
}

int main()
{
	int a, b, sum;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	sum = add(a,b);
	
	printf("The sum of %d and %d is: %d", a, b, sum);
	return 0;
}

