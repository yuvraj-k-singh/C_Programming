/*
WAP: Nested Car struct
Date: 19-nov-2025
*/

#include<stdio.h>
#include<string.h>

typedef struct car{
	int seat;
	char name[50];
	char model;
} car;

typedef struct supercar{
	car normal;
	char class;
} supercar;

int main()
{
	supercar sc;
	sc.normal.model = 'A';
	sc.class = 'M';
	strcpy(sc.normal.name, "BMW Series S6");
	sc.normal.seat = 5;
	
	printf("Car details: \n");
	printf("Name: %s\n", sc.normal.name);
	printf("Model: %c\n", sc.normal.model);
	printf("Class: %c\n", sc.class);
	printf("Seat: %d\n", sc.normal.seat);
	return 0;
}

