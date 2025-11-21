/*
WAP: Pattern print Type 2
* * * *
* * *
* *
*
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, j=4;
	for(i=1;i<=4;i++){
		for(j=4;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

