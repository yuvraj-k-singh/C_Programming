/*
WAP: find the largest numbers amongs three
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("Enter the value of c: ");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("The greater value is a!");
	} else if(b>a && b>c){
		printf("The greater value is b!");
	} else{
		printf("The greater value is c!");
	}
	return 0;
}

