/*
WAP: Find duplicate element
Date: 01-oct-2025
*/

#include<stdio.h>

int main()
{
	int n, i, result=0;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
	    scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		result^=arr[i];
	}
	
	printf("\nThe given %d element is unique in the array!", result);
	
	return 0;
}

