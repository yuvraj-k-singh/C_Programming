/*
WAP: Print 1 to n
Date: 27-aug-2025
*/

#include<stdio.h>

void increase(int n);

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("The increasing value of 1 to %d is: \n", n);
	increase(n);
	return 0;
}

void increase(int n){
	if(n==0){
		return;
	}
	increase(n-1);
	printf("%d\n", n);
	return;
}
