/*
WAP: Marks and rollno
Date: 01-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, student, marks;
	printf("Enter the no of students: ");
	scanf("%d", &student);
	int arr[student][2];
	
	for(i=0;i<student;i++){
		for(j=0;j<2;j++){
			printf("Enter the value: ");
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nThe given marks of students are: \n");
	for(i=0;i<student;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

