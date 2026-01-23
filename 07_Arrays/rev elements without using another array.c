/*
WAP: rev elements without using another array
Date: 01-oct-2025
*/

#include<stdio.h>

void rev(int arr[], int n);

void rev(int arr[], int n){
	int i=0, j=(n-1);
	for(i=0, j=(n-1); i<j; i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		return;
	}
}

int main()
{
	int n, i;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
	    scanf("%d", &arr[i]);
	}
	
	printf("The value of elements before reverse: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	rev(arr, n);
	printf("\nThe value of elements after reverse: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

