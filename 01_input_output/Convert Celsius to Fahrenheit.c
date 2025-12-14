/*
WAP: Convert Celsius to Fahrenheit
Date: 29-May-25
*/

#include<stdio.h>

int main()
{
	float c, f;
	printf("Enter the value of celsius: ");
	scanf("%f", &c);
	f= (c*9/5)+32;
	printf("The value of celsius in fahrenheit is: %f °F", f);
	return 0;
}

