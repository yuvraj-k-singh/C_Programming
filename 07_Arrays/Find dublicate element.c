/*
WAP: Find duplicate element
Date: 01-oct-2025
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
	int n, i, j;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
	    scanf("%d", &arr[i]);
	}
	
	int value;
	bool flag = false;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		if(arr[i]==arr[j]){
			value = arr[i];
			flag=true;
			break;
		}
	}
	
	if(flag==true){
		printf("\nThe given element %d is duplicate in the array!", value);
	} else{
		printf("\nThere is no duplicate element is in the array!", value);
	}
	
	return 0;
}

