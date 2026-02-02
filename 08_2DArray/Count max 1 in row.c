/*
WAP: Count max 1 in row
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
	
	int max_count=0, row=0;
	
	for(i=0;i<r;i++){
		int count=0;
		for(j=0;j<c;j++){
			if(arr[i][j]==1){
				count++;
			}
		}
		if(count>max_count){
			max_count = count;
			row = i+1;
		}
	}
	
	printf("\nThe %d row has maximum 1s number, which is %d!", row, max_count);
	
	return 0;
}

