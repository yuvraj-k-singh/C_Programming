/*
WAP: Print AP 1, 3, 5, 7,.....n
Date:
*/

#include<stdio.h>

int main()
{
	int n, i=1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=1; i<=2*n-1; i+=2){
		printf("%d\n", i);
	}
	return 0;
}

