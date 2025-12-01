/*
WAP: Check Armstrong Number
Date: 02-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, original, rem, sum=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	original=n;
	
	while(n!=0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	
	if(sum==original){
		printf("The given %d number is Armstrong Number!", original);
	} else {
		printf("The given %d number is not Armstrong Number!", original);
	}
	return 0;
}

