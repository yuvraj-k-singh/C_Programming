/*
WAP: Reverse of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int n, reverse=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	while(n!=0){
		reverse = reverse*10 + (n%10);
		n=n/10;
	}
	
	printf("The reverse of given number is: %d", reverse);
	return 0;
}

