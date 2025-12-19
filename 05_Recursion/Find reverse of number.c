/*
WAP: Find reverse of number using Recursion varient
Date: 30-aug-2025
*/

#include<stdio.h>

int rev(int n);

int main()
{
	int n;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	printf("The Reverse value of %d number is: %d", n, rev(n));
	return 0;
}

int rev(int n){
	static rev_number=0;
	if(n!=0){
		rev_number=rev_number*10+(n%10);
		rev(n/10);
	}
	return rev_number;
}
