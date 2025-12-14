/*
WAP: Square Calculation
Date: 23-aug-2025
*/

#include<stdio.h>

int square(int x);

int square(int x){
	int b;
	b = x*x;
	return b;
}

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	b=square(a);
	printf("The square of the given number %d is: %d", a, b);
	return 0;
}

