/*
WAP: Find double pair sum
Date: 30-sep-2025
*/

#include<stdio.h>

int main()
{
	int arr[10]={2,4,5,6,7,8,5,3,5,3};
	int pair=0, i, j, x, found=0;
	
	printf("Enter the value of element: ");
	scanf("%d", &x);
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]+arr[j]==x){
				found=1;
				pair++;
			    printf("(%d,%d) ", arr[i],arr[j]);
			}
		}
	}
	
	if(found==1){
		printf("\nThe total number of pair whose sum is equal to %d is: %d", x, pair);
	} else{
		printf("\nThere is no pair pf elements whose sum is equal to %d", x);
	}
	return 0;
}

