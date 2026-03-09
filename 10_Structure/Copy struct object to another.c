/*
WAP: Copy struct object to another
Date: 14-nov-2025
*/

#include<stdio.h>

typedef struct date{
	int day;
	int month;
	int year;
}book;

int main()
{
	book a, b;
	
	a.day = 1;
	a.month = 1;
	a.year = 2005;
	
	b = a;                  //Here all the values of a is copied to b object.
	printf("A Date is: %d/%d/%d\n", a.day, a.month, a.year);
	printf("B Date is: %d/%d/%d\n", b.day, b.month, b.year);
	return 0;
}

