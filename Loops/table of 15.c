/*
WAP: Print table of 15
Date:
*/

#include<stdio.h>

int main()
{
	int n=15, i=1;
	printf("Table of 15 is: \n");
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", n, i, n*i);
	}
	return 0;
}

