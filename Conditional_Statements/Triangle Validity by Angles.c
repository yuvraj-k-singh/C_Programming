/*
WAP: Check whether a triangle can be formed with the given values for the angles
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	int a, b, c, sum;
	printf("Enter the values of three angle of triangle: \n");
	scanf("%d %d %d", &a, &b, &c);
	sum= a+b+c;
	printf("You entered angle a= %d, b= %d, c= %d and their sum is: %d\n", a, b, c, sum);
	
	if(sum==180){
		printf("According to given angles, it is a triangle!");
	} else{
		printf("According to given angles, it is not a triangle!");
	}
	return 0;
}

