/*
WAP: Sum of reverse and original of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int n, original_n, reverse=0, sum;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	original_n=n;
	
	while(n!=0){
		reverse = reverse*10 + (n%10);
		n=n/10;
	}
	sum=original_n+reverse;
	printf("The reverse of given number is: %d\n", reverse);
	printf("The Sum of given original number %d and reverse number %d is: %d\n", original_n, reverse, sum);
	return 0;
}
