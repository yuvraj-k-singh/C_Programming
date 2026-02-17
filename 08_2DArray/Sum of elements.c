/*
WAP: Sum of elements
Date: 04-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r, c, sum=0;
	printf("Enter the size of rows: ");
	scanf("%d", &r);
	printf("Enter the size of columns: ");
	scanf("%d", &c);
	int a_arr[r][c];
	
	printf("\nEnter the values of matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &a_arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum+= a_arr[i][j];
		}
	}
	
	printf("\nThe sum of elements of given 2D array is: %d", sum);
	return 0;
}

