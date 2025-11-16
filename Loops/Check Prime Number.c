/*
WAP: Check Prime Number of given number
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=2, n, prime=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
			prime=1;
			break;
		}
	}
	
	if(prime==1){
		printf("The given number %d is not prime number", n);
	} else{
		printf("The given number %d is prime number", n);
	}
	
	return 0;
}

