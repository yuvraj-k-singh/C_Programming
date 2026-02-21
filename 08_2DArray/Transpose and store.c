/*
WAP: Transpose and store in another array
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
	int brr[c][r];
	
	printf("\nEnter the value of matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nBefore transpose the given matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			brr[i][j]=arr[j][i];
		}
	}
	
	printf("\nAfter transpose the given matrix is: \n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

