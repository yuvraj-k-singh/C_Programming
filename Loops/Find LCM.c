/*
WAP: Find the LCM of two numbers
Date: 23-aug-2025
*/

#include<stdio.h>

int main()
{
	int a, b, lcm;
	printf("Enter the first value: ");
	scanf("%d", &a);
	printf("Enter the Second value: ");
	scanf("%d", &b);
	
	if(a>b){
		lcm=a;
	} else lcm=b;
	
	while(1){
		if(lcm%a==0 && lcm%b==0){
			printf("The lcm of %d and %d is: %d", a, b, lcm);
			break;
		} 
		lcm++;
	}
	return 0;
}

