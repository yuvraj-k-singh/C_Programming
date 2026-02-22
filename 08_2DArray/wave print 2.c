/*
WAP: wave print 2
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
	for(i=0;i<r;i++){
		if(i%2==0){
			for(j=c-1;j>=0;j--){
			printf("%d\t", arr[i][j]);
		    }
		    printf("\n");
		} else{
			for(j=0;j<c;j++){
			printf("%d\t", arr[i][j]);
		    }
		    printf("\n");
		}
	}
	
	return 0;
}

