/*
WAP: Sum of digits
Date: 28-aug-2025
*/

#include<stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	printf("The sum of digits %d is: %d", n, sum(n));
	return 0;
}

int sum(int n){
	static int add=0;
	if(n!=0){
		add=add+(n%10);
		sum(n/10);
	}
	return add;
}

