/*
WAP: Array Reverse Display
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the value of element %d: ", i+1);
	    scanf("%d", &arr[i]);
	}
	printf("\nThe reverse value of elements is: ");
	for(i=n-1;i>=0;i--){
		printf("%d ", arr[i]);
	}
	return 0;
}

