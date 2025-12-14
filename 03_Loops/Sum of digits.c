/*
WAP: Sum of digits of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int n, sum=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	while(n!=0){
		sum = sum + (n%10);
		n=n/10;
	}
	printf("The sum of digits of given number is: %d", sum);
	return 0;
}

