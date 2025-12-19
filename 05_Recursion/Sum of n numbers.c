/*
WAP: Sum of n numbers
Date: 27-aug-2025
*/

#include<stdio.h>

void sum(int n, int add);

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	sum(n, 0);
	return 0;
}

void sum(int n, int add){
	if(n==0){
		printf("The sum is: %d", add);
		return;
	}
	sum(n-1, add+n);
	return;
}
