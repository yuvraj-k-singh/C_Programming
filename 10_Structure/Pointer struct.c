/*
WAP: Pointer struct
Date: 19-nov-205
*/

#include<stdio.h>

struct student{
	int id;
	int class;
} class_5;

int main()
{
	class_5.class = 5;
	class_5.id = 202;
	
	struct student* ptr = &class_5;   
	(*ptr).class = 6;                  //way to initialize value using pointer
	ptr->id = 303;                     //another way to initialize value using pointer called arrow opeator
	 
	printf("CLASS: %d and ID: %d", ptr->class, (*ptr).id);
	return 0;
}

