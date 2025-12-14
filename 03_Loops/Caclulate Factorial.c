/*
WAP: Caclulate Factorial of the given number
Date: 24-aug-2025
*/

#include<stdio.h>

int fact(int n);

int fact(int n){
	int fact=1, i=1, f;
	while(i<=n){
		fact*=i;
		i++;
	}
	return fact;
}

int main()
{
	int n, f;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	f = fact(n);
	printf("The factorial of the given number %d is: %d", n, f);
	return 0;
}

