/*
WAP: Maximum of Two numbers
Date: 03-sep-2025
*/

#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	int *p1=&a;
	int *p2=&b;
	if(*p1>*p2){
		printf("The value of %d is maxiumum!", *p1);
	} else {
		printf("The value of %d is maxiumum!", *p2);
	}
	return 0;
}

