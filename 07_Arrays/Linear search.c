/*
WAP: Linear search
Date: 01-oct-2025
*/

#include<stdio.h>
#include<stdbool.h>

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
	
	int x, index;
	bool flag = false;
	printf("Enter the value of search element: ");
	scanf("%d", &x);
	
	for(i=0;i<n;i++){
		if(x==arr[i]){
			index = i+1;
			flag=true;
			break;
		}
	}
	
	if(flag==true){
		printf("\nThe given value %d is found in the array!, at %d index.", x, index);
	} else{
		printf("\nThe given value %d is not found in the array!", x);
	}
	
	return 0;
}

