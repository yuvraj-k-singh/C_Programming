/*
WAP: Mutiply and add index(for odd index mutiply by 2 and for even index add by 10)
Date: 08-sep-2025
*/

#include<stdio.h>

int main()
{
	int i, n;
	printf("Enter the size of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(i%2!=0){
			arr[i]*=2;
		} else{
			arr[i]+=10;
		}
	}
	
	printf("\nThe new value of elements is: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

