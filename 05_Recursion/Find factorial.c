/*
WAP: Find Facrorial
Date: 27-aug-2025
*/

#include<stdio.h>

int fact(int n);

int main()
{
	int n, factorial;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	factorial=fact(n);
	printf("The factorial of %d is: %d", n, factorial);
	return 0;
}

int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	int factorial=n*fact(n-1);
	return factorial;
}
