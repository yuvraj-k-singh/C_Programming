/*
WAP: Find second maximum number
Date: 30-sep-2025
*/

#include<stdio.h>

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
	
	int max=arr[0];
	int s_max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("The maximum value amongs %d elements is: %d\n", n, max);
	
	for(i=0;i<n;i++){
		if(max!=arr[i] && s_max<arr[i]){
			s_max=arr[i];
		}
	}
	printf("The second maximum value amongs %d elements is: %d\n", n, s_max);
	
	return 0;
}

