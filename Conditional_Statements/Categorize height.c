/*
WAP: Categorize the person according to their height
Date: 20-aug-2025
*/

#include<stdio.h>

int main()
{
	float height;
	printf("Enter the value of height in Cm: ");
	scanf("%f", &height);
	
	if(height<150){
		printf("The person is 'Dwarf' according to their height!");
	} else if(height==150 && height<=165){
		printf("The person is 'Average height' according to their height!");
	} else{
		printf("The person is 'Tall' according to their height!");
	}
	return 0;
}

