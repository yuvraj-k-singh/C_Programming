/*
WAP: Sum difference of odd & even indices
Date: 08-sep-2025
*/

#include<stdio.h>

int main()
{
	int i, n, sum_even=0, sum_odd=0;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(i%2!=0){
			sum_odd+=arr[i];
		} else {
			sum_even+=arr[i];
		}
	}
	
	printf("\nThe Sum difference of odd and even indices is: %d", sum_even-sum_odd);
	return 0;
}

