/*
WAP: sum of column
Date: 23-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, sum, max=0;
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	printf("Original matrix: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe sum of matrix: \n");
	for(j=0;j<3;j++){
		sum=0;
		for(i=0;i<3;i++){
			sum+=arr[i][j];
		}
		printf("Column %d is: %d\n", j+1, sum);
		
		if(max<sum){
			max=sum;
		}
	}
	
	printf("\nThe highest sum of column is: %d", max);
	return 0;
}

