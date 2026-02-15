/*
WAP: Rotate Matrix by 90 deg
Date: 04-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, k, r, c;
	printf("Enter the size of rows: ");
	scanf("%d", &r);
	printf("Enter the size of columns: ");
	scanf("%d", &c);
	int arr[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nThe given matrix is: \n");
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
	
	printf("\nThe transpose of the given matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0, k=c-1; j<k; j++, k--){
			int temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
		}
	}
	
	printf("\nThe Rotate of the given matrix by 90deg is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

