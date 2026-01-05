/*
WAP: Array Copy
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr1[n];
	for(i=0;i<n;i++){
		printf("Enter the value of element %d: ", i+1);
	    scanf("%d", &arr1[i]);
	}
	
	int arr2[n];
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
	}
	
	printf("\nThe value of array 2 is: ");
	for(i=0;i<n;i++){
		printf("%d ", arr2[i]);
	}
	return 0;
}

