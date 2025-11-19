/*
WAP: Display n Terms of Natural Numbers and Their Sum
Date:
*/

#include<stdio.h>

int main()
{
	int n, i=1, sum=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("%d\n", i);
		sum+=i;
	}
	printf("\n");
	printf("The sum of first 10 natural number is: %d", sum);
	return 0;
}

