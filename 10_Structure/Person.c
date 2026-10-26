/*
WAP: Person
Date: 14-nov-2025
*/

#include<stdio.h>
#include<string.h>

struct person{
	char name[20];
	int age;
	int salary;
}a, b, c;

int main()
{
	strcpy(a.name, "Yuvraj");
	a.age = 20;
	a.salary = 25000;
	
	strcpy(b.name, "Payal");
	b.age = 20;
	b.salary = 20000;
	
	strcpy(c.name, "Vikash");
	c.age = 20;
	c.salary = 21000;
	
	printf("Person details: \n");
	printf("\nName\t\t Age\t\t Salary\t\n");
	printf("%s\t\t %d\t\t %d\t\n", a.name, a.age, a.salary);
	printf("%s\t\t %d\t\t %d\t\n", b.name, b.age, b.salary);
	printf("%s\t\t %d\t\t %d\t\n", c.name, c.age, c.salary);
	return 0;
}

