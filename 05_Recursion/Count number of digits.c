/*
WAP: Count number of digits
Date: 28-aug-2025
*/

#include<stdio.h>

int count(int n);

int main()
{
	int n;
	printf("Enter the value of number: ");
	scanf("%d", &n);
	printf("Number of the digits of number is: %d", count(n));
	return 0;
}

int count(int n){
	static int ctr=0;

     if(n!=0)
     {
        ctr++;
        count(n/10);
    }
    return ctr;
}

