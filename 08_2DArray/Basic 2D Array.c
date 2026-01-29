/*
WAP: Basic 2D Array
Date: 03-oct-2025
*/

#include<stdio.h>

int main()
{
	int i, j, arr[2][2]={{1,2},{3,4}};  //Initializing value in 2D Array
	//Printing the values
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

