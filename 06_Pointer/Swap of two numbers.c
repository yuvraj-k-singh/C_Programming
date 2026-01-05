/*
WAP: Swap of two numbers using pointer
Date:
*/

#include<stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b){
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	return;
}

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("Before Swap: The value of A is %d and B is %d\n", a, b);
	swap(&a,&b);
	printf("After Swap: The value of A is %d and B is %d", a, b);
	return 0;
}

