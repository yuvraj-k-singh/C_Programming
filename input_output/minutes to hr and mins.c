/*
WAP: to takes minutes as input, and display the total number of hours and minutes
Date: 19-aug-2025
*/

#include<stdio.h>

int main()
{
	int input, hours, mins;
	printf("Enter the value of minutes: ");
	scanf("%d", &input);
	hours = input/60;
	mins = input%60;
	printf("The total number of hours is %d, and minutes is %d", hours, mins);
	return 0;
}

