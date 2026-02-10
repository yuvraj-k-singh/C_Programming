/*
WAP: Input and Output
Date: 01-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r, c;
	printf("Enter the value of rows: ");
	scanf("%d", &r);
	printf("Enter thr value of columns: ");
	scanf("%d", &c);
	int arr[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) element: ", i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nThe given values are: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

