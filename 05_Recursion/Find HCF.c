/*
WAP: Find HCF of number using Recursion varient
Date: 30-aug-2025
*/

#include<stdio.h>

int hcf(int a, int b);

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("HCF of %d and %d is: %d", a, b, hcf(a,b));
	return 0;
}

int hcf(int a, int b){
	if(b==0){
		return a;
	}
	return hcf(b, a%b);
}
