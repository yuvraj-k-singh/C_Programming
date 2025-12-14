/*
WAP: Find the value of number raise to power
Date:
*/

#include<stdio.h>

int main()
{
	int i=1, a, b, power=1;
	printf("Enter the value of base: ");
	scanf("%d", &a);
	printf("Enter the value of power: ");
	scanf("%d", &b);
	
	while(i<=b){
		power*=a;
		i++;
	}
	printf("The value of number raise to power is: %d", power);
	return 0;
}

