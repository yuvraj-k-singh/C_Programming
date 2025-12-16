/*
WAP: Find fibonacci series
         0 1 1 2 3 5 8
index:   1 2 3 4 5 6 7 
Date: 28-aug-2025
*/

#include<stdio.h>

int fibo(int n);

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("The fibonacci series of %d is: %d\n", n, fibo(n));
	return 0;
}

int fibo(int n){
	if(n==1 || n==2){
		return (n-1);
	}
	return fibo(n-1) + fibo(n-2);
}

