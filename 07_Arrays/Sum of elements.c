/*
WAP: Sum of elements
Date: 04-sep-2025
*/

#include<stdio.h>

int main()
{
	int n, i, sum=0;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the value of element %d: ", i+1);
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("\nThe Sum of %d elements: %d", n, sum);
	return 0;
}

