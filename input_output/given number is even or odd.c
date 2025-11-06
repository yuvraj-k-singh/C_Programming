/*
WAP: to check whether a given number is even or odd
Date: 03-june-25
*/

#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value of the element: ");
	scanf("%d", &a);
	
	if(a%2==0)
	{
		printf("The given value is even!");
	}
	else{
		printf("The given value is odd!");
	}
	return 0;
}

