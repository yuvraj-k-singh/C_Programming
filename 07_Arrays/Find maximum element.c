/*
WAP: Find maximum element
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the value of element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	int max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("\nThe maximum value of elements is: %d", max);
	return 0;
}

