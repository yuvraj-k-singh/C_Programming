/*
WAP: Calculate power
Date: 28-aug-2025
*/

#include<stdio.h>

int power(int a, int b);

int main()
{
	int a, b, p;
	printf("Enter the value of base: ");
	scanf("%d", &a);
	printf("Enter the value of power: ");
	scanf("%d", &b);
	p=power(a,b);
	printf("the value of %d to raise power %d is: %d", a, b, p);
	return 0;
}

int power(int a, int b){
	if(b==0){
		return 1;
	}
	return a*power(a,b-1);
}

