/*
WAP: Check Even/Odd 
Date: 23-aug-2025
*/

#include<stdio.h>

void check_odd_even(int n);

void check_odd_even(int n){
	if(n%2==0){
		printf("The given number %d is even!", n);
	} else {
		printf("The given number %d is odd!", n);
	}
}

int main()
{
	int n;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	check_odd_even(n);
	return 0;
}

