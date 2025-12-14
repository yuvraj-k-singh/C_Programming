/*
WAP: Factorial Calculation of given number
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, fact=1, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Factorial of the %d negative or zero is not possible", n);
	} else{
		for(i=1; i<=n; i++){
			fact*=i;
		}
		printf("The factorial value of given number %d is: %d", n, fact);
	}
	return 0;
}

