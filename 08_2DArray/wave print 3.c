/*
WAP: wave print 3
Date: 22-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, r=3, c=3;
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	printf("Original matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAfter matrix: \n");
	for(j=0;j<c;j++){
		if(j%2==0){
			for(i=r-1;i>=0;i--){
			printf("%d\t", arr[i][j]);
		    }
		} else{
			for(i=0;i<r;i++){
			printf("%d\t", arr[i][j]);
		    }
		}
		printf("\n");
	}
	
	return 0;
}

