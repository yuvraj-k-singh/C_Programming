/*
WAP: Check Palindrome number
Date: 02-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, original, reverse=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	original=n;
	
	while(n!=0){
		reverse = reverse*10 + (n%10);
		n=n/10;
	}
	
	if(original==reverse){
		printf("The given %d number is Palindrome number!", original);
	} else{
		printf("The given %d number is not Palindrome number!", original);
	}
	return 0;
}


