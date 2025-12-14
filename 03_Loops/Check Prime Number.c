/*
WAP: Check prime number of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=2, n, prime=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("The prime number is not possible for given %d number", n);
		return 0;
	} else if(n==1){
	 prime=1;
	} else {
		while(i<n){
			if(n%i==0){
				prime=1;
				break;
			}
			i++;
		}
	}
	
	if(prime==1){
		printf("The given number %d is not prime", n);
	} else {
		printf("The given number %d is prime", n);
	}
	return 0;
}

