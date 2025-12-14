/*
WAP: To takes hours and minutes as input, and calculates the total number of minutes
Date: 03-june-25
*/

#include<stdio.h>

int main()
{
	int h, m, c, t;
	printf("Enter the value in hours: ");
	scanf("%d", &h);
	printf("Enter the value in minutes: ");
	scanf("%d", &m);
	c = h*60;
	t = m+c;
	printf("Total value of minutes: %d", t);
	return 0;
}

