/*
WAP: calculate simple interest
Date:
*/

#include<stdio.h>

int main()
{
	float r, t, p, s;
	printf("Enter the value of Rate: ");
	scanf("%f", &r);
	printf("Enter the value of Princple: ");
	scanf("%f", &p);
	printf("Enter the value of Time: ");
	scanf("%f", &t);
	s = (r*p*t)/100;
	printf("The given value of simple interest is: %f", s);
	return 0;
}

