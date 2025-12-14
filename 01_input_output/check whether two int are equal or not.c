/*
WAP: To accept two integers and check whether they are equal or not
Date: 03-june-25
*/

#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of first element: ");
	scanf("%d", &a);
	printf("Enter the value of second element: ");
	scanf("%d", &b);
	
	if(a==b)
	{
		printf("The both element values are same!");
	}
	else{
		printf("The both element values are not same!");
	}
	return 0;
}

