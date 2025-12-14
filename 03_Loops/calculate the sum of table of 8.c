/*
WAP: calculate the sum of the numbers occurring in the
multiplication table of 8
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i, n=8, sum=0;
	printf("The multiplication of table of 8 is: \n");
	for(i=1; i<=10; i++){
		printf("%d x %d= %d\n", i, n, i*n);
		sum+=i*n;
	}
	printf("\nThe Sum of numbers of occurs in table of 8 is: %d\n", sum);
	return 0;
}

