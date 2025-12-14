/*
WAP: Count total digits of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int n, count=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("The number of digits contain by given number is: %d", count);
	return 0;
}

