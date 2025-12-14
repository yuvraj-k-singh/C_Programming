/*
WAP: Area of a circle
Date: 29-May-25
*/

#include<stdio.h>

int main()
{
	float r, area;
	printf("Enter the value of radius: ");
	scanf("%f", &r);
	area= 3.14*r*r;
	printf("The area of given circle is: %f cm", area);
	return 0;
}

