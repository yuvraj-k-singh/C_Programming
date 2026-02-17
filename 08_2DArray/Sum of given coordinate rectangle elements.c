/*
WAP: Sum of given coordinate rectangle elements
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
//			printf("Enter the value of (%d,%d) elements: ", i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	int s_i, s_j, e_i, e_j, sum=0;
	printf("\nEnter the value of starting coordinates: ");
	scanf("%d %d", &s_i, &s_j);
	printf("Enter the value of ending coordinates: ");
	scanf("%d %d", &e_i, &e_j);
	
	for(i=s_i-1;i<e_i;i++){
		for(j=s_j-1;j<e_j;j++){
			sum+=arr[i][j];
		}
	}
	
	printf("\nThe sum of given coordinates rectangle elements is: %d", sum);
	return 0;
}

