/*
WAP: Find max sum of row
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
	
	int max_sum=0, row=0;
	
	for(i=0;i<r;i++){
		int sum=0;
		for(j=0;j<c;j++){
			sum+=arr[i][j];
		}
		if(sum>max_sum){
			max_sum = sum;
			row = i+1;
		}
	}
	
	printf("\nThe %d row has maximum sum, which is %d!", row, max_sum);
	
	return 0;
}

