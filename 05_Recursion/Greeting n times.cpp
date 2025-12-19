/*
WAP: Greeting n times
Date: 27-aug-2025
*/

#include<stdio.h>

void greet(int n);                              //Function Protocol

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	greet(n);                             //Function Call
	return 0;
}

void greet(int n){                        //Function define
	if(n==0){                             //Base Case (it is used to stop further recursion)
		return;
	}
	printf("Good Morning!\n");
	greet(n-1);                           //Recursion Call(Function call itself)     
	return;            
}

