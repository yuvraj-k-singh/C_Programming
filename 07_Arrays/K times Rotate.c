/*
WAP: K times Rotate
Date: 22-oct-2025
*/

#include<stdio.h>

void rev(int arr[], int s, int e);

void rev(int arr[], int s, int e){
	int i, j;
	for(i=s, j=e; i<j; i++, j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main()
{
	int n, i, k;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("\nEnter the value of elements: \n");
	for(i=0;i<n;i++){
		printf("Enter the value of %d elements: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the value of k: ");
	scanf("%d", &k);
	
	k=k%n;
	
	printf("\nBefore rotate: \n");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	rev(arr, 0, n-1);
	rev(arr, 0, k-1);
	rev(arr, k, n-1);
	
	printf("\nAfter rotate: \n");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
