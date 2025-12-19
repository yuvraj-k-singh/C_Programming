/*
WAP: Add Two Numbers simple
Date: 03-sep-2025
*/

#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	int *p1=&a;
	int *p2=&b;
	printf("The sum of %d and %d is: %d", a, b, *p1+*p2);
	return 0;
}

