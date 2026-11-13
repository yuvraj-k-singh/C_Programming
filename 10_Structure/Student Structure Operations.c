/*
WAP: Student Structure Operations
Date: 20-nov-2025
*/

#include<stdio.h>

struct student{
	char name[20];
	int age;
	float marks;
}s1, s2;

int main()
{
	printf("Input details for Student 1:\n");
	printf("Name: ");
	scanf("%s", s1.name);
	printf("Age: ");
	scanf("%d", &s1.age);
	printf("Marks: ");
	scanf("%f", &s1.marks);
	
	printf("\nInput details for Student 2:\n");
	printf("Name: ");
	scanf("%s", s2.name);
	printf("Age: ");
	scanf("%d", &s2.age);
	printf("Marks: ");
	scanf("%f", &s2.marks);
	
	printf("\nStudent 1 Information:\n");
	printf("Name: %s, Age: %d, Total marks: %.2f\n", s1.name, s1.age, s1.marks);
	printf("\nStudent 2 Information:\n");
	printf("Name: %s, Age: %d, Total marks: %.2f\n", s2.name, s2.age, s2.marks);
	
	float avg = (s1.marks + s2.marks)/2;
	
	printf("\nAverage marks: %.2f\n", avg);
	return 0;
}

