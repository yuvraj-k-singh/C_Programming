/*
WAP: Sum of First 10 Natural Numbers
Date: 21-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, sum=0;
	for(i=1; i<=10; i++){
		printf("%d\n", i);
		sum+=i;
	}
	printf("\n");
	printf("The sum of first 10 natural number is: %d", sum);
	return 0;
}

