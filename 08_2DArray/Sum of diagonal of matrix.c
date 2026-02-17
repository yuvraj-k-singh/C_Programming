/*
WAP: Sum of diagonal of matrix
Date: 20-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r, c, sum=0;
	printf("Enter the size of row: ");
	scanf("%d", &r);
	printf("Enter the size of column: ");
	scanf("%d", &c);
	int arr[r][c];
	
	printf("\nEnter the value of matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) element: ",i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\The original matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=arr[i][j];
			}
		}
	}
	
	printf("\nThe sum of diagonal elements of matrix is: %d", sum);
	
	return 0;
}

