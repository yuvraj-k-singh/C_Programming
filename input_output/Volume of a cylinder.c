/*
WAP: Volume of a cylinder
Date: 29-May-25
*/

#include<stdio.h>

int main()
{
	float r, h, volume;
	printf("Enter the value of radius: ");
	scanf("%f", &r);
	printf("Enter the value of height: ");
	scanf("%f", &h);
	volume= 3.14*r*r*h;
	printf("The volume of given cylinder is: %f cm", volume);
	return 0;
}
