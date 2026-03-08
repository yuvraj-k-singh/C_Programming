/*
WAP: Circle Structure Calculations
Date: 20-nov-2025

Define a structure named Circle to represent a circle with a radius. 
Write a C program to calculate the area and perimeter of two circles and display the results.

*/

#include<stdio.h>

struct circle{
	float radius;
} r1, r2;

float area(struct circle r){
	return 3.14 * r.radius * r.radius;
}

int main()
{
	printf("Enter Circle details: \n");
	printf("Radius of circle 1: ");
	scanf("%f", &r1.radius);
	printf("Radius of circle 2: ");
	scanf("%f", &r2.radius);
	
	printf("\n-------Circle details-------\n");
	printf("Area of circle 1: %.2f\n", area(r1));
	printf("Area of circle 2: %.2f\n", area(r2));
	return 0;
}

