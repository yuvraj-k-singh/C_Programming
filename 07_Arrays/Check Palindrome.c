/*
WAP: Check Palindrome
Date: 01-oct-2025
*/

#include<stdio.h>

void palindrome(int arr[], int n);

void palindrome(int arr[], int n){
	int i=0, j=(n-1);
	for(i=0, j=(n-1); i<j; i++, j--){
		if(arr[i]!=arr[j]){
			printf("The given array is not Palindrome!");
			return;
		}
	}
	printf("The given array is Palindrome!");
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
	
	palindrome(arr, n);
	return 0;
}

