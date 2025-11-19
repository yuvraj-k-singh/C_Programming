/*
WAP: Fibonacci Series
Date: 27-aug-2025
*/

#include<stdio.h>

int main()
{
	int n, i, a=0, b=1, next;
	printf("Enter the value of elements: ");
	scanf("%d", &n);
	
	printf("The Fibonacci Series of elements is: \n");
	for(i=1;i<=n;i++){
		printf(" %d", a);
		next=a+b;
		a=b;
		b=next;
	}
	return 0;
}

