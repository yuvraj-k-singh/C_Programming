/*
WAP: Max and Min
Date: 04-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r, c;
	printf("Enter the size of rows: ");
	scanf("%d", &r);
	printf("Enter the size of columns: ");
	scanf("%d", &c);
	int arr[r][c];
	
	printf("\nEnter the values of the matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &arr[i][j]);
		}
	}
	
	int max=arr[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	
	printf("\nThe maximum element of 2D array is: %d\n", max);
	
	int min=arr[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(min>arr[i][j]){
				min=arr[i][j];
			}
		}
	}
	printf("\nThe minimum element of 2D array is: %d\n", min);
	return 0;
}

