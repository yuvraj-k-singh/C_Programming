/*
WAP: Multiplication of matrics
Date: 04-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, k, r, c, p, q;
	printf("Enter the size of first rows: ");
	scanf("%d", &r);
	printf("Enter the size of first columns: ");
	scanf("%d", &c);
	int arr[r][c];
	
	printf("\nEnter the value of first matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nEnter the size of second rows: ");
	scanf("%d", &p);
	printf("Enter the size of second columns: ");
	scanf("%d", &q);
	int brr[p][q];
	
	
	printf("\nEnter the value of second matrix: \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("Enter the Value of (%d,%d) elements: ", i+1,j+1);
	        scanf("%d", &brr[i][j]);
		}
	}
	
	if (c != p) {
    printf("\nMatrix multiplication not possible!");
    return 0;
}
	
	int common = c;
	int res[r][q];
	
	for(i=0;i<r;i++){
		for(j=0;j<q;j++){
			res[i][j]=0;
			for(k=0;k<common;k++){
				res[i][j]+=arr[i][k]*brr[k][j];
			}
		}
	}
	
	printf("\nThe multiplication of two matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<q;j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

