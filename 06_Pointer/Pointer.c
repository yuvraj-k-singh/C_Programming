/*
WAP: Introduction to Pointer
Date: 03-sep-2025
*/

#include<stdio.h>

int main()
{
	int n=112;
	printf("The address of n is: %p\n", &n);          //Hexa-decimal value
	printf("The address of n is: %u\n", &n);          //decimal value
	printf("The value of n is: %d\n", n); 
	
	int *p=&n;                                        //Pointer poiting to n (decleared)
	printf("\nThe address of n is: %p\n", p);           //Pointer printing the address of n
	printf("The address of n is: %u\n", p);
	printf("The value of n is: %d\n", *p);            //Pointer printing the value of n
	return 0;
}

