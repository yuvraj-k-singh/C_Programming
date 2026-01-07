/*
WAP: Count elements greater than x
Date: 08-sep-2025
*/

#include<stdio.h>

int main()
{
	int i, n, x, count=0;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the value of X is: ");
	scanf("%d", &x);
	
	for(i=0;i<n;i++){
		if(arr[i]>x){
			count++;
		}
	}
	
	printf("\nThe no of elements whose value greater than X is: %d", count);
	
	return 0;
}

