/*
WAP: Find Lcm of number using Recursion varient
Date: 30-aug-2025
*/

#include<stdio.h>

int lcm(int a, int b);

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("LCM of %d and %d is: %d", a, b, lcm(a,b));
	return 0;
}

int lcm(int a, int b){
	static temp=1;
	if(temp%a==0 && temp%b==0){
		return temp;
	} else {
		temp++;
		lcm(a,b);
	}
	return temp;
}
