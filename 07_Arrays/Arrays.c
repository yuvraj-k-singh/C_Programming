/*
WAP: Introduction to Arrays
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int marks[5], i=0;
	for(i=0; i<5; i++){
		printf("Enter the value of marks %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	
	printf("\n");
	for(i=0; i<5; i++){
		printf("The value of marks %d: %d\n", i+1, marks[i]);
	}
	return 0;
}

