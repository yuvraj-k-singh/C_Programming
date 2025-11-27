/*
WAP: Pattern print Type 8
    *
   **
  ***
 ****
*****
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i, j, k;
	for(i=1;i<=5;i++){
		for(k=5;k>i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

