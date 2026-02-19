/*
WAP: Transpose (nxn) and store in same array
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
	
	for(i=0;i<r;i++){
		for(j=i+1;j<c;j++){
			int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
		}
	}
	
	printf("\nAfter transpose the given matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

