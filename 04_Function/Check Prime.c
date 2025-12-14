/*
WAP: Check given number is prime or not
Date: 23-aug-2025
*/

#include<stdio.h>

void prime(int n);

void prime(int n){
	int prime=0;
	int i=2;
	if(n<=0){
		printf("The prime number is not possible for given %d number", n);
	} else{
		for(i=2;i<n;i++){
			if(n%i==0){
				prime=1;
				break;
			}
		}
	}
	
	if(prime==1){
		printf("The given number %d is not prime!", n);
	} else{
			printf("The given number %d is prime!", n);
	}

  }

int main()
{
	int n;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	prime(n);
	return 0;
}

