/*
WAP: Sum of all even number of given number
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, n, sum=0;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	
	while(i<=n){
		if(i%2==0){
			printf("The even number is: %d\n", i);
			sum+=i;
		}
		i++;
	}
	printf("The sum of all even numbers is: %d", sum);
	return 0;
}

