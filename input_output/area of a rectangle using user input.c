/*
WAP:  To calculate area of a rectangle using user input
Date: 29-May-25
*/

#include<stdio.h>

int main()
{
	int l, b, area;
	printf("Enter the value of length: ");
	scanf("%d", &l);
	printf("Enter the value of breath: ");
	scanf("%d", &b);
	area= l*b;
	printf("The area of given rectangle is: %d cm", area);
	return 0;
}

