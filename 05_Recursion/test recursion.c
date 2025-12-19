/*
WAP: test recursion
Date:
*/

#include<stdio.h>

int fact(int n);

int main()
{
	int n, f;
	printf("Enter the value: ");
	scanf("%d", &n);
	f=fact(n);
	printf("The fact value is: %d", f);
	return 0;
}

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	return n*fact(n-1);
}
