/*
WAP: Print index of Array of marks less than 35
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int marks[10], i, n;
	printf("Enter the Total no of subjects: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter the marks of subject %d: ", i+1);
	    scanf("%d", &marks[i]);
	}
	
	for(i=0;i<n;i++){
		if(marks[i]<35){
			printf("The subject %d which has marks less than 35 is: %d\n", i+1, marks[i]);
		}
	}
	return 0;
}

