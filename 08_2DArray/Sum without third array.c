/*
WAP: Sum without third array
Date: 04-oct-2025
*/

#include<stdio.h>

void sum(int r, int c ,int a_arr[r][c], int b_arr[r][c]);

int main()
{
	int i, j, r, c;
	printf("Enter the size of rows: ");
	scanf("%d", &r);
	printf("Enter the size of columns: ");
	scanf("%d", &c);
	int a_arr[r][c], b_arr[r][c];
	
	printf("\nEnter the values of first matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &a_arr[i][j]);
		}
	}

	printf("\nEnter the values of second matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &b_arr[i][j]);
		}
	}
	
	sum(r, c, a_arr, b_arr);
	
	printf("\nThe Sum of two matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", a_arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


void sum(int r, int c ,int a_arr[r][c], int b_arr[r][c]){
	int i, j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			a_arr[i][j]+= b_arr[i][j];
		}
	}
	return;
}

