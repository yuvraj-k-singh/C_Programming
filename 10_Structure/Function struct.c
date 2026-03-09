/*
WAP: Function struct
Date: 19-nov-2025
*/

#include<stdio.h>

struct school{
	int id;
	int marks;
} class_5;

void display(struct school a);            //here we need to declare function using struct name..

void display(struct school a){            //when we pass struct as argument then, it will only work as pass by reference not pass by value
	printf("ID: %d\n", a.id);             //when we try to make few changes in id and marks within func, it will not reflect in main function
	printf("Marks: %d\n", a.marks);       // bcz it create copy of class_5 object as p.
}

int main()
{
	class_5.id = 101;
	class_5.marks = 80;
	display(class_5);      //here we need to pass an object whose value we want to pass.
	return 0;
}

