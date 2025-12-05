/*
WAP: Find HCF
Date: 27-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, a, b, hcf;
	printf("Enter the value of first number: ");
	scanf("%d", &a);
	printf("Enter the value of second number: ");
	scanf("%d", &b);
	
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
		i++;
	}
	printf("The HCF of %d and %d is: %d", a, b, hcf);
	return 0;
}

