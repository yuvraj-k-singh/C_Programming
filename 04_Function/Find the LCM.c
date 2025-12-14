/*
WAP: Find the LCM of two numbers
Date: 24-aug-2025
*/

#include<stdio.h>

void lcm(int a, int b);

void lcm(int a, int b){
	int lcm;
	if(a<=0 || b<=0){
		printf("LCM is only defined for positive integers. Please enter numbers greater than 0.\n");
	 } else{
	 	if(a>b){
		lcm=a;
	}else {
		lcm=b;
	}
  }


	while(1){
		if(lcm%a==0 && lcm%b==0){
			printf("The LCM of two numbers %d and %d is: %d", a, b, lcm);
			break;
		}
		lcm++;
	}
}

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	lcm(a,b);
	return 0;
}

