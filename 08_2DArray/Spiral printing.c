/*
WAP: Spiral printing
Date: 24-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r, c;
	printf("Enter the size of row: ");
	scanf("%d", &r);
	printf("Enter the size of column: ");
	scanf("%d", &c);
	int arr[r][c];
	
	printf("\nEnter the value of matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the value of (%d,%d) element: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nThe original value of matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	int minr=0, maxc=c-1, maxr=r-1, minc=0, count=0, tc=r*c;
	printf("\nThe value of sprial print is: ");
	while(count<tc){
		//minr
		for(j=minc;j<=maxc && count<tc;j++){
			printf("%d ", arr[minr][j]);
			count++;
		}
		minr++;
		
		//maxc
		for(i=minr;i<=maxr && count<tc;i++){
			printf("%d ", arr[i][maxc]);
			count++;
		}
		maxc--;
		
		//maxr
		for(j=maxc;j>=minc && count<tc;j--){
			printf("%d ", arr[maxr][j]);
			count++;
		}
		maxr--;
		
		//minc
		for(i=maxr;i>=minr && count<tc;i--){
			printf("%d ", arr[i][minc]);
			count++;
		}
		minc++;
	}
	
	return 0;
}

