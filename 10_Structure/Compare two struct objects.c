/*
WAP: Compare two struct objects
Date: 14-nov-2025
*/

#include<stdio.h>
#include<stdbool.h>

typedef struct date{
	int day;
	int month;
	int year;
}date;

int main()
{
	date a, b;
	
	a.day = 1;
	a.month = 1;
	a.year = 2005;
	
	b = a;                  //Here all the values of a is copied to b object.
	
	bool flag = true;
	
	if(a.day!=b.day) flag = false;
	if(a.month!=b.month) flag = false;
	if(a.year!=b.year) flag = false;
	
	if(flag==false){
		printf("The structure are different!");
	} else printf("The structure are Same!");
	return 0;
}

