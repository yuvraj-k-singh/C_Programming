/*
WAP: Copy elements in reverse
Date: 30-sep-2025
*/

#include<stdio.h>

int main()
{
	int i, n;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int a_arr[n], b_arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
		scanf("%d", &a_arr[i]);
	}
	
	for(i=0;i<n;i++){
		b_arr[i]=a_arr[(n-1)-i];
	}
	
	printf("\nThe value of elements in reverse is: ");
	for(i=0;i<n;i++){
		printf("%d ", b_arr[i]);
	}
	return 0;
}

