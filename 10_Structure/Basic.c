/*
WAP: Basic Structure
Date: 14-nov-2025
Defination: Structure is a block of code, which makes the program easier. It is user defined datatype,
it can hold diffeerent types of datatypes in single data type.
*/

#include<stdio.h>

struct book{                        //declare structure
	int id;
	int price;
} a;                               //declare object a

int main()
{
	struct book b;                //declare object b
	
	a.id = 101;                 //intialize value to objects
	a.price = 100;
	b.id = 102;
	b.price = 110;
	
	printf("Book id 1: %d, and price: %d\n", a.id, a.price);        //object calling
	printf("Book id 2: %d, and price: %d\n", b.id, b.price);
	return 0;
}

